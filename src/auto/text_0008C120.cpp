/* 9 functions from 0x0008C120 to 0x0008C970, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0008C120(int param_1)
{
  int func_00116FB0(...);
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 2)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + iVar3);
      if (iVar1 != 0) {
        func_00116FB0(iVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < *(short *)(param_1 + 2));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  func_00116FB0(param_1);
  return;
}

void func_0008C290(void) {
 extern int D_002FE070,D_002FE0C0;
 extern int *D_002FE0C4;
 int func_0011B990(...),func_00116FB0(...),func_0008C120(...);
 int i=0, off=0;
 while(i<D_002FE070) {
  int p=*(int *)(D_002FE0C0+off+0x5c);
  --*(short *)(p+0x2a);
  func_0011B990(p);
  ++i; off+=0x60;
 }
 func_00116FB0(D_002FE0C0);
 int *node=D_002FE0C4;
 while(node) {
  func_0008C120(*node);
  int *next=(int *)node[1];
  func_00116FB0(node);
  node=next;
 }
 D_002FE0C4=0;
}

void func_0008C310(void) {
 extern int D_002FE070,D_002FE0C0; int func_00116A90(...);
 int p=func_00116A90(0x2c,1,1);
 *(char *)(p+0x21)=0;*(int *)(p+0x1c)=0;*(short *)(p+2)=0;*(char *)(p+0x22)=0;*(char *)(p+0x23)=0;*(char *)(p+0x25)=0;
 *(int *)(p+8)=0x3f800000;*(int *)(p+0xc)=0;*(int *)(p+0x10)=0;*(int *)(p+0x14)=0x41200000;
 int n=D_002FE070; if(n<=0)return; int *base=(int *)D_002FE0C0; int i=0;
 while(base[i*0x18]!=0){++i;if(i>=n)return;}
 *(int **)(p+0x28)=base+i*0x18+1;
}

#pragma auto_inline(off)
int __fastcall func_0008C600(int a,int d) {
 int *table=(int *)(*(int *)(d+0x1c)+a*0x28);
 short *idx=(short *)table;
 if (*idx < *(short *)d) return 0;
 *idx=0;
 int i=*idx;
 int *entry=(int *)(*(int *)(table+0x18)+i*0x28);
 if (*(char *)entry==1) {
  int q=*(int *)((char *)entry+0x24);
  if(q) { *(int *)(q+0x20)=0; *(int *)(table+0x20)=q; }
 } else {
  (*(short *)(table+2))++;
  *(char *)entry=1; *(int *)((char *)entry+0x20)=0; *(int *)((char *)entry+0x24)=0;
 }
 ++*idx;
 return 0;
}

#pragma auto_inline(off)
char func_0008C660(int param_1, int *param_2, int param_3, int param_4, int param_5, int param_6)
{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = *(int *)(param_1 + 0x1c) + param_4 * 0x28;
  iVar3 = func_0008C600(param_4, param_1);
  iVar2 = *(int *)(iVar1 + 0x1c);
  if (iVar2 == 0 || iVar2 == iVar3) {
    *(int *)(iVar1 + 0x1c) = iVar3;
    *(int *)(iVar3 + 0x24) = 0;
    *(int *)(iVar1 + 0x20) = iVar3;
  }
  else {
    *(int *)(iVar3 + 0x20) = iVar2;
    *(int *)(*(int *)(iVar1 + 0x1c) + 0x24) = iVar3;
    *(int *)(iVar1 + 0x1c) = iVar3;
  }
  if (iVar2 == 0) {
    *(int *)(iVar3 + 8) = param_2[0];
    *(int *)(iVar3 + 0xc) = param_2[1];
    *(int *)(iVar3 + 0x10) = param_2[2];
  }
  else {
    *(int *)(iVar2 + 8) = *(int *)(iVar1 + 8);
    *(int *)(iVar2 + 0xc) = *(int *)(iVar1 + 0xc);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar1 + 0x10);
    *(int *)(iVar3 + 8) = *(int *)(iVar1 + 8);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar1 + 0xc);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar1 + 0x10);
  }
  *(int *)(iVar3 + 0x1c) = param_6;
  *(int *)(iVar3 + 0x14) = param_3;
  *(int *)(iVar3 + 0x18) = param_5;
  *(int *)(iVar3 + 4) = *(int *)(param_1 + 0x18);
  *(int *)(iVar1 + 8) = param_2[0];
  *(int *)(iVar1 + 0xc) = param_2[1];
  *(int *)(iVar1 + 0x10) = param_2[2];
  return 1;
}
void func_0008C710(int param_1, undefined1 param_2, undefined1 param_3, undefined1 param_4, int param_5)
{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) + param_5 * 0x28;
  *(undefined1 *)(iVar1 + 0x14) = param_2;
  *(undefined1 *)(iVar1 + 0x15) = param_3;
  *(undefined1 *)(iVar1 + 0x16) = param_4;
  return;
}
