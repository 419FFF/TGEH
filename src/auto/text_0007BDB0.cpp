/* 16 functions from 0x0007BDB0 to 0x0007CC4C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct S_0007C760 { int *f0; float *f4; int *f8; float *fc; int *f10; float *f14; int *f18; float *f1c; int *f20; float *f24; };
extern struct S_0007C760 *__cdecl _func_0011CD40(int, int, int, int, int);
extern float __cdecl _func_00131760(void);
extern float __cdecl _func_0012EA60(void *);
extern void __cdecl _func_0011CDF0(int);
extern void __cdecl _func_0011CE10(int, int);
extern void __cdecl _func_0011CE20(int, int);
extern void __cdecl _func_0011CE30(int, int, int);
extern void __cdecl _func_0011CE50(int, int, int, int, int);
extern void __cdecl _func_0011CF30(int, int, int);

void func_0007BDB0(void)
{
  extern undefined4 D_002FA718;
  int func_0011B990(...);
  extern undefined4 D_002FA720;
  int iVar1;
  
  iVar1 = D_002FA718;
  *(short *)(D_002FA718 + 0x2a) = *(short *)(D_002FA718 + 0x2a) + -1;
  func_0011B990(iVar1);
  D_002FA720 = 0;
  return;
}

int func_0011E3D0(...);
int func_000E8390(...);
int func_0011CFC0(...);
void func_0007BDD0(void) { extern int D_002FA71C; extern char D_002FA900; extern float D_001D27B8; struct E { int a[3]; float x,y; int z[2]; }; struct E *e=(struct E*)&D_002FA900; int n=D_002FA71C; int i=0; while(i<n) { float next=e[i].y-e[i].x; e[i].y=next; if(next<D_001D27B8) { D_002FA71C--; for(int j=i;j<D_002FA71C;j++) ((int*)&e[j])[0]=((int*)&e[j+1])[0],((int*)&e[j])[1]=((int*)&e[j+1])[1],((int*)&e[j])[2]=((int*)&e[j+1])[2],((int*)&e[j])[3]=((int*)&e[j+1])[3],((int*)&e[j])[4]=((int*)&e[j+1])[4],((int*)&e[j])[5]=((int*)&e[j+1])[5],((int*)&e[j])[6]=((int*)&e[j+1])[6]; --i; } ++i; } }

void func_0007C3F0(float scale, unsigned int color, int a, int b) {
 extern int D_002FA71C;
 extern unsigned char D_002FA900;
 extern float D_001D290C;
 extern float D_001D6008;
 extern int D_001E4618;
 extern float D_001D27B0;
 if (D_002FA71C < 0x20) {
  char *entry = (char *)&D_002FA900 + D_002FA71C * 0x1c;
  *(float *)(entry+0x0) = (float)((color >> 16) & 0xff) * D_001D6008;
  *(float *)(entry+0x4) = (float)((color >> 8) & 0xff) * D_001D6008;
  *(float *)(entry+0x8) = (float)(color & 0xff) * D_001D6008;
  *(int *)(entry+0x10) = 0x3f800000;
  *(float *)(entry+0xc) = D_001D27B0 / ((float)D_001E4618 * scale);
  *(int *)(entry+0x14) = a;
  *(int *)(entry+0x18) = b;
  D_002FA71C++;
 }
}

void func_0007C4C0(int p) { extern int D_002FA71C; extern char D_002FA900; extern int D_002FA918; extern int D_001E4618; extern float D_001D290C; extern float D_001D27B0; int i=0; char *q=&D_002FA900; while(i<D_002FA71C) { if(D_002FA918==p) { float f=(float)D_001E4618; if(D_001E4618<0) f+=D_001D290C; *(float*)(q+0xc)=D_001D27B0/f+D_001D27B0/f; return; } ++i; q+=0x1c; } }

void _func_0007C710(void)
{
  extern int D_001D6654;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0007C520(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6654, _func_0007C520);
  _func_0011D270(&D_001D6654, _func_0007FC90);
  _func_0011D290(&D_001D6654, _func_00085E20);
  _func_0011D2B0(&D_001D6654, _func_000688D0);
}

void func_0007C750(void) {
    extern int D_001D6654;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6654);
}

extern float D_001D27B0, D_001D2B64;
extern void __cdecl _func_0011CFC0(int, int);
void __cdecl _func_0007C760(struct S_0007C760 **param_1, int param_2)
{
  unsigned int i;
  *param_1 = _func_0011CD40(10, 1, 1, 1, 1);
  i = 0;
  do {
    float *p;
    *(float *)((char *)(*param_1)->f4 + i) = (float)(_func_00131760() * 2 - D_001D27B0);
    *(int *)((char *)(*param_1)->f4 + i + 4) = 0;
    *(float *)((char *)(*param_1)->f4 + i + 8) = (float)(_func_00131760() * 2 - D_001D27B0);
    _func_0012EA60((char *)(*param_1)->f4 + i);
    p = (float *)((char *)(*param_1)->f4 + i);
    *p = _func_00131760() * *p * D_001D2B64;
    p = (float *)((char *)(*param_1)->f4 + i + 8);
    *p = _func_00131760() * *p * D_001D2B64;
    i += 12;
  } while (i < 0x78);
  (*param_1)->fc[0] = 0;
  *(int *)&(*param_1)->fc[1] = 0x3e4ccccd;
  *(int *)&(*param_1)->fc[2] = 0x3ecccccd;
  *(int *)&(*param_1)->f14[0] = 0x3f800000;
  *(int *)&(*param_1)->f14[1] = 0x3f800000;
  *(int *)&(*param_1)->f14[2] = 0;
  *(int *)&(*param_1)->f14[3] = 0x3ecccccd;
  *(int *)&(*param_1)->f1c[0] = 0x41700000;
  *(int *)&(*param_1)->f1c[1] = 0x41700000;
  *(int *)&(*param_1)->f24[0] = 0;
  *(int *)&(*param_1)->f24[1] = 0;
  *(int *)&(*param_1)->f24[2] = 0x3f800000;
  *(int *)&(*param_1)->f24[3] = 0x3f800000;
  _func_0011CDF0(param_2);
  _func_0011CE10(param_2, 0);
  _func_0011CE20(param_2, 0);
  _func_0011CE30(param_2, 0x442f0000, 0x44480000);
  _func_0011CE50(param_2, 0, 0xbf19999a, 0, 0xbe800000);
  _func_0011CF30(param_2, 0x42700000, 0x42700000);
  _func_0011CFC0(param_2, 0);
}

void func_0007C8E0(int param_1, int param_2)
{
  int func_00116A90(...);
  int func_0011DED0(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00116A90(0x10,1,0);
  *(undefined4 **)(param_1 + 0x17c) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(param_2 + 0x11c) = 1;
  *(undefined4 *)(param_2 + 0x120) = 1;
  func_0011DED0(param_1);
  return;
}

int func_0011CFC0(int, int);
void func_0007C940(int p) { int n; func_0011E3D0(p); n=func_000E8390(); if(n!=-1 && n>0 && n<=2) func_0011CFC0(p+0x54,0x42200000); else func_0011CFC0(p+0x54,0); }

void func_0007C990(void) {
    extern int D_001D6660;
    extern void func_0007C760(void);
    extern void func_0007C8E0(void);
    extern void func_00079D10(void);
    extern void func_0007C940(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0007C760, &D_001D6660);
    func_0011D270(func_0007C8E0, &D_001D6660);
    func_0011D290(func_00079D10, &D_001D6660);
    func_0011D2B0(func_0007C940, &D_001D6660);
    func_0011D2D0(func_00092810, &D_001D6660);
    func_0011D2F0(func_00083D60, &D_001D6660);
}

void func_0007C9F0(void) {
    extern int D_001D6660;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6660);
}

void _func_0007CC00(void)
{
  extern int D_001D666C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0007CA00(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D666C, _func_0007CA00);
  _func_0011D270(&D_001D666C, _func_0007FC90);
  _func_0011D290(&D_001D666C, _func_00085E20);
  _func_0011D2B0(&D_001D666C, _func_000688D0);
}

void func_0007CC40(void) {
    extern int D_001D666C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D666C);
}

