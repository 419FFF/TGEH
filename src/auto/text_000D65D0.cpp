/* 12 functions from 0x000D65D0 to 0x000D753D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000D6AB0(void)
{
  int func_0009D280(...);
  extern undefined4 D_0031BA60;
  int func_0001B3F0(...);
  int func_00136450(...);
  int func_000D6390(...);
  int func_0009C590(...);
  extern undefined D_001D80F8;
  int func_0009D3E0(...);
  int func_0009D640(...);
  int func_000ECB60(...);
  int func_0010F8A0(...);
  int func_0011BE30(...);
  int func_000F8B60(...);
  int func_000F9700(...);
  int func_0002DF20(...);
  extern undefined4 D_00307DF8;
  extern undefined4 D_002EECA0;
  extern undefined D_0031B9C0;
  int func_00107C40(...);
  extern undefined4 D_00325148;
  extern undefined4 D_00308158;
  int func_000687F0(...);
  int func_000A2E30(...);
  undefined4 uVar1;
  
  func_0009D280(D_0031BA60);
  func_0001B3F0(D_0031BA60);
  func_00136450();
  func_000D6390();
  uVar1 = func_0009C590(((undefined *)&D_001D80F8));
  func_0009D3E0(uVar1);
  uVar1 = func_0009C590(((undefined *)&D_001D80F8));
  func_0009D640(uVar1);
  func_000ECB60();
  func_0010F8A0();
  func_0010F8A0();
  func_0010F8A0();
  func_0011BE30();
  func_0011BE30();
  func_0011BE30();
  func_000F8B60(1,0);
  func_000F9700();
  func_0002DF20(D_00307DF8);
  D_002EECA0 = 1;
  if (D_0031B9C0 != '\0') {
    func_00107C40(D_00325148,D_00308158,D_00308158);
  }
  func_000687F0();
  func_000A2E30(0);
  return;
}

void func_000D73E0(undefined1 param_1, undefined1 param_2, undefined1 param_3, undefined1 param_4)
{
  extern undefined4 D_0031E508;
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = D_0031E508;
  uVar2 = 0;
  piVar3 = (int *)(D_0031E508 + 0xdcf0);
  do {
    if (*piVar3 == 0) {
      *(undefined4 *)(D_0031E508 + (uVar2 * 5 + 0x373c) * 4) = 2;
      iVar1 = iVar1 + uVar2 * 0x14;
      *(undefined1 *)(iVar1 + 0xdce8) = param_1;
      *(undefined1 *)(iVar1 + 0xdce9) = param_2;
      *(undefined1 *)(iVar1 + 0xdcea) = param_3;
      *(undefined1 *)(iVar1 + 0xdceb) = param_4;
      *(undefined4 *)(iVar1 + 0xdcf8) = 0;
      return;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 5;
  } while (uVar2 < 0x96);
  return;
}
