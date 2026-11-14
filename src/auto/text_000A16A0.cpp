/* 31 functions from 0x000A16A0 to 0x000A2617, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_000A2230(undefined4 *param_1, undefined4 param_2)
{
  int func_0011B4F0(...);
  int iVar1;
  int iVar2;
  
  param_1 = (undefined4 *)*param_1;
  while( true ) {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar1 = param_1[2];
    iVar2 = func_0011B4F0(iVar1 + 0x1c,param_2);
    if (iVar2 == 0) break;
    param_1 = (undefined4 *)*param_1;
  }
  return iVar1;
}

void func_000A2410(undefined4 *param_1, undefined4 param_2)
{
  int func_00115410(...);
  extern undefined4 D_003080B0;
  extern undefined4 D_00307D00;
  extern undefined4 D_00307CFC;
  int func_00116800(...);
  extern undefined4 D_00307CF4;
  int func_000A2070(...);
  int func_00116820(...);
  undefined4 *puVar1;
  
  if (param_1[0xd] != 0) {
    func_00115410(param_1[0xd],param_2);
  }
  if (((param_1 == (undefined4 *)(D_003080B0 + 100)) ||
      (param_1 == (undefined4 *)(D_00307D00 + 100))) ||
     (param_1 == (undefined4 *)(D_00307CFC + 100))) {
    func_00116800(D_00307CF4);
  }
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    func_000A2070(puVar1[2],param_2);
  }
  if (((param_1 != (undefined4 *)(D_003080B0 + 100)) &&
      (param_1 != (undefined4 *)(D_00307D00 + 100))) &&
     (param_1 != (undefined4 *)(D_00307CFC + 100))) {
    return;
  }
  func_00116820();
  return;
}

void func_000A2500(undefined4 param_1)
{
  int func_00120E00(...);
  extern undefined4 D_00313AB8;
  int func_00120F60(...);
  int func_00120F70(...);
  int func_00120F80(...);
  int func_00120E70(...);
  int func_00120ED0(...);
  int func_00120EA0(...);
  func_00120E00(D_00313AB8);
  func_00120F60(param_1);
  func_00120F70(param_1);
  func_00120F80(param_1,param_1);
  func_00120E70(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  func_00120ED0(4,5);
  func_00120EA0(1,1,1,0);
  return;
}

