/* 6 functions from 0x00043710 to 0x00044350, found by Ghidra. */
#include "common.h"
struct V3 { int x, y, z; };

void _func_000438D0(char *obj)
{
    extern int _D_00307D10, _D_002EEAE0;
    extern char _D_002EEAE4[];
    extern int __stdcall _func_00116A90(int, int, int);
    extern void __stdcall _func_0004FA80(char*, void*);
    extern int __stdcall _func_0013E3F4(int, char*);
    extern int __stdcall _func_00048720(int, int);
    extern void __stdcall _func_001100A0(int, char**);
    extern void __stdcall _func_00048820(int, void*);
    extern void __stdcall _func_00012890(char*);
    int *s;
    char *t;
    int i;
    s = (int*)_func_00116A90(0x738, 1, 1);
    *(int**)(obj + 0x110) = s;
    for (i = 0; i < 0x1ce; i++) s[i] = 0;
    _func_0004FA80(obj, s + 1);
    s[0x1b] = _func_00048720(_D_00307D10, _func_0013E3F4(*(int*)(obj + 0x134), obj) );
    _func_001100A0(*(int*)(obj + 0x2c), &t);
    s[0x4f] = *(int*)(t + 0x30);
    s[0x50] = *(int*)(t + 0x34);
    s[0x51] = *(int*)(t + 0x38);
    _func_00048820(*(int*)(s[0x1b] + 8), s + 0x4f);
    s[0] = 0;
    *(unsigned char*)(s + 0x4c) = 0xff;
    for (i = 0; i != *(int*)(*(int*)(s[0x1b] + 8) + 0xd4); i++) {
        if (obj == *(char**)(*(int*)(*(int*)(s[0x1b] + 8) + 0xd8) + i * 8))
            *(unsigned char*)(s + 0x4c) = (unsigned char)i;
    }
    *(unsigned char*)(s + 0x1cd) = 0xff;
    s[0x1c5] = 0;
    s[0x1c4] = 0;
    *(float*)(s + 0x1c6) = *(float*)(s + 0x1c) + *(float*)(s + 0x1c);
    s[0x96] = 0;
    s[0x97] = 0;
    ((char**)_D_002EEAE4)[_D_002EEAE0] = obj;
    _D_002EEAE0++;
    _func_00012890(obj);
}

void _func_00043A00(int a,int b,int c)
{
 int _func_00047040(...);
 int x=*(int *)(a+0x110); int y=*(int *)(c+0x110);
 *(int *)(x+0x25c)=0; *(int *)(x+0x714)=0; *(int *)(x+0x710)=0;
 *(int *)(y+0x258)=0; _func_00047040(*(int *)(y+0x6c));
}

void _func_00043A40(int *out,float *scalar)
{
 int _func_0004FDE0(...); extern float D_001D27EC;
 int *edi=0,*esi=0; int p=* (int *)((char*)edi+0x258);
 if (!p) { int v[4]; _func_0004FDE0(v); esi[0]=v[0];esi[1]=v[1];esi[2]=v[2];*scalar=*(float*)((char*)edi+0x78); }
 else { int q=*(int*)((char*)p+0x110); esi[0]=*(int*)((char*)q+0x13c);esi[1]=*(int*)((char*)q+0x140);esi[2]=*(int*)((char*)q+0x144);*scalar=*(float*)((char*)edi+0x78)*D_001D27EC; }
}

