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

int func_00110290(int param_1, undefined4 param_2, uint param_3)
{
  extern undefined4 D_003291C0;
  int func_0011B4F0(...);
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x24) == D_003291C0) {
    return 0;
  }
  *(int *)(param_1 + 0x24) = D_003291C0;
  if ((*(int *)(param_1 + 0x38) != 0) &&
     (iVar2 = func_0011B4F0(*(int *)(param_1 + 0x38),param_2), iVar2 == 0)) {
    return param_1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (((param_3 & *(ushort *)((int)puVar1 + 6)) == 0) &&
       (iVar2 = func_00110290(*puVar1,param_2,param_3), iVar2 != 0)) break;
    puVar1 = (undefined4 *)puVar1[3];
  }
  return iVar2;
}

