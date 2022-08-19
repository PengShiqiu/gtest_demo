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

int main(int argc, char** argv) {
  // 重复10次测试
  testing::GTEST_FLAG(repeat) = 10;
  // 初始化gtest
  testing::InitGoogleTest(&argc, argv);
  // 运行所有测试用例
  return RUN_ALL_TESTS();
}

/*
./gtest_hello 
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from HelloTest
[ RUN      ] HelloTest.Sum
/mnt/e/C++/github/gtest_demo/demo/01_hello_gtest/gtest_hello.cpp:15: Failure
Expected equality of these values:
  Sum(1, 1)
    Which is: 2
  3
[  FAILED  ] HelloTest.Sum (0 ms)
[ RUN      ] HelloTest.Sub
/mnt/e/C++/github/gtest_demo/demo/01_hello_gtest/gtest_hello.cpp:24: Failure
Expected equality of these values:
  Sub(1, 1)
    Which is: 0
  1
[  FAILED  ] HelloTest.Sub (0 ms)
[----------] 2 tests from HelloTest (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 2 tests, listed below:
[  FAILED  ] HelloTest.Sum
[  FAILED  ] HelloTest.Sub

 2 FAILED TESTS
*/