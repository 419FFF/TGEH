/* 12 functions from 0x00028DB0 to 0x00029D48, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00028EF0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  extern undefined4 D_003268B0;
  int func_00028DB0(...);
  extern undefined D_00325314;
  undefined4 *puVar1;
  
  if (*(byte *)(param_1 + 0x22) == D_003268B0) {
    if ((char)param_3 != '\0') {
      func_00028DB0(param_1,param_2,param_4);
    }
  }
  else if (*(code **)(((undefined *)&D_00325314) + (uint)*(byte *)(param_1 + 0x22) * 0x1c) != (code *)0x0) {
    (**(code **)(((undefined *)&D_00325314) + (uint)*(byte *)(param_1 + 0x22) * 0x1c))(param_1,param_2,0);
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x28); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[3]) {
    func_00028EF0(*puVar1,param_2,param_3,param_4);
  }
  return;
}

undefined4 func_000291F0(int param_1)
{
  return *(undefined4 *)(param_1 + 0x110);
}

void func_00029B40(int param_1)
{
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000A1C00(*(undefined4 *)(iVar1 + 0x1c));
  func_00116FB0(iVar1);
  return;
}

void func_00029BA0(int param_1)
{
  int func_0009C7A0(...);
  extern undefined D_001D38A8;
  extern undefined D_001D3898;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0009C7A0(param_1,((undefined *)&D_001D38A8),0);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x11c) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  uVar2 = func_0009C7A0(param_1,((undefined *)&D_001D3898),0);
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  return;
}

