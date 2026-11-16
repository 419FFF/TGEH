/* 13 functions from 0x00044350 to 0x000452E8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

uint func_00044350(int param_1)
{
  int func_00043A40(...);
  extern undefined4 D_001E461C;
  extern undefined4 D_001D27EC;
  int func_000A22B0(...);
  int func_00131760(...);
  int func_0012E6D0(...);
  int func_0012E9D0(...);
  int func_00131310(...);
  int func_0004F9B0(...);
  int func_00045D00(...);
  int func_00045CC0(...);
  int func_00045C20(...);
  int func_00044020(...);
  int func_00043AB0(...);
  int func_00046F90(...);
  int func_000492F0(...);
  int func_00047510(...);
  int func_000471B0(...);
  int func_00047040(...);
  int func_000A2370(...);
  int func_0012ED20(...);
  int func_0012E5F0(...);
  int func_00047260(...);
  int func_00106150(...);
  int func_00012070(...);
  extern undefined4 D_001D35A0;
  extern undefined4 D_001D359C;
  int func_0012F0F0(...);
  int func_0012FCF0(...);
  int func_0012F610(...);
  int func_0012ECA0(...);
  int func_0012E590(...);
  int func_0012E650(...);
  int func_0012F120(...);
  int func_000475E0(...);
  int func_0004F0F0(...);
  int func_001105E0(...);
  int func_00106410(...);
  int func_00106070(...);
  uint *puVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longdouble lVar10;
  longdouble lVar11;
  uint *puVar12;
  float local_d8 [3];
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined1 local_c0 [12];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  puVar1 = *(uint **)(param_1 + 0x110);
  func_00043A40(local_d8);
  if ((float)puVar1[0x1c] < (float)puVar1[0x1c6]) {
    puVar1[0x1c6] = (uint)((float)puVar1[0x1c6] - D_001E461C * (float)puVar1[0x1c] * D_001D27EC)
    ;
  }
  switch(*puVar1) {
  case 0:
    *(undefined4 *)(puVar1[0x1b] + 0x600) = 0;
    puVar2 = (undefined4 *)puVar1[2];
    *puVar1 = 1;
    func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
    puVar1[0x55] = 0;
    lVar11 = (longdouble)func_00131760();
    puVar1[0x56] = (uint)(float)(lVar11 * (longdouble)(float)puVar1[0x1f] +
                                (longdouble)(float)puVar1[0x20]);
    break;
  case 1:
    func_0012E6D0(&local_cc,local_c0,puVar1 + 0x4f);
    lVar11 = (longdouble)func_0012E9D0(&local_cc);
    lVar10 = (longdouble)(float)puVar1[0x1c] * (longdouble)(float)puVar1[0x1c];
    if ((lVar11 < lVar10 == (lVar11 == lVar10)) ||
       (lVar11 <= (longdouble)local_d8[0] * (longdouble)local_d8[0])) {
      *(undefined4 *)(puVar1[0x1b] + 0x600) = 0;
      if ((*(byte *)(param_1 + 0x10) & 0x20) == 0) {
        puVar1[0x55] = (uint)(D_001E461C + (float)puVar1[0x55]);
      }
      if ((((float)puVar1[0x56] < (float)puVar1[0x55]) &&
          (uVar8 = func_00131310(), (uVar8 & 1) == 0)) &&
         (cVar5 = func_0004F9B0(param_1,puVar1 + 1,0), cVar5 != '\0')) {
        *puVar1 = 2;
      }
    }
    else {
      *puVar1 = 3;
    }
    break;
  case 2:
    func_0012E6D0(&local_cc,local_c0,puVar1 + 0x4f);
    lVar11 = (longdouble)func_0012E9D0(&local_cc);
    lVar10 = (longdouble)(float)puVar1[0x1c] * (longdouble)(float)puVar1[0x1c];
    if ((lVar11 < lVar10 != (lVar11 == lVar10)) &&
       ((longdouble)local_d8[0] * (longdouble)local_d8[0] < lVar11)) {
      *puVar1 = 3;
      break;
    }
    goto LAB_00002748;
  case 3:
    func_00045D00(puVar1[0x1b],puVar1 + 0x4f);
    func_00045CC0(puVar1[0x1b],puVar1 + 0x4f);
    func_00045C20(puVar1[0x1b],1,0);
    cVar5 = func_00044020(param_1,puVar1,local_c0);
    if (cVar5 != '\0') {
      puVar2 = (undefined4 *)puVar1[0x13];
      func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
      *puVar1 = 7;
      break;
    }
    iVar7 = func_00043AB0(param_1,puVar1[0x1b],local_c0,local_d8);
    if (iVar7 == 0) {
      *puVar1 = 4;
      func_00046F90(puVar1[0x1b],*(undefined4 *)puVar1[0x14],D_001E461C,puVar1[0x23],0x3f000000,0
                    );
      puVar2 = (undefined4 *)puVar1[0x13];
      func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
      break;
    }
    goto LAB_00002754;
  case 4:
    cVar5 = func_00044020(param_1,puVar1,local_c0);
    if (cVar5 != '\0') {
      *puVar1 = 7;
      break;
    }
    puVar12 = puVar1 + 0x4f;
    iVar7 = func_000492F0(puVar1[0x1b],puVar12,puVar1 + 0x57);
    if (0 < iVar7) {
      if (iVar7 < 3) {
        func_00045D00(puVar1[0x1b],puVar12);
        func_00045CC0(puVar1[0x1b],puVar12);
        func_00045C20(puVar1[0x1b],1,0);
        iVar7 = func_00043AB0(param_1,puVar1[0x1b],local_c0,local_d8);
        if (iVar7 == 0) {
          func_00046F90(puVar1[0x1b],*(undefined4 *)puVar1[0x14],D_001E461C,puVar1[0x23],
                         0x3f000000,0);
        }
        else {
          *puVar1 = 0;
        }
      }
      else if (iVar7 == 3) {
        lVar11 = (longdouble)
                 func_00047510(*(undefined4 *)(puVar1[0x1b] + 0x608),
                                *(undefined4 *)(puVar1[0x1b] + 0x610));
        puVar1[0x4d] = (uint)(float)lVar11;
        *(undefined1 *)((int)puVar1 + 0x131) = 1;
        *puVar1 = 8;
      }
    }
    cVar5 = func_000471B0(puVar1[0x1b],puVar12,0);
    if (cVar5 == '\0') break;
    func_0012E6D0(local_a8,local_c0,puVar12);
    lVar11 = (longdouble)func_0012E9D0(local_a8);
    if ((longdouble)(float)puVar1[0x1c] * (longdouble)(float)puVar1[0x1c] < lVar11) {
      func_00047040(puVar1[0x1b]);
    }
    else {
      if ((longdouble)local_d8[0] * (longdouble)local_d8[0] <= lVar11) break;
      func_00047040(puVar1[0x1b]);
    }
    goto LAB_00002754;
  case 5:
LAB_00002748:
    iVar7 = func_000A2370(param_1 + 100);
    if (iVar7 != 0) break;
LAB_00002754:
    *puVar1 = 0;
    break;
  case 7:
    puVar12 = puVar1 + 0x4f;
    func_00045D00(puVar1[0x1b],puVar12);
    func_00045CC0(puVar1[0x1b],puVar12);
    func_00045C20(puVar1[0x1b],1,0);
    cVar5 = func_000471B0(puVar1[0x1b],puVar12,0);
    if (cVar5 == '\0') {
      func_0012ED20(local_a8,puVar1 + 0x1c7,D_001E461C * *(float *)puVar1[0x14]);
      func_0012E5F0(&local_cc,puVar12,local_a8);
      cVar5 = func_00047260(param_1,*(undefined4 *)(puVar1[0x1b] + 8),&local_cc,local_9c);
      if (cVar5 == '\0') {
        *puVar12 = local_cc;
        puVar1[0x50] = local_c8;
        puVar1[0x51] = local_c4;
      }
      else {
        fVar3 = D_001E461C * *(float *)puVar1[0x14] + (float)puVar1[0x1cb];
        puVar1[0x1cb] = (uint)fVar3;
        if ((float)puVar1[0x1ca] < fVar3) {
          iVar7 = *(int *)(puVar1[0x1b] + 8);
          local_d8[0] = 0.0;
          if (*(int *)(iVar7 + 0xf4) < 1) {
LAB_000023b1:
            *(int *)(puVar1[0x1b] + 8) = iVar7;
          }
          else {
            do {
              *(undefined4 *)(puVar1[0x1b] + 8) =
                   *(undefined4 *)(*(int *)(iVar7 + 0xf8) + (int)local_d8[0] * 4);
              func_00045D00(puVar1[0x1b],puVar12);
              func_00045CC0(puVar1[0x1b],puVar12);
              func_00045C20(puVar1[0x1b],1,0);
              cVar5 = func_000471B0(puVar1[0x1b],puVar12,0);
              if (cVar5 != '\0') {
                if ((char)puVar1[0x4c] != -1) {
                  *(undefined4 *)(*(int *)(iVar7 + 0xd8) + (char)puVar1[0x4c] * 8) = 0;
                  uVar4 = func_00106150(*(undefined4 *)
                                          (*(int *)(iVar7 + 0xf8) + (int)local_d8[0] * 4),param_1,1)
                  ;
                  *(undefined1 *)(puVar1 + 0x4c) = uVar4;
                }
                iVar7 = *(int *)(*(int *)(iVar7 + 0xf8) + (int)local_d8[0] * 4);
                goto LAB_000023b1;
              }
              local_d8[0] = (float)((int)local_d8[0] + 1);
            } while ((int)local_d8[0] < *(int *)(iVar7 + 0xf4));
            *(int *)(puVar1[0x1b] + 8) = iVar7;
          }
        }
      }
    }
    else {
      if ((char)puVar1[0x1cd] != -1) {
        *(undefined4 *)(*(int *)(puVar1[0x1cc] + 0xd8) + (char)puVar1[0x1cd] * 8) = 0;
        *(undefined1 *)(puVar1 + 0x1cd) = 0xff;
      }
      *puVar1 = 4;
      puVar1[0x1c6] = (uint)((float)puVar1[0x1c] + (float)puVar1[0x1c]);
    }
    break;
  case 8:
    lVar11 = (longdouble)func_00012070(puVar1[0x57],puVar1[0x4d]);
    if (*(char *)((int)puVar1 + 0x131) == '\0') {
      lVar11 = lVar11 * (longdouble)D_001D27EC;
    }
    if (lVar11 <= (longdouble)D_001D35A0) {
      if ((longdouble)D_001D359C <= lVar11) {
        puVar12 = puVar1 + 0x4f;
        cVar5 = func_000471B0(puVar1[0x1b],puVar12,0);
        if (cVar5 != '\0') {
          local_d8[0] = 0.0;
          local_d8[1] = 0.0;
          local_d8[2] = 1.0;
          func_0012F0F0(local_50);
          func_0012FCF0(local_50,puVar1[0x57]);
          func_0012F610(local_d8,local_50);
          func_0012ECA0(local_d8,D_001E461C * *(float *)puVar1[0x14]);
          func_0012E590(puVar12,local_d8);
          cVar5 = func_000471B0(puVar1[0x1b],puVar12,0);
          if (cVar5 == '\0') {
            func_0012E650(puVar12,local_d8);
          }
        }
        *(undefined4 *)(puVar1[0x1b] + 0x600) = 0;
        puVar1[0x57] = puVar1[0x4d];
        *puVar1 = -(uint)(*(char *)((int)puVar1 + 0x131) != '\0') & 3;
      }
      else {
        puVar1[0x57] = (uint)((float)puVar1[0x57] - D_001D35A0);
      }
    }
    else {
      puVar1[0x57] = (uint)((float)puVar1[0x57] + D_001D35A0);
    }
  }
  func_0012F120(local_90);
  local_ac = *(undefined4 *)(param_1 + 0xf0);
  local_b4 = *(undefined4 *)(param_1 + 0xe8);
  local_b0 = 0;
  if ((char)puVar1[0x26] == '\0') {
    puVar12 = (uint *)0x0;
  }
  else {
    puVar12 = puVar1 + 0x52;
  }
  func_000475E0(local_90,&local_b4,puVar1 + 0x4f,puVar1[0x57],puVar12);
  func_0004F0F0(param_1,local_90,puVar1 + 1);
  func_001105E0(*(undefined4 *)(param_1 + 0x2c),local_90,1);
  uVar8 = 0;
  if (puVar1[0x97] != 0) {
    func_00106410(*(undefined4 *)(puVar1[0x1b] + 8),puVar1 + 0x4f,local_d8);
    uVar6 = func_00106070(*(undefined4 *)(*(int *)(puVar1[0x1b] + 8) + 0x68),local_d8);
    uVar8 = puVar1[0x1c5];
    if (puVar1[uVar8 + 0x98] != uVar6) {
      iVar7 = uVar8 + 1;
      uVar8 = iVar7 / 300;
      uVar9 = iVar7 % 300;
      puVar1[0x1c5] = uVar9;
      puVar1[uVar9 + 0x98] = uVar6;
    }
  }
  *(undefined1 *)(param_1 + 0x174) = 0;
  return uVar8;
}

void __cdecl func_00044F50(void *p) { extern int _D_002EEB04,_D_001D4D14; extern int __cdecl func_000F8F40(int); extern int __cdecl func_000AFD10(int); volatile int *q=(volatile int*)p; q[0x110/4]=0; q[0x114/4]=func_000F8F40(q[0x2c/4]); if(!_D_002EEB04)_D_002EEB04=func_000AFD10((int)&_D_001D4D14); }

void func_00044F90(void) {
    extern int D_002EEB70;
    D_002EEB70 = 0;
}

void func_000450D0(void)
{
  extern undefined4 D_002EEAF0;
  int func_00044FA0(...);
  if (*(char *)(D_002EEAF0 + 0x15) == 'F') {
    func_00044FA0(D_002EEAF0);
  }
  return;
}

void func_000451B0(int a0) {
    extern int D_002EEB58;
    D_002EEB58 = a0;
}

void func_000451C0(void)
{
  int func_000B6AF0(...);
  int func_000400C0(...);
  int func_001096B0(...);
  extern undefined D_001D4D38;
  extern undefined D_002EEB74;
  func_000B6AF0();
  func_000400C0(1);
  func_001096B0(((undefined *)&D_001D4D38),0x3f800000);
  D_002EEB74 = 1;
  return;
}

void func_000452E0(void) {
    extern char D_002EEAFC;
    D_002EEAFC = 1;
}

