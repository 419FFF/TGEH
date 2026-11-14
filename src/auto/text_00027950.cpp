/* 5 functions from 0x00027950 to 0x00027E00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00027A20(int param_1)
{
  extern undefined D_0000FFFF;
  extern undefined4 D_002ED3D8;
  int func_0009C7A0(...);
  extern undefined4 D_00308158;
  extern undefined D_001E39B0;
  extern undefined D_002ED380;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined **)(param_1 + 0x114) = ((undefined *)&D_0000FFFF);
  if (D_002ED3D8 == 0) {
    uVar2 = 0;
    do {
      uVar1 = func_0009C7A0(D_00308158,*(undefined4 *)(((undefined *)&D_001E39B0) + uVar2),0);
      *(undefined4 *)(((undefined *)&D_002ED380) + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0x58);
  }
  D_002ED3D8 = D_002ED3D8 + 1;
  return;
}
