/* 8 functions from 0x000737F0 to 0x00074754, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00073EA0(int param_1)
{
  int func_000B0E30(...);
  extern undefined4 D_002FA544;
  extern undefined4 D_002FA550;
  int func_00073DD0(...);
  if (param_1 == -1) {
    func_000B0E30();
    D_002FA544 = 0;
    D_002FA550 = 0;
    func_00073DD0();
    return;
  }
  return;
}
