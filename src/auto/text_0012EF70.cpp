/* 34 functions from 0x0012EF70 to 0x0012FF3B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0012F0B0(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}

void func_0012F0F0(undefined4 *param_1)
{
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  return;
}

void func_0012F120(undefined4 *param_1)
{
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  return;
}

void func_0012F250(int a0, int a1, int a2) {
    int __stdcall func_0010F29B(int, int, int);
    func_0010F29B(a0, a1, a2);
}

void _func_0012F270(int *param_1, int param_2)
{
  int _func_0012F160(...);
  int local[18];
  int *p = local;
  _func_0012F160(p + 2, param_1, param_2);
  param_1[0] = p[2]; param_1[1] = p[3]; param_1[2] = p[4];
  param_1[4] = p[6]; param_1[5] = p[7]; param_1[6] = p[8];
  param_1[8] = p[10]; param_1[9] = p[11]; param_1[10] = p[12];
}

longdouble func_0012FF00(float *param_1)
{
  float *new_var;
  new_var = &param_1[10];
  return (((((longdouble) param_1[9]) * ((longdouble) param_1[4])) - (((longdouble) param_1[8]) * ((longdouble) param_1[5]))) * ((longdouble) param_1[2])) + ((((((longdouble) param_1[5]) * (*new_var)) - (((longdouble) param_1[9]) * ((longdouble) param_1[6]))) * ((longdouble) (*param_1))) - (((((longdouble) param_1[4]) * ((longdouble) (*new_var))) - (((longdouble) param_1[8]) * ((longdouble) param_1[6]))) * ((longdouble) param_1[1])));
}

