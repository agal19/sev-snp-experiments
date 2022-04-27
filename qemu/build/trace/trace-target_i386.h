/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_TARGET_I386_GENERATED_TRACERS_H
#define TRACE_TARGET_I386_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_KVM_SEV_INIT_EVENT;
extern TraceEvent _TRACE_KVM_MEMCRYPT_REGISTER_REGION_EVENT;
extern TraceEvent _TRACE_KVM_MEMCRYPT_UNREGISTER_REGION_EVENT;
extern TraceEvent _TRACE_KVM_SEV_CHANGE_STATE_EVENT;
extern TraceEvent _TRACE_KVM_SEV_LAUNCH_START_EVENT;
extern TraceEvent _TRACE_KVM_SEV_LAUNCH_UPDATE_DATA_EVENT;
extern TraceEvent _TRACE_KVM_SEV_LAUNCH_MEASUREMENT_EVENT;
extern TraceEvent _TRACE_KVM_SEV_LAUNCH_FINISH_EVENT;
extern TraceEvent _TRACE_KVM_SEV_LAUNCH_SECRET_EVENT;
extern TraceEvent _TRACE_KVM_SEV_ATTESTATION_REPORT_EVENT;
extern TraceEvent _TRACE_KVM_SEV_SNP_LAUNCH_START_EVENT;
extern TraceEvent _TRACE_KVM_SEV_SNP_LAUNCH_UPDATE_EVENT;
extern TraceEvent _TRACE_KVM_SEV_SNP_LAUNCH_FINISH_EVENT;
extern uint16_t _TRACE_KVM_SEV_INIT_DSTATE;
extern uint16_t _TRACE_KVM_MEMCRYPT_REGISTER_REGION_DSTATE;
extern uint16_t _TRACE_KVM_MEMCRYPT_UNREGISTER_REGION_DSTATE;
extern uint16_t _TRACE_KVM_SEV_CHANGE_STATE_DSTATE;
extern uint16_t _TRACE_KVM_SEV_LAUNCH_START_DSTATE;
extern uint16_t _TRACE_KVM_SEV_LAUNCH_UPDATE_DATA_DSTATE;
extern uint16_t _TRACE_KVM_SEV_LAUNCH_MEASUREMENT_DSTATE;
extern uint16_t _TRACE_KVM_SEV_LAUNCH_FINISH_DSTATE;
extern uint16_t _TRACE_KVM_SEV_LAUNCH_SECRET_DSTATE;
extern uint16_t _TRACE_KVM_SEV_ATTESTATION_REPORT_DSTATE;
extern uint16_t _TRACE_KVM_SEV_SNP_LAUNCH_START_DSTATE;
extern uint16_t _TRACE_KVM_SEV_SNP_LAUNCH_UPDATE_DSTATE;
extern uint16_t _TRACE_KVM_SEV_SNP_LAUNCH_FINISH_DSTATE;
#define TRACE_KVM_SEV_INIT_ENABLED 1
#define TRACE_KVM_MEMCRYPT_REGISTER_REGION_ENABLED 1
#define TRACE_KVM_MEMCRYPT_UNREGISTER_REGION_ENABLED 1
#define TRACE_KVM_SEV_CHANGE_STATE_ENABLED 1
#define TRACE_KVM_SEV_LAUNCH_START_ENABLED 1
#define TRACE_KVM_SEV_LAUNCH_UPDATE_DATA_ENABLED 1
#define TRACE_KVM_SEV_LAUNCH_MEASUREMENT_ENABLED 1
#define TRACE_KVM_SEV_LAUNCH_FINISH_ENABLED 1
#define TRACE_KVM_SEV_LAUNCH_SECRET_ENABLED 1
#define TRACE_KVM_SEV_ATTESTATION_REPORT_ENABLED 1
#define TRACE_KVM_SEV_SNP_LAUNCH_START_ENABLED 1
#define TRACE_KVM_SEV_SNP_LAUNCH_UPDATE_ENABLED 1
#define TRACE_KVM_SEV_SNP_LAUNCH_FINISH_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_KVM_SEV_INIT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SEV_INIT) || \
    false)

