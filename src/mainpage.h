/**
* @file mainpage.h
* @brief Main Page documentation.
*/

/**
* @mainpage About
*
* @authors Shimeng Huang, Martin Lysy
*
* @section intro Introduction
* flexEL is a computationally efficient library in C++, which has a flexible framework for users to solve any type of regression problems with minimum programming effort.
*
* @section struc Code Structure
* flexEL is currently capable to work with regression problems given fully observed covariates and fully observed or right-censored time-to-event resposes. The corresponding computations are handled separately by the template classes `el::InnerEL` and `el::InnerELC` respectively. These two classes are designed as base classes that will inherit from a regression model class which could be user defined.
* Two examples of regression problems, mean regression and quantile regression, are provided in this package, defined by the classes `MeanRegModel` and `QuantRegModel` respectively.
*
* @todo Add a link to tutorials of using this package.
*/