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

void func_000A7C00(void)
{
  int func_000688D0(...);
  int func_001383B0(...);
  int func_00133F30(int *);
  void func_0011E4A0(int, float, float, float, int, int, int *, float);
  extern float D_00312D80;
  extern int D_00312D84;
  extern float D_00312D88;
  extern float D_0032923C;
  extern float D_001D5444;
  extern float D_001D5728;
  extern float D_001D27D0;
  extern float D_001D27B8;
  extern float D_001D4524;
  int local[25];

  if (D_00312D84 != 0) {
    func_000688D0();
    func_001383B0();
    local[0] = 0;
    local[1] = 0;
    local[2] = 0;
    local[3] = 0;
    local[4] = 0;
    local[5] = 0;
    local[6] = 0;
    local[10] = 3;
    local[14] = 1;
    local[15] = 0;
    local[16] = 0;
    local[22] = 6;
    local[21] = 0;
    local[23] = 2;
    func_00133F30(&local[4]);
    func_0011E4A0(0, 0.0f, 640.0f, (float)((double)D_00312D80 - (double)D_001D5444), 0, 0, local, 1.0f);
    func_0011E4A0(0, (float)((double)D_001D5728 - (double)D_00312D80), 640.0f, 480.0f, 0, 0, local, 1.0f);
    if (D_00312D84 == 3) {
      double d = (double)D_00312D80 - ((double)D_0032923C - (double)D_00312D88) * (double)D_001D27D0;
      D_00312D80 = (float)d;
      if (d <= (double)D_001D27B8) {
        D_00312D80 = 0.0f;
        D_00312D84 = 0;
        D_00312D88 = D_0032923C;
        return;
      }
    } else if (D_00312D84 == 2) {
      double d = (double)D_00312D80 + ((double)D_0032923C - (double)D_00312D88) * (double)D_001D27D0;
      D_00312D80 = (float)d;
      if (d >= (double)D_001D4524) {
        D_00312D80 = 120.0f;
        D_00312D84 = 1;
        D_00312D88 = D_0032923C;
        return;
      }
    }
    D_00312D88 = D_0032923C;
  }
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

  func_000F93A0(((undefined *)&D_001D79A8), ((undefined *)&D_001D7928));
  func_000F93A0(((undefined *)&D_001D79A8), ((undefined *)&D_001D799C));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D79A8)), func_000F91D0(((undefined *)&D_001D72DC)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D79A8)), func_000F91D0(((undefined *)&D_001D7990)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D79A8)), func_000F91D0(((undefined *)&D_001D7988)));
  func_000F93A0(((undefined *)&D_001D7974), ((undefined *)&D_001D7980));
  func_000F93A0(((undefined *)&D_001D7974), ((undefined *)&D_001D799C));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7974)), func_000F91D0(((undefined *)&D_001D7968)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7974)), func_000F91D0(((undefined *)&D_001D7960)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7974)), func_000F91D0(((undefined *)&D_001D7958)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7974)), func_000F91D0(((undefined *)&D_001D72DC)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7974)), func_000F91D0(((undefined *)&D_001D7988)));
}

void func_000A7FB0(void) {
int func_000F93A0(...); int func_000F91D0(...); int func_000F7EF0(...);
extern char D_001D7928, D_001D79F8, D_001D79EC, D_001D7990, D_001D7988, D_001D79E0, D_001D79D4, D_001D79C8, D_001D7960, D_001D7958, D_001D79BC, D_001D79B4, D_001D7940, D_001D72DC;
func_000F93A0(&D_001D79F8,&D_001D7928);
func_000F7EF0(func_000F91D0(&D_001D79F8), func_000F91D0(&D_001D79EC));
func_000F7EF0(func_000F91D0(&D_001D79F8), func_000F91D0(&D_001D7990));
func_000F7EF0(func_000F91D0(&D_001D79F8), func_000F91D0(&D_001D7988));
func_000F93A0(&D_001D79D4,&D_001D79E0);
func_000F7EF0(func_000F91D0(&D_001D79D4), func_000F91D0(&D_001D79C8));
func_000F7EF0(func_000F91D0(&D_001D79D4), func_000F91D0(&D_001D7960));
func_000F7EF0(func_000F91D0(&D_001D79D4), func_000F91D0(&D_001D7958));
func_000F7EF0(func_000F91D0(&D_001D79D4), func_000F91D0(&D_001D7990));
func_000F7EF0(func_000F91D0(&D_001D79D4), func_000F91D0(&D_001D7988));
func_000F93A0(&D_001D79BC,&D_001D79E0);
func_000F93A0(&D_001D79BC,&D_001D79B4);
func_000F7EF0(func_000F91D0(&D_001D79BC), func_000F91D0(&D_001D7940));
func_000F7EF0(func_000F91D0(&D_001D79BC), func_000F91D0(&D_001D79C8));
func_000F7EF0(func_000F91D0(&D_001D79BC), func_000F91D0(&D_001D7960));
func_000F7EF0(func_000F91D0(&D_001D79BC), func_000F91D0(&D_001D7958));
func_000F7EF0(func_000F91D0(&D_001D79BC), func_000F91D0(&D_001D7990));
func_000F7EF0(func_000F91D0(&D_001D79BC), func_000F91D0(&D_001D7988));
func_000F7EF0(func_000F91D0(&D_001D79B4), func_000F91D0(&D_001D72DC));
}

