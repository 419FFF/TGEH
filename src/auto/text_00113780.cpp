/* 18 functions from 0x00113780 to 0x001144AC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00113780(int *out,int *in) { int func_0013E9DB(...),func_00117100(...),func_00116A90(...),func_00117130(...); int x=func_0013E9DB(*in); func_00117100(); out[1]=func_00116A90(x*0x110,1,1); func_00117130(); out[0]=0; }

int func_001137C0(int *p) { int x=++p[0]; return x*0x110 + p[1] - 0x110; }

void func_001137E0(int param_1, undefined4 *param_2)
{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)*param_2;
  pcVar3 = (char *)(param_1 + 0x20);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return;
}

float func_0013E9E0(...);
void func_00113800(float *out,int *in) { int i=0; float *dst=(float*)((char*)out+0x40); for(int outer=0;outer<4;outer++){int inner=4; do { *dst++=func_0013E9E0(in[i++]); inner--; }while(inner); } }

void func_00113980(undefined4 param_1, char *param_2)
{
  int func_00116FB0(...);
  if (*param_2 == '\0') {
    func_00116FB0(*(undefined4 *)(param_2 + 8));
  }
  func_00116FB0(param_2);
  return;
}

int func_001139B0(undefined4 param_1)
{
  int func_00117100(...);
  int func_00116A90(...);
  int func_00117130(...);
  int iVar1;
  
  func_00117100();
  iVar1 = func_00116A90(0x1c,1,1);
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  func_00117130();
  return iVar1;
}

void func_00113B10(int param_1)
{
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}

void func_00113CA0(int param_1)
{
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}

int func_00113CB0(int a0) {
    return a0;
}
