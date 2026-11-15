/* 2 functions from 0x00034E50 to 0x00035766, found by Ghidra. */
#include "common.h"

#pragma optimize("y", on)
void func_00035710(unsigned param_1, int param_2)
{
  extern int func_0009C7A0(...);
  extern char D_001D4278, D_001D3CEC;
  int v;
  *(int *)(param_2+0x318)=0;
  *(int *)(param_2+0x31c)=0;
  v=func_0009C7A0(param_1,&D_001D4278,0);
  *(int *)(param_2+0x350)=v;
  v=func_0009C7A0(param_1,&D_001D3CEC,0);
  *(unsigned char *)(param_2+0x360)=0;
  *(int *)(param_2+0x358)=0;
  *(int *)(param_2+0x35c)=0;
  *(int *)(param_2+0x354)=v;
}
