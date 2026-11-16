/* 14 functions from 0x001034C0 to 0x0010437F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00103960(int param_1, undefined4 param_2, undefined4 param_3)
{
  extern undefined D_001E5EC9;
  int func_001034C0(...);
  if ((D_001E5EC9 != '\0') && (param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x80) = param_2;
    func_001034C0(param_1,param_3);
  }
  return;
}

void _func_00103990(int *p) { extern char D_001E5EC9; extern void _func_001034C0(int*); if(D_001E5EC9 && p) { *(int*)((char*)p+0x80)=0; _func_001034C0(p); } }

void func_00103FA0(void)
{
  extern undefined4 D_00324EB4;
  int func_00136F80(...);
  D_00324EB4 = func_00136F80();
  return;
}

void func_00104080(void)
{
  extern undefined4 D_00324EB0;
  int func_00139570(...);
  int func_00139370(...);
  int func_00139B10(...);
  int iVar1;
  
  if (D_00324EB0 != 0) {
    iVar1 = func_00139570(D_00324EB0);
    if (iVar1 == 0) {
      func_00139370(D_00324EB0);
    }
    func_00139B10(D_00324EB0);
  }
  return;
}

void _func_001040C0(void) { extern int D_00324EB4; extern void _func_000688D0(int); if(D_00324EB4) _func_000688D0(D_00324EB4); D_00324EB4=0; }

void func_001040E0(int param_1, undefined4 param_2)
{
  extern undefined4 D_003268B0;
  int func_0011AF40(...);
  undefined4 *puVar1;
  
  if (*(byte *)(param_1 + 0x22) == D_003268B0) {
    func_0011AF40(param_1,param_2);
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x28); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((*(byte *)((int)puVar1 + 6) & 8) == 0) {
      func_001040E0(*puVar1,param_2);
    }
  }
  return;
}

void func_00104190(void)
{
  int func_00104130(...);
  extern undefined D_00324F20;
  int func_00115E40(...);
  extern undefined D_00324F00;
  int func_00105D10(...);
  extern undefined D_001D29C7;
  extern undefined4 D_00324F70;
  uint uVar1;
  
  func_00104130();
  uVar1 = 0;
  do {
    if (*(int *)(((undefined *)&D_00324F20) + uVar1) != 0) {
      func_00115E40(*(int *)(((undefined *)&D_00324F20) + uVar1));
      *(undefined4 *)(((undefined *)&D_00324F20) + uVar1) = 0;
    }
    if (*(int *)(((undefined *)&D_00324F00) + uVar1) != 0) {
      func_001040E0(*(undefined4 *)(*(int *)(((undefined *)&D_00324F00) + uVar1) + 0x2c),0);
      *(undefined4 *)(((undefined *)&D_00324F00) + uVar1) = 0;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0xc);
  func_00105D10(((undefined *)&D_001D29C7));
  D_00324F70 = 0;
  return;
}

