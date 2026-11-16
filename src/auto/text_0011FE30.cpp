/* 16 functions from 0x0011FE30 to 0x00120E15, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011FE30(int p){extern int D_00329238,D_00329234,D_0032923C;extern float D_001D290C,D_001E7D28;float f;D_00329238=p;if(p>=0)return;f=(float)p;D_0032923C=(f+D_001D290C+D_00329234)/D_001E7D28;}

void func_0011FE60(float p){extern int D_00329238,D_00329234,D_0032923C;extern float D_001D290C,D_001E7D28;float f=(float)D_00329238;D_00329234=*(int*)&p;if(D_00329238<0)f+=D_001D290C;D_0032923C=(f+p)/D_001E7D28;}

void func_0011FEA0(int param_1)
{
  extern undefined4 D_00329338;
  int func_00116A90(...);
  extern undefined4 D_00329334;
  D_00329338 = func_00116A90(param_1 * 0x60,1,1);
  D_00329334 = param_1;
  return;
}

void func_0011FED0(int p,int q){extern int D_00329238,D_00329234,D_00329330;extern float D_001D27B0;extern int D_00329340;int func_0010FC60(int),func_00011CB0(int,int),func_0012FA20(int,int,float,int,float),func_0012F2E0(int,int);if(*(unsigned char*)(p+0x20)&2)func_0010FC60(p);if(*(int*)(p+0xd4)!=D_00329238)func_00011CB0(q,p+((unsigned char)*(char*)(p+0x23)+1)*64);else {int a=(unsigned char)*(char*)(p+0x23);func_0012FA20(q,p+(2-a)*64,D_001D27B0-*(float*)&D_00329234,p+(a+1)*64,*(float*)&D_00329234);}if(D_00329330)func_0012F2E0(q,(int)&D_00329340);}

void func_00120B60(undefined4 param_1, undefined4 param_2)
{
  int func_00120750(...);
  int func_001206B0(...);
  func_00120750(param_1,param_2);
  func_001206B0();
  return;
}

void func_00120B80(undefined4 param_1, undefined4 param_2)
{
  int func_001360A0(...);
  extern undefined4 D_003292E0;
  extern undefined4 D_00329330;
  func_001360A0(param_1,param_2);
  D_003292E0 = 0;
  D_00329330 = 0;
  return;
}

void func_00120BA0(void)
{
  int func_00136360(...);
  extern undefined4 D_00329240;
  extern undefined4 D_00329244;
  extern undefined4 D_00329258;
  extern undefined4 D_00329268;
  extern undefined4 D_0032925C;
  extern undefined4 D_0032926C;
  extern undefined4 D_00329260;
  extern undefined4 D_00329270;
  extern undefined4 D_00329264;
  extern undefined4 D_00329274;
  extern undefined4 D_0032924C;
  extern undefined4 D_00329248;
  extern undefined4 D_00329250;
  extern undefined4 D_00329254;
  func_00136360();
  D_00329240 = 0;
  D_00329244 = 0;
  D_00329258 = 0;
  D_00329268 = 0;
  D_0032925C = 0;
  D_0032926C = 0;
  D_00329260 = 0;
  D_00329270 = 0;
  D_00329264 = 0;
  D_00329274 = 0;
  D_0032924C = 0;
  D_00329248 = 0;
  D_00329250 = 0;
  D_00329254 = 0;
  return;
}

void func_00120DD0(int p){int func_0011B990(int),func_00116FB0(int);int x=*(int*)(p+0x2590);--*(short*)(x+0x2a);func_0011B990(*(volatile int*)(p+0x2590));func_00116FB0(p);}

void func_00120E00(int param_1)
{
  extern undefined4 D_0032B6F4;
  extern undefined4 D_00329390;
  D_0032B6F4 = param_1;
  D_00329390 = *(undefined4 *)(param_1 + 0x2594);
  return;
}

