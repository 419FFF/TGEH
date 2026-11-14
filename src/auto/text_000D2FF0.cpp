/* 13 functions from 0x000D2FF0 to 0x000D3A51, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000D3A20(void)
{
  int func_001031C0(...);
  extern undefined4 D_0031ACB4;
  extern undefined D_001DAC4C;
  int func_00102E80(...);
  extern undefined D_001DAC3C;
  undefined4 uVar1;
  
  uVar1 = func_001031C0(D_0031ACB4,((undefined *)&D_001DAC4C));
  func_00102E80(uVar1);
  uVar1 = func_001031C0(D_0031ACB4,((undefined *)&D_001DAC3C));
  func_00102E80(uVar1);
  return;
}
