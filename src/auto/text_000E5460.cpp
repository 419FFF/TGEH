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

void func_000E5DA0(void) { extern char D_001D7BE0; extern int D_003227F0,D_00322820; int func_0009CBE0(...); int func_00116FB0(...); int x=func_0009CBE0(&D_001D7BE0); x+=0x110; func_00116FB0(*(int*)x); D_003227F0=0; D_00322820=0; }

void func_000E5DD0(void *a, int *b) { extern char D_001DC18C; int func_0013E469(...); int func_0009C6A0(...); int func_0009D9E0(...); int func_00110330(...); char buf[104]; int i=0; char *p=(char*)b+0x4c; do { func_0013E469(buf,&D_001DC18C,i); int x=func_0009C6A0(a,buf); if(x){func_0009D9E0(x);func_00110330(*(int*)(x+0x2c),0);*(int*)(p-8)=x;*p=0;*(int*)(p-4)=i/10;p+=16;} ++i; }while(i!=0x50); }

void func_000E5E60(void *a, char *b) { extern int D_001E57F0,D_001E583C; extern char D_001DC194; int func_0009CBE0(...); int func_0013E600(...); int *p=&D_001E57F0; char *q=b+0x350; do { int x=func_0009CBE0(*p); *(int*)(q-0x60)=x; int y=func_0013E600(*p,&D_001DC194); *q=(y!=0); ++p;q+=0x74;}while((int)p<(int)&D_001E583C); }

void func_000E60A0(undefined4 param_1, int param_2)
{
  int func_000F91D0(...);
  extern undefined D_001DC1C4;
  int func_00012040(...);
  extern undefined4 D_00307DF8;
  int func_00110060(...);
  int func_000E3690(...);
  int func_001100A0(...);
  int func_0012F7A0(...);
  extern undefined4 D_003227FC;
  extern undefined4 D_00322800;
  int func_0005CCC0(...);
  int func_00110420(...);
  extern undefined4 D_00313B60;
  int func_00110480(...);
  int iVar1;
  undefined4 local_14;
  undefined4 local_10[4];
  iVar1 = func_000F91D0(((undefined *)&D_001DC1C4));
  func_00012040(D_00307DF8,*(undefined4 *)(iVar1 + 0xe0));
  func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),param_2 + 0xd10);
  func_000E3690(param_2,param_2 + 0x2e0,0);
  func_001100A0(*(undefined4 *)(D_00307DF8 + 0x2c),&local_14);
  local_10[0] = *(undefined4 *)(D_00307DF8 + 0xe8);
  local_10[1] = *(undefined4 *)(D_00307DF8 + 0xec);
  local_10[2] = *(undefined4 *)(D_00307DF8 + 0xf0);
  func_0012F7A0(local_10,local_14);
  D_003227FC = local_10[0];
  D_00322800 = local_10[1];
  func_0005CCC0(5);
  *(undefined4 *)(param_2 + 0xe30) = 0xc591a000;
  *(undefined4 *)(param_2 + 0xe38) = 0xc1db3333;
  func_00110420(D_00313B60,**(undefined4 **)(D_00313B60 + 0x2c));
  func_00110480(**(undefined4 **)(*(int *)(D_00307DF8 + 0x2c) + 0x2c),D_00313B60,8);
}

