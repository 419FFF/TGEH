/* 27 functions from 0x00121DB0 to 0x00122D6E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001226B0(char a0) {
    extern char D_0032F754;
    D_0032F754 = a0;
}

char func_001226C0(void) {
    extern char D_0032F754;
    return D_0032F754;
}

void func_00122AB0(void)
{
  extern undefined4 D_0032F90C;
  int func_001103C0(...);
  extern undefined4 D_0032F908;
  D_0032F90C = D_0032F90C + -1;
  if (D_0032F90C == 0) {
    func_001103C0(D_0032F908);
  }
  return;
}

void func_00122AD0(void)
{
  extern undefined4 D_00331110;
  int func_0013CC50(...);
  if (D_00331110 == 0) {
    func_0013CC50();
  }
  D_00331110 = D_00331110 + 1;
  return;
}

int func_00122B80(undefined4 param_1, undefined4 param_2)
{
  int func_00116A90(...);
  int func_0013CC70(...);
  int iVar1;
  
  iVar1 = func_00116A90(0x2c,1,1);
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_2;
  func_0013CC70(iVar1);
  return iVar1;
}

