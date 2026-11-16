/* 12 functions from 0x000B75C0 to 0x000B8569, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000B7810(void)
{
  int func_00103990(...);
  extern undefined4 D_0031429C;
  extern undefined4 D_00314240;
  func_00103990(D_0031429C,0);
  *(undefined4 *)(D_00314240 + 0x19e4) = 0x40a00000;
  return;
}

extern int D_00314240,D_003142E0; extern void func_00110330(...); extern void func_00102E80(...); void func_000B7AB0(void){ int p=D_00314240; *(char*)(p+0x1a81)=0; func_00110330(*(int*)(p+0x19f4),0); func_00102E80(D_003142E0); }

