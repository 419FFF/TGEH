/* 41 functions from 0x00100A60 to 0x00101A0D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00100A60(int a0) {
    extern int D_001E5ED0;
    D_001E5ED0 = a0;
}

int func_00100A70(void) {
    extern int D_001E5ED0;
    return D_001E5ED0;
}

void func_00100C10(unsigned int param_1) {
    extern unsigned char D_001E5EC8;
    extern unsigned int D_00324D08;
    if (D_001E5EC8 != 0) {
        D_00324D08 = param_1;
    }
}

void _func_00100C80(int a0) {
    extern int D_001E5ED0;
    D_001E5ED0 = a0;
}

char func_00100D80(void) {
    extern char D_001E5EC8;
    return D_001E5EC8;
}

char func_00100D90(void) {
    extern char D_001E5EC9;
    return D_001E5EC9;
}

void func_00100E50(void)
{
  int func_00068450(...);
  int func_00104B30(...);
  int func_00100880(...);
  int func_001395C0(...);
  func_00068450();
  func_00104B30();
  func_00100880();
  func_001395C0();
  return;
}

void func_00100E70(void) {
    extern char D_00324D64;
    D_00324D64 = 1;
}

void func_001010A0(void) {
    int func_00104B70(...);
    func_00104B70();
}

void func_00101240(void) {
    int func_00105D10(...);
    func_00105D10();
}

void func_00101250(void) {
    extern int D_00307DB4;
    int func_00105D40(...);
    func_00105D40(D_00307DB4, 0);
}

void func_001015F0(undefined4 param_1)
{
  int func_00100E00(...);
  int func_001049F0(...);
  int func_000688B0(...);
  func_00100E00(param_1);
  func_001049F0(param_1);
  func_000688B0(param_1);
  return;
}

void func_00101610(void)
{
  int func_00103210(...);
  extern undefined D_001DE51C;
  int func_00102E80(...);
  extern undefined D_001DE504;
  extern undefined D_001DE4F0;
  undefined4 uVar1;
  
  uVar1 = func_00103210(((undefined *)&D_001DE51C));
  func_00102E80(uVar1);
  uVar1 = func_00103210(((undefined *)&D_001DE504));
  func_00102E80(uVar1);
  uVar1 = func_00103210(((undefined *)&D_001DE4F0));
  func_00102E80(uVar1);
  return;
}

void func_00101680(int a0) {
    extern int D_001E5ED8;
    D_001E5ED8 = a0;
}

void func_00101690(int a0) {
    extern int D_00324D6C;
    D_00324D6C = a0;
}

void func_00101970(int param_1)
{
  extern undefined4 D_00324D78;
  int func_00101360(...);
  D_00324D78 = param_1;
  if (param_1 == 0) {
    func_00101360();
    return;
  }
  return;
}

void func_00101990(int param_1, ushort param_2, char param_3)
{
  if (param_3 != '\0') {
    *(ushort *)(param_1 + 0xb6) = *(ushort *)(param_1 + 0xb6) | param_2;
    return;
  }
  *(ushort *)(param_1 + 0xb6) = *(ushort *)(param_1 + 0xb6) & ~param_2;
  return;
}

void func_001019C0(int a0) {
    extern int D_00324EAC;
    D_00324EAC = a0;
}

void func_001019D0(int param_1)
{
  int func_001100A0(...);
  extern undefined4 D_00324BD4;
  int func_0012E6D0(...);
  int func_0012E940(...);
  int local_14;
  undefined1 local_10 [16];
  
  func_001100A0(D_00324BD4,&local_14);
  func_0012E6D0(local_10,param_1 + 0xe4,local_14 + 0x30);
  func_0012E940(local_10);
  return;
}

