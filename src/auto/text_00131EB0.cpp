/* 20 functions from 0x00131EB0 to 0x00132E0C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct S_00132C60 { char pad0[0x18]; unsigned int flags; int pad1c, pad20; void *f24; unsigned short n; char pad2a[0x1a]; char *f44; int pad48; unsigned int cnt; char *f50; };
extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall RtlLeaveCriticalSection(void*);
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

int func_00132010(int p,int *out) { int func_001318D0(int,char *); int func_00131850(char *); int func_00148710(int,char *); int func_00116A90(int,int,int); int func_00148740(int,char *); int func_00148800(int,int,int); int func_00148B10(int); char name[256]; int obj; int size; int data; func_001318D0(p,name); obj=func_00131850(name); if(!obj) return 0; size=func_00148710(*(int *)(obj+0x8c),name); if(!size) return 0; data=func_00116A90(size,1,1); if(!data) return 0; obj=func_00148740(*(int *)(obj+0x8c),name); func_00148800(obj,data,size); func_00148B10(obj); if(out) *out=size; return data; }

int func_001320D0(int p,int *out)
{
 int func_00131C80(...); int __stdcall func_0010BF0E(int,int); int func_00116A90(...); int func_00131D60(...); int func_00131D10(...);
 int obj=func_00131C80(p,0);
 if(!obj)return 0;
 int v=func_0010BF0E(*(int *)(obj+4),0);
 if(!v)return 0;
 int alloc=func_00116A90(v,1,1);
 if(!alloc)return 0;
 if(func_00131D60(obj,alloc,v)!=v)return 0;
 func_00131D10(obj);
 if(out)*out=v;
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

int func_00132210(void) { return 0; }

void func_00132280(float *param) { (void)param; }

void func_00132300(int *param) { (void)param; }

void func_001325C0(int *p) {
 int __cdecl func_00116FB0(int);
 if(p[4])func_00116FB0(p[4]); if(p[5])func_00116FB0(p[5]); if(p[7])func_00116FB0(p[7]);
 if(p[8])func_00116FB0(p[8]); if(p[9])func_00116FB0(p[9]); if(p[10])func_00116FB0(p[10]);
 if(p[6])func_00116FB0(p[6]); if(p[12])func_00116FB0(p[12]); if(p[14])func_00116FB0(p[14]); func_00116FB0((int)p);
}

void func_00132890(int p, int q) {(void)p;(void)q;}

int func_00132950(int *p) {
 int __stdcall func_0013D090(void); int __stdcall func_0013D0A0(int);
 int __stdcall func_00116A90(int,int,int);
 unsigned int flags=*(unsigned int *)(*(int *)(p[1]));
 int n=1;
 if(flags&0x40000)n=4;
 if(flags&1)n++; if(flags&2)n++; if(flags&4)n++; if(flags&8)n++; if(flags&0x10)n++;
 if(flags&0x100000)n++; if(flags&0x20000)n++;
 int size=((n*8+((p[0x44/4]+7)*6)+p[0x34/4])*2);
 size+=func_0013D090()*p[0x44/4]*p[3];
 size+=func_0013D0A0(*(int *)p[1])*p[3];
 return func_00116A90(size,1,0);
}

undefined4 func_00132B80(undefined4 param_1, undefined4 param_2)
{
  int func_00117100(...);
  int func_00126180(...);
  int func_00117130(...);
  int func_001329E0(...);
  int func_00116FB0(...);
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  byte bVar6;
  // Keeping stack size based on previous attempt, hoping the compiler handles it.
  int local_c0 [47]; 
  
  bVar6 = 0;
  func_00117100();
  iVar1 = func_00126180(param_1);
  func_00117130();
  *(undefined4 *)(iVar1 + 4) = param_2;
  uVar2 = func_00126180(param_1);
  *(undefined4 *)(iVar1 + 0x38) = uVar2;
  uVar2 = func_00126180(param_1);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  uVar2 = func_00126180(param_1);
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  uVar2 = func_00126180(param_1);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  uVar2 = func_00126180(param_1);
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  uVar2 = func_00126180(param_1);
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  uVar2 = func_00126180(param_1);
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  uVar2 = func_00126180(param_1);
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  uVar2 = func_00126180(param_1);
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  uVar2 = func_00126180(param_1);
  *(undefined4 *)(iVar1 + 0x48) = uVar2;
  uVar4 = 0;
  if (*(int *)(iVar1 + 0x44) != 0) {
    do {
      uVar2 = func_00126180(param_1);
      *(undefined4 *)(*(int *)(iVar1 + 0x48) + uVar4 * 4) = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(iVar1 + 0x44));
  }
  piVar5 = local_c0;
  for (iVar3 = 0x2e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  local_c0[0] = iVar1;
  uVar2 = func_001329E0(local_c0);
  func_00116FB0(iVar1);
  return uVar2;
}

void func_00132C60(char *p)
{
    extern char D_003326AC[]; extern int D_00332248[16]; extern int D_00332200[16]; extern int D_00331D64;
    void __stdcall func_0014CD60(unsigned int,int,int);
    void __stdcall func_0014E090(void*);
    void func_00116FB0(void*);
    void func_0013E310(void);
    unsigned int i;
    int off = 0;
    if (p != 0) {
        RtlEnterCriticalSection(D_003326AC);
        i = 0;
        do {
            if (D_00332248[i] || D_00332200[i]) {
                D_00332248[i] = 0;
                D_00332200[i] = 0;
                func_0014CD60(i, 0, 0);
            }
            i++;
        } while (i < 16);
        RtlLeaveCriticalSection(D_003326AC);
        if (*(int*)(p + 0x44)) {
            for (i = 0; i < *(unsigned short*)(p + 0x28); i++, off += 0xc)
                func_0014E090((void*)(*(int*)(p + 0x44) + off));
        }
        if (*(unsigned int*)(p + 0x18) & 0x20000) func_00116FB0(*(void**)(p + 0x24));
        i = (*(unsigned int*)(p + 0x18) & 0x40000) ? 3 : 0;
        if (i < *(unsigned int*)(p + 0x4c)) {
            off = i << 4;
            for (; i < *(unsigned int*)(p + 0x4c); i++, off += 0x10)
                func_0014E090((void*)(*(int*)(p + 0x50) + off));
        }
        func_00116FB0(p);
        if (--D_00331D64 == 0) func_0013E310();
    }
}

void func_00132D50(int a,int b) {
 extern int D_00331C84,D_00331C88,D_00331B84,D_00331B80;
 extern long double D_00331D60,D_0032923C;
 extern unsigned char D_00331BB2,D_003268B0;
 extern int D_00331B90;
 char func_00115E70(int,void*,int);
 D_00331C84=0; D_00331C88=0;
 if(a) {
  if(a!=D_00331B84 || D_00331D60!=D_0032923C || D_00331B80==0) {
   D_00331BB2=D_003268B0; D_00331C84=D_00331B80;
   if(!func_00115E70(a,&D_00331B90,0)) D_00331C84=0;
   else {D_00331B84=a; D_00331D60=D_0032923C;}
  }
 }
 if(b) {
  D_00331BB2=D_003268B0; D_00331C88=0;
  if(!func_00115E70(b,&D_00331B90,0)) D_00331C88=0;
 }
}

