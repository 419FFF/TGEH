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

void _func_00027C80(int param_1)
{
  int _func_0005C5E0(...);
  int _func_00012D60(...);
  int _func_0009D3E0(...);
  extern int _D_002ED3D8;
  int iVar1 = *(int *)(param_1 + 0x114);
  if (iVar1 != 4) {
    _D_002ED3D8 = _D_002ED3D8 - 1;
    if (iVar1 == 6 || iVar1 == 7 || iVar1 == 8) _func_0005C5E0(param_1 + 0x140);
    *(int *)(param_1 + 0x114) = 4;
    _func_00012D60(param_1, 0);
    _func_0009D3E0(param_1);
  }
}

