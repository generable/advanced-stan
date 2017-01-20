#include <stan/math.hpp>
#include <stan/foo.hpp>
#include <gtest/gtest.h>

TEST(foo, test) {
  stan::math::var mu = 2;
  stan::math::var lp = stan::math::foo(1.0, mu, 2.0);


  lp.grad();

  EXPECT_FLOAT_EQ(4, lp.val());
  EXPECT_FLOAT_EQ(2, mu.adj());

  stan::math::recover_memory();
}
