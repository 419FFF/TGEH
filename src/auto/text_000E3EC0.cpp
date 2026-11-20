/* 4 functions from 0x000E3EC0 to 0x000E45BC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct Mat16 { float m[16]; };

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

void func_000E4340(int param_1)
{
  int func_00110060(...);
  extern undefined4 D_001DBF48;
  int func_0012F120(...);
  int func_0012FE20(...);
  int func_00011CB0(...);
  extern undefined4 D_003234BC;
  extern undefined D_00322838;
  extern undefined D_0032283C;
  extern undefined D_00322840;
  int func_001105E0(...);
  int func_00110000(...);
  int iVar1;
  undefined1 local_d0 [48];
  float local_a0;
  float local_9c;
  float local_98;
  undefined1 local_90 [48];
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  func_00110060(*(undefined4 *)(*(int *)(param_1 + 0xba8) + 0x2c),local_90);
  *(float *)(param_1 + 0xed0) = *(float *)(param_1 + 0xed0) + D_001DBF48;
  func_0012F120(local_50);
  func_0012FE20(local_50,0,*(undefined4 *)(param_1 + 0xed0),0);
  func_00011CB0(local_d0,local_50);
  iVar1 = D_003234BC * 0x10;
  local_a0 = local_60 + *(float *)(((undefined *)&D_00322838) + iVar1);
  local_9c = local_5c + *(float *)(((undefined *)&D_0032283C) + iVar1);
  local_98 = local_58 + *(float *)(((undefined *)&D_00322840) + iVar1);
  func_001105E0(*(undefined4 *)(*(int *)(param_1 + 0xbc0) + 0x2c),local_d0,0);
  if (D_003234BC < 2) {
    func_00110000(*(undefined4 *)(*(int *)(param_1 + 0xbc0) + 0x2c));
  }
  D_003234BC = D_003234BC + 1;
  return;
}

void func_000E4430(int param_1)
{
  int func_00110060(...);
  extern float D_001E461C;
  int func_001105E0(...);
  int func_0009D3E0(...);
  int func_0009D280(...);
  int func_00088A50(...);
  extern float D_001D27B0;
  extern float D_001DBF48;
  Mat16 local;
  int i;
  Mat16 *mats = (Mat16 *)(param_1 + 0xbe0);
  char *flags = (char *)(param_1 + 0xce0);
  int *ptrs = (int *)(param_1 + 0xbcc);

  func_00110060(*(int *)(*(int *)(param_1 + 0xbc0) + 0x2c), &local);
  if (*(char *)(param_1 + 0xbd0) != 0) {
    for (i = 0; i < 4; i++) {
      mats[i] = local;
      flags[i] = 0;
    }
    *(char *)(param_1 + 0xbd0) = 0;
  }
  for (i = 0; i < 3; i++) {
    mats[3 - i] = mats[2 - i];
    mats[3 - i].m[14] += D_001E461C * *(float *)(param_1 + 0xb80);
    flags[3 - i] = flags[2 - i];
    func_001105E0(*(int *)(ptrs[-i] + 0x2c), &mats[3 - i], 0);
    if (flags[3 - i] != 0)
      func_0009D280(ptrs[-i]);
    else
      func_0009D3E0(ptrs[-i]);
    func_00088A50(*(int *)(ptrs[-i] + 0x2c), ((float)i + D_001D27B0) * D_001DBF48, 1);
  }
  mats[0] = local;
  flags[0] = ~(*(unsigned char *)(*(int *)(param_1 + 0xbc0) + 0x10) >> 1) & 1;
}

