/* 33 functions from 0x0013AD40 to 0x0013BB8D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

longdouble func_0013ADC0(int param_1)
{
  return (longdouble)*(float *)(param_1 + 0x18);
}

void func_0013ADD0(int param_1)
{
  extern undefined4 D_001E8878;
  if (param_1 == 0) {
    param_1 = 1;
  }
  D_001E8878 = param_1;
  return;
}

void func_0013BB20(void) {
    extern char D_00334F50;
    D_00334F50 = 0;
}

undefined4 func_0013BB70(int param_1)
{
  extern undefined D_00334E40;
  return *(undefined4 *)(((undefined *)&D_00334E40) + param_1 * 4);
}

undefined * func_0013BB80(int param_1)
{
  extern undefined D_00334E50;
  return ((undefined *)&D_00334E50) + param_1 * 0x40;
}

