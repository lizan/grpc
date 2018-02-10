#ifndef GRPC_TEST_CORE_TSI_ALTS_HANDSHAKER_ALTS_HANDSHAKER_SERVICE_API_TEST_LIB_H
#define GRPC_TEST_CORE_TSI_ALTS_HANDSHAKER_ALTS_HANDSHAKER_SERVICE_API_TEST_LIB_H

#include "src/core/tsi/alts/handshaker/alts_handshaker_service_api.h"
#include "src/core/tsi/alts/handshaker/alts_handshaker_service_api_util.h"
#include "src/core/tsi/alts/handshaker/transport_security_common_api.h"

/**
 * The first part of this file contains function signatures for de-serializing
 * ALTS handshake requests and setting/serializing ALTS handshake responses,
 * which simulate the behaviour of grpc server that runs ALTS handshaker
 * service.
 */

/**
 * This method creates a ALTS handshaker request that is used to hold
 * de-serialized result.
 */
grpc_alts_handshaker_req* grpc_alts_handshaker_decoded_req_create(
    grpc_alts_handshaker_req_type type);

/* This method de-serializes a ALTS handshaker request. */
bool grpc_alts_handshaker_req_decode(grpc_slice slice,
                                    grpc_alts_handshaker_req* req);

/* This method serializes a ALTS handshaker response. */
bool grpc_alts_handshaker_resp_encode(grpc_alts_handshaker_resp* resp,
                                     grpc_slice* slice);

/* This method sets application protocol of ALTS handshaker response. */
bool grpc_alts_handshaker_resp_set_application_protocol(
    grpc_alts_handshaker_resp* resp, const char* application_protocol);

/* This method sets record protocol of ALTS handshaker response. */
bool grpc_alts_handshaker_resp_set_record_protocol(
    grpc_alts_handshaker_resp* resp, const char* record_protocol);

/* This method sets key_data of ALTS handshaker response. */
bool grpc_alts_handshaker_resp_set_key_data(grpc_alts_handshaker_resp* resp,
                                           const char* key_data, size_t size);

/* This method sets local identity's hostname for ALTS handshaker response. */
bool grpc_alts_handshaker_resp_set_local_identity_hostname(
    grpc_alts_handshaker_resp* resp, const char* hostname);

/**
 * This method sets local identity's service account for ALTS handshaker
 * response.
 */
bool grpc_alts_handshaker_resp_set_local_identity_service_account(
    grpc_alts_handshaker_resp* resp, const char* service_account);

/* This method sets peer identity's hostname for ALTS handshaker response. */
bool grpc_alts_handshaker_resp_set_peer_identity_hostname(
    grpc_alts_handshaker_resp* resp, const char* hostname);

/**
 * This method sets peer identity's service account for ALTS handshaker
 * response.
 */
bool grpc_alts_handshaker_resp_set_peer_identity_service_account(
    grpc_alts_handshaker_resp* resp, const char* service_account);

/* This method sets keep_channel_open for ALTS handshaker response. */
bool grpc_alts_handshaker_resp_set_channel_open(grpc_alts_handshaker_resp* resp,
                                               bool keep_channel_open);

/* This method sets code for ALTS handshaker response. */
bool grpc_alts_handshaker_resp_set_code(grpc_alts_handshaker_resp* resp,
                                       uint32_t code);

/* This method sets details for ALTS handshaker response. */
bool grpc_alts_handshaker_resp_set_details(grpc_alts_handshaker_resp* resp,
                                          const char* details);

/* This method sets out_frames for ALTS handshaker response. */
bool grpc_alts_handshaker_resp_set_out_frames(grpc_alts_handshaker_resp* resp,
                                             const char* out_frames,
                                             size_t size);

/* This method sets peer_rpc_versions for ALTS handshaker response. */
bool grpc_alts_handshaker_resp_set_peer_rpc_versions(
    grpc_alts_handshaker_resp* resp, uint32_t max_major, uint32_t max_minor,
    uint32_t min_major, uint32_t min_minor);

/* This method sets bytes_consumed for ALTS handshaker response. */
bool grpc_alts_handshaker_resp_set_bytes_consumed(grpc_alts_handshaker_resp* resp,
                                                 int32_t bytes_consumed);

/* This method serializes ALTS handshaker response. */
bool grpc_alts_handshaker_resp_encode(grpc_alts_handshaker_resp* resp,
                                     grpc_slice* slice);

/* This method de-serializes ALTS handshaker request. */
bool grpc_alts_handshaker_req_decode(grpc_slice slice,
                                    grpc_alts_handshaker_req* req);

/**
 * The second part contains function signatures for checking equality of a pair
 * of ALTS handshake requests/responses.
 */

/* This method checks equality of two client_start handshaker requests. */
bool grpc_alts_handshaker_client_start_req_equals(
    grpc_alts_start_client_handshake_req* l_req,
    grpc_alts_start_client_handshake_req* r_req);

/* This method checks equality of two server_start handshaker requests. */
bool grpc_alts_handshaker_server_start_req_equals(
    grpc_alts_start_server_handshake_req* l_req,
    grpc_alts_start_server_handshake_req* r_req);

/* This method checks equality of two ALTS handshaker requests. */
bool grpc_alts_handshaker_req_equals(grpc_alts_handshaker_req* l_req,
                                    grpc_alts_handshaker_req* r_req);

/* This method checks equality of two handshaker response results. */
bool grpc_alts_handshaker_resp_result_equals(
    grpc_alts_handshaker_result* l_result, grpc_alts_handshaker_result* r_result);

/* This method checks equality of two ALTS handshaker responses. */
bool grpc_alts_handshaker_resp_equals(grpc_alts_handshaker_resp* l_resp,
                                     grpc_alts_handshaker_resp* r_resp);

#endif  // GRPC_TEST_CORE_TSI_ALTS_HANDSHAKER_ALTS_HANDSHAKER_SERVICE_API_TEST_LIB_H

