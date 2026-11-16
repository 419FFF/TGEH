/* 7 functions from 0x00022020 to 0x00022D6F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00022020(int param_1)
{
  int func_0012E910(...);
  extern undefined4 D_001D27B8;
  int func_0007E470(...);
  int func_00047960(...);
  int func_00021E40(...);
  extern undefined4 D_00307DF8;
  int func_00110060(...);
  int func_00045D00(...);
  int func_00045C20(...);
  int func_00045F80(...);
  int func_00046F90(...);
  extern undefined4 D_001E461C;
  int func_000492F0(...);
  int func_00046300(...);
  int func_0009D3E0(...);
  int func_000A28D0(...);
  int func_000A2910(...);
  int func_000A2950(...);
  int func_000A40A0(...);
  int func_000A2890(...);
  int func_000A2850(...);
  extern undefined4 D_001E4618;
  extern undefined4 D_001D290C;
  extern undefined4 D_001D2BF8;
  extern undefined4 D_001D27B0;
  int func_00021F20(...);
  extern undefined D_002ED37C;
  int func_001313C0(...);
  int func_000A4120(...);
  int func_00107C40(...);
  extern undefined4 D_00325164;
  extern undefined4 D_00308158;
  int func_0008A230(...);
  int func_0012F120(...);
  int func_001105E0(...);
  extern undefined4 D_001D3330;
  int func_0008A270(...);
  int func_000475E0(...);
  int func_0012E6D0(...);
  int func_0012E9D0(...);
  extern undefined4 D_001D280C;
  int func_00047F00(...);
  int func_00048240(...);
  int *piVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  longdouble lVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [5];
  undefined4 local_8c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_5c [12];
  undefined1 local_50 [48];
  undefined1 local_20 [28];
  
  piVar8 = *(int **)(param_1 + 0x110);
  if (*(char *)((int)piVar8 + 0x3d) != '\0') {
    local_ac = *(float *)(param_1 + 0xf4);
    local_a8 = *(undefined4 *)(param_1 + 0xfc);
    lVar6 = (longdouble)func_0012E910(&local_ac);
    piVar8[0x12] = (int)(float)(lVar6 + lVar6);
    if (lVar6 + lVar6 == (longdouble)D_001D27B8) {
      local_ac = *(float *)(param_1 + 0x30);
      local_a8 = *(undefined4 *)(param_1 + 0x38);
      lVar6 = (longdouble)func_0012E910(&local_ac);
      piVar8[0x12] = (int)(float)(lVar6 + lVar6);
    }
    *(undefined1 *)((int)piVar8 + 0x3d) = 0;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    func_0007E470(param_1);
  }
  switch(*piVar8) {
  case 0:
    *piVar8 = 1;
    *(undefined4 *)(piVar8[3] + 0x600) = 0;
    goto LAB_000020ce;
  case 1:
    uVar4 = func_00047960(param_1,piVar8 + 0x15,piVar8[0x14],0,0x18,0);
    if ((uVar4 & 3) != 0) {
      *piVar8 = 2;
    }
LAB_000020ce:
    func_00021E40(param_1,D_00307DF8);
    break;
  case 2:
    func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_50);
    func_00045D00(piVar8[3],piVar8 + 9);
    func_00045C20(piVar8[3],1,1);
    iVar9 = func_00045F80(piVar8[3],local_20);
    if (iVar9 == 0) {
      func_00046F90(piVar8[3],*(undefined4 *)piVar8[0x18],D_001E461C,piVar8[0x12],0x3f000000,0);
      *piVar8 = 3;
      func_00021E40(param_1,D_00307DF8);
    }
    else {
      *piVar8 = 1;
      func_00021E40(param_1,D_00307DF8);
    }
    break;
  case 3:
    iVar9 = func_000492F0(piVar8[3],piVar8 + 9,piVar8 + 0x10);
    if (iVar9 != 0) {
      func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_50);
      func_00045D00(piVar8[3],piVar8 + 9);
      func_00045C20(piVar8[3],1,1);
      iVar9 = func_00045F80(piVar8[3],local_20);
      if (iVar9 == 0) {
        func_00046F90(piVar8[3],*(undefined4 *)piVar8[0x18],D_001E461C,piVar8[0x12],0x3f000000,0)
        ;
        func_00021E40(param_1,D_00307DF8);
        break;
      }
      *piVar8 = 4;
    }
    func_00021E40(param_1,D_00307DF8);
    break;
  case 4:
    func_00045D00(piVar8[3],piVar8 + 9);
    func_00045C20(piVar8[3],1,0);
    iVar9 = func_00046300(piVar8[3],piVar8 + 6);
    if (iVar9 == 0) {
      func_00046F90(piVar8[3],*(undefined4 *)piVar8[0x19],D_001E461C,piVar8[0x12],0x7f7fffff,
                     piVar8 + 4);
      *piVar8 = 5;
    }
    func_00021E40(param_1,D_00307DF8);
    break;
  case 5:
    uVar4 = func_00047960(param_1,piVar8 + 0x15,piVar8[0x14],0,0x18,0);
    if ((uVar4 & 3) != 0) {
      *piVar8 = 2;
    }
    iVar9 = func_000492F0(piVar8[3],piVar8 + 9,piVar8 + 0x10);
    if (iVar9 != 2) {
      *(undefined4 *)(piVar8[3] + 0x5fc) = 0;
      break;
    }
    *piVar8 = 0;
    goto LAB_000022f2;
  case 6:
    func_0009D3E0(param_1);
    break;
  case 7:
    switch(piVar8[0x1a]) {
    case 1:
      func_000A28D0(1);
      break;
    case 2:
      func_000A2910(1);
      break;
    case 3:
      func_000A2950(1);
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      func_000A40A0(piVar8[0x1a] + -4,1);
      break;
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x16:
      func_000A2890(1);
      break;
    case 0xe:
      func_000A2850(1);
    }
    *piVar8 = 8;
  case 8:
    fVar3 = (float)D_001E4618;
    if (D_001E4618 < 0) {
      fVar3 = fVar3 + D_001D290C;
    }
    fVar3 = D_001D2BF8 / fVar3 + (float)piVar8[0x1b];
    piVar8[0x1b] = (int)fVar3;
    if (D_001D27B0 < fVar3) {
      *piVar8 = 9;
      piVar8[0x1b] = 0x3f800000;
    }
    func_00021F20(param_1);
    break;
  case 9:
    pfVar2 = *(float **)(((undefined *)&D_002ED37C) + piVar8[0x1a] * 4);
    if (pfVar2 != (float *)0x0) {
      local_ac = *pfVar2 + D_001D27B0;
      *pfVar2 = local_ac;
      iVar9 = piVar8[0x1a];
      if (iVar9 == 2) {
        uVar5 = func_001313C0(local_ac);
        func_000A4120(uVar5);
      }
      else if ((3 < iVar9) && (iVar9 < 8)) {
        func_000A40A0(iVar9 + -4,2);
      }
    }
    func_00107C40(D_00325164,D_00308158,param_1);
    func_00107C40(D_00325164,param_1,param_1);
    func_0008A230(*(undefined4 *)(param_1 + 0x2c),param_1);
    func_0012F120(local_a0);
    local_a0[0] = 0x38d1b717;
    local_8c = 0x38d1b717;
    local_78 = 0x38d1b717;
    local_70 = 0;
    local_6c = 0xc7435000;
    local_68 = 0;
    func_001105E0(*(undefined4 *)(param_1 + 0x2c),local_a0,0);
    *piVar8 = 10;
    piVar8[0x1b] = 0;
    return;
  case 10:
    fVar3 = (float)D_001E4618;
    if (D_001E4618 < 0) {
      fVar3 = fVar3 + D_001D290C;
    }
    fVar3 = D_001D2BF8 / fVar3 + (float)piVar8[0x1b];
    piVar8[0x1b] = (int)fVar3;
    if (D_001D3330 < fVar3) {
      func_0008A270(*(undefined4 *)(param_1 + 0x2c),param_1);
      *piVar8 = 6;
      return;
    }
  }
  if (*piVar8 < 6) {
LAB_000022f2:
    func_0012F120(local_a0);
    local_ac = *(float *)(param_1 + 0xe8);
    local_a4 = *(undefined4 *)(param_1 + 0xf0);
    piVar1 = piVar8 + 9;
    local_a8 = 0;
    func_000475E0(local_a0,&local_ac,piVar1,piVar8[0x10],piVar8 + 0xc);
    func_00110060(*(undefined4 *)(param_1 + 0x2c),local_50);
    func_0012E6D0(local_5c,&local_70,local_20);
    lVar6 = (longdouble)func_0012E9D0(local_5c);
    if ((longdouble)D_001D280C < lVar6) {
      if ((*(byte *)(param_1 + 0x10) & 0x20) == 0) {
        if ((char)piVar8[0xf] == '\0') {
          iVar7 = piVar8[0x13];
          iVar9 = 0;
          piVar8 = (int *)0x0;
        }
        else {
          iVar9 = piVar8[0x11];
          iVar7 = piVar8[0x13];
          piVar8 = piVar8 + 0xc;
        }
        func_00047F00(param_1,local_a0,piVar1,iVar7,piVar8,0,iVar9);
      }
      else {
        func_00048240(param_1,local_a0,piVar1,*(undefined4 *)(piVar8[3] + 8),piVar8[0x13]);
      }
    }
    func_001105E0(*(undefined4 *)(param_1 + 0x2c),local_a0,1);
  }
  return;
}

void func_00022650(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0xc));
  func_00116FB0(iVar1);
  return;
}

void func_00022780(int a,int b,int c,int d){int func_00022680(...);int func_0012EE00(...);float func_0012EA60(...);int func_0012E6D0(...);int func_0012E5F0(...);char tmp[12];func_00022680(a,a,c,d);func_00022680(a+16,a+16,c,d);func_0012EE00(a+32,a,a+16);(void)func_0012EA60(a+32);func_0012E6D0(tmp,a+48,b);func_00022680(tmp,tmp,c,d);func_0012E5F0(a+48,tmp,b);}

undefined4 func_00022BD0(void)
{
  extern undefined4 D_002EB5DC;
  int func_00014D70(...);
  extern undefined4 D_002EB5D8;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (D_002EB5DC != 0) {
    do {
      cVar1 = func_00014D70(*(undefined4 *)(D_002EB5D8 + iVar2 * 4));
      if (cVar1 != '\0') {
        return *(undefined4 *)(D_002EB5D8 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != D_002EB5DC);
  }
  return 0;
}

