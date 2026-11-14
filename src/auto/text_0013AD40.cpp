/* 33 functions from 0x0013AD40 to 0x0013BB8D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

longdouble func_0013ADC0(int param_1)
{
  return (longdouble)*(float *)(param_1 + 0x18);
}

void func_0013BB20(void) {
    extern char D_00334F50;
    D_00334F50 = 0;
}
