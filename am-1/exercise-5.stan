parameters {
  real<lower = 0> alpha;
  real log_beta;
}
transformed parameters {
  real beta = exp(log_beta);
}
model {
  alpha ~ normal(0, 1)
  beta ~ normal(0, 1);
}
