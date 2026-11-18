/* 11 functions from 0x000461D0 to 0x000471B0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern float D_001D27B8;
extern float D_001D2B64;
int func_00106AC0(...);
int func_00026F50(...);
int func_00026EA0(...);
int func_0013E3F4(float);
void func_00058B80(int, float, void *);
void func_00059630(int, float, void *);
int func_00106830(...);

undefined4 func_00046300(char *param_1, undefined4 *param_2)
{
  int iVar1;
  int pos[2];

  if (*param_1 == '\0') {
    return 3;
  }
  func_00106AC0(param_1 + 4,param_2,pos);
  if (pos[0] >= 0) {
    iVar1 = *(int *)(param_1 + 0xc) - 1;
    if (pos[0] <= iVar1 && pos[1] >= 0 && pos[1] <= iVar1) {
      iVar1 = func_00026F50(*(undefined4 *)(param_1 + 0x28),
                             pos[0] + *(int *)(param_1 + 0xc) * pos[1],param_1 + 0x118,300);
      if (iVar1 == 0) {
        return 2;
      }
      *(int *)(param_1 + 0x5c8) = func_00026EA0(*(undefined4 *)(param_1 + 0x28),param_1 + 0x118,iVar1);
      *(undefined4 *)(param_1 + 0x5d4) = *param_2;
      *(undefined4 *)(param_1 + 0x5d8) = param_2[1];
      *(undefined4 *)(param_1 + 0x5dc) = param_2[2];
      return 0;
    }
  }
  return 1;
}

void func_00046F90(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, float param_5, undefined4 *param_6)
{
  *(undefined4 *)(param_1 + 0x5f4) = param_4;
  *(undefined4 *)(param_1 + 0x5f0) = param_3;
  *(undefined4 *)(param_1 + 0x5ec) = param_2;
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0xbf800000;
  if (param_5 == D_001D27B8) {
    *(undefined4 *)(param_1 + 0x5f8) = 0x3f000000;
  }
  else {
    *(float *)(param_1 + 0x5f8) = param_5;
  }
  *(undefined4 *)(param_1 + 0x5fc) = 0;
  *(undefined4 *)(param_1 + 0x604) = 0;
  if (param_6 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x5e0) = *param_6;
    *(undefined4 *)(param_1 + 0x5e4) = param_6[1];
    *(undefined1 *)(param_1 + 0x5e8) = 1;
    *(undefined1 *)(param_1 + 0x5e9) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x5e4) = 0;
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  *(undefined1 *)(param_1 + 0x5e8) = 0;
  *(undefined1 *)(param_1 + 0x5e9) = 0;
}

void func_00047040(int param_1)
{
  *(undefined4 *)(param_1 + 0x604) = 2;
  return;
}
