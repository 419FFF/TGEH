/* 6 functions from 0x00017A20 to 0x000188D9, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

#pragma optimize("y", on)
void func_00017FB0(int param_1) { int func_000487A0(...),func_000A1C00(...),func_00116FB0(...); extern undefined4 D_00307D10; int p=*(int*)(param_1+0x110); func_000487A0(D_00307D10,*(undefined4*)(p+0x6c));func_000A1C00(*(undefined4*)(p+0x25c));func_000A1C00(*(undefined4*)(p+0x258));func_00116FB0(p); }
undefined4 func_000181C0(void)
{
  extern undefined4 D_002EB5B4;
  int func_00014D70(...);
  extern undefined4 D_002EB5B0;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (D_002EB5B4 != 0) {
    do {
      cVar1 = func_00014D70(*(undefined4 *)(D_002EB5B0 + iVar2 * 4));
      if (cVar1 != '\0') {
        return *(undefined4 *)(D_002EB5B0 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != D_002EB5B4);
  }
  return 0;
}

void func_00018200(int param_1)
{
  int func_000A22B0(...);
  int func_00115100(...);
  extern undefined D_001D2C90;
  extern undefined D_001D2C88;
  extern undefined D_001D2C80;
  extern undefined D_001D2C78;
  extern undefined D_001D2C70;
  int func_0007E470(...);
  int func_00047960(...);
  extern undefined4 D_001D27B8;
  int func_00131210(...);
  extern undefined4 D_001D27B0;
  extern undefined4 D_001D2C6C;
  extern undefined4 D_001D2C00;
  extern undefined4 D_001D2BF4;
  int func_0012F120(...);
  int func_0012FCF0(...);
  extern undefined4 D_001D2BFC;
  int func_001155F0(...);
  int func_000A1D10(...);
  int func_00110060(...);
  int func_000A1EE0(...);
  extern undefined4 D_001D2C68;
  int func_00115170(...);
  int func_0012F2E0(...);
  int func_00130590(...);
  int func_00110420(...);
  extern undefined4 D_0030809C;
  int func_000F8F40(...);
  int func_00110480(...);
  int func_001105E0(...);
  int func_00110000(...);
  int func_00110330(...);
  int func_000F8FA0(...);
  int func_00014DB0(...);
  int func_000A1F50(...);
  extern undefined D_0000FFFF;
  int func_0007C3F0(...);
  int func_00047C90(...);
  int func_00047510(...);
  extern undefined4 D_001D286C;
  extern undefined4 D_001D2874;
  extern undefined4 D_001D2868;
  extern undefined4 D_001E461C;
  extern undefined4 D_001D2C64;
  int func_0007A4D0(...);
  int func_0007A5C0(...);
  int func_0009D3E0(...);
  int func_000120B0(...);
  int func_0007C4C0(...);
  volatile int marker0 = 0;
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longdouble lVar9;
  float local_134;
  undefined4 local_130 [2];
  undefined4 local_128;
  int local_124 [5];
  undefined1 local_110 [64];
  undefined1 local_d0 [64];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  piVar1 = *(int **)(param_1 + 0x110);
  if (*(char *)((int)piVar1 + 0x4a) == '\0') {
    puVar2 = (undefined4 *)piVar1[1];
    *(undefined1 *)((int)piVar1 + 0x4a) = 1;
    func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0);
    *piVar1 = 1;
    iVar4 = func_00115100(*(undefined4 *)(*(int *)(piVar1[2] + 0x18) + 0x34),((undefined *)&D_001D2C90));
    piVar1[0xc] = iVar4;
    iVar4 = func_00115100(*(undefined4 *)(*(int *)(piVar1[2] + 0x18) + 0x34),((undefined *)&D_001D2C88));
    piVar1[0xd] = iVar4;
    iVar4 = func_00115100(*(undefined4 *)(*(int *)(piVar1[2] + 0x18) + 0x34),((undefined *)&D_001D2C80));
    piVar1[0xe] = iVar4;
    iVar4 = func_00115100(*(undefined4 *)(*(int *)(piVar1[2] + 0x18) + 0x34),((undefined *)&D_001D2C78));
    piVar1[0xf] = iVar4;
    iVar4 = func_00115100(*(undefined4 *)(*(int *)(piVar1[2] + 0x18) + 0x34),((undefined *)&D_001D2C70));
    piVar1[0x10] = iVar4;
    iVar4 = func_00115100(*(undefined4 *)(*(int *)(piVar1[2] + 0x18) + 0x34),((undefined *)&D_001D2C90));
    piVar1[0x11] = iVar4;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x60) == 0) {
    func_0007E470(param_1);
  }
  switch(*piVar1) {
  case 1:
    uVar5 = func_00047960(param_1,piVar1 + 6,0,0,0x10,0);
    if ((uVar5 & 1) != 0) {
      if ((float)piVar1[10] != D_001D27B8) {
        lVar9 = (longdouble)func_00131210(piVar1[10]);
        lVar9 = ((longdouble)D_001D27B0 - lVar9 * (longdouble)D_001D2C6C) *
                (longdouble)D_001D2C00 + (longdouble)D_001D2BF4;
        if ((longdouble)(float)piVar1[10] <= lVar9) {
          if (-lVar9 <= (longdouble)(float)piVar1[10]) {
            piVar1[10] = 0;
          }
          else {
            piVar1[10] = (int)(float)(lVar9 + (longdouble)(float)piVar1[10]);
          }
        }
        else {
          piVar1[10] = (int)(float)((longdouble)(float)piVar1[10] - lVar9);
        }
        func_0012F120(local_110);
        func_0012FCF0(local_110,(float)piVar1[10] * D_001D2BFC);
        piVar8 = piVar1 + 0xd;
        local_134 = 7.00649e-45;
        do {
          func_001155F0(*(undefined4 *)(param_1 + 0x98),*piVar8,local_110);
          piVar8 = piVar8 + 1;
          local_134 = (float)((int)local_134 + -1);
        } while (local_134 != 0.0);
      }
    }
    else {
      *piVar1 = 2;
      func_000A1D10(piVar1[2],1,0,0x80,0x41c00000,0x3dcccccd);
      *(undefined1 *)((int)piVar1 + 0x49) = 0;
    }
    break;
  case 2:
    func_00110060(*(undefined4 *)(param_1 + 0x2c),local_90);
    if (*(char *)((int)piVar1 + 0x49) == '\0') {
      lVar9 = (longdouble)func_000A1EE0(*(undefined4 *)(param_1 + 0x84));
      if ((longdouble)D_001D2C68 <= lVar9) {
        func_00115170(*(undefined4 *)(*(int *)(piVar1[2] + 0x18) + 0x34),piVar1[0xc],local_110);
        func_0012F2E0(local_110,local_90);
        func_00130590(local_110);
        do {
          iVar6 = func_000181C0();
          local_124[iVar4] = iVar6;
          if (iVar6 == 0) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 5);
        while (iVar4 != 0) {
          iVar4 = iVar4 + -1;
          iVar6 = local_124[iVar4];
          iVar7 = *(int *)(iVar6 + 0x110);
          *(char *)(iVar7 + 0x5c) = (char)piVar1[0x12];
          *(undefined4 *)(iVar7 + 0x48) = 0x40000000;
          *(int *)(iVar7 + 0x50) = local_124[0];
          *(int *)(iVar7 + 0x54) = iVar4;
          func_00110420(*(undefined4 *)(iVar6 + 0x2c),D_0030809C);
          iVar7 = func_000F8F40(*(undefined4 *)(param_1 + 0x2c));
          func_00110480(*(undefined4 *)(iVar7 + 0xe0),*(undefined4 *)(iVar6 + 0x2c),8);
          func_00110060(*(undefined4 *)(param_1 + 0x2c),local_50);
          func_001105E0(*(undefined4 *)(iVar6 + 0x2c),local_110,0);
          func_00110000(*(undefined4 *)(iVar6 + 0x2c));
          func_00110330(*(undefined4 *)(iVar6 + 0x2c),1);
          func_000F8FA0(iVar6);
          func_00014DB0(iVar6);
        }
        *(undefined1 *)((int)piVar1 + 0x49) = 1;
      }
    }
    else {
      iVar4 = func_000A1F50(piVar1[2]);
      if (iVar4 == 0) {
        func_000A1D10(piVar1[3],2,0,((undefined *)&D_0000FFFF),0x41c00000,0);
        *piVar1 = 3;
        piVar1[9] = 0x40400000;
        func_0007C3F0(0x408c0000,0xff00ff00,param_1,piVar1[0xc]);
        break;
      }
    }
    func_00047C90(param_1,0,local_130);
    lVar9 = (longdouble)func_00131210(piVar1[10]);
    lVar9 = ((longdouble)D_001D27B0 - lVar9 * (longdouble)D_001D2C6C) * (longdouble)D_001D2C00
            + (longdouble)D_001D2BF4;
    local_134 = (float)lVar9;
    if (lVar9 < (longdouble)D_001D2BF4) {
      local_134 = 0.05;
    }
    lVar9 = (longdouble)func_00047510(local_130[0],local_128);
    lVar9 = lVar9 - (longdouble)(float)piVar1[0xb];
    if (lVar9 <= (longdouble)D_001D286C) {
      if (lVar9 < (longdouble)D_001D2874) {
        lVar9 = lVar9 + (longdouble)D_001D2868;
      }
    }
    else {
      lVar9 = lVar9 - (longdouble)D_001D2868;
    }
    if (lVar9 - (longdouble)(float)piVar1[10] <= (longdouble)local_134) {
      if (lVar9 - (longdouble)(float)piVar1[10] < -(longdouble)local_134) {
        lVar9 = (longdouble)(float)piVar1[10] - (longdouble)local_134;
      }
    }
    else {
      lVar9 = (longdouble)local_134 + (longdouble)(float)piVar1[10];
    }
    piVar1[10] = (int)(float)lVar9;
    func_0012F120(local_d0);
    func_0012FCF0(local_d0,(float)piVar1[10] * D_001D2BFC);
    piVar8 = piVar1 + 0xd;
    local_134 = 7.00649e-45;
    do {
      func_001155F0(*(undefined4 *)(param_1 + 0x98),*piVar8,local_d0);
      piVar8 = piVar8 + 1;
      local_134 = (float)((int)local_134 + -1);
    } while (local_134 != 0.0);
    break;
  case 3:
    fVar3 = (float)piVar1[9] - D_001E461C;
    piVar1[9] = (int)fVar3;
    if ((fVar3 < D_001D27B8 != (fVar3 == D_001D27B8)) &&
       (lVar9 = (longdouble)func_000A1EE0(piVar1[3]), (longdouble)D_001D2C64 < lVar9)) {
      func_000A1D10(piVar1[2],1,0x80,((undefined *)&D_0000FFFF),0x41c00000,0x3dcccccd);
      *piVar1 = 4;
    }
    break;
  case 4:
    iVar4 = func_000A1F50(piVar1[2]);
    if (iVar4 == 0) {
      puVar2 = (undefined4 *)piVar1[1];
      func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0);
      *piVar1 = 1;
    }
    break;
  case 5:
    if ((*(byte *)(*(int *)(param_1 + 0x2c) + 0x20) & 1) == 0) {
      iVar4 = func_000A1F50(piVar1[4]);
      if (iVar4 == 0) {
        func_00110330(*(undefined4 *)(param_1 + 0x2c),0);
        func_0007A4D0(param_1,param_1);
        piVar1[9] = 0x40000000;
      }
    }
    else {
      fVar3 = (float)piVar1[9] - D_001E461C;
      piVar1[9] = (int)fVar3;
      if (fVar3 < D_001D27B8 != (fVar3 == D_001D27B8)) {
        func_0007A5C0(*(undefined4 *)(param_1 + 0x2c),param_1);
        *(undefined1 *)(param_1 + 0x175) = 0;
        *piVar1 = 6;
      }
    }
    break;
  case 6:
    func_0009D3E0(param_1);
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xff7f | 0x100;
  }
  if ((*(char *)(param_1 + 0x174) != '\0') &&
     (((*(undefined1 *)(param_1 + 0x174) = 0, *(int *)(param_1 + 0x178) == 8 || (*piVar1 == 3)) ||
      (*piVar1 == 4)))) {
    *(undefined4 *)piVar1[5] = 0;
    func_000120B0(param_1 + 0x150,0xbf800000,0,0);
    func_000A1D10(piVar1[4],1,0,((undefined *)&D_0000FFFF),0x41c00000,0x3e4ccccd);
    *piVar1 = 5;
    func_0007C4C0(param_1);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x80;
  }
  return;
}

void func_00018880(int param_1) {
 int func_000A1C00(...),func_00116FB0(...); extern undefined4 D_002EB5B8,D_002EB5B0,D_002EB5B4; int p=*(int*)(param_1+0x110);
 func_000A1C00(*(undefined4*)(p+8));func_000A1C00(*(undefined4*)(p+0x10));func_000A1C00(*(undefined4*)(p+0xc));func_00116FB0(p);
 D_002EB5B8--; if(D_002EB5B8==0){func_00116FB0(D_002EB5B0);D_002EB5B0=0;D_002EB5B4=0;}
}

