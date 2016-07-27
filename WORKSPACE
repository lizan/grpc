bind(
    name = "grpc_cpp_plugin",
    actual = "//:grpc_cpp_plugin",
)

bind(
    name = "grpc_lib",
    actual = "//:grpc++_reflection",
)

git_repository(
    name = "gflags_git",
    commit = "fe57e5af4db74ab298523f06d2c43aa895ba9f98", # 2016-07-22
    remote = "https://github.com/gflags/gflags",
)

bind(
    name = "gflags",
    actual = "@gflags_git//:gflags",
)

git_repository(
    name = "protobuf_git",
    commit = "bdeb215cab2985195325fcd5e70c3fa751f46e0f", # v3.0.0-beta-3.3
    remote = "https://github.com/google/protobuf.git",
)

bind(
    name = "protoc",
    actual = "@protobuf_git//:protoc",
)

bind(
    name = "protobuf",
    actual = "@protobuf_git//:protobuf",
)

bind(
    name = "cc_wkt_protos",
    actual = "@protobuf_git//:cc_wkt_protos",
)

bind(
    name = "cc_wkt_protos_genproto",
    actual = "@protobuf_git//:cc_wkt_protos_genproto",
)

bind(
    name = "protobuf_compiler",
    actual = "@protobuf_git//:protoc_lib",
)

bind(
    name = "protobuf_clib",
    actual = "@protobuf_git//:protobuf_lite",
)

bind(
    name = "protobuf_objc",
    actual = "@protobuf_git//:protobuf_objc",
)

git_repository(
    name = "boringssl_git",
    commit = "be3ce3da7c9e830f7ef25cf0f92ec34896ad0823", # master 2016-07-21
    remote = "https://boringssl.googlesource.com/boringssl",
)

bind(
    name = "libssl",
    actual = "@boringssl_git//:ssl",
)

bind(
    name = "libssl_objc",
    actual = "@boringssl_git//:ssl",
)


new_git_repository(
    name = "nanopb_git",
    build_file = "third_party/BUILD.nanopb",
    commit = "f8ac463766281625ad710900479130c7fcb4d63b",
    remote = "https://github.com/nanopb/nanopb.git",
)

bind(
    name = "nanopb",
    actual = "@nanopb_git//:nanopb",
)

new_git_repository(
    name = "zlib_git",
    build_file = "third_party/BUILD.zlib",
    commit = "50893291621658f355bc5b4d450a8d06a563053d",
    remote = "https://github.com/madler/zlib.git",
)

bind(
    name = "zlib",
    actual = "@zlib_git//:zlib",
)

new_git_repository(
    name = "googletest_git",
    build_file = "third_party/BUILD.googletest",
    commit = "ec44c6c1675c25b9827aacd08c02433cccde7780",
    remote = "https://github.com/google/googletest.git",
)

bind(
    name = "googletest",
    actual = "@googletest_git//:googletest",
)
