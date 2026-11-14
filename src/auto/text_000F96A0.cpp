/* 23 functions from 0x000F96A0 to 0x000FA693, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000F96A0(int param_1)
{
  int func_000F9610(...);
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  func_000F9610(*(undefined4 *)(param_1 + 0xe0));
  puVar4 = (undefined4 *)(param_1 + 0x294);
  iVar3 = 6;
  do {
    for (puVar2 = (undefined4 *)*puVar4; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      uVar1 = *(ushort *)(puVar2[2] + 0x10);
      if (((uVar1 & 0x40) == 0) && ((uVar1 & 1) != 0)) {
        func_000F9610(*(undefined4 *)(puVar2[2] + 0x2c));
      }
    }
    puVar4 = puVar4 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

int func_000F9760(void)
{
  extern undefined4 D_00324B80;
  int func_00116E50(...);
  extern undefined4 D_00324B84;
  D_00324B80 = func_00116E50(D_00324B80,(D_00324B84 * 9 + 9) * 8,1,1);
  D_00324B84 = D_00324B84 + 1;
  return D_00324B80 + -0x48 + D_00324B84 * 0x48;
}

void func_000F9F10(int *param_1, void *param_2, int *param_3)
{
  extern char func_000F9D50(...);
  extern int func_0009C510(...);
  extern int func_0009C6A0(...);
  extern int func_0009C590(...);
  extern int func_0009CBF0(...);
  extern int func_0011B4F0(...);
  extern char D_001D29C7;
  extern char D_001D574C;
  char local_80[0x80];
  char local_100[0x80];
  char local_180[0x80];
  int value;
  if (func_0011B4F0(param_2, &D_001D29C7) && func_0011B4F0(param_2, &D_001D574C)) {
    if (func_000F9D50(param_1, param_2, local_80)) {
      func_0009C510(param_2, local_180, local_100);
      value = func_0009C6A0(param_1[3], local_180);
      param_3[0] = value;
      param_3[1] = func_0009CBF0(value, param_2);
    } else {
      func_0009C510(local_80, local_180, local_100);
      value = func_0009C590(local_180);
      param_3[0] = value;
      param_3[1] = func_0009CBF0(value, local_100);
    }
  }
}

void func_000FA000(int *param_1, void *param_2, int *param_3)
{
  extern char func_000F9D50(...);
  extern int func_0009C510(...);
  extern int func_0009C6A0(...);
  extern int func_0009C590(...);
  extern int func_0009CB40(...);
  char local_80[0x80];
  char local_100[0x80];
  char local_180[0x80];
  int value;
  if (func_000F9D50(param_1, param_2, local_80)) {
    func_0009C510(param_2, local_180, local_100);
    value = func_0009C6A0(param_1[3], local_180);
    param_3[0] = value;
    param_3[1] = func_0009CB40(value, param_2);
  } else {
    func_0009C510(local_80, local_180, local_100);
    value = func_0009C590(local_180);
    param_3[0] = value;
    param_3[1] = func_0009CB40(value, local_100);
  }
}

void func_000FA0C0(int *param_1, void *param_2, int *param_3)
{
  extern char func_000F9D50(...);
  extern int func_0009C510(...);
  extern int func_0009C6A0(...);
  extern int func_0009C590(...);
  extern int func_0009CAA0(...);
  char local_80[0x80];
  char local_100[0x80];
  char local_180[0x80];
  int value;
  if (func_000F9D50(param_1, param_2, local_80)) {
    func_0009C510(param_2, local_180, local_100);
    value = func_0009C6A0(param_1[3], local_180);
    param_3[0] = value;
    param_3[1] = func_0009CAA0(value, param_2);
  } else {
    func_0009C510(local_80, local_180, local_100);
    value = func_0009C590(local_180);
    param_3[0] = value;
    param_3[1] = func_0009CAA0(value, local_100);
  }
}

void func_000FA270(int param_1, undefined4 param_2, undefined4 *param_3)
{
  int func_000F9D50(...);
  extern undefined4 D_00308158;
  int func_0009C6A0(...);
  int func_0009C590(...);
  char cVar1;
  undefined4 uVar2;
  undefined1 local_80 [128];
  
  cVar1 = func_000F9D50(param_1,param_2,local_80);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xc) != D_00308158)) {
    uVar2 = func_0009C6A0(*(int *)(param_1 + 0xc),param_2);
    *param_3 = uVar2;
    return;
  }
  uVar2 = func_0009C590(local_80);
  *param_3 = uVar2;
  return;
}

void func_000FA2E0(int param_1, undefined4 param_2, undefined4 *param_3)
{
  int func_000F9D50(...);
  extern undefined4 D_00308158;
  int func_001031C0(...);
  int func_00103210(...);
  char cVar1;
  undefined4 uVar2;
  undefined1 local_80 [128];
  
  cVar1 = func_000F9D50(param_1,param_2,local_80);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xc) != D_00308158)) {
    uVar2 = func_001031C0(*(int *)(param_1 + 0xc),param_2);
    *param_3 = uVar2;
    return;
  }
  uVar2 = func_00103210(local_80);
  *param_3 = uVar2;
  return;
}

void func_000FA640(int param_1, char param_2)
{
  if (param_2 != '\0') {
    *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + '\x01';
    return;
  }
  *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + -1;
  return;
}
