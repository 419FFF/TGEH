/* 11 functions from 0x000397C0 to 0x0003A709, found by Ghidra. */
#include "common.h"
#include <string.h>
extern unsigned int D_0000FFFF;
extern float D_001E461C;
extern float D_001D27B8;
extern float D_001D37AC;
struct __declspec(align(16)) Mtx39F90 { float m[16]; };
struct __declspec(align(16)) Vec39F90 { float v[4]; };
struct Vec39D30 { int x,y,z; };

extern char func_000A21A0(int);
extern void func_000A1D10(int, int, int, int, int, int);
extern float *func_0009C7A0(int, void *, int);
extern void func_00110060(int, void *);
extern void func_00090A90(int, void *);
extern int func_001031C0(int, void *);
extern void func_00103990(int, int);
extern char D_001D3314;
extern char D_001D44F8;
extern int D_00307DF8;
extern int D_003080B0;
#pragma optimize("y", on)
void __cdecl _func_000397C0(int a, int *p)
{
    extern int _D_00313B54;
    extern char _D_001D44C4, _D_001D44B4, _D_001D44A4, _D_001D4490;
    extern unsigned char _D_0031151C, _D_00311512;
    extern char __cdecl _func_000B5650(int);
    extern void __cdecl _func_000A22B0(int, int, int, int, int, int);
    extern void __cdecl _func_000A4010(int);
    extern char __cdecl _func_00011D20(int);
    extern void __cdecl _func_000ECB20(int, int, int);
    extern void __cdecl _func_000120B0(int, int, int, int);
    extern void __cdecl _func_0002D030(int);
    extern void __cdecl _func_0008BDC0(int, int);
    int *q;
    func_00103990(_D_00313B54 == 5 ? func_001031C0(D_00307DF8, &_D_001D44C4)
                  : *((char *)p + 0x410) != 0 ? func_001031C0(D_00307DF8, &_D_001D44B4)
                  : func_001031C0(D_00307DF8, &_D_001D44A4), 0);
    if (_func_000B5650(0xc)) {
        q = (int *)func_0009C7A0(a, &_D_001D4490, 0);
        _func_000A22B0(a + 100, 1, q[0], q[1], q[2], 0x3e4ccccd);
        _func_000A4010(_D_0031151C - 1);
        p[0] = 0x4d;
        return;
    }
    if (_D_00313B54 == 5 && _D_0031151C > 3) {
        if (!_func_00011D20(a)) {
            if ((_D_00311512 & 2) == 0)
                _func_000A4010(_D_0031151C - 3);
            _func_000ECB20(0, 0x42700000, 0x3e4ccccd);
            _func_000120B0(a + 0x150, 0x3f800000, 1, 1);
        }
        p[0] = 2;
        _func_0002D030(a);
        return;
    }
    q = (int *)func_0009C7A0(a, &_D_001D4490, 0);
    _func_000A22B0(a + 100, 1, q[0], q[1], q[2], 0x3e4ccccd);
    if (_D_00313B54 == 5 || *((char *)p + 0x410) != 0)
        _func_0008BDC0(1, p[0x105]);
    else
        _func_0008BDC0(0, p[0x105]);
    _func_000A4010(0);
    p[0] = 0x4d;
    _func_0002D030(a);
}

void _func_00039AA0(int a, int *p)
{
    extern int *D_00307D08;
    extern int D_00313B34, D_00313AD0, D_00313AF8, D_00313A88;
    extern float D_001D28C0, D_001D288C, D_00307DB4, D_002EE848, D_002EE850, D_001D3E00, D_001D2B64;
    extern int D_003080B8[16], D_003080FC, D_00307DD8;
    extern int _func_000BECD0(void);
    extern float _func_0012E910(float *);
    extern float _func_0012E8A0(float *, float *);
    extern float _func_0012EA00(float *);
    extern void _func_00099EB0(int);
    extern int _func_0006D7A0(int, int *, int *);
    int v[2];
    __declspec(align(16)) int s[0x58];
    int i;
    v[0] = *(int *)(D_00307D08[4] + D_00313B34 * 0x18);
    v[1] = *(int *)(D_00307D08[4] + D_00313AD0 * 0x18);
    _func_000BECD0();
    if (_func_0012E910((float *)v) <= D_001D28C0 || _func_0012E8A0((float *)v, (float *)p + 0xc5) >= D_001D288C && p[0xc4] != 0) {
        if (*(short *)(D_00307D08[4] + 0x10 + D_00313AF8 * 0x18) == 0 && *(short *)(D_00307D08[4] + 0x10 + D_00313A88 * 0x18) == 0)
            goto skip;
    }
    _func_0012EA00((float *)v);
    p[0xc5] = v[0];
    p[0xc6] = v[1];
    p[0xc4]++;
skip:
    if (((float *)p)[199] < D_00307DB4 || p[0xc4] > 10) {
        p[0] = 2;
        p[0x27] = 0;
        *((char *)p + 0x1a1) = 0;
        *((char *)a + 0x175) = 0;
        _func_00099EB0(a + 0x170);
    }
    for (i = 0; i < 0x58; i++) s[i] = 0;
    ((float *)s)[5] = D_002EE848 * D_001D3E00 + D_001D2B64;
    ((float *)s)[6] = D_002EE850 * D_001D3E00 + D_001D2B64;
    s[0] = 0x19;
    s[4] = 0x41f00000;
    s[2] = 0xc1200000;
    _func_0006D7A0(a, p + 4, s);
    for (i = 0; i < 16; i++) D_003080B8[i] = s[42 + i];
    D_003080FC = s[59];
    D_00307DD8 = s[58];
}

