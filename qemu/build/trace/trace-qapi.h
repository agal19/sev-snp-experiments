/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QAPI_GENERATED_TRACERS_H
#define TRACE_QAPI_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_VISIT_FREE_EVENT;
extern TraceEvent _TRACE_VISIT_COMPLETE_EVENT;
extern TraceEvent _TRACE_VISIT_START_STRUCT_EVENT;
extern TraceEvent _TRACE_VISIT_CHECK_STRUCT_EVENT;
extern TraceEvent _TRACE_VISIT_END_STRUCT_EVENT;
extern TraceEvent _TRACE_VISIT_START_LIST_EVENT;
extern TraceEvent _TRACE_VISIT_NEXT_LIST_EVENT;
extern TraceEvent _TRACE_VISIT_CHECK_LIST_EVENT;
extern TraceEvent _TRACE_VISIT_END_LIST_EVENT;
extern TraceEvent _TRACE_VISIT_START_ALTERNATE_EVENT;
extern TraceEvent _TRACE_VISIT_END_ALTERNATE_EVENT;
extern TraceEvent _TRACE_VISIT_OPTIONAL_EVENT;
extern TraceEvent _TRACE_VISIT_DEPRECATED_ACCEPT_EVENT;
extern TraceEvent _TRACE_VISIT_DEPRECATED_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_ENUM_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_INT_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_UINT8_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_UINT16_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_UINT32_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_UINT64_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_INT8_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_INT16_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_INT32_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_INT64_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_SIZE_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_BOOL_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_STR_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_NUMBER_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_ANY_EVENT;
extern TraceEvent _TRACE_VISIT_TYPE_NULL_EVENT;
extern uint16_t _TRACE_VISIT_FREE_DSTATE;
extern uint16_t _TRACE_VISIT_COMPLETE_DSTATE;
extern uint16_t _TRACE_VISIT_START_STRUCT_DSTATE;
extern uint16_t _TRACE_VISIT_CHECK_STRUCT_DSTATE;
extern uint16_t _TRACE_VISIT_END_STRUCT_DSTATE;
extern uint16_t _TRACE_VISIT_START_LIST_DSTATE;
extern uint16_t _TRACE_VISIT_NEXT_LIST_DSTATE;
extern uint16_t _TRACE_VISIT_CHECK_LIST_DSTATE;
extern uint16_t _TRACE_VISIT_END_LIST_DSTATE;
extern uint16_t _TRACE_VISIT_START_ALTERNATE_DSTATE;
extern uint16_t _TRACE_VISIT_END_ALTERNATE_DSTATE;
extern uint16_t _TRACE_VISIT_OPTIONAL_DSTATE;
extern uint16_t _TRACE_VISIT_DEPRECATED_ACCEPT_DSTATE;
extern uint16_t _TRACE_VISIT_DEPRECATED_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_ENUM_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_INT_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_UINT8_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_UINT16_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_UINT32_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_UINT64_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_INT8_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_INT16_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_INT32_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_INT64_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_SIZE_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_BOOL_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_STR_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_NUMBER_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_ANY_DSTATE;
extern uint16_t _TRACE_VISIT_TYPE_NULL_DSTATE;
#define TRACE_VISIT_FREE_ENABLED 1
#define TRACE_VISIT_COMPLETE_ENABLED 1
#define TRACE_VISIT_START_STRUCT_ENABLED 1
#define TRACE_VISIT_CHECK_STRUCT_ENABLED 1
#define TRACE_VISIT_END_STRUCT_ENABLED 1
#define TRACE_VISIT_START_LIST_ENABLED 1
#define TRACE_VISIT_NEXT_LIST_ENABLED 1
#define TRACE_VISIT_CHECK_LIST_ENABLED 1
#define TRACE_VISIT_END_LIST_ENABLED 1
#define TRACE_VISIT_START_ALTERNATE_ENABLED 1
#define TRACE_VISIT_END_ALTERNATE_ENABLED 1
#define TRACE_VISIT_OPTIONAL_ENABLED 1
#define TRACE_VISIT_DEPRECATED_ACCEPT_ENABLED 1
#define TRACE_VISIT_DEPRECATED_ENABLED 1
#define TRACE_VISIT_TYPE_ENUM_ENABLED 1
#define TRACE_VISIT_TYPE_INT_ENABLED 1
#define TRACE_VISIT_TYPE_UINT8_ENABLED 1
#define TRACE_VISIT_TYPE_UINT16_ENABLED 1
#define TRACE_VISIT_TYPE_UINT32_ENABLED 1
#define TRACE_VISIT_TYPE_UINT64_ENABLED 1
#define TRACE_VISIT_TYPE_INT8_ENABLED 1
#define TRACE_VISIT_TYPE_INT16_ENABLED 1
#define TRACE_VISIT_TYPE_INT32_ENABLED 1
#define TRACE_VISIT_TYPE_INT64_ENABLED 1
#define TRACE_VISIT_TYPE_SIZE_ENABLED 1
#define TRACE_VISIT_TYPE_BOOL_ENABLED 1
#define TRACE_VISIT_TYPE_STR_ENABLED 1
#define TRACE_VISIT_TYPE_NUMBER_ENABLED 1
#define TRACE_VISIT_TYPE_ANY_ENABLED 1
#define TRACE_VISIT_TYPE_NULL_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_VISIT_FREE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_FREE) || \
    false)

