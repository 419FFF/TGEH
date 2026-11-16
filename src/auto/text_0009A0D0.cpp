/* 11 functions from 0x0009A0D0 to 0x0009ABC7, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0009A610(void)
{
  int func_000F87B0(...);
  int func_00067D50(...);
  int func_0005CF90(...);
  int func_000688D0(...);
  int func_00059880(...);
  int func_000B6F40(...);
  extern undefined4 D_00313B54;
  int func_00136450(...);
  int func_000F9700(...);
  int func_0011BED0(...);
  int func_00105280(...);
  int func_0009F370(...);
  int func_000ECB60(...);
  int func_000A8790(...);
  int func_000A8E00(...);
  int func_000A9D70(...);
  int func_000AB120(...);
  int func_000ABAC0(...);
  int func_000AC9B0(...);
  int func_0006E0C0(...);
  int func_00013140(...);
  int func_000486C0(...);
  extern undefined4 D_00307D10;
  int func_000AFD00(...);
  extern undefined4 D_00307DD4;
  extern undefined4 D_00313B60;
  int func_00110420(...);
  int func_00105CC0(...);
  int func_00070D60(...);
  int func_00109650(...);
  int func_000A7B60(...);
  int func_00100E50(...);
  int func_000FFA80(...);
  int func_0009F870(...);
  int func_000A3F00(...);
  int func_000A2770(...);
  int func_00107BB0(...);
  int func_000FA740(...);
  int func_0005C6C0(...);
  int func_0006FCE0(...);
  int func_001095A0(...);
  int func_000F4320(...);
  int func_0006E2B0(...);
  int func_000EFA10(...);
  int func_000F49A0(...);
  int func_000F6170(...);
  int func_0009D080(...);
  int func_000F7CE0(...);
  int func_00064EA0(...);
  int func_00088820(...);
  int func_00087FE0(...);
  int func_0011B990(...);
  extern undefined4 D_00331504;
  int __stdcall func_0014DF80(int);
  extern undefined4 D_00307DCC;
  int func_001244D0(...);
  int func_0008F610(...);
  int func_0011E450(...);
  int func_001053A0(...);
  extern undefined4 D_00307D18;
  int func_001052C0(...);
  int func_00110760(...);
  extern undefined4 D_0030809C;
  int func_0010F8A0(...);
  int func_0011BE30(...);
  int func_0006F670(...);
  extern undefined D_00308100;
  int func_00122710(...);
  extern undefined D_001D72A0;
  extern undefined4 D_00307D04;
  extern undefined4 D_00326880;
  int func_00117340(...);
  extern undefined4 D_00307CF4;
  int func_001167C0(...);
  int func_001317D0(...);
  extern undefined D_001D29C7;
  int iVar1;
  uint uVar2;
  
  func_000F87B0();
  func_00067D50();
  func_0005CF90(1);
  func_000688D0();
  func_00059880();
  func_000B6F40(D_00313B54);
  func_00136450();
  func_000F9700();
  func_0011BED0();
  func_00105280();
  func_000688D0();
  func_0009F370();
  func_000ECB60();
  switch(D_00313B54) {
  case 3:
    func_000A8790();
    break;
  case 4:
    func_000A8E00();
    break;
  case 5:
    func_000A9D70();
    break;
  case 6:
    func_000AB120();
    break;
  case 7:
    func_000ABAC0();
    break;
  case 8:
    func_000AC9B0();
  }
  func_0006E0C0();
  func_00013140();
  func_000486C0(D_00307D10);
  func_000AFD00(D_00307DD4);
  if (*(undefined4 **)(D_00313B60 + 0x2c) != (undefined4 *)0x0) {
    func_00110420(D_00313B60,**(undefined4 **)(D_00313B60 + 0x2c));
  }
  func_00105CC0();
  func_000688D0();
  iVar1 = func_00070D60();
  if (iVar1 != 3) {
    func_00109650();
  }
  func_000A7B60();
  func_00100E50();
  func_000FFA80();
  func_0009F870();
  func_000A3F00();
  func_000A2770();
  func_00107BB0();
  func_000FA740();
  func_0005C6C0();
  func_0006FCE0();
  func_001095A0();
  func_000F4320();
  func_0006E2B0();
  func_000EFA10();
  func_000F49A0();
  func_000F6170();
  func_0009D080();
  func_000F7CE0();
  func_00064EA0();
  func_000688D0();
  func_00088820();
  func_00087FE0();
  func_0011B990(D_00331504);
  func_0014DF80((int)(D_00307DCC));
  func_001244D0();
  func_0008F610();
  func_0011E450();
  func_001053A0(D_00307D18);
  func_001052C0();
  func_00110760(D_0030809C);
  D_0030809C = 0;
  func_0010F8A0();
  func_0010F8A0();
  func_0010F8A0();
  func_0011BE30();
  func_0011BE30();
  func_0011BE30();
  func_0011BED0();
  func_0006F670();
  uVar2 = 0;
  do {
    if (*(int *)(((undefined *)&D_00308100) + uVar2) != 0) {
      func_00122710(*(int *)(((undefined *)&D_00308100) + uVar2));
      *(undefined4 *)(((undefined *)&D_00308100) + uVar2) = 0;
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x50);
  func_000688D0(1,((undefined *)&D_001D72A0),0xa04);
  if (D_00307D04 != D_00326880) {
    func_00117340(D_00307D04);
  }
  if (D_00307CF4 != D_00326880) {
    func_00117340(D_00307CF4);
  }
  func_001167C0();
  func_001317D0(((undefined *)&D_001D29C7));
  return;
}

unsigned int func_0009A880(void){extern unsigned int D_003080A4; extern int D_00269EC3; D_003080A4=D_003080A4*0x343fd+(unsigned int)&D_00269EC3; return (D_003080A4>>16)&0x7fff;}

float func_0009A8A0(void){extern unsigned int D_003080A4; extern unsigned char D_00269EC3; extern float D_001D72C0; D_003080A4=D_003080A4*0x343fd+D_00269EC3; return (float)((D_003080A4>>16)&0x7fff)*D_001D72C0;}

void func_0009A920(int a0) {
    extern int D_00308154;
    D_00308154 = a0;
}
