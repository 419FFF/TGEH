/* 18 functions from 0x00113780 to 0x001144AC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001137E0(int param_1, undefined4 *param_2)
{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)*param_2;
  pcVar3 = (char *)(param_1 + 0x20);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return;
}

void func_00113B10(int param_1)
{
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}

void func_00113CA0(int param_1)
{
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}

int func_00113CB0(int a0) {
    return a0;
}
