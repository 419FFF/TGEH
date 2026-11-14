/* 12 functions from 0x0005FAD0 to 0x00060ACC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00060AA0(void)
{
  int func_0005CFA0(...);
  extern undefined4 D_002EEF74;
  int func_00116FB0(...);
  extern undefined4 D_002EEF78;
  func_0005CFA0();
  if (D_002EEF74 != 0) {
    func_00116FB0(D_002EEF74);
    D_002EEF74 = 0;
  }
  D_002EEF78 = 0;
  return;
}
