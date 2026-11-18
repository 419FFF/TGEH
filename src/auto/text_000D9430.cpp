/* 9 functions from 0x000D9430 to 0x000DA36F, found by Ghidra. */
#include "common.h"
struct D9FB0_Obj { char pad0[2]; char flag; char pad3; float f4; char pad8[0x28]; float f30, f34, f38; };
__declspec(align(16)) struct D9FB0_Mat { float f[16]; };
struct D9FB0_Ent { int d; D9FB0_Obj *obj; float vx, vy, vz; int a, b, c; };

void func_000D9430(void) { volatile int x[66]; x[0] = 0; x[1] = 0; }

void __cdecl _func_000D9B60(void) { extern int _D_0031E508; extern float _D_00307DB4,_D_001D2808; extern void __cdecl _func_000D8EC0(void); extern void __cdecl _func_000D8C60(void); extern void __cdecl _func_000D92E0(void); extern void __cdecl _func_000D76B0(void); extern void __cdecl _func_000D9230(void); extern char __cdecl _func_000D5120(void); extern void __cdecl _func_000B6C80(void); extern void __cdecl _func_000B6BE0(void); char *p=(char *)_D_0031E508; _func_000D8EC0(); _func_000D8C60(); _func_000D92E0(); _func_000D76B0(); if(!p[0xda98] && _D_00307DB4-*(float *)(p+0xda9c)>_D_001D2808){ --*(int *)(p+0xdaa0); _func_000D9230(); } if(_func_000D5120() || *p) { *p=1; if(!*(char *)_D_0031E508) return; _func_000B6BE0(); return; } if(*(int *)(p+0xdaa0)>=0)return; if(!*(char *)_D_0031E508){_func_000B6C80();return;} *p=1; if(!*(char *)_D_0031E508)return; _func_000B6BE0(); }

void __cdecl _func_000D9BF0(int p) { extern int _D_0031E514; extern char _D_001DB33C; extern int __cdecl _func_001031C0(int,void*,int); extern void __cdecl _func_00103990(int); extern void __cdecl _func_00110060(int,void*); extern void __cdecl _func_0007F4C0(int,void*); extern void __cdecl _func_00063F60(int,int,int); unsigned char local[64]; int x=_func_001031C0(*(int *)(_D_0031E514+0x10),&_D_001DB33C,0); _func_00103990(x); _func_00110060(p,local+8); _func_0007F4C0(0x43960000,local+0x40); _func_00063F60(0,0x40a00000,0x3f800000); }

void func_000D9FB0(void)
{
  extern D9FB0_Obj *D_0031E514;
  extern D9FB0_Ent D_0031E570[10];
  extern float D_001E461C, D_001D3AE4, D_001D2808;
  extern void func_0012F120(D9FB0_Mat *);
  extern void func_0012FE20(D9FB0_Mat *, int, int, int);
  extern void func_0012F2E0(D9FB0_Mat *, D9FB0_Obj *);
  extern void func_000D5170(D9FB0_Obj *, int);
  D9FB0_Mat m;
  D9FB0_Obj *g = D_0031E514;
  D9FB0_Ent *e;
  g->f4 = D_001E461C + g->f4;
  for (e = D_0031E570; e < &D_0031E570[10]; e++) {
    e->vy = e->vy - D_001E461C * D_001D3AE4;
    e->obj->f30 = D_001E461C * e->vx + e->obj->f30;
    e->obj->f34 = D_001E461C * e->vy + e->obj->f34;
    e->obj->f38 = D_001E461C * e->vz + e->obj->f38;
    func_0012F120(&m);
    func_0012FE20(&m, e->a, e->b, e->c);
    func_0012F2E0(&m, e->obj);
    *(D9FB0_Mat *)e->obj = m;
    func_000D5170(e->obj, e->d);
  }
  if (g->f4 > D_001D2808) g->flag = 1;
}

void __cdecl _func_000DA0A0(void) { extern int _D_0031E514; extern char _D_001DB34C; extern float _D_001DB348,_D_001D27B8; extern int __cdecl _func_001031C0(int,void*,int); extern void __cdecl _func_00103990(int); extern void __cdecl _func_000D9C50(void); int p=_D_0031E514; int x=_func_001031C0(*(int *)(p+0x10),&_D_001DB34C,0); _func_00103990(x); float *t=(float *)(p+0xc08); double f=(double)*t-(double)_D_001DB348; *t=(float)f; if(f<(double)_D_001D27B8){ *(int *)t=0; _func_000D9C50(); } }

unsigned char func_000DA2A0(char *p) { extern float D_001D27F4,D_001D3ADC; extern float func_00131210(float); extern void func_0012FE20(...); extern int func_000D5170(...); float f=(*(float *)(p+0x130)-*(float *)(p+0x12c))*D_001D27F4; if(func_00131210(f)>D_001D3ADC) { f=f+*(float *)(p+0x12c); *(float *)(p+0x12c)=f; func_0012FE20(p+0xa0,0,0,f); func_000D5170(p+0xa0,*(int *)(p+0x94)); return 0; } return 1; }

float __cdecl _func_000DA320(float a,float b) { extern float _D_001D286C,_D_001D2868; float d; if(b==a){ d=b-a; if(d<=_D_001D286C) return d; return d-_D_001D2868; } if(b>a){ d=b-a; if(d<_D_001D286C)return d; return d-_D_001D2868; } d=a-b; if(d<_D_001D286C)return b-a; return (b-a)+_D_001D2868; }

