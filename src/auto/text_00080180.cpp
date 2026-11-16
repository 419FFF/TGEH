/* 13 functions from 0x00080180 to 0x00080F1F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00080540(void *p){void func_00110760(...); void func_00116FB0(...); func_00110760(*(int*)((char*)p+0x100)); func_00116FB0(*(int*)((char*)p+0xfc));}

void func_000809C0(void)
{
  extern undefined4 D_002FBA84;
  int func_001103C0(...);
  extern undefined4 D_002FBA80;
  D_002FBA84 = D_002FBA84 + -1;
  if (D_002FBA84 == 0) {
    func_001103C0(D_002FBA80);
  }
  return;
}

void func_000809E0(void)
{
  extern undefined D_002FBA00;
  int func_00110760(...);
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(((undefined *)&D_002FBA00) + uVar1) != 0) {
      func_00110760(*(int *)(((undefined *)&D_002FBA00) + uVar1));
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x80);
  return;
}

void func_00080A10(void) {
    extern int D_002FBA90;
    extern int D_002FBAF0;
    extern int D_002FBA94;
    extern int D_002FBAF8;
    D_002FBA90 = 0;
    D_002FBAF0 = 0;
    D_002FBA94 = 0;
    D_002FBAF8 = 1;
}

void func_00080ED0(int param_1, int param_2)
{
  int func_0011DED0(...);
  int func_00116A90(...);
  undefined4 *puVar1;
  
  func_0011DED0(param_1);
  puVar1 = (undefined4 *)func_00116A90(0x10,1,0);
  *(undefined4 **)(param_1 + 0x17c) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) & 0xfffffffd;
  return;
}

