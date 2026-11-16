/* 10 functions from 0x000E5460 to 0x000E6192, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000E5960(undefined4 param_1, undefined4 param_2)
{
  extern undefined4 D_003234CC;
  extern undefined4 D_003234D0;
  extern undefined4 D_003234C8;
  int func_0013E469(...);
  extern undefined D_001DC158;
  int func_0009CBE0(...);
  int func_00110330(...);
  extern undefined D_003234D4;
  int iVar1;
  undefined1 local_40 [64];
  
  D_003234CC = param_2;
  D_003234D0 = param_1;
  D_003234C8 = 0x44160000;
  func_0013E469(local_40,((undefined *)&D_001DC158),param_1);
  iVar1 = func_0009CBE0(local_40);
  func_00110330(*(undefined4 *)(iVar1 + 0x2c),1);
  D_003234D4 = 1;
  return;
}

void func_000E5DA0(void) { extern char D_001D7BE0; extern int D_003227F0,D_00322820; int func_0009CBE0(...); int func_00116FB0(...); int x=func_0009CBE0(&D_001D7BE0); func_00116FB0(*(int*)(x+0x110)); D_003227F0=0; D_00322820=0; }

void func_000E5DD0(void *a, int *b) { extern char D_001DC18C; int func_0013E469(...); int func_0009C6A0(...); int func_0009D9E0(...); int func_00110330(...); char buf[104]; int i=0; char *p=(char*)b+0x4c; do { func_0013E469(buf,&D_001DC18C,i); int x=func_0009C6A0(a,buf); if(x){func_0009D9E0(x);func_00110330(*(int*)(x+0x2c),0);*(int*)(p-8)=x;*p=0;*(int*)(p-4)=i/10;p+=16;} ++i; }while(i!=0x50); }

