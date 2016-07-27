# GRPC Bazel BUILD file.
# This currently builds C, C++ and Objective-C code.
# This file has been automatically generated from a template file.
# Please look at the templates directory instead.
# This file can be regenerated from the template by running
# tools/buildgen/generate_projects.sh

# Copyright 2015, Google Inc.
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:
#
#     * Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above
# copyright notice, this list of conditions and the following disclaimer
# in the documentation and/or other materials provided with the
# distribution.
#     * Neither the name of Google Inc. nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

licenses(["notice"])  # 3-clause BSD

exports_files(["LICENSE"])

package(default_visibility = ["//visibility:public"])

load("@protobuf_git//:protobuf.bzl", "cc_proto_library")

cc_proto_library(
  name = "testing_messages_proto",
  srcs = [
    "src/proto/grpc/testing/messages.proto",
  ],
  use_grpc_plugin = True,
  protoc = "//external:protoc",
  default_runtime = "//external:protobuf",
)

cc_proto_library(
  name = "interop_proto",
  srcs = [
    "src/proto/grpc/testing/empty.proto",
    "src/proto/grpc/testing/test.proto",
  ],
  deps = [
    ":testing_messages_proto",
  ],
  use_grpc_plugin = True,
  protoc = "//external:protoc",
  default_runtime = "//external:protobuf",
)

cc_proto_library(
  name = "qps_proto",
  srcs = [
    "src/proto/grpc/testing/payloads.proto",
    "src/proto/grpc/testing/stats.proto",
    "src/proto/grpc/testing/control.proto",
    "src/proto/grpc/testing/services.proto",
  ],
  deps = [
    ":testing_messages_proto",
  ],
  use_grpc_plugin = True,
  protoc = "//external:protoc",
  default_runtime = "//external:protobuf",
)

cc_proto_library(
  name = "test_util_proto",
  srcs = [
    "src/proto/grpc/testing/echo_messages.proto",
    "src/proto/grpc/testing/echo.proto",
    "src/proto/grpc/testing/duplicate/echo_duplicate.proto",
  ],
  use_grpc_plugin = True,
  protoc = "//external:protoc",
  default_runtime = "//external:protobuf",
)






cc_library(
  name = "gpr",
  srcs = [
    "src/core/lib/profiling/timers.h",
    "src/core/lib/support/backoff.h",
    "src/core/lib/support/block_annotate.h",
    "src/core/lib/support/env.h",
    "src/core/lib/support/mpscq.h",
    "src/core/lib/support/murmur_hash.h",
    "src/core/lib/support/percent_encoding.h",
    "src/core/lib/support/stack_lockfree.h",
    "src/core/lib/support/string.h",
    "src/core/lib/support/string_windows.h",
    "src/core/lib/support/thd_internal.h",
    "src/core/lib/support/time_precise.h",
    "src/core/lib/support/tmpfile.h",
    "src/core/lib/profiling/basic_timers.c",
    "src/core/lib/profiling/stap_timers.c",
    "src/core/lib/support/alloc.c",
    "src/core/lib/support/avl.c",
    "src/core/lib/support/backoff.c",
    "src/core/lib/support/cmdline.c",
    "src/core/lib/support/cpu_iphone.c",
    "src/core/lib/support/cpu_linux.c",
    "src/core/lib/support/cpu_posix.c",
    "src/core/lib/support/cpu_windows.c",
    "src/core/lib/support/env_linux.c",
    "src/core/lib/support/env_posix.c",
    "src/core/lib/support/env_windows.c",
    "src/core/lib/support/histogram.c",
    "src/core/lib/support/host_port.c",
    "src/core/lib/support/log.c",
    "src/core/lib/support/log_android.c",
    "src/core/lib/support/log_linux.c",
    "src/core/lib/support/log_posix.c",
    "src/core/lib/support/log_windows.c",
    "src/core/lib/support/mpscq.c",
    "src/core/lib/support/murmur_hash.c",
    "src/core/lib/support/percent_encoding.c",
    "src/core/lib/support/slice.c",
    "src/core/lib/support/slice_buffer.c",
    "src/core/lib/support/stack_lockfree.c",
    "src/core/lib/support/string.c",
    "src/core/lib/support/string_posix.c",
    "src/core/lib/support/string_util_windows.c",
    "src/core/lib/support/string_windows.c",
    "src/core/lib/support/subprocess_posix.c",
    "src/core/lib/support/subprocess_windows.c",
    "src/core/lib/support/sync.c",
    "src/core/lib/support/sync_posix.c",
    "src/core/lib/support/sync_windows.c",
    "src/core/lib/support/thd.c",
    "src/core/lib/support/thd_posix.c",
    "src/core/lib/support/thd_windows.c",
    "src/core/lib/support/time.c",
    "src/core/lib/support/time_posix.c",
    "src/core/lib/support/time_precise.c",
    "src/core/lib/support/time_windows.c",
    "src/core/lib/support/tls_pthread.c",
    "src/core/lib/support/tmpfile_msys.c",
    "src/core/lib/support/tmpfile_posix.c",
    "src/core/lib/support/tmpfile_windows.c",
    "src/core/lib/support/wrap_memcpy.c",
  ],
  hdrs = [
    "include/grpc/support/alloc.h",
    "include/grpc/support/atm.h",
    "include/grpc/support/atm_gcc_atomic.h",
    "include/grpc/support/atm_gcc_sync.h",
    "include/grpc/support/atm_windows.h",
    "include/grpc/support/avl.h",
    "include/grpc/support/cmdline.h",
    "include/grpc/support/cpu.h",
    "include/grpc/support/histogram.h",
    "include/grpc/support/host_port.h",
    "include/grpc/support/log.h",
    "include/grpc/support/log_windows.h",
    "include/grpc/support/port_platform.h",
    "include/grpc/support/slice.h",
    "include/grpc/support/slice_buffer.h",
    "include/grpc/support/string_util.h",
    "include/grpc/support/subprocess.h",
    "include/grpc/support/sync.h",
    "include/grpc/support/sync_generic.h",
    "include/grpc/support/sync_posix.h",
    "include/grpc/support/sync_windows.h",
    "include/grpc/support/thd.h",
    "include/grpc/support/time.h",
    "include/grpc/support/tls.h",
    "include/grpc/support/tls_gcc.h",
    "include/grpc/support/tls_msvc.h",
    "include/grpc/support/tls_pthread.h",
    "include/grpc/support/useful.h",
    "include/grpc/impl/codegen/atm.h",
    "include/grpc/impl/codegen/atm_gcc_atomic.h",
    "include/grpc/impl/codegen/atm_gcc_sync.h",
    "include/grpc/impl/codegen/atm_windows.h",
    "include/grpc/impl/codegen/gpr_types.h",
    "include/grpc/impl/codegen/port_platform.h",
    "include/grpc/impl/codegen/slice.h",
    "include/grpc/impl/codegen/sync.h",
    "include/grpc/impl/codegen/sync_generic.h",
    "include/grpc/impl/codegen/sync_posix.h",
    "include/grpc/impl/codegen/sync_windows.h",
  ],
  includes = [
    "include",
  ],
  deps = [
  ],
)



cc_library(
  name = "gpr_test_util",
  srcs = [
    "test/core/util/test_config.h",
    "test/core/util/test_config.c",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":gpr",
  ],
)



cc_library(
  name = "grpc",
  srcs = [
    "src/core/lib/channel/channel_args.h",
    "src/core/lib/channel/channel_stack.h",
    "src/core/lib/channel/channel_stack_builder.h",
    "src/core/lib/channel/compress_filter.h",
    "src/core/lib/channel/connected_channel.h",
    "src/core/lib/channel/context.h",
    "src/core/lib/channel/deadline_filter.h",
    "src/core/lib/channel/handshaker.h",
    "src/core/lib/channel/http_client_filter.h",
    "src/core/lib/channel/http_server_filter.h",
    "src/core/lib/channel/message_size_filter.h",
    "src/core/lib/compression/algorithm_metadata.h",
    "src/core/lib/compression/message_compress.h",
    "src/core/lib/debug/trace.h",
    "src/core/lib/http/format_request.h",
    "src/core/lib/http/httpcli.h",
    "src/core/lib/http/parser.h",
    "src/core/lib/iomgr/closure.h",
    "src/core/lib/iomgr/combiner.h",
    "src/core/lib/iomgr/endpoint.h",
    "src/core/lib/iomgr/endpoint_pair.h",
    "src/core/lib/iomgr/error.h",
    "src/core/lib/iomgr/ev_epoll_linux.h",
    "src/core/lib/iomgr/ev_poll_and_epoll_posix.h",
    "src/core/lib/iomgr/ev_poll_posix.h",
    "src/core/lib/iomgr/ev_posix.h",
    "src/core/lib/iomgr/exec_ctx.h",
    "src/core/lib/iomgr/executor.h",
    "src/core/lib/iomgr/iocp_windows.h",
    "src/core/lib/iomgr/iomgr.h",
    "src/core/lib/iomgr/iomgr_internal.h",
    "src/core/lib/iomgr/iomgr_posix.h",
    "src/core/lib/iomgr/load_file.h",
    "src/core/lib/iomgr/network_status_tracker.h",
    "src/core/lib/iomgr/polling_entity.h",
    "src/core/lib/iomgr/pollset.h",
    "src/core/lib/iomgr/pollset_set.h",
    "src/core/lib/iomgr/pollset_set_windows.h",
    "src/core/lib/iomgr/pollset_windows.h",
    "src/core/lib/iomgr/resolve_address.h",
    "src/core/lib/iomgr/sockaddr.h",
    "src/core/lib/iomgr/sockaddr_posix.h",
    "src/core/lib/iomgr/sockaddr_utils.h",
    "src/core/lib/iomgr/sockaddr_windows.h",
    "src/core/lib/iomgr/socket_utils_posix.h",
    "src/core/lib/iomgr/socket_windows.h",
    "src/core/lib/iomgr/tcp_client.h",
    "src/core/lib/iomgr/tcp_posix.h",
    "src/core/lib/iomgr/tcp_server.h",
    "src/core/lib/iomgr/tcp_windows.h",
    "src/core/lib/iomgr/time_averaged_stats.h",
    "src/core/lib/iomgr/timer.h",
    "src/core/lib/iomgr/timer_heap.h",
    "src/core/lib/iomgr/udp_server.h",
    "src/core/lib/iomgr/unix_sockets_posix.h",
    "src/core/lib/iomgr/wakeup_fd_pipe.h",
    "src/core/lib/iomgr/wakeup_fd_posix.h",
    "src/core/lib/iomgr/workqueue.h",
    "src/core/lib/iomgr/workqueue_posix.h",
    "src/core/lib/iomgr/workqueue_windows.h",
    "src/core/lib/json/json.h",
    "src/core/lib/json/json_common.h",
    "src/core/lib/json/json_reader.h",
    "src/core/lib/json/json_writer.h",
    "src/core/lib/surface/api_trace.h",
    "src/core/lib/surface/call.h",
    "src/core/lib/surface/call_test_only.h",
    "src/core/lib/surface/channel.h",
    "src/core/lib/surface/channel_init.h",
    "src/core/lib/surface/channel_stack_type.h",
    "src/core/lib/surface/completion_queue.h",
    "src/core/lib/surface/event_string.h",
    "src/core/lib/surface/init.h",
    "src/core/lib/surface/lame_client.h",
    "src/core/lib/surface/server.h",
    "src/core/lib/transport/byte_stream.h",
    "src/core/lib/transport/connectivity_state.h",
    "src/core/lib/transport/metadata.h",
    "src/core/lib/transport/metadata_batch.h",
    "src/core/lib/transport/static_metadata.h",
    "src/core/lib/transport/timeout_encoding.h",
    "src/core/lib/transport/transport.h",
    "src/core/lib/transport/transport_impl.h",
    "src/core/ext/transport/chttp2/transport/bin_decoder.h",
    "src/core/ext/transport/chttp2/transport/bin_encoder.h",
    "src/core/ext/transport/chttp2/transport/chttp2_transport.h",
    "src/core/ext/transport/chttp2/transport/frame.h",
    "src/core/ext/transport/chttp2/transport/frame_data.h",
    "src/core/ext/transport/chttp2/transport/frame_goaway.h",
    "src/core/ext/transport/chttp2/transport/frame_ping.h",
    "src/core/ext/transport/chttp2/transport/frame_rst_stream.h",
    "src/core/ext/transport/chttp2/transport/frame_settings.h",
    "src/core/ext/transport/chttp2/transport/frame_window_update.h",
    "src/core/ext/transport/chttp2/transport/hpack_encoder.h",
    "src/core/ext/transport/chttp2/transport/hpack_parser.h",
    "src/core/ext/transport/chttp2/transport/hpack_table.h",
    "src/core/ext/transport/chttp2/transport/http2_errors.h",
    "src/core/ext/transport/chttp2/transport/huffsyms.h",
    "src/core/ext/transport/chttp2/transport/incoming_metadata.h",
    "src/core/ext/transport/chttp2/transport/internal.h",
    "src/core/ext/transport/chttp2/transport/status_conversion.h",
    "src/core/ext/transport/chttp2/transport/stream_map.h",
    "src/core/ext/transport/chttp2/transport/varint.h",
    "src/core/ext/transport/chttp2/alpn/alpn.h",
    "src/core/lib/security/context/security_context.h",
    "src/core/lib/security/credentials/composite/composite_credentials.h",
    "src/core/lib/security/credentials/credentials.h",
    "src/core/lib/security/credentials/fake/fake_credentials.h",
    "src/core/lib/security/credentials/google_default/google_default_credentials.h",
    "src/core/lib/security/credentials/iam/iam_credentials.h",
    "src/core/lib/security/credentials/jwt/json_token.h",
    "src/core/lib/security/credentials/jwt/jwt_credentials.h",
    "src/core/lib/security/credentials/jwt/jwt_verifier.h",
    "src/core/lib/security/credentials/oauth2/oauth2_credentials.h",
    "src/core/lib/security/credentials/plugin/plugin_credentials.h",
    "src/core/lib/security/credentials/ssl/ssl_credentials.h",
    "src/core/lib/security/transport/auth_filters.h",
    "src/core/lib/security/transport/handshake.h",
    "src/core/lib/security/transport/secure_endpoint.h",
    "src/core/lib/security/transport/security_connector.h",
    "src/core/lib/security/transport/tsi_error.h",
    "src/core/lib/security/util/b64.h",
    "src/core/lib/security/util/json_util.h",
    "src/core/lib/tsi/fake_transport_security.h",
    "src/core/lib/tsi/ssl_transport_security.h",
    "src/core/lib/tsi/ssl_types.h",
    "src/core/lib/tsi/transport_security.h",
    "src/core/lib/tsi/transport_security_interface.h",
    "src/core/ext/client_config/client_channel.h",
    "src/core/ext/client_config/client_channel_factory.h",
    "src/core/ext/client_config/connector.h",
    "src/core/ext/client_config/http_connect_handshaker.h",
    "src/core/ext/client_config/initial_connect_string.h",
    "src/core/ext/client_config/lb_policy.h",
    "src/core/ext/client_config/lb_policy_factory.h",
    "src/core/ext/client_config/lb_policy_registry.h",
    "src/core/ext/client_config/parse_address.h",
    "src/core/ext/client_config/resolver.h",
    "src/core/ext/client_config/resolver_factory.h",
    "src/core/ext/client_config/resolver_registry.h",
    "src/core/ext/client_config/resolver_result.h",
    "src/core/ext/client_config/subchannel.h",
    "src/core/ext/client_config/subchannel_index.h",
    "src/core/ext/client_config/uri_parser.h",
    "src/core/ext/lb_policy/grpclb/grpclb.h",
    "src/core/ext/lb_policy/grpclb/load_balancer_api.h",
    "src/core/ext/lb_policy/grpclb/proto/grpc/lb/v1/load_balancer.pb.h",
    "src/core/ext/load_reporting/load_reporting.h",
    "src/core/ext/load_reporting/load_reporting_filter.h",
    "src/core/ext/census/aggregation.h",
    "src/core/ext/census/base_resources.h",
    "src/core/ext/census/census_interface.h",
    "src/core/ext/census/census_rpc_stats.h",
    "src/core/ext/census/gen/census.pb.h",
    "src/core/ext/census/gen/trace_context.pb.h",
    "src/core/ext/census/grpc_filter.h",
    "src/core/ext/census/mlog.h",
    "src/core/ext/census/resource.h",
    "src/core/ext/census/rpc_metric_id.h",
    "src/core/ext/census/trace_context.h",
    "src/core/lib/surface/init.c",
    "src/core/lib/channel/channel_args.c",
    "src/core/lib/channel/channel_stack.c",
    "src/core/lib/channel/channel_stack_builder.c",
    "src/core/lib/channel/compress_filter.c",
    "src/core/lib/channel/connected_channel.c",
    "src/core/lib/channel/deadline_filter.c",
    "src/core/lib/channel/handshaker.c",
    "src/core/lib/channel/http_client_filter.c",
    "src/core/lib/channel/http_server_filter.c",
    "src/core/lib/channel/message_size_filter.c",
    "src/core/lib/compression/compression.c",
    "src/core/lib/compression/message_compress.c",
    "src/core/lib/debug/trace.c",
    "src/core/lib/http/format_request.c",
    "src/core/lib/http/httpcli.c",
    "src/core/lib/http/parser.c",
    "src/core/lib/iomgr/closure.c",
    "src/core/lib/iomgr/combiner.c",
    "src/core/lib/iomgr/endpoint.c",
    "src/core/lib/iomgr/endpoint_pair_posix.c",
    "src/core/lib/iomgr/endpoint_pair_windows.c",
    "src/core/lib/iomgr/error.c",
    "src/core/lib/iomgr/ev_epoll_linux.c",
    "src/core/lib/iomgr/ev_poll_and_epoll_posix.c",
    "src/core/lib/iomgr/ev_poll_posix.c",
    "src/core/lib/iomgr/ev_posix.c",
    "src/core/lib/iomgr/exec_ctx.c",
    "src/core/lib/iomgr/executor.c",
    "src/core/lib/iomgr/iocp_windows.c",
    "src/core/lib/iomgr/iomgr.c",
    "src/core/lib/iomgr/iomgr_posix.c",
    "src/core/lib/iomgr/iomgr_windows.c",
    "src/core/lib/iomgr/load_file.c",
    "src/core/lib/iomgr/network_status_tracker.c",
    "src/core/lib/iomgr/polling_entity.c",
    "src/core/lib/iomgr/pollset_set_windows.c",
    "src/core/lib/iomgr/pollset_windows.c",
    "src/core/lib/iomgr/resolve_address_posix.c",
    "src/core/lib/iomgr/resolve_address_windows.c",
    "src/core/lib/iomgr/sockaddr_utils.c",
    "src/core/lib/iomgr/socket_utils_common_posix.c",
    "src/core/lib/iomgr/socket_utils_linux.c",
    "src/core/lib/iomgr/socket_utils_posix.c",
    "src/core/lib/iomgr/socket_windows.c",
    "src/core/lib/iomgr/tcp_client_posix.c",
    "src/core/lib/iomgr/tcp_client_windows.c",
    "src/core/lib/iomgr/tcp_posix.c",
    "src/core/lib/iomgr/tcp_server_posix.c",
    "src/core/lib/iomgr/tcp_server_windows.c",
    "src/core/lib/iomgr/tcp_windows.c",
    "src/core/lib/iomgr/time_averaged_stats.c",
    "src/core/lib/iomgr/timer.c",
    "src/core/lib/iomgr/timer_heap.c",
    "src/core/lib/iomgr/udp_server.c",
    "src/core/lib/iomgr/unix_sockets_posix.c",
    "src/core/lib/iomgr/unix_sockets_posix_noop.c",
    "src/core/lib/iomgr/wakeup_fd_eventfd.c",
    "src/core/lib/iomgr/wakeup_fd_nospecial.c",
    "src/core/lib/iomgr/wakeup_fd_pipe.c",
    "src/core/lib/iomgr/wakeup_fd_posix.c",
    "src/core/lib/iomgr/workqueue_posix.c",
    "src/core/lib/iomgr/workqueue_windows.c",
    "src/core/lib/json/json.c",
    "src/core/lib/json/json_reader.c",
    "src/core/lib/json/json_string.c",
    "src/core/lib/json/json_writer.c",
    "src/core/lib/surface/alarm.c",
    "src/core/lib/surface/api_trace.c",
    "src/core/lib/surface/byte_buffer.c",
    "src/core/lib/surface/byte_buffer_reader.c",
    "src/core/lib/surface/call.c",
    "src/core/lib/surface/call_details.c",
    "src/core/lib/surface/call_log_batch.c",
    "src/core/lib/surface/channel.c",
    "src/core/lib/surface/channel_init.c",
    "src/core/lib/surface/channel_ping.c",
    "src/core/lib/surface/channel_stack_type.c",
    "src/core/lib/surface/completion_queue.c",
    "src/core/lib/surface/event_string.c",
    "src/core/lib/surface/lame_client.c",
    "src/core/lib/surface/metadata_array.c",
    "src/core/lib/surface/server.c",
    "src/core/lib/surface/validate_metadata.c",
    "src/core/lib/surface/version.c",
    "src/core/lib/transport/byte_stream.c",
    "src/core/lib/transport/connectivity_state.c",
    "src/core/lib/transport/metadata.c",
    "src/core/lib/transport/metadata_batch.c",
    "src/core/lib/transport/static_metadata.c",
    "src/core/lib/transport/timeout_encoding.c",
    "src/core/lib/transport/transport.c",
    "src/core/lib/transport/transport_op_string.c",
    "src/core/ext/transport/chttp2/server/secure/server_secure_chttp2.c",
    "src/core/ext/transport/chttp2/transport/bin_decoder.c",
    "src/core/ext/transport/chttp2/transport/bin_encoder.c",
    "src/core/ext/transport/chttp2/transport/chttp2_plugin.c",
    "src/core/ext/transport/chttp2/transport/chttp2_transport.c",
    "src/core/ext/transport/chttp2/transport/frame_data.c",
    "src/core/ext/transport/chttp2/transport/frame_goaway.c",
    "src/core/ext/transport/chttp2/transport/frame_ping.c",
    "src/core/ext/transport/chttp2/transport/frame_rst_stream.c",
    "src/core/ext/transport/chttp2/transport/frame_settings.c",
    "src/core/ext/transport/chttp2/transport/frame_window_update.c",
    "src/core/ext/transport/chttp2/transport/hpack_encoder.c",
    "src/core/ext/transport/chttp2/transport/hpack_parser.c",
    "src/core/ext/transport/chttp2/transport/hpack_table.c",
    "src/core/ext/transport/chttp2/transport/huffsyms.c",
    "src/core/ext/transport/chttp2/transport/incoming_metadata.c",
    "src/core/ext/transport/chttp2/transport/parsing.c",
    "src/core/ext/transport/chttp2/transport/status_conversion.c",
    "src/core/ext/transport/chttp2/transport/stream_lists.c",
    "src/core/ext/transport/chttp2/transport/stream_map.c",
    "src/core/ext/transport/chttp2/transport/varint.c",
    "src/core/ext/transport/chttp2/transport/writing.c",
    "src/core/ext/transport/chttp2/alpn/alpn.c",
    "src/core/lib/http/httpcli_security_connector.c",
    "src/core/lib/security/context/security_context.c",
    "src/core/lib/security/credentials/composite/composite_credentials.c",
    "src/core/lib/security/credentials/credentials.c",
    "src/core/lib/security/credentials/credentials_metadata.c",
    "src/core/lib/security/credentials/fake/fake_credentials.c",
    "src/core/lib/security/credentials/google_default/credentials_posix.c",
    "src/core/lib/security/credentials/google_default/credentials_windows.c",
    "src/core/lib/security/credentials/google_default/google_default_credentials.c",
    "src/core/lib/security/credentials/iam/iam_credentials.c",
    "src/core/lib/security/credentials/jwt/json_token.c",
    "src/core/lib/security/credentials/jwt/jwt_credentials.c",
    "src/core/lib/security/credentials/jwt/jwt_verifier.c",
    "src/core/lib/security/credentials/oauth2/oauth2_credentials.c",
    "src/core/lib/security/credentials/plugin/plugin_credentials.c",
    "src/core/lib/security/credentials/ssl/ssl_credentials.c",
    "src/core/lib/security/transport/client_auth_filter.c",
    "src/core/lib/security/transport/handshake.c",
    "src/core/lib/security/transport/secure_endpoint.c",
    "src/core/lib/security/transport/security_connector.c",
    "src/core/lib/security/transport/server_auth_filter.c",
    "src/core/lib/security/transport/tsi_error.c",
    "src/core/lib/security/util/b64.c",
    "src/core/lib/security/util/json_util.c",
    "src/core/lib/surface/init_secure.c",
    "src/core/lib/tsi/fake_transport_security.c",
    "src/core/lib/tsi/ssl_transport_security.c",
    "src/core/lib/tsi/transport_security.c",
    "src/core/ext/transport/chttp2/client/secure/secure_channel_create.c",
    "src/core/ext/client_config/channel_connectivity.c",
    "src/core/ext/client_config/client_channel.c",
    "src/core/ext/client_config/client_channel_factory.c",
    "src/core/ext/client_config/client_config_plugin.c",
    "src/core/ext/client_config/connector.c",
    "src/core/ext/client_config/default_initial_connect_string.c",
    "src/core/ext/client_config/http_connect_handshaker.c",
    "src/core/ext/client_config/initial_connect_string.c",
    "src/core/ext/client_config/lb_policy.c",
    "src/core/ext/client_config/lb_policy_factory.c",
    "src/core/ext/client_config/lb_policy_registry.c",
    "src/core/ext/client_config/parse_address.c",
    "src/core/ext/client_config/resolver.c",
    "src/core/ext/client_config/resolver_factory.c",
    "src/core/ext/client_config/resolver_registry.c",
    "src/core/ext/client_config/resolver_result.c",
    "src/core/ext/client_config/subchannel.c",
    "src/core/ext/client_config/subchannel_index.c",
    "src/core/ext/client_config/uri_parser.c",
    "src/core/ext/transport/chttp2/server/insecure/server_chttp2.c",
    "src/core/ext/transport/chttp2/server/insecure/server_chttp2_posix.c",
    "src/core/ext/transport/chttp2/client/insecure/channel_create.c",
    "src/core/ext/transport/chttp2/client/insecure/channel_create_posix.c",
    "src/core/ext/lb_policy/grpclb/grpclb.c",
    "src/core/ext/lb_policy/grpclb/load_balancer_api.c",
    "src/core/ext/lb_policy/grpclb/proto/grpc/lb/v1/load_balancer.pb.c",
    "src/core/ext/lb_policy/pick_first/pick_first.c",
    "src/core/ext/lb_policy/round_robin/round_robin.c",
    "src/core/ext/resolver/dns/native/dns_resolver.c",
    "src/core/ext/resolver/sockaddr/sockaddr_resolver.c",
    "src/core/ext/load_reporting/load_reporting.c",
    "src/core/ext/load_reporting/load_reporting_filter.c",
    "src/core/ext/census/base_resources.c",
    "src/core/ext/census/context.c",
    "src/core/ext/census/gen/census.pb.c",
    "src/core/ext/census/gen/trace_context.pb.c",
    "src/core/ext/census/grpc_context.c",
    "src/core/ext/census/grpc_filter.c",
    "src/core/ext/census/grpc_plugin.c",
    "src/core/ext/census/initialize.c",
    "src/core/ext/census/mlog.c",
    "src/core/ext/census/operation.c",
    "src/core/ext/census/placeholders.c",
    "src/core/ext/census/resource.c",
    "src/core/ext/census/trace_context.c",
    "src/core/ext/census/tracing.c",
    "src/core/plugin_registry/grpc_plugin_registry.c",
  ],
  hdrs = [
    "include/grpc/byte_buffer.h",
    "include/grpc/byte_buffer_reader.h",
    "include/grpc/compression.h",
    "include/grpc/grpc.h",
    "include/grpc/grpc_posix.h",
    "include/grpc/grpc_security_constants.h",
    "include/grpc/status.h",
    "include/grpc/impl/codegen/byte_buffer_reader.h",
    "include/grpc/impl/codegen/compression_types.h",
    "include/grpc/impl/codegen/connectivity_state.h",
    "include/grpc/impl/codegen/grpc_types.h",
    "include/grpc/impl/codegen/propagation_bits.h",
    "include/grpc/impl/codegen/status.h",
    "include/grpc/impl/codegen/atm.h",
    "include/grpc/impl/codegen/atm_gcc_atomic.h",
    "include/grpc/impl/codegen/atm_gcc_sync.h",
    "include/grpc/impl/codegen/atm_windows.h",
    "include/grpc/impl/codegen/gpr_types.h",
    "include/grpc/impl/codegen/port_platform.h",
    "include/grpc/impl/codegen/slice.h",
    "include/grpc/impl/codegen/sync.h",
    "include/grpc/impl/codegen/sync_generic.h",
    "include/grpc/impl/codegen/sync_posix.h",
    "include/grpc/impl/codegen/sync_windows.h",
    "include/grpc/grpc_security.h",
    "include/grpc/census.h",
  ],
  includes = [
    "include",
  ],
  deps = [
    "//external:libssl",
    "//external:zlib",
    ":gpr",
    "//third_party/nanopb",
  ],
  copts = [
    "-std=gnu99",
  ],
)



