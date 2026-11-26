/* 30 functions from 0x000AE080 to 0x000AEF9E, found by Ghidra. */
#include "common.h"
struct E_000AED30 { int a[1]; unsigned short b; unsigned short t; int c[4]; };
#include "ghidra.h"

int func_0011B4F0(...);
int func_0013E9DB(...);

void func_000AE080(int param_1, undefined4 *param_2)
{
  int func_0011B4F0(...);
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(short *)(param_1 + 4) != 0) {
    iVar2 = 0;
    while( true ) {
      iVar1 = func_0011B4F0(*(undefined4 *)(*(int *)(param_1 + 8) + iVar2),*param_2);
      if (iVar1 == 0) break;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x18;
      if (*(ushort *)(param_1 + 4) <= uVar3) {
        return;
      }
    }
    *(undefined2 *)(*(int *)(param_1 + 8) + 4 + uVar3 * 0x18) = 3;
  }
  return;
}

void func_000AE0F0(int param_1)
{
  int func_00116A90(...);
  int func_00116FB0(...);
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = param_1;
  uVar4 = func_00116A90(*(int *)(param_1 + 0x2c) << 2,1,1);
  uVar6 = 0;
  psVar1 = (short *)(param_1 + 6);
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  param_1 = 0;
  if (*psVar1 != 0) {
    do {
      iVar2 = *(int *)(iVar3 + 0x28) + uVar6 * 8;
      uVar7 = 0;
      if (*(short *)(iVar2 + 2) != 0) {
        iVar5 = param_1 << 2;
        do {
          *(undefined4 *)(iVar5 + *(int *)(iVar3 + 0x30)) =
               *(undefined4 *)(*(int *)(iVar2 + 4) + uVar7 * 4);
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 4;
        } while (uVar7 < *(ushort *)(iVar2 + 2));
      }
      func_00116FB0(*(undefined4 *)(iVar2 + 4));
      iVar5 = param_1 * 4;
      param_1 = param_1 + uVar7;
      *(int *)(iVar2 + 4) = *(int *)(iVar3 + 0x30) + iVar5;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(iVar3 + 6));
  }
  return;
}

void _func_000AE1B0(int param_1, int *param_2)
{
  int func_0013E9DB(...);
  int func_0011B4F0(...);
  extern char D_001D8750, D_001D8748, D_001D8734, D_001D8720, D_001D6B04, D_001D87A0, D_001D3A28, D_001D8798, D_001D8794;
  char *s = (char *)param_2[1];
  char *e = s + 1;
  char c;
  int len;
  int idx;
  int *pl = &len;

  do {
    c = *s;
    s++;
  } while (c != 0);
  len = s - e;
  if (len != 0) {
    idx = func_0013E9DB(*param_2) - 1;
    if (*(unsigned short *)(param_1 + 4) <= idx) {
      *(short *)(param_1 + 4) = idx + 1;
    }
    if (func_0011B4F0(param_2[1], &D_001D8750) == 0) {
      *(int *)(param_1 + 8 + idx * 4) = 0;
      return;
    }
    if (func_0011B4F0(param_2[1], &D_001D8748) == 0) {
      *(int *)(param_1 + 8 + idx * 4) = 1;
      return;
    }
    if (func_0011B4F0(param_2[1], &D_001D8734) == 0) {
      *(int *)(param_1 + 8 + idx * 4) = 2;
      return;
    }
    if (func_0011B4F0(param_2[1], &D_001D8720) == 0) {
      *(int *)(param_1 + 8 + idx * 4) = 3;
      return;
    }
    if (func_0011B4F0(param_2[1], &D_001D6B04) == 0) {
      *(int *)(param_1 + 8 + idx * 4) = 4;
      return;
    }
    if (func_0011B4F0(param_2[1], &D_001D87A0) == 0) {
      *(int *)(param_1 + 8 + idx * 4) = 5;
      return;
    }
    if (func_0011B4F0(param_2[1], &D_001D3A28) == 0) {
      *(int *)(param_1 + 8 + idx * 4) = 6;
      return;
    }
    if (func_0011B4F0(param_2[1], &D_001D8798) == 0) {
      *(int *)(param_1 + 8 + idx * 4) = 8;
      return;
    }
    if (func_0011B4F0(param_2[1], &D_001D8794) == 0) {
      *(int *)(param_1 + 8 + idx * 4) = 9;
    }
  }
}

