/* 16 functions from 0x000AEFA0 to 0x000AFE83, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000AF540(void)
{
  extern undefined4 D_00313AB8;
  int func_00120E00(...);
  int func_00120EA0(...);
  int func_00120ED0(...);
  int func_00120F60(...);
  int func_00120F70(...);
  int func_00120F80(...);
  int func_00120E70(...);
  int func_00120E50(...);
  int func_000AFD10(...);
  extern undefined D_001D5768;
  int func_00121990(...);
  int func_000688D0(...);
  undefined4 uVar1;
  
  if (D_00313AB8 != 0) {
    func_00120E00(D_00313AB8);
    func_00120EA0(1,1,1,0);
    func_00120ED0(4,5);
    func_00120F60(0x3f800000);
    func_00120F70(0x3f800000);
    func_00120F80(0x40200000,0x40200000);
    func_00120E70(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    func_00120E50(0x42f00000,0x43d20000);
    uVar1 = func_000AFD10(((undefined *)&D_001D5768));
    func_00121990(uVar1);
    func_000688D0();
    return;
  }
  return;
}

void func_000AFB80(void)
{
  int func_000AFB10(...);
  int func_00126320(...);
  func_000AFB10();
  func_00126320();
  return;
}

void func_000AFD00(void) {
    int func_001266B0(...);
    func_001266B0();
}
