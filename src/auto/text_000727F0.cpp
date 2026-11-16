/* 11 functions from 0x000727F0 to 0x000737EF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000727F0(void){volatile char local[0x200]; local[0]=0;}

void func_000731B0(void)
{
    extern int _D_001D5FD0, _D_002FA370, _D_002FA36C;
    extern int __cdecl func_0011BF40(int,int);
    extern int __cdecl func_0011BDD0(int,int);
    int v=func_0011BF40((int)&_D_001D5FD0,0);
    _D_002FA370=v;
    _D_002FA36C=func_0011BDD0(v,0);
}

void func_000731E0(void)
{
  extern undefined4 D_002FA370;
  int func_0011B990(...);
  *(short *)(D_002FA370 + 0x2a) = *(short *)(D_002FA370 + 0x2a) + -1;
  func_0011B990(D_002FA370);
  return;
}

char func_00073250(void) {
    extern char D_002FA5B4;
    return D_002FA5B4;
}
