/* 32 functions from 0x00124700 to 0x0012555E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00124DC0(undefined4 *param_1)
{
  int func_00116A90(...);
  undefined4 uVar1;
  
  uVar1 = func_00116A90(0xc,1,1);
  *param_1 = uVar1;
  return;
}

void func_00124DE0(undefined4 *param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  undefined4 uVar1;
  
  uVar1 = func_0013E9DB(*param_2);
  *param_1 = uVar1;
  return;
}

void func_00124F00(void) {
    extern int D_00331528;
    int func_00115DE0(...);
    func_00115DE0(D_00331528, 28);
}

int func_00124F20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  int func_00115E10(...);
  int func_0011BF40(...);
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_00115E10(param_1,0x34);
  uVar2 = func_0011BF40(param_2,param_3);
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  return iVar1;
}

void func_00125440(undefined4 param_1, short *param_2)
{
  int func_00129C90(...);
  int func_00116FB0(...);
  if (*param_2 == 0) {
    func_00129C90(*(undefined4 *)(param_2 + 2));
    func_00116FB0(*(undefined4 *)(param_2 + 4));
  }
  func_00116FB0(param_2);
  return;
}

void func_00125470(void) {
    extern int D_00331530;
    int func_00115DE0(...);
    func_00115DE0(D_00331530, 32);
}

