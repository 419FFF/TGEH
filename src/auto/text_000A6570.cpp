/* 20 functions from 0x000A6570 to 0x000A7263, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct R65B0 { int x, y, z, w; };

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

extern int _D_00312AA0, _D_00312A20, _D_00312940, _D_003129B0, _D_00312AF0, _D_00312A70, _D_00312B00;
extern float _D_00312A90, _D_00312A94, _D_00312A98, _D_00312A9C, _D_00312A10, _D_00312A14, _D_00312A18, _D_00312A1C;
extern char _D_00312AB0[], _D_00312A30[];
int _func_0012F120(...);
int _func_0012FCF0(...);
void _func_000A65B0(void)
{
    _D_00312AA0 = 0x12;
    _D_00312A20 = 0x14;
    _D_00312940 = 0x13;
    _D_003129B0 = 0x2c;
    _D_00312AF0 = 0;
    _func_0012F120(_D_00312AB0);
    _func_0012FCF0(_D_00312AB0, 0x3fc90fdb);
    *(int *)&_D_00312A90 = 0x42c80000;
    *(int *)&_D_00312A94 = 0x43160000;
    *(int *)&_D_00312A98 = 0x44700000;
    *(int *)&_D_00312A9C = 0x44700000;
    _D_00312A70 = 0;
    _func_0012F120(_D_00312A30);
    _func_0012FCF0(_D_00312A30, 0xbfc90fdb);
    *(int *)&_D_00312A10 = 0x44070000;
    *(int *)&_D_00312A14 = 0x43160000;
    *(int *)&_D_00312A18 = 0x44700000;
    *(int *)&_D_00312A1C = 0x44700000;
    _D_00312B00 = 0;
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
  return value > limit;
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

void func_000A6A40(void)
{
  extern int _D_00312C34;
  switch (_D_00312C34) {
  case 0: _D_00312C34 = 4; break;
  case 1: _D_00312C34 = 0; break;
  case 2: _D_00312C34 = 1; break;
  case 3: _D_00312C34 = 2; break;
  case 4: _D_00312C34 = 3; break;
  }
}

void func_000A6B90(void *object, float x, float y, float w, float h)
{
  extern float D_001D27EC;
  extern void func_000A6AA0(float, float, float, float);
  float dw = w * D_001D27EC;
  float dh = h * D_001D27EC;
  func_000A6AA0(x, y, dw, dh);
  func_000A6AA0(x + dw, y, dw, dh);
  func_000A6AA0(x, y + dh, dw, dh);
  func_000A6AA0(x + dw, y + dh, dw, dh);
}

void func_000A6C20(int param)
{
  extern unsigned _D_00312B08;
  extern float D_001D557C;
  extern int func_00120E00(...), func_00120EA0(...), func_00120ED0(...);
  extern int func_00120F60(...), func_00120F70(...), func_00120F80(...);
  extern int func_00120E50(...), func_00120E70(...), func_00121990(...), func_000688D0(...);
  func_00120E00(_D_00312B08);
  func_00120EA0(1,1,1,0);
  func_00120ED0(4,5);
  func_00120F60(D_001D557C / *(unsigned short *)((char *)&_D_00312B08 + 0x258a));
  func_00120F70(D_001D557C / *(unsigned short *)((char *)&_D_00312B08 + 0x258a));
  func_00120F80(0x40200000,0x40200000);
  func_00120E50(0x43a00000,0x43480000);
  func_00120E70(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  func_00121990(param);
  func_000688D0();
}

void func_000A6F80(void)
{
  extern int _D_00312C40, _D_00313B00, _D_00312C4C, _D_00313A70;
  extern int func_000B0E30(void), func_0013B380(int), func_00064440(int), func_00064450(int), func_000716C0(void), func_0006E860(void);
  if (_D_00312C40 == 10) func_000B0E30();
  _D_00312C4C = func_0013B380(_D_00313B00);
  switch (_D_00312C40) {
  case 8: _D_00313A70 = 3; return;
  case 9: _D_00313A70 = 2; return;
  case 1: case 2: case 5: func_00064440(1); func_00064450(2); return;
  case 12: case 13: case 14: case 16: func_00064440(3); func_00064450(3); return;
  case 11: func_000716C0(); return;
  default: func_0006E860(); return;
  }
}

