/* 5 functions from 0x000621F0 to 0x000630C4, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined1 func_00062AB0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int func_000B5650(...);
  int func_00110300(...);
  extern undefined4 D_00308158;
  extern undefined D_001D5478;
  int func_00068D90(...);
  int func_000621F0(...);
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  cVar1 = func_000B5650(0x14);
  if (cVar1 != '\0') {
    uVar3 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D5478),0x18);
    func_00068D90(uVar3);
  }
  uVar2 = func_000621F0(param_1,param_2,param_3,param_4);
  func_00068D90(0);
  return uVar2;
}

void func_00063000(void)
{
  extern undefined4 D_002EF494;
  int func_0010F750(...);
  extern undefined D_001D54CC;
  extern undefined4 D_00326110;
  extern undefined D_002EF4AC;
  int func_000688D0(...);
  int func_00131990(...);
  extern undefined D_001D54B8;
  extern undefined4 D_002EF480;
  int func_0011BF40(...);
  extern undefined D_001D54A8;
  extern undefined4 D_002EF420;
  extern undefined D_001D5498;
  extern undefined4 D_002EF47C;
  int func_0011BDD0(...);
  extern undefined4 D_002EF41C;
  extern undefined D_001D29C7;
  D_002EF494 = func_0010F750(((undefined *)&D_001D54CC),D_00326110,0xe0);
  D_002EF4AC = 0;
  func_000688D0();
  func_00131990(((undefined *)&D_001D54B8));
  D_002EF480 = func_0011BF40(((undefined *)&D_001D54A8),0);
  D_002EF420 = func_0011BF40(((undefined *)&D_001D5498),0);
  D_002EF47C = func_0011BDD0(D_002EF480,0);
  D_002EF41C = func_0011BDD0(D_002EF420,0);
  func_00131990(((undefined *)&D_001D29C7));
  func_000688D0();
  return;
}
struct C_00063090 {
  void func_00063090(float *param_1);
};
