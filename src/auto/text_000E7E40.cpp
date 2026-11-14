/* 10 functions from 0x000E7E40 to 0x000E8AAC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

#pragma optimize("y", on)
void func_000E8310(char a0) {
    extern char _D_00323E48;
    _D_00323E48 = a0;
}
void func_000E8320(void)
{
  int func_000687F0(...);
  int func_000A2780(...);
  int func_0009C590(...);
  extern undefined D_001DC524;
  int func_0009D3E0(...);
  undefined4 uVar1;
  
  func_000687F0();
  func_000A2780(0x34,0,0);
  uVar1 = func_0009C590(((undefined *)&D_001DC524));
  func_0009D3E0(uVar1);
  return;
}

undefined4 func_000E8390(void)
{
  extern undefined4 D_003234E0;
  extern undefined D_00323E41;
  if (D_003234E0 == 6) {
    if (D_00323E41 != '\0') {
      return 1;
    }
  }
  else if ((D_003234E0 == 4) && (D_00323E41 != '\0')) {
    return 2;
  }
  return 0;
}

