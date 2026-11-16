/* 25 functions from 0x00116490 to 0x0011745B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern float _func_001161D0(void *, int);
extern void _func_00115FC0(void *, float);
void _func_00116590(void *p, unsigned int value)
{
    float f = _func_001161D0(p, 0);
    *(unsigned int *)((char *)p + 0x1c) = value;
    _func_00115FC0(p, f);
}

void _func_001165E0(void *p)
{
    if (*(int *)((char *)p + 0x10) != 0) {
        *(float *)((char *)p + 0x20) = _func_001161D0(p, 0);
        *(int *)((char *)p + 0x10) = 0;
    }
}

void _func_00116610(void *p)
{
    void *q = *(void **)((char *)*(void **)((char *)p + 4) + 8);
    if (*(int *)((char *)q + 0x10) != 0) {
        *(float *)((char *)q + 0x20) = _func_001161D0(q, 0);
        *(int *)((char *)q + 0x10) = 0;
    }
}

void func_00116820(void)
{
  int func_0013B1E0(...);
  int iVar1;
  
  iVar1 = func_0013B1E0();
  *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
  return;
}

int _func_00116960(int *piVar1, undefined4 D_00326814, undefined D_00326790, int func_0013AF50, int func_0013AF70)
{
  // Implementation for this function
  return 0;
}

void func_001170B0(void)
{
  int func_0013AF50(...);
  extern undefined4 D_00326814;
  extern undefined D_00326790;
  int func_0013AF70(...);
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  func_0013AF50(D_00326814);
  uVar3 = 0;
  do {
    if ((*(int *)(((undefined *)&D_00326790) + uVar3) != 0) &&
       (piVar1 = *(int **)(*(int *)(((undefined *)&D_00326790) + uVar3) + 0xb8), piVar1 != (int *)0x0)) {
      piVar2 = (int *)*piVar1;
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)*piVar1;
        piVar2 = piVar1;
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x80);
  func_0013AF70(D_00326814);
  return;
}

