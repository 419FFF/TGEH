/* 8 functions from 0x0009B5C0 to 0x0009C582, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern unsigned char D_00308150,D_00308151,D_00308152; extern void func_0006FD40(void); void func_0009B5C0(void){ D_00308150=0; D_00308151=0; D_00308152=0; func_0006FD40(); }

void func_0009C1F0(int param_1, undefined4 param_2)
{
  extern undefined4 D_003268B0;
  int func_0011AF70(...);
  undefined4 *puVar1;
  
  if (*(byte *)(param_1 + 0x22) == D_003268B0) {
    func_0011AF70(param_1,param_2);
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x28); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((*(byte *)((int)puVar1 + 6) & 8) == 0) {
      func_0009C1F0(*puVar1,param_2);
    }
  }
  return;
}

void func_0009C240(int p)
{
 int func_00116FB0(...); int func_001160B0(...); int func_00116160(...); int func_000A1CB0(...);
 unsigned int i;
 if(*(int *)(p+0x28)) func_00116FB0(*(int *)(p+0x28));
 if(*(int *)(p+0x5c)) {
  i=0;
  if(*(unsigned char *)(p+0x57)>0) do {
   func_001160B0(*(int *)(*(int *)(p+0x5c)+i*4)); ++i;
  } while(i<*(unsigned char *)(p+0x57));
  func_00116FB0(*(int *)(p+0x5c));
 }
 if(*(int *)(p+0x58)) {
  i=0;
  if(*(unsigned char *)(p+0x56)>0) do {
   func_00116160(*(int *)(*(int *)(p+0x58)+i*4)); ++i;
  } while(i<*(unsigned char *)(p+0x56));
  func_00116FB0(*(int *)(p+0x58));
 }
 if((*(unsigned char *)(p+0x11)&0x40)==0) func_000A1CB0(p+0x64);
 *(short *)(*(int *)(p+0x18)+0x2a) -= 1;
}

void func_0013F2E9(int, int);
void func_0013F2E9(int,int);
void func_0009C2E0(int **a,int **b)
{
 int first=(*(int *)(*(int *)a+0xc));
 int second=(*(int *)(*(int *)b+0xc));
 func_0013F2E9(first,second);
}

