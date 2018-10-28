// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppDist.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// bayeslm
Rcpp::List bayeslm(const arma::vec& y, const arma::mat x, const int iters);
RcppExport SEXP _RcppDist_bayeslm(SEXP ySEXP, SEXP xSEXP, SEXP itersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type iters(itersSEXP);
    rcpp_result_gen = Rcpp::wrap(bayeslm(y, x, iters));
    return rcpp_result_gen;
END_RCPP
}
// test_d4beta
List test_d4beta(NumericVector x, double shape1, double shape2, double a, double b);
RcppExport SEXP _RcppDist_test_d4beta(SEXP xSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_d4beta(x, shape1, shape2, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_p4beta
List test_p4beta(NumericVector x, double shape1, double shape2, double a, double b);
RcppExport SEXP _RcppDist_test_p4beta(SEXP xSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_p4beta(x, shape1, shape2, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_q4beta_nolog
List test_q4beta_nolog(NumericVector x, double shape1, double shape2, double a, double b);
RcppExport SEXP _RcppDist_test_q4beta_nolog(SEXP xSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_q4beta_nolog(x, shape1, shape2, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_q4beta_log
List test_q4beta_log(NumericVector x, double shape1, double shape2, double a, double b);
RcppExport SEXP _RcppDist_test_q4beta_log(SEXP xSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_q4beta_log(x, shape1, shape2, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_dlst
List test_dlst(NumericVector x, double df, double mu, double sigma);
RcppExport SEXP _RcppDist_test_dlst(SEXP xSEXP, SEXP dfSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(test_dlst(x, df, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// test_plst
List test_plst(NumericVector x, double df, double mu, double sigma);
RcppExport SEXP _RcppDist_test_plst(SEXP xSEXP, SEXP dfSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(test_plst(x, df, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// test_qlst_nolog
List test_qlst_nolog(NumericVector x, double df, double mu, double sigma);
RcppExport SEXP _RcppDist_test_qlst_nolog(SEXP xSEXP, SEXP dfSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(test_qlst_nolog(x, df, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// test_qlst_log
List test_qlst_log(NumericVector x, double df, double mu, double sigma);
RcppExport SEXP _RcppDist_test_qlst_log(SEXP xSEXP, SEXP dfSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(test_qlst_log(x, df, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// test_dtruncnorm
List test_dtruncnorm(NumericVector x, double mu, double sigma, double a, double b);
RcppExport SEXP _RcppDist_test_dtruncnorm(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_dtruncnorm(x, mu, sigma, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_ptruncnorm
List test_ptruncnorm(NumericVector x, double mu, double sigma, double a, double b);
RcppExport SEXP _RcppDist_test_ptruncnorm(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_ptruncnorm(x, mu, sigma, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_qtruncnorm_nolog
List test_qtruncnorm_nolog(NumericVector x, double mu, double sigma, double a, double b);
RcppExport SEXP _RcppDist_test_qtruncnorm_nolog(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_qtruncnorm_nolog(x, mu, sigma, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_qtruncnorm_log
List test_qtruncnorm_log(NumericVector x, double mu, double sigma, double a, double b);
RcppExport SEXP _RcppDist_test_qtruncnorm_log(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_qtruncnorm_log(x, mu, sigma, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_dtrunct
List test_dtrunct(NumericVector x, double df, double a, double b);
RcppExport SEXP _RcppDist_test_dtrunct(SEXP xSEXP, SEXP dfSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_dtrunct(x, df, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_ptrunct
List test_ptrunct(NumericVector x, double df, double a, double b);
RcppExport SEXP _RcppDist_test_ptrunct(SEXP xSEXP, SEXP dfSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_ptrunct(x, df, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_qtrunct_nolog
List test_qtrunct_nolog(NumericVector x, double df, double a, double b);
RcppExport SEXP _RcppDist_test_qtrunct_nolog(SEXP xSEXP, SEXP dfSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_qtrunct_nolog(x, df, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_qtrunct_log
List test_qtrunct_log(NumericVector x, double df, double a, double b);
RcppExport SEXP _RcppDist_test_qtrunct_log(SEXP xSEXP, SEXP dfSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_qtrunct_log(x, df, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_dtrunclst
List test_dtrunclst(NumericVector x, double df, double mu, double sigma, double a, double b);
RcppExport SEXP _RcppDist_test_dtrunclst(SEXP xSEXP, SEXP dfSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_dtrunclst(x, df, mu, sigma, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_ptrunclst
List test_ptrunclst(NumericVector x, double df, double mu, double sigma, double a, double b);
RcppExport SEXP _RcppDist_test_ptrunclst(SEXP xSEXP, SEXP dfSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_ptrunclst(x, df, mu, sigma, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_qtrunclst_nolog
List test_qtrunclst_nolog(NumericVector x, double df, double mu, double sigma, double a, double b);
RcppExport SEXP _RcppDist_test_qtrunclst_nolog(SEXP xSEXP, SEXP dfSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_qtrunclst_nolog(x, df, mu, sigma, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_qtrunclst_log
List test_qtrunclst_log(NumericVector x, double df, double mu, double sigma, double a, double b);
RcppExport SEXP _RcppDist_test_qtrunclst_log(SEXP xSEXP, SEXP dfSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(test_qtrunclst_log(x, df, mu, sigma, a, b));
    return rcpp_result_gen;
END_RCPP
}
// test_dtri
List test_dtri(NumericVector x, double a, double b, double c);
RcppExport SEXP _RcppDist_test_dtri(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(test_dtri(x, a, b, c));
    return rcpp_result_gen;
END_RCPP
}
// test_ptri
List test_ptri(NumericVector x, double a, double b, double c);
RcppExport SEXP _RcppDist_test_ptri(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(test_ptri(x, a, b, c));
    return rcpp_result_gen;
END_RCPP
}
// test_qtri_nolog
List test_qtri_nolog(NumericVector x, double a, double b, double c);
RcppExport SEXP _RcppDist_test_qtri_nolog(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(test_qtri_nolog(x, a, b, c));
    return rcpp_result_gen;
END_RCPP
}
// test_qtri_log
List test_qtri_log(NumericVector x, double a, double b, double c);
RcppExport SEXP _RcppDist_test_qtri_log(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(test_qtri_log(x, a, b, c));
    return rcpp_result_gen;
END_RCPP
}
// test_dmvnorm
List test_dmvnorm(arma::mat x, arma::vec mu, arma::mat S);
RcppExport SEXP _RcppDist_test_dmvnorm(SEXP xSEXP, SEXP muSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(test_dmvnorm(x, mu, S));
    return rcpp_result_gen;
END_RCPP
}
// test_dmvt
List test_dmvt(arma::mat x, arma::vec mu, arma::mat S, double df);
RcppExport SEXP _RcppDist_test_dmvt(SEXP xSEXP, SEXP muSEXP, SEXP SSEXP, SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(test_dmvt(x, mu, S, df));
    return rcpp_result_gen;
END_RCPP
}
// test_dwish
List test_dwish(arma::mat x, int df, arma::mat S);
RcppExport SEXP _RcppDist_test_dwish(SEXP xSEXP, SEXP dfSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(test_dwish(x, df, S));
    return rcpp_result_gen;
END_RCPP
}
// test_diwish
List test_diwish(arma::mat x, int df, arma::mat S);
RcppExport SEXP _RcppDist_test_diwish(SEXP xSEXP, SEXP dfSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(test_diwish(x, df, S));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppDist_bayeslm", (DL_FUNC) &_RcppDist_bayeslm, 3},
    {"_RcppDist_test_d4beta", (DL_FUNC) &_RcppDist_test_d4beta, 5},
    {"_RcppDist_test_p4beta", (DL_FUNC) &_RcppDist_test_p4beta, 5},
    {"_RcppDist_test_q4beta_nolog", (DL_FUNC) &_RcppDist_test_q4beta_nolog, 5},
    {"_RcppDist_test_q4beta_log", (DL_FUNC) &_RcppDist_test_q4beta_log, 5},
    {"_RcppDist_test_dlst", (DL_FUNC) &_RcppDist_test_dlst, 4},
    {"_RcppDist_test_plst", (DL_FUNC) &_RcppDist_test_plst, 4},
    {"_RcppDist_test_qlst_nolog", (DL_FUNC) &_RcppDist_test_qlst_nolog, 4},
    {"_RcppDist_test_qlst_log", (DL_FUNC) &_RcppDist_test_qlst_log, 4},
    {"_RcppDist_test_dtruncnorm", (DL_FUNC) &_RcppDist_test_dtruncnorm, 5},
    {"_RcppDist_test_ptruncnorm", (DL_FUNC) &_RcppDist_test_ptruncnorm, 5},
    {"_RcppDist_test_qtruncnorm_nolog", (DL_FUNC) &_RcppDist_test_qtruncnorm_nolog, 5},
    {"_RcppDist_test_qtruncnorm_log", (DL_FUNC) &_RcppDist_test_qtruncnorm_log, 5},
    {"_RcppDist_test_dtrunct", (DL_FUNC) &_RcppDist_test_dtrunct, 4},
    {"_RcppDist_test_ptrunct", (DL_FUNC) &_RcppDist_test_ptrunct, 4},
    {"_RcppDist_test_qtrunct_nolog", (DL_FUNC) &_RcppDist_test_qtrunct_nolog, 4},
    {"_RcppDist_test_qtrunct_log", (DL_FUNC) &_RcppDist_test_qtrunct_log, 4},
    {"_RcppDist_test_dtrunclst", (DL_FUNC) &_RcppDist_test_dtrunclst, 6},
    {"_RcppDist_test_ptrunclst", (DL_FUNC) &_RcppDist_test_ptrunclst, 6},
    {"_RcppDist_test_qtrunclst_nolog", (DL_FUNC) &_RcppDist_test_qtrunclst_nolog, 6},
    {"_RcppDist_test_qtrunclst_log", (DL_FUNC) &_RcppDist_test_qtrunclst_log, 6},
    {"_RcppDist_test_dtri", (DL_FUNC) &_RcppDist_test_dtri, 4},
    {"_RcppDist_test_ptri", (DL_FUNC) &_RcppDist_test_ptri, 4},
    {"_RcppDist_test_qtri_nolog", (DL_FUNC) &_RcppDist_test_qtri_nolog, 4},
    {"_RcppDist_test_qtri_log", (DL_FUNC) &_RcppDist_test_qtri_log, 4},
    {"_RcppDist_test_dmvnorm", (DL_FUNC) &_RcppDist_test_dmvnorm, 3},
    {"_RcppDist_test_dmvt", (DL_FUNC) &_RcppDist_test_dmvt, 4},
    {"_RcppDist_test_dwish", (DL_FUNC) &_RcppDist_test_dwish, 3},
    {"_RcppDist_test_diwish", (DL_FUNC) &_RcppDist_test_diwish, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppDist(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}