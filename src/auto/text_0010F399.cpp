/* 27 functions from 0x0010F399 to 0x00110368, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0010F930(int param_1)
{
  ushort *puVar1;
  int *piVar2;
  
  for (piVar2 = *(int **)(param_1 + 0x28); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
    if ((*(byte *)(*piVar2 + 0x20) & 2) == 0) {
      puVar1 = (ushort *)(*piVar2 + 0x20);
      *puVar1 = *puVar1 | 2;
      func_0010F930(*piVar2);
    }
  }
  return;
}

void func_0010FB70(int a0, int a1, int a2) {
    int func_0010F970(...);
    func_0010F970(a0, a1, a2, 0, a2, 16, 0, 0);
}

void func_001100A0(int param_1, int *param_2)
{
  int func_0010FC60(...);
  if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
    func_0010FC60(param_1);
  }
  *param_2 = (*(byte *)(param_1 + 0x23) + 1) * 0x40 + param_1;
  return;
}

void func_00110140(int param_1, undefined4 *param_2)
{
  *param_2 = *(undefined4 *)(param_1 + 0xc0);
  param_2[1] = *(undefined4 *)(param_1 + 0xc4);
  param_2[2] = *(undefined4 *)(param_1 + 200);
  param_2[3] = *(undefined4 *)(param_1 + 0xcc);
  return;
}

