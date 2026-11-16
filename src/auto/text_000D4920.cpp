/* 19 functions from 0x000D4920 to 0x000D58BA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000D4D90(void)
{
  extern unsigned char D_0031B164;
  extern int D_0031B494;
  int func_000D4130(...);
  unsigned char *p = &D_0031B164;
  int i = 0;
  do {
    if (*p != 1) {
      func_000D4130(i);
      return;
    }
    p += 0x110;
    ++i;
  } while ((int)p < D_0031B494);
}

void func_000D50D0(int self, int arg1, int arg2)
{
  int func_0009C7A0(...), func_000A22B0(...);
  int *p;
  int base = *(int *)(self + 4);
  p = (int *)func_0009C7A0(base, arg1, 0);
  if (p != *(int **)(self + 0x90)) {
    *(int **)(self + 0x90) = p;
    func_000A22B0(base + 0x64, arg2, p[0], p[1], p[2], 0x3e4ccccd);
  }
}

char func_000D5120(void) {
    return 0;
}

void func_000D5130(undefined4 param_1, undefined4 *param_2)
{
  int func_0009C7A0(...);
  extern undefined D_001DAE10;
  extern undefined D_001DAE04;
  undefined4 *puVar1;
  
  *param_2 = 0;
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001DAE10),0);
  param_2[1] = *puVar1;
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001DAE04),0);
  param_2[2] = *puVar1;
  return;
}

void func_000D5290(int param_1)
{
  int func_00011CB0(...);
  int func_000D5170(...);
  func_00011CB0(param_1 + 0x10,param_1 + 0x50);
  func_000D5170(param_1 + 0x10,*(undefined4 *)(param_1 + 4));
  return;
}