cc_library(
  name = "grpc_cronet",
  srcs = [
    "src/core/lib/channel/channel_args.h",
    "src/core/lib/channel/channel_stack.h",
    "src/core/lib/channel/channel_stack_builder.h",
    "src/core/lib/channel/compress_filter.h",
    "src/core/lib/channel/connected_channel.h",
    "src/core/lib/channel/context.h",
    "src/core/lib/channel/deadline_filter.h",
    "src/core/lib/channel/handshaker.h",
    "src/core/lib/channel/http_client_filter.h",
    "src/core/lib/channel/http_server_filter.h",
    "src/core/lib/channel/message_size_filter.h",
    "src/core/lib/compression/algorithm_metadata.h",
    "src/core/lib/compression/message_compress.h",
    "src/core/lib/debug/trace.h",
    "src/core/lib/http/format_request.h",
    "src/core/lib/http/httpcli.h",
    "src/core/lib/http/parser.h",
    "src/core/lib/iomgr/closure.h",
    "src/core/lib/iomgr/combiner.h",
    "src/core/lib/iomgr/endpoint.h",
    "src/core/lib/iomgr/endpoint_pair.h",
    "src/core/lib/iomgr/error.h",
    "src/core/lib/iomgr/ev_epoll_linux.h",
    "src/core/lib/iomgr/ev_poll_and_epoll_posix.h",
    "src/core/lib/iomgr/ev_poll_posix.h",
    "src/core/lib/iomgr/ev_posix.h",
    "src/core/lib/iomgr/exec_ctx.h",
    "src/core/lib/iomgr/executor.h",
    "src/core/lib/iomgr/iocp_windows.h",
    "src/core/lib/iomgr/iomgr.h",
    "src/core/lib/iomgr/iomgr_internal.h",
    "src/core/lib/iomgr/iomgr_posix.h",
    "src/core/lib/iomgr/load_file.h",
    "src/core/lib/iomgr/network_status_tracker.h",
    "src/core/lib/iomgr/polling_entity.h",
    "src/core/lib/iomgr/pollset.h",
    "src/core/lib/iomgr/pollset_set.h",
    "src/core/lib/iomgr/pollset_set_windows.h",
    "src/core/lib/iomgr/pollset_windows.h",
    "src/core/lib/iomgr/resolve_address.h",
    "src/core/lib/iomgr/sockaddr.h",
    "src/core/lib/iomgr/sockaddr_posix.h",
    "src/core/lib/iomgr/sockaddr_utils.h",
    "src/core/lib/iomgr/sockaddr_windows.h",
    "src/core/lib/iomgr/socket_utils_posix.h",
    "src/core/lib/iomgr/socket_windows.h",
    "src/core/lib/iomgr/tcp_client.h",
    "src/core/lib/iomgr/tcp_posix.h",
    "src/core/lib/iomgr/tcp_server.h",
    "src/core/lib/iomgr/tcp_windows.h",
    "src/core/lib/iomgr/time_averaged_stats.h",
    "src/core/lib/iomgr/timer.h",
    "src/core/lib/iomgr/timer_heap.h",
    "src/core/lib/iomgr/udp_server.h",
    "src/core/lib/iomgr/unix_sockets_posix.h",
    "src/core/lib/iomgr/wakeup_fd_pipe.h",
    "src/core/lib/iomgr/wakeup_fd_posix.h",
    "src/core/lib/iomgr/workqueue.h",
    "src/core/lib/iomgr/workqueue_posix.h",
    "src/core/lib/iomgr/workqueue_windows.h",
    "src/core/lib/json/json.h",
    "src/core/lib/json/json_common.h",
    "src/core/lib/json/json_reader.h",
    "src/core/lib/json/json_writer.h",
    "src/core/lib/surface/api_trace.h",
    "src/core/lib/surface/call.h",
    "src/core/lib/surface/call_test_only.h",
    "src/core/lib/surface/channel.h",
    "src/core/lib/surface/channel_init.h",
    "src/core/lib/surface/channel_stack_type.h",
    "src/core/lib/surface/completion_queue.h",
    "src/core/lib/surface/event_string.h",
    "src/core/lib/surface/init.h",
    "src/core/lib/surface/lame_client.h",
    "src/core/lib/surface/server.h",
    "src/core/lib/transport/byte_stream.h",
    "src/core/lib/transport/connectivity_state.h",
    "src/core/lib/transport/metadata.h",
    "src/core/lib/transport/metadata_batch.h",
    "src/core/lib/transport/static_metadata.h",
    "src/core/lib/transport/timeout_encoding.h",
    "src/core/lib/transport/transport.h",
    "src/core/lib/transport/transport_impl.h",
    "third_party/objective_c/Cronet/cronet_c_for_grpc.h",
    "src/core/ext/transport/chttp2/transport/bin_decoder.h",
    "src/core/ext/transport/chttp2/transport/bin_encoder.h",
    "src/core/ext/transport/chttp2/transport/chttp2_transport.h",
    "src/core/ext/transport/chttp2/transport/frame.h",
    "src/core/ext/transport/chttp2/transport/frame_data.h",
    "src/core/ext/transport/chttp2/transport/frame_goaway.h",
    "src/core/ext/transport/chttp2/transport/frame_ping.h",
    "src/core/ext/transport/chttp2/transport/frame_rst_stream.h",
    "src/core/ext/transport/chttp2/transport/frame_settings.h",
    "src/core/ext/transport/chttp2/transport/frame_window_update.h",
    "src/core/ext/transport/chttp2/transport/hpack_encoder.h",
    "src/core/ext/transport/chttp2/transport/hpack_parser.h",
    "src/core/ext/transport/chttp2/transport/hpack_table.h",
    "src/core/ext/transport/chttp2/transport/http2_errors.h",
    "src/core/ext/transport/chttp2/transport/huffsyms.h",
    "src/core/ext/transport/chttp2/transport/incoming_metadata.h",
    "src/core/ext/transport/chttp2/transport/internal.h",
    "src/core/ext/transport/chttp2/transport/status_conversion.h",
    "src/core/ext/transport/chttp2/transport/stream_map.h",
    "src/core/ext/transport/chttp2/transport/varint.h",
    "src/core/ext/transport/chttp2/alpn/alpn.h",
    "src/core/ext/client_config/client_channel.h",
    "src/core/ext/client_config/client_channel_factory.h",
    "src/core/ext/client_config/connector.h",
    "src/core/ext/client_config/http_connect_handshaker.h",
    "src/core/ext/client_config/initial_connect_string.h",
    "src/core/ext/client_config/lb_policy.h",
    "src/core/ext/client_config/lb_policy_factory.h",
    "src/core/ext/client_config/lb_policy_registry.h",
    "src/core/ext/client_config/parse_address.h",
    "src/core/ext/client_config/resolver.h",
    "src/core/ext/client_config/resolver_factory.h",
    "src/core/ext/client_config/resolver_registry.h",
    "src/core/ext/client_config/resolver_result.h",
    "src/core/ext/client_config/subchannel.h",
    "src/core/ext/client_config/subchannel_index.h",
    "src/core/ext/client_config/uri_parser.h",
    "src/core/lib/security/context/security_context.h",
    "src/core/lib/security/credentials/composite/composite_credentials.h",
    "src/core/lib/security/credentials/credentials.h",
    "src/core/lib/security/credentials/fake/fake_credentials.h",
    "src/core/lib/security/credentials/google_default/google_default_credentials.h",
    "src/core/lib/security/credentials/iam/iam_credentials.h",
    "src/core/lib/security/credentials/jwt/json_token.h",
    "src/core/lib/security/credentials/jwt/jwt_credentials.h",
    "src/core/lib/security/credentials/jwt/jwt_verifier.h",
    "src/core/lib/security/credentials/oauth2/oauth2_credentials.h",
    "src/core/lib/security/credentials/plugin/plugin_credentials.h",
    "src/core/lib/security/credentials/ssl/ssl_credentials.h",
    "src/core/lib/security/transport/auth_filters.h",
    "src/core/lib/security/transport/handshake.h",
    "src/core/lib/security/transport/secure_endpoint.h",
    "src/core/lib/security/transport/security_connector.h",
    "src/core/lib/security/transport/tsi_error.h",
    "src/core/lib/security/util/b64.h",
    "src/core/lib/security/util/json_util.h",
    "src/core/lib/tsi/fake_transport_security.h",
    "src/core/lib/tsi/ssl_transport_security.h",
    "src/core/lib/tsi/ssl_types.h",
    "src/core/lib/tsi/transport_security.h",
    "src/core/lib/tsi/transport_security_interface.h",
    "src/core/lib/surface/init.c",
    "src/core/lib/channel/channel_args.c",
    "src/core/lib/channel/channel_stack.c",
    "src/core/lib/channel/channel_stack_builder.c",
    "src/core/lib/channel/compress_filter.c",
    "src/core/lib/channel/connected_channel.c",
    "src/core/lib/channel/deadline_filter.c",
    "src/core/lib/channel/handshaker.c",
    "src/core/lib/channel/http_client_filter.c",
    "src/core/lib/channel/http_server_filter.c",
    "src/core/lib/channel/message_size_filter.c",
    "src/core/lib/compression/compression.c",
    "src/core/lib/compression/message_compress.c",
    "src/core/lib/debug/trace.c",
    "src/core/lib/http/format_request.c",
    "src/core/lib/http/httpcli.c",
    "src/core/lib/http/parser.c",
    "src/core/lib/iomgr/closure.c",
    "src/core/lib/iomgr/combiner.c",
    "src/core/lib/iomgr/endpoint.c",
    "src/core/lib/iomgr/endpoint_pair_posix.c",
    "src/core/lib/iomgr/endpoint_pair_windows.c",
    "src/core/lib/iomgr/error.c",
    "src/core/lib/iomgr/ev_epoll_linux.c",
    "src/core/lib/iomgr/ev_poll_and_epoll_posix.c",
    "src/core/lib/iomgr/ev_poll_posix.c",
    "src/core/lib/iomgr/ev_posix.c",
    "src/core/lib/iomgr/exec_ctx.c",
    "src/core/lib/iomgr/executor.c",
    "src/core/lib/iomgr/iocp_windows.c",
    "src/core/lib/iomgr/iomgr.c",
    "src/core/lib/iomgr/iomgr_posix.c",
    "src/core/lib/iomgr/iomgr_windows.c",
    "src/core/lib/iomgr/load_file.c",
    "src/core/lib/iomgr/network_status_tracker.c",
    "src/core/lib/iomgr/polling_entity.c",
    "src/core/lib/iomgr/pollset_set_windows.c",
    "src/core/lib/iomgr/pollset_windows.c",
    "src/core/lib/iomgr/resolve_address_posix.c",
    "src/core/lib/iomgr/resolve_address_windows.c",
    "src/core/lib/iomgr/sockaddr_utils.c",
    "src/core/lib/iomgr/socket_utils_common_posix.c",
    "src/core/lib/iomgr/socket_utils_linux.c",
    "src/core/lib/iomgr/socket_utils_posix.c",
    "src/core/lib/iomgr/socket_windows.c",
    "src/core/lib/iomgr/tcp_client_posix.c",
    "src/core/lib/iomgr/tcp_client_windows.c",
    "src/core/lib/iomgr/tcp_posix.c",
    "src/core/lib/iomgr/tcp_server_posix.c",
    "src/core/lib/iomgr/tcp_server_windows.c",
    "src/core/lib/iomgr/tcp_windows.c",
    "src/core/lib/iomgr/time_averaged_stats.c",
    "src/core/lib/iomgr/timer.c",
    "src/core/lib/iomgr/timer_heap.c",
    "src/core/lib/iomgr/udp_server.c",
    "src/core/lib/iomgr/unix_sockets_posix.c",
    "src/core/lib/iomgr/unix_sockets_posix_noop.c",
    "src/core/lib/iomgr/wakeup_fd_eventfd.c",
    "src/core/lib/iomgr/wakeup_fd_nospecial.c",
    "src/core/lib/iomgr/wakeup_fd_pipe.c",
    "src/core/lib/iomgr/wakeup_fd_posix.c",
    "src/core/lib/iomgr/workqueue_posix.c",
    "src/core/lib/iomgr/workqueue_windows.c",
    "src/core/lib/json/json.c",
    "src/core/lib/json/json_reader.c",
    "src/core/lib/json/json_string.c",
    "src/core/lib/json/json_writer.c",
    "src/core/lib/surface/alarm.c",
    "src/core/lib/surface/api_trace.c",
    "src/core/lib/surface/byte_buffer.c",
    "src/core/lib/surface/byte_buffer_reader.c",
    "src/core/lib/surface/call.c",
    "src/core/lib/surface/call_details.c",
    "src/core/lib/surface/call_log_batch.c",
    "src/core/lib/surface/channel.c",
    "src/core/lib/surface/channel_init.c",
    "src/core/lib/surface/channel_ping.c",
    "src/core/lib/surface/channel_stack_type.c",
    "src/core/lib/surface/completion_queue.c",
    "src/core/lib/surface/event_string.c",
    "src/core/lib/surface/lame_client.c",
    "src/core/lib/surface/metadata_array.c",
    "src/core/lib/surface/server.c",
    "src/core/lib/surface/validate_metadata.c",
    "src/core/lib/surface/version.c",
    "src/core/lib/transport/byte_stream.c",
    "src/core/lib/transport/connectivity_state.c",
    "src/core/lib/transport/metadata.c",
    "src/core/lib/transport/metadata_batch.c",
    "src/core/lib/transport/static_metadata.c",
    "src/core/lib/transport/timeout_encoding.c",
    "src/core/lib/transport/transport.c",
    "src/core/lib/transport/transport_op_string.c",
    "src/core/ext/transport/cronet/client/secure/cronet_channel_create.c",
    "src/core/ext/transport/cronet/transport/cronet_api_dummy.c",
    "src/core/ext/transport/cronet/transport/cronet_transport.c",
    "src/core/ext/transport/chttp2/client/secure/secure_channel_create.c",
    "src/core/ext/transport/chttp2/transport/bin_decoder.c",
    "src/core/ext/transport/chttp2/transport/bin_encoder.c",
    "src/core/ext/transport/chttp2/transport/chttp2_plugin.c",
    "src/core/ext/transport/chttp2/transport/chttp2_transport.c",
    "src/core/ext/transport/chttp2/transport/frame_data.c",
    "src/core/ext/transport/chttp2/transport/frame_goaway.c",
    "src/core/ext/transport/chttp2/transport/frame_ping.c",
    "src/core/ext/transport/chttp2/transport/frame_rst_stream.c",
    "src/core/ext/transport/chttp2/transport/frame_settings.c",
    "src/core/ext/transport/chttp2/transport/frame_window_update.c",
    "src/core/ext/transport/chttp2/transport/hpack_encoder.c",
    "src/core/ext/transport/chttp2/transport/hpack_parser.c",
    "src/core/ext/transport/chttp2/transport/hpack_table.c",
    "src/core/ext/transport/chttp2/transport/huffsyms.c",
    "src/core/ext/transport/chttp2/transport/incoming_metadata.c",
    "src/core/ext/transport/chttp2/transport/parsing.c",
    "src/core/ext/transport/chttp2/transport/status_conversion.c",
    "src/core/ext/transport/chttp2/transport/stream_lists.c",
    "src/core/ext/transport/chttp2/transport/stream_map.c",
    "src/core/ext/transport/chttp2/transport/varint.c",
    "src/core/ext/transport/chttp2/transport/writing.c",
    "src/core/ext/transport/chttp2/alpn/alpn.c",
    "src/core/ext/client_config/channel_connectivity.c",
    "src/core/ext/client_config/client_channel.c",
    "src/core/ext/client_config/client_channel_factory.c",
    "src/core/ext/client_config/client_config_plugin.c",
    "src/core/ext/client_config/connector.c",
    "src/core/ext/client_config/default_initial_connect_string.c",
    "src/core/ext/client_config/http_connect_handshaker.c",
    "src/core/ext/client_config/initial_connect_string.c",
    "src/core/ext/client_config/lb_policy.c",
    "src/core/ext/client_config/lb_policy_factory.c",
    "src/core/ext/client_config/lb_policy_registry.c",
    "src/core/ext/client_config/parse_address.c",
    "src/core/ext/client_config/resolver.c",
    "src/core/ext/client_config/resolver_factory.c",
    "src/core/ext/client_config/resolver_registry.c",
    "src/core/ext/client_config/resolver_result.c",
    "src/core/ext/client_config/subchannel.c",
    "src/core/ext/client_config/subchannel_index.c",
    "src/core/ext/client_config/uri_parser.c",
    "src/core/lib/http/httpcli_security_connector.c",
    "src/core/lib/security/context/security_context.c",
    "src/core/lib/security/credentials/composite/composite_credentials.c",
    "src/core/lib/security/credentials/credentials.c",
    "src/core/lib/security/credentials/credentials_metadata.c",
    "src/core/lib/security/credentials/fake/fake_credentials.c",
    "src/core/lib/security/credentials/google_default/credentials_posix.c",
    "src/core/lib/security/credentials/google_default/credentials_windows.c",
    "src/core/lib/security/credentials/google_default/google_default_credentials.c",
    "src/core/lib/security/credentials/iam/iam_credentials.c",
    "src/core/lib/security/credentials/jwt/json_token.c",
    "src/core/lib/security/credentials/jwt/jwt_credentials.c",
    "src/core/lib/security/credentials/jwt/jwt_verifier.c",
    "src/core/lib/security/credentials/oauth2/oauth2_credentials.c",
    "src/core/lib/security/credentials/plugin/plugin_credentials.c",
    "src/core/lib/security/credentials/ssl/ssl_credentials.c",
    "src/core/lib/security/transport/client_auth_filter.c",
    "src/core/lib/security/transport/handshake.c",
    "src/core/lib/security/transport/secure_endpoint.c",
    "src/core/lib/security/transport/security_connector.c",
    "src/core/lib/security/transport/server_auth_filter.c",
    "src/core/lib/security/transport/tsi_error.c",
    "src/core/lib/security/util/b64.c",
    "src/core/lib/security/util/json_util.c",
    "src/core/lib/surface/init_secure.c",
    "src/core/lib/tsi/fake_transport_security.c",
    "src/core/lib/tsi/ssl_transport_security.c",
    "src/core/lib/tsi/transport_security.c",
    "src/core/plugin_registry/grpc_cronet_plugin_registry.c",
  ],
  hdrs = [
    "include/grpc/byte_buffer.h",
    "include/grpc/byte_buffer_reader.h",
    "include/grpc/compression.h",
    "include/grpc/grpc.h",
    "include/grpc/grpc_posix.h",
    "include/grpc/grpc_security_constants.h",
    "include/grpc/status.h",
    "include/grpc/impl/codegen/byte_buffer_reader.h",
    "include/grpc/impl/codegen/compression_types.h",
    "include/grpc/impl/codegen/connectivity_state.h",
    "include/grpc/impl/codegen/grpc_types.h",
    "include/grpc/impl/codegen/propagation_bits.h",
    "include/grpc/impl/codegen/status.h",
    "include/grpc/impl/codegen/atm.h",
    "include/grpc/impl/codegen/atm_gcc_atomic.h",
    "include/grpc/impl/codegen/atm_gcc_sync.h",
    "include/grpc/impl/codegen/atm_windows.h",
    "include/grpc/impl/codegen/gpr_types.h",
    "include/grpc/impl/codegen/port_platform.h",
    "include/grpc/impl/codegen/slice.h",
    "include/grpc/impl/codegen/sync.h",
    "include/grpc/impl/codegen/sync_generic.h",
    "include/grpc/impl/codegen/sync_posix.h",
    "include/grpc/impl/codegen/sync_windows.h",
    "include/grpc/grpc_cronet.h",
    "include/grpc/grpc_security.h",
  ],
  includes = [
    "include",
  ],
  deps = [
    "//external:libssl",
    ":gpr",
  ],
)



