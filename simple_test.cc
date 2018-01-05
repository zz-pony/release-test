// Copyright @2017 Pony AI Inc. All rights reserved.
// Authors: zz@pony.ai (Zhuo Zhang)

#include <gflags/gflags.h>
#include <gtest/gtest.h>
#include "glog/logging.h"

#include "simple.h"

DECLARE_bool(chinese);

class SimpleTest : public testing::Test {
};

TEST_F(SimpleTest, EnglishOutput) {
  Simple simple;
  std::string returned = simple.GetData();
  EXPECT_EQ("hello_world!", returned);
}

TEST_F(SimpleTest, ChineseOutput) {
  FLAGS_chinese = true;

  Simple simple;
  std::string returned = simple.GetData();
  EXPECT_EQ("ni hao shi jie!", returned);
}

