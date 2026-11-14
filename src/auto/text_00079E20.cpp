/* 19 functions from 0x00079E20 to 0x0007ADBD, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007A080(void) {
    extern int D_001D6548;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6548);
}

void func_0007A240(int param_1, undefined4 param_2, int param_3)
{
 int func_0011E3D0(...); int func_0012E7B0(...); extern float D_001D2B64; extern float D_001D411C; int func_0011CFC0(...); int func_0011CE50(...); int i; float d;
 func_0011E3D0(param_1); i=*(int *)(param_1+0x17c); d=func_0012E7B0((float *)(i+4),(float *)(param_3+0x30)); param_1+=0x54;
 if(d>=D_001D2B64) { if(d>=D_001D411C) {func_0011CFC0(param_1,0x41f00000);func_0011CE50(param_1,0,0,0,0xbf000000);} else {func_0011CFC0(param_1,0x40a00000);func_0011CE50(param_1,0,0,0,0xbf333333);} } else func_0011CFC0(param_1,0);
 *(undefined4 *)(i+4)=*(undefined4 *)(param_3+0x30); *(undefined4 *)(i+8)=*(undefined4 *)(param_3+0x34); *(undefined4 *)(i+0xc)=*(undefined4 *)(param_3+0x38);
}

void func_0007A340(void) {
    extern int D_001D6554;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6554);
}

void func_0007A4A0(void)
{
  int func_001160B0(...);
  extern undefined D_002FA68C;
  int func_00110760(...);
  extern undefined D_002FA688;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FA68C) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FA688) + uVar1));
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0x40);
  return;
}

void func_0007A850(int param_1)
{
  int func_00131310(...); float func_00131760(...);
  extern float D_001D541C; extern float D_001D5420; extern float D_001D35FC; extern float D_001D31C8;
  uint uVar1; int iVar2; int iVar3;
  iVar2=0xf;
  do { uVar1=func_00131310(); iVar3=(uVar1 % *(uint *)(param_1+0x15c))*0x58;
    *(float *)(*(int *)(param_1+0x160)+0x30+iVar3)=func_00131760()*D_001D541C-D_001D5420;
    *(float *)(*(int *)(param_1+0x160)+0x34+iVar3)=func_00131760()*D_001D35FC-D_001D31C8;
    iVar2--; *(float *)(*(int *)(param_1+0x160)+0x38+iVar3)=func_00131760()*D_001D541C-D_001D5420;
  } while(iVar2!=0);
}

void func_0007AA40(void)
{
  extern int D_001D6560;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_0007A690(...); int func_000688D0(...); int func_00085E20(...); int func_0007A850(...); int func_0007A8D0(...);
  func_0011D000(&D_001D6560,func_0007A690);
  func_0011D270(&D_001D6560,func_000688D0);
  func_0011D290(&D_001D6560,func_00085E20);
  func_0011D2B0(&D_001D6560,func_0007A850);
  func_0011D2D0(&D_001D6560,func_0007A8D0);
}

void func_0007AA90(void) {
    extern int D_001D6560;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6560);
}

void func_0007AD30(int p) { int func_00110060(...); extern undefined4 D_002FA6E0; int func_00131760(...); extern float D_001D27EC,D_001D3E00,D_001D27B0; int a,b; float x; undefined1 buf[32]; a=*(int *)(*(int *)(p+0x50)+0x2c); func_00110060(*(undefined4 *)(((undefined *)&D_002FA6E0)+0x2c),buf); for(b=0;b<0x3c;b+=0xc){x=(func_00131760()-D_001D27EC)*D_001D3E00; *(float *)(*(int *)(a+0xc)+b)=x+x; x=func_00131760()+D_001D27B0; *(float *)(*(int *)(a+0xc)+b+4)=x+x; x=(func_00131760()-D_001D27EC)*D_001D3E00; *(float *)(*(int *)(a+0xc)+b+8)=x+x;} }

