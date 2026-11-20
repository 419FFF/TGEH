/* 11 functions from 0x00016B70 to 0x00017A18, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern int D_00313B60;
extern void func_00110060(void*,void*);
extern int func_0012E6D0(void*,void*,void*);
void func_00016B70(void *p) {
    volatile char frame[0x124];
    void *obj=*(void**)p;
    func_00110060((char*)obj+0x2c, (char*)frame+0x70);
    func_00110060((void*)D_00313B60, (char*)frame+0xf8);
    func_0012E6D0((char*)frame+0x48,(char*)frame+0x134,(char*)frame+0xb0);
}

#pragma optimize("y", on)
int func_000172A0(int *p)
{
  extern int D_002EB030;
  int func_00016B70(int *);
  p = &D_002EB030;
  return func_00016B70(p);
}
#pragma optimize("", on)

void func_000172B0(int param_1) { int func_0005C5E0(...); int func_0012F120(...); int func_0009C7A0(...); int func_0012FE20(void*,float,float,float); int func_00110330(...); int func_001105E0(...); int func_00110000(...); int func_00110550(...); int func_0010FBA0(...); int func_0009D3E0(...); extern int _D_002EB038; extern int _D_001D2BD8; extern int _D_001D2BC4; extern float _D_001D2BC0; extern int _D_002EB058; extern int _D_002EB060; extern int _D_002EB05C; extern int _D_002EB064; extern int _D_003080B0; float local[12]; func_0005C5E0(&_D_002EB038); func_0012F120(local); int *p=(int*)func_0009C7A0(param_1,&_D_001D2BD8,0); ((int*)local)[8]=p[0]; ((int*)local)[9]=p[1]; ((int*)local)[10]=p[2]; float *q=(float*)func_0009C7A0(param_1,&_D_001D2BC4,0); func_0012FE20(local,_D_001D2BC0*q[0],_D_001D2BC0*q[1],_D_001D2BC0*q[2]); if (_D_002EB058) func_00110330(_D_002EB058,1); if (_D_002EB060) func_00110330(_D_002EB060,1); if (_D_002EB05C) func_00110330(_D_002EB05C,0); if (_D_002EB064) func_00110330(_D_002EB064,0); func_001105E0(*(int*)(param_1+0x2c),local,0); func_00110000(*(int*)(param_1+0x2c)); func_00110550(*(int*)(_D_003080B0+0x2c),*(int*)(param_1+0x2c),8); func_0010FBA0(*(int*)(param_1+0x2c),**(int**)(param_1+0x58)); func_0009D3E0(param_1); }

#pragma optimize("y", on)
void func_000173D0(int param_1) { int func_0006B5A0(...); int func_00110060(...); int func_00110000(...); int func_0012F7A0(...); int func_000F8F40(void*,void*,float); int func_0005C500(...); int func_0012F610(...); int func_001031C0(...); int func_00103990(...); int func_001031A0(...); int func_00016970(...); extern int _D_001D2B50; extern int _D_00314240; extern int _D_002EB070; extern int _D_002EB078; extern int _D_002EB07C; extern int _D_002EB080; extern float _D_00307DB4; extern float _D_001D2808; extern int _D_001D2B28; extern float _D_002EB074; extern int _D_002EB0A8; extern char _D_002EB094; extern char _D_002EB0AD; __declspec(align(16)) float m[16]; int v[4]; func_0006B5A0(param_1,&_D_001D2B50); *(char*)(_D_00314240+0x19e0)=1; _D_002EB070=param_1; func_00110060(*(int*)(param_1+0x2c),m); func_00110000(*(int*)(param_1+0x2c)); v[0]=*(int*)(param_1+0xe8); v[1]=*(int*)(param_1+0xec); v[2]=*(int*)(param_1+0xf0); func_0012F7A0(v,m); int r=func_000F8F40(*(void**)(param_1+0x2c),v,10000.0f); func_0005C500(&_D_002EB078,r); _D_002EB078=0; _D_002EB07C=0x41f00000; _D_002EB080=0x41900000; func_0012F610(&_D_002EB078,_D_00314240+0x27c0); _D_002EB074=_D_00307DB4+_D_001D2808; _D_002EB0A8=func_001031C0(param_1,&_D_001D2B28); func_00103990(_D_002EB0A8,1); func_001031A0(_D_002EB0A8,0); _D_002EB094=0; _D_002EB0AD=1; func_00016970(&_D_002EB070); }

extern int D_002EB070;
int func_00016B70(int *);
int func_000174F0(int *p)
{
  p = &D_002EB070;
  return func_00016B70(p);
}

#pragma optimize("", on)
void func_00017500(int param_1) { int func_0005C5E0(...); int func_0012F120(...); int func_0009C7A0(...); int func_0012FE20(...); int func_001105E0(...); int func_00110000(...); extern int _D_002EB078; extern int _D_001D2BD8; extern int _D_001D2BC4; extern float _D_001D2BC0; extern int _D_00314240; float local[12]; func_0005C5E0(&_D_002EB078); func_0012F120(local); int *p=(int*)func_0009C7A0(param_1,&_D_001D2BD8,0); ((int*)local)[8]=p[0]; ((int*)local)[9]=p[1]; ((int*)local)[10]=p[2]; float *q=(float*)func_0009C7A0(param_1,&_D_001D2BC4,0); func_0012FE20(local,q[0]*_D_001D2BC0,q[1]*_D_001D2BC0,q[2]*_D_001D2BC0); func_001105E0(*(int*)(param_1+0x2c),local,0); func_00110000(*(int*)(param_1+0x2c)); *(char*)(_D_00314240+0x19e0)=0; }

int func_00016B70(...);
int func_00016B70(...); void func_000176F0(int param_1) { extern int _D_00314240; extern char _D_002EB0B0; extern float _D_002EB0BC; extern float _D_001D2BE8; int i=0; int *p=(int*)(_D_00314240+0x1b30); int *q=p; do { if (*q==param_1) break; ++i; q+=0x28; } while(i<0x14); i=0; do { if (*p==param_1) goto found; ++i; p+=0x28; } while(i<0x14); i=-1; found: i*=0x40; func_00016B70((&_D_002EB0B0)+i); if (*((float*)(&_D_002EB0BC)+i/4)<_D_001D2BE8) *((unsigned int*)(&_D_002EB0BC)+i/4)=0xc3480000; }

#pragma optimize("y", on)
void func_00017840(int p)
{
    int func_00116A90(...); int func_0004FA80(...); int func_00048720(...); int func_00056D50(...);
    int func_00045A60(...); int func_000A1BB0(...); int func_00131990(...);
    extern int D_00307D10;
    extern char D_001D2BEC, D_001D29C8, D_001D29C7;
    int *w = (int *)(p + 0x17c);
    unsigned int *x = (unsigned int *)func_00116A90(0x270, 1, 1);
    int n;
    *(unsigned int **)(p + 0x110) = x;
    for (int i = 0; i < 0x9c; i++) x[i] = 0;
    func_0004FA80(p, x + 1);
    *((char *)x + 0x99) = 0;
    x[0xd] = 0;
    x[0x1a] = *(unsigned int *)(p + 0x134);
    n = (int)((double)*(float *)(p + 0x138) / (double)*(float *)(x[0x1a] + 0x74)) << 1;
    x[0x21] = n;
    x[0x1b] = func_00048720(D_00307D10, n, x[0x1a], p);
    x[0x19] = *(unsigned int *)(p + 0x130);
    x[1] = 5;
    func_00056D50(p, x + 1);
    w[0] = 0;
    w[1] = 0x3f800000; w[2] = 0x3f800000; w[3] = 0x3f800000; w[4] = 0x3f800000;
    w[5] = 0x3f800000; w[6] = 0x3f800000; w[7] = 0x3f800000; w[8] = 0x3f800000;
    w[9] = 0;
    x[0] = 0;
    func_00045A60(p);
    x[0x96] = func_000A1BB0(p, &D_001D2BEC);
    x[0x97] = func_000A1BB0(p, &D_001D29C8);
    func_00131990(&D_001D29C7);
    x[0x9a] = 0xffffffff;
}
#pragma optimize("", on)
void func_00017960(float param_1) { extern float _D_001D2BF4; extern float _D_001D27B8; int func_00131210(...); float v=func_00131210(param_1); if(v < _D_001D2BF4) return; if(v == 0.0f) { func_00131210(param_1); return; } if(param_1 == 0.0f) return; func_00131210(param_1); }

