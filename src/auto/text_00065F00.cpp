/* 11 functions from 0x00065F00 to 0x00066C11, found by Ghidra. */
#include "common.h"

void func_00065F00(void)
{
  extern int D_002F7738;
  extern int D_002F7734;
  int func_000688D0(...);
  int func_00110370(...);
  if (D_002F7738 == 0) {
    int local[7];
    local[4] = 0;
    local[2] = 0;
    local[1] = (int)func_000688D0;
    local[3] = (int)func_000688D0;
    D_002F7734 = func_00110370(local);
  }
  ++D_002F7738;
}

void func_00066200(void)
{
  extern int D_002F773C, D_002F7748, D_002F7754, D_002F7760;
  int func_00110300(...);
  extern int D_00308158;
  extern char D_001D55DC, D_001D55D4, D_001D55CC, D_001D55C4;
  extern char D_002F7744, D_002F7774;
  D_002F773C = func_00110300(*(int *)(D_00308158 + 0x2c), &D_001D55DC, 0);
  D_002F7748 = func_00110300(*(int *)(D_00308158 + 0x2c), &D_001D55D4, 0);
  D_002F7754 = func_00110300(*(int *)(D_00308158 + 0x2c), &D_001D55CC, 0);
  D_002F7760 = func_00110300(*(int *)(D_00308158 + 0x2c), &D_001D55C4, 0);
  int p = (int)&D_002F7744;
  do { *(int *)(p - 4) = 0x3f800000; *(char *)p = 0; p += 12; } while (p < (int)&D_002F7774);
}

void func_000667A0(int a0, int a1, int a2, int a3, int a4) {
    extern int D_002F776C;
    extern int D_002F7770;
    extern int D_002F7774;
    extern int D_002F7778;
    extern int D_002F777C;
    D_002F776C = a0;
    D_002F7770 = a1;
    D_002F7774 = a2;
    D_002F7778 = a3;
    D_002F777C = a4;
}

void func_000669E0(void)
{
  int func_0011B990(...), func_00116FB0(...);
  extern int D_002F77AC, D_002F7784, D_002F7798, D_002F77A0, D_002F779C;
  func_0011B990(D_002F77AC);
  int i = 0;
  D_002F77AC = 0;
  func_0011B990(D_002F7784);
  func_0011B990(D_002F7798);
  while (i < D_002F77A0) { func_00116FB0(*(int *)(D_002F779C + i * 8)); ++i; }
  func_00116FB0(D_002F779C);
}

