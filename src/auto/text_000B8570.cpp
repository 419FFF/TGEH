/* 10 functions from 0x000B8570 to 0x000B9388, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000B8C30(void) {
    extern int D_00308158;
    extern int D_001D9058;
    int func_000F9C00(...);
    func_000F9C00(D_00308158, (int)&D_001D9058);
}

void func_000B8C50(void)
{
  int func_000451B0(...);
  int func_000B8C30(...);
  int func_000451C0(...);
  func_000451B0(&func_000B8C30);
  func_000451C0();
  return;
}
