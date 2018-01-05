package(default_visibility = ["//visibility:public"])

licenses(["notice"])

config_setting(
    name = "win",
    values = {"cpu": "x64_windows_msvc"},
)

# Google Test
cc_library(
    name = "gtest",
    srcs = glob(
        include = [
            "src/*.cc",
            "src/*.h",
            "include/gtest/**/*.h",
        ],
        exclude = [
            "src/gtest-all.cc",
            "src/gtest_main.cc",
        ],
    ),
    hdrs =glob([
        "include/gtest/*.h",
    ]),
    copts = select(
        {
            ":win": [],
            "//conditions:default": ["-pthread"],
        },
    ),
    includes = [
        "include",
    ],
    linkopts = select({
        ":win": [],
        "//conditions:default": [
            "-pthread",
        ],
    }),
)

cc_library(
    name = "gtest_main",
    srcs = [
        "src/gtest_main.cc",
    ],
    deps = ["//:gtest"],
)

