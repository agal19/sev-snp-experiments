/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QOM_GENERATED_TRACERS_H
#define TRACE_QOM_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_OBJECT_DYNAMIC_CAST_ASSERT_EVENT;
extern TraceEvent _TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_EVENT;
extern uint16_t _TRACE_OBJECT_DYNAMIC_CAST_ASSERT_DSTATE;
extern uint16_t _TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_DSTATE;
#define TRACE_OBJECT_DYNAMIC_CAST_ASSERT_ENABLED 1
#define TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_OBJECT_DYNAMIC_CAST_ASSERT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_OBJECT_DYNAMIC_CAST_ASSERT) || \
    false)

static inline void _nocheck__trace_object_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
    if (trace_event_get_state(TRACE_OBJECT_DYNAMIC_CAST_ASSERT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/home/anna/AMDSEV/qemu/qom/trace-events"
            qemu_log("%d@%zu.%06zu:object_dynamic_cast_assert " "%s->%s (%s:%d:%s)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , type, target, file, line, func);
#line 34 "trace/trace-qom.h"
        } else {
#line 4 "/home/anna/AMDSEV/qemu/qom/trace-events"
            qemu_log("object_dynamic_cast_assert " "%s->%s (%s:%d:%s)" "\n", type, target, file, line, func);
#line 38 "trace/trace-qom.h"
        }
    }
}

static inline void trace_object_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
    if (true) {
        _nocheck__trace_object_dynamic_cast_assert(type, target, file, line, func);
    }
}

#define TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT) || \
    false)

static inline void _nocheck__trace_object_class_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
    if (trace_event_get_state(TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/home/anna/AMDSEV/qemu/qom/trace-events"
            qemu_log("%d@%zu.%06zu:object_class_dynamic_cast_assert " "%s->%s (%s:%d:%s)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , type, target, file, line, func);
#line 65 "trace/trace-qom.h"
        } else {
#line 5 "/home/anna/AMDSEV/qemu/qom/trace-events"
            qemu_log("object_class_dynamic_cast_assert " "%s->%s (%s:%d:%s)" "\n", type, target, file, line, func);
#line 69 "trace/trace-qom.h"
        }
    }
}

static inline void trace_object_class_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
    if (true) {
        _nocheck__trace_object_class_dynamic_cast_assert(type, target, file, line, func);
    }
}
#endif /* TRACE_QOM_GENERATED_TRACERS_H */
