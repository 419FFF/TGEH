/* 16 functions from 0x000951D0 to 0x00096088, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_000955D0(void)
{
  extern int D_001D71F8;
  int _func_0011D000(int, int);
  int _func_0011D270(int, int);
  int _func_0011D290(int, int);
  int _func_0011D2B0(int, int);
  int _func_000951D0(void);
  int _func_0007FC90(void);
  int _func_00085E20(void);
  int _func_000688D0(void);
  _func_0011D000((int)&D_001D71F8, (int)_func_000951D0);
  _func_0011D270((int)&D_001D71F8, (int)_func_0007FC90);
  _func_0011D290((int)&D_001D71F8, (int)_func_00085E20);
  _func_0011D2B0((int)&D_001D71F8, (int)_func_000688D0);
}

void func_00095610(void) {
    extern int D_001D71F8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D71F8);
}

void func_00095650(int a0, int a1) {
    extern int D_00307BF0;
    extern int D_00307BF8;
    D_00307BF0 = a0;
    D_00307BF8 = a1;
}

undefined4 func_000957A0(undefined4 param_1)
{
  extern undefined4 D_00307C08;
  int func_00116E50(...);
  extern undefined4 D_00307C04;
  if ((D_00307C04 & 0x3f) == 0) {
    D_00307C08 = func_00116E50(D_00307C08,D_00307C04 * 4 + 0x100,1,1);
  }
  *(undefined4 *)(((u32)unsigned)D_00307C08 + D_00307C04 * 4) = param_1;
  D_00307C04 = D_00307C04 + 1;
  return 1;
}

int func_000959D0(int param_1, undefined4 param_2)
{
  int func_0011B4F0(...);
  undefined4 *puVar1;
  int iVar2;
  
  if (((*(byte *)(param_1 + 0x20) & 8) != 0) &&
     (iVar2 = func_0011B4F0(*(undefined4 *)(param_1 + 0x38),param_2), iVar2 == 0)) {
    return param_1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (((*(byte *)((int)puVar1 + 6) & 1) == 0) &&
       (iVar2 = func_000959D0(*puVar1,param_2), iVar2 != 0)) break;
    puVar1 = (undefined4 *)puVar1[3];
  }
  return iVar2;
}

void func_00095C80(void) {
    int func_00131230(...);
    func_00131230();
}
