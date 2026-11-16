/* 31 functions from 0x000A16A0 to 0x000A2617, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A1BB0(int param_1,int param_2) { int func_000A18A0(...);extern int _D_003080AC; int mode; unsigned char *ecx=(unsigned char*)param_1;if(ecx[0x10]&8){volatile int three=3;int eax=three;int v=param_2;func_000A18A0(ecx+0x64,v,eax);return;}int edx=_D_003080AC;int eax=(edx!=0)+1;int v=param_2;func_000A18A0(ecx+0x64,v,eax); }

void func_000A1C00(int param_1) { int func_00115E40(...);int func_0011C3E0(...);int func_00116FB0(...);int esi=param_1;int eax=*(int*)(esi+0x18);if(*(int*)(eax+0x20)==esi)*(int*)(eax+0x20)=0;int edi=0;if(*(unsigned short*)(esi+0xc)>0){do{eax=*(int*)(esi+0x10);eax=*(int*)(eax+edi*8);if(eax)func_00115E40(eax);unsigned int ecx=*(unsigned short*)(esi+0xc);++edi;}while((unsigned int)edi<*(unsigned short*)(esi+0xc));}func_0011C3E0(esi);func_00116FB0(esi);}

void func_000A1C50(int param_1,int param_2) { int func_000A18A0(...);extern int D_001D756C,D_001D29C7;int a,b;if(*(char*)(param_1+0x30)){a=func_000A18A0(param_1,&D_001D756C,param_2);*(int*)(param_1+0x18)=a;b=func_000A18A0(param_1,&D_001D756C,param_2);*(int*)(param_1+0x1c)=b;}else{a=func_000A18A0(param_1,&D_001D29C7,param_2);*(int*)(param_1+0x18)=a;b=func_000A18A0(param_1,&D_001D29C7,param_2);*(int*)(param_1+0x1c)=b;}}

static void _func_000A1CB0(int param_1,int param_2)
{
  int func_000A1C00(...);
  if (!* (int*)(param_1)) {
    return;
  }
  int i=0, v2 = *(int*)(param_1+8);
  while(i<v2) {
    void* ptr = (void*)*(int**)param_1;
    if (*(int*)((char*)ptr + 8)) {
      func_000A1C00(ptr, 0);
    }
    i++;
  }
}

void _func_000A1E60(int p) { int _func_001165E0(int); unsigned int i=0; unsigned short n=*(unsigned short*)(p+0xc); if(n>0){ do { int *base=*(int**)(p+0x10); int x=base[i*2]; if(x)_func_001165E0(x); ++i; } while(i<*(unsigned short*)(p+0xc)); } }

extern int func_00115F60(int, int);
extern void func_000A1C00(...);
extern void func_00116FB0(...);
void func_000A1EA0(int param_1, int param_2) { unsigned int i = 0;while (i < *(unsigned short*)(param_1 + 0xc)) { int base = *(int*)(param_1 + 0x10); int *p = (int*)(base + i * 8); int value = *p;if (value) func_00115F60(value, param_2);i++;} }

longdouble func_000A1EE0(int param_1)
{
  int func_00116480(...);
  extern longdouble _D_001D27B8;
  uint count = *(ushort*)(param_1+0xc);
  void* base = (void*)*(int*)(param_1+0x10);
  for(uint i=0; i<count; i++) {
    int val = *(int*)((char*)base + i*8);
    if(val) return func_00116480();
  }
  return _D_001D27B8;
}

undefined4 func_000A1F50(int p){int func_001163C0(int); unsigned int n=*(unsigned short*)(p+0xc); int *a=*(int**)(p+0x10); unsigned int i=0; while(i<n){if(a[0]) return func_001163C0(a[0]); ++i;a+=2;} return 0;}

void func_000A1FC0(int p){int func_00116480(int); int func_001163C0(int); int func_0013E3F4(...);int func_00115E40(int); extern float _D_001D27B8; if(p==*(int*)(*(int*)(p+0x18)+0x20)){unsigned int n=*(unsigned short*)(p+0xc),i=0;int *a=*(int**)(p+0x10);while(i<n){if(a[0]){func_00116480(a[0]);break;}i++;a+=2;} unsigned short x=func_0013E3F4(_D_001D27B8);*(unsigned short*)(*(int*)(p+0x18)+0x28)=x;i=0;a=*(int**)(p+0x10);while(i<n){if(a[0]){x=func_001163C0(a[0]);goto setx;}i++;a+=2;}x=0;setx:*(unsigned short*)(*(int*)(p+0x18)+0x2a)=x;} unsigned int i=0,n=*(unsigned short*)(p+0xc);int *a=*(int**)(p+0x10);while(i<n){if(a[i*2])func_00115E40(a[i*2]);a[i*2]=0;i++;}}

int func_000A2230(undefined4 *param_1, undefined4 param_2)
{
  int func_0011B4F0(...);
  int iVar1;
  int iVar2;
  
  param_1 = (undefined4 *)*param_1;
  while( true ) {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar1 = param_1[2];
    iVar2 = func_0011B4F0(iVar1 + 0x1c,param_2);
    if (iVar2 == 0) break;
    param_1 = (undefined4 *)*param_1;
  }
  return iVar1;
}

int _func_000A2270(undefined4 *param_1, undefined4 param_2)
{
  int func_0011B4F0(...);
  undefined4 *esi = (undefined4 *)*param_1;
  undefined4 *edi;
  int ebx = param_2;
  while (esi != 0) {
    edi = (undefined4 *)esi[2];
    if (*(short *)((char *)edi + 0xe) != 0 &&
        func_0011B4F0((char *)edi + 0x1c, ebx) == 0)
      return (int)edi;
    esi = (undefined4 *)*esi;
  }
  return 0;
}

void _func_000A22B0(int *p) { int _func_000A1D10(int); int x=p[6]; if(x){ int y=p[7]; p[6]=y; p[7]=x; _func_000A1D10(y); } }

void _func_000A22D0(int param_1)
{
  int func_000A1E60(...);
  param_1 = *(int *)(param_1 + 0x18);
  if (param_1) func_000A1E60(param_1);
}

void func_000A22F0(int param_1)
{
  extern void func_000A1EA0(...);
  param_1 = *(int *)(param_1 + 0x18);
  if (param_1) func_000A1EA0(param_1);
}

extern float _D_001D27B8;
extern float _func_00116480(int);
float _func_000A2310(void *arg0)
{
    void *obj = *(void **)((char *)arg0 + 0x18);
    unsigned int i = 0;
    unsigned int count;
    int *entry;
    if (obj == 0) return _D_001D27B8;
    count = *(unsigned short *)((char *)obj + 0x0c);
    entry = *(int **)((char *)obj + 0x10);
    while (i < count) {
        if (*entry != 0) return _func_00116480(*entry);
        ++i;
        entry += 2;
    }
    return _D_001D27B8;
}

void _func_000A2350(int param_1)
{
  int func_000A1F10(...);
  param_1 = *(int *)(param_1 + 0x18);
  if (param_1) func_000A1F10(param_1);
}

void func_000A23B0(int param_1)
{
  extern void func_000A1F80(...);
  param_1 = *(int *)(param_1 + 0x18);
  if (param_1) func_000A1F80(param_1);
}

void _func_000A23D0(void *p)
{
    unsigned int *node;
    extern void _func_000A1FC0(unsigned int);
    extern void _func_001153F0(unsigned int);
    for (node = *(unsigned int **)p; node != 0; node = (unsigned int *)*node) {
        _func_000A1FC0(node[2]);
    }
    if (*(unsigned int *)((char *)p + 0x34) != 0) {
        _func_001153F0(*(unsigned int *)((char *)p + 0x34));
    }
}

void func_000A2410(undefined4 *param_1, undefined4 param_2)
{
  int func_00115410(...);
  extern undefined4 D_003080B0;
  extern undefined4 D_00307D00;
  extern undefined4 D_00307CFC;
  int func_00116800(...);
  extern undefined4 D_00307CF4;
  int func_000A2070(...);
  int func_00116820(...);
  undefined4 *puVar1;
  
  if (param_1[0xd] != 0) {
    func_00115410(param_1[0xd],param_2);
  }
  if (((param_1 == (undefined4 *)(D_003080B0 + 100)) ||
      (param_1 == (undefined4 *)(D_00307D00 + 100))) ||
     (param_1 == (undefined4 *)(D_00307CFC + 100))) {
    func_00116800(D_00307CF4);
  }
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    func_000A2070(puVar1[2],param_2);
  }
  if (((param_1 != (undefined4 *)(D_003080B0 + 100)) &&
      (param_1 != (undefined4 *)(D_00307D00 + 100))) &&
     (param_1 != (undefined4 *)(D_00307CFC + 100))) {
    return;
  }
  func_00116820();
  return;
}

void func_000A2500(undefined4 param_1)
{
  int func_00120E00(...);
  extern undefined4 D_00313AB8;
  int func_00120F60(...);
  int func_00120F70(...);
  int func_00120F80(...);
  int func_00120E70(...);
  int func_00120ED0(...);
  int func_00120EA0(...);
  func_00120E00(D_00313AB8);
  func_00120F60(param_1);
  func_00120F70(param_1);
  func_00120F80(param_1,param_1);
  func_00120E70(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  func_00120ED0(4,5);
  func_00120EA0(1,1,1,0);
  return;
}
 void _func_000A16A0(int param_1,int param_2,int param_3) { int func_000A18A0(...);extern int D_003080AC;if((param_3>>5)&1u){volatile int three=3;int eax=three;int v=param_2;func_000A18A0(param_1+0x64,v,eax);return;}int edx=D_003080AC;int eax=(edx!=0)+1;int v=param_2;func_000A18A0(param_1+0x64,v,eax);}

 void _func_000A18A0(unsigned char *param_1,int param_2,unsigned char param_3) { int func_001165E0(...);extern int D_003080AC;if((param_3>>5)&1){int eax=3;func_001165E0(param_1+0x64,param_2,eax);}else{int edx=D_003080AC;int eax=(edx!=0)+1;func_001165E0(param_1+0x64,param_2,eax);}}
