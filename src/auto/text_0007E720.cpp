/* 9 functions from 0x0007E720 to 0x0007F4B4, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct V3_7ED60 { float x, y, z; };

void func_0007ECF0(void) { int func_000688D0(...); int func_0011BF40(...); extern int D_002FB310,D_002FB308,D_002FB30C; extern undefined D_001D66DC; if(D_002FB310==0){func_000688D0();D_002FB308=func_0011BF40(&D_001D66DC,0);func_000688D0();D_002FB30C=0;} D_002FB310++;}

void func_0007ED30(void)
{
  extern undefined4 D_002FB310;
  int func_0011B990(...);
  extern undefined4 D_002FB308;
  D_002FB310 = D_002FB310 + -1;
  if (D_002FB310 == 0) {
    func_0011B990(D_002FB308);
  }
  return;
}

void func_0007ED50(void) {
    extern int D_002FB3D8;
    D_002FB3D8 = 0;
}

void func_0007ED60(void)
{
  extern int D_002FB3DC;
  int func_00061610(...);
  extern char D_002F7318, D_002EEFEC;
  extern float D_002F731C, D_002EEFD4, D_001D35F8, D_001D27B0, D_001D2BB4, D_001E3F68, D_001E3F6C, D_001E3F70;
  void func_00095650(int, float);
  extern unsigned int D_002FB3D8;
  extern V3_7ED60 D_002FB318[];
  long double fVar1, fz;
  float fx, fy;
  unsigned int idx;
  int bits;
  float *local_10 = (float *)&bits;
  char cVar4;

  D_002FB3DC = 0;
  cVar4 = func_00061610();
  if (cVar4 != 0) {
    if (D_002EEFEC != 0) {
      D_002FB3DC = 1;
      bits = *(int *)&D_002EEFD4;
      goto LAB;
    }
  } else if (D_002F7318 != 0) {
    D_002FB3DC = 1;
    bits = *(int *)&D_002F731C;
    goto LAB;
  }
  if (D_002FB3DC != 1) {
    func_00095650(0, 0);
    return;
  }
LAB:
  idx = D_002FB3D8;
  if (*local_10 <= D_001D35F8) {
    fVar1 = (long double)D_001D27B0 - (long double)*local_10 * D_001D2BB4;
    fx = ((long double)D_001D27B0 - D_001E3F68) * fVar1 + D_001E3F68;
    fy = ((long double)D_001D27B0 - D_001E3F6C) * fVar1 + D_001E3F6C;
    fz = ((long double)D_001D27B0 - D_001E3F70) * fVar1 + D_001E3F70;
    if (idx < 0x10) {
      *(int *)&D_002FB318[idx].x = *(int *)&fx;
      *(int *)&D_002FB318[idx].y = *(int *)&fy;
      D_002FB318[idx].z = fz;
      D_002FB3D8 = idx + 1;
      func_00095650(1, *local_10);
      return;
    }
  } else if (idx < 0x10) {
    *(int *)&D_002FB318[idx].x = *(int *)&D_001E3F68;
    *(int *)&D_002FB318[idx].y = *(int *)&D_001E3F6C;
    *(int *)&D_002FB318[idx].z = *(int *)&D_001E3F70;
    D_002FB3D8 = idx + 1;
    func_00095650(1, *local_10);
    return;
  }
  func_00095650(1, *local_10);
}

void func_0007F070(void)
{
  extern int D_002FB3E8[];
  extern char D_001D6720[];
  extern int D_001D670C, D_001D6710, D_001D6714, D_001D6718, D_001D671C;
  int func_0011E840(...);
  extern char D_001D6700, D_001D66F0;
  int func_00110480(...);
  extern int D_0030809C, D_002FB98C;
  int b[0x3d];
  int a[0x3d];
  int *p;
  int i;
  for (i = 0; i < 0x168; i++) D_002FB3E8[i] = 0;
  for (i = 0; i < 0x3d; i++) a[i] = 0;
  a[0x3a] = 0; a[0x39] = 0x10;
  for (i = 0; i < 0x17; i++) ((char *)a)[i] = D_001D6720[i];
  for (i = 0; i < 0x3d; i++) b[i] = 0;
  b[0x39] = 0x10; b[0] = D_001D670C; b[1] = D_001D6710; b[0x3a] = 0; b[2] = D_001D6714; b[3] = D_001D6718; b[4] = D_001D671C;
  p = &D_002FB3E8[1];
  do {
    p[-1] = func_0011E840(&D_001D6700, a);
    *(int *)(p[-1] + 0xf4) = 2;
    *(int *)(p[-1] + 0xf8) = 2;
    *(int *)(p[-1] + 0x11c) = 1;
    *(int *)(p[-1] + 0x120) = 1;
    *(int *)(p[-1] + 0x10c) = 3;
    p[0] = func_0011E840(&D_001D66F0, b);
    *(int *)(p[0] + 0xf4) = 2;
    *(int *)(p[0] + 0xf8) = 2;
    *(int *)(p[0] + 0x11c) = 4;
    *(int *)(p[0] + 0x120) = 5;
    *(int *)(p[0] + 0x10c) = 3;
    func_00110480(D_0030809C, p[-1], 8);
    func_00110480(D_0030809C, p[0], 8);
    p += 0xb4;
  } while ((int)p < (int)&D_002FB98C);
}

void func_0007F1F0(void) { int func_00110760(...); extern int D_002FB3EC,D_002FB98C; int *p=&D_002FB3EC; do { func_00110760(p[-1]);func_00110760(p[0]);p+=0xb4; } while((int)p<(int)&D_002FB98C);}