static inline void _nocheck__trace_visit_free(void * v)
{
    if (trace_event_get_state(TRACE_VISIT_FREE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_free " "v=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v);
#line 118 "trace/trace-qapi.h"
        } else {
#line 4 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_free " "v=%p" "\n", v);
#line 122 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_free(void * v)
{
    if (true) {
        _nocheck__trace_visit_free(v);
    }
}

#define TRACE_VISIT_COMPLETE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_COMPLETE) || \
    false)

static inline void _nocheck__trace_visit_complete(void * v, void * opaque)
{
    if (trace_event_get_state(TRACE_VISIT_COMPLETE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_complete " "v=%p opaque=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, opaque);
#line 149 "trace/trace-qapi.h"
        } else {
#line 5 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_complete " "v=%p opaque=%p" "\n", v, opaque);
#line 153 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_complete(void * v, void * opaque)
{
    if (true) {
        _nocheck__trace_visit_complete(v, opaque);
    }
}

#define TRACE_VISIT_START_STRUCT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_START_STRUCT) || \
    false)

static inline void _nocheck__trace_visit_start_struct(void * v, const char * name, void * obj, size_t size)
{
    if (trace_event_get_state(TRACE_VISIT_START_STRUCT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_start_struct " "v=%p name=%s obj=%p size=%zu" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj, size);
#line 180 "trace/trace-qapi.h"
        } else {
#line 7 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_start_struct " "v=%p name=%s obj=%p size=%zu" "\n", v, name, obj, size);
#line 184 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_start_struct(void * v, const char * name, void * obj, size_t size)
{
    if (true) {
        _nocheck__trace_visit_start_struct(v, name, obj, size);
    }
}

#define TRACE_VISIT_CHECK_STRUCT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_CHECK_STRUCT) || \
    false)

static inline void _nocheck__trace_visit_check_struct(void * v)
{
    if (trace_event_get_state(TRACE_VISIT_CHECK_STRUCT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_check_struct " "v=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v);
#line 211 "trace/trace-qapi.h"
        } else {
#line 8 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_check_struct " "v=%p" "\n", v);
#line 215 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_check_struct(void * v)
{
    if (true) {
        _nocheck__trace_visit_check_struct(v);
    }
}

#define TRACE_VISIT_END_STRUCT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_END_STRUCT) || \
    false)

static inline void _nocheck__trace_visit_end_struct(void * v, void * obj)
{
    if (trace_event_get_state(TRACE_VISIT_END_STRUCT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_end_struct " "v=%p obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, obj);
#line 242 "trace/trace-qapi.h"
        } else {
#line 9 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_end_struct " "v=%p obj=%p" "\n", v, obj);
#line 246 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_end_struct(void * v, void * obj)
{
    if (true) {
        _nocheck__trace_visit_end_struct(v, obj);
    }
}

#define TRACE_VISIT_START_LIST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_START_LIST) || \
    false)

static inline void _nocheck__trace_visit_start_list(void * v, const char * name, void * obj, size_t size)
{
    if (trace_event_get_state(TRACE_VISIT_START_LIST) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_start_list " "v=%p name=%s obj=%p size=%zu" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj, size);
#line 273 "trace/trace-qapi.h"
        } else {
#line 11 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_start_list " "v=%p name=%s obj=%p size=%zu" "\n", v, name, obj, size);
#line 277 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_start_list(void * v, const char * name, void * obj, size_t size)
{
    if (true) {
        _nocheck__trace_visit_start_list(v, name, obj, size);
    }
}

#define TRACE_VISIT_NEXT_LIST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_NEXT_LIST) || \
    false)

static inline void _nocheck__trace_visit_next_list(void * v, void * tail, size_t size)
{
    if (trace_event_get_state(TRACE_VISIT_NEXT_LIST) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_next_list " "v=%p tail=%p size=%zu" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, tail, size);
#line 304 "trace/trace-qapi.h"
        } else {
#line 12 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_next_list " "v=%p tail=%p size=%zu" "\n", v, tail, size);
#line 308 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_next_list(void * v, void * tail, size_t size)
{
    if (true) {
        _nocheck__trace_visit_next_list(v, tail, size);
    }
}

#define TRACE_VISIT_CHECK_LIST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_CHECK_LIST) || \
    false)

static inline void _nocheck__trace_visit_check_list(void * v)
{
    if (trace_event_get_state(TRACE_VISIT_CHECK_LIST) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_check_list " "v=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v);
#line 335 "trace/trace-qapi.h"
        } else {
#line 13 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_check_list " "v=%p" "\n", v);
#line 339 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_check_list(void * v)
{
    if (true) {
        _nocheck__trace_visit_check_list(v);
    }
}

#define TRACE_VISIT_END_LIST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_END_LIST) || \
    false)

static inline void _nocheck__trace_visit_end_list(void * v, void * obj)
{
    if (trace_event_get_state(TRACE_VISIT_END_LIST) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_end_list " "v=%p obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, obj);
#line 366 "trace/trace-qapi.h"
        } else {
#line 14 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_end_list " "v=%p obj=%p" "\n", v, obj);
#line 370 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_end_list(void * v, void * obj)
{
    if (true) {
        _nocheck__trace_visit_end_list(v, obj);
    }
}

#define TRACE_VISIT_START_ALTERNATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_START_ALTERNATE) || \
    false)

static inline void _nocheck__trace_visit_start_alternate(void * v, const char * name, void * obj, size_t size)
{
    if (trace_event_get_state(TRACE_VISIT_START_ALTERNATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_start_alternate " "v=%p name=%s obj=%p size=%zu" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj, size);
#line 397 "trace/trace-qapi.h"
        } else {
#line 16 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_start_alternate " "v=%p name=%s obj=%p size=%zu" "\n", v, name, obj, size);
#line 401 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_start_alternate(void * v, const char * name, void * obj, size_t size)
{
    if (true) {
        _nocheck__trace_visit_start_alternate(v, name, obj, size);
    }
}

#define TRACE_VISIT_END_ALTERNATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_END_ALTERNATE) || \
    false)

static inline void _nocheck__trace_visit_end_alternate(void * v, void * obj)
{
    if (trace_event_get_state(TRACE_VISIT_END_ALTERNATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_end_alternate " "v=%p obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, obj);
#line 428 "trace/trace-qapi.h"
        } else {
#line 17 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_end_alternate " "v=%p obj=%p" "\n", v, obj);
#line 432 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_end_alternate(void * v, void * obj)
{
    if (true) {
        _nocheck__trace_visit_end_alternate(v, obj);
    }
}

#define TRACE_VISIT_OPTIONAL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_OPTIONAL) || \
    false)

static inline void _nocheck__trace_visit_optional(void * v, const char * name, bool * present)
{
    if (trace_event_get_state(TRACE_VISIT_OPTIONAL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_optional " "v=%p name=%s present=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, present);
#line 459 "trace/trace-qapi.h"
        } else {
#line 19 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_optional " "v=%p name=%s present=%p" "\n", v, name, present);
#line 463 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_optional(void * v, const char * name, bool * present)
{
    if (true) {
        _nocheck__trace_visit_optional(v, name, present);
    }
}

#define TRACE_VISIT_DEPRECATED_ACCEPT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_DEPRECATED_ACCEPT) || \
    false)

static inline void _nocheck__trace_visit_deprecated_accept(void * v, const char * name)
{
    if (trace_event_get_state(TRACE_VISIT_DEPRECATED_ACCEPT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_deprecated_accept " "v=%p name=%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name);
#line 490 "trace/trace-qapi.h"
        } else {
#line 20 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_deprecated_accept " "v=%p name=%s" "\n", v, name);
#line 494 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_deprecated_accept(void * v, const char * name)
{
    if (true) {
        _nocheck__trace_visit_deprecated_accept(v, name);
    }
}

#define TRACE_VISIT_DEPRECATED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_DEPRECATED) || \
    false)

static inline void _nocheck__trace_visit_deprecated(void * v, const char * name)
{
    if (trace_event_get_state(TRACE_VISIT_DEPRECATED) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_deprecated " "v=%p name=%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name);
#line 521 "trace/trace-qapi.h"
        } else {
#line 21 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_deprecated " "v=%p name=%s" "\n", v, name);
#line 525 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_deprecated(void * v, const char * name)
{
    if (true) {
        _nocheck__trace_visit_deprecated(v, name);
    }
}

#define TRACE_VISIT_TYPE_ENUM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_ENUM) || \
    false)

static inline void _nocheck__trace_visit_type_enum(void * v, const char * name, int * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_ENUM) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_enum " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 552 "trace/trace-qapi.h"
        } else {
#line 23 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_enum " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 556 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_enum(void * v, const char * name, int * obj)
{
    if (true) {
        _nocheck__trace_visit_type_enum(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_INT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_INT) || \
    false)

static inline void _nocheck__trace_visit_type_int(void * v, const char * name, int64_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_INT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 24 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_int " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 583 "trace/trace-qapi.h"
        } else {
#line 24 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_int " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 587 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_int(void * v, const char * name, int64_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_int(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_UINT8_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_UINT8) || \
    false)

static inline void _nocheck__trace_visit_type_uint8(void * v, const char * name, uint8_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_UINT8) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 25 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_uint8 " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 614 "trace/trace-qapi.h"
        } else {
#line 25 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_uint8 " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 618 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_uint8(void * v, const char * name, uint8_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_uint8(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_UINT16_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_UINT16) || \
    false)

static inline void _nocheck__trace_visit_type_uint16(void * v, const char * name, uint16_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_UINT16) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 26 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_uint16 " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 645 "trace/trace-qapi.h"
        } else {
#line 26 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_uint16 " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 649 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_uint16(void * v, const char * name, uint16_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_uint16(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_UINT32_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_UINT32) || \
    false)

static inline void _nocheck__trace_visit_type_uint32(void * v, const char * name, uint32_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_UINT32) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_uint32 " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 676 "trace/trace-qapi.h"
        } else {
#line 27 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_uint32 " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 680 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_uint32(void * v, const char * name, uint32_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_uint32(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_UINT64_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_UINT64) || \
    false)

static inline void _nocheck__trace_visit_type_uint64(void * v, const char * name, uint64_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_UINT64) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 28 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_uint64 " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 707 "trace/trace-qapi.h"
        } else {
#line 28 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_uint64 " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 711 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_uint64(void * v, const char * name, uint64_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_uint64(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_INT8_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_INT8) || \
    false)

static inline void _nocheck__trace_visit_type_int8(void * v, const char * name, int8_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_INT8) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 29 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_int8 " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 738 "trace/trace-qapi.h"
        } else {
#line 29 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_int8 " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 742 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_int8(void * v, const char * name, int8_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_int8(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_INT16_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_INT16) || \
    false)

static inline void _nocheck__trace_visit_type_int16(void * v, const char * name, int16_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_INT16) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 30 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_int16 " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 769 "trace/trace-qapi.h"
        } else {
#line 30 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_int16 " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 773 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_int16(void * v, const char * name, int16_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_int16(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_INT32_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_INT32) || \
    false)

static inline void _nocheck__trace_visit_type_int32(void * v, const char * name, int32_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_INT32) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 31 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_int32 " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 800 "trace/trace-qapi.h"
        } else {
#line 31 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_int32 " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 804 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_int32(void * v, const char * name, int32_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_int32(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_INT64_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_INT64) || \
    false)

static inline void _nocheck__trace_visit_type_int64(void * v, const char * name, int64_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_INT64) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 32 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_int64 " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 831 "trace/trace-qapi.h"
        } else {
#line 32 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_int64 " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 835 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_int64(void * v, const char * name, int64_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_int64(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_SIZE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_SIZE) || \
    false)

static inline void _nocheck__trace_visit_type_size(void * v, const char * name, uint64_t * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_SIZE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 33 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_size " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 862 "trace/trace-qapi.h"
        } else {
#line 33 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_size " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 866 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_size(void * v, const char * name, uint64_t * obj)
{
    if (true) {
        _nocheck__trace_visit_type_size(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_BOOL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_BOOL) || \
    false)

static inline void _nocheck__trace_visit_type_bool(void * v, const char * name, bool * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_BOOL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 34 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_bool " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 893 "trace/trace-qapi.h"
        } else {
#line 34 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_bool " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 897 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_bool(void * v, const char * name, bool * obj)
{
    if (true) {
        _nocheck__trace_visit_type_bool(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_STR_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_STR) || \
    false)

static inline void _nocheck__trace_visit_type_str(void * v, const char * name, char ** obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_STR) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 35 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_str " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 924 "trace/trace-qapi.h"
        } else {
#line 35 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_str " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 928 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_str(void * v, const char * name, char ** obj)
{
    if (true) {
        _nocheck__trace_visit_type_str(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_NUMBER_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_NUMBER) || \
    false)

static inline void _nocheck__trace_visit_type_number(void * v, const char * name, void * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_NUMBER) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 36 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_number " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 955 "trace/trace-qapi.h"
        } else {
#line 36 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_number " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 959 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_number(void * v, const char * name, void * obj)
{
    if (true) {
        _nocheck__trace_visit_type_number(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_ANY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_ANY) || \
    false)

static inline void _nocheck__trace_visit_type_any(void * v, const char * name, void * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_ANY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 37 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_any " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 986 "trace/trace-qapi.h"
        } else {
#line 37 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_any " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 990 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_any(void * v, const char * name, void * obj)
{
    if (true) {
        _nocheck__trace_visit_type_any(v, name, obj);
    }
}

#define TRACE_VISIT_TYPE_NULL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VISIT_TYPE_NULL) || \
    false)

static inline void _nocheck__trace_visit_type_null(void * v, const char * name, void * obj)
{
    if (trace_event_get_state(TRACE_VISIT_TYPE_NULL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 38 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("%d@%zu.%06zu:visit_type_null " "v=%p name=%s obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, name, obj);
#line 1017 "trace/trace-qapi.h"
        } else {
#line 38 "/home/anna/AMDSEV/qemu/qapi/trace-events"
            qemu_log("visit_type_null " "v=%p name=%s obj=%p" "\n", v, name, obj);
#line 1021 "trace/trace-qapi.h"
        }
    }
}

static inline void trace_visit_type_null(void * v, const char * name, void * obj)
{
    if (true) {
        _nocheck__trace_visit_type_null(v, name, obj);
    }
}
#endif /* TRACE_QAPI_GENERATED_TRACERS_H */
