/* 5 functions from 0x0001A000 to 0x0001AF3E, found by Ghidra. */
#include "common.h"
extern float D_001D290C;
static inline long double U2F(int v) { long double r = (long double)v; if (v < 0) r += D_001D290C; return r; }

void _func_0001AC90(int p){void _func_00065E70(...);void _func_0011B990(int);_func_00065E70(*(int*)(p+0x110));int a=*(int*)(p+0x114);--*(short*)(a+0x2a);_func_0011B990(*(volatile int*)(p+0x114));}

void _func_0001ACC0(int a)
{
  int _func_00131310(...); float _func_00131760(...); float _func_00131220(float); int _func_001100A0(...); int _func_0012F890(...);
  extern float D_002EB5BC, D_001D28C0, D_001D27B0, D_001D290C, D_001D27EC, D_001D2E24, D_001D2A2C, D_001D2E20, D_001D2E1C;
  extern int D_00307DF8;
  int s = *(int *)(a + 0x110);
  unsigned int y, x;
  float fVar1, fy, dy, dx;
  int iVar8, off;
  int l18, l14;
  float l10[3];
  if (_func_00131310() % 300 == 0) *(unsigned int *)&D_002EB5BC = 0x40400000;
  if (_func_00131310() % 100 == 0) *(unsigned int *)&D_002EB5BC = 0x41200000;
  if (_func_00131310() % 100 == 0) *(unsigned int *)&D_002EB5BC = 0x41f00000;
  fVar1 = (float)(((long double)_func_00131760() * D_001D28C0 + D_001D27B0) * D_002EB5BC);
  for (y = 0; y < *(unsigned int *)(s + 0xc); y++) {
    for (x = 0; x < *(unsigned int *)(s + 8); x++) {
      fy = (float)(long double)y;
      iVar8 = *(int *)(s + 8);
      off = (iVar8 * y + x) * 0x58;
      dx = (float)((long double)x / ((long double)*(unsigned int *)(s + 8) - D_001D27B0) - D_001D27EC);
      dy = (float)((long double)fy / ((long double)*(unsigned int *)(s + 0xc) - D_001D27B0) - D_001D27EC);
      dy = dy * dy;
      _func_00131220((float)(dx * (long double)dx + dy));
      *(float *)(*(int *)(s + 0x50) + 0x48 + off) = (float)(dx * (long double)fVar1 * D_001D2E24);
      *(int *)(*(int *)(s + 0x50) + 0x4c + off) = 0;
      *(float *)(*(int *)(s + 0x50) + 0x50 + off) = (float)((D_001D27B0 - dy * (long double)D_001D2A2C) * fVar1 * D_001D2E20);
    }
  }
  _func_001100A0(*(int *)(D_00307DF8 + 0x2c), &l18);
  _func_001100A0(*(int *)(a + 0x2c), &l14);
  l10[0] = *(float *)(l18 + 0x30);
  l10[2] = *(float *)(l18 + 0x38);
  l10[1] = (float)(*(float *)(l18 + 0x34) + (long double)D_001D2E1C);
  _func_0012F890(l10, l14);
  float *o = *(float **)(s + 0x74);
  o[0] = l10[0]; o[1] = l10[1]; o[2] = l10[2];
}

void _func_0001AED0(int p){int _func_00110420(...);int _func_00110330(...);int _func_00099EB0(...);int i;int base=*(int*)(p+0x114);if(*(int*)(p+0x118)!=0xff){i=*(int*)(p+0x118)*64+base;_func_00110420(*(int*)(i+48),**(int**)(*(int*)(i+48)+44));_func_00110330(*(int*)(i+48),1);*(int*)(i+108)=0;*(int*)(p+0x118)=255;*(int*)(p+44)=*(int*)(p+0x124);*(short*)(p+0x110)=3;_func_00099EB0(p+0x120);}}
