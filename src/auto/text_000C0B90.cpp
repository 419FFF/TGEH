/* 13 functions from 0x000C0B90 to 0x000C1AFB, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000C14F0(void)
{
  int func_000A2780(...);
  extern undefined4 D_00314D94;
  int func_000687F0(...);
  int func_0009C590(...);
  extern undefined D_001D9A40;
  int func_0009D280(...);
  int func_0005CCC0(...);
  int func_0005F310(...);
  int func_00116FB0(...);
  extern undefined4 D_00314E58;
  extern undefined4 D_00314E54;
  undefined4 uVar1;
  
  func_000A2780(0x33,0,0);
  if (D_00314D94 == 1) {
    func_000687F0();
    uVar1 = func_0009C590(((undefined *)&D_001D9A40));
    func_0009D280(uVar1);
    func_0005CCC0(1);
    func_0005F310(0);
    D_00314D94 = 2;
    func_00116FB0(D_00314E58);
    D_00314E58 = 0;
    func_00116FB0(D_00314E54);
    D_00314E54 = 0;
  }
  return;
}

void func_000C1720(void) {
    int func_000BE260(...);
    func_000BE260();
}

void func_000C1730(void)
{
  extern undefined4 D_003080AC;
  int func_000BEB30(...);
  if (D_003080AC != 2) {
    func_000BEB30();
    return;
  }
  return;
}

