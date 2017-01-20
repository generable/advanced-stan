#ifndef STAN_FOO_HPP
#define STAN_FOO_HPP

#include <stan/math.hpp>

namespace stan {
  namespace math {

    using std::sqrt;


    template <class T_y, class T_mu, class T_sigma>
    typename stan::return_type<T_y, T_mu, T_sigma>::type
    foo(T_y y, T_mu mu, T_sigma sigma) {
      typename stan::return_type<T_y, T_mu, T_sigma>::type lp = 0;
      lp = y * mu * sigma;
      return lp;
    }

    template<>
    stan::math::var foo<double, stan::math::var, double>
    (double y, stan::math::var mu, double sigma) {
      double lp = y * mu.val() * sigma;
      OperandsAndPartials<double, stan::math::var, double>
        operands_and_partials(y, mu, sigma);

      operands_and_partials.d_x2[0] += y * sigma;

      return operands_and_partials.value(lp);
    }

    /*
      want:
      d foo(y, mu, sigma) / d mu = y * sigma
     */


  }
}

#endif