static inline void _nocheck__trace_kvm_sev_init(const char * type, uint64_t flags)
{
    if (trace_event_get_state(TRACE_KVM_SEV_INIT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_sev_init " "type %s flags 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , type, flags);
#line 67 "trace/trace-target_i386.h"
        } else {
#line 4 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_sev_init " "type %s flags 0x%" PRIx64 "\n", type, flags);
#line 71 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_sev_init(const char * type, uint64_t flags)
{
    if (true) {
        _nocheck__trace_kvm_sev_init(type, flags);
    }
}

#define TRACE_KVM_MEMCRYPT_REGISTER_REGION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_MEMCRYPT_REGISTER_REGION) || \
    false)

static inline void _nocheck__trace_kvm_memcrypt_register_region(void * addr, size_t len)
{
    if (trace_event_get_state(TRACE_KVM_MEMCRYPT_REGISTER_REGION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_memcrypt_register_region " "addr %p len 0x%zx" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, len);
#line 98 "trace/trace-target_i386.h"
        } else {
#line 5 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_memcrypt_register_region " "addr %p len 0x%zx" "\n", addr, len);
#line 102 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_memcrypt_register_region(void * addr, size_t len)
{
    if (true) {
        _nocheck__trace_kvm_memcrypt_register_region(addr, len);
    }
}

#define TRACE_KVM_MEMCRYPT_UNREGISTER_REGION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_MEMCRYPT_UNREGISTER_REGION) || \
    false)

static inline void _nocheck__trace_kvm_memcrypt_unregister_region(void * addr, size_t len)
{
    if (trace_event_get_state(TRACE_KVM_MEMCRYPT_UNREGISTER_REGION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_memcrypt_unregister_region " "addr %p len 0x%zx" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, len);
#line 129 "trace/trace-target_i386.h"
        } else {
#line 6 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_memcrypt_unregister_region " "addr %p len 0x%zx" "\n", addr, len);
#line 133 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_memcrypt_unregister_region(void * addr, size_t len)
{
    if (true) {
        _nocheck__trace_kvm_memcrypt_unregister_region(addr, len);
    }
}

#define TRACE_KVM_SEV_CHANGE_STATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SEV_CHANGE_STATE) || \
    false)

static inline void _nocheck__trace_kvm_sev_change_state(const char * old, const char * new)
{
    if (trace_event_get_state(TRACE_KVM_SEV_CHANGE_STATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_sev_change_state " "%s -> %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , old, new);
#line 160 "trace/trace-target_i386.h"
        } else {
#line 7 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_sev_change_state " "%s -> %s" "\n", old, new);
#line 164 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_sev_change_state(const char * old, const char * new)
{
    if (true) {
        _nocheck__trace_kvm_sev_change_state(old, new);
    }
}

#define TRACE_KVM_SEV_LAUNCH_START_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SEV_LAUNCH_START) || \
    false)

static inline void _nocheck__trace_kvm_sev_launch_start(int policy, void * session, void * pdh)
{
    if (trace_event_get_state(TRACE_KVM_SEV_LAUNCH_START) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_sev_launch_start " "policy 0x%x session %p pdh %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , policy, session, pdh);
#line 191 "trace/trace-target_i386.h"
        } else {
#line 8 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_sev_launch_start " "policy 0x%x session %p pdh %p" "\n", policy, session, pdh);
#line 195 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_sev_launch_start(int policy, void * session, void * pdh)
{
    if (true) {
        _nocheck__trace_kvm_sev_launch_start(policy, session, pdh);
    }
}

#define TRACE_KVM_SEV_LAUNCH_UPDATE_DATA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SEV_LAUNCH_UPDATE_DATA) || \
    false)

static inline void _nocheck__trace_kvm_sev_launch_update_data(void * addr, uint64_t len)
{
    if (trace_event_get_state(TRACE_KVM_SEV_LAUNCH_UPDATE_DATA) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_sev_launch_update_data " "addr %p len 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, len);
#line 222 "trace/trace-target_i386.h"
        } else {
#line 9 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_sev_launch_update_data " "addr %p len 0x%" PRIx64 "\n", addr, len);
#line 226 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_sev_launch_update_data(void * addr, uint64_t len)
{
    if (true) {
        _nocheck__trace_kvm_sev_launch_update_data(addr, len);
    }
}

#define TRACE_KVM_SEV_LAUNCH_MEASUREMENT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SEV_LAUNCH_MEASUREMENT) || \
    false)

static inline void _nocheck__trace_kvm_sev_launch_measurement(const char * value)
{
    if (trace_event_get_state(TRACE_KVM_SEV_LAUNCH_MEASUREMENT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_sev_launch_measurement " "data %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , value);
#line 253 "trace/trace-target_i386.h"
        } else {
#line 10 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_sev_launch_measurement " "data %s" "\n", value);
#line 257 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_sev_launch_measurement(const char * value)
{
    if (true) {
        _nocheck__trace_kvm_sev_launch_measurement(value);
    }
}

#define TRACE_KVM_SEV_LAUNCH_FINISH_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SEV_LAUNCH_FINISH) || \
    false)

static inline void _nocheck__trace_kvm_sev_launch_finish(void)
{
    if (trace_event_get_state(TRACE_KVM_SEV_LAUNCH_FINISH) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_sev_launch_finish " "" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 284 "trace/trace-target_i386.h"
        } else {
#line 11 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_sev_launch_finish " "" "\n");
#line 288 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_sev_launch_finish(void)
{
    if (true) {
        _nocheck__trace_kvm_sev_launch_finish();
    }
}

#define TRACE_KVM_SEV_LAUNCH_SECRET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SEV_LAUNCH_SECRET) || \
    false)

static inline void _nocheck__trace_kvm_sev_launch_secret(uint64_t hpa, uint64_t hva, uint64_t secret, int len)
{
    if (trace_event_get_state(TRACE_KVM_SEV_LAUNCH_SECRET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_sev_launch_secret " "hpa 0x%" PRIx64 " hva 0x%" PRIx64 " data 0x%" PRIx64 " len %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , hpa, hva, secret, len);
#line 315 "trace/trace-target_i386.h"
        } else {
#line 12 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_sev_launch_secret " "hpa 0x%" PRIx64 " hva 0x%" PRIx64 " data 0x%" PRIx64 " len %d" "\n", hpa, hva, secret, len);
#line 319 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_sev_launch_secret(uint64_t hpa, uint64_t hva, uint64_t secret, int len)
{
    if (true) {
        _nocheck__trace_kvm_sev_launch_secret(hpa, hva, secret, len);
    }
}

#define TRACE_KVM_SEV_ATTESTATION_REPORT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SEV_ATTESTATION_REPORT) || \
    false)

static inline void _nocheck__trace_kvm_sev_attestation_report(const char * mnonce, const char * data)
{
    if (trace_event_get_state(TRACE_KVM_SEV_ATTESTATION_REPORT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_sev_attestation_report " "mnonce %s data %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , mnonce, data);
#line 346 "trace/trace-target_i386.h"
        } else {
#line 13 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_sev_attestation_report " "mnonce %s data %s" "\n", mnonce, data);
#line 350 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_sev_attestation_report(const char * mnonce, const char * data)
{
    if (true) {
        _nocheck__trace_kvm_sev_attestation_report(mnonce, data);
    }
}

#define TRACE_KVM_SEV_SNP_LAUNCH_START_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SEV_SNP_LAUNCH_START) || \
    false)

static inline void _nocheck__trace_kvm_sev_snp_launch_start(uint64_t policy, char * gosvw)
{
    if (trace_event_get_state(TRACE_KVM_SEV_SNP_LAUNCH_START) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_sev_snp_launch_start " "policy 0x%" PRIx64 " gosvw %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , policy, gosvw);
#line 377 "trace/trace-target_i386.h"
        } else {
#line 14 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_sev_snp_launch_start " "policy 0x%" PRIx64 " gosvw %s" "\n", policy, gosvw);
#line 381 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_sev_snp_launch_start(uint64_t policy, char * gosvw)
{
    if (true) {
        _nocheck__trace_kvm_sev_snp_launch_start(policy, gosvw);
    }
}

#define TRACE_KVM_SEV_SNP_LAUNCH_UPDATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SEV_SNP_LAUNCH_UPDATE) || \
    false)

static inline void _nocheck__trace_kvm_sev_snp_launch_update(void * addr, uint32_t gpa, uint64_t len, const char * type)
{
    if (trace_event_get_state(TRACE_KVM_SEV_SNP_LAUNCH_UPDATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_sev_snp_launch_update " "addr %p gpa 0x%x len 0x%" PRIx64 " (%s page)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, gpa, len, type);
#line 408 "trace/trace-target_i386.h"
        } else {
#line 15 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_sev_snp_launch_update " "addr %p gpa 0x%x len 0x%" PRIx64 " (%s page)" "\n", addr, gpa, len, type);
#line 412 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_sev_snp_launch_update(void * addr, uint32_t gpa, uint64_t len, const char * type)
{
    if (true) {
        _nocheck__trace_kvm_sev_snp_launch_update(addr, gpa, len, type);
    }
}

#define TRACE_KVM_SEV_SNP_LAUNCH_FINISH_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SEV_SNP_LAUNCH_FINISH) || \
    false)

static inline void _nocheck__trace_kvm_sev_snp_launch_finish(char * id_block, char * id_auth, char * host_data)
{
    if (trace_event_get_state(TRACE_KVM_SEV_SNP_LAUNCH_FINISH) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_sev_snp_launch_finish " "id_block %s id_auth %s host_data %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id_block, id_auth, host_data);
#line 439 "trace/trace-target_i386.h"
        } else {
#line 16 "/home/anna/AMDSEV/qemu/target/i386/trace-events"
            qemu_log("kvm_sev_snp_launch_finish " "id_block %s id_auth %s host_data %s" "\n", id_block, id_auth, host_data);
#line 443 "trace/trace-target_i386.h"
        }
    }
}

static inline void trace_kvm_sev_snp_launch_finish(char * id_block, char * id_auth, char * host_data)
{
    if (true) {
        _nocheck__trace_kvm_sev_snp_launch_finish(id_block, id_auth, host_data);
    }
}
#endif /* TRACE_TARGET_I386_GENERATED_TRACERS_H */
