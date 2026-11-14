/* 4 functions from 0x000E3EC0 to 0x000E45BC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000E3EC0(void)
{
  int func_0009CBE0(...);
  extern undefined D_001D7BE0;
  int func_00116800(...);
  extern undefined4 D_00307D04;
  int func_00116A90(...);
  int func_00116820(...);
  extern undefined4 D_003227D0;
  int func_00103210(...);
  extern undefined D_001DC0E4;
  extern undefined D_001DC0C4;
  extern undefined D_001DC0AC;
  extern undefined D_001DBD80;
  int func_00110300(...);
  extern undefined D_001DC0A0;
  extern undefined D_001DC094;
  extern undefined D_001DC088;
  extern undefined D_001DC078;
  extern undefined4 D_00322820;
  extern undefined4 D_003227F0;
  extern undefined4 D_003227E4;
  int func_0009C6A0(...);
  extern undefined D_001DC06C;
  extern undefined4 D_0032280C;
  extern undefined D_001DC05C;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = func_0009CBE0(((undefined *)&D_001D7BE0));
  func_00116800(D_00307D04);
  uVar3 = func_00116A90(0xef0,1,1);
  *(undefined4 *)(iVar2 + 0x110) = uVar3;
  func_00116820();
  iVar1 = *(int *)(iVar2 + 0x110);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  D_003227D0 = iVar2;
  uVar3 = func_00103210(((undefined *)&D_001DC0E4));
  *(undefined4 *)(iVar1 + 0xe1c) = uVar3;
  uVar3 = func_00103210(((undefined *)&D_001DC0C4));
  *(undefined4 *)(iVar1 + 0xe20) = uVar3;
  uVar3 = func_00103210(((undefined *)&D_001DC0AC));
  *(undefined4 *)(iVar1 + 0xe2c) = uVar3;
  iVar4 = func_0009CBE0(((undefined *)&D_001DBD80));
  *(int *)(iVar1 + 0xba4) = iVar4;
  uVar3 = func_00110300(*(undefined4 *)(iVar4 + 0x2c),((undefined *)&D_001DC0A0),0);
  *(undefined4 *)(iVar1 + 0xbac) = uVar3;
  uVar3 = func_00110300(*(undefined4 *)(*(int *)(iVar1 + 0xba4) + 0x2c),((undefined *)&D_001DC094),0);
  *(undefined4 *)(iVar1 + 0xbb0) = uVar3;
  uVar3 = func_00110300(*(undefined4 *)(*(int *)(iVar1 + 0xba4) + 0x2c),((undefined *)&D_001DC088),0);
  *(undefined4 *)(iVar1 + 0xbb4) = uVar3;
  uVar3 = func_00110300(*(undefined4 *)(*(int *)(iVar1 + 0xba4) + 0x2c),((undefined *)&D_001DC078),0);
  *(undefined4 *)(iVar1 + 3000) = uVar3;
  *(undefined4 *)(iVar1 + 0xbbc) = 0;
  D_00322820 = iVar2;
  D_003227F0 = iVar1;
  D_003227E4 = func_0009C6A0(iVar2,((undefined *)&D_001DC06C));
  D_0032280C = func_0009C6A0(iVar2,((undefined *)&D_001DC05C));
  return;
}
