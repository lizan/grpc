/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.8 */

#ifndef PB_GRPC_ALTS_TRANSPORT_SECURITY_COMMON_PB_H_INCLUDED
#define PB_GRPC_ALTS_TRANSPORT_SECURITY_COMMON_PB_H_INCLUDED
#include "third_party/nanopb/pb.h"
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _grpc_alts_SecurityLevel {
    grpc_alts_SecurityLevel_SECURITY_NONE = 0,
    grpc_alts_SecurityLevel_INTEGRITY_ONLY = 1,
    grpc_alts_SecurityLevel_INTEGRITY_AND_PRIVACY = 2
} grpc_alts_SecurityLevel;
#define _grpc_alts_SecurityLevel_MIN grpc_alts_SecurityLevel_SECURITY_NONE
#define _grpc_alts_SecurityLevel_MAX grpc_alts_SecurityLevel_INTEGRITY_AND_PRIVACY
#define _grpc_alts_SecurityLevel_ARRAYSIZE ((grpc_alts_SecurityLevel)(grpc_alts_SecurityLevel_INTEGRITY_AND_PRIVACY+1))

/* Struct definitions */
typedef struct _grpc_alts_RpcProtocolVersions_Version {
    bool has_major;
    uint32_t major;
    bool has_minor;
    uint32_t minor;
/* @@protoc_insertion_point(struct:grpc_alts_RpcProtocolVersions_Version) */
} grpc_alts_RpcProtocolVersions_Version;

typedef struct _grpc_alts_RpcProtocolVersions {
    bool has_max_rpc_version;
    grpc_alts_RpcProtocolVersions_Version max_rpc_version;
    bool has_min_rpc_version;
    grpc_alts_RpcProtocolVersions_Version min_rpc_version;
/* @@protoc_insertion_point(struct:grpc_alts_RpcProtocolVersions) */
} grpc_alts_RpcProtocolVersions;

/* Default values for struct fields */

/* Initializer values for message structs */
#define grpc_alts_RpcProtocolVersions_init_default {false, grpc_alts_RpcProtocolVersions_Version_init_default, false, grpc_alts_RpcProtocolVersions_Version_init_default}
#define grpc_alts_RpcProtocolVersions_Version_init_default {false, 0, false, 0}
#define grpc_alts_RpcProtocolVersions_init_zero  {false, grpc_alts_RpcProtocolVersions_Version_init_zero, false, grpc_alts_RpcProtocolVersions_Version_init_zero}
#define grpc_alts_RpcProtocolVersions_Version_init_zero {false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define grpc_alts_RpcProtocolVersions_Version_major_tag 1
#define grpc_alts_RpcProtocolVersions_Version_minor_tag 2
#define grpc_alts_RpcProtocolVersions_max_rpc_version_tag 1
#define grpc_alts_RpcProtocolVersions_min_rpc_version_tag 2

/* Struct field encoding specification for nanopb */
extern const pb_field_t grpc_alts_RpcProtocolVersions_fields[3];
extern const pb_field_t grpc_alts_RpcProtocolVersions_Version_fields[3];

/* Maximum encoded size of messages (where known) */
#define grpc_alts_RpcProtocolVersions_size       28
#define grpc_alts_RpcProtocolVersions_Version_size 12

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define TRANSPORT_SECURITY_COMMON_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
