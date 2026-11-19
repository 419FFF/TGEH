/* 15 functions from 0x00077F50 to 0x00078F3C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00078730(undefined4 param_1, int param_2)
{
  int func_0011DED0(...);
  func_0011DED0(param_1);
  *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) & 0xfffffffd;
  return;
}

void _func_00078760(void){extern void _func_0011D000(...);extern void _func_0011D270(...);extern void _func_0011D290(...);extern int D_001D64BC;extern void _func_00078540(void);extern void _func_00078730(void);extern void _func_00085E20(void);_func_0011D000(_func_00078540,&D_001D64BC);_func_0011D270(_func_00078730,&D_001D64BC);_func_0011D290(_func_00085E20,&D_001D64BC);}

void func_000787A0(void) {
    extern int D_001D64BC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64BC);
}

void _func_000789C0(void)
{
  extern int D_001D64D0;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000787B0(...);
  int _func_000688D0(...);
  int _func_00085E20(...);
  _func_0011D000(&D_001D64D0, _func_000787B0);
  _func_0011D270(&D_001D64D0, _func_000688D0);
  _func_0011D290(&D_001D64D0, _func_00085E20);
  _func_0011D2B0(&D_001D64D0, _func_000688D0);
}

void func_00078A00(void) {
    extern int D_001D64D0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64D0);
}

void _func_00078A10(void)
{
  extern int D_001D3CA4, D_001D3CA8, D_001D3CAC, D_001D3CB0;
  extern short D_001D3CB4;
  extern char D_001D64DC, D_001D64D0, D_002FA620[], D_002FA624[], D_002FA628[];
  extern int D_0030809C;
  int func_0011E840(...); int func_0011DD60(...); int func_0011E830(...); int func_0011DEF0(...); int func_00110480(...);
  int a[61];
  unsigned int k;
  int r;
  for (k = 0; k < 0x60; k += 0xc) {
    int *p = a;
    for (r = 0x3d; r != 0; r--)
      *p++ = 0;
    a[46] = 1;
    a[47] = 1;
    a[36] = 2;
    a[37] = 2;
    a[0] = D_001D3CA4;
    a[1] = D_001D3CA8;
    a[2] = D_001D3CAC;
    a[32] = 0;
    a[33] = 0;
    a[34] = 0;
    a[35] = 0;
    a[42] = 3;
    a[43] = 3;
    a[44] = 3;
    a[45] = 3;
    a[48] = 0;
    a[54] = 0;
    a[53] = 0;
    a[55] = 0;
    a[60] = 10;
    a[57] = 0x19;
    a[3] = D_001D3CB0;
    *(short *)&a[4] = D_001D3CB4;
    a[59] = 0x58;
    r = func_0011E840(&D_001D64DC, a);
    *(int *)(D_002FA620 + k) = r;
    r = func_0011DD60(&D_001D64D0, 0x19, r, *(int *)(r + 0x14c));
    *(int *)(D_002FA624 + k) = r;
    func_0011E830(*(int *)(D_002FA620 + k), r);
    func_0011DEF0(*(int *)(D_002FA624 + k));
    *(int *)(D_002FA628 + k) = 0;
    func_00110480(D_0030809C, *(int *)(D_002FA620 + k), 8);
  }
}

void func_00078B90(void)
{
  int func_001160B0(...);
  extern undefined D_002FA624;
  int func_00110760(...);
  extern undefined D_002FA620;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FA624) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FA620) + uVar1));
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < 0x60);
  return;
}

extern float D_002FA628[];
extern float D_001D28C0;
extern float D_00307DB4;
extern void* D_002FA620[];
extern void* D_002FA624[];
void _func_00110060(void*,void*);
void _func_0012F0F0(void*);
void _func_00110420(void*,void*);
void _func_001105E0(void*,void*,int);
void _func_00110000(void*);
void* _func_000F8F40(void*);
void _func_00110480(void*,void*,int);
void _func_0011DED0(void*);
void _func_00078BC0(void* p) { float tmp[16]; int i=0; unsigned int off=0; do { if((long double)*(float*)((char*)D_002FA628+off)+(long double)D_001D28C0<(long double)D_00307DB4) { void* obj=*(void**)((char*)D_002FA620+off); _func_00110060(*(void**)((char*)p+0x2c),tmp); _func_0012F0F0((char*)tmp+4); i*=3; i*=4; obj=*(void**)((char*)D_002FA620+i); _func_00110420(*(void**)((char*)*(char**)((char*)obj+0x2c)),obj); _func_001105E0(obj,(char*)tmp+0x18,0); _func_00110000(obj); void* q=_func_000F8F40(*(void**)((char*)p+0x2c)); _func_00110480(*(void**)((char*)q+0xe0),obj,8); _func_0011DED0(*(void**)((char*)D_002FA624+i)); *(float*)((char*)D_002FA628+i)=D_00307DB4; return; } off+=12; ++i; } while(off<0x60); }

void func_00078E60(int a,int b,int c){extern void func_0011E3D0(...);extern double func_0012E7B0(...);extern void func_0011CFC0(...);extern float D_001D2B64;int p=*(int*)(a+0x17c);int q=c+0x30;double x;func_0011E3D0(a);x=func_0012E7B0(p+4,q);if(x<D_001D2B64)func_0011CFC0(a+0x54,0);else func_0011CFC0(a+0x54,5);*(int*)(p+4)=*(int*)q;*(int*)(p+8)=*(int*)(c+0x34);*(int*)(p+12)=*(int*)(c+0x38);}

extern int D_001D2B64;
void func_00078ED0(void) {
    extern int D_001D64EC;
    extern void func_00078C90(void);
    extern void func_00083D00(void);
    extern void func_00079D10(void);
    extern void func_00078E60(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_00078C90, &D_001D64EC);
    func_0011D270(func_00083D00, &D_001D64EC);
    func_0011D290(func_00079D10, &D_001D64EC);
    func_0011D2B0(func_00078E60, &D_001D64EC);
    func_0011D2D0(func_00092810, &D_001D64EC);
    func_0011D2F0(func_00083D60, &D_001D64EC);
}

void func_00078F30(void) {
    extern int D_001D64EC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64EC);
}

extern int D_001D64EC;
extern int D_001D64F4;
int func_0011D0E0(...);
// Shared externs for this file
extern int D_001D64BC;
extern int D_001D64D0;
extern int _D_001D64D0;
extern int _D_001D2B64;
extern int _D_001D64EC;
extern int D_001D64F4;
