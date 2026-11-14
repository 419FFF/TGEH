/* 21 functions from 0x0011BF40 to 0x0011CF22, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011C340(void)
{
  extern undefined4 D_003278AC;
  extern undefined4 D_003268DC;
  extern undefined4 D_003268E0;
  extern undefined4 D_003268E8;
  extern undefined4 D_003278A8;
  int func_0013AF00(...);
  extern undefined4 D_003278A4;
  int func_0013B250(...);
  extern undefined4 D_003278A0;
  extern undefined4 D_003268D8;
  int func_0013AFB0(...);
  int func_0011C1D0(...);
  if (D_003278AC == 0) {
    D_003268DC = 0;
    D_003268E0 = 0;
    D_003268E8 = 0;
    D_003278A8 = func_0013AF00();
    D_003278A4 = func_0013B250();
    D_003278A0 = func_0013B250();
    D_003268D8 = func_0013AFB0(&func_0011C1D0,0,0x2000);
  }
  D_003278AC = D_003278AC + 1;
  return;
}

void func_0011C3B0(int *param_1, int *param_2, int param_3)
{
  *param_2 = *param_1;
  param_2[1] = (int)param_1;
  param_2[2] = param_3;
  if (*param_1 != 0) {
    *(int **)(*param_1 + 4) = param_2;
  }
  *param_1 = (int)param_2;
  return;
}

void func_0011C3E0(int *param_1)
{
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

undefined4 func_0011CCD0(int param_1)
{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if ((*(byte *)((int)puVar1 + 6) & 0x10) == 0) break;
    puVar1 = (undefined4 *)puVar1[3];
  }
  return *puVar1;
}

void func_0011CDF0(int param_1)
{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_1 + 0x54);
  iVar2 = 4;
  do {
    *(undefined4 *)(puVar1 + -0x20) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x30;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
