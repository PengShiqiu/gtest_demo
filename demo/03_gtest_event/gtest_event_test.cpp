#include <iostream>
// gtest
#include "gtest/gtest.h"

class MyEnv : public testing::Environment {
 public:
  // 全局事件
  virtual void SetUp() override { printf("Call MyEnv SetUp\n"); }
  virtual void TearDown() override { printf("Call MyEnv TearDown\n"); }
};

class MyTest : public testing::Test {
 public:
  // 测试套件事件
  static void SetUpTestCase() { printf("Call MyTest SetUpTestCase\n"); }
  static void TearDownTestCase() { printf("Call MyTest TearDownTestCase\n"); }

  // 测试用例事件
  virtual void SetUp() override { printf("Call MyTest SetUp\n"); }
  virtual void TearDown() override { printf("Call MyTest TearDown\n"); }
};

TEST_F(MyTest, FirstTest) {
  ASSERT_TRUE(true);  // ok
}

TEST_F(MyTest, SecondTest) {
  ASSERT_TRUE(true);  // ok
}

int main(int argc, char** argv) {
  // 初始化gtest
  testing::InitGoogleTest(&argc, argv);
  // 注册全局事件
  testing::AddGlobalTestEnvironment(new MyEnv());
  // 运行所有测试用例
  return RUN_ALL_TESTS();
}
