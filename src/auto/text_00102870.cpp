/* 27 functions from 0x00102870 to 0x001034C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_00103160(int p,int value) { extern char D_001E5EC9; if(D_001E5EC9 && p) *(int*)(p+0x98)=value; }

void func_00103180(int param_1, undefined4 param_2)
{
  extern undefined D_001E5EC9;
  if (D_001E5EC9 != '\0') {
    *(undefined4 *)(param_1 + 0xf0) = param_2;
  }
  return;
}

void func_001033A0(int a0) {
    extern int D_00324EA8;
    D_00324EA8 = a0;
}

undefined4 * func_001033B0(undefined4 param_1)
{
  int func_00116A90(...);
  int func_00131990(...);
  extern undefined4 D_001E46C0;
  int func_0011BF40(...);
  int func_0011BDD0(...);
  int func_0013A020(...);
  extern undefined D_001D29C7;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)func_00116A90(8,1,1);
  func_00131990(D_001E46C0);
  uVar2 = func_0011BF40(param_1,0);
  *puVar1 = uVar2;
  uVar2 = func_0011BDD0(uVar2,1);
  uVar2 = func_0013A020(uVar2,0x3f800000);
  puVar1[1] = uVar2;
  func_00131990(((undefined *)&D_001D29C7));
  return puVar1;
}

void func_00103400(int *param_1)
{
  int func_0013ADF0(...);
  int func_0011B990(...);
  int func_00116FB0(...);
  func_0013ADF0(param_1[1]);
  *(short *)(*param_1 + 0x2a) = *(short *)(*param_1 + 0x2a) + -1;
  func_0011B990(*param_1);
  func_00116FB0(param_1);
  return;
}

int _func_00103430(int *p) { int _func_0013AB30(...); return _func_0013AB30(p[1]); }

void func_00103440(int param_1, char param_2)
{
  int func_0013AC00(...);
  extern undefined4 D_00324D0C;
  int func_0013AA30(...);
  func_0013AC00(*(undefined4 *)(param_1 + 4),D_00324D0C);
  if (param_2 != '\0') {
    func_0013AA30(*(undefined4 *)(param_1 + 4),1);
    return;
  }
  func_0013AA30(*(undefined4 *)(param_1 + 4),0);
  return;
}

undefined4 func_001034A0(int param_1)
{
  extern undefined4 D_00324BD8;
  extern undefined4 D_00324BC8;
  if ((*(int *)(param_1 + 0x7c) != D_00324BD8) && (*(int *)(param_1 + 0x7c) != D_00324BC8)) {
    return 0;
  }
  return 1;
}

