/* 6 functions from 0x0008D870 to 0x0008E776, found by Ghidra. */
#include "common.h"

void __cdecl _func_0008DD30(void)
{
  extern int _D_003028DC;
  extern int _D_0030299C;
  extern void __cdecl _func_0008EC40(void);
  volatile int *p = &_D_003028DC + 1;
  do {
    *((volatile unsigned char *)p) = 0;
    p[-1] = 0;
    p[-2] = 0;
    p[3] = -1;
    p += 6;
  } while ((int)(p - 1) < (int)&_D_0030299C);
  _func_0008EC40();
}
