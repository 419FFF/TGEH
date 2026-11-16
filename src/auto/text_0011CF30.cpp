/* 18 functions from 0x0011CF30 to 0x0011DEFC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011CF80(int param_1, float param_2)
{
  double value = param_2;
  *(float *)(param_1 + 0x30) = (float)value;
}

int func_0011D1E0(int);
extern float D_001D27B8;
extern float D_001D27B0;
void func_0011CFC0(int param_1, float param_2)
{
  *(float *)(param_1 + 0xf4) = param_2;
  if (param_2 > D_001D27B8)
    *(float *)(param_1 + 0xf8) = D_001D27B0 / param_2;
  else
    *(int *)(param_1 + 0xf8) = 0;
}

void func_0011D270(undefined4 param_1, undefined4 param_2)
{
  int func_0011D1E0(...);
  int iVar1;
  
  iVar1 = func_0011D1E0(param_1);
  *(undefined4 *)(iVar1 + 0x138) = param_2;
  return;
}

void func_0011D290(int param_1, int param_2) { int iVar1 = func_0011D1E0(param_1); *(int *)(iVar1 + 0x13c) = param_2; }

#pragma optimize("y", off)
undefined4 func_0011D450(float *p, int count, float dt, int *desc, undefined4 arg5)
{
  int i;
  float x = 0.0f, y = 0.0f, z = 0.0f;
  int n1 = 0, n2 = 0;
  float work[37];
  int func_00110060(...);
  if (count != 0 && desc != 0) {
    for (i = 0; i < 4; ++i) {
      int *d = (int *)((char *)desc + 0x38 + i * 0x30);
      switch (d[-1]) {
      case 1: x += dt * *(float *)d; y += dt * ((float *)d)[1]; z += dt * ((float *)d)[2]; break;
      case 2: case 3: ++n1; break;
      case 4: case 5: case 6: case 7: ++n2; break;
      }
    }
    if (*((char *)desc + 0xfc)) func_00110060(arg5, work);
    while (count-- > 0) p += 42;
  }
  return 0;
}
#pragma optimize("", on)
void func_0011DED0(int param_1)
{
  *(undefined4 *)(param_1 + 0x4c) = 2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  return;
}

void func_0011DEF0(int param_1)
{
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}
extern float D_001D27B8;
extern float D_001D27B0;
