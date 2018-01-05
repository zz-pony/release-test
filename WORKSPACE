workspace(name = "hello_world")

# gtest
new_git_repository(
    name = "googletest",
    build_file = "googletest.BUILD",
    remote = "https://github.com/google/googletest",
    tag = "release-1.8.0",
    # tag = "release-1.7.0",
)

# gflags
http_archive(
    name = "gflags",
    # sha256 = "466c36c6508a451734e4f4d76825cf9cd9b8716d2b70ef36479ae40f08271f88",
    strip_prefix = "gflags-2.2.1",
    url = "https://github.com/gflags/gflags/archive/v2.2.1.tar.gz",
)

# glog
new_http_archive(
    name = "glog",
    build_file = "glog.BUILD",
    sha256 = "7580e408a2c0b5a89ca214739978ce6ff480b5e7d8d7698a2aa92fadc484d1e0",
    strip_prefix = "glog-0.3.5",
    url = "https://github.com/google/glog/archive/v0.3.5.tar.gz",
)
