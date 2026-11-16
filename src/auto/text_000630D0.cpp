/* 28 functions from 0x000630D0 to 0x00064083, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00063240(void)
{
  extern undefined4 D_002EF480;
  int func_0011B990(...);
  extern undefined4 D_002EF420;
  int func_00110760(...);
  extern undefined4 D_002EF494;
  int iVar1;
  
  iVar1 = D_002EF480;
  *(short *)(D_002EF480 + 0x2a) = *(short *)(D_002EF480 + 0x2a) + -1;
  func_0011B990(iVar1);
  iVar1 = D_002EF420;
  *(short *)(D_002EF420 + 0x2a) = *(short *)(D_002EF420 + 0x2a) + -1;
  func_0011B990(iVar1);
  func_00110760(D_002EF494);
  return;
}

void _func_00063270(int *out) { extern int D_00307DF8; int func_001100A0(...); int result; int zero=0; func_001100A0(*(int *)(D_00307DF8+0x2c), &result); if(result) { out[0]=*(int *)(result+0x30); out[1]=*(int *)(result+0x34); out[2]=*(int *)(result+0x38); out[3]=*(int *)(result+0x3c); } else { out[0]=zero; out[1]=zero; out[2]=zero; out[3]=0x3f800000; } }

void func_000632D0(void)
{
  extern undefined4 D_002F7308;
  extern undefined D_002EF5FC;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  D_002F7308 = 0;
  puVar2 = (undefined4 *)((undefined *)&D_002EF5FC);
  do {
    puVar2[-0x3d] = 0;
    *puVar2 = 0;
    puVar2[0x3e] = 0;
    puVar1 = puVar2 + 2;
    iVar3 = 0x3c;
    do {
      puVar1[-0x3e] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar2 = puVar2 + 0x7e;
  } while ((int)puVar2 < 0x3fa0);
  return;
}

void func_00063320(void) {
    extern int D_001E3B30;
    extern int D_002EEF08;
    extern int D_002EEE70;
    int func_0005D410(...);
    func_0005D410(D_001E3B30, (int)&D_002EEE70, (int)&D_002EEF08);
}

void func_00063340(void) {
    extern int D_001E3B30;
    extern int D_002EF4F4;
    extern int D_002EF4E4;
    int func_0005D410(...);
    func_0005D410(D_001E3B30, (int)&D_002EF4E4, (int)&D_002EF4F4);
}

float _func_00063490(void *self, void *a, void *b) { return 0; }

void _func_00063530(float value) { return; }

unsigned int func_00063C20(int param)
{
    extern int D_002F7314;
    return *(int*)(param+0x4e0)<=0 ? D_002F7314 : 0;
}

void func_00063C40(void) {
    extern char D_002F7314;
    D_002F7314 = 0;
}

char func_00063C50(void) {
    extern char D_002F7315;
    return D_002F7315;
}

void func_00063C60(void) {
    extern char D_002F7315;
    D_002F7315 = 0;
}

void func_00063F10(void) {
    extern char D_002EEEB0;
    extern int D_002EEE88;
    extern char D_002F7318;
    extern int D_002F731C;
    D_002F7318 = D_002EEEB0;
    D_002F731C = D_002EEE88;
}

void func_00063F30(void) {
    int func_00122A50(...);
    func_00122A50();
}

void func_00063F40(void) {
    extern int D_002F7324;
    extern int D_002F7328;
    D_002F7324 = 1060320051;
    D_002F7328 = 0;
}

