/* 19 functions from 0x0007ADC0 to 0x0007BDB0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

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

