#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FatorialTest, HandlesPositiveInput) {
  Solution solution;
  int actual = solution.Factorial(4);
  int expected = 24;
  EXPECT_EQ(expected, actual);
}

TEST(FactorialTest, HandlesZeroInput) {
  Solution solution;
  int actual = solution.Factorial(0);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(FactorialTest, HandlesNegativeInput) {
  Solution solution;
  int actual = solution.Factorial(-2);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(FactorialTest, HandlesPositiveInput) {
  Solution solution;
  int actual = solution.Factorial(1);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

