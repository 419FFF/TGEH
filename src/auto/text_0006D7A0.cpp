/* 17 functions from 0x0006D7A0 to 0x0006E753, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0006D7A0(int param_1, undefined4 *param_2, uint *param_3)
{
  int func_00011CB0(...);
  int func_000696A0(...);
  int func_0012E590(...);
  int func_0012E5F0(...);
  int func_0012E940(...);
  extern undefined4 D_001D314C;
  int func_0006C850(...);
  int func_0012ED20(...);
  extern undefined4 D_001D27B0;
  int func_00110060(...);
  extern undefined4 D_001D27EC;
  int func_0012F7A0(...);
  int func_00131210(...);
  int func_0012F310(...);
  int func_0012F250(...);
  int func_00112250(...);
  int func_0012ECA0(...);
  int func_0013E3F4(...);
  int func_0012EB70(...);
  int func_0012E9D0(...);
  extern undefined4 D_001D27B8;
  int func_0012E6D0(...);
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  byte bVar8;
  longdouble lVar9;
  longdouble lVar10;
  undefined4 *local_b10;
  int local_b0c;
  int local_b08;
  float local_b04;
  undefined4 local_b00;
  float local_afc;
  undefined4 local_af8;
  float local_af4;
  undefined4 local_af0;
  float local_aec;
  undefined4 local_ae8;
  undefined4 *local_ae4;
  undefined4 *local_ae0;
  undefined4 local_adc;
  float local_ad8;
  undefined4 local_ad4;
  int local_ad0;
  undefined4 local_acc;
  undefined4 local_ac8;
  undefined4 local_ac4;
  undefined4 local_ac0;
  undefined4 local_abc;
  undefined4 local_ab8;
  undefined4 *local_ab4;
  uint local_ab0;
  float local_aac;
  uint local_aa8;
  int local_aa4;
  undefined4 local_a94;
  float local_a90;
  undefined4 local_a8c;
  uint local_a88;
  float local_a84;
  uint local_a80;
  undefined4 local_a78;
  undefined4 local_a74;
  undefined4 local_a70;
  undefined4 local_a68;
  float local_a64;
  undefined4 local_a60;
  undefined4 local_a5c;
  undefined4 local_a58;
  undefined4 local_a54;
  undefined4 local_a50;
  undefined4 local_a4c;
  undefined4 local_a48;
  undefined4 local_a44;
  undefined4 local_a40;
  undefined4 local_a3c;
  undefined4 local_a38;
  undefined4 local_a34;
  undefined4 local_a30;
  undefined4 local_a2c;
  undefined4 local_a28;
  undefined4 local_a24;
  undefined4 local_a20;
  undefined4 local_a1c;
  undefined4 local_a18;
  undefined4 local_a14;
  undefined1 local_a0c [12];
  undefined1 local_a00 [48];
  undefined4 local_9d0;
  undefined4 local_9cc;
  undefined4 local_9c8;
  undefined1 local_9c0 [64];
  undefined4 local_980 [603];
  undefined4 local_14;
  
  bVar8 = 0;
  param_3[0x10] = 0;
  func_00011CB0(&local_a50,param_2);
  local_b10 = (undefined4 *)param_3[0x53];
  if (local_b10 == (undefined4 *)0x0) {
    func_000696A0(param_2 + 0xc,0x437a0000,local_980,param_1);
    local_b10 = local_980;
  }
  else if ((*param_3 & 0x200) != 0) {
    puVar5 = local_b10;
    puVar6 = local_980;
    for (uVar4 = local_b10[0x25b] * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar8 * -2 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar8 * -2 + 1);
    }
    local_14 = local_b10[0x25b];
    local_b10 = local_980;
  }
  puVar5 = local_b10;
  local_af0 = 0;
  local_aec = 0.0;
  local_ae8 = 0;
  if ((*param_3 & 8) != 0) {
    func_0012E590(&local_af0,param_3 + 1);
  }
  local_ae4 = param_2 + 0xc;
  func_0012E5F0(local_a0c,&local_af0,local_ae4);
  local_af4 = (float)param_3[0x54];
  if (local_af4 == 0.0) {
    local_af4 = 7.00649e-45;
  }
  lVar9 = (longdouble)func_0012E940(&local_af0);
  if (lVar9 <= (longdouble)D_001D314C) {
    uVar1 = *(undefined4 *)(param_1 + 0xf4);
    ppuVar7 = &local_ae0;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppuVar7 = (undefined4 *)0x0;
      ppuVar7 = ppuVar7 + (uint)bVar8 * -2 + 1;
    }
    local_ac8 = *(undefined4 *)(param_1 + 0xf8);
    local_ac4 = *(undefined4 *)(param_1 + 0xfc);
    local_abc = *(undefined4 *)(param_1 + 0xec);
    local_ac0 = *(undefined4 *)(param_1 + 0xe8);
    local_ab0 = param_3[4];
    local_ab8 = *(undefined4 *)(param_1 + 0xf0);
    local_aa4 = param_1;
    local_ae0 = param_2;
    local_ad0 = param_1 + 0xa0;
    local_ab4 = local_b10;
    local_aac = local_af4;
    local_aa8 = local_aa8 & 0xffffff00;
    local_acc = uVar1;
    func_0006C850(param_3,&local_ae0);
    if ((char)local_aa8 != '\0') {
      param_3[0x10] = param_3[0x10] | 0x20;
    }
  }
  else {
    func_0012ED20(&local_a68,&local_af0,D_001D27B0 / (float)lVar9);
    if ((*param_3 & 0x200) == 0) {
      local_b04 = *(float *)(param_1 + 0xf4);
      iVar3 = 1;
      do {
        if (*(float *)(param_1 + 0xf4 + iVar3 * 4) < local_b04) {
          local_b04 = *(float *)(param_1 + 0xf4 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 3);
    }
    else {
      local_b04 = *(float *)(param_1 + 0xf8);
      func_00110060(*(undefined4 *)(param_1 + 0x2c),&local_ae0);
      local_a88 = *(uint *)(param_1 + 0xe8);
      local_a80 = *(uint *)(param_1 + 0xf0);
      local_a84 = local_aec * D_001D27EC + *(float *)(param_1 + 0xec);
      func_0012F7A0(&local_a88,&local_ae0);
      local_ab0 = local_a88;
      local_b00 = *(undefined4 *)(param_1 + 0xf4);
      local_aac = local_a84;
      local_afc = *(float *)(param_1 + 0xf8);
      local_aa8 = local_a80;
      local_af8 = *(undefined4 *)(param_1 + 0xfc);
      lVar10 = (longdouble)func_00131210(local_aec * D_001D27EC);
      local_afc = (float)(lVar10 + (longdouble)local_afc);
      func_0012F310(local_9c0,&local_ae0);
      local_b0c = 0;
      if (0 < (int)local_b10[0x25b]) {
        do {
          iVar3 = local_b10[2];
          if (iVar3 != 0) {
            local_a5c = *(undefined4 *)(iVar3 + 0x30);
            local_a58 = *(undefined4 *)(iVar3 + 0x34);
            local_a54 = *(undefined4 *)(iVar3 + 0x38);
            func_00110060(*(undefined4 *)(iVar3 + 0x2c),local_a00);
            iVar3 = local_b10[2];
            local_a78 = *(undefined4 *)(iVar3 + 0x40);
            local_a74 = *(undefined4 *)(iVar3 + 0x44);
            local_a70 = *(undefined4 *)(iVar3 + 0x48);
            func_0012F7A0(&local_a78,local_a00);
            local_9d0 = local_a78;
            local_9cc = local_a74;
            local_9c8 = local_a70;
            func_0012F250(&local_ae0,local_a00,local_9c0);
            cVar2 = func_00112250(&local_b00,&local_ae0,&local_a5c);
            if (cVar2 == '\0') {
              puVar6 = puVar5 + puVar5[0x25b] * 3 + -3;
              *local_b10 = *puVar6;
              local_b10[1] = puVar6[1];
              local_b10[2] = puVar6[2];
              local_b0c = local_b0c + -1;
              local_b10 = local_b10 + -3;
              puVar5[0x25b] = puVar5[0x25b] + -1;
            }
          }
          local_b0c = local_b0c + 1;
          local_b10 = local_b10 + 3;
        } while (local_b0c < (int)puVar5[0x25b]);
      }
    }
    func_0012ECA0(&local_a68,local_b04);
    iVar3 = func_0013E3F4();
    func_0012EB70(&local_a94,&local_af0);
    func_0012ECA0(&local_a94,(float)lVar9 - (float)iVar3 * local_b04);
    local_b08 = 0;
    if (iVar3 != -1) {
      do {
        if (local_b08 < iVar3) {
          local_afc = local_a64;
          local_af8 = local_a60;
          uVar1 = local_a68;
LAB_000024a6:
          local_acc = *(undefined4 *)(param_1 + 0xf4);
          local_ac8 = *(undefined4 *)(param_1 + 0xf8);
          local_ac4 = *(undefined4 *)(param_1 + 0xfc);
          local_ac0 = *(undefined4 *)(param_1 + 0xe8);
          local_abc = *(undefined4 *)(param_1 + 0xec);
          local_ab8 = *(undefined4 *)(param_1 + 0xf0);
          local_ae0 = param_2;
          local_ab0 = param_3[4];
          local_ad4 = local_af8;
          local_ad8 = local_afc;
          local_ad0 = param_1 + 0xa0;
          local_aa4 = param_1;
          local_ab4 = puVar5;
          local_aac = local_af4;
          local_aa8 = local_aa8 & 0xffffff00;
          local_adc = uVar1;
          func_0006C850(param_3,&local_ae0);
          if ((char)local_aa8 != '\0') {
            param_3[0x10] = param_3[0x10] | 0x20;
          }
          if ((param_3[0x10] & 1) != 0) break;
        }
        else {
          local_b00 = local_a94;
          local_afc = local_a90;
          local_af8 = local_a8c;
          lVar9 = (longdouble)func_0012E9D0(&local_a94);
          uVar1 = local_b00;
          if ((longdouble)D_001D27B8 != lVar9) goto LAB_000024a6;
        }
        local_b08 = local_b08 + 1;
      } while (local_b08 != iVar3 + 1);
    }
  }
  uVar4 = param_3[0x10];
  param_3[0x10] = uVar4 | 0x40;
  if ((uVar4 & 0x20) == 0) {
    func_0012E6D0(param_3 + 0x27,local_ae4,local_a0c);
    lVar9 = (longdouble)func_0012E9D0(param_3 + 0x27);
    if ((longdouble)D_001D314C < lVar9) goto LAB_000026f2;
  }
  else {
    *param_2 = local_a50;
    param_2[1] = local_a4c;
    param_2[2] = local_a48;
    param_2[3] = local_a44;
    param_2[4] = local_a40;
    param_2[5] = local_a3c;
    param_2[6] = local_a38;
    param_2[7] = local_a34;
    param_2[8] = local_a30;
    param_2[9] = local_a2c;
    param_2[10] = local_a28;
    param_2[0xb] = local_a24;
    *local_ae4 = local_a20;
    param_2[0xd] = local_a1c;
    param_2[0xe] = local_a18;
    param_2[0xf] = local_a14;
  }
  param_3[0x10] = param_3[0x10] - 0x40;
LAB_000026f2:
  *param_3 = 0;
  return;
}

void func_0006E0C0(void)
{
  extern undefined4 D_002F9C04;
  int func_00116FB0(...);
  extern undefined4 D_002F9C10;
  int iVar1;
  int iVar2;
  
  iVar2 = D_002F9C04;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    func_00116FB0(iVar2);
    iVar2 = iVar1;
  }
  D_002F9C04 = 0;
  D_002F9C10 = 0;
  return;
}

void func_0006E160(int a0, int a1) {
    extern int D_002F9C08;
    extern int D_002F9C0C;
    D_002F9C08 = a0;
    D_002F9C0C = a1;
}

void func_0006E280(void){extern int D_002F9C08,D_002F9C0C;int func_0006E180(...);int value=D_002F9C08;if(value!=-1){func_0006E180(value,D_002F9C0C);D_002F9C08=-1;}}

void func_0006E2B0(void) {
    extern int D_002FA004;
    D_002FA004 = 0;
}
