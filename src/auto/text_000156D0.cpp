/* 3 functions from 0x000156D0 to 0x00015F29, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00015BC0(int param_1)
{
  int func_00116A90(...);
  int __ftol2(...);
  int func_00048720(...);
  extern undefined4 D_00307D10;
  int func_0009CC90(...);
  extern undefined D_001D2940;
  int func_0009C7A0(...);
  extern undefined D_001D2A60;
  extern undefined D_001D2ACC;
  extern undefined D_001D2AC0;
  extern undefined D_001D2AB4;
  extern undefined D_001D2AA4;
  extern undefined D_001D2A8C;
  int func_000A22B0(...);
  int func_00115170(...);
  int func_0012E6D0(...);
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_90 [48];
  undefined1 local_60 [16];
  undefined1 local_50 [48];
  undefined1 local_20 [28];
  
  puVar1 = (undefined4 *)func_00116A90(0x15c,1,1);
  *(undefined4 **)(param_1 + 0x110) = puVar1;
  puVar1[0xb] = *(undefined4 *)(param_1 + 0x138);
  uVar3 = *(undefined4 *)(param_1 + 0x130);
  puVar1[9] = uVar3;
  puVar1[10] = *(undefined4 *)(param_1 + 0x134);
  uVar2 = __ftol2();
  uVar3 = func_00048720(D_00307D10,uVar2,uVar3,param_1);
  puVar1[0xf] = uVar3;
  puVar1[8] = 0;
  iVar4 = func_0009CC90(param_1,((undefined *)&D_001D2940));
  puVar1[5] = *(undefined4 *)(iVar4 + 0x54);
  puVar1[6] = *(undefined4 *)(iVar4 + 0x58);
  puVar1[7] = *(undefined4 *)(iVar4 + 0x5c);
  puVar5 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D2940),0);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1[5] = *puVar5;
    puVar1[6] = puVar5[1];
    puVar1[7] = puVar5[2];
  }
  uVar3 = func_0009C7A0(param_1,((undefined *)&D_001D2A60),0);
  *puVar1 = uVar3;
  uVar3 = func_0009C7A0(param_1,((undefined *)&D_001D2ACC),0);
  puVar1[1] = uVar3;
  uVar3 = func_0009C7A0(param_1,((undefined *)&D_001D2AC0),0);
  puVar1[2] = uVar3;
  uVar3 = func_0009C7A0(param_1,((undefined *)&D_001D2AB4),0);
  puVar1[3] = uVar3;
  uVar3 = func_0009C7A0(param_1,((undefined *)&D_001D2AA4),0);
  puVar1[4] = uVar3;
  puVar5 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D2A8C),0);
  func_000A22B0(param_1 + 100,1,*puVar5,*puVar5,puVar5[2],0);
  func_00115170(*(undefined4 *)(param_1 + 0x98),0,local_90);
  func_000A22B0(param_1 + 100,1,puVar5[1],puVar5[1],puVar5[2],0);
  func_00115170(*(undefined4 *)(param_1 + 0x98),0,local_50);
  func_0012E6D0(puVar1 + 0xc,local_20,local_60);
  puVar1[0x2a] = 0x437a0000;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a0) = 0x3f800000;
  return;
}

#pragma optimize("y", on)
void _func_00015DA0(int param_1, int param_2)
{
  int func_000120B0(...);
  int func_000A22B0(...);
  int func_0009C7A0(...);
  extern void (*D_002EAF80)(void *);
  extern undefined D_001D2AF8, D_001D2AE0, D_001D2910;
  extern float D_001D2AF4, D_001D27B0, D_001D290C;
  float *pfVar3;
  int *piVar4;
  float fVar2;
  int local_20[8];
  undefined4 *puVar1 = (undefined4 *)(param_1 + 0x150);
  if ((*(int *)(param_2 + 0x20) == 6) || (*(int *)(param_2 + 0x20) == 5)) {
    if (D_002EAF80 != 0) {
      local_20[2] = *puVar1;
      local_20[3] = *(int *)(param_1 + 0x154);
      local_20[4] = *(int *)(param_1 + 0x158);
      local_20[0] = *(int *)(param_1 + 0x160);
      local_20[7] = 0;
      local_20[6] = 0;
      local_20[5] = 0;
      local_20[1] = param_1;
      D_002EAF80(local_20);
    }
    pfVar3 = (float *)func_0009C7A0(param_1, &D_001D2AF8, 2);
    if (D_001D2AF4 < *pfVar3) {
      *pfVar3 = *pfVar3 - D_001D27B0;
      piVar4 = (int *)func_0009C7A0(param_1, &D_001D2AE0, 0);
      func_000A22B0(param_1 + 100, 1, *piVar4, piVar4[1], piVar4[2], 0x3dcccccd);
      fVar2 = (float)(piVar4[1] - *piVar4);
      if (piVar4[1] - *piVar4 < 0) fVar2 = fVar2 + D_001D290C;
      func_000120B0(puVar1, fVar2 / (float)piVar4[2], 1, 1);
      *(int *)(param_2 + 0x20) = 9;
      *(char *)(param_1 + 0x174) = 0;
      return;
    }
    piVar4 = (int *)func_0009C7A0(param_1, &D_001D2910, 0);
    func_000A22B0(param_1 + 100, 1, *piVar4, piVar4[1], piVar4[2], 0x3dcccccd);
    fVar2 = (float)(piVar4[1] - *piVar4);
    if (piVar4[1] - *piVar4 < 0) fVar2 = fVar2 + D_001D290C;
    func_000120B0(puVar1, fVar2 / (float)piVar4[2], 0, 0);
    *(int *)(param_2 + 0x20) = 10;
    *pfVar3 = 0.0f;
    *(unsigned char *)(param_1 + 0x10) |= 0x80;
  }
  *(char *)(param_1 + 0x174) = 0;
}
