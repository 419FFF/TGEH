/* 19 functions from 0x000856F0 to 0x000863DB, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00085870(undefined4 param_1, int param_2)
{
  int func_0011DED0(...);
  *(undefined4 *)(param_2 + 0x11c) = 4;
  *(undefined4 *)(param_2 + 0x120) = 5;
  *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) & 0xfffffffd;
  func_0011DED0(param_1);
  return;
}

void _func_000858B0(void)
{
  extern int D_001D6B9C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000856F0(...);
  int _func_00085870(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6B9C, _func_000856F0);
  _func_0011D270(&D_001D6B9C, _func_00085870);
  _func_0011D290(&D_001D6B9C, _func_00085E20);
  _func_0011D2B0(&D_001D6B9C, _func_000688D0);
}

void func_000858F0(void) {
    extern int D_001D6B9C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6B9C);
}

void func_00085E20(void) {
    int func_0011DEF0(...);
    func_0011DEF0();
}

void _func_00085E30(void)
{
  extern int _D_001D6BA8;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00085900(...);
  int _func_00078730(...);
  int _func_00085E20(...);
  int _func_00085BF0(...);
  _func_0011D000(&_D_001D6BA8, _func_00085900);
  _func_0011D270(&_D_001D6BA8, _func_00078730);
  _func_0011D290(&_D_001D6BA8, _func_00085E20);
  _func_0011D2B0(&_D_001D6BA8, _func_00085BF0);
}

void func_00085E70(void) {
    extern int D_001D6BA8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6BA8);
}

void func_00085F80(void)
{
  int func_001160B0(...);
  extern undefined4 D_002FDDA4;
  int func_00110760(...);
  extern undefined4 D_002FDDA0;
  func_001160B0(D_002FDDA4);
  func_00110760(D_002FDDA0);
  return;
}

void func_000860B0(void) { extern int D_002FDD9C,D_002FDD98,D_002FDDA4; int func_0011CFC0(...); if(D_002FDD9C==0 && D_002FDD98!=0){ D_002FDD9C=10; func_0011CFC0(D_002FDDA4+0x54,0x3a83126f); } }

void func_000860F0(int p) { extern int D_002FDDBC; int func_00116FB0(...),func_000968D0(...),func_0011B990(...); D_002FDDBC=p; if(*(int*)(p+0x108)){func_00116FB0(*(int*)(p+0x108)); p=D_002FDDBC; *(int*)(p+0x108)=0;} if(*(int*)(p+0x10c)){func_00116FB0(*(int*)(p+0x10c));p=D_002FDDBC;*(int*)(p+0x10c)=0;} func_000968D0(*(int*)(p+0xf8)); int x=*(int*)(D_002FDDBC+0x110); if(x){*(short*)(x+0x2a)-=1;func_0011B990(x);*(int*)(D_002FDDBC+0x110)=0;} }

void func_00086180(void)
{
  extern undefined4 D_002FDDC0;
  int func_001103C0(...);
  extern undefined4 D_002FDDB8;
  D_002FDDC0 = D_002FDDC0 + -1;
  if (D_002FDDC0 == 0) {
    func_001103C0(D_002FDDB8);
  }
  return;
}

void func_00086230(int a,int p) { extern int D_002FDDB8; int func_0010F750(...); int r=func_0010F750(*(int*)(p+0xc),D_002FDDB8,0x120); *(int*)(r+0xf4)=p; *(int*)(r+0xe0)=1; *(int*)(r+0xe4)=0; *(int*)(r+0xe8)=1; *(int*)(r+0xec)=0; *(int*)(r+0xf0)=0; }

