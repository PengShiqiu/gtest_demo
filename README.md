
---

# 1 ä»ç»
:::info
ð¡  æ¬æä»£ç demoå¯éè¿[gtest_demo.zip](https://pengsq.yuque.com/attachments/yuque/0/2022/zip/27800458/1660633683120-9702be77-601b-4321-8dd1-eda566bcc28f.zip?_lake_card=%7B%22src%22%3A%22https%3A%2F%2Fpengsq.yuque.com%2Fattachments%2Fyuque%2F0%2F2022%2Fzip%2F27800458%2F1660633683120-9702be77-601b-4321-8dd1-eda566bcc28f.zip%22%2C%22name%22%3A%22gtest_demo.zip%22%2C%22size%22%3A1222880%2C%22type%22%3A%22application%2Fx-zip-compressed%22%2C%22ext%22%3A%22zip%22%2C%22source%22%3A%22%22%2C%22status%22%3A%22done%22%2C%22mode%22%3A%22title%22%2C%22download%22%3Atrue%2C%22taskId%22%3A%22u085dbe60-4832-4b9d-98fc-d6db1b3437b%22%2C%22taskType%22%3A%22upload%22%2C%22__spacing%22%3A%22both%22%2C%22id%22%3A%22g6HEX%22%2C%22margin%22%3A%7B%22top%22%3Atrue%2C%22bottom%22%3Atrue%7D%2C%22card%22%3A%22file%22%7D)é¾æ¥è¿è¡ä¸è½½ã
ð»  ç¼è¯ç¯å¢X86,ubuntu16.4,CMake 3.8
:::
## 1.1 ååæµè¯çæä¹
> ååæµè¯çç®çå¨äºåç°åæ¨¡ååé¨å¯è½å­å¨çåç§éè¯¯ï¼ä¸»è¦åæ¬ä»¥ä¸å ä¸ªæ¹é¢

> 1. ååæµè¯æ¯ä¸ç§éªè¯è¡ä¸ºââ æµè¯åéªè¯ç¨åºä¸­æ¯ä¸é¡¹åè½çæ­£ç¡®æ§ï¼ä¸ºä»¥åçå¼åæä¾æ¯æï¼
> 1. ååæµè¯æ¯ä¸ç§è®¾è®¡è¡ä¸ºââ ç¼åååæµè¯å°ä½¿æä»¬ä»è°ç¨èè§å¯ãæèï¼ç¹å«æ¯è¦åèèæµè¯ï¼è¿æ ·å°±å¯æç¨åºè®¾è®¡ææäºè°ç¨åå¯æµè¯çï¼å¹¶åªåéä½è½¯ä»¶ä¸­çè¦åï¼è¿å¯ä»¥ä½¿ç¼ç äººåå¨ç¼ç æ¶äº§çé¢æµè¯ï¼å°ç¨åºçç¼ºé·éä½å°æå°ï¼
> 1. ååæµè¯æ¯ä¸ç§ç¼åææ¡£çè¡ä¸ºââ æ¯å±ç¤ºå½æ°æç±»å¦ä½ä½¿ç¨çæä½³ææ¡£ï¼
> 1. ååæµè¯å·æåå½æ§ââ èªå¨åçååæµè¯æå©äºè¿è¡åå½æµè¯ã
> 
å¼ç¨é¾æ¥ï¼

## 1.2 ä¸ºä»ä¹ä½¿ç¨gtest
> gtest æ¯ Google çå¼æº C++ååæµè¯æ¡æ¶ï¼ åºäº xUnit æ¶æï¼ æ¯æ Linuxã Mac OS Xã Windowsã
> Cygwinã MinGWã Windows Mobileã Symbian å PlatformIO ç­å¹³å°ã 

- èªå¨åç°æµè¯(Test Discovery)ï¼
- ä¸°å¯çæ­è¨é(A rich set of assertions)ï¼
- ç¨æ·å®ä¹çæ­è¨(User-defined assertions)ï¼
- æ­»äº¡æµè¯(Death tests)ï¼
- è´å½ä¸éè´å½çå¤±è´¥(Fatal and non-fatal failures)ï¼
- å¼åæ°åæµè¯(Value-parameterized tests)ï¼
- ç±»ååæ°åæµè¯(Type-parameterized tests)ï¼
- åç±»è¿è¡æµè¯çéé¡¹(Various options for running the tests)ï¼
- XML æµè¯æ¥å(XML test report generation)

:::info
ð¡  gtestå·å¤ä»¥ä¸å ä¸ªä¼ç¹ï¼

1. ä¾èµå°ï¼è·¨å¹³å°ï¼çº¯c++å®ç°ï¼æ ç¬¬ä¸æ¹ä¾èµï¼
1. åè½å¼ºå¤§ãè¯­æ³ç®åãæ¥å£åå¥½ï¼
1. å¼æºã
:::
## 1.3 åºæ¬æ¦å¿µ
### 1.3.1 æµè¯ç¨ä¾ï¼Test Caseï¼
æµè¯ç¨ä¾æ¯æç¹å®çä¸ä¸ªæµè¯ï¼ å¨ gtest ä¸­å·ææ­¤æ¦å¿µçåæ°çåç§°ä¸è¬æ¯ test_nameï¼ è¡¨ç¤ºæ­¤æµè¯ç¨ä¾çåç§°ï¼ å¨è¾åºç xml æ ¼å¼çæµè¯æ¥åä¸­ä»¥ testcase æ ç­¾æ¥æè¿°ä¸ä¸ªæµè¯ç¨ä¾çæµè¯ç»æ ã
```cpp
TEST(HelloTest, Sum) {// Sum : æµè¯ç¨ä¾åç§°
    // do nothing
}
```
### 1.3.2 æµè¯å¥ä»¶(Test Suite)
æµè¯å¥ä»¶åå«äºä¸ç»ç¸å³çæµè¯ç¨ä¾(ä¸ä¸ªæå¤ä¸ª)ã åºè¯¥å°èªå·±çæµè¯ç¨ä¾åå«å½ç±»å°æµè¯
å¥ä»¶ä¸­ï¼ ä»¥åæ è¢«æµä»£ç çç»æãå¨ gtest ä¸­å·ææ­¤æ¦å¿µçåæ°çåç§°ä¸è¬æ¯ test_case_nameï¼ è¡¨
ç¤ºæ­¤æµè¯å¥ä»¶çåç§°ã
ä¸ä¸ªæµè¯å¥ä»¶å¯ä»¥åå«å¤ä¸ªæµè¯ç¨ä¾ï¼ä¸ä¸ªæµè¯è¿ç¨å¯åå«å¤ä¸ªæµè¯å¥ä»¶ã
![](https://cdn.nlark.com/yuque/0/2022/jpeg/27800458/1660615608920-91532844-9e77-48d1-8861-737e591fa100.jpeg)
```cpp
TEST(HelloTest, Sum) {// HelloTest : æµè¯å¥ä»¶ Sum : æµè¯ç¨ä¾
    // do nothing
}
TEST(HelloTest, Dec) {// HelloTest : æµè¯å¥ä»¶ Dec : æµè¯ç¨ä¾
    // do nothing
}
TEST_F(HelloTestClass, Dec) {// HelloTestClass : æµè¯å¤¹å· Dec : æµè¯ç¨ä¾
    // do nothing
}
```
:::info
ð¡	æµè¯å¥ä»¶å¨TEST_F(Test fixture)ä¸­åç§°æµè¯å¤¹å·ã
:::
### 1.3.3 æ­è¨
> æ­è¨æ¯ååæµè¯çåºç¡
> æ­è¨æ¯ä¸äºæ£æ¥æ¡ä»¶æ¯å¦ä¸ºççè¯­å¥ã ä¸ä¸ªæ­è¨çç»æå¯è½æ¯æåã éè´å½å¤±è´¥ï¼ æèè´å½
å¤±è´¥ã å¦æä¸ä¸ªè´å½å¤±è´¥åºç°ï¼ å®ä¼ç»æå½åçå½æ°ï¼ å¦åï¼ ç¨åºç»§ç»­æ­£å¸¸è¿è¡ã

ç¨åºæ§è¡ç»ææ éå¨äºï¼æåãå¤±è´¥ãæèç¨åºå¼å¸¸å´©æºãéåºï¼ä½¿ç¨åç§gtestæä¾çåç§æ­è¨è¯­æ³å¯æ»¡è¶³ååæµè¯çåç§æ£æµéæ±ï¼æ­è¨ç±»åä¸»è¦åä¸ºï¼

- è´å½æ­è¨ï¼ å½æ­¤ç§æ­è¨å¤±è´¥æ¶ä¼ç»æå½åå½æ°ï¼ åªè½å¨è¿å void çå½æ°ä¸­ä½¿ç¨ï¼ 
- éè´å½æ­è¨ï¼ å½æ­¤ç§æ­è¨å¤±è´¥æ¶ï¼ ç¨åºç»§ç»­æ­£å¸¸è¿è¡ã 
## 1.4 æµè¯ç¨ä¾ç¸å³å®
gest æä¾äºä¸ç³»åè½æ¹ä¾¿æä»¬ç¼åæµè¯ç¨ä¾çå®ï¼ æ¬ææ¡£å°ä»ç»çæµè¯ç¨ä¾å®å¦ä¸ï¼
 

| å®åç§° | è¯´æ | Demo Code |
| --- | --- | --- |
| TEST(test_case_name, test_name); | æµè¯ç¨ä¾ | [é¾æ¥](#Lfx15) |
| TEST_F(test_fixture, test_name); | æµè¯å¤¹å· | [é¾æ¥](#VPHQX) |
| TEST_P(test_case_name, test_name); | åæ°åç¨ä¾ | [é¾æ¥](#sM2kd) |
| INSTANTIATE_TEST_CASE_P(prefix, test_case_name, generator, ...); | å³èæµè¯ç¨ä¾ååæ° |  |
| TYPED_TEST_CASE(CaseName, Types); | ç±»åæµè¯ç¨ä¾å³èç±»å | [é¾æ¥](#N18us) |
| TYPED_TEST(CaseName, TestName); | ç±»åæµè¯ç¨ä¾ |  |
| TYPED_TEST_CASE_P(CaseName); | å£°æåæ°ç±»åæµè¯ç¨ä¾ | [é¾æ¥](#OqT0V) |
| TYPED_TEST_P(CaseName, TestName); | åæ°ç±»åæµè¯ç¨ä¾ |  |
| REGISTER_TYPED_TEST_CASE_P(CaseName, ...); | æ³¨ååæ°ç±»åæµè¯ç¨ä¾ |  |
| INSTANTIATE_TYPED_TEST_CASE_P(Prefix, CaseName, Types); | å®ä¾ååæ° |  |

## 1.5 gtestç®åDemo
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

// HelloTest - æµè¯å¥ä»¶
// Sum - Sumæµè¯ç¨ä¾
TEST(HelloTest, Sum) {
  // æ­è¨
  // æ£æµSumå½æ°æ§è¡ç»ææ¯å¦ç¬¦åé¢æ
  EXPECT_EQ(Sum(1, 1), 2); // ok
  EXPECT_EQ(Sum(1, 1), 3); // fail
}

// HelloTest - æµè¯å¥ä»¶
// Sum - Subæµè¯ç¨ä¾
TEST(HelloTest, Sub) {
  // æ­è¨
  // æ£æµSubå½æ°æ§è¡ç»ææ¯å¦ç¬¦åé¢æ
  EXPECT_EQ(Sub(1, 1), 0); // ok
  EXPECT_EQ(Sub(1, 1), 1); // fail
}

int main(int argc, char** argv) {
  // åå§ågtest
  testing::InitGoogleTest(&argc, argv);
  // è¿è¡æææµè¯ç¨ä¾
  return RUN_ALL_TESTS();
}
```
æ§è¡ç»æï¼
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

# 2 æ­è¨
> æ­è¨å¨gtestä¸­æ¯ä¸äºå®å½æ°ãè¦æµè¯ä¸ä¸ªç±»æèä¸ä¸ªå½æ°ï¼éè¦å¯¹å¶è¡ä¸ºååºæ­è¨ï¼å¤æ­ç¨åºæ§è¡æ¯å¦æ­£ç¡®ï¼å¤æ­å¯¹è±¡å¯ä»¥æ¯å½æ°è¿åå¼ï¼æå¼å¸¸ï¼ç¨åºæ®µéè¯¯ï¼ç¨åºéåºã
æ­è¨å¤±è´¥æ¶ï¼æå°ä»£ç ä½ç½®å·²ç»éè¯¯å¼åææå¼ç¨äºå¿«éå¤æ­ç¨åºéè¯¯ã 

	æ­è¨åä¸ºä¸¤ç±»ï¼

1. ASSERT ç³»åè´å½æ­è¨ï¼ å½¢å¦ ASSERT_*ã å½æ­è¨å¤±è´¥æ¶äº§çè´å½å¤±è´¥ï¼ ä¼ç»æ­¢åç»­æµè¯ä»£ç çæ§è¡ï¼ éåºå½åå½æ°ï¼ ç¶åç»§ç»­æ§è¡åé¢çæµè¯ï¼ 
1. EXPECT ç³»åéè´å½æ­è¨ï¼ å½¢å¦ EXPECT_*ã å½æ­è¨å¤±è´¥æ¶äº§çéè´å½å¤±è´¥ï¼ ä¸ä¼éåºå½åå½æ°ï¼èæ¯ç»§ç»­æ§è¡åç»­æµè¯ä»£ç ã 
:::info
ð¡	éå¸¸éè´å½æ­è¨ä½¿ç¨EXPECT ç³»åï¼æ­è¨å¤±è´¥æ¶å°½éæ§è¡æ´å¤çæµè¯ï¼è´å½æ­è¨æ¶æä½¿ç¨ASSERTç³»åã
:::
## 2.1 æ­è¨éè¯¯æ¶èªå®ä¹æå°
è¦æä¾ä¸ä¸ªèªå®ä¹çéè¯¯ä¿¡æ¯ï¼åªéè¦ä½¿ç¨<<æä½ç¬¦ï¼æä¸ä¸ª<<æä½ç¬¦çåºåï¼å°å¶è¾å¥å°
æ¡æ¶å®ä¹çå®ä¸­ãä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp
TEST(AssertTest, Print) {
  int i = 1;
  int j = 2;

  // æ­è¨éè¯¯è¾åºèªå®ä¹éè¯¯
  EXPECT_EQ(i, j) << "åºéï¼ææå¾å° " << i << " å®éå¾å° " << j;
}
```
æ§è¡è¾åºï¼
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
åºéï¼ææå¾å° 1 å®éå¾å° 2
[  FAILED  ] AssertTest.Print (0 ms)
[----------] 1 test from AssertTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.Print

 1 FAILED TEST
```
## 2.2 æ¡ä»¶æ­è¨
å½æ­è¨å¤±è´¥æ¶ï¼ASSERT_*äº§çä¸ä¸ªè´å½å¤±è´¥å¹¶ä»å½åå½æ°è¿åï¼è EXCEPTè´å½å¤±è´¥ï¼åè®¸å½æ°ç»§ç»­è¿è¡ãä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp
TEST(AssertTest, TrueFalseTest) {
  EXPECT_TRUE(true);    // ok
  EXPECT_FALSE(false);  // ok
  EXPECT_FALSE(true);   // fail, æå°å¼å¸¸åç»§ç»­æ§è¡

  ASSERT_TRUE(true);    // ok
  ASSERT_FALSE(false);  // ok
  ASSERT_FALSE(true);   // failï¼éåºå½åæµè¯ç¨ä¾ï¼ä¸ºäºç®åï¼
                        //      åç»­ASSERTåEXPECTçæ¬åªå±ç¤ºECXPECT
  // ä¸ä¼æ§è¡
  // ....
}
```
æ§è¡è¾åºï¼
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
ð¡	ä¸ºäºç®åææ¡£ï¼åç»­ASSERTåEXPECTçæ¬åªå±ç¤ºECXPECTã
:::
## 2.3 äºåæ¯è¾æ­è¨
äºåæ¯è¾æ¬è´¨ä¸æ¯ä½¿ç¨C++æ¯è¾æä½ç¬¦ï¼`==`  `!=` `<` `<=``>` `>=`ï¼ä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp
// äºåæ¯è¾æ­è¨
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
ç¨åºè¾åºï¼
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
## 2.4 å­ç¬¦æ¯è¾æ­è¨
å­ç¬¦ä¸²åä¸ºCé£æ ¼å­ç¬¦ä¸²`char*`åC++é£æ ¼å­ç¬¦ä¸²ï¼åå«`std::string``std::wstring`ãC++é£æ ¼å­ç¬¦ä¸²æ¨èä½¿ç¨`EXPECT_EQ`è¿è¡æ­è¨ï¼å¦ææ¯Cé£æ ¼å­ç¬¦ä¸²ï¼ä¸é¢æ¼ç¤ºä¸ä¸ªç¤ºä¾ï¼

```cpp
// å­ç¬¦æ¯è¾æ­è¨
TEST(AssertTest, StringAssertTest) {
  EXPECT_STREQ("123", "123");       // "123" == "123", ok
  EXPECT_STREQ("123", "1234");      // "123" == "1234", fail
  
  EXPECT_STRNE("1234", "123");      // "1234" != "123", ok
  EXPECT_STRNE("123", "123");       // "1234" != "123", fail

  EXPECT_STRCASEEQ("abc", "ABC");   // "abc" ==(å¿½ç¥å¤§å°å) "ABC", ok
  EXPECT_STRCASEEQ("abc", "ABCD");  // "abc" ==(å¿½ç¥å¤§å°å) "ABCD", fail

  EXPECT_STRCASENE("ABC", "cd");    // "ABC" !=(å¿½ç¥å¤§å°å) "cd", ok
  EXPECT_STRCASENE("ABC", "abc");   // "ABC" !=(å¿½ç¥å¤§å°å) "abc", fail
}
```
ç¨åºè¾åºï¼
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
ð¡	æ³¨æï¼å¨è¿è¡æéæ¯è¾æ¶ï¼ åºè¯¥ä½¿ç¨*_EQ(ptr, nullptr)å*_NE(ptr, nullptr)ï¼ èä¸æ¯ä½¿ç¨*_EQ(ptr,
NULL)å*_NE(ptr, NULL)ã å ä¸º nullptr æ²¡æ NULL æå·æçç±»åé®é¢ã
:::
## 2.5 æµ®ç¹æ°æ­è¨
> æµ®ç¹æ°æ¯è¾éè¦èèç²¾åº¦é®é¢ï¼gtestä½¿ç¨ ULPs(Units in the Last Place)æ¥ä½ä¸ºæµ®ç¹æ°æ¯è¾çæ¹æ³ ã 
> åèé¾æ¥ï¼

```cpp
// æµ®ç¹æ°æ­è¨
TEST(AssertTest, FloatDoubleAssertTest) {
  EXPECT_FLOAT_EQ(1.1, 1.1);          // ok, å ä¹ç¸ç­ï¼ä½¿ç¨ULPsï¼è¯¯å·®4ä¸ªULPä¹å
  EXPECT_DOUBLE_EQ(1.2, 1.2);         // ok
  EXPECT_NEAR(1.001, 1.002, 0.0001);  // fail, è¯¯å·®å¤§äº0.0001
}
```
æ§è¡è¾åºï¼
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
## 2.6 æ è®°ç»ææ¹å¼æ­è¨
è¯¥ç»æ­è¨å®éä¸å¹¶ä¸æµè¯å¼æè¡¨è¾¾å¼ï¼ å®ä»¬ç´æ¥äº§çæåæå¤±è´¥ã ä¸å®éæ§è¡æµè¯çå®ä¸æ ·ï¼å¯ä»¥å°èªå®ä¹å¤±è´¥æ¶æ¯æµå¼ä¼ è¾å°å®ä»¬ä¸­ã

- `SUCCEED()`äº§çæåã è¿ä¸ä¼ä½¿æ´ä½æµè¯æåã ä»å½æµè¯å¨æ§è¡æé´æ²¡æä»»ä½æ­è¨å¤±è´¥æ¶ï¼ è¯¥æµè¯æè¢«
è§ä¸ºæå;
- `FAIL()`äº§çè´å½éè¯¯ ;
- `ADD_FAILURE()`äº§çéè´å½éè¯¯ ;
- `ADD_FAILURE_AT(file, line)`äº§çéè´å½éè¯¯ ,å¯æå®æå°æä»¶ä¿¡æ¯ã
:::info
ð¡	æ³¨æï¼SUCCEED()çº¯ç²¹æ¯è®°å½æ§çï¼ å½åä¸ä¼çæä»»ä½ç¨æ·å¯è§çè¾åºã
:::
 ä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp
// æ è®°æåæå¤±è´¥æ­è¨
TEST(AssertTest, SuccessFailAssertTest) {
  auto SuccessFunc = [this] {
    SUCCEED();  // æ³¨æï¼SUCCEED()çº¯ç²¹æ¯è®°å½æ§çï¼å½åä¸ä¼çæä»»ä½ç¨æ·å¯è§çè¾åº
  };
  auto FailFunc = [this] {
    ADD_FAILURE() << "ADD_FAILURE()";
    ADD_FAILURE_AT(__FILE__, __LINE__) << "ADD_FAILURE_AT()";
    FAIL() << "FAIL()";  // ç»ææµè¯ç¨ä¾
    // ä¸ä¼å¨æ§è¡äº
    // ...
  };

  SuccessFunc();
  FailFunc();
}
```
æ§è¡è¾åºï¼
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
## 2.7 å¼å¸¸æ­è¨
è¯¥ç»æ­è¨ç¨äºéªè¯ä¸æ®µä»£ç æ¯å¦æåºï¼æä¸æåºï¼ ç»å®ç±»åçå¼å¸¸ã ä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp
// å¼å¸¸æ­è¨
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
                                   // æåºä¸ä¸ªMyExceptionClasså¼å¸¸
  EXPECT_THROW(ThowSTDExceptionFunc(),
               MyExceptionClass);  // fail
                                   // æåºå¼å¸¸ä¸ä¸ºMyExceptionClass
  EXPECT_ANY_THROW(ThowMyExceptionFunc());  // okï¼ æåºä»»æå¼å¸¸
}
```
æ§è¡è¾åºï¼
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
## 2.8 è°è¯æ­è¨
ä½¿ç¨è¾å°ï¼å¯èªå®ä¹æ­è¨è¾åºã
```cpp
// è°è¯æ­è¨
TEST(AssertTest, PredAssertTest) {
  auto IsPositiveIntegerOne = [](int a) { return (a > 0); };
  auto IsPositiveIntegerTwo = [](int a, int b) { return (a > 0) && (b > 0); };
  int a = 1;
  EXPECT_PRED1(IsPositiveIntegerOne, a);     // ok, 1ä¸ªåæ°
  EXPECT_PRED2(IsPositiveIntegerTwo, a, a);  // ok, 2ä¸ªåæ°

  auto IsEven = [](int n) {
    if ((n % 2) == 0) {
      return testing::AssertionSuccess() << n << "æ¯å¶æ°";
    } else {
      return testing::AssertionFailure() << n << "æ¯å¥æ°";
    }
  };
  EXPECT_TRUE(IsEven(5));   // fail
  EXPECT_FALSE(IsEven(6));  // fail
}
```
æ§è¡è¾åºï¼
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
  Actual: false (5æ¯å¥æ°)
Expected: true
/mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:130: Failure
Value of: IsEven(6)
  Actual: true (6æ¯å¶æ°)
Expected: false
[  FAILED  ] AssertTest.PredAssertTest (0 ms)
[----------] 1 test from AssertTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] AssertTest.PredAssertTest
```
## 2.9 ç±»åæ­è¨
å¨ç¼è¯é¶æ®µå¯¹ä¸¤ä¸ªç±»åè¿è¡æ¯è¾ï¼ä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp
// ç±»åæ­è¨
TEST(AssertTest, TypeAssertTest) {
  using TypeA = std::string;
  using TypeB = std::string;
  using TypeC = std::wstring;
  testing::StaticAssertTypeEq<TypeA, TypeB>();  // ok
  testing::StaticAssertTypeEq<TypeA, TypeC>();  // fail
}
```
æ§è¡è¾åº:
```cpp
[ 31%] Building CXX object demo/02_gtest_assertion/CMakeFiles/gtest_assertion_test.dir/gtest_assertion_test.cpp.o
In file included from /mnt/f/Github/gtest_demo/demo/02_gtest_assertion/gtest_assertion_test.cpp:3:0:
/mnt/f/Github/gtest_demo/gtest/include/gtest/gtest.h: In instantiation of âconstexpr bool testing::StaticAssertTypeEq() [with T1 = std::__cxx11::basic_string<char>; T2 = std::__cxx11::basic_string<wchar_t>]â:
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
## 2.10 æ­»äº¡æ­è¨
è¿éçâæ­»äº¡â æ¯æç¨åºå´©æºã éå¸¸å¨æµè¯è¿ç¨ä¸­éè¦èèåç§è¾å¥ï¼ æçè¾å¥å¯è½ç´æ¥å¯¼è´ç¨åºå´©æºï¼ è¿æ¶å°±éè¦æ£æµç¨åºæ¯å¦æç§ææçæ¹å¼åçå´©æºã gtest çæ­»äº¡æµè¯è½åå°å¨ä¸ä¸ªå®å¨çç¯å¢ä¸æ§è¡å´©æºçæµè¯ç¨ä¾ï¼ åæ¶åå¯¹å´©æºç»æåéªè¯ãä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp
// æ­»äº¡æ­è¨
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
æ§è¡è¾åºï¼
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
â	å¥½å¥gtestå¦ä½åå°è¿ä¸ç¹ï¼çæµæ¯ä½¿ç¨å­è¿ç¨çæ¹å¼ã
:::
## 2.11 ç¨åºéåºæ­è¨
ç¨åºå¨æ¨¡åå¨è¾å¥æ¨¡åå¼å¸¸å¼æ¶éè¦è¿è¡è¿ç¨éåºï¼ç¨åºéåºæ­è¨å°±å¯ä»¥å¨å®å¨éç¦»çç¯å¢ä¸å¯¹ç¨åºæ¨¡åè¿è¡æ­è¨ï¼èä¸ä¼å½±åæµè¯ç¨åºçæ§è¡ãä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp
// ç¨åºéåºæ­è¨
TEST(AssertTest, ExitTest) {
  auto ExitTest = [] { _exit(1); };
  EXPECT_EXIT(ExitTest(), testing::ExitedWithCode(1), "");  // ok

  auto NormalTest = [] {};
  EXPECT_EXIT(NormalTest(), testing::ExitedWithCode(1), "");  // fail
}
```
æ§è¡è¾åºï¼
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
## 2.12 æ­è¨å­ç¨åº
éå¯¹æµè¯å­ç¨åºè¿è¡æ­è¨ï¼ä¸é¢æ¯ä¸¤ä¸ªç¤ºä¾ï¼
```cpp
// æ­è¨å­ç¨åº
TEST(AssertTest, SubroutinesTest) {
  auto GenerateAFatalFailures = []() {
    ASSERT_FALSE(true);  // fail
  };
  ASSERT_NO_FATAL_FAILURE(GenerateAFatalFailures());  // fail, GenerateAFatalFailures()
                                                      // å­å¨å¤±è´¥
}

// æ­è¨å­ç¨åºæ¯å¦å­å¨è´å½éè¯¯
TEST(AssertTest, HasFatalFailureTest) {
  auto GenerateAFatalFailures = []() {
    ASSERT_FALSE(true);  // fail, éåºç¨åº
  };
  GenerateAFatalFailures();
  if (HasFatalFailure()) {
    ADD_FAILURE() << "åºç°è´å½éè¯¯";
  }
}
```
æ§è¡è¾åºï¼
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
åºç°è´å½éè¯¯
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

# 3 äºä»¶
## 3.1 å¨å±äºä»¶
å¨å±äºä»¶åè®¸æä»¬å¨æææµè¯æ§è¡ååæ§è¡ååä¸äºæä½ã  ç»§æ¿ `testing::Environment` ç±»ï¼ éå `SetUp `æ¹æ³ï¼ å¨æææµè¯ç¨ä¾æ§è¡åæ§è¡ï¼ éå `TearDown`æ¹æ³ï¼ å¨æææµè¯ç¨ä¾æ§è¡åæ§è¡ã ç¶åä½¿ç¨ `testing::AddGlobalTestEnvironment` æå­ç±»å¯¹è±¡æ·»å å° gtest çå¨å±äºä»¶ä¸­ã æä»¬å¯ä»¥æ·»å å¤ä¸ªè¿ç§å¯¹è±¡å° gtest çå¨å±äºä»¶ä¸­ã ä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼ 
```cpp
class MyEnv : public testing::Environment {
 public:
  // å¨å±äºä»¶
  virtual void SetUp() override { printf("Call MyEnv SetUp\n"); }
  virtual void TearDown() override { printf("Call MyEnv TearDown\n"); }
};

TEST(MyTest, FirstTest) {
  ASSERT_TRUE(true);  // ok
}

int main(int argc, char** argv) {
  // åå§ågtest
  testing::InitGoogleTest(&argc, argv);
  // æ³¨åå¨å±äºä»¶
  testing::AddGlobalTestEnvironment(new MyEnv());
  // è¿è¡æææµè¯ç¨ä¾
  return RUN_ALL_TESTS();
}
```
æ§è¡è¾åºï¼
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
## 3.2 æµè¯å¥ä»¶äºä»¶
æµè¯å¥ä»¶äºä»¶åè®¸æä»¬å¨åä¸ä¸ª**æµè¯å¥ä»¶**çæææµè¯ç¨ä¾æ§è¡ååæ§è¡ååä¸äºæä½ã ç»§æ¿gtest æä¾ç `testing::Test`ç±»æ¥å®ç°è¿ä¸ªåè½ã å®ç° `SetUpTestCase `éææ¹æ³ï¼ å¨å½åæµè¯å¥ä»¶çæææµè¯ç¨ä¾æ§è¡åæ§è¡ï¼ å®ç° `TearDownTestCase `éææ¹æ³ï¼ å¨å½åæµè¯å¥ä»¶çæææµè¯ç¨ä¾æ§è¡åæ§è¡ã ä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp
class MyTest : public testing::Test {
 public:
  // æµè¯å¥ä»¶äºä»¶
  static void SetUpTestCase() { printf("Call MyTest SetUpTestCase\n"); }
  static void TearDownTestCase() { printf("Call MyTest TearDownTestCase\n"); }
};

TEST_F(MyTest, FirstTest) {
  ASSERT_TRUE(true);  // ok
}

int main(int argc, char** argv) {
  // åå§ågtest
  testing::InitGoogleTest(&argc, argv);
  // è¿è¡æææµè¯ç¨ä¾
  return RUN_ALL_TESTS();
}
```
æ§è¡è¾åºï¼
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
## 3.3 æµè¯ç¨ä¾äºä»¶
æµè¯ç¨ä¾äºä»¶åè®¸æä»¬å¨æ¯ä¸ä¸ªæµè¯ç¨ä¾æ§è¡ååæ§è¡ååä¸äºæä½ã ç»§æ¿ gtest æä¾`testing::Test`ç±»ï¼ æ¥å®ç°è¿ä¸ªåè½ã éå `SetUp `æ¹æ³ï¼ å¨å½åæµè¯ç¨ä¾æ§è¡åæ§è¡ï¼ éå `TearDown`æ¹æ³ï¼ å¨å½åæµè¯ç¨ä¾æ§è¡åæ§è¡ã ä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp

class MyTest : public testing::Test {
 public:
  // æµè¯ç¨ä¾äºä»¶
  virtual void SetUp() override { printf("Call MyTest SetUp\n"); }
  virtual void TearDown() override { printf("Call MyTest TearDown\n"); }
};

TEST_F(MyTest, FirstTest) {
  ASSERT_TRUE(true);  // ok
}
```
æ§è¡è¾åºï¼
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

# 4 åæ°å
## 4.1 å¼åæ°å
å¼åæ°åçæµè¯ä½¿æä»¬å¯ä»¥ä½¿ç¨ä¸åçåæ°æµè¯ä»£ç ï¼ èæ éç¼ååä¸æµè¯çå¤ä¸ªå¯æ¬ã è¿éç¨ä½ä¸éäºä»¥ä¸æåµï¼

1. ä¸æ®µä»£ç çè¡ä¸ºåå°ä¸ä¸ªæå¤ä¸ªå½ä»¤è¡æ å¿çå½±åã æ³è¦ç¡®ä¿ä»£ç å¯¹äºè¿äºæ å¿çåç§å¼é½è½æ­£ç¡®æ§è¡ï¼
1. OO æ¥å£çä¸åå®ç°éè¦æµè¯ï¼
1. éè¿åç§è¾å¥æ¥æµè¯ä»£ç ã

ä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp
#include <iostream>
// gtest
#include "gtest/gtest.h"

// å¾æµè¯ç±»ParamTestç»§æ¿ testing::TestWithParam<int>
class ParamTest : public testing::TestWithParam<int> {
  // do nothing
};
TEST_P(ParamTest, Test1) { // ä½¿ç¨TEST_Påå»ºä¸ä¸ªå¼åæ°åæµè¯ç¨ä¾
  auto v = GetParam();	   // ä½¿ç¨GetParam() è·ååæ°å¼
  EXPECT_LT(v, 3);
}
INSTANTIATE_TEST_CASE_P(IntType, ParamTest, testing::Values(2, 3, 4));// å®ä¾åæµè¯å¥ä»¶
//åæ°1ï¼æµè¯ç¨ä¾åç¼ï¼è¡¨æåªè¦åç¼ä¸åï¼å¯è¿è¡å¤æ¬¡å®ä¾åãåå°éå¤code
//åæ°2ï¼æµè¯å¥ä»¶
//åæ°3ï¼å¼åæ°çæå¨testing::Values
```
æ§è¡è¾åºï¼
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
## 4.2 ç±»åå
ç±»ååçæµè¯å¯ä»¥å®æéå¯¹ä¸åç±»åèæµè¯é»è¾ç¸åçæµè¯ãå¦å·æåä¸ä¸ªæ¥å£çå¤ä¸ªå®ç°ï¼è¦ç¡®ä¿å®ä»¬é½æ»¡è¶³ä¸äºå±åçè¦æ±ã æèï¼ éå¯¹å·²ç»å®ä¹äºå ç§éè¦å¼å®¹å¤ççç±»ä¼¼çç±»åï¼æ¯å¦ï¼`int``int16_t`ï¼ã
ä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
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
TYPED_TEST_CASE(FooTest, MyTypes);  // ç±»ååæµè¯ç¨ä¾å³è

TYPED_TEST(FooTest, FirstTest) {
  this->Test();  // call FooTest<T>::Test()
}
```
æ§è¡è¾åºï¼
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
ð¡	ç±»ååå¯éå¯¹ä½¿ç¨æ¨¡æ¿æ³åçä»£ç è¿è¡æµè¯ã
:::
## 4.3 ç±»ååæ°å
ç±»ååæ°åæµè¯ç±»ä¼¼äºç±»ååæµè¯ï¼ ä¸åä¹å¤å¨äºä¸éè¦æåç¥éç±»ååè¡¨ã å¯ä»¥åå®ä¹æµè¯é»è¾ï¼ ç¶ååä½¿ç¨ä¸åçç±»ååè¡¨å®ä¾åã å¯ä»¥å¨åä¸ç¨åºä¸­å¤æ¬¡å®ä¾åå®ã ä¸é¢æ¯ä¸ä¸ªç¤ºä¾ï¼
```cpp
#include <iostream>
// gtest
#include "gtest/gtest.h"

template <typename T>
class FooTest : public testing::Test {
 public:
  void Test() { std::cout << sizeof(T) << std::endl; }
};

TYPED_TEST_CASE_P(FooTest);  //å£°ætyped paramæµè¯

TYPED_TEST_P(FooTest, FirstTest) {
  this->Test();  // call FooTest<T>::Test()
}
TYPED_TEST_P(FooTest, SecondTest) {
  // do nothing
}

REGISTER_TYPED_TEST_CASE_P(FooTest, FirstTest, SecondTest);  // å³èæµè¯ç¨ä¾

// å®ä¾åæµè¯å¥ä»¶
using MyTypes = testing::Types<int, unsigned int, unsigned char>;
INSTANTIATE_TYPED_TEST_CASE_P(FirstInstance, FooTest, MyTypes);
INSTANTIATE_TYPED_TEST_CASE_P(SecondInstance, FooTest, int);  // å¯å¤æ¬¡å®ä¾å
```
æ§è¡è¾åºï¼
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
# 5 æµè¯éé¡¹
gtest æµè¯ç¨åºæ¯æ®éçå¯æ§è¡æä»¶ã æå»ºå®æåï¼ æ¨å¯ä»¥ç´æ¥è¿è¡å®ä»¬å¹¶éè¿ç¯å¢åéå(æ)å½ä»¤è¡æ å¿å½±åå®ä»¬çè¡ä¸ºã ä¸ºäºä½¿è¿äºæ å¿èµ·ä½ç¨ï¼ ç¨åºå¿é¡»å¨è°ç¨ `RUN_ALL_TESTS `ä¹åè°ç¨ `testing ::InitGoogleTest`ã
	å¯ä»¥ä½¿ç¨`./xxx_test --help` è¿è¡æµè¯ç¨åºæ¥æ¥çæ¯æçæ å¿åå¶ç¨æ³çåè¡¨ã
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
å¦æåæ¶ç±ç¯å¢åéåæ å¿æå®éé¡¹ï¼ ååèä¼åã å¤§å¤æ°éé¡¹ä¹å¯ä»¥å¨ä»£ç ä¸­è®¾ç½®/è¯»åï¼è¦è®¿é®å½ä»¤è¡æ å¿--gtest_xxx çå¼ï¼ å¯ä»¥ç¼å`testing::GTEST_FLAG(xxx)`ã ä¸ç§å¸¸è§çæ¨¡å¼æ¯å¨è°ç¨ `testing::InitGoogleTest` ä¹åæ´æ¹æ å¿çé»è®¤å¼ï¼ 
```cpp
int main(int argc, char** argv) {
  testing::GTEST_FLAG(repeat) = 10; // ä¿®æ¹æµè¯éé¡¹ï¼éå¤10æ­¤æµè¯
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
```
## 5.1 ååºæµè¯ç¨ä¾
ä½¿ç¨`--gtest_list_tests`ï¼å¯ä»¥ååºæææµè¯ï¼ ä½ä¸ä¼æ§è¡å®ä»¬ã å¦ä¸ç¤ºä¾:
```shell
./prj_demo_test --gtest_list_tests
Running main() from /mnt/e/C++/github/googletest/googletest/src/gtest_main.cc
HelloTest.
  Add
  Sub
```
## 5.2 éæ©æµè¯
ä½¿ç¨`--gtest_filter`æ å¿è®¾ç½®è¿æ»¤å¨å­ç¬¦ä¸²ï¼ å gtest å°ä»è¿è¡å¶å¨åï¼ä»¥`TestSuiteName.TestCaseName` çå½¢å¼ï¼ ä¸è¿æ»¤å¨å¹éçæµè¯ç¨ä¾ã 
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
ð¡	è¿æ»¤å¨æ¯æééç¬¦ï¼ä¸Linux `grep `æ`find `ç±»ä¼¼ãæ¯å¦ï¼`./foo_test --gtest_filter=My.*`è¿è¡ææMyæµè¯å¥ä»¶ä¸çæµè¯ç¨ä¾ã
:::
## 5.3 æµè¯éé¡¹æ©å±
æµè¯éé¡¹æªè¿è¡å®æ´æè¿°ï¼è¿å¯éè¿è®¾ç½®æµè¯éé¡¹è¿è¡éå¤æµè¯ãéæºæµè¯ãæ§å¶è¾åºæ ¼å¼ç­ç­ï¼å¯éè¿åå®¢é¾æ¥äºè§£ï¼
