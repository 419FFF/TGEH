/* 48 functions from 0x000A2620 to 0x000A34DC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A2A50(undefined4 *param_1)
{
  extern undefined D_00312088;
  extern undefined D_0031151C;
  extern undefined D_0031208C;
  *param_1 = *(undefined4 *)(((undefined *)&D_00312088) + (D_0031151C / 3) * 0x70);
  param_1[1] = *(undefined4 *)(((undefined *)&D_0031208C) + (D_0031151C / 3) * 0x70);
  return;
}
