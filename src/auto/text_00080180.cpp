/* 13 functions from 0x00080180 to 0x00080F1F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

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
