/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_MONITOR_GENERATED_TRACERS_H
#define TRACE_MONITOR_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_HANDLE_HMP_COMMAND_EVENT;
extern TraceEvent _TRACE_MONITOR_PROTOCOL_EVENT_HANDLER_EVENT;
extern TraceEvent _TRACE_MONITOR_PROTOCOL_EVENT_EMIT_EVENT;
extern TraceEvent _TRACE_MONITOR_PROTOCOL_EVENT_QUEUE_EVENT;
extern TraceEvent _TRACE_MONITOR_SUSPEND_EVENT;
extern TraceEvent _TRACE_MONITOR_QMP_IN_BAND_ENQUEUE_EVENT;
extern TraceEvent _TRACE_MONITOR_QMP_IN_BAND_DEQUEUE_EVENT;
extern TraceEvent _TRACE_MONITOR_QMP_CMD_IN_BAND_EVENT;
extern TraceEvent _TRACE_MONITOR_QMP_ERR_IN_BAND_EVENT;
extern TraceEvent _TRACE_MONITOR_QMP_CMD_OUT_OF_BAND_EVENT;
extern TraceEvent _TRACE_MONITOR_QMP_RESPOND_EVENT;
extern TraceEvent _TRACE_HANDLE_QMP_COMMAND_EVENT;
extern uint16_t _TRACE_HANDLE_HMP_COMMAND_DSTATE;
extern uint16_t _TRACE_MONITOR_PROTOCOL_EVENT_HANDLER_DSTATE;
extern uint16_t _TRACE_MONITOR_PROTOCOL_EVENT_EMIT_DSTATE;
extern uint16_t _TRACE_MONITOR_PROTOCOL_EVENT_QUEUE_DSTATE;
extern uint16_t _TRACE_MONITOR_SUSPEND_DSTATE;
extern uint16_t _TRACE_MONITOR_QMP_IN_BAND_ENQUEUE_DSTATE;
extern uint16_t _TRACE_MONITOR_QMP_IN_BAND_DEQUEUE_DSTATE;
extern uint16_t _TRACE_MONITOR_QMP_CMD_IN_BAND_DSTATE;
extern uint16_t _TRACE_MONITOR_QMP_ERR_IN_BAND_DSTATE;
extern uint16_t _TRACE_MONITOR_QMP_CMD_OUT_OF_BAND_DSTATE;
extern uint16_t _TRACE_MONITOR_QMP_RESPOND_DSTATE;
extern uint16_t _TRACE_HANDLE_QMP_COMMAND_DSTATE;
#define TRACE_HANDLE_HMP_COMMAND_ENABLED 1
#define TRACE_MONITOR_PROTOCOL_EVENT_HANDLER_ENABLED 1
#define TRACE_MONITOR_PROTOCOL_EVENT_EMIT_ENABLED 1
#define TRACE_MONITOR_PROTOCOL_EVENT_QUEUE_ENABLED 1
#define TRACE_MONITOR_SUSPEND_ENABLED 1
#define TRACE_MONITOR_QMP_IN_BAND_ENQUEUE_ENABLED 1
#define TRACE_MONITOR_QMP_IN_BAND_DEQUEUE_ENABLED 1
#define TRACE_MONITOR_QMP_CMD_IN_BAND_ENABLED 1
#define TRACE_MONITOR_QMP_ERR_IN_BAND_ENABLED 1
#define TRACE_MONITOR_QMP_CMD_OUT_OF_BAND_ENABLED 1
#define TRACE_MONITOR_QMP_RESPOND_ENABLED 1
#define TRACE_HANDLE_QMP_COMMAND_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_HANDLE_HMP_COMMAND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_HANDLE_HMP_COMMAND) || \
    false)

