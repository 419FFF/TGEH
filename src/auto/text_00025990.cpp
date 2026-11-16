/* 10 functions from 0x00025990 to 0x00026989, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_00025990(int a){extern int D_00307D10;int _func_000487A0(...);int _func_000A1C00(...);int _func_00116FB0(...);int*s=*(int**)(a+0x110);_func_000487A0(D_00307D10,s[0x6c/4]);_func_000A1C00(s[0x25c/4]);_func_00116FB0((int)s);}

void func_00025C00(int param_1)
{
  int func_00115100(...);
  extern undefined D_001D3600;
  extern undefined4 D_001D2BF8;
  int func_00047960(...);
  int func_0011DEF0(...);
  int func_000A1D10(...);
  extern undefined D_0000FFFF;
  int func_00056C00(...);
  int func_0011DED0(...);
  int func_000A1F50(...);
  extern undefined4 D_001E461C;
  int func_00011D20(...);
  extern undefined4 D_00307DF8;
  int func_00110060(...);
  extern undefined4 D_001D27B0;
  int func_0002EC40(...);
  extern undefined4 D_001D35FC;
  extern undefined4 D_001D35F8;
  int func_0012F730(...);
  int func_0009C7A0(...);
  extern undefined D_001D2878;
  int func_0004F290(...);
  int func_0004ECA0(...);
  int func_000A1E60(...);
  int func_00025A20(...);
  int func_0007C3F0(...);
  extern undefined4 D_001D27B8;
  int func_000259D0(...);
  int func_00045CC0(...);
  int func_00045D00(...);
  int func_00045C20(...);
  int func_00045F80(...);
  int func_00046F90(...);
  int func_0004F1D0(...);
  int func_000A2370(...);
  int func_000A22B0(...);
  int func_0004F910(...);
  int func_0004ECC0(...);
  int func_00047510(...);
  int func_000120B0(...);
  int func_0007A4D0(...);
  int func_00110330(...);
  int func_0007A5C0(...);
  int func_000F91D0(...);
  int func_00110420(...);
  int func_00110480(...);
  int func_0009D3E0(...);
  int func_0012F120(...);
  int func_000475E0(...);
  int func_0004F0F0(...);
  int func_001105E0(...);
  int func_0004F310(...);
  int func_0007C4C0(...);
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte bVar7;
  longdouble lVar8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_94;
  undefined1 local_90 [48];
  undefined1 local_60 [16];
  undefined1 local_50 [48];
  undefined1 local_20 [28];
  
  bVar7 = 0;
  piVar1 = *(int **)(param_1 + 0x110);
  if (piVar1[0x9e] == -1) {
    iVar4 = func_00115100(*(undefined4 *)(param_1 + 0x98),((undefined *)&D_001D3600));
    piVar1[0x9e] = iVar4;
  }
  if (*piVar1 == 0) {
    iVar4 = piVar1[0x27];
    if (iVar4 == 0x32) {
      if (piVar1[0x9b] != 0) {
        local_94 = piVar1[0x1e];
        piVar1[0x1e] = (int)((float)piVar1[0x1e] * D_001D2BF8);
        uVar5 = func_00047960(param_1,piVar1 + 0x1c,0,piVar1[0x22],0x21,0);
        piVar1[0x1e] = local_94;
        if ((uVar5 & 4) != 0) {
          *piVar1 = 1;
        }
      }
    }
    else if (iVar4 == 0x39) {
      if (piVar1[0x9c] != 0) {
        func_0011DEF0(piVar1[0x9c]);
      }
    }
    else if (iVar4 == 0x81) {
      if (piVar1[0x9c] != 0) {
        func_0011DEF0(piVar1[0x9c]);
      }
      *piVar1 = 9;
    }
  }
  if ((*(char *)(param_1 + 0x174) != '\0') && (*(int *)(param_1 + 0x178) == 5)) {
    if ((*piVar1 == 3) || (*piVar1 == 4)) {
      func_000A1D10(piVar1[0x99],1,0xf,((undefined *)&D_0000FFFF),0x41c00000,0x3e4ccccd);
      *piVar1 = 5;
    }
    else {
      *piVar1 = 3;
    }
    *(undefined1 *)(param_1 + 0x174) = 0;
  }
  switch(*piVar1) {
  case 0:
    func_00056C00(param_1,piVar1 + 1);
    break;
  case 1:
    func_000A1D10(piVar1[0x96],1,0,((undefined *)&D_0000FFFF),0x41400000,0x3e4ccccd);
    func_0011DED0(piVar1[0x9c]);
    *piVar1 = 2;
    piVar1[0x9d] = 0;
    goto LAB_00002a09;
  case 2:
    iVar4 = func_000A1F50(piVar1[0x96]);
    if (iVar4 != 0) {
      piVar1[0x9d] = (int)(D_001E461C + (float)piVar1[0x9d]);
      cVar3 = func_00011D20(D_00307DF8);
      if (cVar3 == '\0') {
        func_00110060(*(undefined4 *)(piVar1[0x9b] + 0x2c),local_90);
        fVar2 = D_001D27B0;
        if ((float)piVar1[0x9d] < D_001D27B0) {
          fVar2 = (float)piVar1[0x9d];
        }
        cVar3 = func_0002EC40(local_60,fVar2 * D_001D35FC + D_001D35F8,0x42480000,D_00307DF8,
                               0);
        if (cVar3 != '\0') {
          puVar6 = (undefined4 *)(D_00307DF8 + 0x150);
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          *(undefined1 *)(D_00307DF8 + 0x174) = 1;
          *(int *)(D_00307DF8 + 0x160) = param_1;
          *(undefined4 *)(D_00307DF8 + 0x178) = 10;
          local_a4 = *(undefined4 *)(D_00307DF8 + 0xe8);
          local_a0 = *(undefined4 *)(D_00307DF8 + 0xec);
          local_9c = *(undefined4 *)(D_00307DF8 + 0xf0);
          func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_50);
          func_0012F730(D_00307DF8 + 0x150,&local_a4,local_50);
          puVar6 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D2878),0);
          if (puVar6 != (undefined4 *)0x0) {
            *(undefined4 *)(D_00307DF8 + 0x16c) = *puVar6;
          }
        }
      }
      break;
    }
    func_0011DEF0(piVar1[0x9c]);
    func_0004F290(param_1);
    func_0004ECA0(param_1,piVar1 + 1);
    *piVar1 = 7;
    goto LAB_00002a09;
  case 3:
    if (piVar1[0x9c] != 0) {
      func_0011DEF0(piVar1[0x9c]);
    }
    func_0004F290(param_1);
    func_000A1D10(piVar1[0x97],1,0,((undefined *)&D_0000FFFF),0x41c00000,0x3e4ccccd);
    func_000A1E60(piVar1[0x98]);
    *piVar1 = 4;
    piVar1[0x9d] = 0x40800000;
    func_00025A20();
    func_0007C3F0(piVar1[0x9d],0xff00ff00,param_1,piVar1[0x9e]);
    break;
  case 4:
    fVar2 = (float)piVar1[0x9d] - D_001E461C;
    piVar1[0x9d] = (int)fVar2;
    if (fVar2 < D_001D27B8 == (fVar2 == D_001D27B8)) {
      iVar4 = func_000A1F50(piVar1[0x97]);
      if ((iVar4 == 0) && (iVar4 = func_000A1F50(piVar1[0x98]), iVar4 == 0)) {
        func_000A1D10(piVar1[0x98],2,0,((undefined *)&D_0000FFFF),0x41c00000,0);
      }
      break;
    }
    func_000A1D10(piVar1[0x99],1,0,((undefined *)&D_0000FFFF),0x41c00000,0x3e4ccccd);
    *piVar1 = 5;
    goto LAB_00002a09;
  case 5:
    func_000259D0();
    *piVar1 = 6;
    goto LAB_00002a09;
  case 6:
    iVar4 = func_000A1F50(piVar1[0x99]);
    if (iVar4 == 0) {
      piVar1[0x27] = 0x33;
      *piVar1 = 0;
      return;
    }
    break;
  case 7:
    *(undefined4 *)(piVar1[0x1b] + 0x600) = 0;
    piVar1[0x55] = 0;
    piVar1[0x56] = 0x40400000;
    func_00045CC0(piVar1[0x1b],piVar1 + 0x4f);
    func_00045D00(piVar1[0x1b],piVar1 + 0x4f);
    func_00045C20(piVar1[0x1b],1,0);
    func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_50);
    iVar4 = func_00045F80(piVar1[0x1b],local_20);
    if (iVar4 == 0) {
      func_00046F90(piVar1[0x1b],*(undefined4 *)piVar1[0x16],D_001E461C,piVar1[0x23],0x41200000,0
                    );
      *piVar1 = 8;
      goto _L000260EE;
    }
LAB_00002775:
    func_0004ECA0(param_1,piVar1 + 1);
    piVar1[0x27] = 0x33;
LAB_00002784:
    *piVar1 = 0;
    func_00056C00(param_1,piVar1 + 1);
    break;
  case 8:
_L000260EE:
    fVar2 = D_001E461C + (float)piVar1[0x55];
    piVar1[0x55] = (int)fVar2;
    if ((float)piVar1[0x56] <= fVar2) {
      cVar3 = func_0004F1D0(param_1);
      if (cVar3 == '\0') goto LAB_00002775;
      func_0004ECA0(param_1,piVar1 + 1);
      piVar1[0x27] = 0x31;
      goto LAB_00002784;
    }
    iVar4 = func_000A2370(param_1 + 100);
    if (iVar4 == 0) {
      puVar6 = (undefined4 *)piVar1[0x15];
      func_000A22B0(param_1 + 100,2,*puVar6,puVar6[1],puVar6[2],0x3e4ccccd);
    }
    iVar4 = func_0004F910(param_1,piVar1 + 1,piVar1[0x1b]);
    if (iVar4 == 2) {
      func_00045CC0(piVar1[0x1b],piVar1 + 0x4f);
      func_00045D00(piVar1[0x1b],piVar1 + 0x4f);
      func_00045C20(piVar1[0x1b],1,0);
      func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_50);
      iVar4 = func_00045F80(piVar1[0x1b],local_20);
      if (iVar4 != 0) {
        func_0004F290(param_1);
        func_0004ECA0(param_1,piVar1 + 1);
        piVar1[0x27] = 0x33;
        *piVar1 = 0;
        goto LAB_000028d4;
      }
      func_00046F90(piVar1[0x1b],*(undefined4 *)piVar1[0x16],D_001E461C,piVar1[0x23],0x41200000,0
                    );
      func_0004ECC0(param_1,piVar1 + 1);
    }
    else if (iVar4 == 3) {
      piVar1[0x27] = 0x80;
      *piVar1 = 0;
      lVar8 = (longdouble)
              func_00047510(*(undefined4 *)(piVar1[0x1b] + 0x608),
                             *(undefined4 *)(piVar1[0x1b] + 0x610));
      piVar1[0x4d] = (int)(float)lVar8;
      *(undefined1 *)((int)piVar1 + 0x131) = 1;
      func_0004ECC0(param_1,piVar1 + 1);
    }
    else {
LAB_000028d4:
      func_0004ECC0(param_1,piVar1 + 1);
    }
    break;
  case 9:
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x80;
    func_000A1D10(piVar1[0x9a],1,0,((undefined *)&D_0000FFFF),0x41900000,0);
    func_000120B0(param_1 + 0x150,0xbf800000,0,0);
    *piVar1 = 10;
    goto LAB_00002a09;
  case 10:
    iVar4 = func_000A1F50(piVar1[0x9a]);
    if (iVar4 == 0) {
      *piVar1 = 0xb;
      func_0007A4D0(param_1,param_1);
      func_00110330(*(undefined4 *)(param_1 + 0x2c),0);
      piVar1[0x9d] = 0x40000000;
    }
    break;
  case 0xb:
    if (piVar1[0x9d] != -0x40800000) {
      fVar2 = (float)piVar1[0x9d] - D_001E461C;
      piVar1[0x9d] = (int)fVar2;
      if (fVar2 < D_001D27B8 != (fVar2 == D_001D27B8)) {
        func_0007A5C0(*(undefined4 *)(param_1 + 0x2c),param_1);
        piVar1[0x9d] = -0x40800000;
        iVar4 = func_000F91D0(*(undefined4 *)(*(int *)(param_1 + 0x20) + 8));
        func_00110420(*(int *)(param_1 + 0x2c),**(undefined4 **)(*(int *)(param_1 + 0x2c) + 0x2c));
        func_00110480(*(undefined4 *)(iVar4 + 0xe0),*(undefined4 *)(param_1 + 0x2c),8);
        func_0009D3E0(param_1);
        *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xff7f | 0x100;
      }
    }
  }
  if (*piVar1 != 0) {
LAB_00002a09:
    func_0012F120(local_90);
    local_a4 = *(undefined4 *)(param_1 + 0xe8);
    local_9c = *(undefined4 *)(param_1 + 0xf0);
    local_a0 = 0;
    func_000475E0(local_90,&local_a4,piVar1 + 0x4f,piVar1[0x57],piVar1 + 0x52);
    func_0004F0F0(param_1,local_90,piVar1 + 1);
    func_001105E0(*(undefined4 *)(param_1 + 0x2c),local_90,1);
    if (*(char *)(param_1 + 0x174) != '\0') {
      func_0004F310(param_1,piVar1 + 1);
      func_000259D0();
      func_0007C4C0(param_1);
      *piVar1 = 0;
    }
  }
  return;
}

void func_00026970(int param_1)
{
  int func_00116FB0(...);
  func_00116FB0(*(undefined4 *)(param_1 + 4));
  func_00116FB0(param_1);
  return;
}
