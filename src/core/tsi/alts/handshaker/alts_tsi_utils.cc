#include "src/core/tsi/alts/handshaker/alts_tsi_utils.h"

#include <grpc/byte_buffer_reader.h>

tsi_result alts_tsi_utils_convert_to_tsi_result(grpc_status_code code) {
  switch (code) {
    case GRPC_STATUS_OK:
      return TSI_OK;
    case GRPC_STATUS_UNKNOWN:
      return TSI_UNKNOWN_ERROR;
    case GRPC_STATUS_INVALID_ARGUMENT:
      return TSI_INVALID_ARGUMENT;
    case GRPC_STATUS_NOT_FOUND:
      return TSI_NOT_FOUND;
    case GRPC_STATUS_INTERNAL:
      return TSI_INTERNAL_ERROR;
    default:
      return TSI_UNKNOWN_ERROR;
  }
}

grpc_alts_handshaker_resp* alts_tsi_utils_deserialize_response(
    grpc_byte_buffer* resp_buffer) {
  GPR_ASSERT(resp_buffer != nullptr);
  grpc_byte_buffer_reader bbr;
  grpc_byte_buffer_reader_init(&bbr, resp_buffer);
  grpc_slice slice = grpc_byte_buffer_reader_readall(&bbr);
  grpc_alts_handshaker_resp* resp = grpc_alts_handshaker_resp_create();
  bool ok = grpc_alts_handshaker_resp_decode(slice, resp);
  grpc_slice_unref(slice);
  grpc_byte_buffer_reader_destroy(&bbr);
  if (!ok) {
    grpc_alts_handshaker_resp_destroy(resp);
    gpr_log(GPR_ERROR, "grpc_alts_handshaker_resp_decode() failed");
    return nullptr;
  }
  return resp;
}

