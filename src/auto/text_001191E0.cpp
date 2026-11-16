/* 19 functions from 0x001191E0 to 0x0011A18C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int _func_0013E9DB(int);
float _func_0013E9E0(int);
void _func_00119CF0(int a, int *b) { if (_func_0013E9DB(*b)) *(unsigned char *)(a + 0xb6) |= 1; }

void func_00119D10(int param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  undefined2 uVar1;
  
  uVar1 = func_0013E9DB(*param_2);
  *(undefined2 *)(param_1 + 0xb4) = uVar1;
  return;
}

void func_00119DA0(int param_1, undefined4 *param_2)
{
  int func_0011B4F0(...);
  extern undefined D_001DCFFC;
  extern undefined D_001DF514;
  extern undefined D_001DF510;
  int iVar1;
  
  iVar1 = func_0011B4F0(*param_2,((undefined *)&D_001DCFFC));
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x4c) = 2;
    return;
  }
  iVar1 = func_0011B4F0(*param_2,((undefined *)&D_001DF514));
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x4c) = 0;
    return;
  }
  iVar1 = func_0011B4F0(*param_2,((undefined *)&D_001DF510));
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x4c) = 1;
  }
  return;
}

void func_00119E20(int param_1)
{
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  return;
}

void func_00119E30(int param_1)
{
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  return;
}
