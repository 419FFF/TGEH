/* 7 functions from 0x00014A30 to 0x000156D0, found by Ghidra. */
#include "common.h"
struct V3 { int x, y, z; };

#pragma optimize("y", on)
float func_00014C40(int p, int q, int r)
{
  char func_00012120(...); int func_00011CB0(...); int func_0012F7A0(...); int func_000F8F40(...);
  int func_00069540(...); int func_00110060(...); char func_0011AFD0(...);
  extern float D_001D27B0; extern float D_001D27B8;
  int a[3]; int b[3]; int c[3];
  __declspec(align(16)) char m[64];
  __declspec(align(16)) char m2[64];
  int cnt[1]; int list[602];
  int n; int i; int *e;
  if (func_00012120(p, p + 0xe8, p + 0xf4, q, r)) return D_001D27B0;
  a[0] = *(int*)(p + 0xf4); a[1] = *(int*)(p + 0xf8); a[2] = *(int*)(p + 0xfc);
  func_00011CB0(m, q);
  b[0] = *(int*)(p + 0xe8); b[1] = *(int*)(p + 0xec); b[2] = *(int*)(p + 0xf0);
  func_0012F7A0(b, q);
  c[0] = b[0]; c[1] = b[1]; c[2] = b[2];
  n = func_00069540(q + 0x30, 0x42c80000, cnt, func_000F8F40(*(int*)(p + 0x2c)));
  i = 0;
  if (n != 0) {
    e = list;
    do {
      if (*e != 0) {
        func_00110060(*e, c);
        if (func_0011AFD0(*e, m, a, m2)) return D_001D27B0;
      }
      i++; e += 3;
    } while (i != n);
  }
  return D_001D27B8;
}

unsigned char func_00014D70(int p) { int *x=*(int**)(p+0x110); if(*x==0){*x=1;return 1;}return 0; }
void func_00014D90(int p) { int *x=*(int**)(p+0x110); if(*x==1)*x=0; }
#pragma optimize("y", on)
void func_00014DB0(int p) { int *x=*(int**)(p+0x110); int v=*(int*)((char*)x+0x50); int t=(v!=0)?4:2; *x=t;}

#pragma optimize("y", on)
void func_00015680(int p) { int func_00116A90(...); int func_0004FA80(...); int func_0009C7A0(...); extern char D_001D2A30; unsigned int *x=(unsigned int*)func_00116A90(0x2dc,1,1); *(unsigned int**)(p+0x110)=x; x[1]=*(unsigned int*)(p+0x130); x[0]=0; func_0004FA80(p,x+2); unsigned int *y=(unsigned int*)func_0009C7A0(p,&D_001D2A30,0); x[0xb2]=*y;}
