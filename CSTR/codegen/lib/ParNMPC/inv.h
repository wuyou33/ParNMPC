/*
 * File: inv.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 21-Jan-2018 02:06:04
 */

#ifndef INV_H
#define INV_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "omp.h"
#include "ParNMPC_types.h"

/* Function Declarations */
extern void b_inv(const double x[36], double y[36]);
extern void inv(const double x[16], double y[16]);

#endif

/*
 * File trailer for inv.h
 *
 * [EOF]
 */
