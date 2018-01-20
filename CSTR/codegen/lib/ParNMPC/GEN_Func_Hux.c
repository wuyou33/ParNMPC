/*
 * File: GEN_Func_Hux.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 21-Jan-2018 02:06:04
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "ParNMPC.h"
#include "GEN_Func_Hux.h"
#include <stdio.h>
#include "omp.h"
#include "stdio.h"

/* Function Definitions */

/*
 * GEN_FUNC_HUX
 *     HUX = GEN_FUNC_HUX(IN1,IN2)
 * Arguments    : const double in1[14]
 *                double Hux[16]
 * Return Type  : void
 */
void GEN_Func_Hux(const double in1[14], double Hux[16])
{
  double x[16];

  /*     This function was generated by the Symbolic Math Toolbox version 7.0. */
  /*     21-Jan-2018 02:00:12 */
  x[0] = in1[0] * -0.017361111111111112;
  x[1] = 0.0;
  x[2] = 0.0;
  x[3] = 0.0;
  x[4] = in1[1] * -0.017361111111111112;
  x[5] = 0.0;
  x[6] = 0.0;
  x[7] = 0.0;
  x[8] = in1[2] * -0.017361111111111112;
  x[9] = 0.0;
  x[10] = 0.0;
  x[11] = 0.0;
  x[12] = 0.0;
  x[13] = 0.0;
  x[14] = 0.0;
  x[15] = 0.0;
  memcpy(&Hux[0], &x[0], sizeof(double) << 4);
}

/*
 * File trailer for GEN_Func_Hux.c
 *
 * [EOF]
 */
