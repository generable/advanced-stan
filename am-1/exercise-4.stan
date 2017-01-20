transformed data {
  vector[3] x = {-1, 0, 1};
}
parameters {
  real mu1;
  real exp_mu2;
}
transformed parameters {
  real mu2 = log(exp_mu2);
}
model {
  x ~ normal(mu1, 1);
  x ~ normal(mu2, 1);
}
