/* 12 functions from 0x00094380 to 0x000951CC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_00094740(void)
{
  extern int D_001D71B4;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00094380(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D71B4, _func_00094380);
  _func_0011D270(&D_001D71B4, _func_0007FC90);
  _func_0011D290(&D_001D71B4, _func_00085E20);
  _func_0011D2B0(&D_001D71B4, _func_000688D0);
}

void func_00094780(void) {
    extern int D_001D71B4;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D71B4);
}

void _func_00094790(void)
{
  extern int D_001D71C0;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00094380(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D71C0, _func_00094380);
  _func_0011D270(&D_001D71C0, _func_00086E60);
  _func_0011D290(&D_001D71C0, _func_00085E20);
  _func_0011D2B0(&D_001D71C0, _func_000688D0);
}

void func_000947D0(void) {
    extern int D_001D71C0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D71C0);
}

void _func_00094BB0(void)
{
  extern int D_001D71D0;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000947E0(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D71D0, _func_000947E0);
  _func_0011D270(&D_001D71D0, _func_00086E60);
  _func_0011D290(&D_001D71D0, _func_00085E20);
  _func_0011D2B0(&D_001D71D0, _func_000688D0);
}

void func_00094BF0(void) {
    extern int D_001D71D0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D71D0);
}

void _func_00094C00(void) { extern int D_00306EC0,D_00306EC4,D_00306EC8; D_00306EC0=0; D_00306EC4=0; D_00306EC8=0; }

#pragma intrinsic(memset)
extern "C" void *memset(void *,int,unsigned int);
void _func_00094C20(void) { extern int D_00307BC4,D_00307BE4,D_00307BE8,D_00307B58; extern unsigned int D_00307B60[25]; extern char D_001D29C7,D_001D71DC; void _func_000688D0(void); int _func_00131990(const char *); int _func_0011BF40(const char *,int); int _func_0011BDD0(int,int); D_00307BC4=0; D_00307BE4=-1; memset(D_00307B60,0,100); _func_000688D0(); _func_00131990(&D_001D29C7); D_00307BE8=_func_0011BF40(&D_001D71DC,0); _func_00131990(&D_001D29C7); D_00307B58=_func_0011BDD0(D_00307BE8,0); _func_000688D0(); }
void func_00094C90(void)
{
  extern undefined4 D_00307BE8;
  int func_0011B990(...);
  int iVar1;
  
  iVar1 = D_00307BE8;
  *(short *)(D_00307BE8 + 0x2a) = *(short *)(D_00307BE8 + 0x2a) + -1;
  func_0011B990(iVar1);
  return;
}

