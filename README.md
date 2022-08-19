
---

# 1 介绍
:::info
💡  本文代码demo可通过[gtest_demo.zip](https://pengsq.yuque.com/attachments/yuque/0/2022/zip/27800458/1660633683120-9702be77-601b-4321-8dd1-eda566bcc28f.zip?_lake_card=%7B%22src%22%3A%22https%3A%2F%2Fpengsq.yuque.com%2Fattachments%2Fyuque%2F0%2F2022%2Fzip%2F27800458%2F1660633683120-9702be77-601b-4321-8dd1-eda566bcc28f.zip%22%2C%22name%22%3A%22gtest_demo.zip%22%2C%22size%22%3A1222880%2C%22type%22%3A%22application%2Fx-zip-compressed%22%2C%22ext%22%3A%22zip%22%2C%22source%22%3A%22%22%2C%22status%22%3A%22done%22%2C%22mode%22%3A%22title%22%2C%22download%22%3Atrue%2C%22taskId%22%3A%22u085dbe60-4832-4b9d-98fc-d6db1b3437b%22%2C%22taskType%22%3A%22upload%22%2C%22__spacing%22%3A%22both%22%2C%22id%22%3A%22g6HEX%22%2C%22margin%22%3A%7B%22top%22%3Atrue%2C%22bottom%22%3Atrue%7D%2C%22card%22%3A%22file%22%7D)链接进行下载。
💻  编译环境X86,ubuntu16.4,CMake 3.8
:::
## 1.1 单元测试的意义
> 单元测试的目的在于发现各模块内部可能存在的各种错误，主要包括以下几个方面

> 1. 单元测试是一种验证行为—— 测试和验证程序中每一项功能的正确性，为以后的开发提供支持；
> 1. 单元测试是一种设计行为—— 编写单元测试将使我们从调用者观察、思考，特别是要先考虑测试，这样就可把程序设计成易于调用和可测试的，并努力降低软件中的耦合，还可以使编码人员在编码时产生预测试，将程序的缺陷降低到最小；
> 1. 单元测试是一种编写文档的行为—— 是展示函数或类如何使用的最佳文档；
> 1. 单元测试具有回归性—— 自动化的单元测试有助于进行回归测试。
> 
引用链接：

## 1.2 为什么使用gtest
> gtest 是 Google 的开源 C++单元测试框架， 基于 xUnit 架构， 支持 Linux、 Mac OS X、 Windows、
> Cygwin、 MinGW、 Windows Mobile、 Symbian 和 PlatformIO 等平台。 

- 自动发现测试(Test Discovery)；
- 丰富的断言集(A rich set of assertions)；
- 用户定义的断言(User-defined assertions)；
- 死亡测试(Death tests)；
- 致命与非致命的失败(Fatal and non-fatal failures)；
- 值参数化测试(Value-parameterized tests)；
- 类型参数化测试(Type-parameterized tests)；
- 各类运行测试的选项(Various options for running the tests)；
- XML 测试报告(XML test report generation)

:::info
💡  gtest具备以下几个优点：

1. 依赖少，跨平台，纯c++实现，无第三方依赖；
1. 功能强大、语法简单、接口友好；
1. 开源。
:::
## 1.3 基本概念
### 1.3.1 测试用例（Test Case）
测试用例是指特定的一个测试， 在 gtest 中具有此概念的参数的名称一般是 test_name， 表示此测试用例的名称， 在输出的 xml 格式的测试报告中以 testcase 标签来描述一个测试用例的测试结果 。
```cpp
TEST(HelloTest, Sum) {// Sum : 测试用例名称
    // do nothing
}
```
### 1.3.2 测试套件(Test Suite)
测试套件包含了一组相关的测试用例(一个或多个)。 应该将自己的测试用例分别归类到测试
套件中， 以反映被测代码的结构。在 gtest 中具有此概念的参数的名称一般是 test_case_name， 表
示此测试套件的名称。
一个测试套件可以包含多个测试用例，一个测试进程可包含多个测试套件。
![](https://cdn.nlark.com/yuque/0/2022/jpeg/27800458/1660615608920-91532844-9e77-48d1-8861-737e591fa100.jpeg)
```cpp
TEST(HelloTest, Sum) {// HelloTest : 测试套件 Sum : 测试用例
    // do nothing
}
TEST(HelloTest, Dec) {// HelloTest : 测试套件 Dec : 测试用例
    // do nothing
}
TEST_F(HelloTestClass, Dec) {// HelloTestClass : 测试夹具 Dec : 测试用例
    // do nothing
}
```
:::info
💡	测试套件在TEST_F(Test fixture)中又称测试夹具。
:::
### 1.3.3 断言
> 断言是单元测试的基础
> 断言是一些检查条件是否为真的语句。 一个断言的结果可能是成功、 非致命失败， 或者致命
失败。 如果一个致命失败出现， 它会结束当前的函数； 否则， 程序继续正常运行。

程序执行结果无非在于：成功、失败、或者程序异常崩溃、退出，使用各种gtest提供的各种断言语法可满足单元测试的各种检测需求，断言类型主要分为：

- 致命断言： 当此种断言失败时会结束当前函数， 只能在返回 void 的函数中使用； 
- 非致命断言： 当此种断言失败时， 程序继续正常运行。 
## 1.4 测试用例相关宏
gest 提供了一系列能方便我们编写测试用例的宏， 本文档将介绍的测试用例宏如下：
 

| 宏名称 | 说明 | Demo Code |
| --- | --- | --- |
| TEST(test_case_name, test_name); | 测试用例 | [链接](#Lfx15) |
| TEST_F(test_fixture, test_name); | 测试夹具 | [链接](#VPHQX) |
| TEST_P(test_case_name, test_name); | 参数化用例 | [链接](#sM2kd) |
| INSTANTIATE_TEST_CASE_P(prefix, test_case_name, generator, ...); | 关联测试用例和参数 |  |
| TYPED_TEST_CASE(CaseName, Types); | 类型测试用例关联类型 | [链接](#N18us) |
| TYPED_TEST(CaseName, TestName); | 类型测试用例 |  |
| TYPED_TEST_CASE_P(CaseName); | 声明参数类型测试用例 | [链接](#OqT0V) |
| TYPED_TEST_P(CaseName, TestName); | 参数类型测试用例 |  |
| REGISTER_TYPED_TEST_CASE_P(CaseName, ...); | 注册参数类型测试用例 |  |
| INSTANTIATE_TYPED_TEST_CASE_P(Prefix, CaseName, Types); | 实例化参数 |  |

## 1.5 gtest简单Demo
```cpp
#include <iostream>
// gtest
#include "gtest/gtest.h"

int Sum(int a, int b) { 
    return a + b; 
}

int Sub(int a, int b) { 
    return a - b; 
}

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
  // 初始化gtest
  testing::InitGoogleTest(&argc, argv);
  // 运行所有测试用例
  return RUN_ALL_TESTS();
}
```
执行结果：
```shell
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
```

---

# 2 断言
> 断言在gtest中是一些宏函数。要测试一个类或者一个函数，需要对其行为做出断言，判断程序执行是否正确，判断对象可以是函数返回值，抛异常，程序段错误，程序退出。
断言失败时，打印代码位置已经错误值和期望值用于快速判断程序错误。 

	断言分为两类：

1. ASSERT 系列致命断言， 形如 ASSERT_*。 当断言失败时产生致命失败， 会终止后续测试代码的执行， 退出当前函数， 然后继续执行后面的测试； 
1. EXPECT 系列非致命断言， 形如 EXPECT_*。 当断言失败时产生非致命失败， 不会退出当前函数，而是继续执行后续测试代码。 
:::info
💡	通常非致命断言使用EXPECT 系列，断言失败时尽量执行更多的测试，致命断言时才使用ASSERT系列。
:::
## 2.1 断言错误时自定义打印
要提供一个自定义的错误信息，只需要使用<<操作符，或一个<<操作符的序列，将其输入到
框架定义的宏中。下面是一个示例：
```cpp
TEST(AssertTest, Print) {
  int i = 1;
  int j = 2;

  // 断言错误输出自定义错误
  EXPECT_EQ(i, j) << "出错：期望得到 " << i << " 实际得到 " << j;
}
```
执行输出：
```cpp
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
Note: Google Test filter = AssertTest.Print
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.Print
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:10: Failure
Expected equality of these values:
  i
    Which is: 1
  j
    Which is: 2
出错：期望得到 1 实际得到 2
[  FAILED  ] AssertTest.Print (0 ms)
[----------] 1 test from AssertTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.Print

 1 FAILED TEST
```
## 2.2 条件断言
当断言失败时，ASSERT_*产生一个致命失败并从当前函数返回，而 EXCEPT致命失败，允许函数继续运行。下面是一个示例：
```cpp
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
```
执行输出：
```cpp
Note: Google Test filter = AssertTest.TrueFalseTest
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.TrueFalseTest
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:17: Failure
Value of: true
  Actual: true
Expected: false
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:21: Failure
Value of: true
  Actual: true
Expected: false
[  FAILED  ] AssertTest.TrueFalseTest (0 ms)
[----------] 1 test from AssertTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.TrueFalseTest

 1 FAILED TEST
```
:::info
💡	为了简化文档，后续ASSERT和EXPECT版本只展示ECXPECT。
:::
## 2.3 二元比较断言
二元比较本质上是使用C++比较操作符：`==`  `!=` `<` `<=``>` `>=`，下面是一个示例：
```cpp
// 二元比较断言
TEST(AssertTest, ValueAssertTest) {
  EXPECT_EQ(1, 1);  // 1 == 1, ok
  EXPECT_EQ(1, 2);  // 1 == 2, fail

  EXPECT_NE(1, 2);  // 1 != 2, ok
  EXPECT_NE(1, 1);  // 1 != 2, fail

  EXPECT_LT(1, 2);  // 1 < 2, ok
  EXPECT_LT(1, 0);  // 1 < 0, fail

  EXPECT_LE(1, 1);  // 1 <= 1, ok
  EXPECT_LE(2, 1);  // 2 <= 1, fail

  EXPECT_GT(2, 1);  // 2 > 1, ok
  EXPECT_GT(1, 1);  // 1 > 1, fail
  
  EXPECT_GE(2, 2);  // 2 >= 2, ok
  EXPECT_GE(2, 3);  // 2 >= 3, fail
}
```
程序输出：
```cpp
 ./gtest_assertion_test 
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.ValueAssertTest
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:33: Failure
Expected equality of these values:
  1
  2
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:36: Failure
Expected: (1) != (1), actual: 1 vs 1
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:39: Failure
Expected: (1) < (0), actual: 1 vs 0
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:42: Failure
Expected: (2) <= (1), actual: 2 vs 1
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:45: Failure
Expected: (1) > (1), actual: 1 vs 1
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:48: Failure
Expected: (2) >= (3), actual: 2 vs 3
[  FAILED  ] AssertTest.ValueAssertTest (0 ms)
[----------] 1 test from AssertTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.ValueAssertTest

 1 FAILED TEST
```
## 2.4 字符比较断言
字符串分为C风格字符串`char*`和C++风格字符串，包含`std::string``std::wstring`。C++风格字符串推荐使用`EXPECT_EQ`进行断言；如果是C风格字符串，下面演示一个示例：

```cpp
// 字符比较断言
TEST(AssertTest, StringAssertTest) {
  EXPECT_STREQ("123", "123");       // "123" == "123", ok
  EXPECT_STREQ("123", "1234");      // "123" == "1234", fail
  
  EXPECT_STRNE("1234", "123");      // "1234" != "123", ok
  EXPECT_STRNE("123", "123");       // "1234" != "123", fail

  EXPECT_STRCASEEQ("abc", "ABC");   // "abc" ==(忽略大小写) "ABC", ok
  EXPECT_STRCASEEQ("abc", "ABCD");  // "abc" ==(忽略大小写) "ABCD", fail

  EXPECT_STRCASENE("ABC", "cd");    // "ABC" !=(忽略大小写) "cd", ok
  EXPECT_STRCASENE("ABC", "abc");   // "ABC" !=(忽略大小写) "abc", fail
}
```
程序输出：
```cpp
 ./gtest_assertion_test --gtest_filter=AssertTest.StringAssertTest
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
Note: Google Test filter = AssertTest.StringAssertTest
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.StringAssertTest
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:54: Failure
Expected equality of these values:
  "123"
  "1234"
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:57: Failure
Expected: ("123") != ("123"), actual: "123" vs "123"
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:60: Failure
Expected equality of these values:
  "abc"
  "ABCD"
Ignoring case
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:63: Failure
Expected: ("ABC") != ("abc") (ignoring case), actual: "ABC" vs "abc"
[  FAILED  ] AssertTest.StringAssertTest (0 ms)
[----------] 1 test from AssertTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.StringAssertTest

 1 FAILED TEST
```
:::info
💡	注意：在进行指针比较时， 应该使用*_EQ(ptr, nullptr)和*_NE(ptr, nullptr)， 而不是使用*_EQ(ptr,
NULL)和*_NE(ptr, NULL)。 因为 nullptr 没有 NULL 所具有的类型问题。
:::
## 2.5 浮点数断言
> 浮点数比较需要考虑精度问题，gtest使用 ULPs(Units in the Last Place)来作为浮点数比较的方法 。 
> 参考链接：

```cpp
// 浮点数断言
TEST(AssertTest, FloatDoubleAssertTest) {
  EXPECT_FLOAT_EQ(1.1, 1.1);          // ok, 几乎相等，使用ULPs，误差4个ULP之内
  EXPECT_DOUBLE_EQ(1.2, 1.2);         // ok
  EXPECT_NEAR(1.001, 1.002, 0.0001);  // fail, 误差大于0.0001
}
```
执行输出：
```cpp
./gtest_assertion_test --gtest_filter=AssertTest.FloatDoubleAssertTest
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
Note: Google Test filter = AssertTest.FloatDoubleAssertTest
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.FloatDoubleAssertTest
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:70: Failure
The difference between 1.001 and 1.002 is 0.0010000000000001119, which exceeds 0.0001, where
1.001 evaluates to 1.0009999999999999,
1.002 evaluates to 1.002, and
0.0001 evaluates to 0.0001.
[  FAILED  ] AssertTest.FloatDoubleAssertTest (0 ms)
[----------] 1 test from AssertTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.FloatDoubleAssertTest

 1 FAILED TEST
```
## 2.6 标记结果方式断言
该组断言实际上并不测试值或表达式， 它们直接产生成功或失败。 与实际执行测试的宏一样，可以将自定义失败消息流式传输到它们中。

- `SUCCEED()`产生成功。 这不会使整体测试成功。 仅当测试在执行期间没有任何断言失败时， 该测试才被
视为成功;
- `FAIL()`产生致命错误 ;
- `ADD_FAILURE()`产生非致命错误 ;
- `ADD_FAILURE_AT(file, line)`产生非致命错误 ,可指定打印文件信息。
:::info
💡	注意：SUCCEED()纯粹是记录性的， 当前不会生成任何用户可见的输出。
:::
 下面是一个示例：
```cpp
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
```
执行输出：
```cpp
./gtest_assertion_test --gtest_filter=AssertTest.SuccessFailAssertTest
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
Note: Google Test filter = AssertTest.SuccessFailAssertTest
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.SuccessFailAssertTest
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:79: Failure
Failed
ADD_FAILURE()
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:80: Failure
Failed
ADD_FAILURE_AT()
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:81: Failure
Failed
FAIL()
[  FAILED  ] AssertTest.SuccessFailAssertTest (0 ms)
[----------] 1 test from AssertTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.SuccessFailAssertTest
```
## 2.7 异常断言
该组断言用于验证一段代码是否抛出（或不抛出） 给定类型的异常。 下面是一个示例：
```cpp
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
```
执行输出：
```cpp
 ./gtest_assertion_test --gtest_filter=AssertTest.ThrowTest
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
Note: Google Test filter = AssertTest.ThrowTest
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.ThrowTest
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:109: Failure
Expected: ThowSTDExceptionFunc() throws an exception of type MyExceptionClass.
  Actual: it throws std::runtime_error with description "std runtime error Exeception".
[  FAILED  ] AssertTest.ThrowTest (2 ms)
[----------] 1 test from AssertTest (2 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (2 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.ThrowTest

 1 FAILED TEST
```
## 2.8 谓词断言
使用较少，可自定义断言输出。
```cpp
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
```
执行输出：
```cpp
./gtest_assertion_test --gtest_filter=AssertTest.PredAssertTest
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
Note: Google Test filter = AssertTest.PredAssertTest
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.PredAssertTest
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:129: Failure
Value of: IsEven(5)
  Actual: false (5是奇数)
Expected: true
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:130: Failure
Value of: IsEven(6)
  Actual: true (6是偶数)
Expected: false
[  FAILED  ] AssertTest.PredAssertTest (0 ms)
[----------] 1 test from AssertTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.PredAssertTest
```
## 2.9 类型断言
在编译阶段对两个类型进行比较，下面是一个示例：
```cpp
// 类型断言
TEST(AssertTest, TypeAssertTest) {
  using TypeA = std::string;
  using TypeB = std::string;
  using TypeC = std::wstring;
  testing::StaticAssertTypeEq<TypeA, TypeB>();  // ok
  testing::StaticAssertTypeEq<TypeA, TypeC>();  // fail
}
```
执行输出:
```cpp
[ 31%] Building CXX object demo/02_gtest_assertion/CMakeFiles/gtest_assertion_test.dir/gtest_assertion_test.cpp.o
In file included from /mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:3:0:
/mnt/f/Github/gtest_demo/gtest/include/gtest/gtest.h: In instantiation of ‘constexpr bool testing::StaticAssertTypeEq() [with T1 = std::__cxx11::basic_string<char>; T2 = std::__cxx11::basic_string<wchar_t>]’:
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:139:45:   required from here
/mnt/f/Github/gtest_demo/gtest/include/gtest/gtest.h:2121:3: error: static assertion failed: T1 and T2 are not the same type
   static_assert(std::is_same<T1, T2>::value, "T1 and T2 are not the same type");
   ^~~~~~~~~~~~~
demo/02_gtest_assertion/CMakeFiles/gtest_assertion_test.dir/build.make:62: recipe for target 'demo/02_gtest_assertion/CMakeFiles/gtest_assertion_test.dir/gtest_assertion_test.cpp.o' failed
make[2]: *** [demo/02_gtest_assertion/CMakeFiles/gtest_assertion_test.dir/gtest_assertion_test.cpp.o] Error 1
CMakeFiles/Makefile2:248: recipe for target 'demo/02_gtest_assertion/CMakeFiles/gtest_assertion_test.dir/all' failed
make[1]: *** [demo/02_gtest_assertion/CMakeFiles/gtest_assertion_test.dir/all] Error 2
Makefile:83: recipe for target 'all' failed
make: *** [all] Error 2
```
## 2.10 死亡断言
这里的“死亡” 是指程序崩溃。 通常在测试过程中需要考虑各种输入， 有的输入可能直接导致程序崩溃， 这时就需要检测程序是否按照期望的方式发生崩溃。 gtest 的死亡测试能做到在一个安全的环境下执行崩溃的测试用例， 同时又对崩溃结果做验证。下面是一个示例：
```cpp
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
```
执行输出：
```cpp
 ./gtest_assertion_test --gtest_filter=AssertTest.DEATHTest
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
Note: Google Test filter = AssertTest.DEATHTest
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.DEATHTest
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:154: Failure
Death test: Normal()
    Result: failed to die.
 Error msg:
[  DEATH   ] 
[  FAILED  ] AssertTest.DEATHTest (1 ms)
[----------] 1 test from AssertTest (1 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (1 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.DEATHTest

 1 FAILED TEST
```
:::info
❓	好奇gtest如何做到这一点，猜测是使用子进程的方式。
:::
## 2.11 程序退出断言
程序在模块在输入模型异常值时需要进行进程退出，程序退出断言就可以在安全隔离的环境下对程序模块进行断言，而不会影响测试程序的执行。下面是一个示例：
```cpp
// 程序退出断言
TEST(AssertTest, ExitTest) {
  auto ExitTest = [] { _exit(1); };
  EXPECT_EXIT(ExitTest(), testing::ExitedWithCode(1), "");  // ok

  auto NormalTest = [] {};
  EXPECT_EXIT(NormalTest(), testing::ExitedWithCode(1), "");  // fail
}
```
执行输出：
```cpp
 ./gtest_assertion_test --gtest_filter=AssertTest.ExitTest
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
Note: Google Test filter = AssertTest.ExitTest
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.ExitTest
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:163: Failure
Death test: NormalTest()
    Result: failed to die.
 Error msg:
[  DEATH   ] 
[  FAILED  ] AssertTest.ExitTest (1 ms)
[----------] 1 test from AssertTest (1 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (1 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.ExitTest

 1 FAILED TEST
```
## 2.12 断言子程序
针对测试子程序进行断言，下面是两个示例：
```cpp
// 断言子程序
TEST(AssertTest, SubroutinesTest) {
  auto GenerateAFatalFailures = []() {
    ASSERT_FALSE(true);  // fail
  };
  ASSERT_NO_FATAL_FAILURE(GenerateAFatalFailures());  // fail, GenerateAFatalFailures()
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
```
执行输出：
```cpp
 ./gtest_assertion_test --gtest_filter=AssertTest.SubroutinesTest
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
Note: Google Test filter = AssertTest.SubroutinesTest
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.SubroutinesTest
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:180: Failure
Value of: true
  Actual: true
Expected: false
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:183: Failure
Expected: GenerateAFatalFailures() doesn't generate new fatal failures in the current thread.
  Actual: it does.
[  FAILED  ] AssertTest.SubroutinesTest (0 ms)
[----------] 1 test from AssertTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.SubroutinesTest

 1 FAILED TEST
```
```cpp
./gtest_assertion_test --gtest_filter=AssertTest.HasFatalFailureTest
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
Note: Google Test filter = AssertTest.HasFatalFailureTest
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from AssertTest
[ RUN      ] AssertTest.HasFatalFailureTest
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:190: Failure
Value of: true
  Actual: true
Expected: false
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:194: Failure
Failed
出现致命错误
[  FAILED  ] AssertTest.HasFatalFailureTest (0 ms)
[----------] 1 test from AssertTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.HasFatalFailureTest

 1 FAILED TEST
```

---

# 3 事件
## 3.1 全局事件
全局事件允许我们在所有测试执行前和执行后做一些操作。  继承 `testing::Environment` 类， 重写 `SetUp `方法， 在所有测试用例执行前执行， 重写 `TearDown`方法， 在所有测试用例执行后执行。 然后使用 `testing::AddGlobalTestEnvironment` 把子类对象添加到 gtest 的全局事件中。 我们可以添加多个这种对象到 gtest 的全局事件中。 下面是一个示例： 
```cpp
class MyEnv : public testing::Environment {
 public:
  // 全局事件
  virtual void SetUp() override { printf("Call MyEnv SetUp\n"); }
  virtual void TearDown() override { printf("Call MyEnv TearDown\n"); }
};

TEST(MyTest, FirstTest) {
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
```
执行输出：
```cpp
[==========] Running 0 tests from 0 test suites.
[==========] 0 tests from 0 test suites ran. (0 ms total)
[  PASSED  ] 0 tests.
pengsq@pengsq:/mnt/f/Github/gtest_demo/bin$ ./gtest_event_test 
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
Call MyEnv SetUp
[----------] 1 test from MyTest
[ RUN      ] MyTest.FirstTest
[       OK ] MyTest.FirstTest (0 ms)
[----------] 1 test from MyTest (0 ms total)

[----------] Global test environment tear-down
Call MyEnv TearDown
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
```
## 3.2 测试套件事件
测试套件事件允许我们在同一个**测试套件**的所有测试用例执行前和执行后做一些操作。 继承gtest 提供的 `testing::Test`类来实现这个功能。 实现 `SetUpTestCase `静态方法， 在当前测试套件的所有测试用例执行前执行， 实现 `TearDownTestCase `静态方法， 在当前测试套件的所有测试用例执行后执行。 下面是一个示例：
```cpp
class MyTest : public testing::Test {
 public:
  // 测试套件事件
  static void SetUpTestCase() { printf("Call MyTest SetUpTestCase\n"); }
  static void TearDownTestCase() { printf("Call MyTest TearDownTestCase\n"); }
};

TEST_F(MyTest, FirstTest) {
  ASSERT_TRUE(true);  // ok
}

int main(int argc, char** argv) {
  // 初始化gtest
  testing::InitGoogleTest(&argc, argv);
  // 运行所有测试用例
  return RUN_ALL_TESTS();
}
```
执行输出：
```cpp
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from MyTest
Call MyTest SetUpTestCase
[ RUN      ] MyTest.FirstTest
[       OK ] MyTest.FirstTest (0 ms)
Call MyTest TearDownTestCase
[----------] 1 test from MyTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
```
## 3.3 测试用例事件
测试用例事件允许我们在每一个测试用例执行前和执行后做一些操作。 继承 gtest 提供`testing::Test`类， 来实现这个功能。 重写 `SetUp `方法， 在当前测试用例执行前执行， 重写 `TearDown`方法， 在当前测试用例执行后执行。 下面是一个示例：
```cpp

class MyTest : public testing::Test {
 public:
  // 测试用例事件
  virtual void SetUp() override { printf("Call MyTest SetUp\n"); }
  virtual void TearDown() override { printf("Call MyTest TearDown\n"); }
};

TEST_F(MyTest, FirstTest) {
  ASSERT_TRUE(true);  // ok
}
```
执行输出：
```cpp
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from MyTest
[ RUN      ] MyTest.FirstTest
Call MyTest SetUp
Call MyTest TearDown
[       OK ] MyTest.FirstTest (0 ms)
[ RUN      ] MyTest.SecondTest
Call MyTest SetUp
Call MyTest TearDown
[       OK ] MyTest.SecondTest (0 ms)
[----------] 2 tests from MyTest (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 2 tests.
```

---

# 4 参数化
## 4.1 值参数化
值参数化的测试使我们可以使用不同的参数测试代码， 而无需编写同一测试的多个副本。 这适用但不限于以下情况：

1. 一段代码的行为受到一个或多个命令行标志的影响。 想要确保代码对于这些标志的各种值都能正确执行；
1. OO 接口的不同实现需要测试；
1. 通过各种输入来测试代码。

下面是一个示例：
```cpp
#include <iostream>
// gtest
#include "gtest/gtest.h"

// 待测试类ParamTest继承 testing::TestWithParam<int>
class ParamTest : public testing::TestWithParam<int> {
  // do nothing
};
TEST_P(ParamTest, Test1) { // 使用TEST_P创建一个值参数化测试用例
  auto v = GetParam();	   // 使用GetParam() 获取参数值
  EXPECT_LT(v, 3);
}
INSTANTIATE_TEST_CASE_P(IntType, ParamTest, testing::Values(2, 3, 4));// 实例化测试套件
//参数1：测试用例前缀，表明只要前缀不同，可进行多次实例化。减少重复code
//参数2：测试套件
//参数3：值参数生成器testing::Values
```
执行输出：
```cpp
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
[==========] Running 3 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 3 tests from IntType/ParamTest
[ RUN      ] IntType/ParamTest.Test1/0
[       OK ] IntType/ParamTest.Test1/0 (0 ms)
[ RUN      ] IntType/ParamTest.Test1/1
/mnt/f/Github/gtest_demo/demo/04_gtest_parametric/gtest_param_test.cpp:10: Failure
Expected: (v) < (3), actual: 3 vs 3
[  FAILED  ] IntType/ParamTest.Test1/1, where GetParam() = 3 (0 ms)
[ RUN      ] IntType/ParamTest.Test1/2
/mnt/f/Github/gtest_demo/demo/04_gtest_parametric/gtest_param_test.cpp:10: Failure
Expected: (v) < (3), actual: 4 vs 3
[  FAILED  ] IntType/ParamTest.Test1/2, where GetParam() = 4 (0 ms)
[----------] 3 tests from IntType/ParamTest (0 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
[  FAILED  ] 2 tests, listed below:
[  FAILED  ] IntType/ParamTest.Test1/1, where GetParam() = 3
[  FAILED  ] IntType/ParamTest.Test1/2, where GetParam() = 4

 2 FAILED TESTS
```
## 4.2 类型化
类型化的测试可以完成针对不同类型而测试逻辑相同的测试。如具有同一个接口的多个实现，要确保它们都满足一些共同的要求。 或者， 针对已经定义了几种需要兼容处理的类似的类型（比如：`int``int16_t`）。
下面是一个示例：
```cpp
#include <iostream>
// gtest
#include "gtest/gtest.h"

template <typename T>
class FooTest : public testing::Test {
 public:
  void Test() { std::cout << sizeof(T) << std::endl; }
};

using MyTypes = testing::Types<int, unsigned int, unsigned char>;
TYPED_TEST_CASE(FooTest, MyTypes);  // 类型和测试用例关联

TYPED_TEST(FooTest, FirstTest) {
  this->Test();  // call FooTest<T>::Test()
}
```
执行输出：
```cpp
[==========] Running 3 tests from 3 test suites.
[----------] Global test environment set-up.
[----------] 1 test from FooTest/0, where TypeParam = int
[ RUN      ] FooTest/0.FirstTest
4
[       OK ] FooTest/0.FirstTest (0 ms)
[----------] 1 test from FooTest/0 (0 ms total)

[----------] 1 test from FooTest/1, where TypeParam = unsigned int
[ RUN      ] FooTest/1.FirstTest
4
[       OK ] FooTest/1.FirstTest (0 ms)
[----------] 1 test from FooTest/1 (0 ms total)

[----------] 1 test from FooTest/2, where TypeParam = unsigned char
[ RUN      ] FooTest/2.FirstTest
1
[       OK ] FooTest/2.FirstTest (0 ms)
[----------] 1 test from FooTest/2 (0 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 3 test suites ran. (0 ms total)
[  PASSED  ] 3 tests.
```
:::info
💡	类型化可针对使用模板泛化的代码进行测试。
:::
## 4.3 类型参数化
类型参数化测试类似于类型化测试， 不同之处在于不需要提前知道类型列表。 可以先定义测试逻辑， 然后再使用不同的类型列表实例化。 可以在同一程序中多次实例化它。 下面是一个示例：
```cpp
#include <iostream>
// gtest
#include "gtest/gtest.h"

template <typename T>
class FooTest : public testing::Test {
 public:
  void Test() { std::cout << sizeof(T) << std::endl; }
};

TYPED_TEST_CASE_P(FooTest);  //声明typed param测试

TYPED_TEST_P(FooTest, FirstTest) {
  this->Test();  // call FooTest<T>::Test()
}
TYPED_TEST_P(FooTest, SecondTest) {
  // do nothing
}

REGISTER_TYPED_TEST_CASE_P(FooTest, FirstTest, SecondTest);  // 关联测试用例

// 实例化测试套件
using MyTypes = testing::Types<int, unsigned int, unsigned char>;
INSTANTIATE_TYPED_TEST_CASE_P(FirstInstance, FooTest, MyTypes);
INSTANTIATE_TYPED_TEST_CASE_P(SecondInstance, FooTest, int);  // 可多次实例化
```
执行输出：
```cpp
Running main() from /mnt/f/Github/googletest/googletest/src/gtest_main.cc
[==========] Running 8 tests from 4 test suites.
[----------] Global test environment set-up.
[----------] 2 tests from FirstInstance/FooTest/0, where TypeParam = int
[ RUN      ] FirstInstance/FooTest/0.FirstTest
4
[       OK ] FirstInstance/FooTest/0.FirstTest (0 ms)
[ RUN      ] FirstInstance/FooTest/0.SecondTest
[       OK ] FirstInstance/FooTest/0.SecondTest (0 ms)
[----------] 2 tests from FirstInstance/FooTest/0 (0 ms total)

[----------] 2 tests from FirstInstance/FooTest/1, where TypeParam = unsigned int
[ RUN      ] FirstInstance/FooTest/1.FirstTest
4
[       OK ] FirstInstance/FooTest/1.FirstTest (0 ms)
[ RUN      ] FirstInstance/FooTest/1.SecondTest
[       OK ] FirstInstance/FooTest/1.SecondTest (0 ms)
[----------] 2 tests from FirstInstance/FooTest/1 (0 ms total)

[----------] 2 tests from FirstInstance/FooTest/2, where TypeParam = unsigned char
[ RUN      ] FirstInstance/FooTest/2.FirstTest
1
[       OK ] FirstInstance/FooTest/2.FirstTest (0 ms)
[ RUN      ] FirstInstance/FooTest/2.SecondTest
[       OK ] FirstInstance/FooTest/2.SecondTest (0 ms)
[----------] 2 tests from FirstInstance/FooTest/2 (0 ms total)

[----------] 2 tests from SecondInstance/FooTest/0, where TypeParam = int
[ RUN      ] SecondInstance/FooTest/0.FirstTest
4
[       OK ] SecondInstance/FooTest/0.FirstTest (0 ms)
[ RUN      ] SecondInstance/FooTest/0.SecondTest
[       OK ] SecondInstance/FooTest/0.SecondTest (0 ms)
[----------] 2 tests from SecondInstance/FooTest/0 (0 ms total)

[----------] Global test environment tear-down
[==========] 8 tests from 4 test suites ran. (0 ms total)
[  PASSED  ] 8 tests.
```
# 5 测试选项
gtest 测试程序是普通的可执行文件。 构建完成后， 您可以直接运行它们并通过环境变量和(或)命令行标志影响它们的行为。 为了使这些标志起作用， 程序必须在调用 `RUN_ALL_TESTS `之前调用 `testing ::InitGoogleTest`。
	可以使用`./xxx_test --help` 运行测试程序来查看支持的标志及其用法的列表。
```shell
./prj_demo_test --help
Test Selection:
  --gtest_list_tests
      List the names of all tests instead of running them. The name of
      TEST(Foo, Bar) is "Foo.Bar".
  --gtest_filter=POSITIVE_PATTERNS[-NEGATIVE_PATTERNS]
      Run only the tests whose name matches one of the positive patterns but
      none of the negative patterns. '?' matches any single character; '*'
      matches any substring; ':' separates two patterns.
  --gtest_also_run_disabled_tests
      Run all disabled tests too.

Test Execution:
  --gtest_repeat=[COUNT]
      Run the tests repeatedly; use a negative count to repeat forever.
  --gtest_shuffle
      Randomize tests' orders on every iteration.
  --gtest_random_seed=[NUMBER]
      Random number seed to use for shuffling test orders (between 1 and
      99999, or 0 to use a seed based on the current time).
  --gtest_recreate_environments_when_repeating
      Sets up and tears down the global test environment on each repeat
      of the test.

Test Output:
  --gtest_color=(yes|no|auto)
      Enable/disable colored output. The default is auto.
  --gtest_brief=1
      Only print test failures.
  --gtest_print_time=0
      Don't print the elapsed time of each test.
  --gtest_output=(json|xml)[:DIRECTORY_PATH/|:FILE_PATH]
      Generate a JSON or XML report in the given directory or with the given
      file name. FILE_PATH defaults to test_detail.xml.
  --gtest_stream_result_to=HOST:PORT
      Stream test results to the given server.

Assertion Behavior:
  --gtest_death_test_style=(fast|threadsafe)
      Set the default death test style.
  --gtest_break_on_failure
      Turn assertion failures into debugger break-points.
  --gtest_throw_on_failure
      Turn assertion failures into C++ exceptions for use by an external
      test framework.
  --gtest_catch_exceptions=0
      Do not report exceptions as test failures. Instead, allow them
      to crash the program or throw a pop-up (on Windows).
```
如果同时由环境变量和标志指定选项， 则后者优先。 大多数选项也可以在代码中设置/读取：要访问命令行标志--gtest_xxx 的值， 可以编写`testing::GTEST_FLAG(xxx)`。 一种常见的模式是在调用 `testing::InitGoogleTest` 之前更改标志的默认值： 
```cpp
int main(int argc, char** argv) {
  testing::GTEST_FLAG(repeat) = 10; // 修改测试选项，重复10此测试
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
```
## 5.1 列出测试用例
使用`--gtest_list_tests`，可以列出所有测试， 但不会执行它们。 如下示例:
```shell
./prj_demo_test --gtest_list_tests
Running main() from /mnt/e/C++/github/googletest/googletest/src/gtest_main.cc
HelloTest.
  Add
  Sub
```
## 5.2 选择测试
使用`--gtest_filter`标志设置过滤器字符串， 则 gtest 将仅运行其全名（以`TestSuiteName.TestCaseName` 的形式） 与过滤器匹配的测试用例。 
```shell
 ./prj_demo_test --gtest_filter=HelloTest.Add
Running main() from /mnt/e/C++/github/googletest/googletest/src/gtest_main.cc
Note: Google Test filter = HelloTest.Add
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from HelloTest
[ RUN      ] HelloTest.Add
/mnt/e/C++/github/gtest_demo/demo/05_gtest_prj_demo/test/AddTest.cpp:15: Failure
Expected equality of these values:
  Add(1, 1)
    Which is: 2
  3
[  FAILED  ] HelloTest.Add (0 ms)
[----------] 1 test from HelloTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] HelloTest.Add

 1 FAILED TEST
```
:::info
💡	过滤器支持通配符，与Linux `grep `或`find `类似。比如：`./foo_test --gtest_filter=My.*`运行所有My测试套件下的测试用例。
:::
## 5.3 测试选项扩展
测试选项未进行完整描述，还可通过设置测试选项进行重复测试、随机测试、控制输出格式等等，可通过博客链接了解：
