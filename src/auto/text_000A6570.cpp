/* 20 functions from 0x000A6570 to 0x000A7263, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A6570(void)
{
  extern unsigned _D_003080AC;
  extern void func_000A2C30(int);
  extern void func_000A42E0(int);
  if (_D_003080AC == 2 || _D_003080AC == 3) {
    func_000A2C30(1);
  } else {
    func_000A2C30(0);
  }
  func_000A42E0(0);
}

void func_000A6680(int a0) {
    extern int D_00312B00;
    D_00312B00 = a0;
}

int func_000A6690(void) {
    extern int D_00312B00;
    return D_00312B00;
}

void func_000A68F0(int a0) {
    extern int D_00312A80;
    D_00312A80 = a0;
}

int func_000A6900(void) {
    extern int D_00312D78;
    return D_00312D78;
}

void func_000A69E0(void)
{
  extern undefined4 D_00312C34;
  switch(D_00312C34) {
  case 0:
    D_00312C34 = 1;
    return;
  case 1:
    D_00312C34 = 2;
    return;
  case 2:
    D_00312C34 = 3;
    return;
  case 3:
    D_00312C34 = 4;
    return;
  case 4:
    D_00312C34 = 0;
  }
  return;
}

void func_000A6B90(float a0, float a1, float a2, float a3)
{
  extern float D_001D27EC;
  extern void func_000A6AA0(float, float, float, float);
  float v0 = a2 * D_001D27EC;
  float v1 = a3 * D_001D27EC;
  func_000A6AA0(a0, a1, v0, v1);
  func_000A6AA0(a0 + v0, a1, v0, v1);
  func_000A6AA0(a0, a1 + v1, v0, v1);
  func_000A6AA0(a0 + v0, a1 + v1, v0, v1);
}

