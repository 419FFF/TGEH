/* 15 functions from 0x000E61A0 to 0x000E7115, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000E6C30(void)
{
  int func_00103210(...);
  extern undefined D_001DC130;
  int func_00102E80(...);
  int func_000687F0(...);
  int func_0009CBE0(...);
  extern undefined D_001D7BE0;
  int func_000E30B0(...);
  int func_00110330(...);
  int func_000A27A0(...);
  int func_000A29C0(...);
  int func_000A2840(...);
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = func_00103210(((undefined *)&D_001DC130));
  func_00102E80(uVar3);
  func_000687F0();
  iVar4 = func_0009CBE0(((undefined *)&D_001D7BE0));
  iVar1 = *(int *)(iVar4 + 0x110);
  func_00102E80(*(undefined4 *)(iVar1 + 0xe1c));
  *(undefined4 *)(iVar1 + 0x40) = 0;
  iVar4 = *(int *)(iVar4 + 0x2c);
  for (puVar2 = *(undefined4 **)(iVar4 + 0x28); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[3]) {
    func_000E30B0(*puVar2,1);
  }
  func_00110330(iVar4,1);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  func_000A27A0(0x32,0,0,0);
  func_000A29C0(0);
  func_000A2840();
  return;
}

void func_000E7050(void)
{
  extern undefined4 D_003080AC;
  extern undefined4 D_003234B8;
  extern undefined4 D_00322490;
  int func_000A27A0(...);
  extern undefined4 D_003227EC;
  extern undefined D_003227C8;
  extern undefined4 D_00322808;
  if (D_003080AC != 2) {
    if (((D_003227C8 == '\0') && ((s32)D_003234B8 < 3)) || (0x32 > (s32)D_00322490)) {
      func_000A27A0(0x32,1,D_003227EC,D_00322808);
      return;
    }
    func_000A27A0(0x32,0,0,0);
  }
  return;
}

void func_000E70D0(void)
{
  int func_000B54D0(...);
  int func_000451B0(...);
  int func_000E70A0(...);
  int func_000451C0(...);
  func_000B54D0(1);
  func_000451B0(&func_000E70A0);
  func_000451C0();
  return;
}
