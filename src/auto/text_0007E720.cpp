/* 9 functions from 0x0007E720 to 0x0007F4B4, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007ECF0(void) { int func_000688D0(...); int func_0011BF40(...); extern int D_002FB310,D_002FB308,D_002FB30C; extern undefined D_001D66DC; if(D_002FB310==0){func_000688D0();D_002FB308=func_0011BF40(&D_001D66DC,0);func_000688D0();D_002FB30C=0;} D_002FB310++;}

void func_0007ED30(void)
{
  extern undefined4 D_002FB310;
  int func_0011B990(...);
  extern undefined4 D_002FB308;
  D_002FB310 = D_002FB310 + -1;
  if (D_002FB310 == 0) {
    func_0011B990(D_002FB308);
  }
  return;
}

void func_0007ED50(void) {
    extern int D_002FB3D8;
    D_002FB3D8 = 0;
}

void func_0007F1F0(void) { int func_00110760(...); extern int D_002FB3EC,D_002FB98C; int *p=&D_002FB3EC; do { func_00110760(p[-1]);func_00110760(p[0]);p+=0xb4; } while((int)p<(int)&D_002FB98C);}

