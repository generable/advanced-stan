# Get PyStan

```sh
> git clone https://github.com/stan-dev/pystan
> cd cmdstan
> git submodule update --init --recursive
```

# Building PyStan

## Prerequisites
- Cython >= 0.22
- NumPy


## Build

```sh
> cd pystan
> python setup.py build_ext --inplace

```

## Run

From python:
```python
import pystan
```

## Updating the Stan branch

```sh
> cd pystan/stan
> git checkout <branch>
> cd ../../
> rm pystan/*.so
> python setup.py build_ext --inplace
```

# Rebuilding PyStan
	
From the command line:

```sh
> rm pystan/*.so
```