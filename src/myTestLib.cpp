/*! \file */ 
#include <xtensor/xsort.hpp>
#include <xtensor-r/rarray.hpp>
#include <xtensor-r/rtensor.hpp>

#include <Rcpp.h>

// [[Rcpp::plugins(cpp14)]]

// [[Rcpp::export("sort_rarray_cpp")]]
xt::rarray<double> sort_rarray_cpp(
    xt::rarray<double> q
)
{
  xt::rarray<double> arr = xt::sort(q, 3);
  return arr;
}

// [[Rcpp::export("sort_rtensor_cpp")]]
xt::rarray<double> sort_rtensor_cpp(
    xt::rtensor<double, 4> q
)
{
  xt::rarray<double> arr = xt::sort(q, 3);
  return arr;
}

// [[Rcpp::export("quantile_rtensor_cpp")]]
xt::rarray<double> quantile_rtensor_cpp(
    xt::rtensor<double, 4> q
)
{
  xt::rarray<double> arr = xt::quantile(q, {0.25}, 2);
  return arr;
}

// [[Rcpp::export("quantile_rarray_cpp")]]
xt::rarray<double> quantile_rarray_cpp(
    xt::rarray<double> q
)
{
  xt::rarray<double> arr = xt::quantile(q, {0.25}, 2);
  return arr;
}
