/* 20 functions from 0x00131EB0 to 0x00132E0C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001321C0 {
    int func_001321C0(void);
};


int func_00131FB0(int p)
{
 int func_00148AE0(...);
 int v=*(int *)(p+8);
 if(v) return func_00148AE0(v);
 return *(int *)(p+0x14);
}

int func_00131FD0(int p)
{
 extern int D_00331B70; int func_00148AF0(...); int __stdcall func_0010BF0E(int,int);
 int v; if(D_00331B70) return 0;
 v=*(int *)(p+8); if(v)return func_00148AF0(v);
 if(*(int *)(p+0x24)==-1) *(int *)(p+0x24)=func_0010BF0E(*(int *)(p+4),0);
 return *(int *)(p+0x14)>=*(int *)(p+0x24);
}

int func_00132010(int p,int *out)
{
 int func_001318D0(...); int func_00131850(...); int func_00148710(...); int func_00116A90(...); int func_00148740(...); int func_00148800(...); int func_00148B10(...);
 char local[256];
 func_001318D0(p,local); int obj=func_00131850(local); if(!obj)return 0;
 int v=func_00148710(*(int *)(obj+0x8c),local); if(!v)return 0;
 int alloc=func_00116A90(v,1,1); if(!alloc)return 0;
 int data=func_00148740(*(int *)(obj+0x8c),local);
 func_00148800(data,alloc,v); func_00148B10(data);
 if(out)*out=v;
 return alloc;
}

int func_001320D0(int p)
{
 int func_00131C80(...); int __stdcall func_0010BF0E(int,int); int func_00116A90(...); int func_00131D60(...); int func_00131D10(...);
 int obj=func_00131C80(p,0); if(!obj)return 0;
 int v=func_0010BF0E(*(int *)(obj+4),0); if(!v)return 0;
 int alloc=func_00116A90(v,1,1); if(!alloc)return 0;
 if(func_00131D60(obj,alloc,v)!=v)return 0;
 func_00131D10(obj);
 return alloc;
}

void func_00132140(int param_1, int param_2) {
 extern unsigned char D_003291C8;
 int func_00132010(int,int); int func_001320D0(int,int);
 if (D_003291C8 & 2) {
  if (func_001320D0(param_1,param_2)==0) func_00132010(param_1,param_2);
 } else {
  if (func_00132010(param_1,param_2)==0) func_001320D0(param_1,param_2);
 }
}

void func_00132190(void)
{
  extern undefined4 D_00331B80;
  int func_00116A90(...);
  extern undefined D_00331B90;
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  D_00331B80 = func_00116A90(0x1000,1,1);
  puVar2 = (undefined4 *)((undefined *)&D_00331B90);
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  return;
}

int C_001321C0::func_001321C0(void)
{
  uint in_ECX = (uint)this;
  int iVar1;
  
  iVar1 = 1;
  if ((in_ECX & 0x40000) != 0) {
    iVar1 = 4;
  }
  if ((in_ECX & 1) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 2) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 4) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 8) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 0x100000) != 0) {
    iVar1 = iVar1 + 1;
  }
  if ((in_ECX & 0x20000) != 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

int func_00132210(void) {
 return 0;
}

void func_00132280(float *param) { (void)param; }

void func_00132300(int *param) { (void)param; }

