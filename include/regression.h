/* It implements Regression Algorithms */

#ifndef REGRESSION_H
#define REGRESSION_H

#include "deep.h"

/* Linear Regression */

double Linear_Regression(gsl_matrix *X, gsl_vector *w, gsl_vector *Y); /* It executes the linear regression */
double Linear_RegressionPartialDerivative(gsl_matrix *X, gsl_vector *w, gsl_vector *Y, int j); /*It executes the partial derivative of variable j concerning linear regression with MSE as the cost function */
double h(gsl_vector *x, gsl_vector *w); /* It executes the hypothesis function */
#endif