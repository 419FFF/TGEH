/* 9 functions from 0x00106B00 to 0x00107718, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001073A0(void) {
    extern int D_003251FC;
    extern int D_003251D0;
    D_003251FC = 0;
    D_003251D0 = 0;
}

void func_001073F0(char *param_1, undefined4 *param_2)
{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}

void func_00107690(void) {
    int func_00029B60(...);
    func_00029B60();
}