void func_000AE390(char *param_1)
{
    for (; (*param_1 == ' ' || *param_1 == '\t'); ++param_1) {}
    return;
}

int func_000AE8D0(int param_1)
{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  return iVar1 * 0x34 + -0x34 + *(int *)(param_1 + 0x18);
}

void func_000AE8F0(int param_1, undefined4 *param_2)
{
  int func_001053E0(...);
  extern undefined4 D_00307D18;
  undefined4 uVar1;
  
  uVar1 = func_001053E0(D_00307D18,*param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}

void func_000AE930(int param_1, undefined4 *param_2)
{
  int func_001076A0(...);
  undefined4 uVar1;
  
  uVar1 = func_001076A0(*param_2,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

int func_000AE9B0(int param_1)
{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_1 + 0x1c) = iVar1;
  return iVar1 * 0x10 + -0x10 + *(int *)(param_1 + 0x20);
}

void func_000AE9D0(undefined4 *param_1, undefined4 *param_2)
{
  int func_001053E0(...);
  extern undefined4 D_00307D18;
  undefined4 uVar1;
  
  uVar1 = func_001053E0(D_00307D18,*param_2);
  *param_1 = uVar1;
  return;
}

void _func_000AE9F0(int p) { *(unsigned char *)(p+0xc)=1; }

void func_000AEAE0(int param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  undefined4 uVar1;
  
  uVar1 = func_0013E9DB(*param_2);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}

void _func_000AED30(int param_1, int *param_2)
{
    extern int D_003104B0;
    int func_0011BDD0(...), func_00117100(...), func_00117130(...), func_001053E0(...), func_0011B4F0(...), func_0013E9DB(...);
    float func_0013E9E0(...);
    int *piVar1;
    int *puVar2;
    unsigned short uVar3;
    int iVar4;
    unsigned int uVar7;
    unsigned char *tab;

    piVar1 = (int *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 0x14);
    uVar3 = *(unsigned short *)((int)piVar1 + 0xe);
    puVar2 = (int *)(piVar1[4] + (unsigned int)uVar3 * 0x18);
    *(unsigned short *)((int)piVar1 + 0xe) = uVar3 + 1;
    iVar4 = func_0011BDD0(*piVar1, 1);
    if (*(short *)(iVar4 + 4) != 0) {
        func_00117100();
        *puVar2 = func_001053E0(D_003104B0, *param_2);
        func_00117130();
        uVar7 = 0;
        if (uVar7 < *(unsigned short *)(iVar4 + 4)) {
            param_1 = 0;
            do {
                if (func_0011B4F0(*param_2, *(int *)(*(int *)(iVar4 + 8) + param_1)) == 0) break;
                uVar7++;
                param_1 = param_1 + 0x18;
            } while (uVar7 < *(unsigned short *)(iVar4 + 4));
        }
        tab = *(unsigned char **)(iVar4 + 8);
        *(unsigned short *)((int)puVar2 + 6) = *(unsigned short *)(tab + uVar7 * 0x18 + 6);
        switch (*(unsigned short *)(*(unsigned char **)(iVar4 + 8) + uVar7 * 0x18 + 6)) {
        case 0:
            *(float *)(puVar2 + 2) = func_0013E9E0(param_2[1]);
            break;
        case 1:
            func_00117100();
            puVar2[2] = func_001053E0(D_003104B0, param_2[1]);
            func_00117130();
            break;
        case 2:
            *(float *)(puVar2 + 2) = func_0013E9E0(param_2[1]);
            *(float *)(puVar2 + 3) = func_0013E9E0(param_2[2]);
            *(float *)(puVar2 + 4) = func_0013E9E0(param_2[3]);
            if (param_2[4] != 0) {
                *(float *)(puVar2 + 5) = func_0013E9E0(param_2[4]);
            } else {
                puVar2[5] = 0;
            }
            break;
        case 3:
            puVar2[2] = func_0013E9DB(param_2[1]);
            puVar2[3] = func_0013E9DB(param_2[2]);
            *(float *)(puVar2 + 4) = func_0013E9E0(param_2[3]);
            break;
        }
        *(short *)(*piVar1 + 0x2a) = *(short *)(*piVar1 + 0x2a) - 1;
    }
}

