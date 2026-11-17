/* 15 functions from 0x000ECF20 to 0x000EDF00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000ED590(void)
{
  int func_000688D0(...);
  int func_00120DD0(...);
  extern undefined4 D_003245F0;
  extern undefined4 D_003245CC;
  int func_0011B990(...);
  extern undefined4 D_003245D0;
  extern undefined4 D_003245D4;
  extern undefined4 D_003245D8;
  int func_001317D0(...);
  extern undefined D_001D29C7;
  func_000688D0();
  func_000688D0();
  func_00120DD0(D_003245F0);
  func_000688D0();
  func_000688D0();
  *(short *)(D_003245CC + 0x2a) = *(short *)(D_003245CC + 0x2a) + -1;
  func_0011B990(D_003245CC);
  *(short *)(D_003245D0 + 0x2a) = *(short *)(D_003245D0 + 0x2a) + -1;
  func_0011B990(D_003245D0);
  *(short *)(D_003245D4 + 0x2a) = *(short *)(D_003245D4 + 0x2a) + -1;
  func_0011B990(D_003245D4);
  *(short *)(D_003245D8 + 0x2a) = *(short *)(D_003245D8 + 0x2a) + -1;
  func_0011B990(D_003245D8);
  func_000688D0();
  func_000688D0();
  func_001317D0(((undefined *)&D_001D29C7));
  func_000688D0();
  return;
}

void func_000EDA30(void)
{
  extern int D_00324650, D_00324660, D_00324664;
  extern float D_00324654, D_001D2808, D_001D2800, D_0032465C, D_00324658;
  int func_00120F60(...), func_00120F70(...), func_00120E20(...);
  double func_001219C0(...);
  if (D_00324650) {
    D_00324660 = *(int *)&D_00324654;
    D_00324654 = D_00324654 - D_001D2808;
    func_00120F60(0x3f4ccccd);
    func_00120F70(0x3f4ccccd);
    func_00120E20(0,0,0x459c4000,0x43f00000);
    if (!(func_001219C0(D_00324650) + D_00324654 >= D_001D2800 - D_0032465C)) {
      D_00324664++;
      D_00324654 = D_00324658;
    }
    func_00120E20(0,0,0x44200000,0x43f00000);
  }
}

int __fastcall func_000EDE10(int a) {
  switch (a) {
  case 2: return 6;
  case 4: return 1;
  case 5: return 2;
  case 6: return 3;
  case 7: return 4;
  case 8: return 5;
  case 9: return 7;
  default: return 0;
  }
}

void func_000EDE70(void)
{
  void func_0012F120(...), func_0012FE20(...), func_001105E0(...);
  extern int D_003246C0, D_003246C4, D_003246C8, D_003246F0;
  extern int D_0032460C, D_003246BC, D_00324600;
  __declspec(align(16)) char local[0x40];

  func_0012F120(local);
  func_0012FE20(local, 0, 0x40490fd0, 0);
  *(int *)(local + 0x30) = D_003246C0;
  *(int *)(local + 0x34) = D_003246C4;
  *(int *)(local + 0x38) = D_003246C8;
  func_001105E0(D_003246F0, local, 0);
  func_0012F120(local);
  func_0012FE20(local, D_003246BC, D_0032460C, 0);
  func_001105E0(D_00324600, local, 0);
}

