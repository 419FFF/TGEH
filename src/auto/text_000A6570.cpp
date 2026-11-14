/* 20 functions from 0x000A6570 to 0x000A7263, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A6680(int a0) {
    extern int D_00312B00;
    D_00312B00 = a0;
}

int func_000A6690(void) {
    extern int D_00312B00;
    return D_00312B00;
}

void func_000A68F0(int a0) {
    extern int D_00312A80;
    D_00312A80 = a0;
}

int func_000A6900(void) {
    extern int D_00312D78;
    return D_00312D78;
}

void func_000A69E0(void)
{
  extern undefined4 D_00312C34;
  switch(D_00312C34) {
  case 0:
    D_00312C34 = 1;
    return;
  case 1:
    D_00312C34 = 2;
    return;
  case 2:
    D_00312C34 = 3;
    return;
  case 3:
    D_00312C34 = 4;
    return;
  case 4:
    D_00312C34 = 0;
  }
  return;
}

