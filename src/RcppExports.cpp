// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// evalWeights
Eigen::VectorXd evalWeights(Eigen::VectorXd deltas, Eigen::VectorXd omegas, Eigen::VectorXd epsilons);
RcppExport SEXP _bayesEL_evalWeights(SEXP deltasSEXP, SEXP omegasSEXP, SEXP epsilonsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type deltas(deltasSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type omegas(omegasSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type epsilons(epsilonsSEXP);
    rcpp_result_gen = Rcpp::wrap(evalWeights(deltas, omegas, epsilons));
    return rcpp_result_gen;
END_RCPP
}
// lambdaNRC
Rcpp::List lambdaNRC(Eigen::MatrixXd G, Eigen::VectorXd weights, int maxIter, double relTol, bool verbose);
RcppExport SEXP _bayesEL_lambdaNRC(SEXP GSEXP, SEXP weightsSEXP, SEXP maxIterSEXP, SEXP relTolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type G(GSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< double >::type relTol(relTolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(lambdaNRC(G, weights, maxIter, relTol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// omegaHatEM
Eigen::VectorXd omegaHatEM(Eigen::MatrixXd G, Eigen::VectorXd deltas, Eigen::VectorXd epsilons, int maxIter, double relTol, bool verbose);
RcppExport SEXP _bayesEL_omegaHatEM(SEXP GSEXP, SEXP deltasSEXP, SEXP epsilonsSEXP, SEXP maxIterSEXP, SEXP relTolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type G(GSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type deltas(deltasSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type epsilons(epsilonsSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< double >::type relTol(relTolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(omegaHatEM(G, deltas, epsilons, maxIter, relTol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// logELC
double logELC(Eigen::VectorXd omegas, Eigen::MatrixXd G, Eigen::VectorXd deltas, Eigen::VectorXd epsilons, int maxIter, double relTol, bool verbose);
RcppExport SEXP _bayesEL_logELC(SEXP omegasSEXP, SEXP GSEXP, SEXP deltasSEXP, SEXP epsilonsSEXP, SEXP maxIterSEXP, SEXP relTolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type omegas(omegasSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type G(GSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type deltas(deltasSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type epsilons(epsilonsSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< double >::type relTol(relTolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(logELC(omegas, G, deltas, epsilons, maxIter, relTol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// lambdaNR
Rcpp::List lambdaNR(Eigen::MatrixXd G, int maxIter, double relTol, bool verbose);
RcppExport SEXP _bayesEL_lambdaNR(SEXP GSEXP, SEXP maxIterSEXP, SEXP relTolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< double >::type relTol(relTolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(lambdaNR(G, maxIter, relTol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// omegaHat
Eigen::VectorXd omegaHat(Eigen::MatrixXd G, int maxIter, double relTol, bool verbose);
RcppExport SEXP _bayesEL_omegaHat(SEXP GSEXP, SEXP maxIterSEXP, SEXP relTolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< double >::type relTol(relTolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(omegaHat(G, maxIter, relTol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// logEL
double logEL(Eigen::VectorXd omegas, Eigen::MatrixXd G, int maxIter, double relTol, bool verbose);
RcppExport SEXP _bayesEL_logEL(SEXP omegasSEXP, SEXP GSEXP, SEXP maxIterSEXP, SEXP relTolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type omegas(omegasSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< double >::type relTol(relTolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(logEL(omegas, G, maxIter, relTol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// MeanReg_evalG
Eigen::MatrixXd MeanReg_evalG(Eigen::VectorXd y, Eigen::MatrixXd X, Eigen::VectorXd beta);
RcppExport SEXP _bayesEL_MeanReg_evalG(SEXP ySEXP, SEXP XSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(MeanReg_evalG(y, X, beta));
    return rcpp_result_gen;
END_RCPP
}
// QuantReg_evalG
Eigen::MatrixXd QuantReg_evalG(Eigen::VectorXd y, Eigen::MatrixXd X, double alpha, Eigen::VectorXd beta);
RcppExport SEXP _bayesEL_QuantReg_evalG(SEXP ySEXP, SEXP XSEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(QuantReg_evalG(y, X, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bayesEL_evalWeights", (DL_FUNC) &_bayesEL_evalWeights, 3},
    {"_bayesEL_lambdaNRC", (DL_FUNC) &_bayesEL_lambdaNRC, 5},
    {"_bayesEL_omegaHatEM", (DL_FUNC) &_bayesEL_omegaHatEM, 6},
    {"_bayesEL_logELC", (DL_FUNC) &_bayesEL_logELC, 7},
    {"_bayesEL_lambdaNR", (DL_FUNC) &_bayesEL_lambdaNR, 4},
    {"_bayesEL_omegaHat", (DL_FUNC) &_bayesEL_omegaHat, 4},
    {"_bayesEL_logEL", (DL_FUNC) &_bayesEL_logEL, 5},
    {"_bayesEL_MeanReg_evalG", (DL_FUNC) &_bayesEL_MeanReg_evalG, 3},
    {"_bayesEL_QuantReg_evalG", (DL_FUNC) &_bayesEL_QuantReg_evalG, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_bayesEL(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
