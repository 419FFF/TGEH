/* 7 functions from 0x000188E0 to 0x000195A0, found by Ghidra. */
#include "common.h"

extern int D_00307D10;
extern int func_000487A0(int, int);
extern int func_00116FB0(int);
extern void *func_00116A90(int, int, int);
extern void func_0009DAF0(void *);
extern void func_00012D60(void *, int);
float func_00018D90(int param_1)
{
  int func_00110060(...), func_0012F7A0(...), func_0012E6D0(...), func_0012F6D0(...);
  float func_0012EA60(...);
  float func_00131550(float);
  extern int D_00307DF8;
  extern float D_001D2CE8, D_001D2CE4;
  float v[3];
  int b[4], a[4];
  __declspec(align(16)) char m1[64];
  __declspec(align(16)) char m2[56];
  float r;

  func_00110060(*(int *)(param_1 + 0x2c), m1);
  func_00110060(*(int *)(D_00307DF8 + 0x2c), m2);
  a[0] = *(int *)(param_1 + 0xe8);
  a[1] = *(int *)(param_1 + 0xec);
  a[2] = *(int *)(param_1 + 0xf0);
  b[0] = *(int *)(D_00307DF8 + 0xe8);
  b[1] = *(int *)(D_00307DF8 + 0xec);
  b[2] = *(int *)(D_00307DF8 + 0xf0);
  func_0012F7A0(a, m1);
  func_0012F7A0(b, m2);
  func_0012E6D0(v, b, a);
  v[1] = 0.0f;
  func_0012EA60(v);
  func_0012F6D0(v, m1);
  r = -func_00131550(v[0] / v[2]);
  if (r > D_001D2CE8) return D_001D2CE8;
  if (r < D_001D2CE4) r = D_001D2CE4;
  return r;
}

void *func_00019480(void *arg)
{
    void *p = func_00116A90(0x160, 1, 1);
    unsigned int *dst = (unsigned int *)p;
    unsigned int *src = (unsigned int *)arg;
    for (int i = 0x44; i != 0; --i)
        *dst++ = *src++;
    *((unsigned char *)p + 0x12) = 0xC;
    func_0009DAF0(p);
    func_00012D60(p, 0x28);
    return p;
}

void func_000194C0(char *p)
{
  int func_00110300(int, void *, int);
  float *func_0009C7A0(void *, void *, int);
  extern char D_001D2D40, D_001D2D34, D_001D2D28, D_001D2D20, D_001D2D14, D_001D2D08, D_001D2CFC, D_001D2CF0;
  extern float D_001D28E4;

  *(int *)(p + 0x120) = 0;
  *(int *)(p + 0x110) = func_00110300(*(int *)(p + 0x2c), &D_001D2D40, 0x18);
  *(int *)(p + 0x114) = func_00110300(*(int *)(p + 0x2c), &D_001D2D34, 0x18);
  *(int *)(p + 0x118) = func_00110300(*(int *)(p + 0x2c), &D_001D2D28, 0x18);
  *(int *)(p + 0x11c) = func_00110300(*(int *)(p + 0x2c), &D_001D2D20, 0x18);
  *(int *)(p + 0x12c) = *(int *)func_0009C7A0(p, &D_001D2D14, 0);
  *(float *)(p + 0x130) = (float)((long double)*func_0009C7A0(p, &D_001D2D08, 0) * D_001D28E4);
  *(int *)(p + 0x134) = *(int *)func_0009C7A0(p, &D_001D2CFC, 0);
  {
    float v = (float)((long double)*func_0009C7A0(p, &D_001D2CF0, 0) * D_001D28E4);
    *(int *)(p + 0x120) = 0;
    *(char *)(p + 0x150) = 1;
    *(float *)(p + 0x138) = v;
  }
}

