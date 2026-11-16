/* 8 functions from 0x0002DF20 to 0x0002ED28, found by Ghidra. */
#include "common.h"

#pragma optimize("y", on)
void func_0002E000(int p, int *a, int *b, int q, char flag) { *(int *)(p+0x1e4)=q; *(int *)(p+0x1e0)=0; *(int *)(p+0x134)=a[0]; *(int *)(p+0x138)=a[1]; *(int *)(p+0x13c)=a[2]; *(int *)(p+0x140)=b[0]; *(int *)(p+0x144)=b[1]; *(int *)(p+0x148)=b[2]; *(char *)(p+0x1ae)=flag; if(flag) *(char *)(p+0x1ad)=1; }

void __cdecl _func_0002E300(int param_1) { volatile int local; local = 11; }

typedef unsigned int u32;
extern int func_00110060(...),func_0012F7A0(...),func_0012F4C0(...),func_00112250(...);
int func_0002EB20(int x,int y, int *p) { char out[128]; u32 v[3]; func_00110060(p[0xb],out); v[0]=p[16];v[1]=p[17];v[2]=p[18];func_0012F7A0(v,out); func_0012F4C0(out,x,out); return func_00112250(p+12,out,y)!=0; }

int func_0002EBB0(int x,int y,int *p) { char out[128]; u32 v[3]; func_00110060(p,out); v[0]=p[0];v[1]=p[1];v[2]=p[2];func_0012F7A0(v,out); func_0012F4C0(out,x,out); return func_00112250(p+4,out,y)!=0; }

