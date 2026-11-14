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

void func_00063320(void) {
    extern int D_001E3B30;
    extern int D_002EEF08;
    extern int D_002EEE70;
    int func_0005D410(...);
    func_0005D410(D_001E3B30, (int)&D_002EEE70, (int)&D_002EEF08);
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

