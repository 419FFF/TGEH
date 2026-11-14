/* 8 functions from 0x00011000 to 0x00011E2E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

longdouble func_00011D80(int param_1)
{
  return (longdouble)*(float *)(param_1 + 0x17c + *(int *)(param_1 + 0x178) * 4) *
         (longdouble)*(float *)(param_1 + 0x16c);
}
