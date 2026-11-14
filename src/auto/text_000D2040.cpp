/* 11 functions from 0x000D2040 to 0x000D2FEB, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000D2A00(void)
{
  int func_00136450(...);
  int func_0002DF20(...);
  extern undefined4 D_00307DF8;
  int func_0005CCC0(...);
  int func_000A29C0(...);
  int func_000A2840(...);
  int func_001105E0(...);
  extern undefined4 D_0031AD00;
  extern undefined D_0031AD50;
  extern undefined4 D_0031ADF0;
  extern undefined D_0031AE40;
  extern undefined4 D_0031B7E8;
  extern undefined D_0031B7F0;
  int func_00110000(...);
  int func_0009C590(...);
  extern undefined D_001D7BD4;
  int func_0009D3E0(...);
  int func_0009D640(...);
  extern undefined D_0031ACA0;
  int func_00107C40(...);
  extern undefined4 D_003251DC;
  extern undefined4 D_00308158;
  int func_00110760(...);
  extern undefined4 D_0031B844;
  extern undefined4 D_0033116C;
  extern undefined4 D_0031B848;
  int func_00124AD0(...);
  int func_00101110(...);
  extern undefined4 D_00313B54;
  int func_001052A0(...);
  int func_000687F0(...);
  undefined4 uVar1;
  
  func_00136450();
  func_0002DF20(D_00307DF8);
  func_0005CCC0(1);
  func_000A29C0(0);
  func_000A2840();
  func_001105E0(D_0031AD00,((undefined *)&D_0031AD50),0);
  func_001105E0(D_0031ADF0,((undefined *)&D_0031AE40),0);
  func_001105E0(*(undefined4 *)(D_0031B7E8 + 0x2c),((undefined *)&D_0031B7F0),0);
  func_00110000(D_0031AD00);
  func_00110000(D_0031ADF0);
  uVar1 = func_0009C590(((undefined *)&D_001D7BD4));
  func_0009D3E0(uVar1);
  uVar1 = func_0009C590(((undefined *)&D_001D7BD4));
  func_0009D640(uVar1);
  if (D_0031ACA0 != '\0') {
    func_00107C40(D_003251DC,D_00308158,D_00308158);
  }
  func_00110760(D_0031B844);
  D_0033116C = D_0031B848;
  func_00124AD0();
  func_00101110(D_00313B54);
  func_001052A0();
  func_000687F0();
  return;
}
