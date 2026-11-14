/* 13 functions from 0x000A81E0 to 0x000A90E1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A8790(void) {
    extern int D_00312D8C;
    int func_00100730(...);
    func_00100730(D_00312D8C);
}

void func_000A8930(void)
{
  extern undefined4 D_00312DB4;
  int func_00110300(...);
  extern undefined4 D_00308158;
  extern undefined D_001D7B50;
  extern undefined4 D_00312DB8;
  extern undefined D_001D7B3C;
  extern undefined4 D_00312DBC;
  extern undefined D_001D7B28;
  extern undefined4 D_00312DC0;
  extern undefined D_001D7B14;
  extern undefined4 D_00312DC4;
  extern undefined D_001D7B00;
  D_00312DB4 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B50),0x18);
  D_00312DB8 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B3C),0x18);
  D_00312DBC = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B28),0x18);
  D_00312DC0 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B14),0x18);
  D_00312DC4 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B00),0x18);
  return;
}

void func_000A8A90(void)
{
  extern undefined D_00313040;
  extern undefined4 D_00313044;
  int func_00103990(...);
  extern undefined4 D_00312DE0;
  int func_001031A0(...);
  D_00313040 = 1;
  D_00313044 = 0;
  func_00103990(D_00312DE0,1);
  func_001031A0(D_00312DE0,0);
  return;
}

void __cdecl _func_000A8E00(void)
{
    extern int _D_00312E0C;
    extern int _D_00312E10;
    extern int _D_00312E14;
    extern int _D_00312E08;
    extern int __cdecl _func_001160B0(int);
    extern int __cdecl _func_00100730(int);
    _func_001160B0(_D_00312E0C);
    _func_001160B0(_D_00312E10);
    _func_001160B0(_D_00312E14);
    _func_00100730(_D_00312E08);
}

