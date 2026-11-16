/* 19 functions from 0x0007ADC0 to 0x0007BDB0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007B080(int param_1) {
 int func_00110060(...); extern int D_002FA6D0;
 float func_00131760(void); extern float D_001D27EC,D_001D3E00,D_001D65B4;
 int iVar1=*(int*)(*(int*)(param_1+0x50)+0x2c);
 __declspec(align(16)) struct { float first; char pad[4]; float second; char rest[48]; } local;
 func_00110060(*(int*)(D_002FA6D0+0x2c),&local.first);
 int i=0; do {
 float v=func_00131760();
 *(float*)(*(int*)(iVar1+0xc)+i)=((v-D_001D27EC)*D_001D3E00+local.first)*D_001D65B4;
 v=func_00131760(); i+=0xc;
 *(float*)(*(int*)(iVar1+0xc)+i-4)=((v-D_001D27EC)*D_001D3E00+local.second)*D_001D65B4;
 } while(i<0x3c);
}

void func_0007B110(void)
{
  int func_0011D000(...);
  extern undefined D_001D65C0;
  int func_0007AAA0(...);
  int func_0011D270(...);
  int func_00078730(...);
  int func_0011D290(...);
  int func_00085E20(...);
  int func_0011D2B0(...);
  int func_0007AC20(...);
  int func_0011D2D0(...);
  int func_0007AD30(...);
  extern undefined D_001D65B8;
  int func_0007ADC0(...);
  int func_0007AF50(...);
  int func_0007B080(...);
  func_0011D000(((undefined *)&D_001D65C0),&func_0007AAA0);
  func_0011D270(((undefined *)&D_001D65C0),&func_00078730);
  func_0011D290(((undefined *)&D_001D65C0),&func_00085E20);
  func_0011D2B0(((undefined *)&D_001D65C0),&func_0007AC20);
  func_0011D2D0(((undefined *)&D_001D65C0),&func_0007AD30);
  func_0011D000(((undefined *)&D_001D65B8),&func_0007ADC0);
  func_0011D270(((undefined *)&D_001D65B8),&func_00078730);
  func_0011D290(((undefined *)&D_001D65B8),&func_00085E20);
  func_0011D2B0(((undefined *)&D_001D65B8),&func_0007AF50);
  func_0011D2D0(((undefined *)&D_001D65B8),&func_0007B080);
  return;
}

void func_0007B1B0(void)
{
 int func_0011D0E0(...);
 extern undefined D_001D65C0;
 extern undefined D_001D65B8;
 func_0011D0E0(&D_001D65C0);
 func_0011D0E0(&D_001D65B8);
}

void func_0007B3A0(void)
{
  int func_001160B0(...);
  extern undefined4 D_002FA6DC;
  int func_00110760(...);
  extern undefined4 D_002FA6D8;
  extern undefined4 D_002FA6CC;
  extern undefined4 D_002FA6C8;
  func_001160B0(D_002FA6DC);
  func_00110760(D_002FA6D8);
  func_001160B0(D_002FA6CC);
  func_00110760(D_002FA6C8);
  return;
}

void _func_0007B710(void)
{
  extern int D_001D65F8;
  int _func_0011D000(...);
  int _func_0011D2B0(...);
  int _func_0007B560(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D65F8, _func_0007B560);
  _func_0011D2B0(&D_001D65F8, _func_000688D0);
}

void func_0007B740(void) {
    extern int D_001D65F8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D65F8);
}

void _func_0007B8C0(void)
{
  extern int D_001D6604;
  int _func_0011D000(...);
  int _func_0011D2B0(...);
  int _func_0007B750(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6604, _func_0007B750);
  _func_0011D2B0(&D_001D6604, _func_000688D0);
}

void func_0007B8F0(void) {
    extern int D_001D6604;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6604);
}

void func_0007BA90(void)
{
  int func_001160B0(...);
  extern undefined D_002FA6E8;
  int func_00110760(...);
  extern undefined D_002FA6E4;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FA6E8) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FA6E4) + uVar1));
    uVar1 = uVar1 + 0x18;
  } while (uVar1 < 0x30);
  return;
}

int* func_0007BAC0(int param_1,int param_2) {
 extern int _D_002FA6F4[],_D_002FA6E4[],_D_002FA6E8[],_D_002FA6F8[],_D_0030809C;
 int _func_00110420(...); void _func_0012F120(...); void _func_001105E0(...);
 void _func_00110000(...); void _func_00110550(...); void _func_0011DED0(...);
 __declspec(align(16)) char local[64]; int i=0; unsigned int offset=0;
 do { if (*(int*)((char*)_D_002FA6F4+offset)==0) goto found; offset+=0x18; ++i; } while(offset<0x30);
 return 0;
 found:
 { int* p=&_D_002FA6E4[i*6];
 _func_00110420(_D_0030809C,*p); _func_0012F120(local);
 _func_001105E0(*p,local,0); _func_00110000(*p);
 _func_00110550(param_1,*p,8); _func_00110000(*p);
 _func_0011DED0(_D_002FA6E8[i*6]);
 _D_002FA6F4[i*6]=1; _D_002FA6F8[i*6]=param_2;
 return p; }
}

