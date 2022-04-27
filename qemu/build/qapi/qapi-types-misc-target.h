/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_TYPES_MISC_TARGET_H
#define QAPI_TYPES_MISC_TARGET_H

#include "qapi/qapi-builtin-types.h"

#if defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC)
typedef struct q_obj_RTC_CHANGE_arg q_obj_RTC_CHANGE_arg;
#endif /* defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC) */

#if defined(TARGET_I386)
typedef enum SevState {
    SEV_STATE_UNINIT,
    SEV_STATE_LAUNCH_UPDATE,
    SEV_STATE_LAUNCH_SECRET,
    SEV_STATE_RUNNING,
    SEV_STATE_SEND_UPDATE,
    SEV_STATE_RECEIVE_UPDATE,
    SEV_STATE__MAX,
} SevState;

#define SevState_str(val) \
    qapi_enum_lookup(&SevState_lookup, (val))

extern const QEnumLookup SevState_lookup;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef enum SevGuestType {
    SEV_GUEST_TYPE_SEV,
    SEV_GUEST_TYPE_SEV_SNP,
    SEV_GUEST_TYPE__MAX,
} SevGuestType;

#define SevGuestType_str(val) \
    qapi_enum_lookup(&SevGuestType_lookup, (val))

extern const QEnumLookup SevGuestType_lookup;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevGuestInfo SevGuestInfo;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevSnpGuestInfo SevSnpGuestInfo;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct q_obj_SevInfo_base q_obj_SevInfo_base;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevInfo SevInfo;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevLaunchMeasureInfo SevLaunchMeasureInfo;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SevCapability SevCapability;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct q_obj_sev_inject_launch_secret_arg q_obj_sev_inject_launch_secret_arg;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
typedef struct q_obj_dump_skeys_arg q_obj_dump_skeys_arg;
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
typedef struct GICCapability GICCapability;
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
typedef struct GICCapabilityList GICCapabilityList;
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_I386)
typedef struct SevAttestationReport SevAttestationReport;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct q_obj_query_sev_attestation_report_arg q_obj_query_sev_attestation_report_arg;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
typedef struct SGXInfo SGXInfo;
#endif /* defined(TARGET_I386) */

#if defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC)
struct q_obj_RTC_CHANGE_arg {
    int64_t offset;
};
#endif /* defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC) */

#if defined(TARGET_I386)
struct SevGuestInfo {
    uint32_t policy;
    uint32_t handle;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevGuestInfo(SevGuestInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SevGuestInfo, qapi_free_SevGuestInfo)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct SevSnpGuestInfo {
    uint64_t snp_policy;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevSnpGuestInfo(SevSnpGuestInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SevSnpGuestInfo, qapi_free_SevSnpGuestInfo)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct q_obj_SevInfo_base {
    bool enabled;
    uint8_t api_major;
    uint8_t api_minor;
    uint8_t build_id;
    SevState state;
    SevGuestType sev_type;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct SevInfo {
    bool enabled;
    uint8_t api_major;
    uint8_t api_minor;
    uint8_t build_id;
    SevState state;
    SevGuestType sev_type;
    union { /* union tag is @sev_type */
        SevGuestInfo sev;
        SevSnpGuestInfo sev_snp;
    } u;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevInfo(SevInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SevInfo, qapi_free_SevInfo)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct SevLaunchMeasureInfo {
    char *data;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevLaunchMeasureInfo(SevLaunchMeasureInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SevLaunchMeasureInfo, qapi_free_SevLaunchMeasureInfo)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct SevCapability {
    char *pdh;
    char *cert_chain;
    int64_t cbitpos;
    int64_t reduced_phys_bits;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevCapability(SevCapability *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SevCapability, qapi_free_SevCapability)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct q_obj_sev_inject_launch_secret_arg {
    char *packet_header;
    char *secret;
    bool has_gpa;
    uint64_t gpa;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
struct q_obj_dump_skeys_arg {
    char *filename;
};
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
struct GICCapability {
    int64_t version;
    bool emulated;
    bool kernel;
};
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
void qapi_free_GICCapability(GICCapability *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GICCapability, qapi_free_GICCapability)
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
struct GICCapabilityList {
    GICCapabilityList *next;
    GICCapability *value;
};

void qapi_free_GICCapabilityList(GICCapabilityList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GICCapabilityList, qapi_free_GICCapabilityList)
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_I386)
struct SevAttestationReport {
    char *data;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevAttestationReport(SevAttestationReport *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SevAttestationReport, qapi_free_SevAttestationReport)
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct q_obj_query_sev_attestation_report_arg {
    char *mnonce;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
struct SGXInfo {
    bool sgx;
    bool sgx1;
    bool sgx2;
    bool flc;
    uint64_t section_size;
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SGXInfo(SGXInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(SGXInfo, qapi_free_SGXInfo)
#endif /* defined(TARGET_I386) */

#endif /* QAPI_TYPES_MISC_TARGET_H */
