/* 25 functions from 0x000FFA60 to 0x00100A53, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000FFA60(void) {
    extern int D_00324BA4;
    extern int D_00324BA8;
    extern int D_00324BB0;
    extern int D_00324BB4;
    D_00324BA4 = 0;
    D_00324BA8 = 0;
    D_00324BB0 = 0;
    D_00324BB4 = 0;
}

void func_00100400(undefined4 param_1, undefined2 param_2, undefined2 param_3)
{
  int func_00116070(...);
  extern undefined4 D_00324BBC;
  int iVar1;
  
  iVar1 = func_00116070(D_00324BBC,0x54);
  *(undefined4 *)(iVar1 + 0x4c) = param_1;
  *(undefined2 *)(iVar1 + 0x50) = param_2;
  *(undefined2 *)(iVar1 + 0x52) = param_3;
  return;
}

void func_00100730(undefined4 param_1)
{
  int func_00110480(...);
  extern undefined4 D_00324968;
  func_00110480(*(undefined4 *)(D_00324968 + 0xe0),param_1,0);
  return;
}

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

void func_001007D0(unsigned char param_1) {
    extern unsigned char D_001E5EC8;
    extern unsigned char D_00324D44;
    if (D_001E5EC8 != 0) {
        D_00324D44 = param_1;
    }
}

void func_00100990(unsigned char param_1) {
    extern unsigned char D_001E5EC8;
    extern unsigned char D_00324D46;
    if (D_001E5EC8 != 0) {
        D_00324D46 = param_1;
    }
}

void func_001009B0(int a0) {
    extern int D_00324D28;
    D_00324D28 = a0;
}

void func_00100A20(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324BD8;
  if (D_001E5EC8 != '\0') {
    D_00324BD8 = param_1;
  }
  return;
}

void func_00100A40(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324BC8;
  if (D_001E5EC8 != '\0') {
    D_00324BC8 = param_1;
  }
  return;
}