void func_00039D30(int a,int *p) {
 extern int *D_00307D08; extern int D_00313AF8,D_00313A68,D_00313B34,D_00313AD0;
 extern float D_001D39B4,D_001D3B18;
 extern char D_002EDDE8; extern int D_00307DD8,D_003080FC,D_003080B8[16];
 void func_0012ED20(void*,void*,float); int func_000A2370(int);
 int func_0006D7A0(int,int*,int*);
 float v[3]; __declspec(align(16)) int s[0x58];
 if(*(short*)(D_00307D08[4]+D_00313AF8*24+16)!=0) {
 p[0]=4;p[0x104]=0x3f800000;((char*)p)[0x346]=0;((char*)p)[0x347]=0;
 }
 if(*(short*)(D_00307D08[4]+D_00313A68*24+16)!=0)p[0]=24;
 ((float*)p)[0x27]-=D_001E461C*D_001D39B4;
 if(((float*)p)[0x27]<D_001D3B18)p[0x27]=0xc53b8000;
 v[0]=0;v[1]=0;v[2]=0;
 ((float*)p)[0xc6]+=D_001E461C;
 if(((float*)p)[0xc6]<((float*)p)[0xc7]){
 func_0012ED20(v,p+12,(float)((((float*)p)[0xc6]*((float*)p)[0xc5]+((float*)p)[0xc4])*D_001E461C));
 } else if(*(float*)(D_00307D08[4]+D_00313B34*24)!=D_001D27B8 || *(float*)(D_00307D08[4]+D_00313AD0*24)!=D_001D27B8)goto stop;
 if(func_000A2370(a+100)){
 float y=D_001E461C*((float*)p)[0x27]+v[1];
 for(int i=0;i<0x58;++i)s[i]=0;
 ((float*)s)[2]=y;s[1]=((int*)v)[0];s[0]=25;s[3]=((int*)v)[2];s[4]=0x41f00000;s[83]=(int)&D_002EDDE8;
 func_0006D7A0(a,p+4,s);
 D_00307DD8=s[58];D_003080FC=s[59];
 unsigned char flags=((char*)s)[0x40];
 memcpy(D_003080B8,s+42,64);
 if(flags&2)return;
 p[0]=8;memcpy(p+4,p+20,64);
 p[0x47]=p[0x10];p[0x48]=p[0x11];p[0x49]=p[0x12];return;
 }
 stop:p[0x27]=0;p[0]=2;p[0x47]=p[0x20];p[0x48]=p[0x21];p[0x49]=p[0x22];
}

void func_00039F90(int a, int *p)
{
    int same;
    int h;
    double f;
    Mtx39F90 m;
    if (func_000A21A0(p[0x9d])) {
        func_000A1D10(p[0x9d], 1, 0, (int)&D_0000FFFF, 0x42480000, 0);
        p[0] = 0x2c;
        p[0x27] = 0;
        *((char *)p + 0x310) = 0;
    }
    *((char *)p + 0x311) = 0;
    p[0xc7] = 0;
    p[0xc8] = 0x3f000000;
    ((float *)p)[0xc6] = (float)-((f = *func_0009C7A0(a, &D_001D3314, 0), ((float *)p)[0xc5] = (float)f, f) / ((float *)p)[0xc8]);
    func_00110060(*(int *)(a + 0x2c), &m);
    p[0xc9] = *(int *)&m.m[12];
    p[0xca] = *(int *)&m.m[13];
    p[0xcb] = *(int *)&m.m[14];
    func_00090A90(a, &m.m[8]);
    same = D_00307DF8 == D_003080B0;
    h = func_001031C0(D_00307DF8, &D_001D44F8);
    if (h != 0) func_00103990(h, same);
}
#pragma optimize("", on)
