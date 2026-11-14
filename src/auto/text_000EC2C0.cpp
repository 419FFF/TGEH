/* 25 functions from 0x000EC2C0 to 0x000ECF11, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000EC4C0(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 0x80;
  }
  return;
}

void func_000EC4E0(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) | 1;
  }
  return;
}

void func_000EC500(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfe;
  }
  return;
}

void func_000EC520(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) | 2;
  }
  return;
}

void func_000EC5C0(undefined4 param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  func_0013E9DB(*param_2);
  return;
}

void func_000EC640(undefined4 *param_1, undefined4 *param_2)
{
  int func_001053E0(...);
  extern undefined4 D_00324588;
  undefined4 uVar1;
  
  uVar1 = func_001053E0(D_00324588,*param_2);
  *param_1 = uVar1;
  return;
}

void func_000ECB60(void) {
    extern int D_00307D08;
    int func_00122D30(...);
    func_00122D30(D_00307D08);
}

void func_000ECEE0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00131990(...);
  extern undefined D_001DC8DC;
  int func_0013B7E0(...);
  extern undefined D_001D29C7;
  func_00131990(((undefined *)&D_001DC8DC));
  func_0013B7E0(param_1,param_2,param_3,param_4);
  func_00131990(((undefined *)&D_001D29C7));
  return;
}

