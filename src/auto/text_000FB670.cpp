/* 63 functions from 0x000FB670 to 0x000FC655, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

#pragma optimize("y", off)
unsigned char func_000FB670(unsigned int param_1,int *p){extern unsigned int D_00307DF8,D_00307DB4,D_001E3A48; int func_0009DAC0(...),func_000F8F40(...),func_00110060(...),func_001105E0(...),func_00110000(...),func_00110420(...),func_00110480(...),func_000F8FA0(...);int obj=*p,child=p[2],node=*(int*)(obj+0x2c),r;unsigned char local[64];if(obj==D_00307DF8)D_001E3A48=D_00307DB4;r=func_000F8F40(func_0009DAC0(child));func_00110060(*(int*)(child+0x2c),local);func_001105E0(node,local,0);func_00110000(node);if(*(int*)(node+0x2c))func_00110420(node,**(int**)(node+0x2c));if(r)func_00110480(*(int*)(r+0xe0),node,8);func_000F8FA0(obj);return 1;}
#pragma optimize("", on)
unsigned char func_000FB720(unsigned int param_1, int p) { int func_000F91D0(...); int i=func_000F91D0(**(int**)(p+4)); if(*(char*)(i+0x284)) **(unsigned int**)(p+12)=0x3f800000; else **(unsigned int**)(p+12)=0; return 1; }

unsigned char func_000FB760(unsigned int param_1,int *p) { int func_00124BE0(...); int a=*p,b=*(int*)(a+0x60); if(b)func_00124BE0(b,*(int*)p[3]); return 1; }

unsigned char func_000FB780(unsigned int param_1,int *p){int func_001313C0(...),func_00124BB0(...);int v=func_001313C0(*(int*)p[3]);if(v==0){func_00124BB0(*(int*)(*p+0x60),0);return 1;}func_00124BB0(*(int*)(*p+0x60),1);return 1;}

unsigned char func_000FB8F0(unsigned int a,int *p){extern float D_001D27B8;int func_0008F840(...);int obj=*p;if(*(int*)(obj+0x60)){float x=*(float*)p[3];func_0008F840(*(int*)(obj+0x2c),x!=D_001D27B8);}return 1;}

undefined4 func_000FBA20(void)
{
  int func_0013E3F4(void);
  int func_000ACFB0(...);
  undefined4 uVar1;

  uVar1 = func_0013E3F4();
  switch(uVar1) {
  case 0:
    func_000ACFB0(3,1);
    return 1;
  case 1:
    func_000ACFB0(4,1);
    return 1;
  case 2:
    func_000ACFB0(5,1);
    return 1;
  case 3:
    func_000ACFB0(6,1);
    return 1;
  case 4:
    func_000ACFB0(7,1);
    return 1;
  case 5:
    func_000ACFB0(8,1);
  }
  return 1;
}

void func_000FBC20(int a0, int a1) {
    int func_000FBAB0(...);
    func_000FBAB0(a0, a1, 1);
}

void func_000FBC40(int a0, int a1) {
    int func_000FBAB0(...);
    func_000FBAB0(a0, a1, 0);
}

undefined4 func_000FC0F0(undefined4 param_1, undefined4 *param_2)
{
  int func_00012D60(...);
  func_00012D60(*param_2,0x47);
  return 1;
}

undefined4 func_000FC190(undefined4 param_1, undefined4 *param_2)
{
  int func_00012D60(...);
  func_00012D60(*param_2,0x41);
      return 1;
}

char func_000FC260(void *param_1, int *param_2)
{
  int func_001313C0(int);
  int func_000A8FD0(int);
  func_000A8FD0(func_001313C0(*(int *)*(int **)((char *)param_2 + 4)));
  return 1;
}

undefined1 func_000FC280(void)
{
  extern undefined4 D_00312DDC;
  D_00312DDC = D_00312DDC + 1;
  return 1;
}

undefined1 func_000FC290(void)
{
  extern undefined4 D_00312DDC;
  D_00312DDC = D_00312DDC + -1;
  return 1;
}

extern int D_001D27B8;
unsigned char func_000FC2E0(unsigned int param_1, unsigned int *param_2) { int func_000459A0(...); func_000459A0(*param_2,1); return 1; }

unsigned char func_000FC300(unsigned int param_1, unsigned int *param_2)
{
  int func_000459A0(...);
  func_000459A0(*param_2, 0);
  return 1;
}

char func_000FC430(void) {
    int func_00099E50(...);
    func_00099E50();
    return 1;
}

unsigned char func_000FC640(unsigned int a, unsigned int *p)
{
    int func_00101680(int);
    func_00101680(*(unsigned int *)(*(unsigned int *)p + 4));
    return 1;
}

