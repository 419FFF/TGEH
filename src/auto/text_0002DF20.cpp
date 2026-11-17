/* 8 functions from 0x0002DF20 to 0x0002ED28, found by Ghidra. */
#include "common.h"

struct Blk2DF20 { int d[0x118]; };
extern Blk2DF20 _D_002ED780;
extern char _D_002EDBF4, _D_002EDBF5, _D_00307D6C;
extern int _D_002EDBE0, _D_002EDBE4, _D_002EDBE8, _D_002EDBF0;

#pragma optimize("y", on)
void func_0002E000(int p, int *a, int *b, int q, char flag) { *(int *)(p+0x1e4)=q; *(int *)(p+0x1e0)=0; *(int *)(p+0x134)=a[0]; *(int *)(p+0x138)=a[1]; *(int *)(p+0x13c)=a[2]; *(int *)(p+0x140)=b[0]; *(int *)(p+0x144)=b[1]; *(int *)(p+0x148)=b[2]; *(char *)(p+0x1ae)=flag; if(flag) *(char *)(p+0x1ad)=1; }

void __cdecl _func_0002E300(int param_1) { volatile int local; local = 11; }

typedef unsigned int u32;
extern int func_00110060(...),func_0012F7A0(...),func_0012F4C0(...),func_00112250(...);
bool func_0002EB20(int a,int b,int *p) { extern int func_00110060(...),func_0012F7A0(...),func_0012F4C0(...),func_00112250(...); __declspec(align(16)) char local_90[0x30]; unsigned int v[3]; char local_50[0x4c]; char pad[0x10]; func_00110060(p[11],local_90); v[0]=p[16];v[1]=p[17];v[2]=p[18];func_0012F7A0(v,local_90); func_0012F4C0(local_50,a,local_90); return (bool)func_00112250(p+12,local_50,b); }

bool func_0002EBB0(int a,int b,int *p) { extern int func_00110060(...),func_0012F7A0(...),func_0012F4C0(...),func_00112250(...); __declspec(align(16)) char local_90[0x30]; char local_50[0x4c]; unsigned int v[3]; func_00110060(p,local_90);v[0]=p[0];v[1]=p[1];v[2]=p[2];func_0012F7A0(v,local_90);func_0012F4C0(local_50,a,local_90);return (bool)func_00112250(p+4,local_50,b); }

