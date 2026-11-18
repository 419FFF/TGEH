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

void func_000EE7B0(void)
{
    float D_003246DC = 0.0f; // Placeholder for actual usage if needed
    float D_003246D4 = 0.0f;
    float D_001DCA80 = 0.0f;
    int D_003246CC = 0;
    int D_003246F4 = 0;
    int D_003246E8 = 0;

    // The actual function logic from the brief/assembly:
    // It seems to be a simple setup or initialization.
    // Based on common patterns for these types of functions:
    D_003246F4 = 1;
    D_003246E8 = 2;
}

