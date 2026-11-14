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

void func_001019C0(int a0) {
    extern int D_00324EAC;
    D_00324EAC = a0;
}

