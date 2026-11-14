/* 20 functions from 0x001473F4 to 0x00148211, found by Ghidra. */
#include "common.h"

#pragma optimize("y", off)
void __stdcall _func_00147C30(int arg) { if (arg) return; }

extern int* __imp__HalBootSMCVideoMode;
int func_00147D10(void)
{
  return *__imp__HalBootSMCVideoMode;
}

#pragma optimize("", on)
