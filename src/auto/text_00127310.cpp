/* 19 functions from 0x00127310 to 0x001280BC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

int _func_00116FB0(...);
int _func_0013AB30(...);
int _func_0013ADF0(...);
int _func_0011B4F0(...);
int _func_00116070(...);
int _func_00116A90(...);
extern int _D_00331AD0;

int _func_00127A10(unsigned int n,void *src){int b=_func_00116070(_D_00331AD0,0x54);*(unsigned int*)(b+0x4c)=n;void *d=(void*)_func_00116A90(n,1,1);*(void**)(b+0x50)=d;memcpy(d,src,n);return b;}

int _func_00127A60(int p){return _func_00116FB0(*(int*)(p+0x50));}

void func_00127C30(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x30) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x30));
  }
  func_00116FB0(param_1);
  return;
}

void func_001280B0(int a0, int a1) {
    int func_00133BB0(...);
    func_00133BB0(a1);
}
