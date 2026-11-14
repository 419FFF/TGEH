/* 21 functions from 0x00107720 to 0x001085C8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00108500(undefined4 param_1)
{
  extern undefined D_00307CF8;
  int func_001074C0(...);
  extern undefined4 D_00307DF8;
  int func_00107BF0(...);
  char cVar1;
  
  if ((D_00307CF8 != '\0') && (cVar1 = func_001074C0(D_00307DF8,param_1), cVar1 != '\0')) {
    func_00107BF0(param_1,0);
  }
  return;
}
