/* 10 functions from 0x000204F0 to 0x0002142E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00020CE0(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x6c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x268));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x26c));
  func_00116FB0(iVar1);
  return;
}

void _func_00020D20(void *);
void _func_00088940(void *, int);
void _func_0009CDE0(void *);
void _func_000A1CB0(void *);
void _func_0011C3E0(void *);
void _func_00116FB0(void *);
void _func_000210D0(char *a)
{
    char *b;
    char *p;
    int i;

    b = *(char **)(*(char **)(a + 0x110) + 0xC0);   /* shared block */
    if (b != 0) {
        _func_00020D20(a);
        if (--*(int *)(b + 0x2C) == 0) {            /* last reference */
            p = b + 0x30;                           /* 8 slots, 0x40 apart */
            for (i = 8; i != 0; i--) {
                _func_00088940(*(void **)p, 1);
                _func_0009CDE0(*(void **)p);
                _func_000A1CB0(p + 4);
                p += 0x40;
            }
            _func_0011C3E0(b);
            _func_00116FB0(b);
        }
    }
}

