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

unsigned char func_000A6910(void)
{
  extern void *_D_00312D78;
  extern int _D_00313A94, _D_00313ABC, _D_00313B58, _D_00313B24;
  unsigned char result = 0;
  unsigned char *base = *(unsigned char **)((char *)_D_00312D78 + 0x10);
  if (*(short *)(base + _D_00313A94 * 0x18 + 0x10) ||
      *(short *)(base + _D_00313ABC * 0x18 + 0x10) ||
      *(short *)(base + _D_00313B58 * 0x18 + 0x10) ||
      *(short *)(base + _D_00313B24 * 0x18 + 0x10)) result = 1;
  return result;
}

unsigned char __fastcall func_000A6970(int index, int unused)
{
  extern void *_D_00312D78;
  unsigned char *base = *(unsigned char **)((char *)_D_00312D78 + 0x10);
  unsigned char result = 0;
  if (*(short *)(base + index * 0x18 + 0x10) != 0)
    result = 1;
  return result;
}

int func_000A6990(unsigned limit)
{
  extern unsigned _D_00313B00, _D_00312C4C;
  extern int func_0013B380(unsigned);
  unsigned value = func_0013B380(_D_00313B00) - _D_00312C4C;
  if (value > limit) return 1;
  return 0;
}

unsigned char __fastcall func_000A69C0(int unused, int unused2)
{
  extern int _D_00313ABC;
  extern void *_D_00312D78;
  unsigned char *base = *(unsigned char **)((char *)_D_00312D78 + 0x10);
  unsigned char result = 0;
  if (*(short *)(base + _D_00313ABC * 0x18 + 0x10) != 0)
    result = 1;
  return result;
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

void func_000A6B90(float x, float y, float w, float h)
{
  extern float D_001D27EC;
  extern void func_000A6AA0(float, float, float, float);
  float dw = w * D_001D27EC, dh = h * D_001D27EC;
  func_000A6AA0(x, y, dw, dh);
  func_000A6AA0(x + dw, y, dw, dh);
  func_000A6AA0(x, y + dh, dw, dh);
  func_000A6AA0(x + dw, y + dh, dw, dh);
}

