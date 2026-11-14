/* 15 functions from 0x000B6640 to 0x000B75B8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000B7100(void)
{
  extern undefined D_00313F15;
  int func_000B58C0(...);
  extern undefined D_00313F16;
  extern undefined D_00313F17;
  extern undefined D_00313F18;
  if (D_00313F15 != '\0') {
    func_000B58C0(0x13,2);
  }
  if (D_00313F16 != '\0') {
    func_000B58C0(0x15,2);
  }
  if (D_00313F17 != '\0') {
    func_000B58C0(0x14,2);
  }
  if (D_00313F18 != '\0') {
    func_000B58C0(0x12,2);
  }
  return;
}

void func_000B7320(void)
{
  int func_0005CCC0(...);
  int func_000B7190(...);
  extern undefined4 D_002EEE40;
  func_0005CCC0(0xf);
  func_000B7190();
  D_002EEE40 = 0x42700000;
  return;
}
