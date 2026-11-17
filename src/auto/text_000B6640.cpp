/* 15 functions from 0x000B6640 to 0x000B75B8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000B6BE0(void) { extern unsigned int D_00307DF8,D_00313EF8,D_00313EF4,D_00313ED8; extern unsigned char D_00313F0E,D_00313F14; extern char D_001D8D10; int func_000A1EA0(...);int func_0011A6A0(...);int func_001015F0(...);int func_000400A0(...);int func_000400B0(...);int func_000400C0(...);int func_000B58C0(...);int func_00103210(...);int func_00103990(...);int func_000A0690(...);int func_000A05D0(...);D_00313EF8=0;D_00313F0E=1;if(*(int*)(D_00307DF8+0x84))func_000A1EA0(*(int*)(D_00307DF8+0x84),1);func_0011A6A0(1);func_001015F0(1);func_000400A0(1);func_000400B0(1);func_000400C0(1);D_00313EF4=6;func_000B58C0(D_00313ED8,10);func_00103990(func_00103210(&D_001D8D10,0));func_000A0690(0);func_000A05D0(0);D_00313F14=0;}

void func_000B6C80(void) { extern unsigned int D_00307DF8,D_00313EF8,D_00313EF4,D_00313ED8;extern unsigned char D_00313F0E;extern char D_001D8D10;int func_000A1EA0(...);int func_0011A6A0(...);int func_001015F0(...);int func_000400A0(...);int func_000400B0(...);int func_000400C0(...);int func_000B58C0(...);int func_00103210(...);int func_00103990(...);int func_000A0690(...);int func_000A05D0(...);D_00313EF8=0;D_00313F0E=1;if(*(int*)(D_00307DF8+0x84))func_000A1EA0(*(int*)(D_00307DF8+0x84),1);func_0011A6A0(1);func_001015F0(1);func_000400A0(1);func_000400B0(1);func_000400C0(1);D_00313EF4=7;func_000B58C0(D_00313ED8,9);func_00103990(func_00103210(&D_001D8D10,0));func_000A0690(0);func_000A05D0(0);}

void func_000B6D10(void) {
  extern unsigned int D_00313B60, D_00313ED8;
  int func_0011FED0(int, void*);
  int func_00136480(int, void*);
  int func_00136510(float, float, float, float);
  int func_0012F120(void*);
  int func_001364D0(void*);
  int func_000B58C0(int, int);
  int func_000E0C10(void);
  int func_000E1070(void);

  __declspec(align(16)) char local[0x40];

  func_0011FED0(D_00313B60, local);
  func_00136480(D_00313B60, local);
  func_00136510(-1.0f, 1.0f, -1.0f, 1.0f);
  func_0012F120(local);
  func_001364D0(local);
  func_000B58C0(D_00313ED8, 3);
  func_000E0C10();
  func_000E1070();
}

void func_000B6D90(void) {
  extern unsigned int D_00313B60, D_00313ED8;
  int func_0011FED0(int, void*);
  int func_00136480(int, void*);
  int func_00136510(float, float, float, float);
  int func_0012F120(void*);
  int func_001364D0(void*);
  int func_000B58C0(int, int);
  __declspec(align(16)) char local[0x40];
  func_0011FED0(D_00313B60, local);
  func_00136480(D_00313B60, local);
  func_00136510(-1.0f, 1.0f, -1.0f, 1.0f);
  func_0012F120(local);
  func_001364D0(local);
  func_000B58C0(D_00313ED8, 4);
}

void func_000B7080(int param_1) {
  extern unsigned char D_00313F15, D_00313F16, D_00313F17, D_00313F18;
  int func_000B58C0(int, int);
  func_000B58C0(param_1, 7);
  if (param_1 == 0x13) {
    if (!D_00313F15) { D_00313F15 = 1; return; }
  } else if (param_1 == 0x15) {
    if (!D_00313F16) { D_00313F16 = 1; return; }
  } else if (param_1 == 0x14) {
    if (!D_00313F17) { D_00313F17 = 1; return; }
  } else if (param_1 == 0x12 && !D_00313F18) {
    func_000B58C0(param_1, 0xc);
    D_00313F18 = 1;
  }
}

void func_000B7100(void)
{
  extern undefined D_00313F15;
  int func_000B58C0(...);
  extern undefined D_00313F16;
  extern undefined D_00313F17;
  extern undefined D_00313F18;
  if (D_00313F15 != '\0') {
    func_000B58C0(0x13,2);
  }
  if (D_00313F16 != '\0') {
    func_000B58C0(0x15,2);
  }
  if (D_00313F17 != '\0') {
    func_000B58C0(0x14,2);
  }
  if (D_00313F18 != '\0') {
    func_000B58C0(0x12,2);
  }
  return;
}

void func_000B7160(void) { extern float D_00314058,D_001D27B0,D_001D2808;extern unsigned int D_00314170;D_00314058+=D_001D27B0;if(D_00314058<D_001D2808)return;D_00314170=0x3f800000;}

void func_000B7320(void)
{
  int func_0005CCC0(...);
  int func_000B7190(...);
  extern undefined4 D_002EEE40;
  func_0005CCC0(0xf);
  func_000B7190();
  D_002EEE40 = 0x42700000;
  return;
}
