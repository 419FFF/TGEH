/* 9 functions from 0x00057760 to 0x00058603, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern void func_0007E470(void*);
void func_00057760(void *p) {
    int *data=*(int **)((char*)p+0x110);
    if (*(int*)((char*)p+0x60)==0) func_0007E470(p);
    switch(data[0]) {
    case 0: data[0]=1; break;
    case 1: data[0]=2; break;
    case 2: data[0]=3; break;
    case 3: data[0]=4; break;
    case 4: data[0]=5; break;
    case 5: data[0]=6; break;
    case 6: data[0]=7; break;
    case 7: data[0]=8; break;
    case 8: data[0]=9; break;
    case 9: data[0]=10; break;
    case 10: data[0]=11; break;
    case 11: data[0]=0; break;
    default: break;
    }
}

void func_00057E80(int param_1)
{
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000A1C00(*(undefined4 *)(iVar1 + 0x18));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x14));
  func_00116FB0(iVar1);
  return;
}

void func_00058040(int p) {
 extern int D_00307D10; int func_000487A0(...); int func_00116FB0(...);
 int q=*(int*)(p+0x110); func_000487A0(D_00307D10,*(int*)(q+0x68)); func_00116FB0(q); *(int*)(p+0x110)=0;
}

