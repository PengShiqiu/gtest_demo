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
