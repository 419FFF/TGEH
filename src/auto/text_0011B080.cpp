/* 19 functions from 0x0011B080 to 0x0011BF32, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011B610(undefined4 param_1)
{
  int func_0011B580(...);
  int func_0011C3E0(...);
  int func_00116FB0(...);
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  iVar2 = func_0011B580(param_1);
  piVar3 = (int *)(iVar2 + 0x1c);
  local_4 = 0x100;
  do {
    iVar1 = *piVar3;
    while (iVar1 != 0) {
      (**(code **)(iVar2 + 0x14))(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x24));
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) - *(int *)(iVar1 + 0x34);
      *(undefined4 *)(iVar1 + 0x34) = 0;
      func_0011C3E0(*piVar3);
      func_00116FB0(iVar1);
      iVar1 = *piVar3;
    }
    piVar3 = piVar3 + 3;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  func_0011C3E0(iVar2);
  func_00116FB0(iVar2);
  return;
}

int func_0011B700(int param_1, undefined4 param_2)
{
  int func_0012B1A0(...);
  int func_0011B4F0(...);
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = func_0012B1A0(param_2);
  puVar1 = *(undefined4 **)
            (param_1 + 0x1c +
            ((uVar3 >> 8) + (uVar3 >> 0x10) + uVar3 + (uVar3 >> 0x18) & 0xff) * 0xc);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = puVar1[2];
    iVar4 = func_0011B4F0(*(undefined4 *)(iVar2 + 0x1c),param_2);
    if (iVar4 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return iVar2;
}

void func_0011B810(char a0) {
    extern char D_003268EC;
    D_003268EC = a0;
}

void func_0011BAE0(int param_1)
{
  int func_0011B990(...);
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) - 1;
  func_0011B990(param_1);
}

void func_0011BED0(void)
{
  int func_0013AF50(...);
  extern undefined4 D_003278A8;
  extern undefined4 D_003268E8;
  int func_0013AF70(...);
  int func_0013B2B0(...);
  extern undefined4 D_003278A0;
  func_0013AF50(D_003278A8);
  while (D_003268E8 != 0) {
    func_0013AF70(D_003278A8);
    func_0013B2B0(D_003278A0,0xbf800000);
    func_0013AF50(D_003278A8);
  }
  func_0013AF70(D_003278A8);
  return;
}

