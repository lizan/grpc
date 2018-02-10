#ifndef GRPC_CORE_TSI_ALTS_HANDSHAKER_ALTS_TSI_HANDSHAKER_PRIVATE_H
#define GRPC_CORE_TSI_ALTS_HANDSHAKER_ALTS_TSI_HANDSHAKER_PRIVATE_H

#include "src/core/tsi/alts/handshaker/alts_handshaker_client.h"

/**
 * Unsafe, use for testing only. It allows the caller to change the way the
 * ALTS TSI handshaker schedules handshaker requests.
 */
void alts_tsi_handshaker_set_client_for_testing(alts_tsi_handshaker* handshaker,
                                                alts_handshaker_client* client);

/* For testing only. */
bool alts_tsi_handshaker_get_has_sent_start_message_for_testing(
    alts_tsi_handshaker* handshaker);

bool alts_tsi_handshaker_get_is_client_for_testing(
    alts_tsi_handshaker* handshaker);

void alts_tsi_handshaker_set_recv_bytes_for_testing(
    alts_tsi_handshaker* handshaker, grpc_slice* slice);

grpc_slice alts_tsi_handshaker_get_recv_bytes_for_testing(
    alts_tsi_handshaker* handshaker);

#endif  // GRPC_CORE_TSI_ALTS_HANDSHAKER_ALTS_TSI_HANDSHAKER_PRIVATE_H

