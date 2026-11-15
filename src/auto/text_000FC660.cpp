/* 47 functions from 0x000FC660 to 0x000FD5F2, found by Ghidra. */
#include "common.h"

extern undefined4 D_001D27B8;
extern undefined4 D_001D290C;

char func_000FC660(void *arg0, void *arg1) {
    int func_0013E3F4(float);
    int func_00101690(int);
    
    float f = *(float *)(arg1 + 4);
    func_0013E3F4(f);
    push(func_0013E3F4());
    func_00101690((int)func_0013E3F4());
    return 1;
}


unsigned char func_000FC710(unsigned int a, unsigned int *p)
{
    int func_000AA6E0(...);
    func_000AA6E0(*(unsigned int *)(*(unsigned int *)p + 4));
    return 1;
}

char func_000FC730(void) {
    return 1;
}

undefined4 func_000FC820(undefined4 param_1, int *param_2)
{
  *(int *)(*param_2 + 0x130) = param_2[3] + 4;
  int func_00012D60(...);
  func_00012D60(*param_2,0x1e);
  return 1;
}

char func_000FC880(void) {
    int func_000493C0(...);
    func_000493C0();
    return 1;
}

char func_000FCED0(void *param_1, int *param_2)
{
  int func_000F91D0(int);
  int func_000F8870(int);
  func_000F8870(func_000F91D0(*(int *)*(int **)((char *)param_2 + 4)));
  return 1;
}

char func_000FCEF0(void *param_1, int *param_2)
{
  int func_000F91D0(int);
  int func_000F86E0(int);
  func_000F86E0(func_000F91D0(*(int *)*(int **)((char *)param_2 + 4)));
  return 1;
}

char func_000FCF30(void) {
    int func_000F8B60(...);
    func_000F8B60(1, 0);
    return 1;
}

char func_000FD160(void) {
    int func_0007CF70(...);
    func_0007CF70();
    return 1;
}

unsigned char _func_000FD2B0(int param_1)
{
  *(unsigned int *)(param_1 + 0x18) = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x10) + 6);
  return 1;
}

char func_000FD500(void) {
    int func_0005F310(...);
    func_0005F310(0);
    return 1;
}

