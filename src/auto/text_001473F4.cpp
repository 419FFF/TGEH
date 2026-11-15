/* 20 functions from 0x001473F4 to 0x00148211, found by Ghidra. */
#include "common.h"

#pragma optimize("y", off)
extern int __stdcall func_0010BF49(int,int,int,int,int,int,int);
extern int __stdcall func_001473AC(int,int);
extern int __stdcall func_001473F4(int,int,void*,int);
extern int __stdcall func_0013F44A(void*,int);
extern int __stdcall func_0010B7F8(int);
extern int __stdcall func_0010AA7B(void);
extern int _D_001E27B4;
int __stdcall func_00147577(int a,int b) { return b ? 0x491 : 0; }

void __stdcall func_001475F7(int a) { int x=0; }

int __stdcall func_00147ADC(void* a,int b,char* c,int d,int e,int f) { return e == -1 ? 0 : e; }

int __stdcall func_00147B97(int* a,unsigned short* b) { int x=1; return x; }

void __stdcall _func_00147C30(int arg) { if (arg == 0) return; }
#pragma optimize("", on)
void __stdcall func_00147D02(unsigned int a0) { extern void __stdcall _func_00147C34(int,int); _func_00147C34(a0,1); }
#pragma optimize("y", off)
extern int* __imp__HalBootSMCVideoMode;
int func_00147D10(void)
{
  return *__imp__HalBootSMCVideoMode;
}

#pragma optimize("", on)
void __stdcall _func_00147C34(int, int);
