/* 25 functions from 0x00067B40 to 0x00068AB3, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000687F0(void) {
    extern char D_002F7F00;
    D_002F7F00 = 0;
}

void func_000688B0(undefined1 param_1)
{
  extern undefined D_001E5ECA;
  extern undefined D_002F7EF9;
  int func_00068740(...);
  if (D_001E5ECA != '\0') {
    D_002F7EF9 = param_1;
    func_00068740();
    return;
  }
  return;
}

void func_000688D0(void) {
}
