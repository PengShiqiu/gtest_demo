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