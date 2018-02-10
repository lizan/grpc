#include "src/core/lib/security/credentials/alts/grpc_alts_credentials_options.h"

#include <grpc/support/alloc.h>
#include <grpc/support/log.h>

grpc_alts_credentials_options* grpc_alts_credentials_options_copy(
    const grpc_alts_credentials_options* options) {
  if (options != nullptr && options->vtable != nullptr &&
      options->vtable->copy != nullptr) {
    return options->vtable->copy(options);
  }
  /* An error occurred. */
  gpr_log(GPR_ERROR,
          "Invalid arguments to grpc_alts_credentials_options_copy()");
  return nullptr;
}

void grpc_alts_credentials_options_destroy(
    grpc_alts_credentials_options* options) {
  if (options != nullptr) {
    if (options->vtable != nullptr && options->vtable->destruct != nullptr) {
      options->vtable->destruct(options);
    }
    gpr_free(options);
  }
}

