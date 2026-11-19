/* 13 functions from 0x000A7270 to 0x000A81DF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A7890(void)
{
  int func_000A7030(...);
  int func_00105CC0(...);
  int func_000688D0(...);
  int func_00120DD0(...);
  extern undefined4 D_00312B08;
  extern undefined4 D_00312B10;
  int func_0011B990(...);
  extern undefined4 D_00312B20;
  extern undefined4 D_00312B24;
  extern undefined4 D_00312B28;
  extern undefined4 D_00312B2C;
  extern undefined4 D_00312B40;
  extern undefined4 D_00312B44;
  extern undefined4 D_00312B48;
  extern undefined4 D_00312B4C;
  extern undefined4 D_00312B70;
  extern undefined4 D_00312B74;
  extern undefined4 D_00312B78;
  extern undefined4 D_00312B7C;
  extern undefined4 D_00312D74;
  int func_000AFD00(...);
  extern undefined4 D_00312C30;
  int func_001317D0(...);
  extern undefined D_001D29C7;
  extern undefined D_001D78A0;
  int func_001167C0(...);
  int func_000716B0(...);
  func_000A7030();
  func_00105CC0();
  func_000688D0();
  func_000688D0();
  func_00120DD0(D_00312B08);
  func_000688D0();
  func_000688D0();
  *(short *)(D_00312B10 + 0x2a) = *(short *)(D_00312B10 + 0x2a) + -1;
  func_0011B990(D_00312B10);
  *(short *)(D_00312B20 + 0x2a) = *(short *)(D_00312B20 + 0x2a) + -1;
  func_0011B990(D_00312B20);
  *(short *)(D_00312B24 + 0x2a) = *(short *)(D_00312B24 + 0x2a) + -1;
  func_0011B990(D_00312B24);
  *(short *)(D_00312B28 + 0x2a) = *(short *)(D_00312B28 + 0x2a) + -1;
  func_0011B990(D_00312B28);
  *(short *)(D_00312B2C + 0x2a) = *(short *)(D_00312B2C + 0x2a) + -1;
  func_0011B990(D_00312B2C);
  *(short *)(D_00312B40 + 0x2a) = *(short *)(D_00312B40 + 0x2a) + -1;
  func_0011B990(D_00312B40);
  *(short *)(D_00312B44 + 0x2a) = *(short *)(D_00312B44 + 0x2a) + -1;
  func_0011B990(D_00312B44);
  *(short *)(D_00312B48 + 0x2a) = *(short *)(D_00312B48 + 0x2a) + -1;
  func_0011B990(D_00312B48);
  *(short *)(D_00312B4C + 0x2a) = *(short *)(D_00312B4C + 0x2a) + -1;
  func_0011B990(D_00312B4C);
  *(short *)(D_00312B70 + 0x2a) = *(short *)(D_00312B70 + 0x2a) + -1;
  func_0011B990(D_00312B70);
  *(short *)(D_00312B74 + 0x2a) = *(short *)(D_00312B74 + 0x2a) + -1;
  func_0011B990(D_00312B74);
  *(short *)(D_00312B78 + 0x2a) = *(short *)(D_00312B78 + 0x2a) + -1;
  func_0011B990(D_00312B78);
  *(short *)(D_00312B7C + 0x2a) = *(short *)(D_00312B7C + 0x2a) + -1;
  func_0011B990(D_00312B7C);
  func_0011B990(D_00312D74);
  D_00312D74 = 0;
  func_000688D0();
  func_000AFD00(D_00312C30);
  func_000688D0();
  func_001317D0(((undefined *)&D_001D29C7));
  func_000688D0();
  func_000688D0(1,((undefined *)&D_001D78A0),0x438);
  func_001167C0();
  func_000716B0(1);
  return;
}

void func_000A7A30(void)
{
    extern unsigned int D_00312D70, D_001E46B4, D_00312B0C, D_00312C3C, D_00312C38, D_00312D78;
    extern unsigned int D_00313B00;
    extern char D_00308153;
    extern float D_00312C48;
    int func_0013B380(...);
    int func_0011FE60(float);
    int func_0011FE30(...);
    int func_000B06B0(...);
    int func_000A7270(...);
    int func_000A7030(...);
    int func_000716B0(...);
    func_000716B0(0);
    func_000A7030();
    D_00312D70 = func_0013B380(D_00313B00);
    func_0011FE60(0);
    while (D_00312C3C * D_001E46B4 <= D_00312B0C * D_00312D70) {
        func_0011FE30(D_00312C3C);
        D_00312D78 = func_000B06B0();
        if (D_00308153 == 0) func_000A7270();
        D_00312C3C++;
        D_00312C38++;
        D_00312C48 = (float)(D_00312C38 / D_00312B0C);
    }
    func_0011FE60((float)((D_00312B0C * D_00312D70) % D_001E46B4) / (float)D_001E46B4);
}

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

void func_000A7E60(void)
{
  int func_000F93A0(...);
  int func_000F91D0(...);
  int func_000F7EF0(...);
  extern undefined D_001D7928;
  extern undefined D_001D79A8;
  extern undefined D_001D799C;
  extern undefined D_001D72DC;
  extern undefined D_001D7990;
  extern undefined D_001D7988;
  extern undefined D_001D7980;
  extern undefined D_001D7974;
  extern undefined D_001D7968;
  extern undefined D_001D7960;
  extern undefined D_001D7958;
  undefined4 uVar1;

  func_000F93A0(((undefined *)&D_001D79A8),((undefined *)&D_001D7928));
  func_000F93A0(((undefined *)&D_001D79A8),((undefined *)&D_001D799C));
  uVar1 = func_000F91D0(((undefined *)&D_001D72DC));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D79A8)),uVar1);
  uVar1 = func_000F91D0(((undefined *)&D_001D7990));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D79A8)),uVar1);
  uVar1 = func_000F91D0(((undefined *)&D_001D7988));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D79A8)),uVar1);
  func_000F93A0(((undefined *)&D_001D7974),((undefined *)&D_001D7980));
  func_000F93A0(((undefined *)&D_001D7974),((undefined *)&D_001D799C));
  uVar1 = func_000F91D0(((undefined *)&D_001D7968));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7974)),uVar1);
  uVar1 = func_000F91D0(((undefined *)&D_001D7960));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7974)),uVar1);
  uVar1 = func_000F91D0(((undefined *)&D_001D7958));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7974)),uVar1);
  uVar1 = func_000F91D0(((undefined *)&D_001D72DC));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7974)),uVar1);
  uVar1 = func_000F91D0(((undefined *)&D_001D7988));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7974)),uVar1);
  return;
}
#pragma optimize("", on)

