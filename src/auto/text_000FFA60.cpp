/* 25 functions from 0x000FFA60 to 0x00100A53, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00100750(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324D34;
  if (D_001E5EC8 != '\0') {
    D_00324D34 = param_1;
  }
  return;
}

void func_00100770(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324D38;
  if (D_001E5EC8 != '\0') {
    D_00324D38 = param_1;
  }
  return;
}

void func_00100790(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324D3C;
  if (D_001E5EC8 != '\0') {
    D_00324D3C = param_1;
  }
  return;
}

void func_001007B0(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324D40;
  if (D_001E5EC8 != '\0') {
    D_00324D40 = param_1;
  }
  return;
}

void func_001009B0(int a0) {
    extern int D_00324D28;
    D_00324D28 = a0;
}
