cc_library(
    name = "simple",
    srcs = [
        "simple.cc",
    ],
    hdrs = [
        "simple.h",
    ],
    deps = [
        "@gflags//:gflags",
    ],
)

cc_test(
    name = "simple_test",
    srcs = [
        "simple_test.cc",
    ],
    deps = [
        ":simple",
        "@gflags//:gflags",
        "@glog//:glog",
        "@googletest//:gtest_main",
    ],
)

cc_library(
    name = "complex",
    srcs = [
        "complex.cc",
    ],
    hdrs = [
        "complex.h",
    ],
    deps = [
        ":simple",
    ],
)

cc_test(
    name = "complex_test",
    srcs = [
        "complex_test.cc",
    ],
    deps = [
        ":complex",
        # "@glog//:glog",
        "@googletest//:gtest_main",
    ],
)
