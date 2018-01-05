// Copyright @2017 Pony AI Inc. All rights reserved.
// Authors: zz@pony.ai (Zhuo Zhang)

#include <gflags/gflags.h>

#include "simple.h"

DEFINE_bool(chinese, false, "If true, return data in Chinese.");

std::string Simple::GetData() const {
  if (FLAGS_chinese) return "ni hao shi jie!";
  return "hello_world!";
}
