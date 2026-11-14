/* 19 functions from 0x0011EE40 to 0x0011FE22, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_0011F200(int *param_1)
{
  int func_00116FB0(...);
  return func_00116FB0(param_1[0x3b]);
}

int func_0011F900(int *param_1)
{
  int func_001384D0(...);
  return func_001384D0(param_1[0x38]);
}

void func_0011F960(int param_1)
{
  extern int _D_003291B8;
  _D_003291B8 -= param_1;
}

void func_0011FD20(void) {
    extern int D_003291B8;
    D_003291B8 = 0;
}

void func_0011FD30(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x108) = param_2;
  return;
}

extern int _D_003291B8;
extern int _D_003291BC;
extern int _D_00328200;
extern int __cdecl _func_00110370(void*);
extern void _func_0011F900(void);
void __cdecl _func_0011FD40(void)
{
    if (_D_003291BC == 0) {
        int local[7];
        local[4] = 0;
        local[1] = 0;
        local[2] = 0;
        local[3] = (int)_func_0011F900;
        _D_00328200 = _func_00110370(local);
    }
    ++_D_003291BC;
}

