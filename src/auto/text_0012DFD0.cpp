/* 44 functions from 0x0012DFD0 to 0x0012EF65, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0012E730(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

void func_0012E750(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

void func_0012E760(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

longdouble func_0012E840(float *param_1, float *param_2)
{
  return ((longdouble)param_1[1] - (longdouble)param_2[1]) *
         ((longdouble)param_1[1] - (longdouble)param_2[1]) +
         ((longdouble)*param_1 - (longdouble)*param_2) *
         ((longdouble)*param_1 - (longdouble)*param_2);
}

longdouble func_0012E8A0(float *param_1, float *param_2)
{
  return (longdouble)*param_1 * (longdouble)*param_2 +
         (longdouble)param_1[1] * (longdouble)param_2[1];
}

longdouble func_0012E8C0(float *param_1, float *param_2)
{
  return (longdouble)*param_1 * (longdouble)*param_2 +
         (longdouble)param_1[1] * (longdouble)param_2[1] +
         (longdouble)param_1[2] * (longdouble)param_2[2];
}

longdouble func_0012E8E0(float *param_1, float *param_2)
{
  return (longdouble)*param_1 * (longdouble)*param_2 +
         (longdouble)param_1[1] * (longdouble)param_2[1] +
         (longdouble)param_1[2] * (longdouble)param_2[2] +
         (longdouble)param_1[3] * (longdouble)param_2[3];
}

longdouble func_0012E9B0(float *param_1)
{
  return (longdouble)param_1[1] * (longdouble)param_1[1] +
         (longdouble)*param_1 * (longdouble)*param_1;
}

