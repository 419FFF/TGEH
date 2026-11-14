/* 15 functions from 0x000DCD80 to 0x000DDB21, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000DCFC0(int param_1, int param_2)
{
  int func_0012E6D0(...);
  int func_0012F610(...);
  int func_0012E5F0(...);
  undefined1 local_c [12];
  
  func_0012E6D0(local_c,param_1 + 0x170,param_1 + 0x80);
  func_0012F610(local_c,param_1 + 0x10);
  func_0012E5F0(param_1 + 0x254,param_2 + 0x30,local_c);
  func_0012E6D0(local_c,param_1 + 0x200,param_1 + 0x80);
  func_0012F610(local_c,param_1 + 0x10);
  func_0012E5F0(param_1 + 0x260,param_2 + 0x30,local_c);
  return;
}

void func_000DD1F0(void)
{
  int func_000D5290(...);
  extern undefined D_0031E760;
  extern undefined D_0031E7F0;
  extern undefined D_0031E890;
  extern undefined D_0031E930;
  extern undefined D_0031EC00;
  undefined *puVar1;
  int iVar2;
  
  func_000D5290(((undefined *)&D_0031E760));
  func_000D5290(((undefined *)&D_0031E7F0));
  func_000D5290(((undefined *)&D_0031E890));
  func_000D5290(((undefined *)&D_0031E930));
  puVar1 = ((undefined *)&D_0031EC00);
  iVar2 = 5;
  do {
    func_000D5290(puVar1);
    puVar1 = puVar1 + 0x310;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

void func_000DD240(void)
{
  int func_000A2780(...);
  int func_00136450(...);
  int func_00103210(...);
  extern undefined D_001DB640;
  int func_00102E80(...);
  extern undefined D_001DB628;
  int func_0002DF20(...);
  extern undefined4 D_00307DF8;
  extern undefined4 D_002EECA0;
  int func_000A29C0(...);
  int func_000A2840(...);
  extern undefined4 D_00312D8C;
  int func_00110330(...);
  extern undefined D_0031E6C0;
  int func_00107C40(...);
  extern undefined4 D_003251B4;
  extern undefined4 D_00308158;
  int func_00110760(...);
  extern undefined4 D_0031FC38;
  extern undefined4 D_0031FC3C;
  extern undefined4 D_0031FC40;
  extern undefined4 D_0033116C;
  extern undefined4 D_0031FC44;
  int func_00124AD0(...);
  int func_0009C590(...);
  extern undefined D_001D7908;
  int func_0009D3E0(...);
  int func_0009D640(...);
  int func_0008F610(...);
  int func_0008F740(...);
  int func_0010F8A0(...);
  int func_0011BE30(...);
  int func_000F8B60(...);
  int func_000F9700(...);
  int func_000B54C0(...);
  int func_000A2E30(...);
  undefined4 uVar1;
  
  func_000A2780(0x39,0,0);
  func_00136450();
  uVar1 = func_00103210(((undefined *)&D_001DB640));
  func_00102E80(uVar1);
  uVar1 = func_00103210(((undefined *)&D_001DB628));
  func_00102E80(uVar1);
  func_0002DF20(D_00307DF8);
  D_002EECA0 = 1;
  func_000DD1F0();
  func_000A29C0(0);
  func_000A2840();
  if (D_00312D8C != 0) {
    func_00110330(D_00312D8C,1);
  }
  if (D_0031E6C0 != '\0') {
    func_00107C40(D_003251B4,D_00308158,D_00308158);
  }
  func_00110760(D_0031FC38);
  func_00110760(D_0031FC3C);
  func_00110760(D_0031FC40);
  D_0033116C = D_0031FC44;
  if (D_00312D8C != 0) {
    func_00110330(D_00312D8C,1);
  }
  func_00124AD0();
  uVar1 = func_0009C590(((undefined *)&D_001D7908));
  func_0009D3E0(uVar1);
  uVar1 = func_0009C590(((undefined *)&D_001D7908));
  func_0009D640(uVar1);
  func_0008F610(1);
  func_0008F740(1);
  func_0010F8A0();
  func_0010F8A0();
  func_0010F8A0();
  func_0011BE30();
  func_0011BE30();
  func_0011BE30();
  func_000F8B60(1,0);
  func_000F9700();
  func_000B54C0(0);
  func_000A2E30(0);
  return;
}

