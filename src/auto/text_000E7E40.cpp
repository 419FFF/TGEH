/* 10 functions from 0x000E7E40 to 0x000E8AAC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct __declspec(align(16)) Mat16 { int a[16]; };

#pragma optimize("y", on)
void func_000E8310(char a0) {
    extern char _D_00323E48;
    _D_00323E48 = a0;
}
void func_000E8320(void)
{
  int func_000687F0(...);
  int func_000A2780(...);
  int func_0009C590(...);
  extern undefined D_001DC524;
  int func_0009D3E0(...);
  undefined4 uVar1;
  
  func_000687F0();
  func_000A2780(0x34,0,0);
  uVar1 = func_0009C590(((undefined *)&D_001DC524));
  func_0009D3E0(uVar1);
  return;
}

void func_000E8350(void)
{
 extern int D_003080AC; extern int D_00323B50; extern float D_001D27B4;
 int func_000A2780(...);
 if (D_003080AC != 2) {
   int n = 3-D_00323B50;
   func_000A2780(0x34,1,(float)n*D_001D27B4);
 }
}

undefined4 func_000E8390(void)
{
  extern undefined4 D_003234E0;
  extern undefined D_00323E41;
  if (D_003234E0 == 6) {
    if (D_00323E41 != '\0') {
      return 1;
    }
  }
  else if ((D_003234E0 == 4) && (D_00323E41 != '\0')) {
    return 2;
  }
  return 0;
}

void func_000E8630(void)
{
  int func_0005CCC0(...); int func_000E83C0(...); int func_00110330(...);
  int func_001105E0(...); int func_00086AA0(...); int func_0009C7A0(...); int func_000A22B0(...);
  extern int D_00323B6C[], D_00323E3C[];
  extern int D_00323B00, D_00323B04, D_00323504[], D_003234E8, D_00323AA4, D_00323AA8, D_00323AF0, D_00323AF4;
  extern int D_003234E4, D_003234E0, D_00323E44;
  extern char D_00323E48, D_001D2C4C;
  extern struct Mat16 D_00323B10;
  int *p;
  int *q;
  struct Mat16 m;

  func_0005CCC0(0x14);
  func_000E83C0();
  p = D_00323B6C;
  do {
    p[-1] = 0;
    func_00110330(*(int *)(*p + 0x2c), 0);
    p += 6;
  } while (p != D_00323E3C);
  D_00323B00 = 0;
  m = D_00323B10;
  m.a[14] = m.a[13];
  func_001105E0(*(int *)(D_00323B04 + 0x2c), &m, 0);
  func_00086AA0(D_00323B00);
  p = D_00323504;
  do {
    if (*p != 1) {
      *p = 8;
      p[1] = 0;
      func_00110330(*(int *)(p[-1] + 0x2c), 0);
      D_003234E8 = 0;
    }
    p += 0x18;
  } while ((int)p < (int)&D_00323AA4);
  D_00323AA4 = 4;
  D_00323AA8 = 0;
  D_00323AF0 = 0;
  D_00323AF4 = 0xc3480000;
  q = (int *)func_0009C7A0(D_003234E4, &D_001D2C4C, 0);
  func_000A22B0(D_003234E4 + 100, 2, q[0], q[1], q[2], 0x3e4ccccd);
  D_00323E48 = 0;
  D_003234E0 = 1;
  D_003234E8 = 0;
  D_00323E44 = 0;
}

void func_000E8780(void)
{
 int func_00103210(...); extern undefined D_001DC55C; int func_00102E80(...); extern unsigned char D_0031151C; extern undefined D_001DC548; int func_0009C590(...); int func_00044C90(...); int func_000E8630(...); int func_000A4010(...);
 int local[3]; unsigned char v;
 func_00102E80(func_00103210(&D_001DC55C)); v=D_0031151C; local[0]=0;local[1]=0;local[2]=0x42c80000;
 func_00044C90(func_0009C590(&D_001DC548),local);func_000E8630();func_000A4010(v);
}

void func_000E8A70(int param_1)
{
 int func_00110060(...); int func_000E78A0(...); int i;
 undefined1 local[76];
 func_00110060(*(undefined4 *)(param_1+0x2c),local);
 i=0; do {func_000E78A0(param_1,local,i);i++;}while(i!=30);
}
#pragma optimize("", on)
