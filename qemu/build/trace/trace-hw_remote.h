/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_REMOTE_GENERATED_TRACERS_H
#define TRACE_HW_REMOTE_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_MPQEMU_SEND_IO_ERROR_EVENT;
extern TraceEvent _TRACE_MPQEMU_RECV_IO_ERROR_EVENT;
extern uint16_t _TRACE_MPQEMU_SEND_IO_ERROR_DSTATE;
extern uint16_t _TRACE_MPQEMU_RECV_IO_ERROR_DSTATE;
#define TRACE_MPQEMU_SEND_IO_ERROR_ENABLED 1
#define TRACE_MPQEMU_RECV_IO_ERROR_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_MPQEMU_SEND_IO_ERROR_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MPQEMU_SEND_IO_ERROR) || \
    false)

static inline void _nocheck__trace_mpqemu_send_io_error(int cmd, int size, int nfds)
{
    if (trace_event_get_state(TRACE_MPQEMU_SEND_IO_ERROR) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 3 "/home/anna/AMDSEV/qemu/hw/remote/trace-events"
            qemu_log("%d@%zu.%06zu:mpqemu_send_io_error " "send command %d size %d, %d file descriptors to remote process" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cmd, size, nfds);
#line 34 "trace/trace-hw_remote.h"
        } else {
#line 3 "/home/anna/AMDSEV/qemu/hw/remote/trace-events"
            qemu_log("mpqemu_send_io_error " "send command %d size %d, %d file descriptors to remote process" "\n", cmd, size, nfds);
#line 38 "trace/trace-hw_remote.h"
        }
    }
}

static inline void trace_mpqemu_send_io_error(int cmd, int size, int nfds)
{
    if (true) {
        _nocheck__trace_mpqemu_send_io_error(cmd, size, nfds);
    }
}

#define TRACE_MPQEMU_RECV_IO_ERROR_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MPQEMU_RECV_IO_ERROR) || \
    false)

static inline void _nocheck__trace_mpqemu_recv_io_error(int cmd, int size, int nfds)
{
    if (trace_event_get_state(TRACE_MPQEMU_RECV_IO_ERROR) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/home/anna/AMDSEV/qemu/hw/remote/trace-events"
            qemu_log("%d@%zu.%06zu:mpqemu_recv_io_error " "failed to receive %d size %d, %d file descriptors to remote process" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cmd, size, nfds);
#line 65 "trace/trace-hw_remote.h"
        } else {
#line 4 "/home/anna/AMDSEV/qemu/hw/remote/trace-events"
            qemu_log("mpqemu_recv_io_error " "failed to receive %d size %d, %d file descriptors to remote process" "\n", cmd, size, nfds);
#line 69 "trace/trace-hw_remote.h"
        }
    }
}

static inline void trace_mpqemu_recv_io_error(int cmd, int size, int nfds)
{
    if (true) {
        _nocheck__trace_mpqemu_recv_io_error(cmd, size, nfds);
    }
}
#endif /* TRACE_HW_REMOTE_GENERATED_TRACERS_H */
