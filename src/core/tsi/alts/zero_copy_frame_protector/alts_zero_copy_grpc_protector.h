#ifndef GRPC_CORE_TSI_ALTS_ZERO_COPY_FRAME_PROTECTOR_ALTS_ZERO_COPY_GRPC_PROTECTOR_H
#define GRPC_CORE_TSI_ALTS_ZERO_COPY_FRAME_PROTECTOR_ALTS_ZERO_COPY_GRPC_PROTECTOR_H

#include <stdbool.h>

#include "src/core/tsi/transport_security_grpc.h"

/**
 * This method creates an ALTS zero-copy grpc protector.
 *
 * - key: a symmetric key used to seal/unseal frames.
 * - key_size: the size of symmetric key.
 * - is_rekey: use rekeying AEAD crypter.
 * - is_client: a flag indicating if the protector will be used at client or
 *   server side.
 * - is_integrity_only: a flag indicating if the protector instance will be
 *   used for integrity-only or privacy-integrity mode.
 * - max_protected_frame_size: an in/out parameter indicating max frame size
 *   to be used by the protector. If it is nullptr, the default frame size will
 *   be used. Otherwise, the provided frame size will be adjusted (if not
 *   falling into a valid frame range) and used.
 * - protector: a pointer to the zero-copy protector returned from the method.
 *
 * This method returns TSI_OK on success or a specific error code otherwise.
 */
tsi_result alts_zero_copy_grpc_protector_create(
    const uint8_t* key, size_t key_size, bool is_rekey, bool is_client,
    bool is_integrity_only, size_t* max_protected_frame_size,
    tsi_zero_copy_grpc_protector** protector);

#endif  // GRPC_CORE_TSI_ALTS_ZERO_COPY_FRAME_PROTECTOR_ALTS_ZERO_COPY_GRPC_PROTECTOR_H
