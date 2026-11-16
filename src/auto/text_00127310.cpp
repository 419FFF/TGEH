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

void _func_00127A60(int *p){_func_00116FB0(p[20]);}

unsigned int func_00127A80(int param1, int param2)
{
  int func_001165C0(...), func_00131460(...);
  unsigned int index = (unsigned int)func_00131460((float)func_001165C0(param1));
  unsigned int count = *(unsigned int *)(param1 + 0x4c);
  if (index >= count) index = count - 1;
  *(unsigned short *)(param2 + 0xfc) = *(unsigned char *)(*(int *)(param1 + 0x50) + index);
  return 1;
}

void func_00127AC0(void)
{
  extern int D_00331AD4, D_00331AD0;
  int func_00127A80(...), func_00127A60(...), func_00115D60(...);
  if (D_00331AD4 == 0) {
    int local[6];
    local[1] = 0; local[3] = 0; local[4] = 0;
    local[2] = (int)func_00127A80;
    local[3] = 0x127a70;
    local[5] = (int)func_00127A60;
    D_00331AD0 = func_00115D60(local);
  }
  ++D_00331AD4;
}

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
