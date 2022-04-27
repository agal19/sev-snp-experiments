/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_ssi.h"

uint16_t _TRACE_ASPEED_SMC_FLASH_SET_SEGMENT_DSTATE;
uint16_t _TRACE_ASPEED_SMC_FLASH_READ_DSTATE;
uint16_t _TRACE_ASPEED_SMC_DO_SNOOP_DSTATE;
uint16_t _TRACE_ASPEED_SMC_FLASH_WRITE_DSTATE;
uint16_t _TRACE_ASPEED_SMC_READ_DSTATE;
uint16_t _TRACE_ASPEED_SMC_DMA_CHECKSUM_DSTATE;
uint16_t _TRACE_ASPEED_SMC_DMA_RW_DSTATE;
uint16_t _TRACE_ASPEED_SMC_WRITE_DSTATE;
uint16_t _TRACE_ASPEED_SMC_FLASH_SELECT_DSTATE;
uint16_t _TRACE_NPCM7XX_FIU_ENTER_RESET_DSTATE;
uint16_t _TRACE_NPCM7XX_FIU_HOLD_RESET_DSTATE;
uint16_t _TRACE_NPCM7XX_FIU_SELECT_DSTATE;
uint16_t _TRACE_NPCM7XX_FIU_DESELECT_DSTATE;
uint16_t _TRACE_NPCM7XX_FIU_CTRL_READ_DSTATE;
uint16_t _TRACE_NPCM7XX_FIU_CTRL_WRITE_DSTATE;
uint16_t _TRACE_NPCM7XX_FIU_FLASH_READ_DSTATE;
uint16_t _TRACE_NPCM7XX_FIU_FLASH_WRITE_DSTATE;
TraceEvent _TRACE_ASPEED_SMC_FLASH_SET_SEGMENT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aspeed_smc_flash_set_segment",
    .sstate = TRACE_ASPEED_SMC_FLASH_SET_SEGMENT_ENABLED,
    .dstate = &_TRACE_ASPEED_SMC_FLASH_SET_SEGMENT_DSTATE 
};
TraceEvent _TRACE_ASPEED_SMC_FLASH_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aspeed_smc_flash_read",
    .sstate = TRACE_ASPEED_SMC_FLASH_READ_ENABLED,
    .dstate = &_TRACE_ASPEED_SMC_FLASH_READ_DSTATE 
};
TraceEvent _TRACE_ASPEED_SMC_DO_SNOOP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aspeed_smc_do_snoop",
    .sstate = TRACE_ASPEED_SMC_DO_SNOOP_ENABLED,
    .dstate = &_TRACE_ASPEED_SMC_DO_SNOOP_DSTATE 
};
TraceEvent _TRACE_ASPEED_SMC_FLASH_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aspeed_smc_flash_write",
    .sstate = TRACE_ASPEED_SMC_FLASH_WRITE_ENABLED,
    .dstate = &_TRACE_ASPEED_SMC_FLASH_WRITE_DSTATE 
};
TraceEvent _TRACE_ASPEED_SMC_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aspeed_smc_read",
    .sstate = TRACE_ASPEED_SMC_READ_ENABLED,
    .dstate = &_TRACE_ASPEED_SMC_READ_DSTATE 
};
TraceEvent _TRACE_ASPEED_SMC_DMA_CHECKSUM_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aspeed_smc_dma_checksum",
    .sstate = TRACE_ASPEED_SMC_DMA_CHECKSUM_ENABLED,
    .dstate = &_TRACE_ASPEED_SMC_DMA_CHECKSUM_DSTATE 
};
TraceEvent _TRACE_ASPEED_SMC_DMA_RW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aspeed_smc_dma_rw",
    .sstate = TRACE_ASPEED_SMC_DMA_RW_ENABLED,
    .dstate = &_TRACE_ASPEED_SMC_DMA_RW_DSTATE 
};
TraceEvent _TRACE_ASPEED_SMC_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aspeed_smc_write",
    .sstate = TRACE_ASPEED_SMC_WRITE_ENABLED,
    .dstate = &_TRACE_ASPEED_SMC_WRITE_DSTATE 
};
TraceEvent _TRACE_ASPEED_SMC_FLASH_SELECT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aspeed_smc_flash_select",
    .sstate = TRACE_ASPEED_SMC_FLASH_SELECT_ENABLED,
    .dstate = &_TRACE_ASPEED_SMC_FLASH_SELECT_DSTATE 
};
TraceEvent _TRACE_NPCM7XX_FIU_ENTER_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "npcm7xx_fiu_enter_reset",
    .sstate = TRACE_NPCM7XX_FIU_ENTER_RESET_ENABLED,
    .dstate = &_TRACE_NPCM7XX_FIU_ENTER_RESET_DSTATE 
};
TraceEvent _TRACE_NPCM7XX_FIU_HOLD_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "npcm7xx_fiu_hold_reset",
    .sstate = TRACE_NPCM7XX_FIU_HOLD_RESET_ENABLED,
    .dstate = &_TRACE_NPCM7XX_FIU_HOLD_RESET_DSTATE 
};
TraceEvent _TRACE_NPCM7XX_FIU_SELECT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "npcm7xx_fiu_select",
    .sstate = TRACE_NPCM7XX_FIU_SELECT_ENABLED,
    .dstate = &_TRACE_NPCM7XX_FIU_SELECT_DSTATE 
};
TraceEvent _TRACE_NPCM7XX_FIU_DESELECT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "npcm7xx_fiu_deselect",
    .sstate = TRACE_NPCM7XX_FIU_DESELECT_ENABLED,
    .dstate = &_TRACE_NPCM7XX_FIU_DESELECT_DSTATE 
};
TraceEvent _TRACE_NPCM7XX_FIU_CTRL_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "npcm7xx_fiu_ctrl_read",
    .sstate = TRACE_NPCM7XX_FIU_CTRL_READ_ENABLED,
    .dstate = &_TRACE_NPCM7XX_FIU_CTRL_READ_DSTATE 
};
TraceEvent _TRACE_NPCM7XX_FIU_CTRL_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "npcm7xx_fiu_ctrl_write",
    .sstate = TRACE_NPCM7XX_FIU_CTRL_WRITE_ENABLED,
    .dstate = &_TRACE_NPCM7XX_FIU_CTRL_WRITE_DSTATE 
};
TraceEvent _TRACE_NPCM7XX_FIU_FLASH_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "npcm7xx_fiu_flash_read",
    .sstate = TRACE_NPCM7XX_FIU_FLASH_READ_ENABLED,
    .dstate = &_TRACE_NPCM7XX_FIU_FLASH_READ_DSTATE 
};
TraceEvent _TRACE_NPCM7XX_FIU_FLASH_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "npcm7xx_fiu_flash_write",
    .sstate = TRACE_NPCM7XX_FIU_FLASH_WRITE_ENABLED,
    .dstate = &_TRACE_NPCM7XX_FIU_FLASH_WRITE_DSTATE 
};
TraceEvent *hw_ssi_trace_events[] = {
    &_TRACE_ASPEED_SMC_FLASH_SET_SEGMENT_EVENT,
    &_TRACE_ASPEED_SMC_FLASH_READ_EVENT,
    &_TRACE_ASPEED_SMC_DO_SNOOP_EVENT,
    &_TRACE_ASPEED_SMC_FLASH_WRITE_EVENT,
    &_TRACE_ASPEED_SMC_READ_EVENT,
    &_TRACE_ASPEED_SMC_DMA_CHECKSUM_EVENT,
    &_TRACE_ASPEED_SMC_DMA_RW_EVENT,
    &_TRACE_ASPEED_SMC_WRITE_EVENT,
    &_TRACE_ASPEED_SMC_FLASH_SELECT_EVENT,
    &_TRACE_NPCM7XX_FIU_ENTER_RESET_EVENT,
    &_TRACE_NPCM7XX_FIU_HOLD_RESET_EVENT,
    &_TRACE_NPCM7XX_FIU_SELECT_EVENT,
    &_TRACE_NPCM7XX_FIU_DESELECT_EVENT,
    &_TRACE_NPCM7XX_FIU_CTRL_READ_EVENT,
    &_TRACE_NPCM7XX_FIU_CTRL_WRITE_EVENT,
    &_TRACE_NPCM7XX_FIU_FLASH_READ_EVENT,
    &_TRACE_NPCM7XX_FIU_FLASH_WRITE_EVENT,
  NULL,
};

static void trace_hw_ssi_register_events(void)
{
    trace_event_register_group(hw_ssi_trace_events);
}
trace_init(trace_hw_ssi_register_events)