static inline void _nocheck__trace_handle_hmp_command(void * mon, const char * cmdline)
{
    if (trace_event_get_state(TRACE_HANDLE_HMP_COMMAND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:handle_hmp_command " "mon %p cmdline: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , mon, cmdline);
#line 64 "trace/trace-monitor.h"
        } else {
#line 4 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("handle_hmp_command " "mon %p cmdline: %s" "\n", mon, cmdline);
#line 68 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_handle_hmp_command(void * mon, const char * cmdline)
{
    if (true) {
        _nocheck__trace_handle_hmp_command(mon, cmdline);
    }
}

#define TRACE_MONITOR_PROTOCOL_EVENT_HANDLER_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MONITOR_PROTOCOL_EVENT_HANDLER) || \
    false)

static inline void _nocheck__trace_monitor_protocol_event_handler(uint32_t event, void * qdict)
{
    if (trace_event_get_state(TRACE_MONITOR_PROTOCOL_EVENT_HANDLER) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:monitor_protocol_event_handler " "event=%d data=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , event, qdict);
#line 95 "trace/trace-monitor.h"
        } else {
#line 7 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("monitor_protocol_event_handler " "event=%d data=%p" "\n", event, qdict);
#line 99 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_monitor_protocol_event_handler(uint32_t event, void * qdict)
{
    if (true) {
        _nocheck__trace_monitor_protocol_event_handler(event, qdict);
    }
}

#define TRACE_MONITOR_PROTOCOL_EVENT_EMIT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MONITOR_PROTOCOL_EVENT_EMIT) || \
    false)

static inline void _nocheck__trace_monitor_protocol_event_emit(uint32_t event, void * data)
{
    if (trace_event_get_state(TRACE_MONITOR_PROTOCOL_EVENT_EMIT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:monitor_protocol_event_emit " "event=%d data=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , event, data);
#line 126 "trace/trace-monitor.h"
        } else {
#line 8 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("monitor_protocol_event_emit " "event=%d data=%p" "\n", event, data);
#line 130 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_monitor_protocol_event_emit(uint32_t event, void * data)
{
    if (true) {
        _nocheck__trace_monitor_protocol_event_emit(event, data);
    }
}

#define TRACE_MONITOR_PROTOCOL_EVENT_QUEUE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MONITOR_PROTOCOL_EVENT_QUEUE) || \
    false)

static inline void _nocheck__trace_monitor_protocol_event_queue(uint32_t event, void * qdict, uint64_t rate)
{
    if (trace_event_get_state(TRACE_MONITOR_PROTOCOL_EVENT_QUEUE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:monitor_protocol_event_queue " "event=%d data=%p rate=%" PRId64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , event, qdict, rate);
#line 157 "trace/trace-monitor.h"
        } else {
#line 9 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("monitor_protocol_event_queue " "event=%d data=%p rate=%" PRId64 "\n", event, qdict, rate);
#line 161 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_monitor_protocol_event_queue(uint32_t event, void * qdict, uint64_t rate)
{
    if (true) {
        _nocheck__trace_monitor_protocol_event_queue(event, qdict, rate);
    }
}

#define TRACE_MONITOR_SUSPEND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MONITOR_SUSPEND) || \
    false)

static inline void _nocheck__trace_monitor_suspend(void * ptr, int cnt)
{
    if (trace_event_get_state(TRACE_MONITOR_SUSPEND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:monitor_suspend " "mon %p: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , ptr, cnt);
#line 188 "trace/trace-monitor.h"
        } else {
#line 10 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("monitor_suspend " "mon %p: %d" "\n", ptr, cnt);
#line 192 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_monitor_suspend(void * ptr, int cnt)
{
    if (true) {
        _nocheck__trace_monitor_suspend(ptr, cnt);
    }
}

#define TRACE_MONITOR_QMP_IN_BAND_ENQUEUE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MONITOR_QMP_IN_BAND_ENQUEUE) || \
    false)

static inline void _nocheck__trace_monitor_qmp_in_band_enqueue(void * req, void * mon, unsigned len)
{
    if (trace_event_get_state(TRACE_MONITOR_QMP_IN_BAND_ENQUEUE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:monitor_qmp_in_band_enqueue " "%p mon %p len %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , req, mon, len);
#line 219 "trace/trace-monitor.h"
        } else {
#line 13 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("monitor_qmp_in_band_enqueue " "%p mon %p len %u" "\n", req, mon, len);
#line 223 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_monitor_qmp_in_band_enqueue(void * req, void * mon, unsigned len)
{
    if (true) {
        _nocheck__trace_monitor_qmp_in_band_enqueue(req, mon, len);
    }
}

#define TRACE_MONITOR_QMP_IN_BAND_DEQUEUE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MONITOR_QMP_IN_BAND_DEQUEUE) || \
    false)

static inline void _nocheck__trace_monitor_qmp_in_band_dequeue(void * req, unsigned len)
{
    if (trace_event_get_state(TRACE_MONITOR_QMP_IN_BAND_DEQUEUE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:monitor_qmp_in_band_dequeue " "%p len %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , req, len);
#line 250 "trace/trace-monitor.h"
        } else {
#line 14 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("monitor_qmp_in_band_dequeue " "%p len %u" "\n", req, len);
#line 254 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_monitor_qmp_in_band_dequeue(void * req, unsigned len)
{
    if (true) {
        _nocheck__trace_monitor_qmp_in_band_dequeue(req, len);
    }
}

#define TRACE_MONITOR_QMP_CMD_IN_BAND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MONITOR_QMP_CMD_IN_BAND) || \
    false)

static inline void _nocheck__trace_monitor_qmp_cmd_in_band(const char * id)
{
    if (trace_event_get_state(TRACE_MONITOR_QMP_CMD_IN_BAND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:monitor_qmp_cmd_in_band " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id);
#line 281 "trace/trace-monitor.h"
        } else {
#line 15 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("monitor_qmp_cmd_in_band " "%s" "\n", id);
#line 285 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_monitor_qmp_cmd_in_band(const char * id)
{
    if (true) {
        _nocheck__trace_monitor_qmp_cmd_in_band(id);
    }
}

#define TRACE_MONITOR_QMP_ERR_IN_BAND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MONITOR_QMP_ERR_IN_BAND) || \
    false)

static inline void _nocheck__trace_monitor_qmp_err_in_band(const char * desc)
{
    if (trace_event_get_state(TRACE_MONITOR_QMP_ERR_IN_BAND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:monitor_qmp_err_in_band " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , desc);
#line 312 "trace/trace-monitor.h"
        } else {
#line 16 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("monitor_qmp_err_in_band " "%s" "\n", desc);
#line 316 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_monitor_qmp_err_in_band(const char * desc)
{
    if (true) {
        _nocheck__trace_monitor_qmp_err_in_band(desc);
    }
}

#define TRACE_MONITOR_QMP_CMD_OUT_OF_BAND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MONITOR_QMP_CMD_OUT_OF_BAND) || \
    false)

static inline void _nocheck__trace_monitor_qmp_cmd_out_of_band(const char * id)
{
    if (trace_event_get_state(TRACE_MONITOR_QMP_CMD_OUT_OF_BAND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:monitor_qmp_cmd_out_of_band " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id);
#line 343 "trace/trace-monitor.h"
        } else {
#line 17 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("monitor_qmp_cmd_out_of_band " "%s" "\n", id);
#line 347 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_monitor_qmp_cmd_out_of_band(const char * id)
{
    if (true) {
        _nocheck__trace_monitor_qmp_cmd_out_of_band(id);
    }
}

#define TRACE_MONITOR_QMP_RESPOND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MONITOR_QMP_RESPOND) || \
    false)

static inline void _nocheck__trace_monitor_qmp_respond(void * mon, const char * json)
{
    if (trace_event_get_state(TRACE_MONITOR_QMP_RESPOND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:monitor_qmp_respond " "mon %p resp: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , mon, json);
#line 374 "trace/trace-monitor.h"
        } else {
#line 18 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("monitor_qmp_respond " "mon %p resp: %s" "\n", mon, json);
#line 378 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_monitor_qmp_respond(void * mon, const char * json)
{
    if (true) {
        _nocheck__trace_monitor_qmp_respond(mon, json);
    }
}

#define TRACE_HANDLE_QMP_COMMAND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_HANDLE_QMP_COMMAND) || \
    false)

static inline void _nocheck__trace_handle_qmp_command(void * mon, const char * req)
{
    if (trace_event_get_state(TRACE_HANDLE_QMP_COMMAND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("%d@%zu.%06zu:handle_qmp_command " "mon %p req: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , mon, req);
#line 405 "trace/trace-monitor.h"
        } else {
#line 19 "/home/anna/AMDSEV/qemu/monitor/trace-events"
            qemu_log("handle_qmp_command " "mon %p req: %s" "\n", mon, req);
#line 409 "trace/trace-monitor.h"
        }
    }
}

static inline void trace_handle_qmp_command(void * mon, const char * req)
{
    if (true) {
        _nocheck__trace_handle_qmp_command(mon, req);
    }
}
#endif /* TRACE_MONITOR_GENERATED_TRACERS_H */
