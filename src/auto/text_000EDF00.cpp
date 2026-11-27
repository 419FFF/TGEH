/* 8 functions from 0x000EDF00 to 0x000EEDAC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000EDF00(void)
{
  extern undefined4 D_003246F4;
  extern undefined4 D_00313B54;
  extern undefined4 D_003246E8;
  extern undefined4 D_003246D8;
  int func_0009D280(...);
  extern undefined D_00324620;
  extern undefined4 D_003246CC;
  int func_00110480(...);
  extern undefined4 D_003246D0;
  int func_00110000(...);
  D_003246F4 = 0;
  switch(D_00313B54) {
  case 3:
    D_003246E8 = 0;
    D_003246D8 = 3;
    break;
  case 4:
    D_003246E8 = 1;
    D_003246D8 = 4;
    break;
  case 5:
    D_003246E8 = 2;
    D_003246D8 = 5;
    break;
  case 6:
    D_003246E8 = 3;
    D_003246D8 = 6;
    break;
  case 7:
    D_003246E8 = 4;
    D_003246D8 = 7;
    break;
  case 8:
    D_003246E8 = 5;
    D_003246D8 = 8;
  }
  func_0009D280(*(undefined4 *)(((undefined *)&D_00324620) + D_003246CC * 4));
  func_0009D280(*(undefined4 *)(((undefined *)&D_00324620) + D_003246E8 * 4));
  func_00110480(D_003246D0,*(undefined4 *)(*(int *)(((undefined *)&D_00324620) + D_003246CC * 4) + 0x2c),8);
  func_00110480(D_003246D0,*(undefined4 *)(*(int *)(((undefined *)&D_00324620) + D_003246E8 * 4) + 0x2c),8);
  func_00110000(*(undefined4 *)(*(int *)(((undefined *)&D_00324620) + D_003246CC * 4) + 0x2c));
  func_00110000(*(undefined4 *)(*(int *)(((undefined *)&D_00324620) + D_003246E8 * 4) + 0x2c));
  return;
}

extern int _D_003246CC, _D_003246D0;
extern int _D_00324620[];
extern void __cdecl _func_0009D280(int);
extern void __cdecl _func_00110480(int, int, int);
extern float D_003246DC;
extern float D_003246D4;
extern float D_001DCA80;
extern int D_003246CC;
extern int D_003246F4;
extern int D_003246E8;
extern int D_00324620[];


extern void __cdecl _func_0012F120(float *);
extern void __cdecl _func_0012FE20(float *, float, int, int);
extern void __cdecl _func_0012F250(float *, float *, float *);
extern void __cdecl _func_0012E590(float *, float *);
extern void __cdecl _func_001105E0(int, float *, int);
extern void __cdecl _func_0012F120(void *);
extern void __cdecl _func_0012FE20(void *, int, int, int);
extern void __cdecl _func_0012F250(void *, void *, void *);
extern void __cdecl _func_0012E590(void *, void *);
extern void __cdecl _func_001105E0(int, void *, int);
extern void __cdecl _func_0012E650(void *, void *);
#pragma optimize("y", on)
void __cdecl _func_000EE040(void)
{
  int v[3];
  __declspec(align(16)) int m90[15];
  __declspec(align(16)) int md0[15];
  __declspec(align(16)) int m50[12];
  int m20[7];

  _func_0009D280(_D_00324620[_D_003246CC]);
  _func_00110480(_D_003246D0, *(int *)(_D_00324620[_D_003246CC] + 0x2c), 8);

  v[0] = 0;
  v[1] = 0x437a0000;
  v[2] = 0;

  _func_0012F120(m90);
  m90[13] = 0x437a0000;
  _func_0012F120(md0);

  _func_0012FE20(md0, 0xbfc90fd0, 0, 0);

  _func_0012F250(m50, m90, md0);
  _func_0012E590(m20, v);

  _func_001105E0(*(int *)(_D_00324620[_D_003246CC] + 0x2c), m50, 0);
}

int __fastcall func_000EDE10(int a);
extern void __cdecl _func_00110000(int);
void __cdecl _func_000EE120(void)
{
  __declspec(align(16)) int m[16];
  int r;
  unsigned c = D_003246CC;

  if (c > 0u)
    D_003246F4 = c - 1;
  else
    D_003246F4 = 5;
  if (c < 5u)
    D_003246E8 = c + 1;
  else
    D_003246E8 = 0;
  {
    extern int D_003246D8;
    r = func_000EDE10(D_003246D8);
  }
  if (r == 6)
    D_003246E8 = r;
  else if (r == 7)
    D_003246E8 = r;
  _func_0009D280(_D_00324620[c]);
  _func_0009D280(_D_00324620[D_003246E8]);
  _func_00110480(_D_003246D0, *(int *)(_D_00324620[D_003246CC] + 0x2c), 8);
  _func_00110480(_D_003246D0, *(int *)(_D_00324620[D_003246E8] + 0x2c), 8);
  _func_0012F120(m);
  _func_001105E0(*(int *)(_D_00324620[D_003246CC] + 0x2c), m, 0);
  if (r == 6) {
    _func_001105E0(*(int *)(_D_00324620[D_003246E8] + 0x2c), m, 0);
  } else {
    m[13] = 0x43fa0000;
    _func_001105E0(*(int *)(_D_00324620[D_003246E8] + 0x2c), m, 0);
    m[13] = 0;
  }
  _func_00110000(*(int *)(_D_00324620[D_003246CC] + 0x2c));
  _func_00110000(*(int *)(_D_00324620[D_003246E8] + 0x2c));
}

void func_000EE570(void)
{
  int func_0009D280(...);
  int func_00110480(...);
  int func_0012F120(...);
  int func_001105E0(...);
  int func_0012FE20(...);
  int func_00110000(...);
  extern char D_0031125C;
  extern char D_00310FA8;
  extern char D_00310CF4;
  extern int D_003246D0;
  unsigned c;
  __declspec(align(16)) char local_50 [64];

  c = D_003246CC;
  D_003246F4 = (c > 0) ? c - 1 : 5;
  if (c < 5) {
    D_003246E8 = c + 1;
  }
  else {
    D_003246E8 = 0;
  }
  if (D_003246F4 == 5) {
    if (D_0031125C == '\0') {
      D_003246F4 = 4;
LAB_000026ad:
      if (D_00310FA8 == '\0') {
        D_003246F4 = 3;
        goto LAB_000026c8;
      }
    }
  }
  else {
    if (D_003246F4 == 4) goto LAB_000026ad;
    if (D_003246F4 != 3) goto LAB_000026dc;
LAB_000026c8:
    if (D_00310CF4 == '\0') {
      D_003246F4 = 2;
    }
  }
LAB_000026dc:
  if (D_003246E8 == 5) {
    if (D_0031125C != '\0') goto LAB_00002725;
    D_003246E8 = 4;
LAB_000026f7:
    if (D_00310FA8 != '\0') goto LAB_00002725;
    D_003246E8 = 3;
  }
  else {
    if (D_003246E8 == 4) goto LAB_000026f7;
    if (D_003246E8 != 3) goto LAB_00002725;
  }
  if (D_00310CF4 == '\0') {
    D_003246E8 = 0;
  }
LAB_00002725:
  if (c == D_003246E8) {
    D_003246E8 = 0;
  }
  func_0009D280(D_00324620[D_003246F4]);
  func_0009D280(D_00324620[D_003246CC]);
  func_0009D280(D_00324620[D_003246E8]);
  func_00110480(D_003246D0,*(int *)(D_00324620[D_003246F4] + 0x2c),8);
  func_00110480(D_003246D0,*(int *)(D_00324620[D_003246CC] + 0x2c),8);
  func_00110480(D_003246D0,*(int *)(D_00324620[D_003246E8] + 0x2c),8);
  func_0012F120(local_50);
  func_001105E0(*(int *)(D_00324620[D_003246CC] + 0x2c),local_50,0);
  func_0012FE20(local_50,0,0x40060a8b,0);
  func_001105E0(*(int *)(D_00324620[D_003246F4] + 0x2c),local_50,0);
  func_0012FE20(local_50,0,0xc0060a8b,0);
  func_001105E0(*(int *)(D_00324620[D_003246E8] + 0x2c),local_50,0);
  func_00110000(*(int *)(D_00324620[D_003246F4] + 0x2c));
  func_00110000(*(int *)(D_00324620[D_003246CC] + 0x2c));
  func_00110000(*(int *)(D_00324620[D_003246E8] + 0x2c));
  return;
}

void func_000EE7B0(void)
{
  void func_0012F120(void *);
  void func_0012FE20(void *, int, float, int);
  void func_001105E0(int, void *, int);
  extern float D_003246DC, D_003246D4, D_001DCA80;
  extern int D_003246CC, D_003246F4, D_003246E8;
  extern int D_00324620[];
  __declspec(align(16)) char local[0x40];
  float f = (float)((long double)D_003246DC * (long double)D_003246D4 * (long double)D_001DCA80);

  func_0012F120(local);
  func_0012FE20(local, 0, f, 0);
  func_001105E0(*(int *)(D_00324620[D_003246CC] + 0x2c), local, 0);
  func_0012FE20(local, 0, (float)((long double)f + D_001DCA80), 0);
  func_001105E0(*(int *)(D_00324620[D_003246F4] + 0x2c), local, 0);
  func_0012FE20(local, 0, (float)((long double)f - D_001DCA80), 0);
  func_001105E0(*(int *)(D_00324620[D_003246E8] + 0x2c), local, 0);
}

extern int D_003246D8;
extern float D_001D27F0;
extern int D_001E5BC4, D_001E5BC0, D_001E5BBC;
extern int D_00324638;
extern void __cdecl _func_0012FE20(void *, float, int, int);
extern void __cdecl _func_0012FE20b(void *, int, int, int);
extern void __cdecl _func_0012E650(void *, void *);
extern void __cdecl _func_0012F2E0(void *, void *);
void __cdecl _func_000EEC80(void)
{
  __declspec(align(16)) int m90[12];
  int v[3];
  int md0[12];
  __declspec(align(16)) int m50[12];
  __declspec(align(16)) int m20[12];
  float f = D_001D27F0 * (long double)D_003246D4;
  if (D_003246D8 == 2)
    f = f + (long double)D_001D27F0;
  _func_0012F120(m90);
  _func_0012FE20(m90, *(int *)&f, 0, 0);
  v[0] = 0;
  v[1] = D_001E5BC4;
  v[2] = D_001E5BC0;
  _func_0012F120(md0);
  _func_0012E650(m20, v);
  _func_0012F2E0(md0, m90);
  _func_0012E590(m20, v);
  v[1] = D_001E5BBC;
  v[2] = 0;
  _func_0012F120(m50);
  _func_0012FE20(m50, 0x3fc90fd0, 0, 0);
  _func_0012E650(m20, v);
  _func_0012F250(m90, md0, m50);
  _func_0012E590(m20, v);
  _func_001105E0(*(int *)(D_00324638 + 0x2c), m90, 0);
}

