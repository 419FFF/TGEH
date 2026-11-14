/* 23 functions from 0x000B50A0 to 0x000B58B3, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000B50A0(void) {
    extern int D_00313D84;
    extern int D_00313BB0;
    D_00313D84 = -1;
    D_00313BB0 = -1;
}

void func_000B5180(undefined4 *param_1)
{
  int func_00116FB0(...);
  int func_0006EB40(...);
  func_00116FB0(param_1[6]);
  func_0006EB40(*param_1);
  func_0006EB40(param_1[1]);
  func_00116FB0(param_1);
  return;
}

void func_000B5420(int param_1, undefined1 param_2)
{
  *(undefined1 *)(param_1 + 0x3c) = param_2;
  return;
}

void func_000B5430(void)
{
  int func_0013F2E9(...);
  extern undefined4 D_00308158;
  extern undefined D_001D8A74;
  int func_000C2F40(...);
  extern undefined D_001D8A60;
  int func_000CCDA0(...);
  extern undefined D_001D89EC;
  int func_000BC450(...);
  int iVar1;
  
  iVar1 = func_0013F2E9(**(undefined4 **)(D_00308158 + 0x1c),((undefined *)&D_001D8A74));
  if (iVar1 == 0) {
    func_000C2F40();
  }
  iVar1 = func_0013F2E9(**(undefined4 **)(D_00308158 + 0x1c),((undefined *)&D_001D8A60));
  if (iVar1 == 0) {
    func_000CCDA0();
  }
  iVar1 = func_0013F2E9(**(undefined4 **)(D_00308158 + 0x1c),((undefined *)&D_001D89EC));
  if (iVar1 == 0) {
    func_000BC450();
    return;
  }
  return;
}

void func_000B54A0(void) {
    int func_000400A0(...);
    func_000400A0();
}

void func_000B54B0(void) {
    int func_000400B0(...);
    func_000400B0();
}

void func_000B54C0(void) {
    int func_000400C0(...);
    func_000400C0();
}

char func_000B5690(void) {
    extern char D_00313F0E;
    return D_00313F0E;
}

int func_000B57F0(void) {
    extern int D_00313ED8;
    return D_00313ED8;
}

void func_000B5860(void)
{
  extern undefined4 D_00307DF8;
  int func_00110330(...);
  int func_0006F7F0(...);
  int func_0006F820(...);
  int func_00089410(...);
  int func_0002D450(...);
  extern undefined D_001D3BE4;
  int func_000A05D0(...);
  int func_000860B0(...);
  int iVar1;
  
  iVar1 = *(int *)(D_00307DF8 + 0x110);
  *(undefined1 *)(iVar1 + 0x1ac) = 0;
  func_00110330(*(undefined4 *)(iVar1 + 0x210),0);
  func_0006F7F0(2,0x42c84ccd);
  func_0006F820();
  func_00089410(0,1);
  func_0002D450(((undefined *)&D_001D3BE4));
  func_000A05D0(0);
  func_000860B0();
  return;
}

