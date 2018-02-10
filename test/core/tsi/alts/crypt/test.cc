#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "src/core/lib/security/transport/security_connector.h"
#include "src/core/tsi/fake_transport_security.h"
#include "test/core/tsi/transport_security_test_lib.h"
#include "test/core/util/test_config.h"

#include <grpc/grpc.h>
#include <grpc/support/alloc.h>
#include <grpc/support/log.h>

int main(int argc, char** argv) {
  grpc_test_init(argc, argv);
  grpc_init();
  grpc_shutdown();
  return 0;
}
