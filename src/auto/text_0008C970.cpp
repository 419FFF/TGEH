/* 13 functions from 0x0008C970 to 0x0008D866, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0008D800(int param_1)
{
  extern undefined D_002FE134;
  *(undefined4 *)(((undefined *)&D_002FE134) + param_1 * 0x600) = 0;
  return;
}
