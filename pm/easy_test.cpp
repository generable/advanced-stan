#include <stan/math.hpp>
#include <gtest/gtest.h>

using std::exp;

TEST(easy, test) {
  double x = 2.0;
  double y = exp(x);
  EXPECT_FLOAT_EQ(7.389056, y);
}
