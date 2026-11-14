/* 16 functions from 0x000480E0 to 0x00048BE7, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000486B0(void) {
    int func_00116A90(...);
    func_00116A90(8, 1, 1);
}

void func_000486C0(int *param_1)
{
  int func_0013E469(...);
  extern undefined D_001D4E04;
  int func_00116FB0(...);
  int iVar1;
  undefined1 local_100 [256];
  
  iVar1 = 0;
  if (*param_1 != 0) {
    do {
      if (*(int *)(param_1[1] + 4 + iVar1 * 8) != 0) {
        func_0013E469(local_100,((undefined *)&D_001D4E04),
                       *(undefined4 *)(*(int *)(param_1[1] + iVar1 * 8) + 0xc));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != *param_1);
  }
  func_00116FB0(param_1[1]);
  func_00116FB0(param_1);
  return;
}

