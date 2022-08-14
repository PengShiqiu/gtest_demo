#include <iostream>
// gtest
#include "gtest/gtest.h"

int Sum(int a, int b) { return a + b; }

int Sub(int a, int b) { return a - b; }

// HelloTest - 测试套件
// Sum - Sum测试用例
TEST(HelloTest, Sum) {
  // 断言
  // 检测Sum函数执行结果是否符合预期
  EXPECT_EQ(Sum(1, 1), 2); // ok
  EXPECT_EQ(Sum(1, 1), 3); // fail
}

// HelloTest - 测试套件
// Sum - Sub测试用例
TEST(HelloTest, Sub) {
  // 断言
  // 检测Sub函数执行结果是否符合预期
  EXPECT_EQ(Sub(1, 1), 0); // ok
  EXPECT_EQ(Sub(1, 1), 1); // fail
}

/*

// 大多数场景下不需要手动写main
// 链接gtest_main静态库，使用默认main函数

int main(int argc, char** argv) {
  // 初始化gtest
  testing::InitGoogleTest(&argc, argv);
  // 运行所有测试用例
  return RUN_ALL_TESTS();
}
*/