cc_library(
  name = "grpc_dll",
  srcs = [
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":gpr",
    ":grpc",
  ],
)



cc_library(
  name = "grpc_test_util",
  srcs = [
    "test/core/end2end/data/ssl_test_data.h",
    "test/core/security/oauth2_utils.h",
    "test/core/end2end/cq_verifier.h",
    "test/core/end2end/fake_resolver.h",
    "test/core/end2end/fixtures/http_proxy.h",
    "test/core/end2end/fixtures/proxy.h",
    "test/core/iomgr/endpoint_tests.h",
    "test/core/util/grpc_profiler.h",
    "test/core/util/memory_counters.h",
    "test/core/util/mock_endpoint.h",
    "test/core/util/parse_hexstring.h",
    "test/core/util/passthru_endpoint.h",
    "test/core/util/port.h",
    "test/core/util/port_server_client.h",
    "test/core/util/slice_splitter.h",
    "src/core/lib/channel/channel_args.h",
    "src/core/lib/channel/channel_stack.h",
    "src/core/lib/channel/channel_stack_builder.h",
    "src/core/lib/channel/compress_filter.h",
    "src/core/lib/channel/connected_channel.h",
    "src/core/lib/channel/context.h",
    "src/core/lib/channel/deadline_filter.h",
    "src/core/lib/channel/handshaker.h",
    "src/core/lib/channel/http_client_filter.h",
    "src/core/lib/channel/http_server_filter.h",
    "src/core/lib/channel/message_size_filter.h",
    "src/core/lib/compression/algorithm_metadata.h",
    "src/core/lib/compression/message_compress.h",
    "src/core/lib/debug/trace.h",
    "src/core/lib/http/format_request.h",
    "src/core/lib/http/httpcli.h",
    "src/core/lib/http/parser.h",
    "src/core/lib/iomgr/closure.h",
    "src/core/lib/iomgr/combiner.h",
    "src/core/lib/iomgr/endpoint.h",
    "src/core/lib/iomgr/endpoint_pair.h",
    "src/core/lib/iomgr/error.h",
    "src/core/lib/iomgr/ev_epoll_linux.h",
    "src/core/lib/iomgr/ev_poll_and_epoll_posix.h",
    "src/core/lib/iomgr/ev_poll_posix.h",
    "src/core/lib/iomgr/ev_posix.h",
    "src/core/lib/iomgr/exec_ctx.h",
    "src/core/lib/iomgr/executor.h",
    "src/core/lib/iomgr/iocp_windows.h",
    "src/core/lib/iomgr/iomgr.h",
    "src/core/lib/iomgr/iomgr_internal.h",
    "src/core/lib/iomgr/iomgr_posix.h",
    "src/core/lib/iomgr/load_file.h",
    "src/core/lib/iomgr/network_status_tracker.h",
    "src/core/lib/iomgr/polling_entity.h",
    "src/core/lib/iomgr/pollset.h",
    "src/core/lib/iomgr/pollset_set.h",
    "src/core/lib/iomgr/pollset_set_windows.h",
    "src/core/lib/iomgr/pollset_windows.h",
    "src/core/lib/iomgr/resolve_address.h",
    "src/core/lib/iomgr/sockaddr.h",
    "src/core/lib/iomgr/sockaddr_posix.h",
    "src/core/lib/iomgr/sockaddr_utils.h",
    "src/core/lib/iomgr/sockaddr_windows.h",
    "src/core/lib/iomgr/socket_utils_posix.h",
    "src/core/lib/iomgr/socket_windows.h",
    "src/core/lib/iomgr/tcp_client.h",
    "src/core/lib/iomgr/tcp_posix.h",
    "src/core/lib/iomgr/tcp_server.h",
    "src/core/lib/iomgr/tcp_windows.h",
    "src/core/lib/iomgr/time_averaged_stats.h",
    "src/core/lib/iomgr/timer.h",
    "src/core/lib/iomgr/timer_heap.h",
    "src/core/lib/iomgr/udp_server.h",
    "src/core/lib/iomgr/unix_sockets_posix.h",
    "src/core/lib/iomgr/wakeup_fd_pipe.h",
    "src/core/lib/iomgr/wakeup_fd_posix.h",
    "src/core/lib/iomgr/workqueue.h",
    "src/core/lib/iomgr/workqueue_posix.h",
    "src/core/lib/iomgr/workqueue_windows.h",
    "src/core/lib/json/json.h",
    "src/core/lib/json/json_common.h",
    "src/core/lib/json/json_reader.h",
    "src/core/lib/json/json_writer.h",
    "src/core/lib/surface/api_trace.h",
    "src/core/lib/surface/call.h",
    "src/core/lib/surface/call_test_only.h",
    "src/core/lib/surface/channel.h",
    "src/core/lib/surface/channel_init.h",
    "src/core/lib/surface/channel_stack_type.h",
    "src/core/lib/surface/completion_queue.h",
    "src/core/lib/surface/event_string.h",
    "src/core/lib/surface/init.h",
    "src/core/lib/surface/lame_client.h",
    "src/core/lib/surface/server.h",
    "src/core/lib/transport/byte_stream.h",
    "src/core/lib/transport/connectivity_state.h",
    "src/core/lib/transport/metadata.h",
    "src/core/lib/transport/metadata_batch.h",
    "src/core/lib/transport/static_metadata.h",
    "src/core/lib/transport/timeout_encoding.h",
    "src/core/lib/transport/transport.h",
    "src/core/lib/transport/transport_impl.h",
    "test/core/end2end/data/client_certs.c",
    "test/core/end2end/data/server1_cert.c",
    "test/core/end2end/data/server1_key.c",
    "test/core/end2end/data/test_root_cert.c",
    "test/core/security/oauth2_utils.c",
    "test/core/end2end/cq_verifier.c",
    "test/core/end2end/fake_resolver.c",
    "test/core/end2end/fixtures/http_proxy.c",
    "test/core/end2end/fixtures/proxy.c",
    "test/core/iomgr/endpoint_tests.c",
    "test/core/util/grpc_profiler.c",
    "test/core/util/memory_counters.c",
    "test/core/util/mock_endpoint.c",
    "test/core/util/parse_hexstring.c",
    "test/core/util/passthru_endpoint.c",
    "test/core/util/port_posix.c",
    "test/core/util/port_server_client.c",
    "test/core/util/port_windows.c",
    "test/core/util/slice_splitter.c",
    "src/core/lib/channel/channel_args.c",
    "src/core/lib/channel/channel_stack.c",
    "src/core/lib/channel/channel_stack_builder.c",
    "src/core/lib/channel/compress_filter.c",
    "src/core/lib/channel/connected_channel.c",
    "src/core/lib/channel/deadline_filter.c",
    "src/core/lib/channel/handshaker.c",
    "src/core/lib/channel/http_client_filter.c",
    "src/core/lib/channel/http_server_filter.c",
    "src/core/lib/channel/message_size_filter.c",
    "src/core/lib/compression/compression.c",
    "src/core/lib/compression/message_compress.c",
    "src/core/lib/debug/trace.c",
    "src/core/lib/http/format_request.c",
    "src/core/lib/http/httpcli.c",
    "src/core/lib/http/parser.c",
    "src/core/lib/iomgr/closure.c",
    "src/core/lib/iomgr/combiner.c",
    "src/core/lib/iomgr/endpoint.c",
    "src/core/lib/iomgr/endpoint_pair_posix.c",
    "src/core/lib/iomgr/endpoint_pair_windows.c",
    "src/core/lib/iomgr/error.c",
    "src/core/lib/iomgr/ev_epoll_linux.c",
    "src/core/lib/iomgr/ev_poll_and_epoll_posix.c",
    "src/core/lib/iomgr/ev_poll_posix.c",
    "src/core/lib/iomgr/ev_posix.c",
    "src/core/lib/iomgr/exec_ctx.c",
    "src/core/lib/iomgr/executor.c",
    "src/core/lib/iomgr/iocp_windows.c",
    "src/core/lib/iomgr/iomgr.c",
    "src/core/lib/iomgr/iomgr_posix.c",
    "src/core/lib/iomgr/iomgr_windows.c",
    "src/core/lib/iomgr/load_file.c",
    "src/core/lib/iomgr/network_status_tracker.c",
    "src/core/lib/iomgr/polling_entity.c",
    "src/core/lib/iomgr/pollset_set_windows.c",
    "src/core/lib/iomgr/pollset_windows.c",
    "src/core/lib/iomgr/resolve_address_posix.c",
    "src/core/lib/iomgr/resolve_address_windows.c",
    "src/core/lib/iomgr/sockaddr_utils.c",
    "src/core/lib/iomgr/socket_utils_common_posix.c",
    "src/core/lib/iomgr/socket_utils_linux.c",
    "src/core/lib/iomgr/socket_utils_posix.c",
    "src/core/lib/iomgr/socket_windows.c",
    "src/core/lib/iomgr/tcp_client_posix.c",
    "src/core/lib/iomgr/tcp_client_windows.c",
    "src/core/lib/iomgr/tcp_posix.c",
    "src/core/lib/iomgr/tcp_server_posix.c",
    "src/core/lib/iomgr/tcp_server_windows.c",
    "src/core/lib/iomgr/tcp_windows.c",
    "src/core/lib/iomgr/time_averaged_stats.c",
    "src/core/lib/iomgr/timer.c",
    "src/core/lib/iomgr/timer_heap.c",
    "src/core/lib/iomgr/udp_server.c",
    "src/core/lib/iomgr/unix_sockets_posix.c",
    "src/core/lib/iomgr/unix_sockets_posix_noop.c",
    "src/core/lib/iomgr/wakeup_fd_eventfd.c",
    "src/core/lib/iomgr/wakeup_fd_nospecial.c",
    "src/core/lib/iomgr/wakeup_fd_pipe.c",
    "src/core/lib/iomgr/wakeup_fd_posix.c",
    "src/core/lib/iomgr/workqueue_posix.c",
    "src/core/lib/iomgr/workqueue_windows.c",
    "src/core/lib/json/json.c",
    "src/core/lib/json/json_reader.c",
    "src/core/lib/json/json_string.c",
    "src/core/lib/json/json_writer.c",
    "src/core/lib/surface/alarm.c",
    "src/core/lib/surface/api_trace.c",
    "src/core/lib/surface/byte_buffer.c",
    "src/core/lib/surface/byte_buffer_reader.c",
    "src/core/lib/surface/call.c",
    "src/core/lib/surface/call_details.c",
    "src/core/lib/surface/call_log_batch.c",
    "src/core/lib/surface/channel.c",
    "src/core/lib/surface/channel_init.c",
    "src/core/lib/surface/channel_ping.c",
    "src/core/lib/surface/channel_stack_type.c",
    "src/core/lib/surface/completion_queue.c",
    "src/core/lib/surface/event_string.c",
    "src/core/lib/surface/lame_client.c",
    "src/core/lib/surface/metadata_array.c",
    "src/core/lib/surface/server.c",
    "src/core/lib/surface/validate_metadata.c",
    "src/core/lib/surface/version.c",
    "src/core/lib/transport/byte_stream.c",
    "src/core/lib/transport/connectivity_state.c",
    "src/core/lib/transport/metadata.c",
    "src/core/lib/transport/metadata_batch.c",
    "src/core/lib/transport/static_metadata.c",
    "src/core/lib/transport/timeout_encoding.c",
    "src/core/lib/transport/transport.c",
    "src/core/lib/transport/transport_op_string.c",
  ],
  hdrs = [
    "include/grpc/byte_buffer.h",
    "include/grpc/byte_buffer_reader.h",
    "include/grpc/compression.h",
    "include/grpc/grpc.h",
    "include/grpc/grpc_posix.h",
    "include/grpc/grpc_security_constants.h",
    "include/grpc/status.h",
    "include/grpc/impl/codegen/byte_buffer_reader.h",
    "include/grpc/impl/codegen/compression_types.h",
    "include/grpc/impl/codegen/connectivity_state.h",
    "include/grpc/impl/codegen/grpc_types.h",
    "include/grpc/impl/codegen/propagation_bits.h",
    "include/grpc/impl/codegen/status.h",
    "include/grpc/impl/codegen/atm.h",
    "include/grpc/impl/codegen/atm_gcc_atomic.h",
    "include/grpc/impl/codegen/atm_gcc_sync.h",
    "include/grpc/impl/codegen/atm_windows.h",
    "include/grpc/impl/codegen/gpr_types.h",
    "include/grpc/impl/codegen/port_platform.h",
    "include/grpc/impl/codegen/slice.h",
    "include/grpc/impl/codegen/sync.h",
    "include/grpc/impl/codegen/sync_generic.h",
    "include/grpc/impl/codegen/sync_posix.h",
    "include/grpc/impl/codegen/sync_windows.h",
  ],
  includes = [
    "include",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
    ":grpc",
  ],
  copts = [
    "-std=gnu99",
  ],
)



cc_library(
  name = "grpc_test_util_unsecure",
  srcs = [
    "test/core/end2end/cq_verifier.h",
    "test/core/end2end/fake_resolver.h",
    "test/core/end2end/fixtures/http_proxy.h",
    "test/core/end2end/fixtures/proxy.h",
    "test/core/iomgr/endpoint_tests.h",
    "test/core/util/grpc_profiler.h",
    "test/core/util/memory_counters.h",
    "test/core/util/mock_endpoint.h",
    "test/core/util/parse_hexstring.h",
    "test/core/util/passthru_endpoint.h",
    "test/core/util/port.h",
    "test/core/util/port_server_client.h",
    "test/core/util/slice_splitter.h",
    "test/core/end2end/cq_verifier.c",
    "test/core/end2end/fake_resolver.c",
    "test/core/end2end/fixtures/http_proxy.c",
    "test/core/end2end/fixtures/proxy.c",
    "test/core/iomgr/endpoint_tests.c",
    "test/core/util/grpc_profiler.c",
    "test/core/util/memory_counters.c",
    "test/core/util/mock_endpoint.c",
    "test/core/util/parse_hexstring.c",
    "test/core/util/passthru_endpoint.c",
    "test/core/util/port_posix.c",
    "test/core/util/port_server_client.c",
    "test/core/util/port_windows.c",
    "test/core/util/slice_splitter.c",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":gpr",
    ":gpr_test_util",
    ":grpc_unsecure",
    ":grpc",
  ],
)



