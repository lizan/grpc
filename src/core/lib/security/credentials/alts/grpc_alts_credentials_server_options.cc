#include <stdlib.h>
#include <string.h>

#include <grpc/support/alloc.h>
#include <grpc/support/log.h>

#include "src/core/lib/security/credentials/alts/grpc_alts_credentials_options.h"
#include "src/core/tsi/alts/handshaker/transport_security_common_api.h"

static grpc_alts_credentials_options* alts_server_options_copy(
    const grpc_alts_credentials_options* options);

static void alts_server_options_destroy(
    grpc_alts_credentials_options* options) {}

static const grpc_alts_credentials_options_vtable vtable = {
    alts_server_options_copy, alts_server_options_destroy};

grpc_alts_credentials_options* grpc_alts_credentials_server_options_create() {
  grpc_alts_credentials_server_options* server_options =
      static_cast<grpc_alts_credentials_server_options*>(
          gpr_zalloc(sizeof(*server_options)));
  server_options->base.vtable = &vtable;
  return &server_options->base;
}

static grpc_alts_credentials_options* alts_server_options_copy(
    const grpc_alts_credentials_options* options) {
  if (options == nullptr) {
    return nullptr;
  }
  grpc_alts_credentials_options* new_options =
      grpc_alts_credentials_server_options_create();
  /* Copy rpc protocol versions. */
  grpc_alts_rpc_protocol_versions_copy(&options->rpc_versions,
                                                &new_options->rpc_versions);
  return new_options;
}

