#ifndef GRPC_CORE_TSI_ALTS_HANDSHAKER_ALTS_TSI_UTILS_H
#define GRPC_CORE_TSI_ALTS_HANDSHAKER_ALTS_TSI_UTILS_H

#include <grpc/byte_buffer.h>
#include <grpc/grpc.h>

#include "src/core/tsi/alts/handshaker/alts_handshaker_service_api.h"
#include "src/core/tsi/transport_security_interface.h"

/**
 * This method converts grpc_status_code code to the corresponding tsi_result
 * code.
 *
 * - code: grpc_status_code code.
 *
 * It returns the converted tsi_result code.
 */
tsi_result alts_tsi_utils_convert_to_tsi_result(grpc_status_code code);

/**
 * This method deserializes a handshaker response returned from ALTS handshaker
 * service.
 *
 * - bytes_received: data returned from ALTS handshaker service.
 *
 * It returns a deserialized handshaker response on success and nullptr on
 * failure.
 */
grpc_alts_handshaker_resp* alts_tsi_utils_deserialize_response(
    grpc_byte_buffer* resp_buffer);

#endif // GRPC_CORE_TSI_ALTS_HANDSHAKER_ALTS_TSI_UTILS_H

