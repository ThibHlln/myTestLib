/*! \file */ 
#include <xtensor/xsort.hpp>
#include <xtensor-r/rarray.hpp>
#include <xtensor-r/rtensor.hpp>

#include <Rcpp.h>

// [[Rcpp::plugins(cpp14)]]

// [[Rcpp::export("sort_cpp")]]
xt::rarray<double> sort_cpp(
    xt::rtensor<double, 4> q
)
{
  xt::rarray<double> arr = xt::sort(q, 3);
  return arr;
}

// [[Rcpp::export("quantile_cpp")]]
xt::rarray<double> quantile_cpp(
    xt::rtensor<double, 4> q
)
{
  xt::rarray<double> arr = xt::quantile(q, {0.25}, 2);
  return arr;
}
