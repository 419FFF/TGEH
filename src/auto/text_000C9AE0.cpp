/* 4 functions from 0x000C9AE0 to 0x000CAA8A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000C9AE0(void)
{
  extern undefined4 D_00316944;
  extern undefined4 D_001E461C;
  extern undefined4 D_00316D50;
  extern undefined4 D_00316940;
  int func_0009D3E0(...);
  extern undefined4 D_00307DF8;
  extern undefined4 D_001D2808;
  int func_00110060(...);
  extern undefined D_00316948;
  extern undefined4 D_00316B94;
  extern undefined D_00316BA0;
  int func_000C9A80(...);
  extern undefined4 D_001D2BF8;
  int func_001105E0(...);
  extern undefined4 D_001D3E00;
  extern undefined4 D_001D3330;
  extern undefined4 D_001D27B0;
  int func_00110330(...);
  extern undefined4 D_00316964;
  extern undefined4 D_001D27EC;
  int func_000C9770(...);
  extern undefined D_00316BF0;
  extern undefined4 D_00316D3C;
  extern undefined4 D_001D286C;
  int func_00131230(...);
  extern undefined4 D_00316D30;
  extern undefined4 D_001D313C;
  extern undefined4 D_00316D38;
  int func_00131250(...);
  extern undefined4 D_00316D18;
  extern undefined4 D_00316D20;
  extern undefined4 D_00316BE0;
  extern undefined D_00316C30;
  extern undefined4 D_00316BE4;
  extern undefined D_00316D00;
  extern undefined D_00316C80;
  extern undefined4 D_00316D24;
  extern undefined4 D_00316D2C;
  extern undefined4 D_00316C70;
  extern undefined D_00316CC0;
  extern undefined4 D_00316C74;
  int func_001031C0(...);
  extern undefined D_001DA990;
  int func_00102E80(...);
  int func_00110000(...);
  extern undefined4 D_00316C60;
  extern undefined4 D_00316C20;
  extern undefined4 D_00316C68;
  extern undefined4 D_00316C28;
  extern undefined4 D_00316CF0;
  extern undefined4 D_00316CB0;
  extern undefined4 D_00316CF8;
  extern undefined4 D_00316CB8;
  extern undefined4 D_00316D4C;
  extern undefined4 D_00316D48;
  extern undefined4 D_001D29E0;
  int func_00110300(...);
  extern undefined4 D_00316B98;
  extern undefined D_001DA92C;
  extern undefined D_001DA920;
  extern undefined4 D_00307D08;
  extern undefined4 D_00313B34;
  extern undefined4 D_001D2D4C;
  extern undefined4 D_001D288C;
  extern undefined4 D_00316B90;
  extern undefined4 D_00313AF8;
  extern undefined4 D_00316D58;
  int func_00107C40(...);
  extern undefined4 D_003251EC;
  extern undefined4 D_00308158;
  int func_0009C7A0(...);
  extern undefined D_001DA980;
  extern undefined4 D_00325158;
  extern undefined D_001DA970;
  extern undefined4 D_00325208;
  extern undefined D_001DA960;
  extern undefined4 D_001D27B8;
  extern undefined D_001DA9C4;
  extern undefined D_001DA9B0;
  extern undefined D_001DA99C;
  int func_0009D280(...);
  int func_000B6600(...);
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  byte bVar7;
  longdouble lVar8;
  undefined4 local_90 [12];
  float local_60;
  float local_58;
  undefined4 local_50 [12];
  float local_20;
  float local_18;
  
  bVar7 = 0;
  D_00316944 = D_00316944 + D_001E461C;
  D_00316D50 = D_00316D50 + 1;
  switch(D_00316940) {
  case 0:
    D_00316940 = 1;
    func_0009D3E0(D_00307DF8);
    return;
  case 1:
    if (D_001D2808 < D_00316944) {
      D_00316940 = 2;
      func_00110060(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B94 * 4) + 0x2c),0x3fe0);
      D_00316944 = 0.0;
      return;
    }
    break;
  case 2:
    puVar3 = (undefined4 *)((undefined *)&D_00316BA0);
    puVar6 = local_50;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    func_000C9A80(local_50,D_00316944 * D_001D2BF8);
    func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B94 * 4) + 0x2c),local_50,0);
    if (D_001D3E00 < D_00316944) {
      D_00316940 = 3;
      D_00316944 = 0.0;
      return;
    }
    break;
  case 3:
    if (D_001D3330 < D_00316944) {
      D_00316940 = 4;
      D_00316944 = 0.0;
      return;
    }
    break;
  case 4:
    puVar3 = (undefined4 *)((undefined *)&D_00316BA0);
    puVar6 = local_50;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    func_000C9A80(local_50,D_001D27B0 - D_00316944 * D_001D2BF8);
    func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B94 * 4) + 0x2c),local_50,0);
    if (D_001D3E00 < D_00316944) {
      D_00316940 = 5;
      D_00316944 = 0.0;
      func_00110330(*(undefined4 *)(D_00316964 + 0x2c),0);
      return;
    }
    break;
  case 5:
    if (D_001D27EC < D_00316944) {
      D_00316940 = 6;
      D_00316944 = 0.0;
      func_000C9770();
      return;
    }
    break;
  case 6:
    puVar3 = (undefined4 *)((undefined *)&D_00316BF0);
    puVar6 = local_90;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    fVar1 = (D_00316944 / D_00316D3C) * D_001D286C;
    lVar8 = (longdouble)func_00131230(fVar1);
    local_60 = (float)(lVar8 * (longdouble)D_00316D30 * (longdouble)D_001D313C +
                      (longdouble)local_60);
    lVar8 = (longdouble)func_00131230(fVar1);
    local_58 = (float)(lVar8 * (longdouble)D_00316D38 * (longdouble)D_001D313C +
                      (longdouble)local_58);
    lVar8 = (longdouble)func_00131250(fVar1);
    local_60 = (float)((lVar8 - (longdouble)D_001D27B0) * (longdouble)D_001D27EC *
                       (longdouble)D_00316D18 + (longdouble)local_60);
    lVar8 = (longdouble)func_00131250(fVar1);
    local_58 = (float)((lVar8 - (longdouble)D_001D27B0) * (longdouble)D_001D27EC *
                       (longdouble)D_00316D20 + (longdouble)local_58);
    func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316BE0 * 4) + 0x2c),local_90,0);
    puVar3 = (undefined4 *)((undefined *)&D_00316C30);
    puVar6 = local_90;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    lVar8 = (longdouble)func_00131230(fVar1);
    local_60 = (float)((longdouble)local_60 -
                      lVar8 * (longdouble)D_00316D30 * (longdouble)D_001D313C);
    lVar8 = (longdouble)func_00131230(fVar1);
    local_58 = (float)((longdouble)local_58 -
                      lVar8 * (longdouble)D_00316D38 * (longdouble)D_001D313C);
    lVar8 = (longdouble)func_00131250(fVar1);
    local_60 = (float)((longdouble)local_60 -
                      (lVar8 - (longdouble)D_001D27B0) * (longdouble)D_001D27EC *
                      (longdouble)D_00316D18);
    lVar8 = (longdouble)func_00131250(fVar1);
    local_58 = (float)((longdouble)local_58 -
                      (lVar8 - (longdouble)D_001D27B0) * (longdouble)D_001D27EC *
                      (longdouble)D_00316D20);
    func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316BE4 * 4) + 0x2c),local_90,0);
    if (D_00316D00 != '\0') {
      puVar3 = (undefined4 *)((undefined *)&D_00316C80);
      puVar6 = local_90;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      lVar8 = (longdouble)func_00131230(fVar1);
      local_60 = (float)(lVar8 * (longdouble)D_00316D30 * (longdouble)D_001D313C +
                        (longdouble)local_60);
      lVar8 = (longdouble)func_00131230(fVar1);
      local_58 = (float)(lVar8 * (longdouble)D_00316D38 * (longdouble)D_001D313C +
                        (longdouble)local_58);
      lVar8 = (longdouble)func_00131250(fVar1);
      local_60 = (float)((lVar8 - (longdouble)D_001D27B0) * (longdouble)D_001D27EC *
                         (longdouble)D_00316D24 + (longdouble)local_60);
      lVar8 = (longdouble)func_00131250(fVar1);
      local_58 = (float)((lVar8 - (longdouble)D_001D27B0) * (longdouble)D_001D27EC *
                         (longdouble)D_00316D2C + (longdouble)local_58);
      func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316C70 * 4) + 0x2c),local_90,0);
      puVar3 = (undefined4 *)((undefined *)&D_00316CC0);
      puVar6 = local_90;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      lVar8 = (longdouble)func_00131230(fVar1);
      local_60 = (float)((longdouble)local_60 -
                        lVar8 * (longdouble)D_00316D30 * (longdouble)D_001D313C);
      lVar8 = (longdouble)func_00131230(fVar1);
      local_58 = (float)((longdouble)local_58 -
                        lVar8 * (longdouble)D_00316D38 * (longdouble)D_001D313C);
      lVar8 = (longdouble)func_00131250(fVar1);
      local_60 = (float)((longdouble)local_60 -
                        (lVar8 - (longdouble)D_001D27B0) * (longdouble)D_001D27EC *
                        (longdouble)D_00316D24);
      lVar8 = (longdouble)func_00131250(fVar1);
      local_58 = (float)((longdouble)local_58 -
                        (lVar8 - (longdouble)D_001D27B0) * (longdouble)D_001D27EC *
                        (longdouble)D_00316D2C);
      func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316C74 * 4) + 0x2c),local_90,0);
    }
    if (D_00316D3C < D_00316944) {
      uVar2 = func_001031C0(*(undefined4 *)(((undefined *)&D_00316948) + D_00316B94 * 4),((undefined *)&D_001DA990));
      func_00102E80(uVar2);
      D_00316940 = 6;
      D_00316944 = 0.0;
      func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316BE0 * 4) + 0x2c),((undefined *)&D_00316BF0),
                     0);
      func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316BE4 * 4) + 0x2c),((undefined *)&D_00316C30),
                     0);
      func_00110000(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316BE0 * 4) + 0x2c));
      func_00110000(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316BE4 * 4) + 0x2c));
      if (D_00316D00 != '\0') {
        func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316C70 * 4) + 0x2c),
                       ((undefined *)&D_00316C80),0);
        func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316C74 * 4) + 0x2c),
                       ((undefined *)&D_00316CC0),0);
        func_00110000(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316C70 * 4) + 0x2c));
        func_00110000(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316C74 * 4) + 0x2c));
      }
      if (D_00316B94 == D_00316BE0) {
        func_00110060(*(undefined4 *)(D_00316964 + 0x2c),local_50);
        local_20 = (D_00316C60 - D_00316C20) + local_20;
        local_18 = (D_00316C68 - D_00316C28) + local_18;
        func_001105E0(*(undefined4 *)(D_00316964 + 0x2c),local_50,0);
        D_00316B94 = D_00316BE4;
      }
      else if (D_00316B94 == D_00316BE4) {
        func_00110060(*(undefined4 *)(D_00316964 + 0x2c),local_50);
        local_20 = (D_00316C20 - D_00316C60) + local_20;
        local_18 = (D_00316C28 - D_00316C68) + local_18;
        func_001105E0(*(undefined4 *)(D_00316964 + 0x2c),local_50,0);
        D_00316B94 = D_00316BE0;
      }
      if (D_00316D00 != '\0') {
        if (D_00316B94 == D_00316C70) {
          func_00110060(*(undefined4 *)(D_00316964 + 0x2c),local_50);
          local_20 = (D_00316CF0 - D_00316CB0) + local_20;
          local_18 = (D_00316CF8 - D_00316CB8) + local_18;
          func_001105E0(*(undefined4 *)(D_00316964 + 0x2c),local_50,0);
          D_00316B94 = D_00316C74;
        }
        else if (D_00316B94 == D_00316C74) {
          func_00110060(*(undefined4 *)(D_00316964 + 0x2c),local_50);
          local_20 = (D_00316CB0 - D_00316CF0) + local_20;
          local_18 = (D_00316CB8 - D_00316CF8) + local_18;
          func_001105E0(*(undefined4 *)(D_00316964 + 0x2c),local_50,0);
          D_00316B94 = D_00316C70;
        }
      }
      D_00316D4C = D_00316D4C + 1;
      D_00316944 = 0.0;
      D_00316940 = (D_00316D4C == D_00316D48) + 7;
      return;
    }
    break;
  case 7:
    if (D_001D29E0 < D_00316944) {
      func_000C9770();
      D_00316940 = 6;
      D_00316944 = 0.0;
      return;
    }
    break;
  case 8:
    uVar2 = func_00110300(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B98 * 4) + 0x2c),
                           ((undefined *)&D_001DA92C),0,1);
    func_00110330(uVar2);
    uVar2 = func_00110300(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B98 * 4) + 0x2c),
                           ((undefined *)&D_001DA920),0,0);
    func_00110330(uVar2);
    fVar1 = (float)(int)*(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313B34 * 0x18);
    if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x130) != 0) {
      fVar1 = D_001D2D4C;
    }
    if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x148) == 0) {
      if ((fVar1 < D_001D288C) && (0 < D_00316B98)) {
        D_00316B98 = D_00316B98 + -1;
      }
      if (D_001D27EC < fVar1) goto LAB_000028de;
    }
    else {
LAB_000028de:
      if (D_00316B98 < D_00316B90 + -1) {
        D_00316B98 = D_00316B98 + 1;
      }
    }
    if ((D_00316D50 & 2) != 0) {
      uVar2 = func_00110300(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B98 * 4) + 0x2c),
                             ((undefined *)&D_001DA92C),0,0);
      func_00110330(uVar2);
      uVar2 = func_00110300(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B98 * 4) + 0x2c),
                             ((undefined *)&D_001DA920),0,1);
      func_00110330(uVar2);
    }
    if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313AF8 * 0x18) != 0) {
      uVar2 = func_00110300(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B98 * 4) + 0x2c),
                             ((undefined *)&D_001DA92C),0,1);
      func_00110330(uVar2);
      uVar2 = func_00110300(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B98 * 4) + 0x2c),
                             ((undefined *)&D_001DA920),0,0);
      func_00110330(uVar2);
      func_00110330(*(undefined4 *)(D_00316964 + 0x2c),1);
      D_00316940 = 9;
      func_00110060(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B98 * 4) + 0x2c),0x3fe0);
      D_00316944 = 0.0;
      return;
    }
    break;
  case 9:
    puVar3 = (undefined4 *)((undefined *)&D_00316BA0);
    puVar6 = local_50;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    func_000C9A80(local_50,D_00316944 * D_001D2BF8);
    func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B98 * 4) + 0x2c),local_50,0);
    if (D_001D3E00 < D_00316944) {
      D_00316944 = 0.0;
      if (D_00316B98 != D_00316B94) {
        D_00316940 = 0xb;
        func_00110060(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B94 * 4) + 0x2c),0x3fe0);
        return;
      }
      D_00316940 = 10;
      return;
    }
    break;
  case 10:
    if (D_001D27B0 < D_00316944) {
      D_00316940 = 0xc;
      D_00316944 = 0.0;
      return;
    }
    break;
  case 0xb:
    puVar3 = (undefined4 *)((undefined *)&D_00316BA0);
    puVar6 = local_50;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    func_000C9A80(local_50,D_00316944 * D_001D2BF8);
    func_001105E0(*(undefined4 *)(*(int *)(((undefined *)&D_00316948) + D_00316B94 * 4) + 0x2c),local_50,0);
    if (D_001D3E00 < D_00316944) {
      D_00316940 = 0xd;
      D_00316944 = 0.0;
      return;
    }
    break;
  case 0xc:
    if (D_001D2808 < D_00316944) {
      if (D_00316D58 == 1) {
        func_00107C40(D_003251EC,D_00308158,D_00308158);
        puVar3 = (undefined4 *)func_0009C7A0(D_00308158,((undefined *)&D_001DA980),0);
        *puVar3 = 0x3f800000;
      }
      if (D_00316D58 == 2) {
        func_00107C40(D_00325158,D_00308158,D_00308158);
        puVar3 = (undefined4 *)func_0009C7A0(D_00308158,((undefined *)&D_001DA970),0);
        *puVar3 = 0x3f800000;
      }
      if (D_00316D58 == 3) {
        func_00107C40(D_00325208,D_00308158,D_00308158);
        puVar3 = (undefined4 *)func_0009C7A0(D_00308158,((undefined *)&D_001DA960),0);
        *puVar3 = 0x3f800000;
      }
      pfVar4 = (float *)func_0009C7A0(D_00308158,((undefined *)&D_001DA980),0);
      if (*pfVar4 == D_001D27B8) {
        pfVar4 = (float *)func_0009C7A0(D_00308158,((undefined *)&D_001DA9C4),0);
        *pfVar4 = *pfVar4 + D_001D27B0;
      }
      pfVar4 = (float *)func_0009C7A0(D_00308158,((undefined *)&D_001DA970),0);
      if (*pfVar4 == D_001D27B8) {
        pfVar4 = (float *)func_0009C7A0(D_00308158,((undefined *)&D_001DA9B0),0);
        *pfVar4 = *pfVar4 + D_001D27B0;
      }
      pfVar4 = (float *)func_0009C7A0(D_00308158,((undefined *)&D_001DA960),0);
      if (*pfVar4 == D_001D27B8) {
        pfVar4 = (float *)func_0009C7A0(D_00308158,((undefined *)&D_001DA99C),0);
        *pfVar4 = *pfVar4 + D_001D27B0;
      }
      func_0009D280(D_00307DF8);
      func_000B6600(0xf);
      return;
    }
    break;
  case 0xd:
    if (D_001D2808 < D_00316944) {
      func_0009D280(D_00307DF8);
      func_000B6600(0xf);
      return;
    }
  }
  return;
}

#pragma optimize("y", on)
void func_000CA850(void)
{
    int func_0013E469(char*, char*, ...);
    int func_0009C590(char*);
    int func_00110330(int, int);
    int func_00110300(int, char*, int);
    int func_0009C7A0(int, char*, int);
    int __ftol2(...);
    extern char D_001DA93C, D_001DA92C, D_001DA920, D_001DA9D8;
    extern int D_00308158;
    extern int D_001E4A00[], D_001E4A10[];
    char buf[256];
    int i = 1;
    int n = 3;
    do {
        int j = 0;
        do {
            int p;
            j++;
            func_0013E469(buf, &D_001DA93C, i, j);
            p = func_0009C590(buf);
            func_00110330(*(int*)(p + 0x2c), 0);
            func_00110330(func_00110300(*(int*)(p + 0x2c), &D_001DA92C, 0), 1);
            func_00110330(func_00110300(*(int*)(p + 0x2c), &D_001DA920, 0), 0);
        } while (j < 7);
        func_0013E469(buf, &D_001DA9D8, i);
        func_0009C7A0(D_00308158, buf, 0);
        int k = __ftol2();
        int c = D_001E4A00[k];
        int s = D_001E4A10[k];
        int e = s + c;
        while (s < e) {
            int q;
            s++;
            func_0013E469(buf, &D_001DA93C, i, s);
            q = func_0009C590(buf);
            func_00110330(*(int*)(q + 0x2c), 1);
        }
        i++;
        n--;
    } while (n != 0);
}
#pragma optimize("", on)

void func_000CA970(void) {
  extern undefined D_00316968,D_00316990,D_00316B50; extern undefined4 D_00316964;
  int func_000CA850(...),func_001105E0(...),func_0005F310(...),func_0005CCC0(...),func_000B54A0(...),func_000B54B0(...);
  func_000CA850(); int *p=(int*)&D_00316968; char *q=(char*)&D_00316990;
  do {func_001105E0(*(int*)(*p+0x2c),q,0);++p;q+=0x40;} while((int)q<(int)&D_00316B50);
  func_001105E0(*(int*)((char*)D_00316964+0x2c),&D_00316B50,0);
  func_0005F310(0);func_0005CCC0(1);func_000B54A0(0);func_000B54B0(0);
}

void func_000CA9E0(void) {
 extern undefined4 D_00318D10,D_00318D14,D_00313B60,D_001D9B70,D_001E4A2C,D_001D2A10;
 int func_00110060(...),func_0012F0F0(...),func_0012F7A0(...),func_00011E30(...),func_001105E0(...);
 char a[64]; char tail[76]; unsigned int v[3]; float angle;
 func_00110060(*(int*)((char*)D_00318D10+0x2c),a);func_0012F0F0(a);
 v[0]=*(unsigned int*)((char*)D_00318D14+0x40);v[1]=*(unsigned int*)((char*)D_00318D14+0x44);v[2]=*(unsigned int*)((char*)D_00318D14+0x48);
 func_0012F7A0(v,a);
 angle=*(float*)&D_001D9B70-*(float*)&D_001E4A2C; angle*=*(float*)&D_001D2A10;
 *(unsigned int*)&tail[0]=0x42e60000;*(unsigned int*)&tail[4]=0x3fc90fdb;
 func_00011E30(a,tail,&angle);func_001105E0(D_00313B60,tail,1);
}

