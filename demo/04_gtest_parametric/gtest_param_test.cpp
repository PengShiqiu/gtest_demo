#include <iostream>
// gtest
#include "gtest/gtest.h"

class ParamTest : public testing::TestWithParam<int> {
  // do nothing
};
TEST_P(ParamTest, Test1) {
  auto v = GetParam();
  EXPECT_LT(v, 3);
}
INSTANTIATE_TEST_CASE_P(IntType, ParamTest, testing::Values(2, 3, 4));