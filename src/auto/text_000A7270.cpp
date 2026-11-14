/* 13 functions from 0x000A7270 to 0x000A81DF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_000A7D70(void) {
    extern int D_00312D84;
    return D_00312D84;
}

void func_000A7D80(void)
{
  int func_000F93A0(...);
  extern undefined D_001D7940;
  extern undefined D_001D7948;
  extern undefined D_001D7934;
  extern undefined D_001D7928;
  int func_0009C590(...);
  extern undefined D_001D7918;
  int func_0009D3E0(...);
  extern undefined D_001D7908;
  extern undefined D_001D78F8;
  extern undefined4 D_00312DA4;
  extern undefined4 D_00312D90;
  int func_00110300(...);
  extern undefined D_001D78EC;
  extern undefined4 D_00312D94;
  extern undefined D_001D78E0;
  extern undefined4 D_00312D98;
  extern undefined D_001D78D4;
  extern undefined4 D_00312D9C;
  extern undefined D_001D78C8;
  extern undefined4 D_00312DA0;
  extern undefined D_001D78BC;
  undefined4 uVar1;
  int iVar2;
  
  func_000F93A0(((undefined *)&D_001D7940),((undefined *)&D_001D7948));
  func_000F93A0(((undefined *)&D_001D7940),((undefined *)&D_001D7934));
  func_000F93A0(((undefined *)&D_001D7940),((undefined *)&D_001D7928));
  uVar1 = func_0009C590(((undefined *)&D_001D7918));
  func_0009D3E0(uVar1);
  uVar1 = func_0009C590(((undefined *)&D_001D7908));
  func_0009D3E0(uVar1);
  iVar2 = func_0009C590(((undefined *)&D_001D78F8));
  D_00312DA4 = *(undefined4 *)(iVar2 + 0x2c);
  D_00312D90 = func_00110300(D_00312DA4,((undefined *)&D_001D78EC),0);
  D_00312D94 = func_00110300(D_00312DA4,((undefined *)&D_001D78E0),0);
  D_00312D98 = func_00110300(D_00312DA4,((undefined *)&D_001D78D4),0);
  D_00312D9C = func_00110300(D_00312DA4,((undefined *)&D_001D78C8),0);
  D_00312DA0 = func_00110300(D_00312DA4,((undefined *)&D_001D78BC),0);
  return;
}

