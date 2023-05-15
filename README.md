# myTestLib

A testing library to understand bugs using `xtensor-r`

## Build and install

```shell
$ mamba create -n r-env cxx-compiler r=4.2 r-rcpp
$ mamba activate r-env
```

```shell
$ git clone https://github.com/ThibHlln/myTestLib.git --recursive
```

```shell
$ R CMD INSTALL --preclean --no-multiarch --with-keep.source myTestLib
```

## Use

```shell
$ R
```

```Rconsole
> library(myTestLib)
> q = array(
.   data=rep(c(0.6), 10 * 2 * 11 * 2080),
.   dim=c(10, 2, 11, 2080)
. )
> myTestLib::sort_cpp(q)
```
