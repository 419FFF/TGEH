/* 25 functions from 0x00067B40 to 0x00068AB3, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00067D50(void)
{
  extern undefined4 D_002F77B0;
  int func_00116FB0(...);
  extern undefined4 D_002F77B4;
  extern undefined4 D_002F77B8;
  if (D_002F77B0 != 0) {
    func_00116FB0(D_002F77B0);
  }
  D_002F77B0 = 0;
  D_002F77B4 = 0;
  D_002F77B8 = 0;
  return;
}

undefined4 func_00068090(int param_1, int param_2)
{
  if ((*(int *)(param_1 + 0x14 + param_2 * 4) != 0) && (*(int *)(param_1 + 0x38 + param_2 * 4) != 3)
     ) {
    return 0;
  }
  return 1;
}

void func_000687F0(void) {
    extern char D_002F7F00;
    D_002F7F00 = 0;
}

void func_000688B0(undefined1 param_1)
{
  extern undefined D_001E5ECA;
  extern undefined D_002F7EF9;
  int func_00068740(...);
  if (D_001E5ECA != '\0') {
    D_002F7EF9 = param_1;
    func_00068740();
    return;
  }
  return;
}

void func_000688D0(void) {
}

undefined4 func_000688E0(int param_1)
{
  undefined *new_var2;
  extern int D_002F82F0;
  extern undefined D_002F7F08;
  int iVar1;
  undefined *new_var;
  new_var2 = &D_002F7F08;
  new_var = new_var2;
  iVar1 = 0;
  if (0 < D_002F82F0)
  {
    do
    {
      if (((*((int **) (((undefined *) new_var) + (iVar1 * 4)))) != ((int *) 0x0)) && ((*(*((int **) (((undefined *) new_var2) + (iVar1 * 4))))) == param_1))
      {
        return *((undefined4 *) (((undefined *) new_var2) + (iVar1 * 4)));
      }
      iVar1 = iVar1 + 1;
    }
    while (iVar1 < D_002F82F0);
  }
  return 0;
}

