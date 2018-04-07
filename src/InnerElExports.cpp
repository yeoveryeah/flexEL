// port some of InnerEL to R

#include <Rcpp.h>
using namespace Rcpp;
//[[Rcpp::depends("RcppEigen")]]
#include <RcppEigen.h>
using namespace Eigen;
#include "InnerEL.h"
#include "MeanRegModel.h"

// Note: y, X are not actually needed here but instantiating an InnerEL object needs them 
// G: nEqs x nObs matrix
// [[Rcpp::export(".lambdaNR")]]
Rcpp::List lambdaNR(Eigen::MatrixXd G, 
                    int maxIter, double relTol, bool verbose) {
    // TODO: pseudo-input, actually can have setG to allocate the space but do this for now 
    int nObs = G.cols();
    int nEqs = G.rows();
    VectorXd y = VectorXd::Zero(nObs);
    MatrixXd X = MatrixXd::Zero(nEqs, nObs);
    // Here init with an MeanRegModel, but it is the same using QuantRegModel
    // InnerEL<MeanRegModel> IL(y, X, NULL); // instantiate
    InnerEL<MeanRegModel> IL;
    IL.setData(y, X, NULL);
    IL.setG(G); // assign the given G
    // initialize variables for output here 
    int nIter;
    double maxErr;
    VectorXd lambda;
    bool not_conv;
    IL.lambdaNR(nIter, maxErr, maxIter, relTol);
    lambda = IL.getLambda(); // output
    // check convergence
    not_conv = (nIter == maxIter) && (maxErr > relTol);
    if(verbose) {
        Rprintf("nIter = %i, maxErr = %f\n", nIter, maxErr);
    }
    return Rcpp::List::create(_["lambda"] = lambda,
                              _["convergence"] = !not_conv);
}

// Eigen::VectorXd y, Eigen::MatrixXd X not needed here since there is no ordering 
// as in the censored case 
// [[Rcpp::export(".omega.hat")]]
Eigen::VectorXd omegaHat(Eigen::MatrixXd G, 
                          int maxIter, double relTol, bool verbose) {
    // TODO: pseudo-input, actually can have setG to allocate the space but do this for now 
    int nObs = G.cols();
    int nEqs = G.rows();
    VectorXd y = VectorXd::Zero(nObs);
    MatrixXd X = MatrixXd::Zero(nEqs, nObs);
    // Here init with an MeanRegModel, but it is the same using QuantRegModel
    // InnerEL<MeanRegModel> IL(y, X, NULL); // instantiate
    InnerEL<MeanRegModel> IL;
    IL.setData(y,X,NULL);
    IL.setG(G); // assign the given G
    IL.evalOmegas(maxIter, relTol); // calculate omegas
    VectorXd omegasnew = IL.getOmegas(); // get omegas
    return omegasnew;
}

// This version finds the maximized loglikelihood, 
//      or -Inf if no feasible omegas satisfies constraints.
// [[Rcpp::export(".logEL")]]
double logEL(Eigen::MatrixXd G, 
                 int maxIter, double relTol, bool verbose) {
    // TODO: pseudo-input, actually can have setG to allocate the space but do this for now 
    int nObs = G.cols();
    int nEqs = G.rows();
    VectorXd y = VectorXd::Zero(nObs);
    MatrixXd X = MatrixXd::Zero(nEqs, nObs);
    // Here init with an MeanRegModel, but it is the same using QuantRegModel
    // InnerEL<MeanRegModel> IL(y, X, NULL); // instantiate
    InnerEL<MeanRegModel> IL;
    IL.setData(y,X,NULL);
    IL.setG(G); // assign the given G
    double logel = IL.logEL(maxIter, relTol);
    return logel; 
}

// // This version gives the loglikelihood, 
// //      or -Inf if omegas does not satisfy constraints.
// // [[Rcpp::export(".logEL")]]
// double logEL(Eigen::VectorXd omegas, Eigen::MatrixXd G, 
//              int maxIter, double relTol, bool verbose) {
//     int nObs = G.cols();
//     int nEqs = G.rows();
//     VectorXd y = VectorXd::Zero(nObs);
//     MatrixXd X = MatrixXd::Zero(nEqs, nObs);
//     InnerEL<MeanRegModel> IL;
//     IL.setData(y,X,NULL);
//     IL.setG(G); // set the given G
//     IL.setOmegas(omegas); // set the given omegas
//     double logel = IL.logEL();
//     return logel; 
// }