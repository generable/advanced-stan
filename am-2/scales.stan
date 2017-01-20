parameters {
  real<lower = 0> mu1;
  real<lower = 0> mu2;
}
model {
  mu1 ~ normal(0, 1);
  mu2 ~ normal(0, 10000);
}
