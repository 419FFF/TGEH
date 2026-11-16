/* 2 functions from 0x00052D00 to 0x00053430, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct C_00053350 { void func_00053350(int, float); };

void func_00052D00(int param_1, int param_2)
{
  int func_00047960(...);
  int func_00131760(...);
  int func_000A22B0(...);
  int func_00110060(...);
  extern undefined4 D_00307DF8;
  int func_00045D00(...);
  int func_00045C20(...);
  int func_0004F660(...);
  int func_00046F90(...);
  extern undefined4 D_001E461C;
  int func_0004F9B0(...);
  int func_000A2370(...);
  int func_0004F910(...);
  int func_00046300(...);
  int func_00045AF0(...);
  int func_0004ECC0(...);
  int func_0004FE30(...);
  int func_0004FEC0(...);
  int func_0004FF10(...);
  int func_0012F120(...);
  int func_000475E0(...);
  int func_0004F0F0(...);
  int func_001105E0(...);
  int func_0004F310(...);
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longdouble lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [48];
  undefined1 local_60 [16];
  undefined1 local_50 [85];
  
  uVar4 = func_00047960(param_1,param_2 + 0x6c,*(undefined4 *)(param_2 + 0x90),
                         *(undefined4 *)(param_2 + 0x84),0,0);
  switch(*(undefined4 *)(param_2 + 0x98)) {
  case 0x23:
    *(undefined4 *)(param_2 + 0x150) = 0;
    lVar6 = (longdouble)func_00131760();
    puVar1 = *(undefined4 **)(param_2 + 4);
    *(undefined4 *)(param_2 + 0x98) = 0x24;
    *(float *)(param_2 + 0x154) =
         (float)(lVar6 * (longdouble)*(float *)(param_2 + 0x78) +
                (longdouble)*(float *)(param_2 + 0x7c));
    func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
    *(undefined4 *)(*(int *)(param_2 + 0x68) + 0x600) = 0;
    break;
  case 0x24:
    if ((uVar4 & 3) != 0) {
      func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_90);
      func_00045D00(*(undefined4 *)(param_2 + 0x68),param_2 + 0x138);
      func_00045C20(*(undefined4 *)(param_2 + 0x68),1,0);
      iVar5 = func_0004F660(param_1,param_2,param_2 + 0x138,local_60);
      if (iVar5 == 0) {
        puVar1 = *(undefined4 **)(param_2 + 0x50);
        func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
        func_00046F90(*(undefined4 *)(param_2 + 0x68),**(undefined4 **)(param_2 + 0x54),
                       D_001E461C,*(undefined4 *)(param_2 + 0x88),0,0);
        *(undefined4 *)(param_2 + 0x98) = 0x27;
      }
    }
    fVar2 = D_001E461C + *(float *)(param_2 + 0x150);
    *(float *)(param_2 + 0x150) = fVar2;
    if ((*(float *)(param_2 + 0x154) < fVar2) &&
       (cVar3 = func_0004F9B0(param_1,param_2,uVar4), cVar3 != '\0')) {
      *(undefined4 *)(param_2 + 0x98) = 0x25;
    }
    break;
  case 0x25:
    iVar5 = func_000A2370(param_1 + 100);
    if (iVar5 == 0) {
      *(undefined4 *)(param_2 + 0x98) = 0x23;
    }
    if ((uVar4 & 3) == 0) break;
    func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_90);
    func_00045D00(*(undefined4 *)(param_2 + 0x68),param_2 + 0x138);
    func_00045C20(*(undefined4 *)(param_2 + 0x68),1,0);
    iVar5 = func_0004F660(param_1,param_2,param_2 + 0x138,local_60);
    if (iVar5 != 0) break;
    puVar1 = *(undefined4 **)(param_2 + 0x50);
    func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
    uVar9 = *(undefined4 *)(param_2 + 0x88);
    uVar8 = **(undefined4 **)(param_2 + 0x54);
    uVar7 = *(undefined4 *)(param_2 + 0x68);
    goto LAB_000022b4;
  case 0x26:
    func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_90);
    func_00045D00(*(undefined4 *)(param_2 + 0x68),param_2 + 0x138);
    func_00045C20(*(undefined4 *)(param_2 + 0x68),1,0);
    iVar5 = func_0004F660(param_1,param_2,param_2 + 0x138,local_60);
    if (iVar5 != 0) {
      *(undefined4 *)(param_2 + 0x98) = 0x24;
      break;
    }
    puVar1 = *(undefined4 **)(param_2 + 0x50);
    func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
    uVar9 = *(undefined4 *)(param_2 + 0x88);
    uVar8 = **(undefined4 **)(param_2 + 0x54);
    uVar7 = *(undefined4 *)(param_2 + 0x68);
LAB_000022b4:
    func_00046F90(uVar7,uVar8,D_001E461C,uVar9,0,0);
    *(undefined4 *)(param_2 + 0x98) = 0x27;
    break;
  case 0x27:
    iVar5 = func_0004F910(param_1,param_2,*(undefined4 *)(param_2 + 0x68));
    if (iVar5 == 0) break;
    func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_90);
    func_00045D00(*(undefined4 *)(param_2 + 0x68),param_2 + 0x138);
    func_00045C20(*(undefined4 *)(param_2 + 0x68),1,0);
    iVar5 = func_0004F660(param_1,param_2,param_2 + 0x138,local_60);
    if (iVar5 == 0) {
      func_00046F90(*(undefined4 *)(param_2 + 0x68),**(undefined4 **)(param_2 + 0x54),D_001E461C,
                     *(undefined4 *)(param_2 + 0x88),0,0);
      break;
    }
    goto LAB_000024bd;
  case 0x28:
    func_00045D00(*(undefined4 *)(param_2 + 0x68),param_2 + 0x138);
    func_00045C20(*(undefined4 *)(param_2 + 0x68),1,0);
    iVar5 = func_00046300(*(undefined4 *)(param_2 + 0x68),param_2 + 0x174);
    if (iVar5 == 0) {
      func_00046F90(*(undefined4 *)(param_2 + 0x68),**(undefined4 **)(param_2 + 0x4c),D_001E461C,
                     *(undefined4 *)(param_2 + 0x88),0x7f7fffff,param_2 + 0x180);
      func_00045AF0(param_1,*(undefined4 *)(param_2 + 0x48),1);
      *(undefined4 *)(param_2 + 0x98) = 0x29;
    }
    else {
      *(undefined4 *)(param_2 + 0x98) = 0x81;
    }
    break;
  case 0x29:
    iVar5 = func_0004F910(param_1,param_2,*(undefined4 *)(param_2 + 0x68));
    if (iVar5 == 2) {
      *(undefined4 *)(param_2 + 0x98) = 0x23;
    }
    else {
      *(undefined4 *)(*(int *)(param_2 + 0x68) + 0x5fc) = 0;
      func_0004ECC0(param_1,param_2);
    }
    break;
  case 0x2a:
    iVar5 = func_000A2370(param_1 + 100);
    if (iVar5 != 0) goto _L000531C9;
    *(undefined1 *)(param_1 + 0x175) = 0;
    func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_90);
    func_00045D00(*(undefined4 *)(param_2 + 0x68),param_2 + 0x138);
    func_00045C20(*(undefined4 *)(param_2 + 0x68),1,0);
    iVar5 = func_0004F660(param_1,param_2,param_2 + 0x138,local_60);
    if (iVar5 == 0) {
      func_00045AF0(param_1,*(undefined4 *)(param_2 + 0x50),1);
      func_00046F90(*(undefined4 *)(param_2 + 0x68),**(undefined4 **)(param_2 + 0x54),D_001E461C,
                     *(undefined4 *)(param_2 + 0x88),0,0);
      *(undefined4 *)(param_2 + 0x98) = 0x27;
      break;
    }
LAB_000024bd:
    *(undefined4 *)(param_2 + 0x98) = 0x28;
    break;
  case 0x2b:
_L000531C9:
    iVar5 = func_000A2370(param_1 + 100);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0x175) = 0;
      puVar1 = *(undefined4 **)(param_2 + 4);
      *(undefined4 *)(param_2 + 0x98) = 0x26;
      func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
    }
    break;
  case 0x81:
    func_0004FE30(param_1,param_2);
    break;
  case 0x82:
    func_0004FEC0(param_1,param_2);
    break;
  case 0x83:
    func_0004FF10(param_1,param_2);
  }
  func_0012F120(local_50);
  local_9c = *(undefined4 *)(param_1 + 0xe8);
  local_94 = *(undefined4 *)(param_1 + 0xf0);
  local_98 = 0;
  func_000475E0(local_50,&local_9c,param_2 + 0x138,*(undefined4 *)(param_2 + 0x158),param_2 + 0x144
                );
  func_0004F0F0(param_1,local_50,param_2);
  func_001105E0(*(undefined4 *)(param_1 + 0x2c),local_50,1);
  if (*(char *)(param_1 + 0x174) != '\0') {
    func_0004F310(param_1,param_2);
  }
  return;
}
