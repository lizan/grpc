#ifndef GRPC_CORE_LIB_SECURITY_CREDENTIALS_ALTS_CHECK_GCP_ENVIRONMENT_H
#define GRPC_CORE_LIB_SECURITY_CREDENTIALS_ALTS_CHECK_GCP_ENVIRONMENT_H

/**
 * This method checks if system BIOS data contains Google-specific phrases.
 * Exposed for testing only.
 *
 * - bios_data_file: a file containing BIOS data used to determine GCE tenancy
 *   information.
 * - is_linux: a boolean flag indicating if the API is invoked on a Linux
 *   platform or not.
 *
 * It returns true if the BIOS data contains Google-specific phrases, and false
 * otherwise.
 */
bool check_bios_data(const char* bios_data_file, bool is_linux);
/**
 * This method checks if a VM (Windows or Linux) is running within Google
 * compute Engine (GCE) or not. It returns true if the VM is running in GCE and
 * false otherwise.
 */
bool is_running_on_gcp();
#endif  // GRPC_CORE_LIB_SECURITY_CREDENTIALS_ALTS_CHECK_GCP_ENVIRONMENT_H

