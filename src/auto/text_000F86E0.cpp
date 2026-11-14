/* 16 functions from 0x000F86E0 to 0x000F9696, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000F86E0(int param_1)
{
  int func_0007E570(...);
  int func_0009D640(...);
  int func_0001C990(...);
  int func_0001CB50(...);
  int func_00088940(...);
  int func_000F8680(...);
  int func_00110330(...);
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_1;
  if (*(char *)(param_1 + 0x284) != '\0') {
    puVar4 = (undefined4 *)(param_1 + 0x294);
    param_1 = 6;
    do {
      for (puVar1 = (undefined4 *)*puVar4; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        iVar2 = puVar1[2];
        if ((*(byte *)(iVar2 + 0x11) & 0x20) != 0) {
          func_0007E570(*(undefined4 *)(iVar2 + 0x60));
        }
        if (((*(ushort *)(iVar2 + 0x10) & 0x40) == 0) && ((*(ushort *)(iVar2 + 0x10) & 1) != 0)) {
          func_0009D640(iVar2);
          if (*(char *)(iVar2 + 0x13) == '\x06') {
            func_0001C990(iVar2);
          }
          else if (*(char *)(iVar2 + 0x13) == '\x18') {
            func_0001CB50(iVar2);
          }
        }
      }
      puVar4 = puVar4 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    func_00088940(*(undefined4 *)(iVar3 + 0xe0),1);
    func_000F8680(*(undefined4 *)(iVar3 + 0xe0));
    func_00110330(*(undefined4 *)(iVar3 + 0xe0),0);
    *(undefined1 *)(iVar3 + 0x284) = 0;
    *(undefined1 *)(iVar3 + 0x285) = 0;
  }
  return;
}

void func_000F8AE0(int param_1)
{
  int func_0009D9E0(...);
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_1;
  if ((*(char *)(param_1 + 0x284) != '\0') && (*(char *)(param_1 + 0x28d) == '\0')) {
    *(undefined1 *)(param_1 + 0x28d) = 1;
    puVar4 = (undefined4 *)(param_1 + 0x294);
    param_1 = 6;
    do {
      for (puVar1 = (undefined4 *)*puVar4; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        iVar2 = puVar1[2];
        if (((*(ushort *)(iVar2 + 0x10) & 0x200) == 0) && ((*(ushort *)(iVar2 + 0x10) & 1) != 0)) {
          func_0009D9E0(iVar2);
        }
        if ((*(byte *)(iVar2 + 0x11) & 2) == 0) {
          *(undefined1 *)(iVar3 + 0x28d) = 0;
        }
      }
      puVar4 = puVar4 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}
