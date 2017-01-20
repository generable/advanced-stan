# Get CmdStan

```sh
> git clone https://github.com/stan-dev/cmdstan
> cd cmdstan
> git submodule update --init --recursive
```


# Building CmdStan

## Configuration

Put configuration either in:
`~/.config/cmdstan/make.local` or `make/local`

Example configuration:
```
CC = clang++
MAKEFLAGS = -j8
```

## Build
```sh
> make build
```

## Updating the Stan branch

```sh
> cd stan
> git checkout <branch>
> cd ..
> make clean-all
> make build
```


# Rebuilding CmdStan

```sh
> make clean-all
> make build
```
