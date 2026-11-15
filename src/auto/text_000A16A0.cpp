/* 31 functions from 0x000A16A0 to 0x000A2617, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A1BB0(int param_1,int param_2) { int func_000A18A0(...);extern int _D_003080AC; unsigned char *ecx=(unsigned char*)param_1;if(ecx[0x10]&8){int eax=3;int v=param_2;func_000A18A0(ecx+0x64,v,eax);return;}int edx=_D_003080AC;int eax=0;eax=(edx!=0);eax++;int v=param_2;func_000A18A0(ecx+0x64,v,eax);}

void func_000A1C00(int param_1) { int func_00115E40(...);int func_0011C3E0(...);int func_00116FB0(...);int esi=param_1;int eax=*(int*)(esi+0x18);if(*(int*)(eax+0x20)==esi)*(int*)(eax+0x20)=0;int edi=0;if(*(unsigned short*)(esi+0xc)>0){do{eax=*(int*)(esi+0x10);eax=*(int*)(eax+edi*8);if(eax)func_00115E40(eax);unsigned int ecx=*(unsigned short*)(esi+0xc);++edi;}while((unsigned int)edi<*(unsigned short*)(esi+0xc));}func_0011C3E0(esi);func_00116FB0(esi);}

void func_000A1C50(int param_1,int param_2) { int func_000A18A0(...);extern int D_001D756C;int a,b;if(*(char*)(param_1+0x30)){a=func_000A18A0(param_1,&D_001D756C,param_2);*(int*)(param_1+0x18)=a;b=func_000A18A0(param_1,&D_001D756C,param_2);*(int*)(param_1+0x1c)=b;}else{extern int D_001D29C7;a=func_000A18A0(param_1,&D_001D29C7,param_2);*(int*)(param_1+0x18)=a;b=func_000A18A0(param_1,&D_001D29C7,param_2);*(int*)(param_1+0x1c)=b;} }

void func_000A1EA0(int param_1, int param_2) { int func_00115F60(...); unsigned int i=0; unsigned short n=*(unsigned short*)(param_1+0xc); int * volatile base=(int*)*(int*)(param_1+0x10); if(n==0)return; do { int *p=base+i*2; int value=*p; if(value)func_00115F60(value,param_2); ++i;}while(i<n); }

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

