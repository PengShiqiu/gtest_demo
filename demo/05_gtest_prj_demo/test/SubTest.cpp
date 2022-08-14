#include <iostream>
// gtest
#include "gtest/gtest.h"

/*
  以单个源文件测试为单位
  SubTest.cpp 对应 Sub.cpp
  格式统一在测试模块后追加Test方式
*/

extern int Sub(int a, int b);

TEST(HelloTest, Sub) {
  EXPECT_EQ(Sub(1, 1), 0); // ok
  EXPECT_EQ(Sub(1, 1), 1); // fail
}
