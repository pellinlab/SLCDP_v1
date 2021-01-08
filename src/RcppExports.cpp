// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// generateCloneTraj
Eigen::MatrixXd generateCloneTraj(int NCell, Eigen::MatrixXd M, Eigen::VectorXd dupRate, Eigen::VectorXd deathRate, Eigen::MatrixXd diffRate, double dt, double tEnd, Eigen::VectorXd E0);
RcppExport SEXP _SLCDP_generateCloneTraj(SEXP NCellSEXP, SEXP MSEXP, SEXP dupRateSEXP, SEXP deathRateSEXP, SEXP diffRateSEXP, SEXP dtSEXP, SEXP tEndSEXP, SEXP E0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type NCell(NCellSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type M(MSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type dupRate(dupRateSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type deathRate(deathRateSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type diffRate(diffRateSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< double >::type tEnd(tEndSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type E0(E0SEXP);
    rcpp_result_gen = Rcpp::wrap(generateCloneTraj(NCell, M, dupRate, deathRate, diffRate, dt, tEnd, E0));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SLCDP_generateCloneTraj", (DL_FUNC) &_SLCDP_generateCloneTraj, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_SLCDP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