cc_library(
  name = "grpc_unsecure",
  srcs = [
    "src/core/lib/channel/channel_args.h",
    "src/core/lib/channel/channel_stack.h",
    "src/core/lib/channel/channel_stack_builder.h",
    "src/core/lib/channel/compress_filter.h",
    "src/core/lib/channel/connected_channel.h",
    "src/core/lib/channel/context.h",
    "src/core/lib/channel/deadline_filter.h",
    "src/core/lib/channel/handshaker.h",
    "src/core/lib/channel/http_client_filter.h",
    "src/core/lib/channel/http_server_filter.h",
    "src/core/lib/channel/message_size_filter.h",
    "src/core/lib/compression/algorithm_metadata.h",
    "src/core/lib/compression/message_compress.h",
    "src/core/lib/debug/trace.h",
    "src/core/lib/http/format_request.h",
    "src/core/lib/http/httpcli.h",
    "src/core/lib/http/parser.h",
    "src/core/lib/iomgr/closure.h",
    "src/core/lib/iomgr/combiner.h",
    "src/core/lib/iomgr/endpoint.h",
    "src/core/lib/iomgr/endpoint_pair.h",
    "src/core/lib/iomgr/error.h",
    "src/core/lib/iomgr/ev_epoll_linux.h",
    "src/core/lib/iomgr/ev_poll_and_epoll_posix.h",
    "src/core/lib/iomgr/ev_poll_posix.h",
    "src/core/lib/iomgr/ev_posix.h",
    "src/core/lib/iomgr/exec_ctx.h",
    "src/core/lib/iomgr/executor.h",
    "src/core/lib/iomgr/iocp_windows.h",
    "src/core/lib/iomgr/iomgr.h",
    "src/core/lib/iomgr/iomgr_internal.h",
    "src/core/lib/iomgr/iomgr_posix.h",
    "src/core/lib/iomgr/load_file.h",
    "src/core/lib/iomgr/network_status_tracker.h",
    "src/core/lib/iomgr/polling_entity.h",
    "src/core/lib/iomgr/pollset.h",
    "src/core/lib/iomgr/pollset_set.h",
    "src/core/lib/iomgr/pollset_set_windows.h",
    "src/core/lib/iomgr/pollset_windows.h",
    "src/core/lib/iomgr/resolve_address.h",
    "src/core/lib/iomgr/sockaddr.h",
    "src/core/lib/iomgr/sockaddr_posix.h",
    "src/core/lib/iomgr/sockaddr_utils.h",
    "src/core/lib/iomgr/sockaddr_windows.h",
    "src/core/lib/iomgr/socket_utils_posix.h",
    "src/core/lib/iomgr/socket_windows.h",
    "src/core/lib/iomgr/tcp_client.h",
    "src/core/lib/iomgr/tcp_posix.h",
    "src/core/lib/iomgr/tcp_server.h",
    "src/core/lib/iomgr/tcp_windows.h",
    "src/core/lib/iomgr/time_averaged_stats.h",
    "src/core/lib/iomgr/timer.h",
    "src/core/lib/iomgr/timer_heap.h",
    "src/core/lib/iomgr/udp_server.h",
    "src/core/lib/iomgr/unix_sockets_posix.h",
    "src/core/lib/iomgr/wakeup_fd_pipe.h",
    "src/core/lib/iomgr/wakeup_fd_posix.h",
    "src/core/lib/iomgr/workqueue.h",
    "src/core/lib/iomgr/workqueue_posix.h",
    "src/core/lib/iomgr/workqueue_windows.h",
    "src/core/lib/json/json.h",
    "src/core/lib/json/json_common.h",
    "src/core/lib/json/json_reader.h",
    "src/core/lib/json/json_writer.h",
    "src/core/lib/surface/api_trace.h",
    "src/core/lib/surface/call.h",
    "src/core/lib/surface/call_test_only.h",
    "src/core/lib/surface/channel.h",
    "src/core/lib/surface/channel_init.h",
    "src/core/lib/surface/channel_stack_type.h",
    "src/core/lib/surface/completion_queue.h",
    "src/core/lib/surface/event_string.h",
    "src/core/lib/surface/init.h",
    "src/core/lib/surface/lame_client.h",
    "src/core/lib/surface/server.h",
    "src/core/lib/transport/byte_stream.h",
    "src/core/lib/transport/connectivity_state.h",
    "src/core/lib/transport/metadata.h",
    "src/core/lib/transport/metadata_batch.h",
    "src/core/lib/transport/static_metadata.h",
    "src/core/lib/transport/timeout_encoding.h",
    "src/core/lib/transport/transport.h",
    "src/core/lib/transport/transport_impl.h",
    "src/core/ext/transport/chttp2/transport/bin_decoder.h",
    "src/core/ext/transport/chttp2/transport/bin_encoder.h",
    "src/core/ext/transport/chttp2/transport/chttp2_transport.h",
    "src/core/ext/transport/chttp2/transport/frame.h",
    "src/core/ext/transport/chttp2/transport/frame_data.h",
    "src/core/ext/transport/chttp2/transport/frame_goaway.h",
    "src/core/ext/transport/chttp2/transport/frame_ping.h",
    "src/core/ext/transport/chttp2/transport/frame_rst_stream.h",
    "src/core/ext/transport/chttp2/transport/frame_settings.h",
    "src/core/ext/transport/chttp2/transport/frame_window_update.h",
    "src/core/ext/transport/chttp2/transport/hpack_encoder.h",
    "src/core/ext/transport/chttp2/transport/hpack_parser.h",
    "src/core/ext/transport/chttp2/transport/hpack_table.h",
    "src/core/ext/transport/chttp2/transport/http2_errors.h",
    "src/core/ext/transport/chttp2/transport/huffsyms.h",
    "src/core/ext/transport/chttp2/transport/incoming_metadata.h",
    "src/core/ext/transport/chttp2/transport/internal.h",
    "src/core/ext/transport/chttp2/transport/status_conversion.h",
    "src/core/ext/transport/chttp2/transport/stream_map.h",
    "src/core/ext/transport/chttp2/transport/varint.h",
    "src/core/ext/transport/chttp2/alpn/alpn.h",
    "src/core/ext/client_config/client_channel.h",
    "src/core/ext/client_config/client_channel_factory.h",
    "src/core/ext/client_config/connector.h",
    "src/core/ext/client_config/http_connect_handshaker.h",
    "src/core/ext/client_config/initial_connect_string.h",
    "src/core/ext/client_config/lb_policy.h",
    "src/core/ext/client_config/lb_policy_factory.h",
    "src/core/ext/client_config/lb_policy_registry.h",
    "src/core/ext/client_config/parse_address.h",
    "src/core/ext/client_config/resolver.h",
    "src/core/ext/client_config/resolver_factory.h",
    "src/core/ext/client_config/resolver_registry.h",
    "src/core/ext/client_config/resolver_result.h",
    "src/core/ext/client_config/subchannel.h",
    "src/core/ext/client_config/subchannel_index.h",
    "src/core/ext/client_config/uri_parser.h",
    "src/core/ext/load_reporting/load_reporting.h",
    "src/core/ext/load_reporting/load_reporting_filter.h",
    "src/core/ext/lb_policy/grpclb/grpclb.h",
    "src/core/ext/lb_policy/grpclb/load_balancer_api.h",
    "src/core/ext/lb_policy/grpclb/proto/grpc/lb/v1/load_balancer.pb.h",
    "src/core/ext/census/aggregation.h",
    "src/core/ext/census/base_resources.h",
    "src/core/ext/census/census_interface.h",
    "src/core/ext/census/census_rpc_stats.h",
    "src/core/ext/census/gen/census.pb.h",
    "src/core/ext/census/gen/trace_context.pb.h",
    "src/core/ext/census/grpc_filter.h",
    "src/core/ext/census/mlog.h",
    "src/core/ext/census/resource.h",
    "src/core/ext/census/rpc_metric_id.h",
    "src/core/ext/census/trace_context.h",
    "src/core/lib/surface/init.c",
    "src/core/lib/surface/init_unsecure.c",
    "src/core/lib/channel/channel_args.c",
    "src/core/lib/channel/channel_stack.c",
    "src/core/lib/channel/channel_stack_builder.c",
    "src/core/lib/channel/compress_filter.c",
    "src/core/lib/channel/connected_channel.c",
    "src/core/lib/channel/deadline_filter.c",
    "src/core/lib/channel/handshaker.c",
    "src/core/lib/channel/http_client_filter.c",
    "src/core/lib/channel/http_server_filter.c",
    "src/core/lib/channel/message_size_filter.c",
    "src/core/lib/compression/compression.c",
    "src/core/lib/compression/message_compress.c",
    "src/core/lib/debug/trace.c",
    "src/core/lib/http/format_request.c",
    "src/core/lib/http/httpcli.c",
    "src/core/lib/http/parser.c",
    "src/core/lib/iomgr/closure.c",
    "src/core/lib/iomgr/combiner.c",
    "src/core/lib/iomgr/endpoint.c",
    "src/core/lib/iomgr/endpoint_pair_posix.c",
    "src/core/lib/iomgr/endpoint_pair_windows.c",
    "src/core/lib/iomgr/error.c",
    "src/core/lib/iomgr/ev_epoll_linux.c",
    "src/core/lib/iomgr/ev_poll_and_epoll_posix.c",
    "src/core/lib/iomgr/ev_poll_posix.c",
    "src/core/lib/iomgr/ev_posix.c",
    "src/core/lib/iomgr/exec_ctx.c",
    "src/core/lib/iomgr/executor.c",
    "src/core/lib/iomgr/iocp_windows.c",
    "src/core/lib/iomgr/iomgr.c",
    "src/core/lib/iomgr/iomgr_posix.c",
    "src/core/lib/iomgr/iomgr_windows.c",
    "src/core/lib/iomgr/load_file.c",
    "src/core/lib/iomgr/network_status_tracker.c",
    "src/core/lib/iomgr/polling_entity.c",
    "src/core/lib/iomgr/pollset_set_windows.c",
    "src/core/lib/iomgr/pollset_windows.c",
    "src/core/lib/iomgr/resolve_address_posix.c",
    "src/core/lib/iomgr/resolve_address_windows.c",
    "src/core/lib/iomgr/sockaddr_utils.c",
    "src/core/lib/iomgr/socket_utils_common_posix.c",
    "src/core/lib/iomgr/socket_utils_linux.c",
    "src/core/lib/iomgr/socket_utils_posix.c",
    "src/core/lib/iomgr/socket_windows.c",
    "src/core/lib/iomgr/tcp_client_posix.c",
    "src/core/lib/iomgr/tcp_client_windows.c",
    "src/core/lib/iomgr/tcp_posix.c",
    "src/core/lib/iomgr/tcp_server_posix.c",
    "src/core/lib/iomgr/tcp_server_windows.c",
    "src/core/lib/iomgr/tcp_windows.c",
    "src/core/lib/iomgr/time_averaged_stats.c",
    "src/core/lib/iomgr/timer.c",
    "src/core/lib/iomgr/timer_heap.c",
    "src/core/lib/iomgr/udp_server.c",
    "src/core/lib/iomgr/unix_sockets_posix.c",
    "src/core/lib/iomgr/unix_sockets_posix_noop.c",
    "src/core/lib/iomgr/wakeup_fd_eventfd.c",
    "src/core/lib/iomgr/wakeup_fd_nospecial.c",
    "src/core/lib/iomgr/wakeup_fd_pipe.c",
    "src/core/lib/iomgr/wakeup_fd_posix.c",
    "src/core/lib/iomgr/workqueue_posix.c",
    "src/core/lib/iomgr/workqueue_windows.c",
    "src/core/lib/json/json.c",
    "src/core/lib/json/json_reader.c",
    "src/core/lib/json/json_string.c",
    "src/core/lib/json/json_writer.c",
    "src/core/lib/surface/alarm.c",
    "src/core/lib/surface/api_trace.c",
    "src/core/lib/surface/byte_buffer.c",
    "src/core/lib/surface/byte_buffer_reader.c",
    "src/core/lib/surface/call.c",
    "src/core/lib/surface/call_details.c",
    "src/core/lib/surface/call_log_batch.c",
    "src/core/lib/surface/channel.c",
    "src/core/lib/surface/channel_init.c",
    "src/core/lib/surface/channel_ping.c",
    "src/core/lib/surface/channel_stack_type.c",
    "src/core/lib/surface/completion_queue.c",
    "src/core/lib/surface/event_string.c",
    "src/core/lib/surface/lame_client.c",
    "src/core/lib/surface/metadata_array.c",
    "src/core/lib/surface/server.c",
    "src/core/lib/surface/validate_metadata.c",
    "src/core/lib/surface/version.c",
    "src/core/lib/transport/byte_stream.c",
    "src/core/lib/transport/connectivity_state.c",
    "src/core/lib/transport/metadata.c",
    "src/core/lib/transport/metadata_batch.c",
    "src/core/lib/transport/static_metadata.c",
    "src/core/lib/transport/timeout_encoding.c",
    "src/core/lib/transport/transport.c",
    "src/core/lib/transport/transport_op_string.c",
    "src/core/ext/transport/chttp2/server/insecure/server_chttp2.c",
    "src/core/ext/transport/chttp2/server/insecure/server_chttp2_posix.c",
    "src/core/ext/transport/chttp2/transport/bin_decoder.c",
    "src/core/ext/transport/chttp2/transport/bin_encoder.c",
    "src/core/ext/transport/chttp2/transport/chttp2_plugin.c",
    "src/core/ext/transport/chttp2/transport/chttp2_transport.c",
    "src/core/ext/transport/chttp2/transport/frame_data.c",
    "src/core/ext/transport/chttp2/transport/frame_goaway.c",
    "src/core/ext/transport/chttp2/transport/frame_ping.c",
    "src/core/ext/transport/chttp2/transport/frame_rst_stream.c",
    "src/core/ext/transport/chttp2/transport/frame_settings.c",
    "src/core/ext/transport/chttp2/transport/frame_window_update.c",
    "src/core/ext/transport/chttp2/transport/hpack_encoder.c",
    "src/core/ext/transport/chttp2/transport/hpack_parser.c",
    "src/core/ext/transport/chttp2/transport/hpack_table.c",
    "src/core/ext/transport/chttp2/transport/huffsyms.c",
    "src/core/ext/transport/chttp2/transport/incoming_metadata.c",
    "src/core/ext/transport/chttp2/transport/parsing.c",
    "src/core/ext/transport/chttp2/transport/status_conversion.c",
    "src/core/ext/transport/chttp2/transport/stream_lists.c",
    "src/core/ext/transport/chttp2/transport/stream_map.c",
    "src/core/ext/transport/chttp2/transport/varint.c",
    "src/core/ext/transport/chttp2/transport/writing.c",
    "src/core/ext/transport/chttp2/alpn/alpn.c",
    "src/core/ext/transport/chttp2/client/insecure/channel_create.c",
    "src/core/ext/transport/chttp2/client/insecure/channel_create_posix.c",
    "src/core/ext/client_config/channel_connectivity.c",
    "src/core/ext/client_config/client_channel.c",
    "src/core/ext/client_config/client_channel_factory.c",
    "src/core/ext/client_config/client_config_plugin.c",
    "src/core/ext/client_config/connector.c",
    "src/core/ext/client_config/default_initial_connect_string.c",
    "src/core/ext/client_config/http_connect_handshaker.c",
    "src/core/ext/client_config/initial_connect_string.c",
    "src/core/ext/client_config/lb_policy.c",
    "src/core/ext/client_config/lb_policy_factory.c",
    "src/core/ext/client_config/lb_policy_registry.c",
    "src/core/ext/client_config/parse_address.c",
    "src/core/ext/client_config/resolver.c",
    "src/core/ext/client_config/resolver_factory.c",
    "src/core/ext/client_config/resolver_registry.c",
    "src/core/ext/client_config/resolver_result.c",
    "src/core/ext/client_config/subchannel.c",
    "src/core/ext/client_config/subchannel_index.c",
    "src/core/ext/client_config/uri_parser.c",
    "src/core/ext/resolver/dns/native/dns_resolver.c",
    "src/core/ext/resolver/sockaddr/sockaddr_resolver.c",
    "src/core/ext/load_reporting/load_reporting.c",
    "src/core/ext/load_reporting/load_reporting_filter.c",
    "src/core/ext/lb_policy/grpclb/grpclb.c",
    "src/core/ext/lb_policy/grpclb/load_balancer_api.c",
    "src/core/ext/lb_policy/grpclb/proto/grpc/lb/v1/load_balancer.pb.c",
    "src/core/ext/lb_policy/pick_first/pick_first.c",
    "src/core/ext/lb_policy/round_robin/round_robin.c",
    "src/core/ext/census/base_resources.c",
    "src/core/ext/census/context.c",
    "src/core/ext/census/gen/census.pb.c",
    "src/core/ext/census/gen/trace_context.pb.c",
    "src/core/ext/census/grpc_context.c",
    "src/core/ext/census/grpc_filter.c",
    "src/core/ext/census/grpc_plugin.c",
    "src/core/ext/census/initialize.c",
    "src/core/ext/census/mlog.c",
    "src/core/ext/census/operation.c",
    "src/core/ext/census/placeholders.c",
    "src/core/ext/census/resource.c",
    "src/core/ext/census/trace_context.c",
    "src/core/ext/census/tracing.c",
    "src/core/plugin_registry/grpc_unsecure_plugin_registry.c",
  ],
  hdrs = [
    "include/grpc/byte_buffer.h",
    "include/grpc/byte_buffer_reader.h",
    "include/grpc/compression.h",
    "include/grpc/grpc.h",
    "include/grpc/grpc_posix.h",
    "include/grpc/grpc_security_constants.h",
    "include/grpc/status.h",
    "include/grpc/impl/codegen/byte_buffer_reader.h",
    "include/grpc/impl/codegen/compression_types.h",
    "include/grpc/impl/codegen/connectivity_state.h",
    "include/grpc/impl/codegen/grpc_types.h",
    "include/grpc/impl/codegen/propagation_bits.h",
    "include/grpc/impl/codegen/status.h",
    "include/grpc/impl/codegen/atm.h",
    "include/grpc/impl/codegen/atm_gcc_atomic.h",
    "include/grpc/impl/codegen/atm_gcc_sync.h",
    "include/grpc/impl/codegen/atm_windows.h",
    "include/grpc/impl/codegen/gpr_types.h",
    "include/grpc/impl/codegen/port_platform.h",
    "include/grpc/impl/codegen/slice.h",
    "include/grpc/impl/codegen/sync.h",
    "include/grpc/impl/codegen/sync_generic.h",
    "include/grpc/impl/codegen/sync_posix.h",
    "include/grpc/impl/codegen/sync_windows.h",
    "include/grpc/census.h",
  ],
  includes = [
    "include",
  ],
  deps = [
    ":gpr",
    "//third_party/nanopb",
  ],
  copts = [
    "-std=gnu99",
  ],
)



