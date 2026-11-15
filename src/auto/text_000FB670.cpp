/* 63 functions from 0x000FB670 to 0x000FC655, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_000FB670(undefined4 param_1, int *param_2)
{
  extern undefined4 D_00307DF8;
  extern undefined4 D_00307DB4;
  extern undefined4 D_001E3A48;
  int func_0009DAC0(...);
  int func_000F8F40(...);
  int func_00110060(...);
  int func_001105E0(...);
  int func_00110000(...);
  int func_00110420(...);
  int func_00110480(...);
  int func_000F8FA0(...);
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_50 [76];
  
  uVar1 = *(undefined4 *)(param_2[2] + 0x2c);
  iVar2 = *(int *)(*param_2 + 0x2c);
  if (*param_2 == D_00307DF8) {
    D_001E3A48 = D_00307DB4;
  }
  uVar3 = func_0009DAC0(param_2[2]);
  iVar4 = func_000F8F40(uVar3);
  func_00110060(uVar1,local_50);
  func_001105E0(iVar2,local_50,0);
  func_00110000(iVar2);
  if (*(undefined4 **)(iVar2 + 0x2c) != (undefined4 *)0x0) {
    func_00110420(iVar2,**(undefined4 **)(iVar2 + 0x2c));
  }
  if (iVar4 != 0) {
    func_00110480(*(undefined4 *)(iVar4 + 0xe0),iVar2,8);
  }
  func_000F8FA0(*param_2);
  return 1;
}

undefined4 func_000FB720(undefined4 param_1, int param_2)
{
  int func_000F91D0(...);
  int iVar1;
  
  iVar1 = func_000F91D0(**(undefined4 **)(param_2 + 4));
  if (*(char *)(iVar1 + 0x284) != '\0') {
    **(undefined4 **)(param_2 + 0xc) = 0x3f800000;
    return 1;
  }
  **(undefined4 **)(param_2 + 0xc) = 0;
  return 1;
}

undefined4 func_000FB760(undefined4 param_1, int *param_2)
{
  int func_00124BE0(...);
  if (*(int *)(*param_2 + 0x60) != 0) {
    func_00124BE0(*(int *)(*param_2 + 0x60),*(undefined4 *)param_2[3]);
  }
  return 1;
}

undefined4 func_000FBA20(void)
{
  int func_0013E3F4(void);
  int func_000ACFB0(...);
  undefined4 uVar1;

  uVar1 = func_0013E3F4();
  switch(uVar1) {
  case 0:
    func_000ACFB0(3,1);
    return 1;
  case 1:
    func_000ACFB0(4,1);
    return 1;
  case 2:
    func_000ACFB0(5,1);
    return 1;
  case 3:
    func_000ACFB0(6,1);
    return 1;
  case 4:
    func_000ACFB0(7,1);
    return 1;
  case 5:
    func_000ACFB0(8,1);
  }
  return 1;
}

void func_000FBC20(int a0, int a1) {
    int func_000FBAB0(...);
    func_000FBAB0(a0, a1, 1);
}

void func_000FBC40(int a0, int a1) {
    int func_000FBAB0(...);
    func_000FBAB0(a0, a1, 0);
}

undefined4 func_000FC0F0(undefined4 param_1, undefined4 *param_2)
{
  int func_00012D60(...);
  func_00012D60(*param_2,0x47);
  return 1;
}

undefined4 func_000FC190(undefined4 param_1, undefined4 *param_2)
{
  int func_00012D60(...);
  func_00012D60(*param_2,0x41);
      return 1;
}

char func_000FC260(void *param_1, int *param_2)
{
  int func_001313C0(int);
  int func_000A8FD0(int);
  func_000A8FD0(func_001313C0(*(int *)*(int **)((char *)param_2 + 4)));
  return 1;
}

undefined1 func_000FC280(void)
{
  extern undefined4 D_00312DDC;
  D_00312DDC = D_00312DDC + 1;
  return 1;
}

undefined1 func_000FC290(void)
{
  extern undefined4 D_00312DDC;
  D_00312DDC = D_00312DDC + -1;
  return 1;
}

extern int D_001D27B8;
unsigned char func_000FC2E0(unsigned int param_1, unsigned int *param_2) { int func_000459A0(...); func_000459A0(*param_2,1); return 1; }

unsigned char func_000FC300(unsigned int param_1, unsigned int *param_2)
{
  int func_000459A0(...);
  func_000459A0(*param_2, 0);
  return 1;
}

char func_000FC430(void) {
    int func_00099E50(...);
    func_00099E50();
    return 1;
}

unsigned char func_000FC640(unsigned int a, unsigned int *p)
{
    int func_00101680(int);
    func_00101680(*(unsigned int *)(*(unsigned int *)p + 4));
    return 1;
}

