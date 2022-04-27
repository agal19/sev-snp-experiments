/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * QAPI Commands initialization
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi-commands.h"
#include "qapi-init-commands.h"

void qmp_init_marshal(QmpCommandList *cmds)
{
    QTAILQ_INIT(cmds);

    qmp_register_command(cmds, "query-status",
                         qmp_marshal_query_status, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "watchdog-set-action",
                         qmp_marshal_watchdog_set_action, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "set-action",
                         qmp_marshal_set_action, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "query-pr-managers",
                         qmp_marshal_query_pr_managers, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "eject",
                         qmp_marshal_eject, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-open-tray",
                         qmp_marshal_blockdev_open_tray, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-close-tray",
                         qmp_marshal_blockdev_close_tray, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-remove-medium",
                         qmp_marshal_blockdev_remove_medium, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-insert-medium",
                         qmp_marshal_blockdev_insert_medium, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-change-medium",
                         qmp_marshal_blockdev_change_medium, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block_set_io_throttle",
                         qmp_marshal_block_set_io_throttle, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-latency-histogram-set",
                         qmp_marshal_block_latency_histogram_set, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-block",
                         qmp_marshal_query_block, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-blockstats",
                         qmp_marshal_query_blockstats, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-block-jobs",
                         qmp_marshal_query_block_jobs, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block_resize",
                         qmp_marshal_block_resize, QCO_COROUTINE);
    qmp_register_command(cmds, "blockdev-snapshot-sync",
                         qmp_marshal_blockdev_snapshot_sync, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-snapshot",
                         qmp_marshal_blockdev_snapshot, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "change-backing-file",
                         qmp_marshal_change_backing_file, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-commit",
                         qmp_marshal_block_commit, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "drive-backup",
                         qmp_marshal_drive_backup, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-backup",
                         qmp_marshal_blockdev_backup, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-named-block-nodes",
                         qmp_marshal_query_named_block_nodes, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "x-debug-query-block-graph",
                         qmp_marshal_x_debug_query_block_graph, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "drive-mirror",
                         qmp_marshal_drive_mirror, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-dirty-bitmap-add",
                         qmp_marshal_block_dirty_bitmap_add, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-dirty-bitmap-remove",
                         qmp_marshal_block_dirty_bitmap_remove, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-dirty-bitmap-clear",
                         qmp_marshal_block_dirty_bitmap_clear, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-dirty-bitmap-enable",
                         qmp_marshal_block_dirty_bitmap_enable, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-dirty-bitmap-disable",
                         qmp_marshal_block_dirty_bitmap_disable, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-dirty-bitmap-merge",
                         qmp_marshal_block_dirty_bitmap_merge, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "x-debug-block-dirty-bitmap-sha256",
                         qmp_marshal_x_debug_block_dirty_bitmap_sha256, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-mirror",
                         qmp_marshal_blockdev_mirror, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-stream",
                         qmp_marshal_block_stream, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-job-set-speed",
                         qmp_marshal_block_job_set_speed, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-job-cancel",
                         qmp_marshal_block_job_cancel, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-job-pause",
                         qmp_marshal_block_job_pause, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-job-resume",
                         qmp_marshal_block_job_resume, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-job-complete",
                         qmp_marshal_block_job_complete, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-job-dismiss",
                         qmp_marshal_block_job_dismiss, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-job-finalize",
                         qmp_marshal_block_job_finalize, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-add",
                         qmp_marshal_blockdev_add, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-reopen",
                         qmp_marshal_blockdev_reopen, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-del",
                         qmp_marshal_blockdev_del, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-create",
                         qmp_marshal_blockdev_create, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "x-blockdev-amend",
                         qmp_marshal_x_blockdev_amend, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-set-write-threshold",
                         qmp_marshal_block_set_write_threshold, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "x-blockdev-change",
                         qmp_marshal_x_blockdev_change, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "x-blockdev-set-iothread",
                         qmp_marshal_x_blockdev_set_iothread, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-snapshot-internal-sync",
                         qmp_marshal_blockdev_snapshot_internal_sync, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "blockdev-snapshot-delete-internal-sync",
                         qmp_marshal_blockdev_snapshot_delete_internal_sync, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "job-pause",
                         qmp_marshal_job_pause, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "job-resume",
                         qmp_marshal_job_resume, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "job-cancel",
                         qmp_marshal_job_cancel, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "job-complete",
                         qmp_marshal_job_complete, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "job-dismiss",
                         qmp_marshal_job_dismiss, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "job-finalize",
                         qmp_marshal_job_finalize, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-jobs",
                         qmp_marshal_query_jobs, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "nbd-server-start",
                         qmp_marshal_nbd_server_start, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "nbd-server-add",
                         qmp_marshal_nbd_server_add, QCO_DEPRECATED);
    qmp_register_command(cmds, "nbd-server-remove",
                         qmp_marshal_nbd_server_remove, QCO_DEPRECATED);
    qmp_register_command(cmds, "nbd-server-stop",
                         qmp_marshal_nbd_server_stop, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-export-add",
                         qmp_marshal_block_export_add, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "block-export-del",
                         qmp_marshal_block_export_del, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-block-exports",
                         qmp_marshal_query_block_exports, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-chardev",
                         qmp_marshal_query_chardev, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "query-chardev-backends",
                         qmp_marshal_query_chardev_backends, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "ringbuf-write",
                         qmp_marshal_ringbuf_write, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "ringbuf-read",
                         qmp_marshal_ringbuf_read, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "chardev-add",
                         qmp_marshal_chardev_add, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "chardev-change",
                         qmp_marshal_chardev_change, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "chardev-remove",
                         qmp_marshal_chardev_remove, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "chardev-send-break",
                         qmp_marshal_chardev_send_break, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "dump-guest-memory",
                         qmp_marshal_dump_guest_memory, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-dump",
                         qmp_marshal_query_dump, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-dump-guest-memory-capability",
                         qmp_marshal_query_dump_guest_memory_capability, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "set_link",
                         qmp_marshal_set_link, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "netdev_add",
                         qmp_marshal_netdev_add, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "netdev_del",
                         qmp_marshal_netdev_del, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "query-rx-filter",
                         qmp_marshal_query_rx_filter, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "announce-self",
                         qmp_marshal_announce_self, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-rocker",
                         qmp_marshal_query_rocker, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-rocker-ports",
                         qmp_marshal_query_rocker_ports, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-rocker-of-dpa-flows",
                         qmp_marshal_query_rocker_of_dpa_flows, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-rocker-of-dpa-groups",
                         qmp_marshal_query_rocker_of_dpa_groups, QCO_NO_OPTIONS);
#if defined(CONFIG_TPM)
    qmp_register_command(cmds, "query-tpm-models",
                         qmp_marshal_query_tpm_models, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_TPM) */
#if defined(CONFIG_TPM)
    qmp_register_command(cmds, "query-tpm-types",
                         qmp_marshal_query_tpm_types, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_TPM) */
#if defined(CONFIG_TPM)
    qmp_register_command(cmds, "query-tpm",
                         qmp_marshal_query_tpm, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_TPM) */
    qmp_register_command(cmds, "set_password",
                         qmp_marshal_set_password, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "expire_password",
                         qmp_marshal_expire_password, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "screendump",
                         qmp_marshal_screendump, QCO_COROUTINE);
#if defined(CONFIG_SPICE)
    qmp_register_command(cmds, "query-spice",
                         qmp_marshal_query_spice, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_VNC)
    qmp_register_command(cmds, "query-vnc",
                         qmp_marshal_query_vnc, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
    qmp_register_command(cmds, "query-vnc-servers",
                         qmp_marshal_query_vnc_servers, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
    qmp_register_command(cmds, "change-vnc-password",
                         qmp_marshal_change_vnc_password, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_VNC) */
    qmp_register_command(cmds, "query-mice",
                         qmp_marshal_query_mice, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "send-key",
                         qmp_marshal_send_key, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "input-send-event",
                         qmp_marshal_input_send_event, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-display-options",
                         qmp_marshal_query_display_options, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "display-reload",
                         qmp_marshal_display_reload, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-migrate",
                         qmp_marshal_query_migrate, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "migrate-set-capabilities",
                         qmp_marshal_migrate_set_capabilities, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-migrate-capabilities",
                         qmp_marshal_query_migrate_capabilities, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "migrate-set-parameters",
                         qmp_marshal_migrate_set_parameters, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-migrate-parameters",
                         qmp_marshal_query_migrate_parameters, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "client_migrate_info",
                         qmp_marshal_client_migrate_info, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "migrate-start-postcopy",
                         qmp_marshal_migrate_start_postcopy, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "x-colo-lost-heartbeat",
                         qmp_marshal_x_colo_lost_heartbeat, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "migrate_cancel",
                         qmp_marshal_migrate_cancel, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "migrate-continue",
                         qmp_marshal_migrate_continue, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "migrate",
                         qmp_marshal_migrate, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "migrate-incoming",
                         qmp_marshal_migrate_incoming, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "xen-save-devices-state",
                         qmp_marshal_xen_save_devices_state, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "xen-set-global-dirty-log",
                         qmp_marshal_xen_set_global_dirty_log, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "xen-load-devices-state",
                         qmp_marshal_xen_load_devices_state, QCO_NO_OPTIONS);
#if defined(CONFIG_REPLICATION)
    qmp_register_command(cmds, "xen-set-replication",
                         qmp_marshal_xen_set_replication, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_REPLICATION) */
#if defined(CONFIG_REPLICATION)
    qmp_register_command(cmds, "query-xen-replication-status",
                         qmp_marshal_query_xen_replication_status, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_REPLICATION) */
#if defined(CONFIG_REPLICATION)
    qmp_register_command(cmds, "xen-colo-do-checkpoint",
                         qmp_marshal_xen_colo_do_checkpoint, QCO_NO_OPTIONS);
#endif /* defined(CONFIG_REPLICATION) */
    qmp_register_command(cmds, "query-colo-status",
                         qmp_marshal_query_colo_status, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "migrate-recover",
                         qmp_marshal_migrate_recover, QCO_ALLOW_OOB);
    qmp_register_command(cmds, "migrate-pause",
                         qmp_marshal_migrate_pause, QCO_ALLOW_OOB);
    qmp_register_command(cmds, "calc-dirty-rate",
                         qmp_marshal_calc_dirty_rate, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-dirty-rate",
                         qmp_marshal_query_dirty_rate, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "snapshot-save",
                         qmp_marshal_snapshot_save, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "snapshot-load",
                         qmp_marshal_snapshot_load, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "snapshot-delete",
                         qmp_marshal_snapshot_delete, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "transaction",
                         qmp_marshal_transaction, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "trace-event-get-state",
                         qmp_marshal_trace_event_get_state, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "trace-event-set-state",
                         qmp_marshal_trace_event_set_state, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "qmp_capabilities",
                         qmp_marshal_qmp_capabilities, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "query-version",
                         qmp_marshal_query_version, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "query-commands",
                         qmp_marshal_query_commands, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "quit",
                         qmp_marshal_quit, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "query-qmp-schema",
                         qmp_marshal_query_qmp_schema, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "qom-list",
                         qmp_marshal_qom_list, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "qom-get",
                         qmp_marshal_qom_get, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "qom-set",
                         qmp_marshal_qom_set, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "qom-list-types",
                         qmp_marshal_qom_list_types, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "qom-list-properties",
                         qmp_marshal_qom_list_properties, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "object-add",
                         qmp_marshal_object_add, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "object-del",
                         qmp_marshal_object_del, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "device-list-properties",
                         qmp_marshal_device_list_properties, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "device_del",
                         qmp_marshal_device_del, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-cpus-fast",
                         qmp_marshal_query_cpus_fast, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-machines",
                         qmp_marshal_query_machines, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-current-machine",
                         qmp_marshal_query_current_machine, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-target",
                         qmp_marshal_query_target, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-uuid",
                         qmp_marshal_query_uuid, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "query-vm-generation-id",
                         qmp_marshal_query_vm_generation_id, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "system_reset",
                         qmp_marshal_system_reset, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "system_powerdown",
                         qmp_marshal_system_powerdown, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "system_wakeup",
                         qmp_marshal_system_wakeup, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "inject-nmi",
                         qmp_marshal_inject_nmi, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-kvm",
                         qmp_marshal_query_kvm, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "memsave",
                         qmp_marshal_memsave, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "pmemsave",
                         qmp_marshal_pmemsave, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-memdev",
                         qmp_marshal_query_memdev, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "query-hotpluggable-cpus",
                         qmp_marshal_query_hotpluggable_cpus, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "set-numa-node",
                         qmp_marshal_set_numa_node, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "balloon",
                         qmp_marshal_balloon, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-balloon",
                         qmp_marshal_query_balloon, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-memory-size-summary",
                         qmp_marshal_query_memory_size_summary, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-memory-devices",
                         qmp_marshal_query_memory_devices, QCO_NO_OPTIONS);
#if defined(TARGET_S390X)
    qmp_register_command(cmds, "query-cpu-model-comparison",
                         qmp_marshal_query_cpu_model_comparison, QCO_NO_OPTIONS);
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_S390X)
    qmp_register_command(cmds, "query-cpu-model-baseline",
                         qmp_marshal_query_cpu_model_baseline, QCO_NO_OPTIONS);
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
    qmp_register_command(cmds, "query-cpu-model-expansion",
                         qmp_marshal_query_cpu_model_expansion, QCO_NO_OPTIONS);
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */
#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
    qmp_register_command(cmds, "query-cpu-definitions",
                         qmp_marshal_query_cpu_definitions, QCO_NO_OPTIONS);
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */
    qmp_register_command(cmds, "query-replay",
                         qmp_marshal_query_replay, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "replay-break",
                         qmp_marshal_replay_break, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "replay-delete-break",
                         qmp_marshal_replay_delete_break, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "replay-seek",
                         qmp_marshal_replay_seek, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "yank",
                         qmp_marshal_yank, QCO_ALLOW_OOB);
    qmp_register_command(cmds, "query-yank",
                         qmp_marshal_query_yank, QCO_ALLOW_OOB);
    qmp_register_command(cmds, "add_client",
                         qmp_marshal_add_client, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-name",
                         qmp_marshal_query_name, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "query-iothreads",
                         qmp_marshal_query_iothreads, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "stop",
                         qmp_marshal_stop, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "cont",
                         qmp_marshal_cont, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "x-exit-preconfig",
                         qmp_marshal_x_exit_preconfig, QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "human-monitor-command",
                         qmp_marshal_human_monitor_command, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "getfd",
                         qmp_marshal_getfd, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "closefd",
                         qmp_marshal_closefd, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "add-fd",
                         qmp_marshal_add_fd, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "remove-fd",
                         qmp_marshal_remove_fd, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-fdsets",
                         qmp_marshal_query_fdsets, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-command-line-options",
                         qmp_marshal_query_command_line_options, QCO_ALLOW_PRECONFIG);
#if defined(TARGET_I386)
    qmp_register_command(cmds, "rtc-reset-reinjection",
                         qmp_marshal_rtc_reset_reinjection, QCO_NO_OPTIONS);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
    qmp_register_command(cmds, "query-sev",
                         qmp_marshal_query_sev, QCO_NO_OPTIONS);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
    qmp_register_command(cmds, "query-sev-launch-measure",
                         qmp_marshal_query_sev_launch_measure, QCO_NO_OPTIONS);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
    qmp_register_command(cmds, "query-sev-capabilities",
                         qmp_marshal_query_sev_capabilities, QCO_NO_OPTIONS);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
    qmp_register_command(cmds, "sev-inject-launch-secret",
                         qmp_marshal_sev_inject_launch_secret, QCO_NO_OPTIONS);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_S390X)
    qmp_register_command(cmds, "dump-skeys",
                         qmp_marshal_dump_skeys, QCO_NO_OPTIONS);
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_ARM)
    qmp_register_command(cmds, "query-gic-capabilities",
                         qmp_marshal_query_gic_capabilities, QCO_NO_OPTIONS);
#endif /* defined(TARGET_ARM) */
#if defined(TARGET_I386)
    qmp_register_command(cmds, "query-sev-attestation-report",
                         qmp_marshal_query_sev_attestation_report, QCO_NO_OPTIONS);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
    qmp_register_command(cmds, "query-sgx",
                         qmp_marshal_query_sgx, QCO_NO_OPTIONS);
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
    qmp_register_command(cmds, "query-sgx-capabilities",
                         qmp_marshal_query_sgx_capabilities, QCO_NO_OPTIONS);
#endif /* defined(TARGET_I386) */
    qmp_register_command(cmds, "query-acpi-ospm-status",
                         qmp_marshal_query_acpi_ospm_status, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "query-pci",
                         qmp_marshal_query_pci, QCO_NO_OPTIONS);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_init_commands_c;
