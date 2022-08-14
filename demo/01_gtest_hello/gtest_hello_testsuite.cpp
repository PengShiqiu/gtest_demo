#include <iostream>
// gtest
#include "gtest/gtest.h"

// 注意
// 派生自testing::Test
class MyTest : public testing::Test {
 public:
  MyTest() {}
  ~MyTest() {}
};

// 注意
// TEST   单一测试用例
// TEST_F 对应class的测试用例 支持测试套件事件等
TEST_F(MyTest, Hello_OK) { EXPECT_EQ(1, 1); }

TEST_F(MyTest, Hello_FAIL) { EXPECT_EQ(1, 2); }

int main(int argc, char** argv) {
  // 初始化gtest
  testing::InitGoogleTest(&argc, argv);
  // 运行所有测试用例
  return RUN_ALL_TESTS();
}

/*
./gtest_hello_testsuite 
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from MyTest
[ RUN      ] MyTest.Hello_OK
[       OK ] MyTest.Hello_OK (0 ms)
[ RUN      ] MyTest.Hello_FAIL
/mnt/e/C++/github/gtest_demo/demo/01_gtest_hello/gtest_hello_testsuite.cpp:13: Failure
Expected equality of these values:
  1
  2
[  FAILED  ] MyTest.Hello_FAIL (0 ms)
[----------] 2 tests from MyTest (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] MyTest.Hello_FAIL

 1 FAILED TEST
*/