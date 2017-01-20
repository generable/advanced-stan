# Get RStan

```sh
> git clone https://github.com/stan-dev/rstan
> cd cmdstan
> git submodule update --init --recursive
```

# Building RStan

## Build

```sh
> R CMD build StanHeaders/
> R CMD INSTALL StanHeaders_*.tar.gz
> cd rstan
> make build
> make install
```

## Run

From R:
```python
library(rstan)
```

## Updating the Stan branch

```sh
> cd StanHeaders/inst/include/
> git checkout <branch>
> cd ../../../
> R CMD build StanHeaders/
> R CMD INSTALL StanHeaders_*.tar.gz
> cd rstan
> make build
> make install
```

# Rebuilding RStan
	
From the command line:

```sh
> R CMD build StanHeaders/
> R CMD INSTALL StanHeaders_*.tar.gz
> cd rstan
> make build
> make install
```