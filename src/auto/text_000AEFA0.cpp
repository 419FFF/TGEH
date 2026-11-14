/* 16 functions from 0x000AEFA0 to 0x000AFE83, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000AF470(int ignored)
{
  extern undefined4 D_00313B00;
  int func_0013B380(undefined4);
  func_0013B380(D_00313B00);
}

void func_000AF480(void)
{
  extern undefined D_00313940;
  int func_0013B2B0(...);
  extern undefined4 D_00313924;
  int func_0013B140(...);
  extern undefined4 D_00313954;
  int func_00136450(...);
  extern undefined4 D_00313930;
  int func_0009CE80(...);
  extern undefined4 D_00313928;
  extern undefined4 D_00313938;
  int func_0011B990(...);
  int func_00110760(...);
  extern undefined4 D_0031394C;
  int func_0013B300(...);
  int func_001053A0(...);
  extern undefined4 D_00313944;
  int func_0010F8A0(...);
  int func_0011BE30(...);
  extern undefined4 D_003291E0;
  extern undefined4 D_00313934;
  int func_0013B380(...);
  extern undefined4 D_00313B00;
  undefined4 uVar1;
  
  D_00313940 = 1;
  func_0013B2B0(D_00313924,0xbf800000);
  func_0013B140(D_00313954);
  D_00313954 = 0;
  func_00136450();
  uVar1 = *(undefined4 *)(D_00313930 + 0x18);
  func_0009CE80(D_00313930);
  func_0009CE80(D_00313928);
  func_0009CE80(D_00313938);
  func_0011B990(uVar1);
  func_00110760(D_0031394C);
  func_0013B300(D_00313924);
  func_001053A0(D_00313944);
  func_0010F8A0();
  func_0010F8A0();
  func_0010F8A0();
  func_0011BE30();
  func_0011BE30();
  func_0011BE30();
  D_003291E0 = D_00313934;
  func_0013B380(D_00313B00);
  return;
}

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
