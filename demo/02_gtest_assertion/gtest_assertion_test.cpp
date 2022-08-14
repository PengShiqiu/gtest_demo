#include <iostream>
// gtest
#include "gtest/gtest.h"

TEST(AssertTest, Print) {
  int i = 1;
  int j = 2;

  // 断言错误输出自定义错误
  EXPECT_EQ(i, j) << "出错：期望得到 " << i << " 实际得到 " << j;
}

// 条件断言 true/false
TEST(AssertTest, TrueFalseTest) {
  EXPECT_TRUE(true);    // ok
  EXPECT_FALSE(false);  // ok
  EXPECT_FALSE(true);   // fail, 打印异常后继续执行

  ASSERT_TRUE(true);    // ok
  ASSERT_FALSE(false);  // ok
  ASSERT_FALSE(true);   // fail，退出当前测试用例，为了简化，
                        //      后续ASSERT和EXPECT版本只展示ECXPECT
  // 不会执行
  // ....
}

// 二元比较断言
TEST(AssertTest, ValueAssertTest) {
  EXPECT_EQ(1, 1);  // 1 == 1, ok
  EXPECT_NE(1, 2);  // 1 != 2, ok
  EXPECT_LT(1, 2);  // 1 < 2, ok
  EXPECT_LE(1, 1);  // 1 <= 1, ok
  EXPECT_GT(2, 1);  // 2 > 1, ok
  EXPECT_GE(2, 2);  // 2 >= 2, ok
}

// 字符比较断言
TEST(AssertTest, StringAssertTest) {
  EXPECT_STREQ("123", "123");      // "123" == "123", ok
  EXPECT_STRNE("1234", "123");     // "1234" != "123", ok
  EXPECT_STRCASEEQ("abc", "ABC");  // "abc" ==(忽略大小写) "ABC", ok
  EXPECT_STRCASENE("ABC", "cd");   // "ABC" !=(忽略大小写) "cd", ok
}

// 浮点数断言
TEST(AssertTest, FloatDoubleAssertTest) {
  EXPECT_FLOAT_EQ(1.1, 1.1);  // ok, 几乎相等，使用ULPs，误差4个ULP之内
  EXPECT_DOUBLE_EQ(1.2, 1.2);         // ok
  EXPECT_NEAR(1.001, 1.002, 0.0001);  // fail, 误差大于0.0001
}

// 标记成功或失败断言
TEST(AssertTest, SuccessFailAssertTest) {
  auto SuccessFunc = [this] {
    SUCCEED();  // 注意：SUCCEED()纯粹是记录性的，当前不会生成任何用户可见的输出
  };
  auto FailFunc = [this] {
    ADD_FAILURE() << "ADD_FAILURE()";
    ADD_FAILURE_AT(__FILE__, __LINE__) << "ADD_FAILURE_AT()";
    FAIL() << "FAIL()";  // 结束测试用例
    // 不会在执行了
    // ...
  };

  SuccessFunc();
  FailFunc();
}

// 异常断言
TEST(AssertTest, ThrowTest) {
  class MyExceptionClass : public std::exception {
   public:
    const char* what() const throw() { return "ThrowTest Exception\n"; }
  };

  auto ThowMyExceptionFunc = [this] {
    MyExceptionClass c;
    throw c;
  };
  auto ThowSTDExceptionFunc = [this] {
    throw std::runtime_error("std runtime error Exeception");
  };

  EXPECT_THROW(ThowMyExceptionFunc(),
               MyExceptionClass);  // ok,
                                   // 抛出一个MyExceptionClass异常
  EXPECT_THROW(ThowSTDExceptionFunc(),
               MyExceptionClass);  // fail
                                   // 抛出异常不为MyExceptionClass
  EXPECT_ANY_THROW(ThowMyExceptionFunc());  // ok， 抛出任意异常
}

// 谓词断言
TEST(AssertTest, PredAssertTest) {
  auto IsPositiveIntegerOne = [](int a) { return (a > 0); };
  auto IsPositiveIntegerTwo = [](int a, int b) { return (a > 0) && (b > 0); };
  int a = 1;
  EXPECT_PRED1(IsPositiveIntegerOne, a);     // ok, 1个参数
  EXPECT_PRED2(IsPositiveIntegerTwo, a, a);  // ok, 2个参数

  auto IsEven = [](int n) {
    if ((n % 2) == 0) {
      return testing::AssertionSuccess() << n << "是偶数";
    } else {
      return testing::AssertionFailure() << n << "是奇数";
    }
  };
  EXPECT_TRUE(IsEven(5));   // fail
  EXPECT_FALSE(IsEven(6));  // fail
}

// 类型断言
TEST(AssertTest, TypeAssertTest) {
  using TypeA = std::string;
  using TypeB = std::string;
  testing::StaticAssertTypeEq<TypeA, TypeB>();  // ok
}

// 死亡断言
TEST(AssertTest, DEATHTest) {
  auto Segfault = [] {
    int* pInt = 0;
    *pInt = 42;
  };
  EXPECT_DEATH(Segfault(), "");  // ok

  auto Normal = [] {
    int* pInt = new int;
    *pInt = 42;
  };
  EXPECT_DEATH(Normal(), "");  // fail
}

// 程序退出断言
TEST(AssertTest, ExitTest) {
  auto ExitTest = [] { _exit(1); };
  EXPECT_EXIT(ExitTest(), testing::ExitedWithCode(1), "");  // ok

  auto NormalTest = [] {};
  EXPECT_EXIT(NormalTest(), testing::ExitedWithCode(1), "");  // fail
}

// 添加追踪打印SCOPED_TRACE()
TEST(AssertTest, SCOPED_TRACE_Test) {
  auto Callback = [] { EXPECT_TRUE(false); };

  SCOPED_TRACE("This first call Callback function");
  Callback();

  SCOPED_TRACE("This second call Callback function");
  Callback();
}

// 断言子程序
TEST(AssertTest, SubroutinesTest) {
  auto GenerateAFatalFailures = []() {
    ASSERT_FALSE(true);  // fail
  };
  ASSERT_NO_FATAL_FAILURE(
      GenerateAFatalFailures());  // fail, GenerateAFatalFailures()
                                  // 存在失败
}

// 断言子程序是否存在致命错误
TEST(AssertTest, HasFatalFailureTest) {
  auto GenerateAFatalFailures = []() {
    ASSERT_FALSE(true);  // fail, 退出程序
  };
  GenerateAFatalFailures();
  if (HasFatalFailure()) {
    ADD_FAILURE() << "出现致命错误";
  }
}