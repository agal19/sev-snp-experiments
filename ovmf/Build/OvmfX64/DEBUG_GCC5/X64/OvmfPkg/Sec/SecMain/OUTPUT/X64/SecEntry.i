;------------------------------------------------------------------------------
;*
;*   Copyright (c) 2006 - 2013, Intel Corporation. All rights reserved.<BR>
;*   SPDX-License-Identifier: BSD-2-Clause-Patent
;*
;*    CpuAsm.asm
;*
;*   Abstract:
;*
;------------------------------------------------------------------------------

#include <Base.h>
;------------------------------------------------------------------------------
; @file
; TDX Common defitions used by the APs in mailbox
;
; Copyright (c) 2021, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

CommandOffset                             equ       00h
ApicidOffset                              equ       04h
WakeupVectorOffset                        equ       08h
OSArgsOffset                              equ       10h
FirmwareArgsOffset                        equ       800h
WakeupArgsRelocatedMailBox                equ       800h
AcceptPageArgsPhysicalStart               equ       800h
AcceptPageArgsPhysicalEnd                 equ       808h
AcceptPageArgsChunkSize                   equ       810h
AcceptPageArgsPageSize                    equ       818h
CpuArrivalOffset                          equ       900h
CpusExitingOffset                         equ       0a00h
TalliesOffset                             equ       0a08h
ErrorsOffset                              equ       0e08h

SIZE_4KB                                  equ       1000h
SIZE_2MB                                  equ       200000h
SIZE_1GB                                  equ       40000000h

PAGE_ACCEPT_LEVEL_4K                      equ       0
PAGE_ACCEPT_LEVEL_2M                      equ       1
PAGE_ACCEPT_LEVEL_1G                      equ       2

TDX_PAGE_ALREADY_ACCEPTED                 equ       0x00000b0a
TDX_PAGE_SIZE_MISMATCH                    equ       0xc0000b0b

; Errors of APs in Mailbox
ERROR_NON                                 equ       0
ERROR_INVALID_ACCEPT_PAGE_SIZE            equ       1
ERROR_ACCEPT_PAGE_ERROR                   equ       2
ERROR_INVALID_FALLBACK_PAGE_LEVEL         equ       3

MpProtectedModeWakeupCommandNoop          equ       0
MpProtectedModeWakeupCommandWakeup        equ       1
MpProtectedModeWakeupCommandSleep         equ       2
MpProtectedModeWakeupCommandAcceptPages   equ       3

MailboxApicIdInvalid                      equ       0xffffffff
MailboxApicidBroadcast                    equ       0xfffffffe

%define TDCALL_TDINFO                          0x1
%define TDCALL_TDACCEPTPAGE                    0x6


DEFAULT REL
SECTION .text

extern ASM_PFX(SecCoreStartupWithStack)

%macro  tdcall  0
  db  0x66, 0x0f, 0x01, 0xcc
%endmacro

;
; SecCore Entry Point
;
; Processor is in flat protected mode
;
; @param[in]  RAX   Initial value of the EAX register (BIST: Built-in Self Test)
; @param[in]  DI    'BP': boot-strap processor, or 'AP': application processor
; @param[in]  RBP   Pointer to the start of the Boot Firmware Volume
; @param[in]  DS    Selector allowing flat access to all addresses
; @param[in]  ES    Selector allowing flat access to all addresses
; @param[in]  FS    Selector allowing flat access to all addresses
; @param[in]  GS    Selector allowing flat access to all addresses
; @param[in]  SS    Selector allowing flat access to all addresses
;
; @return     None  This routine does not return
;
global ASM_PFX(_ModuleEntryPoint)
ASM_PFX(_ModuleEntryPoint):

    ;
    ; Guest type is stored in OVMF_WORK_AREA
    ;
    %define OVMF_WORK_AREA        FixedPcdGet32 (PcdOvmfWorkAreaBase)
    %define VM_GUEST_TYPE_TDX     2
    mov     eax, OVMF_WORK_AREA
    cmp     byte[eax], VM_GUEST_TYPE_TDX
    jne     InitStack

    mov     rax, TDCALL_TDINFO
    tdcall

    ;
    ; R8  [31:0]  NUM_VCPUS
    ;     [63:32] MAX_VCPUS
    ; R9  [31:0]  VCPU_INDEX
    ; Td Guest set the VCPU0 as the BSP, others are the APs
    ; APs jump to spinloop and get released by DXE's MpInitLib
    ;
    mov     rax, r9
    and     rax, 0xffff
    test    rax, rax
    jne     ParkAp

InitStack:

    ;
    ; Fill the temporary RAM with the initial stack value.
    ; The loop below will seed the heap as well, but that's harmless.
    ;
    mov     rax, (FixedPcdGet32 (PcdInitValueInTempStack) << 32) | FixedPcdGet32 (PcdInitValueInTempStack)
                                                              ; qword to store
    mov     rdi, FixedPcdGet32 (PcdOvmfSecPeiTempRamBase)     ; base address,
                                                              ;   relative to
                                                              ;   ES
    mov     rcx, FixedPcdGet32 (PcdOvmfSecPeiTempRamSize) / 8 ; qword count
    cld                                                       ; store from base
                                                              ;   up
    rep stosq

    ;
    ; Load temporary RAM stack based on PCDs
    ;
    %define SEC_TOP_OF_STACK (FixedPcdGet32 (PcdOvmfSecPeiTempRamBase) + \
                          FixedPcdGet32 (PcdOvmfSecPeiTempRamSize))
    mov     rsp, SEC_TOP_OF_STACK
    nop

    ;
    ; Setup parameters and call SecCoreStartupWithStack
    ;   rcx: BootFirmwareVolumePtr
    ;   rdx: TopOfCurrentStack
    ;
    mov     rcx, rbp
    mov     rdx, rsp
    sub     rsp, 0x20
    call    ASM_PFX(SecCoreStartupWithStack)

    ;
    ; Note: BSP never gets here. APs will be unblocked by DXE
    ;
    ; R8  [31:0]  NUM_VCPUS
    ;     [63:32] MAX_VCPUS
    ; R9  [31:0]  VCPU_INDEX
    ;
ParkAp:

    mov     rbp,  r9

.do_wait_loop:
    mov     rsp, FixedPcdGet32 (PcdOvmfSecGhcbBackupBase)

    ;
    ; register itself in [rsp + CpuArrivalOffset]
    ;
    mov       rax, 1
    lock xadd dword [rsp + CpuArrivalOffset], eax
    inc       eax

.check_arrival_cnt:
    cmp       eax, r8d
    je        .check_command
    mov       eax, dword[rsp + CpuArrivalOffset]
    jmp       .check_arrival_cnt

.check_command:
    mov     eax, dword[rsp + CommandOffset]
    cmp     eax, MpProtectedModeWakeupCommandNoop
    je      .check_command

    cmp     eax, MpProtectedModeWakeupCommandWakeup
    je      .do_wakeup

    ; Don't support this command, so ignore
    jmp     .check_command

.do_wakeup:
    ;
    ; BSP sets these variables before unblocking APs
    ;   RAX:  WakeupVectorOffset
    ;   RBX:  Relocated mailbox address
    ;   RBP:  vCpuId
    ;
    mov     rax, 0
    mov     eax, dword[rsp + WakeupVectorOffset]
    mov     rbx, [rsp + WakeupArgsRelocatedMailBox]
    nop
    jmp     rax
    jmp     $
