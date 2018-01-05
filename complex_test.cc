// Copyright @2017 Pony AI Inc. All rights reserved.
// Authors: zz@pony.ai (Zhuo Zhang)

#include <gtest/gtest.h>
#include <memory>

#include "complex.h"

TEST(ComplexTest, override) {
  std::unique_ptr<Simple> simple;
  simple.reset(new Complex);

  EXPECT_EQ("hello world", simple->GetData());
}