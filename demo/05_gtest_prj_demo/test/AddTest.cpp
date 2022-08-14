#include <iostream>
// gtest
#include "gtest/gtest.h"

/*
  以单个源文件测试为单位
  AddTest.cpp 对应 Add.cpp
  格式统一在测试模块后追加Test方式
*/

extern int Add(int a, int b);

TEST(HelloTest, Add) {
  EXPECT_EQ(Add(1, 1), 2); // ok
  EXPECT_EQ(Add(1, 1), 3); // fail
}


// 一般不写main函数，便于测试套件之间解耦