cc_library(
  name = "reconnect_server",
  srcs = [
    "test/core/util/reconnect_server.h",
    "test/core/util/reconnect_server.c",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":test_tcp_server",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)



cc_library(
  name = "test_tcp_server",
  srcs = [
    "test/core/util/test_tcp_server.h",
    "test/core/util/test_tcp_server.c",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)



cc_library(
  name = "grpc++",
  srcs = [
    "include/grpc++/impl/codegen/core_codegen.h",
    "src/cpp/client/secure_credentials.h",
    "src/cpp/common/secure_auth_context.h",
    "src/cpp/server/secure_server_credentials.h",
    "src/cpp/client/create_channel_internal.h",
    "src/cpp/common/channel_filter.h",
    "src/cpp/server/dynamic_thread_pool.h",
    "src/cpp/server/thread_pool_interface.h",
    "src/cpp/client/insecure_credentials.cc",
    "src/cpp/client/secure_credentials.cc",
    "src/cpp/common/auth_property_iterator.cc",
    "src/cpp/common/secure_auth_context.cc",
    "src/cpp/common/secure_channel_arguments.cc",
    "src/cpp/common/secure_create_auth_context.cc",
    "src/cpp/server/insecure_server_credentials.cc",
    "src/cpp/server/secure_server_credentials.cc",
    "src/cpp/client/channel_cc.cc",
    "src/cpp/client/client_context.cc",
    "src/cpp/client/create_channel.cc",
    "src/cpp/client/create_channel_internal.cc",
    "src/cpp/client/create_channel_posix.cc",
    "src/cpp/client/credentials_cc.cc",
    "src/cpp/client/generic_stub.cc",
    "src/cpp/common/channel_arguments.cc",
    "src/cpp/common/channel_filter.cc",
    "src/cpp/common/completion_queue_cc.cc",
    "src/cpp/common/core_codegen.cc",
    "src/cpp/common/rpc_method.cc",
    "src/cpp/server/async_generic_service.cc",
    "src/cpp/server/create_default_thread_pool.cc",
    "src/cpp/server/dynamic_thread_pool.cc",
    "src/cpp/server/server_builder.cc",
    "src/cpp/server/server_cc.cc",
    "src/cpp/server/server_context.cc",
    "src/cpp/server/server_credentials.cc",
    "src/cpp/server/server_posix.cc",
    "src/cpp/util/byte_buffer_cc.cc",
    "src/cpp/util/slice_cc.cc",
    "src/cpp/util/status.cc",
    "src/cpp/util/string_ref.cc",
    "src/cpp/util/time_cc.cc",
    "src/cpp/codegen/codegen_init.cc",
  ],
  hdrs = [
    "include/grpc++/alarm.h",
    "include/grpc++/channel.h",
    "include/grpc++/client_context.h",
    "include/grpc++/completion_queue.h",
    "include/grpc++/create_channel.h",
    "include/grpc++/create_channel_posix.h",
    "include/grpc++/generic/async_generic_service.h",
    "include/grpc++/generic/generic_stub.h",
    "include/grpc++/grpc++.h",
    "include/grpc++/impl/call.h",
    "include/grpc++/impl/client_unary_call.h",
    "include/grpc++/impl/codegen/core_codegen.h",
    "include/grpc++/impl/grpc_library.h",
    "include/grpc++/impl/method_handler_impl.h",
    "include/grpc++/impl/rpc_method.h",
    "include/grpc++/impl/rpc_service_method.h",
    "include/grpc++/impl/serialization_traits.h",
    "include/grpc++/impl/server_builder_option.h",
    "include/grpc++/impl/server_builder_plugin.h",
    "include/grpc++/impl/server_initializer.h",
    "include/grpc++/impl/service_type.h",
    "include/grpc++/impl/sync.h",
    "include/grpc++/impl/sync_cxx11.h",
    "include/grpc++/impl/sync_no_cxx11.h",
    "include/grpc++/impl/thd.h",
    "include/grpc++/impl/thd_cxx11.h",
    "include/grpc++/impl/thd_no_cxx11.h",
    "include/grpc++/security/auth_context.h",
    "include/grpc++/security/auth_metadata_processor.h",
    "include/grpc++/security/credentials.h",
    "include/grpc++/security/server_credentials.h",
    "include/grpc++/server.h",
    "include/grpc++/server_builder.h",
    "include/grpc++/server_context.h",
    "include/grpc++/server_posix.h",
    "include/grpc++/support/async_stream.h",
    "include/grpc++/support/async_unary_call.h",
    "include/grpc++/support/byte_buffer.h",
    "include/grpc++/support/channel_arguments.h",
    "include/grpc++/support/config.h",
    "include/grpc++/support/slice.h",
    "include/grpc++/support/status.h",
    "include/grpc++/support/status_code_enum.h",
    "include/grpc++/support/string_ref.h",
    "include/grpc++/support/stub_options.h",
    "include/grpc++/support/sync_stream.h",
    "include/grpc++/support/time.h",
    "include/grpc++/impl/codegen/async_stream.h",
    "include/grpc++/impl/codegen/async_unary_call.h",
    "include/grpc++/impl/codegen/call.h",
    "include/grpc++/impl/codegen/call_hook.h",
    "include/grpc++/impl/codegen/channel_interface.h",
    "include/grpc++/impl/codegen/client_context.h",
    "include/grpc++/impl/codegen/client_unary_call.h",
    "include/grpc++/impl/codegen/completion_queue.h",
    "include/grpc++/impl/codegen/completion_queue_tag.h",
    "include/grpc++/impl/codegen/config.h",
    "include/grpc++/impl/codegen/core_codegen_interface.h",
    "include/grpc++/impl/codegen/create_auth_context.h",
    "include/grpc++/impl/codegen/grpc_library.h",
    "include/grpc++/impl/codegen/method_handler_impl.h",
    "include/grpc++/impl/codegen/rpc_method.h",
    "include/grpc++/impl/codegen/rpc_service_method.h",
    "include/grpc++/impl/codegen/security/auth_context.h",
    "include/grpc++/impl/codegen/serialization_traits.h",
    "include/grpc++/impl/codegen/server_context.h",
    "include/grpc++/impl/codegen/server_interface.h",
    "include/grpc++/impl/codegen/service_type.h",
    "include/grpc++/impl/codegen/status.h",
    "include/grpc++/impl/codegen/status_code_enum.h",
    "include/grpc++/impl/codegen/status_helper.h",
    "include/grpc++/impl/codegen/string_ref.h",
    "include/grpc++/impl/codegen/stub_options.h",
    "include/grpc++/impl/codegen/sync.h",
    "include/grpc++/impl/codegen/sync_cxx11.h",
    "include/grpc++/impl/codegen/sync_no_cxx11.h",
    "include/grpc++/impl/codegen/sync_stream.h",
    "include/grpc++/impl/codegen/time.h",
    "include/grpc/impl/codegen/byte_buffer_reader.h",
    "include/grpc/impl/codegen/compression_types.h",
    "include/grpc/impl/codegen/connectivity_state.h",
    "include/grpc/impl/codegen/grpc_types.h",
    "include/grpc/impl/codegen/propagation_bits.h",
    "include/grpc/impl/codegen/status.h",
    "include/grpc/impl/codegen/atm.h",
    "include/grpc/impl/codegen/atm_gcc_atomic.h",
    "include/grpc/impl/codegen/atm_gcc_sync.h",
    "include/grpc/impl/codegen/atm_windows.h",
    "include/grpc/impl/codegen/gpr_types.h",
    "include/grpc/impl/codegen/port_platform.h",
    "include/grpc/impl/codegen/slice.h",
    "include/grpc/impl/codegen/sync.h",
    "include/grpc/impl/codegen/sync_generic.h",
    "include/grpc/impl/codegen/sync_posix.h",
    "include/grpc/impl/codegen/sync_windows.h",
  ],
  includes = [
    "include",
  ],
  deps = [
    "//external:libssl",
    "//external:protobuf_clib",
    ":grpc",
  ],
)



cc_library(
  name = "grpc++_reflection",
  srcs = [
    "src/cpp/ext/proto_server_reflection.h",
    "src/cpp/ext/proto_server_reflection.cc",
    "src/cpp/ext/proto_server_reflection_plugin.cc",
    "src/cpp/ext/reflection.grpc.pb.cc",
    "src/cpp/ext/reflection.pb.cc",
  ],
  hdrs = [
    "include/grpc++/ext/proto_server_reflection_plugin.h",
    "include/grpc++/ext/reflection.grpc.pb.h",
    "include/grpc++/ext/reflection.pb.h",
    "include/grpc++/impl/codegen/proto_utils.h",
    "include/grpc++/impl/codegen/async_stream.h",
    "include/grpc++/impl/codegen/async_unary_call.h",
    "include/grpc++/impl/codegen/call.h",
    "include/grpc++/impl/codegen/call_hook.h",
    "include/grpc++/impl/codegen/channel_interface.h",
    "include/grpc++/impl/codegen/client_context.h",
    "include/grpc++/impl/codegen/client_unary_call.h",
    "include/grpc++/impl/codegen/completion_queue.h",
    "include/grpc++/impl/codegen/completion_queue_tag.h",
    "include/grpc++/impl/codegen/config.h",
    "include/grpc++/impl/codegen/core_codegen_interface.h",
    "include/grpc++/impl/codegen/create_auth_context.h",
    "include/grpc++/impl/codegen/grpc_library.h",
    "include/grpc++/impl/codegen/method_handler_impl.h",
    "include/grpc++/impl/codegen/rpc_method.h",
    "include/grpc++/impl/codegen/rpc_service_method.h",
    "include/grpc++/impl/codegen/security/auth_context.h",
    "include/grpc++/impl/codegen/serialization_traits.h",
    "include/grpc++/impl/codegen/server_context.h",
    "include/grpc++/impl/codegen/server_interface.h",
    "include/grpc++/impl/codegen/service_type.h",
    "include/grpc++/impl/codegen/status.h",
    "include/grpc++/impl/codegen/status_code_enum.h",
    "include/grpc++/impl/codegen/status_helper.h",
    "include/grpc++/impl/codegen/string_ref.h",
    "include/grpc++/impl/codegen/stub_options.h",
    "include/grpc++/impl/codegen/sync.h",
    "include/grpc++/impl/codegen/sync_cxx11.h",
    "include/grpc++/impl/codegen/sync_no_cxx11.h",
    "include/grpc++/impl/codegen/sync_stream.h",
    "include/grpc++/impl/codegen/time.h",
    "include/grpc/impl/codegen/byte_buffer_reader.h",
    "include/grpc/impl/codegen/compression_types.h",
    "include/grpc/impl/codegen/connectivity_state.h",
    "include/grpc/impl/codegen/grpc_types.h",
    "include/grpc/impl/codegen/propagation_bits.h",
    "include/grpc/impl/codegen/status.h",
    "include/grpc/impl/codegen/atm.h",
    "include/grpc/impl/codegen/atm_gcc_atomic.h",
    "include/grpc/impl/codegen/atm_gcc_sync.h",
    "include/grpc/impl/codegen/atm_windows.h",
    "include/grpc/impl/codegen/gpr_types.h",
    "include/grpc/impl/codegen/port_platform.h",
    "include/grpc/impl/codegen/slice.h",
    "include/grpc/impl/codegen/sync.h",
    "include/grpc/impl/codegen/sync_generic.h",
    "include/grpc/impl/codegen/sync_posix.h",
    "include/grpc/impl/codegen/sync_windows.h",
    "include/grpc++/impl/codegen/config_protobuf.h",
  ],
  includes = [
    "include",
  ],
  deps = [
    ":grpc++",
  ],
)



cc_library(
  name = "grpc++_reflection_codegen",
  srcs = [
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
  ],
)



cc_library(
  name = "grpc++_test_config",
  srcs = [
    "test/cpp/util/test_config.h",
    "test/cpp/util/test_config_cc.cc",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    "//external:gflags",
  ],
)



cc_library(
  name = "grpc++_test_util",
  srcs = [
    "test/cpp/end2end/test_service_impl.h",
    "test/cpp/util/byte_buffer_proto_helper.h",
    "test/cpp/util/create_test_channel.h",
    "test/cpp/util/string_ref_helper.h",
    "test/cpp/util/subprocess.h",
    "test/cpp/util/test_credentials_provider.h",
    "test/cpp/end2end/test_service_impl.cc",
    "test/cpp/util/byte_buffer_proto_helper.cc",
    "test/cpp/util/create_test_channel.cc",
    "test/cpp/util/string_ref_helper.cc",
    "test/cpp/util/subprocess.cc",
    "test/cpp/util/test_credentials_provider.cc",
    "src/cpp/codegen/codegen_init.cc",
  ],
  hdrs = [
    "include/grpc++/impl/codegen/async_stream.h",
    "include/grpc++/impl/codegen/async_unary_call.h",
    "include/grpc++/impl/codegen/call.h",
    "include/grpc++/impl/codegen/call_hook.h",
    "include/grpc++/impl/codegen/channel_interface.h",
    "include/grpc++/impl/codegen/client_context.h",
    "include/grpc++/impl/codegen/client_unary_call.h",
    "include/grpc++/impl/codegen/completion_queue.h",
    "include/grpc++/impl/codegen/completion_queue_tag.h",
    "include/grpc++/impl/codegen/config.h",
    "include/grpc++/impl/codegen/core_codegen_interface.h",
    "include/grpc++/impl/codegen/create_auth_context.h",
    "include/grpc++/impl/codegen/grpc_library.h",
    "include/grpc++/impl/codegen/method_handler_impl.h",
    "include/grpc++/impl/codegen/rpc_method.h",
    "include/grpc++/impl/codegen/rpc_service_method.h",
    "include/grpc++/impl/codegen/security/auth_context.h",
    "include/grpc++/impl/codegen/serialization_traits.h",
    "include/grpc++/impl/codegen/server_context.h",
    "include/grpc++/impl/codegen/server_interface.h",
    "include/grpc++/impl/codegen/service_type.h",
    "include/grpc++/impl/codegen/status.h",
    "include/grpc++/impl/codegen/status_code_enum.h",
    "include/grpc++/impl/codegen/status_helper.h",
    "include/grpc++/impl/codegen/string_ref.h",
    "include/grpc++/impl/codegen/stub_options.h",
    "include/grpc++/impl/codegen/sync.h",
    "include/grpc++/impl/codegen/sync_cxx11.h",
    "include/grpc++/impl/codegen/sync_no_cxx11.h",
    "include/grpc++/impl/codegen/sync_stream.h",
    "include/grpc++/impl/codegen/time.h",
    "include/grpc/impl/codegen/byte_buffer_reader.h",
    "include/grpc/impl/codegen/compression_types.h",
    "include/grpc/impl/codegen/connectivity_state.h",
    "include/grpc/impl/codegen/grpc_types.h",
    "include/grpc/impl/codegen/propagation_bits.h",
    "include/grpc/impl/codegen/status.h",
    "include/grpc/impl/codegen/atm.h",
    "include/grpc/impl/codegen/atm_gcc_atomic.h",
    "include/grpc/impl/codegen/atm_gcc_sync.h",
    "include/grpc/impl/codegen/atm_windows.h",
    "include/grpc/impl/codegen/gpr_types.h",
    "include/grpc/impl/codegen/port_platform.h",
    "include/grpc/impl/codegen/slice.h",
    "include/grpc/impl/codegen/sync.h",
    "include/grpc/impl/codegen/sync_generic.h",
    "include/grpc/impl/codegen/sync_posix.h",
    "include/grpc/impl/codegen/sync_windows.h",
    "include/grpc++/impl/codegen/proto_utils.h",
    "include/grpc++/impl/codegen/config_protobuf.h",
    "include/grpc++/impl/codegen/thrift_serializer.h",
    "include/grpc++/impl/codegen/thrift_utils.h",
  ],
  includes = [
    "include",
  ],
  deps = [
    ":test_util_proto",
    "//external:googletest",
    ":grpc++",
    ":grpc_test_util",
  ],
)



cc_library(
  name = "grpc++_unsecure",
  srcs = [
    "src/cpp/client/create_channel_internal.h",
    "src/cpp/common/channel_filter.h",
    "src/cpp/server/dynamic_thread_pool.h",
    "src/cpp/server/thread_pool_interface.h",
    "src/cpp/client/insecure_credentials.cc",
    "src/cpp/common/insecure_create_auth_context.cc",
    "src/cpp/server/insecure_server_credentials.cc",
    "src/cpp/client/channel_cc.cc",
    "src/cpp/client/client_context.cc",
    "src/cpp/client/create_channel.cc",
    "src/cpp/client/create_channel_internal.cc",
    "src/cpp/client/create_channel_posix.cc",
    "src/cpp/client/credentials_cc.cc",
    "src/cpp/client/generic_stub.cc",
    "src/cpp/common/channel_arguments.cc",
    "src/cpp/common/channel_filter.cc",
    "src/cpp/common/completion_queue_cc.cc",
    "src/cpp/common/core_codegen.cc",
    "src/cpp/common/rpc_method.cc",
    "src/cpp/server/async_generic_service.cc",
    "src/cpp/server/create_default_thread_pool.cc",
    "src/cpp/server/dynamic_thread_pool.cc",
    "src/cpp/server/server_builder.cc",
    "src/cpp/server/server_cc.cc",
    "src/cpp/server/server_context.cc",
    "src/cpp/server/server_credentials.cc",
    "src/cpp/server/server_posix.cc",
    "src/cpp/util/byte_buffer_cc.cc",
    "src/cpp/util/slice_cc.cc",
    "src/cpp/util/status.cc",
    "src/cpp/util/string_ref.cc",
    "src/cpp/util/time_cc.cc",
    "src/cpp/codegen/codegen_init.cc",
  ],
  hdrs = [
    "include/grpc++/alarm.h",
    "include/grpc++/channel.h",
    "include/grpc++/client_context.h",
    "include/grpc++/completion_queue.h",
    "include/grpc++/create_channel.h",
    "include/grpc++/create_channel_posix.h",
    "include/grpc++/generic/async_generic_service.h",
    "include/grpc++/generic/generic_stub.h",
    "include/grpc++/grpc++.h",
    "include/grpc++/impl/call.h",
    "include/grpc++/impl/client_unary_call.h",
    "include/grpc++/impl/codegen/core_codegen.h",
    "include/grpc++/impl/grpc_library.h",
    "include/grpc++/impl/method_handler_impl.h",
    "include/grpc++/impl/rpc_method.h",
    "include/grpc++/impl/rpc_service_method.h",
    "include/grpc++/impl/serialization_traits.h",
    "include/grpc++/impl/server_builder_option.h",
    "include/grpc++/impl/server_builder_plugin.h",
    "include/grpc++/impl/server_initializer.h",
    "include/grpc++/impl/service_type.h",
    "include/grpc++/impl/sync.h",
    "include/grpc++/impl/sync_cxx11.h",
    "include/grpc++/impl/sync_no_cxx11.h",
    "include/grpc++/impl/thd.h",
    "include/grpc++/impl/thd_cxx11.h",
    "include/grpc++/impl/thd_no_cxx11.h",
    "include/grpc++/security/auth_context.h",
    "include/grpc++/security/auth_metadata_processor.h",
    "include/grpc++/security/credentials.h",
    "include/grpc++/security/server_credentials.h",
    "include/grpc++/server.h",
    "include/grpc++/server_builder.h",
    "include/grpc++/server_context.h",
    "include/grpc++/server_posix.h",
    "include/grpc++/support/async_stream.h",
    "include/grpc++/support/async_unary_call.h",
    "include/grpc++/support/byte_buffer.h",
    "include/grpc++/support/channel_arguments.h",
    "include/grpc++/support/config.h",
    "include/grpc++/support/slice.h",
    "include/grpc++/support/status.h",
    "include/grpc++/support/status_code_enum.h",
    "include/grpc++/support/string_ref.h",
    "include/grpc++/support/stub_options.h",
    "include/grpc++/support/sync_stream.h",
    "include/grpc++/support/time.h",
    "include/grpc++/impl/codegen/async_stream.h",
    "include/grpc++/impl/codegen/async_unary_call.h",
    "include/grpc++/impl/codegen/call.h",
    "include/grpc++/impl/codegen/call_hook.h",
    "include/grpc++/impl/codegen/channel_interface.h",
    "include/grpc++/impl/codegen/client_context.h",
    "include/grpc++/impl/codegen/client_unary_call.h",
    "include/grpc++/impl/codegen/completion_queue.h",
    "include/grpc++/impl/codegen/completion_queue_tag.h",
    "include/grpc++/impl/codegen/config.h",
    "include/grpc++/impl/codegen/core_codegen_interface.h",
    "include/grpc++/impl/codegen/create_auth_context.h",
    "include/grpc++/impl/codegen/grpc_library.h",
    "include/grpc++/impl/codegen/method_handler_impl.h",
    "include/grpc++/impl/codegen/rpc_method.h",
    "include/grpc++/impl/codegen/rpc_service_method.h",
    "include/grpc++/impl/codegen/security/auth_context.h",
    "include/grpc++/impl/codegen/serialization_traits.h",
    "include/grpc++/impl/codegen/server_context.h",
    "include/grpc++/impl/codegen/server_interface.h",
    "include/grpc++/impl/codegen/service_type.h",
    "include/grpc++/impl/codegen/status.h",
    "include/grpc++/impl/codegen/status_code_enum.h",
    "include/grpc++/impl/codegen/status_helper.h",
    "include/grpc++/impl/codegen/string_ref.h",
    "include/grpc++/impl/codegen/stub_options.h",
    "include/grpc++/impl/codegen/sync.h",
    "include/grpc++/impl/codegen/sync_cxx11.h",
    "include/grpc++/impl/codegen/sync_no_cxx11.h",
    "include/grpc++/impl/codegen/sync_stream.h",
    "include/grpc++/impl/codegen/time.h",
    "include/grpc/impl/codegen/byte_buffer_reader.h",
    "include/grpc/impl/codegen/compression_types.h",
    "include/grpc/impl/codegen/connectivity_state.h",
    "include/grpc/impl/codegen/grpc_types.h",
    "include/grpc/impl/codegen/propagation_bits.h",
    "include/grpc/impl/codegen/status.h",
    "include/grpc/impl/codegen/atm.h",
    "include/grpc/impl/codegen/atm_gcc_atomic.h",
    "include/grpc/impl/codegen/atm_gcc_sync.h",
    "include/grpc/impl/codegen/atm_windows.h",
    "include/grpc/impl/codegen/gpr_types.h",
    "include/grpc/impl/codegen/port_platform.h",
    "include/grpc/impl/codegen/slice.h",
    "include/grpc/impl/codegen/sync.h",
    "include/grpc/impl/codegen/sync_generic.h",
    "include/grpc/impl/codegen/sync_posix.h",
    "include/grpc/impl/codegen/sync_windows.h",
  ],
  includes = [
    "include",
  ],
  deps = [
    "//external:protobuf_clib",
    ":gpr",
    ":grpc_unsecure",
  ],
)



cc_library(
  name = "grpc_cli_libs",
  srcs = [
    "test/cpp/util/cli_call.h",
    "test/cpp/util/cli_credentials.h",
    "test/cpp/util/config_grpc_cli.h",
    "test/cpp/util/grpc_tool.h",
    "test/cpp/util/proto_file_parser.h",
    "test/cpp/util/proto_reflection_descriptor_database.h",
    "test/cpp/util/service_describer.h",
    "test/cpp/util/cli_call.cc",
    "test/cpp/util/cli_credentials.cc",
    "test/cpp/util/grpc_tool.cc",
    "test/cpp/util/proto_file_parser.cc",
    "test/cpp/util/proto_reflection_descriptor_database.cc",
    "test/cpp/util/service_describer.cc",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":grpc++_reflection",
    ":grpc++",
  ],
)



cc_library(
  name = "grpc_plugin_support",
  srcs = [
    "src/compiler/config.h",
    "src/compiler/cpp_generator.h",
    "src/compiler/cpp_generator_helpers.h",
    "src/compiler/csharp_generator.h",
    "src/compiler/csharp_generator_helpers.h",
    "src/compiler/generator_helpers.h",
    "src/compiler/node_generator.h",
    "src/compiler/node_generator_helpers.h",
    "src/compiler/objective_c_generator.h",
    "src/compiler/objective_c_generator_helpers.h",
    "src/compiler/php_generator.h",
    "src/compiler/php_generator_helpers.h",
    "src/compiler/python_generator.h",
    "src/compiler/ruby_generator.h",
    "src/compiler/ruby_generator_helpers-inl.h",
    "src/compiler/ruby_generator_map-inl.h",
    "src/compiler/ruby_generator_string-inl.h",
    "src/compiler/cpp_generator.cc",
    "src/compiler/csharp_generator.cc",
    "src/compiler/node_generator.cc",
    "src/compiler/objective_c_generator.cc",
    "src/compiler/php_generator.cc",
    "src/compiler/python_generator.cc",
    "src/compiler/ruby_generator.cc",
  ],
  hdrs = [
    "include/grpc++/impl/codegen/config_protobuf.h",
  ],
  includes = [
    "include",
  ],
  deps = [
    "//external:protobuf_compiler",
  ],
)



cc_library(
  name = "interop_client_helper",
  srcs = [
    "test/cpp/interop/client_helper.h",
    "test/cpp/interop/client_helper.cc",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":interop_proto",
    "//external:gflags",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr",
  ],
)



cc_library(
  name = "interop_client_main",
  srcs = [
    "test/cpp/interop/interop_client.h",
    "test/cpp/interop/client.cc",
    "test/cpp/interop/interop_client.cc",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":interop_proto",
    "//external:gflags",
    ":interop_client_helper",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
    ":grpc++_test_config",
  ],
)



cc_library(
  name = "interop_server_helper",
  srcs = [
    "test/cpp/interop/server_helper.h",
    "test/cpp/interop/server_helper.cc",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":interop_proto",
    "//external:gflags",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr",
  ],
)



cc_library(
  name = "interop_server_lib",
  srcs = [
    "test/cpp/interop/interop_server.cc",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":interop_proto",
    "//external:gflags",
    ":interop_server_helper",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
    ":grpc++_test_config",
  ],
)



cc_library(
  name = "interop_server_main",
  srcs = [
    "test/cpp/interop/interop_server_bootstrap.cc",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":interop_proto",
    "//external:gflags",
    ":interop_server_lib",
  ],
)



cc_library(
  name = "qps",
  srcs = [
    "test/cpp/qps/client.h",
    "test/cpp/qps/driver.h",
    "test/cpp/qps/histogram.h",
    "test/cpp/qps/interarrival.h",
    "test/cpp/qps/limit_cores.h",
    "test/cpp/qps/parse_json.h",
    "test/cpp/qps/qps_worker.h",
    "test/cpp/qps/report.h",
    "test/cpp/qps/server.h",
    "test/cpp/qps/stats.h",
    "test/cpp/qps/usage_timer.h",
    "test/cpp/util/benchmark_config.h",
    "test/cpp/qps/client_async.cc",
    "test/cpp/qps/client_sync.cc",
    "test/cpp/qps/driver.cc",
    "test/cpp/qps/limit_cores.cc",
    "test/cpp/qps/parse_json.cc",
    "test/cpp/qps/qps_worker.cc",
    "test/cpp/qps/report.cc",
    "test/cpp/qps/server_async.cc",
    "test/cpp/qps/server_sync.cc",
    "test/cpp/qps/usage_timer.cc",
    "test/cpp/util/benchmark_config.cc",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":qps_proto",
    "//external:gflags",
    ":grpc_test_util",
    ":grpc++_test_util",
    ":grpc++",
  ],
)



cc_library(
  name = "grpc_csharp_ext",
  srcs = [
    "src/csharp/ext/grpc_csharp_ext.c",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":grpc",
    ":gpr",
  ],
)



cc_library(
  name = "bad_client_test",
  srcs = [
    "test/core/bad_client/bad_client.h",
    "test/core/bad_client/bad_client.c",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)



cc_library(
  name = "bad_ssl_test_server",
  srcs = [
    "test/core/bad_ssl/server_common.h",
    "test/core/bad_ssl/server_common.c",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)



cc_library(
  name = "end2end_tests",
  srcs = [
    "test/core/end2end/tests/cancel_test_helpers.h",
    "test/core/end2end/end2end_tests.h",
    "test/core/end2end/end2end_tests.c",
    "test/core/end2end/tests/bad_hostname.c",
    "test/core/end2end/tests/binary_metadata.c",
    "test/core/end2end/tests/call_creds.c",
    "test/core/end2end/tests/cancel_after_accept.c",
    "test/core/end2end/tests/cancel_after_client_done.c",
    "test/core/end2end/tests/cancel_after_invoke.c",
    "test/core/end2end/tests/cancel_before_invoke.c",
    "test/core/end2end/tests/cancel_in_a_vacuum.c",
    "test/core/end2end/tests/cancel_with_status.c",
    "test/core/end2end/tests/compressed_payload.c",
    "test/core/end2end/tests/connectivity.c",
    "test/core/end2end/tests/default_host.c",
    "test/core/end2end/tests/disappearing_server.c",
    "test/core/end2end/tests/empty_batch.c",
    "test/core/end2end/tests/filter_call_init_fails.c",
    "test/core/end2end/tests/filter_causes_close.c",
    "test/core/end2end/tests/graceful_server_shutdown.c",
    "test/core/end2end/tests/high_initial_seqno.c",
    "test/core/end2end/tests/hpack_size.c",
    "test/core/end2end/tests/idempotent_request.c",
    "test/core/end2end/tests/invoke_large_request.c",
    "test/core/end2end/tests/large_metadata.c",
    "test/core/end2end/tests/load_reporting_hook.c",
    "test/core/end2end/tests/max_concurrent_streams.c",
    "test/core/end2end/tests/max_message_length.c",
    "test/core/end2end/tests/negative_deadline.c",
    "test/core/end2end/tests/network_status_change.c",
    "test/core/end2end/tests/no_logging.c",
    "test/core/end2end/tests/no_op.c",
    "test/core/end2end/tests/payload.c",
    "test/core/end2end/tests/ping.c",
    "test/core/end2end/tests/ping_pong_streaming.c",
    "test/core/end2end/tests/registered_call.c",
    "test/core/end2end/tests/request_with_flags.c",
    "test/core/end2end/tests/request_with_payload.c",
    "test/core/end2end/tests/server_finishes_request.c",
    "test/core/end2end/tests/shutdown_finishes_calls.c",
    "test/core/end2end/tests/shutdown_finishes_tags.c",
    "test/core/end2end/tests/simple_cacheable_request.c",
    "test/core/end2end/tests/simple_delayed_request.c",
    "test/core/end2end/tests/simple_metadata.c",
    "test/core/end2end/tests/simple_request.c",
    "test/core/end2end/tests/streaming_error_response.c",
    "test/core/end2end/tests/trailing_metadata.c",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    "//external:libssl",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)



cc_library(
  name = "end2end_nosec_tests",
  srcs = [
    "test/core/end2end/tests/cancel_test_helpers.h",
    "test/core/end2end/end2end_tests.h",
    "test/core/end2end/end2end_nosec_tests.c",
    "test/core/end2end/tests/bad_hostname.c",
    "test/core/end2end/tests/binary_metadata.c",
    "test/core/end2end/tests/cancel_after_accept.c",
    "test/core/end2end/tests/cancel_after_client_done.c",
    "test/core/end2end/tests/cancel_after_invoke.c",
    "test/core/end2end/tests/cancel_before_invoke.c",
    "test/core/end2end/tests/cancel_in_a_vacuum.c",
    "test/core/end2end/tests/cancel_with_status.c",
    "test/core/end2end/tests/compressed_payload.c",
    "test/core/end2end/tests/connectivity.c",
    "test/core/end2end/tests/default_host.c",
    "test/core/end2end/tests/disappearing_server.c",
    "test/core/end2end/tests/empty_batch.c",
    "test/core/end2end/tests/filter_call_init_fails.c",
    "test/core/end2end/tests/filter_causes_close.c",
    "test/core/end2end/tests/graceful_server_shutdown.c",
    "test/core/end2end/tests/high_initial_seqno.c",
    "test/core/end2end/tests/hpack_size.c",
    "test/core/end2end/tests/idempotent_request.c",
    "test/core/end2end/tests/invoke_large_request.c",
    "test/core/end2end/tests/large_metadata.c",
    "test/core/end2end/tests/load_reporting_hook.c",
    "test/core/end2end/tests/max_concurrent_streams.c",
    "test/core/end2end/tests/max_message_length.c",
    "test/core/end2end/tests/negative_deadline.c",
    "test/core/end2end/tests/network_status_change.c",
    "test/core/end2end/tests/no_logging.c",
    "test/core/end2end/tests/no_op.c",
    "test/core/end2end/tests/payload.c",
    "test/core/end2end/tests/ping.c",
    "test/core/end2end/tests/ping_pong_streaming.c",
    "test/core/end2end/tests/registered_call.c",
    "test/core/end2end/tests/request_with_flags.c",
    "test/core/end2end/tests/request_with_payload.c",
    "test/core/end2end/tests/server_finishes_request.c",
    "test/core/end2end/tests/shutdown_finishes_calls.c",
    "test/core/end2end/tests/shutdown_finishes_tags.c",
    "test/core/end2end/tests/simple_cacheable_request.c",
    "test/core/end2end/tests/simple_delayed_request.c",
    "test/core/end2end/tests/simple_metadata.c",
    "test/core/end2end/tests/simple_request.c",
    "test/core/end2end/tests/streaming_error_response.c",
    "test/core/end2end/tests/trailing_metadata.c",
  ],
  hdrs = [
  ],
  includes = [
    "include",
  ],
  deps = [
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)




objc_library(
  name = "gpr_objc",
  srcs = [
    "src/core/lib/profiling/basic_timers.c",
    "src/core/lib/profiling/stap_timers.c",
    "src/core/lib/support/alloc.c",
    "src/core/lib/support/avl.c",
    "src/core/lib/support/backoff.c",
    "src/core/lib/support/cmdline.c",
    "src/core/lib/support/cpu_iphone.c",
    "src/core/lib/support/cpu_linux.c",
    "src/core/lib/support/cpu_posix.c",
    "src/core/lib/support/cpu_windows.c",
    "src/core/lib/support/env_linux.c",
    "src/core/lib/support/env_posix.c",
    "src/core/lib/support/env_windows.c",
    "src/core/lib/support/histogram.c",
    "src/core/lib/support/host_port.c",
    "src/core/lib/support/log.c",
    "src/core/lib/support/log_android.c",
    "src/core/lib/support/log_linux.c",
    "src/core/lib/support/log_posix.c",
    "src/core/lib/support/log_windows.c",
    "src/core/lib/support/mpscq.c",
    "src/core/lib/support/murmur_hash.c",
    "src/core/lib/support/percent_encoding.c",
    "src/core/lib/support/slice.c",
    "src/core/lib/support/slice_buffer.c",
    "src/core/lib/support/stack_lockfree.c",
    "src/core/lib/support/string.c",
    "src/core/lib/support/string_posix.c",
    "src/core/lib/support/string_util_windows.c",
    "src/core/lib/support/string_windows.c",
    "src/core/lib/support/subprocess_posix.c",
    "src/core/lib/support/subprocess_windows.c",
    "src/core/lib/support/sync.c",
    "src/core/lib/support/sync_posix.c",
    "src/core/lib/support/sync_windows.c",
    "src/core/lib/support/thd.c",
    "src/core/lib/support/thd_posix.c",
    "src/core/lib/support/thd_windows.c",
    "src/core/lib/support/time.c",
    "src/core/lib/support/time_posix.c",
    "src/core/lib/support/time_precise.c",
    "src/core/lib/support/time_windows.c",
    "src/core/lib/support/tls_pthread.c",
    "src/core/lib/support/tmpfile_msys.c",
    "src/core/lib/support/tmpfile_posix.c",
    "src/core/lib/support/tmpfile_windows.c",
    "src/core/lib/support/wrap_memcpy.c",
  ],
  hdrs = [
    "include/grpc/support/alloc.h",
    "include/grpc/support/atm.h",
    "include/grpc/support/atm_gcc_atomic.h",
    "include/grpc/support/atm_gcc_sync.h",
    "include/grpc/support/atm_windows.h",
    "include/grpc/support/avl.h",
    "include/grpc/support/cmdline.h",
    "include/grpc/support/cpu.h",
    "include/grpc/support/histogram.h",
    "include/grpc/support/host_port.h",
    "include/grpc/support/log.h",
    "include/grpc/support/log_windows.h",
    "include/grpc/support/port_platform.h",
    "include/grpc/support/slice.h",
    "include/grpc/support/slice_buffer.h",
    "include/grpc/support/string_util.h",
    "include/grpc/support/subprocess.h",
    "include/grpc/support/sync.h",
    "include/grpc/support/sync_generic.h",
    "include/grpc/support/sync_posix.h",
    "include/grpc/support/sync_windows.h",
    "include/grpc/support/thd.h",
    "include/grpc/support/time.h",
    "include/grpc/support/tls.h",
    "include/grpc/support/tls_gcc.h",
    "include/grpc/support/tls_msvc.h",
    "include/grpc/support/tls_pthread.h",
    "include/grpc/support/useful.h",
    "include/grpc/impl/codegen/atm.h",
    "include/grpc/impl/codegen/atm_gcc_atomic.h",
    "include/grpc/impl/codegen/atm_gcc_sync.h",
    "include/grpc/impl/codegen/atm_windows.h",
    "include/grpc/impl/codegen/gpr_types.h",
    "include/grpc/impl/codegen/port_platform.h",
    "include/grpc/impl/codegen/slice.h",
    "include/grpc/impl/codegen/sync.h",
    "include/grpc/impl/codegen/sync_generic.h",
    "include/grpc/impl/codegen/sync_posix.h",
    "include/grpc/impl/codegen/sync_windows.h",
    "src/core/lib/profiling/timers.h",
    "src/core/lib/support/backoff.h",
    "src/core/lib/support/block_annotate.h",
    "src/core/lib/support/env.h",
    "src/core/lib/support/mpscq.h",
    "src/core/lib/support/murmur_hash.h",
    "src/core/lib/support/percent_encoding.h",
    "src/core/lib/support/stack_lockfree.h",
    "src/core/lib/support/string.h",
    "src/core/lib/support/string_windows.h",
    "src/core/lib/support/thd_internal.h",
    "src/core/lib/support/time_precise.h",
    "src/core/lib/support/tmpfile.h",
  ],
  includes = [
    "include",
  ],
  deps = [
  ],
)



objc_library(
  name = "grpc_objc",
  srcs = [
    "src/core/lib/surface/init.c",
    "src/core/lib/channel/channel_args.c",
    "src/core/lib/channel/channel_stack.c",
    "src/core/lib/channel/channel_stack_builder.c",
    "src/core/lib/channel/compress_filter.c",
    "src/core/lib/channel/connected_channel.c",
    "src/core/lib/channel/deadline_filter.c",
    "src/core/lib/channel/handshaker.c",
    "src/core/lib/channel/http_client_filter.c",
    "src/core/lib/channel/http_server_filter.c",
    "src/core/lib/channel/message_size_filter.c",
    "src/core/lib/compression/compression.c",
    "src/core/lib/compression/message_compress.c",
    "src/core/lib/debug/trace.c",
    "src/core/lib/http/format_request.c",
    "src/core/lib/http/httpcli.c",
    "src/core/lib/http/parser.c",
    "src/core/lib/iomgr/closure.c",
    "src/core/lib/iomgr/combiner.c",
    "src/core/lib/iomgr/endpoint.c",
    "src/core/lib/iomgr/endpoint_pair_posix.c",
    "src/core/lib/iomgr/endpoint_pair_windows.c",
    "src/core/lib/iomgr/error.c",
    "src/core/lib/iomgr/ev_epoll_linux.c",
    "src/core/lib/iomgr/ev_poll_and_epoll_posix.c",
    "src/core/lib/iomgr/ev_poll_posix.c",
    "src/core/lib/iomgr/ev_posix.c",
    "src/core/lib/iomgr/exec_ctx.c",
    "src/core/lib/iomgr/executor.c",
    "src/core/lib/iomgr/iocp_windows.c",
    "src/core/lib/iomgr/iomgr.c",
    "src/core/lib/iomgr/iomgr_posix.c",
    "src/core/lib/iomgr/iomgr_windows.c",
    "src/core/lib/iomgr/load_file.c",
    "src/core/lib/iomgr/network_status_tracker.c",
    "src/core/lib/iomgr/polling_entity.c",
    "src/core/lib/iomgr/pollset_set_windows.c",
    "src/core/lib/iomgr/pollset_windows.c",
    "src/core/lib/iomgr/resolve_address_posix.c",
    "src/core/lib/iomgr/resolve_address_windows.c",
    "src/core/lib/iomgr/sockaddr_utils.c",
    "src/core/lib/iomgr/socket_utils_common_posix.c",
    "src/core/lib/iomgr/socket_utils_linux.c",
    "src/core/lib/iomgr/socket_utils_posix.c",
    "src/core/lib/iomgr/socket_windows.c",
    "src/core/lib/iomgr/tcp_client_posix.c",
    "src/core/lib/iomgr/tcp_client_windows.c",
    "src/core/lib/iomgr/tcp_posix.c",
    "src/core/lib/iomgr/tcp_server_posix.c",
    "src/core/lib/iomgr/tcp_server_windows.c",
    "src/core/lib/iomgr/tcp_windows.c",
    "src/core/lib/iomgr/time_averaged_stats.c",
    "src/core/lib/iomgr/timer.c",
    "src/core/lib/iomgr/timer_heap.c",
    "src/core/lib/iomgr/udp_server.c",
    "src/core/lib/iomgr/unix_sockets_posix.c",
    "src/core/lib/iomgr/unix_sockets_posix_noop.c",
    "src/core/lib/iomgr/wakeup_fd_eventfd.c",
    "src/core/lib/iomgr/wakeup_fd_nospecial.c",
    "src/core/lib/iomgr/wakeup_fd_pipe.c",
    "src/core/lib/iomgr/wakeup_fd_posix.c",
    "src/core/lib/iomgr/workqueue_posix.c",
    "src/core/lib/iomgr/workqueue_windows.c",
    "src/core/lib/json/json.c",
    "src/core/lib/json/json_reader.c",
    "src/core/lib/json/json_string.c",
    "src/core/lib/json/json_writer.c",
    "src/core/lib/surface/alarm.c",
    "src/core/lib/surface/api_trace.c",
    "src/core/lib/surface/byte_buffer.c",
    "src/core/lib/surface/byte_buffer_reader.c",
    "src/core/lib/surface/call.c",
    "src/core/lib/surface/call_details.c",
    "src/core/lib/surface/call_log_batch.c",
    "src/core/lib/surface/channel.c",
    "src/core/lib/surface/channel_init.c",
    "src/core/lib/surface/channel_ping.c",
    "src/core/lib/surface/channel_stack_type.c",
    "src/core/lib/surface/completion_queue.c",
    "src/core/lib/surface/event_string.c",
    "src/core/lib/surface/lame_client.c",
    "src/core/lib/surface/metadata_array.c",
    "src/core/lib/surface/server.c",
    "src/core/lib/surface/validate_metadata.c",
    "src/core/lib/surface/version.c",
    "src/core/lib/transport/byte_stream.c",
    "src/core/lib/transport/connectivity_state.c",
    "src/core/lib/transport/metadata.c",
    "src/core/lib/transport/metadata_batch.c",
    "src/core/lib/transport/static_metadata.c",
    "src/core/lib/transport/timeout_encoding.c",
    "src/core/lib/transport/transport.c",
    "src/core/lib/transport/transport_op_string.c",
    "src/core/ext/transport/chttp2/server/secure/server_secure_chttp2.c",
    "src/core/ext/transport/chttp2/transport/bin_decoder.c",
    "src/core/ext/transport/chttp2/transport/bin_encoder.c",
    "src/core/ext/transport/chttp2/transport/chttp2_plugin.c",
    "src/core/ext/transport/chttp2/transport/chttp2_transport.c",
    "src/core/ext/transport/chttp2/transport/frame_data.c",
    "src/core/ext/transport/chttp2/transport/frame_goaway.c",
    "src/core/ext/transport/chttp2/transport/frame_ping.c",
    "src/core/ext/transport/chttp2/transport/frame_rst_stream.c",
    "src/core/ext/transport/chttp2/transport/frame_settings.c",
    "src/core/ext/transport/chttp2/transport/frame_window_update.c",
    "src/core/ext/transport/chttp2/transport/hpack_encoder.c",
    "src/core/ext/transport/chttp2/transport/hpack_parser.c",
    "src/core/ext/transport/chttp2/transport/hpack_table.c",
    "src/core/ext/transport/chttp2/transport/huffsyms.c",
    "src/core/ext/transport/chttp2/transport/incoming_metadata.c",
    "src/core/ext/transport/chttp2/transport/parsing.c",
    "src/core/ext/transport/chttp2/transport/status_conversion.c",
    "src/core/ext/transport/chttp2/transport/stream_lists.c",
    "src/core/ext/transport/chttp2/transport/stream_map.c",
    "src/core/ext/transport/chttp2/transport/varint.c",
    "src/core/ext/transport/chttp2/transport/writing.c",
    "src/core/ext/transport/chttp2/alpn/alpn.c",
    "src/core/lib/http/httpcli_security_connector.c",
    "src/core/lib/security/context/security_context.c",
    "src/core/lib/security/credentials/composite/composite_credentials.c",
    "src/core/lib/security/credentials/credentials.c",
    "src/core/lib/security/credentials/credentials_metadata.c",
    "src/core/lib/security/credentials/fake/fake_credentials.c",
    "src/core/lib/security/credentials/google_default/credentials_posix.c",
    "src/core/lib/security/credentials/google_default/credentials_windows.c",
    "src/core/lib/security/credentials/google_default/google_default_credentials.c",
    "src/core/lib/security/credentials/iam/iam_credentials.c",
    "src/core/lib/security/credentials/jwt/json_token.c",
    "src/core/lib/security/credentials/jwt/jwt_credentials.c",
    "src/core/lib/security/credentials/jwt/jwt_verifier.c",
    "src/core/lib/security/credentials/oauth2/oauth2_credentials.c",
    "src/core/lib/security/credentials/plugin/plugin_credentials.c",
    "src/core/lib/security/credentials/ssl/ssl_credentials.c",
    "src/core/lib/security/transport/client_auth_filter.c",
    "src/core/lib/security/transport/handshake.c",
    "src/core/lib/security/transport/secure_endpoint.c",
    "src/core/lib/security/transport/security_connector.c",
    "src/core/lib/security/transport/server_auth_filter.c",
    "src/core/lib/security/transport/tsi_error.c",
    "src/core/lib/security/util/b64.c",
    "src/core/lib/security/util/json_util.c",
    "src/core/lib/surface/init_secure.c",
    "src/core/lib/tsi/fake_transport_security.c",
    "src/core/lib/tsi/ssl_transport_security.c",
    "src/core/lib/tsi/transport_security.c",
    "src/core/ext/transport/chttp2/client/secure/secure_channel_create.c",
    "src/core/ext/client_config/channel_connectivity.c",
    "src/core/ext/client_config/client_channel.c",
    "src/core/ext/client_config/client_channel_factory.c",
    "src/core/ext/client_config/client_config_plugin.c",
    "src/core/ext/client_config/connector.c",
    "src/core/ext/client_config/default_initial_connect_string.c",
    "src/core/ext/client_config/http_connect_handshaker.c",
    "src/core/ext/client_config/initial_connect_string.c",
    "src/core/ext/client_config/lb_policy.c",
    "src/core/ext/client_config/lb_policy_factory.c",
    "src/core/ext/client_config/lb_policy_registry.c",
    "src/core/ext/client_config/parse_address.c",
    "src/core/ext/client_config/resolver.c",
    "src/core/ext/client_config/resolver_factory.c",
    "src/core/ext/client_config/resolver_registry.c",
    "src/core/ext/client_config/resolver_result.c",
    "src/core/ext/client_config/subchannel.c",
    "src/core/ext/client_config/subchannel_index.c",
    "src/core/ext/client_config/uri_parser.c",
    "src/core/ext/transport/chttp2/server/insecure/server_chttp2.c",
    "src/core/ext/transport/chttp2/server/insecure/server_chttp2_posix.c",
    "src/core/ext/transport/chttp2/client/insecure/channel_create.c",
    "src/core/ext/transport/chttp2/client/insecure/channel_create_posix.c",
    "src/core/ext/lb_policy/grpclb/grpclb.c",
    "src/core/ext/lb_policy/grpclb/load_balancer_api.c",
    "src/core/ext/lb_policy/grpclb/proto/grpc/lb/v1/load_balancer.pb.c",
    "src/core/ext/lb_policy/pick_first/pick_first.c",
    "src/core/ext/lb_policy/round_robin/round_robin.c",
    "src/core/ext/resolver/dns/native/dns_resolver.c",
    "src/core/ext/resolver/sockaddr/sockaddr_resolver.c",
    "src/core/ext/load_reporting/load_reporting.c",
    "src/core/ext/load_reporting/load_reporting_filter.c",
    "src/core/ext/census/base_resources.c",
    "src/core/ext/census/context.c",
    "src/core/ext/census/gen/census.pb.c",
    "src/core/ext/census/gen/trace_context.pb.c",
    "src/core/ext/census/grpc_context.c",
    "src/core/ext/census/grpc_filter.c",
    "src/core/ext/census/grpc_plugin.c",
    "src/core/ext/census/initialize.c",
    "src/core/ext/census/mlog.c",
    "src/core/ext/census/operation.c",
    "src/core/ext/census/placeholders.c",
    "src/core/ext/census/resource.c",
    "src/core/ext/census/trace_context.c",
    "src/core/ext/census/tracing.c",
    "src/core/plugin_registry/grpc_plugin_registry.c",
  ],
  hdrs = [
    "include/grpc/byte_buffer.h",
    "include/grpc/byte_buffer_reader.h",
    "include/grpc/compression.h",
    "include/grpc/grpc.h",
    "include/grpc/grpc_posix.h",
    "include/grpc/grpc_security_constants.h",
    "include/grpc/status.h",
    "include/grpc/impl/codegen/byte_buffer_reader.h",
    "include/grpc/impl/codegen/compression_types.h",
    "include/grpc/impl/codegen/connectivity_state.h",
    "include/grpc/impl/codegen/grpc_types.h",
    "include/grpc/impl/codegen/propagation_bits.h",
    "include/grpc/impl/codegen/status.h",
    "include/grpc/impl/codegen/atm.h",
    "include/grpc/impl/codegen/atm_gcc_atomic.h",
    "include/grpc/impl/codegen/atm_gcc_sync.h",
    "include/grpc/impl/codegen/atm_windows.h",
    "include/grpc/impl/codegen/gpr_types.h",
    "include/grpc/impl/codegen/port_platform.h",
    "include/grpc/impl/codegen/slice.h",
    "include/grpc/impl/codegen/sync.h",
    "include/grpc/impl/codegen/sync_generic.h",
    "include/grpc/impl/codegen/sync_posix.h",
    "include/grpc/impl/codegen/sync_windows.h",
    "include/grpc/grpc_security.h",
    "include/grpc/census.h",
    "src/core/lib/channel/channel_args.h",
    "src/core/lib/channel/channel_stack.h",
    "src/core/lib/channel/channel_stack_builder.h",
    "src/core/lib/channel/compress_filter.h",
    "src/core/lib/channel/connected_channel.h",
    "src/core/lib/channel/context.h",
    "src/core/lib/channel/deadline_filter.h",
    "src/core/lib/channel/handshaker.h",
    "src/core/lib/channel/http_client_filter.h",
    "src/core/lib/channel/http_server_filter.h",
    "src/core/lib/channel/message_size_filter.h",
    "src/core/lib/compression/algorithm_metadata.h",
    "src/core/lib/compression/message_compress.h",
    "src/core/lib/debug/trace.h",
    "src/core/lib/http/format_request.h",
    "src/core/lib/http/httpcli.h",
    "src/core/lib/http/parser.h",
    "src/core/lib/iomgr/closure.h",
    "src/core/lib/iomgr/combiner.h",
    "src/core/lib/iomgr/endpoint.h",
    "src/core/lib/iomgr/endpoint_pair.h",
    "src/core/lib/iomgr/error.h",
    "src/core/lib/iomgr/ev_epoll_linux.h",
    "src/core/lib/iomgr/ev_poll_and_epoll_posix.h",
    "src/core/lib/iomgr/ev_poll_posix.h",
    "src/core/lib/iomgr/ev_posix.h",
    "src/core/lib/iomgr/exec_ctx.h",
    "src/core/lib/iomgr/executor.h",
    "src/core/lib/iomgr/iocp_windows.h",
    "src/core/lib/iomgr/iomgr.h",
    "src/core/lib/iomgr/iomgr_internal.h",
    "src/core/lib/iomgr/iomgr_posix.h",
    "src/core/lib/iomgr/load_file.h",
    "src/core/lib/iomgr/network_status_tracker.h",
    "src/core/lib/iomgr/polling_entity.h",
    "src/core/lib/iomgr/pollset.h",
    "src/core/lib/iomgr/pollset_set.h",
    "src/core/lib/iomgr/pollset_set_windows.h",
    "src/core/lib/iomgr/pollset_windows.h",
    "src/core/lib/iomgr/resolve_address.h",
    "src/core/lib/iomgr/sockaddr.h",
    "src/core/lib/iomgr/sockaddr_posix.h",
    "src/core/lib/iomgr/sockaddr_utils.h",
    "src/core/lib/iomgr/sockaddr_windows.h",
    "src/core/lib/iomgr/socket_utils_posix.h",
    "src/core/lib/iomgr/socket_windows.h",
    "src/core/lib/iomgr/tcp_client.h",
    "src/core/lib/iomgr/tcp_posix.h",
    "src/core/lib/iomgr/tcp_server.h",
    "src/core/lib/iomgr/tcp_windows.h",
    "src/core/lib/iomgr/time_averaged_stats.h",
    "src/core/lib/iomgr/timer.h",
    "src/core/lib/iomgr/timer_heap.h",
    "src/core/lib/iomgr/udp_server.h",
    "src/core/lib/iomgr/unix_sockets_posix.h",
    "src/core/lib/iomgr/wakeup_fd_pipe.h",
    "src/core/lib/iomgr/wakeup_fd_posix.h",
    "src/core/lib/iomgr/workqueue.h",
    "src/core/lib/iomgr/workqueue_posix.h",
    "src/core/lib/iomgr/workqueue_windows.h",
    "src/core/lib/json/json.h",
    "src/core/lib/json/json_common.h",
    "src/core/lib/json/json_reader.h",
    "src/core/lib/json/json_writer.h",
    "src/core/lib/surface/api_trace.h",
    "src/core/lib/surface/call.h",
    "src/core/lib/surface/call_test_only.h",
    "src/core/lib/surface/channel.h",
    "src/core/lib/surface/channel_init.h",
    "src/core/lib/surface/channel_stack_type.h",
    "src/core/lib/surface/completion_queue.h",
    "src/core/lib/surface/event_string.h",
    "src/core/lib/surface/init.h",
    "src/core/lib/surface/lame_client.h",
    "src/core/lib/surface/server.h",
    "src/core/lib/transport/byte_stream.h",
    "src/core/lib/transport/connectivity_state.h",
    "src/core/lib/transport/metadata.h",
    "src/core/lib/transport/metadata_batch.h",
    "src/core/lib/transport/static_metadata.h",
    "src/core/lib/transport/timeout_encoding.h",
    "src/core/lib/transport/transport.h",
    "src/core/lib/transport/transport_impl.h",
    "src/core/ext/transport/chttp2/transport/bin_decoder.h",
    "src/core/ext/transport/chttp2/transport/bin_encoder.h",
    "src/core/ext/transport/chttp2/transport/chttp2_transport.h",
    "src/core/ext/transport/chttp2/transport/frame.h",
    "src/core/ext/transport/chttp2/transport/frame_data.h",
    "src/core/ext/transport/chttp2/transport/frame_goaway.h",
    "src/core/ext/transport/chttp2/transport/frame_ping.h",
    "src/core/ext/transport/chttp2/transport/frame_rst_stream.h",
    "src/core/ext/transport/chttp2/transport/frame_settings.h",
    "src/core/ext/transport/chttp2/transport/frame_window_update.h",
    "src/core/ext/transport/chttp2/transport/hpack_encoder.h",
    "src/core/ext/transport/chttp2/transport/hpack_parser.h",
    "src/core/ext/transport/chttp2/transport/hpack_table.h",
    "src/core/ext/transport/chttp2/transport/http2_errors.h",
    "src/core/ext/transport/chttp2/transport/huffsyms.h",
    "src/core/ext/transport/chttp2/transport/incoming_metadata.h",
    "src/core/ext/transport/chttp2/transport/internal.h",
    "src/core/ext/transport/chttp2/transport/status_conversion.h",
    "src/core/ext/transport/chttp2/transport/stream_map.h",
    "src/core/ext/transport/chttp2/transport/varint.h",
    "src/core/ext/transport/chttp2/alpn/alpn.h",
    "src/core/lib/security/context/security_context.h",
    "src/core/lib/security/credentials/composite/composite_credentials.h",
    "src/core/lib/security/credentials/credentials.h",
    "src/core/lib/security/credentials/fake/fake_credentials.h",
    "src/core/lib/security/credentials/google_default/google_default_credentials.h",
    "src/core/lib/security/credentials/iam/iam_credentials.h",
    "src/core/lib/security/credentials/jwt/json_token.h",
    "src/core/lib/security/credentials/jwt/jwt_credentials.h",
    "src/core/lib/security/credentials/jwt/jwt_verifier.h",
    "src/core/lib/security/credentials/oauth2/oauth2_credentials.h",
    "src/core/lib/security/credentials/plugin/plugin_credentials.h",
    "src/core/lib/security/credentials/ssl/ssl_credentials.h",
    "src/core/lib/security/transport/auth_filters.h",
    "src/core/lib/security/transport/handshake.h",
    "src/core/lib/security/transport/secure_endpoint.h",
    "src/core/lib/security/transport/security_connector.h",
    "src/core/lib/security/transport/tsi_error.h",
    "src/core/lib/security/util/b64.h",
    "src/core/lib/security/util/json_util.h",
    "src/core/lib/tsi/fake_transport_security.h",
    "src/core/lib/tsi/ssl_transport_security.h",
    "src/core/lib/tsi/ssl_types.h",
    "src/core/lib/tsi/transport_security.h",
    "src/core/lib/tsi/transport_security_interface.h",
    "src/core/ext/client_config/client_channel.h",
    "src/core/ext/client_config/client_channel_factory.h",
    "src/core/ext/client_config/connector.h",
    "src/core/ext/client_config/http_connect_handshaker.h",
    "src/core/ext/client_config/initial_connect_string.h",
    "src/core/ext/client_config/lb_policy.h",
    "src/core/ext/client_config/lb_policy_factory.h",
    "src/core/ext/client_config/lb_policy_registry.h",
    "src/core/ext/client_config/parse_address.h",
    "src/core/ext/client_config/resolver.h",
    "src/core/ext/client_config/resolver_factory.h",
    "src/core/ext/client_config/resolver_registry.h",
    "src/core/ext/client_config/resolver_result.h",
    "src/core/ext/client_config/subchannel.h",
    "src/core/ext/client_config/subchannel_index.h",
    "src/core/ext/client_config/uri_parser.h",
    "src/core/ext/lb_policy/grpclb/grpclb.h",
    "src/core/ext/lb_policy/grpclb/load_balancer_api.h",
    "src/core/ext/lb_policy/grpclb/proto/grpc/lb/v1/load_balancer.pb.h",
    "src/core/ext/load_reporting/load_reporting.h",
    "src/core/ext/load_reporting/load_reporting_filter.h",
    "src/core/ext/census/aggregation.h",
    "src/core/ext/census/base_resources.h",
    "src/core/ext/census/census_interface.h",
    "src/core/ext/census/census_rpc_stats.h",
    "src/core/ext/census/gen/census.pb.h",
    "src/core/ext/census/gen/trace_context.pb.h",
    "src/core/ext/census/grpc_filter.h",
    "src/core/ext/census/mlog.h",
    "src/core/ext/census/resource.h",
    "src/core/ext/census/rpc_metric_id.h",
    "src/core/ext/census/trace_context.h",
  ],
  includes = [
    "include",
  ],
  deps = [
    ":gpr_objc",
    "//external:libssl_objc",
    "//external:nanopb",
  ],
  sdk_dylibs = ["libz"],
)



cc_binary(
  name = "alarm_test",
  srcs = [
    "test/core/surface/alarm_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "algorithm_test",
  srcs = [
    "test/core/compression/algorithm_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "alloc_test",
  srcs = [
    "test/core/support/alloc_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "alpn_test",
  srcs = [
    "test/core/transport/chttp2/alpn_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "bad_server_response_test",
  srcs = [
    "test/core/end2end/bad_server_response_test.c",
  ],
  deps = [
    ":test_tcp_server",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "bin_decoder_test",
  srcs = [
    "test/core/transport/chttp2/bin_decoder_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
  ],
)


cc_binary(
  name = "bin_encoder_test",
  srcs = [
    "test/core/transport/chttp2/bin_encoder_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
  ],
)


cc_binary(
  name = "census_context_test",
  srcs = [
    "test/core/census/context_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "census_resource_test",
  srcs = [
    "test/core/census/resource_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "census_trace_context_test",
  srcs = [
    "test/core/census/trace_context_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "channel_create_test",
  srcs = [
    "test/core/surface/channel_create_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "chttp2_hpack_encoder_test",
  srcs = [
    "test/core/transport/chttp2/hpack_encoder_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "chttp2_status_conversion_test",
  srcs = [
    "test/core/transport/chttp2/status_conversion_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "chttp2_stream_map_test",
  srcs = [
    "test/core/transport/chttp2/stream_map_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "chttp2_varint_test",
  srcs = [
    "test/core/transport/chttp2/varint_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "combiner_test",
  srcs = [
    "test/core/iomgr/combiner_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "compression_test",
  srcs = [
    "test/core/compression/compression_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "concurrent_connectivity_test",
  srcs = [
    "test/core/surface/concurrent_connectivity_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "connection_refused_test",
  srcs = [
    "test/core/end2end/connection_refused_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "dns_resolver_connectivity_test",
  srcs = [
    "test/core/client_config/resolvers/dns_resolver_connectivity_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "dns_resolver_test",
  srcs = [
    "test/core/client_config/resolvers/dns_resolver_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "dualstack_socket_test",
  srcs = [
    "test/core/end2end/dualstack_socket_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "endpoint_pair_test",
  srcs = [
    "test/core/iomgr/endpoint_pair_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "ev_epoll_linux_test",
  srcs = [
    "test/core/iomgr/ev_epoll_linux_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "fd_conservation_posix_test",
  srcs = [
    "test/core/iomgr/fd_conservation_posix_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "fd_posix_test",
  srcs = [
    "test/core/iomgr/fd_posix_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "fling_client",
  srcs = [
    "test/core/fling/client.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "fling_server",
  srcs = [
    "test/core/fling/server.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "fling_stream_test",
  srcs = [
    "test/core/fling/fling_stream_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "fling_test",
  srcs = [
    "test/core/fling/fling_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "goaway_server_test",
  srcs = [
    "test/core/end2end/goaway_server_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_avl_test",
  srcs = [
    "test/core/support/avl_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_backoff_test",
  srcs = [
    "test/core/support/backoff_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_cmdline_test",
  srcs = [
    "test/core/support/cmdline_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_cpu_test",
  srcs = [
    "test/core/support/cpu_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_env_test",
  srcs = [
    "test/core/support/env_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_histogram_test",
  srcs = [
    "test/core/support/histogram_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_host_port_test",
  srcs = [
    "test/core/support/host_port_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_log_test",
  srcs = [
    "test/core/support/log_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_mpscq_test",
  srcs = [
    "test/core/support/mpscq_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_percent_encoding_test",
  srcs = [
    "test/core/support/percent_encoding_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_slice_buffer_test",
  srcs = [
    "test/core/support/slice_buffer_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_slice_test",
  srcs = [
    "test/core/support/slice_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_stack_lockfree_test",
  srcs = [
    "test/core/support/stack_lockfree_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_string_test",
  srcs = [
    "test/core/support/string_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_sync_test",
  srcs = [
    "test/core/support/sync_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_thd_test",
  srcs = [
    "test/core/support/thd_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_time_test",
  srcs = [
    "test/core/support/time_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_tls_test",
  srcs = [
    "test/core/support/tls_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "gpr_useful_test",
  srcs = [
    "test/core/support/useful_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_auth_context_test",
  srcs = [
    "test/core/security/auth_context_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_b64_test",
  srcs = [
    "test/core/security/b64_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_byte_buffer_reader_test",
  srcs = [
    "test/core/surface/byte_buffer_reader_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_channel_args_test",
  srcs = [
    "test/core/channel/channel_args_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_channel_stack_test",
  srcs = [
    "test/core/channel/channel_stack_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_completion_queue_test",
  srcs = [
    "test/core/surface/completion_queue_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_credentials_test",
  srcs = [
    "test/core/security/credentials_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_fetch_oauth2",
  srcs = [
    "test/core/security/fetch_oauth2.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_invalid_channel_args_test",
  srcs = [
    "test/core/surface/invalid_channel_args_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_json_token_test",
  srcs = [
    "test/core/security/json_token_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_jwt_verifier_test",
  srcs = [
    "test/core/security/jwt_verifier_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_security_connector_test",
  srcs = [
    "test/core/security/security_connector_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "hpack_parser_test",
  srcs = [
    "test/core/transport/chttp2/hpack_parser_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "hpack_table_test",
  srcs = [
    "test/core/transport/chttp2/hpack_table_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "http_parser_test",
  srcs = [
    "test/core/http/parser_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "httpcli_format_request_test",
  srcs = [
    "test/core/http/format_request_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "httpcli_test",
  srcs = [
    "test/core/http/httpcli_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "httpscli_test",
  srcs = [
    "test/core/http/httpscli_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "init_test",
  srcs = [
    "test/core/surface/init_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "internal_api_canary_iomgr_test",
  srcs = [
    "test/core/internal_api_canaries/iomgr.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "internal_api_canary_support_test",
  srcs = [
    "test/core/internal_api_canaries/iomgr.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "internal_api_canary_transport_test",
  srcs = [
    "test/core/internal_api_canaries/iomgr.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "invalid_call_argument_test",
  srcs = [
    "test/core/end2end/invalid_call_argument_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "json_rewrite",
  srcs = [
    "test/core/json/json_rewrite.c",
  ],
  deps = [
    ":grpc",
    ":gpr",
  ],
)


cc_binary(
  name = "json_rewrite_test",
  srcs = [
    "test/core/json/json_rewrite_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "json_stream_error_test",
  srcs = [
    "test/core/json/json_stream_error_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "json_test",
  srcs = [
    "test/core/json/json_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "lame_client_test",
  srcs = [
    "test/core/surface/lame_client_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "lb_policies_test",
  srcs = [
    "test/core/client_config/lb_policies_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "load_file_test",
  srcs = [
    "test/core/iomgr/load_file_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "message_compress_test",
  srcs = [
    "test/core/compression/message_compress_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "mlog_test",
  srcs = [
    "test/core/census/mlog_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "multiple_server_queues_test",
  srcs = [
    "test/core/end2end/multiple_server_queues_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "murmur_hash_test",
  srcs = [
    "test/core/support/murmur_hash_test.c",
  ],
  deps = [
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "no_server_test",
  srcs = [
    "test/core/end2end/no_server_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "resolve_address_test",
  srcs = [
    "test/core/iomgr/resolve_address_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "secure_channel_create_test",
  srcs = [
    "test/core/surface/secure_channel_create_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "secure_endpoint_test",
  srcs = [
    "test/core/security/secure_endpoint_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "sequential_connectivity_test",
  srcs = [
    "test/core/surface/sequential_connectivity_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "server_chttp2_test",
  srcs = [
    "test/core/surface/server_chttp2_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "server_test",
  srcs = [
    "test/core/surface/server_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "set_initial_connect_string_test",
  srcs = [
    "test/core/client_config/set_initial_connect_string_test.c",
  ],
  deps = [
    ":test_tcp_server",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "sockaddr_resolver_test",
  srcs = [
    "test/core/client_config/resolvers/sockaddr_resolver_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "sockaddr_utils_test",
  srcs = [
    "test/core/iomgr/sockaddr_utils_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "socket_utils_test",
  srcs = [
    "test/core/iomgr/socket_utils_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "tcp_client_posix_test",
  srcs = [
    "test/core/iomgr/tcp_client_posix_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "tcp_posix_test",
  srcs = [
    "test/core/iomgr/tcp_posix_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "tcp_server_posix_test",
  srcs = [
    "test/core/iomgr/tcp_server_posix_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "time_averaged_stats_test",
  srcs = [
    "test/core/iomgr/time_averaged_stats_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "timeout_encoding_test",
  srcs = [
    "test/core/transport/timeout_encoding_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "timer_heap_test",
  srcs = [
    "test/core/iomgr/timer_heap_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "timer_list_test",
  srcs = [
    "test/core/iomgr/timer_list_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "transport_connectivity_state_test",
  srcs = [
    "test/core/transport/connectivity_state_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "transport_metadata_test",
  srcs = [
    "test/core/transport/metadata_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "transport_security_test",
  srcs = [
    "test/core/tsi/transport_security_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "udp_server_test",
  srcs = [
    "test/core/iomgr/udp_server_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "uri_parser_test",
  srcs = [
    "test/core/client_config/uri_parser_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "alarm_cpp_test",
  srcs = [
    "test/cpp/common/alarm_cpp_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "async_end2end_test",
  srcs = [
    "test/cpp/end2end/async_end2end_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "auth_property_iterator_test",
  srcs = [
    "test/cpp/common/auth_property_iterator_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "channel_arguments_test",
  srcs = [
    "test/cpp/common/channel_arguments_test.cc",
  ],
  deps = [
    ":grpc++",
    ":grpc",
    ":gpr",
  ],
)


cc_binary(
  name = "cli_call_test",
  srcs = [
    "test/cpp/util/cli_call_test.cc",
  ],
  deps = [
    ":grpc_cli_libs",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "client_crash_test",
  srcs = [
    "test/cpp/end2end/client_crash_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "client_crash_test_server",
  srcs = [
    "test/cpp/end2end/client_crash_test_server.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "codegen_test_full",
  srcs = [
    "src/proto/grpc/testing/control.proto",
    "src/proto/grpc/testing/messages.proto",
    "src/proto/grpc/testing/payloads.proto",
    "src/proto/grpc/testing/services.proto",
    "src/proto/grpc/testing/stats.proto",
    "test/cpp/codegen/codegen_test_full.cc",
  ],
  deps = [
    ":grpc++",
    ":grpc",
    ":gpr",
  ],
)


cc_binary(
  name = "codegen_test_minimal",
  srcs = [
    "src/proto/grpc/testing/control.proto",
    "src/proto/grpc/testing/messages.proto",
    "src/proto/grpc/testing/payloads.proto",
    "src/proto/grpc/testing/services.proto",
    "src/proto/grpc/testing/stats.proto",
    "test/cpp/codegen/codegen_test_minimal.cc",
    "src/cpp/codegen/codegen_init.cc",
  ],
  deps = [
  ],
)


cc_binary(
  name = "credentials_test",
  srcs = [
    "test/cpp/client/credentials_test.cc",
  ],
  deps = [
    ":grpc++",
    ":grpc",
    ":gpr",
  ],
)


cc_binary(
  name = "cxx_byte_buffer_test",
  srcs = [
    "test/cpp/util/byte_buffer_test.cc",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "cxx_slice_test",
  srcs = [
    "test/cpp/util/slice_test.cc",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "cxx_string_ref_test",
  srcs = [
    "test/cpp/util/string_ref_test.cc",
  ],
  deps = [
    ":grpc++",
  ],
)


cc_binary(
  name = "cxx_time_test",
  srcs = [
    "test/cpp/util/time_test.cc",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "end2end_test",
  srcs = [
    "test/cpp/end2end/end2end_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "filter_end2end_test",
  srcs = [
    "test/cpp/end2end/filter_end2end_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "generic_end2end_test",
  srcs = [
    "test/cpp/end2end/generic_end2end_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "golden_file_test",
  srcs = [
    "src/proto/grpc/testing/compiler_test.proto",
    "test/cpp/codegen/golden_file_test.cc",
  ],
  deps = [
    ":grpc++",
    ":grpc",
    ":gpr",
  ],
)


cc_binary(
  name = "grpc_cli",
  srcs = [
    "test/cpp/util/grpc_cli.cc",
  ],
  deps = [
    ":grpc_cli_libs",
    ":grpc++_reflection",
    ":grpc++",
    ":grpc",
    ":gpr",
    ":grpc++_test_config",
  ],
)


cc_binary(
  name = "grpc_cpp_plugin",
  srcs = [
    "src/compiler/cpp_plugin.cc",
  ],
  deps = [
    "//external:protobuf_compiler",
    ":grpc_plugin_support",
  ],
)


cc_binary(
  name = "grpc_csharp_plugin",
  srcs = [
    "src/compiler/csharp_plugin.cc",
  ],
  deps = [
    "//external:protobuf_compiler",
    ":grpc_plugin_support",
  ],
)


cc_binary(
  name = "grpc_node_plugin",
  srcs = [
    "src/compiler/node_plugin.cc",
  ],
  deps = [
    "//external:protobuf_compiler",
    ":grpc_plugin_support",
  ],
)


cc_binary(
  name = "grpc_objective_c_plugin",
  srcs = [
    "src/compiler/objective_c_plugin.cc",
  ],
  deps = [
    "//external:protobuf_compiler",
    ":grpc_plugin_support",
  ],
)


cc_binary(
  name = "grpc_php_plugin",
  srcs = [
    "src/compiler/php_plugin.cc",
  ],
  deps = [
    "//external:protobuf_compiler",
    ":grpc_plugin_support",
  ],
)


cc_binary(
  name = "grpc_python_plugin",
  srcs = [
    "src/compiler/python_plugin.cc",
  ],
  deps = [
    "//external:protobuf_compiler",
    ":grpc_plugin_support",
  ],
)


cc_binary(
  name = "grpc_ruby_plugin",
  srcs = [
    "src/compiler/ruby_plugin.cc",
  ],
  deps = [
    "//external:protobuf_compiler",
    ":grpc_plugin_support",
  ],
)


cc_binary(
  name = "grpc_tool_test",
  srcs = [
    "src/proto/grpc/testing/echo.proto",
    "src/proto/grpc/testing/echo_messages.proto",
    "test/cpp/util/grpc_tool_test.cc",
    "test/cpp/util/string_ref_helper.cc",
  ],
  deps = [
    ":grpc_cli_libs",
    ":grpc++_reflection",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "grpclb_api_test",
  srcs = [
    "src/proto/grpc/lb/v1/load_balancer.proto",
    "test/cpp/grpclb/grpclb_api_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
  ],
)


cc_binary(
  name = "grpclb_test",
  srcs = [
    "src/proto/grpc/lb/v1/load_balancer.proto",
    "test/cpp/grpclb/grpclb_test.cc",
  ],
  deps = [
    ":gpr",
    ":gpr_test_util",
    ":grpc",
    ":grpc++",
    ":grpc++_test_util",
    ":grpc_test_util",
  ],
)


cc_binary(
  name = "hybrid_end2end_test",
  srcs = [
    "test/cpp/end2end/hybrid_end2end_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "interop_client",
  srcs = [
  ],
  deps = [
    ":interop_proto",
    "//external:gflags",
    ":interop_client_main",
    ":interop_client_helper",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
    ":grpc++_test_config",
  ],
)


cc_binary(
  name = "interop_server",
  srcs = [
  ],
  deps = [
    ":interop_proto",
    "//external:gflags",
    ":interop_server_main",
    ":interop_server_helper",
    ":interop_server_lib",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
    ":grpc++_test_config",
  ],
)


cc_binary(
  name = "interop_test",
  srcs = [
    "test/cpp/interop/interop_test.cc",
  ],
  deps = [
    ":interop_proto",
    "//external:gflags",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "json_run_localhost",
  srcs = [
    "test/cpp/qps/json_run_localhost.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
    ":grpc++_test_config",
  ],
)


cc_binary(
  name = "metrics_client",
  srcs = [
    "src/proto/grpc/testing/metrics.proto",
    "test/cpp/interop/metrics_client.cc",
  ],
  deps = [
    ":grpc++",
    ":grpc",
    ":gpr",
    ":grpc++_test_config",
  ],
)


cc_binary(
  name = "mock_test",
  srcs = [
    "test/cpp/end2end/mock_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "proto_server_reflection_test",
  srcs = [
    "test/cpp/end2end/proto_server_reflection_test.cc",
    "test/cpp/util/proto_reflection_descriptor_database.cc",
  ],
  deps = [
    ":grpc++_reflection",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "qps_interarrival_test",
  srcs = [
    "test/cpp/qps/qps_interarrival_test.cc",
  ],
  deps = [
    ":qps",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "qps_json_driver",
  srcs = [
    "test/cpp/qps/qps_json_driver.cc",
  ],
  deps = [
    ":qps",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
    ":grpc++_test_config",
  ],
)


cc_binary(
  name = "qps_openloop_test",
  srcs = [
    "test/cpp/qps/qps_openloop_test.cc",
  ],
  deps = [
    ":qps",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
    ":grpc++_test_config",
  ],
)


cc_binary(
  name = "qps_worker",
  srcs = [
    "test/cpp/qps/worker.cc",
  ],
  deps = [
    ":qps",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
    ":grpc++_test_config",
  ],
)


cc_binary(
  name = "reconnect_interop_client",
  srcs = [
    "src/proto/grpc/testing/empty.proto",
    "src/proto/grpc/testing/messages.proto",
    "src/proto/grpc/testing/test.proto",
    "test/cpp/interop/reconnect_interop_client.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
    ":grpc++_test_config",
  ],
)


cc_binary(
  name = "reconnect_interop_server",
  srcs = [
    "src/proto/grpc/testing/empty.proto",
    "src/proto/grpc/testing/messages.proto",
    "src/proto/grpc/testing/test.proto",
    "test/cpp/interop/reconnect_interop_server.cc",
  ],
  deps = [
    ":reconnect_server",
    ":test_tcp_server",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
    ":grpc++_test_config",
  ],
)


cc_binary(
  name = "secure_auth_context_test",
  srcs = [
    "test/cpp/common/secure_auth_context_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "secure_sync_unary_ping_pong_test",
  srcs = [
    "test/cpp/qps/secure_sync_unary_ping_pong_test.cc",
  ],
  deps = [
    ":qps",
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "server_builder_plugin_test",
  srcs = [
    "test/cpp/end2end/server_builder_plugin_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "server_crash_test",
  srcs = [
    "test/cpp/end2end/server_crash_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "server_crash_test_client",
  srcs = [
    "test/cpp/end2end/server_crash_test_client.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "shutdown_test",
  srcs = [
    "test/cpp/end2end/shutdown_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "status_test",
  srcs = [
    "test/cpp/util/status_test.cc",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "streaming_throughput_test",
  srcs = [
    "test/cpp/end2end/streaming_throughput_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "stress_test",
  srcs = [
    "src/proto/grpc/testing/empty.proto",
    "src/proto/grpc/testing/messages.proto",
    "src/proto/grpc/testing/metrics.proto",
    "src/proto/grpc/testing/test.proto",
    "test/cpp/interop/interop_client.cc",
    "test/cpp/interop/stress_interop_client.cc",
    "test/cpp/interop/stress_test.cc",
    "test/cpp/util/metrics_server.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
    ":grpc++_test_config",
  ],
)


cc_binary(
  name = "thread_stress_test",
  srcs = [
    "test/cpp/end2end/thread_stress_test.cc",
  ],
  deps = [
    ":grpc++_test_util",
    ":grpc_test_util",
    ":grpc++",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "public_headers_must_be_c89",
  srcs = [
    "test/core/surface/public_headers_must_be_c89.c",
  ],
  deps = [
    ":grpc",
    ":gpr",
  ],
)


cc_binary(
  name = "boringssl_aes_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_aes_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_asn1_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_asn1_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_base64_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_base64_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_bio_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_bio_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_bn_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_bn_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_bytestring_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_bytestring_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_aead_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_aead_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_cipher_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_cipher_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_cmac_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_cmac_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_constant_time_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_constant_time_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_ed25519_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_ed25519_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_x25519_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_x25519_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_dh_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_dh_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_digest_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_digest_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_dsa_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_dsa_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_ec_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_ec_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_example_mul",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_example_mul_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_ecdsa_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_ecdsa_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_err_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_err_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_evp_extra_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_evp_extra_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_evp_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_evp_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_pbkdf_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_pbkdf_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_hkdf_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_hkdf_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_hmac_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_hmac_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_lhash_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_lhash_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_gcm_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_gcm_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_pkcs12_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_pkcs12_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_pkcs8_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_pkcs8_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_poly1305_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_poly1305_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_refcount_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_refcount_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_rsa_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_rsa_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_thread_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_thread_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_pkcs7_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_pkcs7_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_x509_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_x509_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_tab_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_tab_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_v3name_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_v3name_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_pqueue_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_pqueue_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "boringssl_ssl_test",
  srcs = [
  ],
  deps = [
    "//external:libssl",
    ":boringssl_ssl_test_lib",
    ":boringssl_test_util",
    ":boringssl",
  ],
)


cc_binary(
  name = "badreq_bad_client_test",
  srcs = [
    "test/core/bad_client/tests/badreq.c",
  ],
  deps = [
    "//external:libssl",
    ":bad_client_test",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "connection_prefix_bad_client_test",
  srcs = [
    "test/core/bad_client/tests/connection_prefix.c",
  ],
  deps = [
    "//external:libssl",
    ":bad_client_test",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "head_of_line_blocking_bad_client_test",
  srcs = [
    "test/core/bad_client/tests/head_of_line_blocking.c",
  ],
  deps = [
    "//external:libssl",
    ":bad_client_test",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "headers_bad_client_test",
  srcs = [
    "test/core/bad_client/tests/headers.c",
  ],
  deps = [
    "//external:libssl",
    ":bad_client_test",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "initial_settings_frame_bad_client_test",
  srcs = [
    "test/core/bad_client/tests/initial_settings_frame.c",
  ],
  deps = [
    "//external:libssl",
    ":bad_client_test",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "large_metadata_bad_client_test",
  srcs = [
    "test/core/bad_client/tests/large_metadata.c",
  ],
  deps = [
    "//external:libssl",
    ":bad_client_test",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "server_registered_method_bad_client_test",
  srcs = [
    "test/core/bad_client/tests/server_registered_method.c",
  ],
  deps = [
    "//external:libssl",
    ":bad_client_test",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "simple_request_bad_client_test",
  srcs = [
    "test/core/bad_client/tests/simple_request.c",
  ],
  deps = [
    "//external:libssl",
    ":bad_client_test",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "unknown_frame_bad_client_test",
  srcs = [
    "test/core/bad_client/tests/unknown_frame.c",
  ],
  deps = [
    "//external:libssl",
    ":bad_client_test",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "window_overflow_bad_client_test",
  srcs = [
    "test/core/bad_client/tests/window_overflow.c",
  ],
  deps = [
    "//external:libssl",
    ":bad_client_test",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "bad_ssl_cert_server",
  srcs = [
    "test/core/bad_ssl/servers/cert.c",
  ],
  deps = [
    ":bad_ssl_test_server",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "bad_ssl_cert_test",
  srcs = [
    "test/core/bad_ssl/bad_ssl_test.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_census_test",
  srcs = [
    "test/core/end2end/fixtures/h2_census.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_compress_test",
  srcs = [
    "test/core/end2end/fixtures/h2_compress.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_fakesec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_fakesec.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_fd_test",
  srcs = [
    "test/core/end2end/fixtures/h2_fd.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_full_test",
  srcs = [
    "test/core/end2end/fixtures/h2_full.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_full+pipe_test",
  srcs = [
    "test/core/end2end/fixtures/h2_full+pipe.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_full+trace_test",
  srcs = [
    "test/core/end2end/fixtures/h2_full+trace.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_http_proxy_test",
  srcs = [
    "test/core/end2end/fixtures/h2_http_proxy.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_load_reporting_test",
  srcs = [
    "test/core/end2end/fixtures/h2_load_reporting.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_oauth2_test",
  srcs = [
    "test/core/end2end/fixtures/h2_oauth2.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_proxy_test",
  srcs = [
    "test/core/end2end/fixtures/h2_proxy.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_sockpair_test",
  srcs = [
    "test/core/end2end/fixtures/h2_sockpair.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_sockpair+trace_test",
  srcs = [
    "test/core/end2end/fixtures/h2_sockpair+trace.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_sockpair_1byte_test",
  srcs = [
    "test/core/end2end/fixtures/h2_sockpair_1byte.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_ssl_test",
  srcs = [
    "test/core/end2end/fixtures/h2_ssl.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_ssl_cert_test",
  srcs = [
    "test/core/end2end/fixtures/h2_ssl_cert.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_ssl_proxy_test",
  srcs = [
    "test/core/end2end/fixtures/h2_ssl_proxy.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_uds_test",
  srcs = [
    "test/core/end2end/fixtures/h2_uds.c",
  ],
  deps = [
    ":end2end_tests",
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_census_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_census.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_compress_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_compress.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_fd_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_fd.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_full_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_full.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_full+pipe_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_full+pipe.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_full+trace_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_full+trace.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_http_proxy_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_http_proxy.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_load_reporting_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_load_reporting.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_proxy_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_proxy.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_sockpair_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_sockpair.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_sockpair+trace_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_sockpair+trace.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_sockpair_1byte_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_sockpair_1byte.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "h2_uds_nosec_test",
  srcs = [
    "test/core/end2end/fixtures/h2_uds.c",
  ],
  deps = [
    ":end2end_nosec_tests",
    ":grpc_test_util_unsecure",
    ":grpc_unsecure",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "api_fuzzer_one_entry",
  srcs = [
    "test/core/end2end/fuzzers/api_fuzzer.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "client_fuzzer_one_entry",
  srcs = [
    "test/core/end2end/fuzzers/client_fuzzer.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "hpack_parser_fuzzer_test_one_entry",
  srcs = [
    "test/core/transport/chttp2/hpack_parser_fuzzer_test.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "http_request_fuzzer_test_one_entry",
  srcs = [
    "test/core/http/request_fuzzer.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "http_response_fuzzer_test_one_entry",
  srcs = [
    "test/core/http/response_fuzzer.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "json_fuzzer_test_one_entry",
  srcs = [
    "test/core/json/fuzzer.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "nanopb_fuzzer_response_test_one_entry",
  srcs = [
    "test/core/nanopb/fuzzer_response.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "nanopb_fuzzer_serverlist_test_one_entry",
  srcs = [
    "test/core/nanopb/fuzzer_serverlist.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "percent_decode_fuzzer_one_entry",
  srcs = [
    "test/core/support/percent_decode_fuzzer.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "percent_encode_fuzzer_one_entry",
  srcs = [
    "test/core/support/percent_encode_fuzzer.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "server_fuzzer_one_entry",
  srcs = [
    "test/core/end2end/fuzzers/server_fuzzer.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)


cc_binary(
  name = "uri_fuzzer_test_one_entry",
  srcs = [
    "test/core/client_config/uri_fuzzer_test.c",
    "test/core/util/one_corpus_entry_fuzzer.c",
  ],
  deps = [
    ":grpc_test_util",
    ":grpc",
    ":gpr_test_util",
    ":gpr",
  ],
)








objc_path = "src/objective-c"

rx_library_path = objc_path + "/RxLibrary"

objc_library(
  name = "rx_library",
  hdrs = glob([
    rx_library_path + "/*.h",
    rx_library_path + "/transformations/*.h",
  ]),
  srcs = glob([
    rx_library_path + "/*.m",
    rx_library_path + "/transformations/*.m",
  ]),
  includes = [objc_path],
  deps = [
    ":rx_library_private",
  ],
)

objc_library(
  name = "rx_library_private",
  hdrs = glob([rx_library_path + "/private/*.h"]),
  srcs = glob([rx_library_path + "/private/*.m"]),
  visibility = ["//visibility:private"],
)

objc_client_path = objc_path + "/GRPCClient"

objc_library(
  name = "grpc_client",
  hdrs = glob([
    objc_client_path + "/*.h",
    objc_client_path + "/private/*.h",
  ]),
  srcs = glob([
    objc_client_path + "/*.m",
    objc_client_path + "/private/*.m",
  ]),
  includes = [objc_path],
  bundles = [":gRPCCertificates"],
  deps = [
    ":grpc_objc",
    ":rx_library",
  ],
)

objc_bundle_library(
    # The choice of name is signicant here, since it determines the bundle name.
    name = "gRPCCertificates",
    resources = ["etc/roots.pem"],
)

proto_objc_rpc_path = objc_path + "/ProtoRPC"

objc_library(
  name = "proto_objc_rpc",
  hdrs = glob([
    proto_objc_rpc_path + "/*.h",
  ]),
  srcs = glob([
    proto_objc_rpc_path + "/*.m",
  ]),
  includes = [objc_path],
  deps = [
    ":grpc_client",
    ":rx_library",
    "//external:protobuf_objc",
  ],
)
