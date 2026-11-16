/* 16 functions from 0x00064F40 to 0x00065EF8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00065550(void){extern unsigned int D_002F7714,D_002F770C,D_002F7710;extern int D_002F7720,D_002F7730;int func_00064F40(...);int func_00110000(...);unsigned int mode=3;D_002F7714=1;D_002F770C=mode;D_002F7710=0x3f800000;func_00064F40();D_002F770C=mode;D_002F7710=0x3f800000;func_00064F40();D_002F770C=mode;D_002F7710=0x3f800000;func_00064F40();int v=*(int*)(D_002F7720+0x2c);D_002F770C=mode;D_002F7710=0x3f800000;func_00110000(v);func_00110000(D_002F7730);}

void func_00065C60(int p,volatile float f){extern volatile float D_001D27B8,D_001D27B0;unsigned int n=*(unsigned int*)(p+0x4c);int i=0;int off=0;while(i<(int)n){int base=*(int*)(p+0x50);*(volatile float*)(base+off+4)=f;if(f>D_001D27B8)*(volatile float*)(base+off)=D_001D27B0/f;else *(int*)(base+off)=0;i++;off+=0x58;}}

void func_00065CC0(int p,int a,int b,float f){extern float D_001D27B8,D_001D27B0;int off=*(int*)(p+8)*b+a;off*=0x58;int base=*(int*)(p+0x50);*(float*)(base+off+4)=f;if(f>D_001D27B8){volatile float divisor=f;*(float*)(base+off)=D_001D27B0/divisor;}else *(int*)(base+off)=0;}

void func_00065D10(int p,float v,int x){int func_000658A0(...);*(float *)(p+0x14)=v;*(int *)(p+0x18)=x;func_000658A0(p);}

void _func_00065D30(int param_1, float param_2, int param_3)
{
  int _func_000658A0(...);
  *(float *)(param_1 + 0x1c) = (float)(double)param_2;
  *(int *)(param_1 + 0x20) = param_3;
  _func_000658A0(param_1);
}

void func_00065D50(int p,float v,int x){int func_000658A0(...);*(float *)(p+0x24)=v;*(int *)(p+0x28)=x;func_000658A0(p);}

void func_00065D70(int param_1,undefined4 param_2){int func_000658A0(...);*(undefined4*)(param_1+0x10)=param_2;func_000658A0(param_1);}

void _func_00065D90(int param_1, float param_2, int param_3, int param_4)
{
  volatile float *dst = (volatile float *)(param_1 + 0x30);
  *dst = param_2;
  *(int *)(param_1 + 0x34) = param_3;
  *(int *)(param_1 + 0x38) = param_4;
}

void func_00065E70(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x50) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x50));
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x6c));
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x74));
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x7c));
  }
  func_00116FB0(param_1);
  return;
}

