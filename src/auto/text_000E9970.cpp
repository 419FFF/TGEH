/* 7 functions from 0x000E9970 to 0x000EA514, found by Ghidra. */
#include "common.h"

#pragma optimize("y", on)
void func_000EA330(int param_1)
{
  extern int D_00307DF8,D_00324194,D_00324514,D_00323F20,D_00324190;
  extern char D_001D2AF8,D_003244D0;
  int func_00110330(...),func_0009D3E0(...),func_0009D280(...),func_00012040(...),func_0009C7A0(...),func_00110060(...);
  **(int **)(D_00307DF8+0x110)=2;
  func_00110330(*(int*)(D_00324194+0x2c),0); func_00110330(*(int*)(D_00307DF8+0x2c),1);
  func_0009D3E0(D_00324194); func_0009D280(D_00307DF8);
  D_00323F20=1; func_00012040(param_1,D_00324514); func_00012040(D_00324194,D_00324514);
  D_00324190=0; int *p=(int*)func_0009C7A0(param_1,&D_001D2AF8,0); *p=0x3f800000;
  func_00110060(*(int*)(param_1+0x2c),&D_003244D0);
}
#pragma optimize("", on)
