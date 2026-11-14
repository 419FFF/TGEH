/* 30 functions from 0x001280C0 to 0x00129088, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00128590(void)
{
  extern undefined4 D_00331AD8;
  int func_0011C340(...);
  int func_0011B5C0(...);
  extern undefined D_001DF6EC;
  int func_00128450(...);
  int func_001280B0(...);
  extern undefined D_001DF6F0;
  int func_00128540(...);
  if (D_00331AD8 == 0) {
    func_0011C340();
    func_0011B5C0(((undefined *)&D_001DF6EC),&func_00128450,&func_001280B0);
    func_0011B5C0(((undefined *)&D_001DF6F0),&func_00128540,&func_001280B0);
  }
  D_00331AD8 = D_00331AD8 + 1;
  return;
}

void func_001286B0(int a0, int a1) {
    int func_0013A000(...);
    func_0013A000(a1);
}

void func_00128830(int a0) {
    extern int D_00331B04;
    D_00331B04 = a0;
}

void func_00128870(int param_1, undefined4 param_2)
{
  int func_0013AC20(...);
  if (*(int *)(param_1 + 0xf0) != 0) {
    func_0013AC20(*(int *)(param_1 + 0xf0),param_2);
    *(undefined4 *)(param_1 + 0x104) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x104) = param_2;
  return;
}

void func_00128990(int param_1, char param_2)
{
  if (param_2 != '\0') {
    *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 2;
    return;
  }
  *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) & 0xfffffffd;
  return;
}

void func_00128DB0(int a0) {
    extern int D_00331B08;
    D_00331B08 = a0;
}

