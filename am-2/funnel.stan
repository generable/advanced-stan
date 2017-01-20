parameters {
  real y;
  real x[9];
}
model {
  y ~ normal(0, 3);
  for (n in 1:9)
    x[n] ~ normal(0, exp(y / 2));
}
