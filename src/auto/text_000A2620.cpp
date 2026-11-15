/* 48 functions from 0x000A2620 to 0x000A34DC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A2770(void) {
    int func_000688D0(...);
    func_000688D0();
}

void func_000A2780(int a0, char a1, int a2) {
    extern int D_003127C0;
    extern char D_003127A4;
    extern int D_003127A8;
    D_003127C0 = a0;
    D_003127A4 = a1;
    D_003127A8 = a2;
}

void func_000A27A0(int a0, char a1, int a2, int a3) {
    extern int D_00311DF0;
    extern char D_00311DD8;
    extern int D_00311DD0;
    extern int D_00311DD4;
    D_00311DF0 = a0;
    D_00311DD8 = a1;
    D_00311DD0 = a2;
    D_00311DD4 = a3;
}

int func_000A27D0(void) {
    extern int D_00312610;
    return D_00312610;
}

void func_000A2840(void) {
    extern int D_00311678;
    int func_00102E80(...);
    func_00102E80(D_00311678);
}

void func_000A2850(int param_1)
{
  extern undefined4 D_00312480;
  extern undefined4 D_00312488;
  if (param_1 == 0) {
    if (D_00312480 != 0) {
      D_00312480 = 3;
      return;
    }
  }
  else {
    if (D_00312480 != 1) {
      D_00312480 = 2;
      return;
    }
    D_00312488 = 0x41200000;
  }
  return;
}

void func_000A2890(int param_1)
{
  extern undefined4 D_00311A30;
  extern undefined4 D_00311A38;
  if (param_1 == 0) {
    if (D_00311A30 != 0) {
      D_00311A30 = 3;
      return;
    }
  }
  else {
    if (D_00311A30 != 1) {
      D_00311A30 = 2;
      return;
    }
    D_00311A38 = 0x41200000;
  }
  return;
}

void func_000A28D0(int param_1)
{
  extern undefined4 D_00312694;
  extern undefined4 D_0031269C;
  if (param_1 == 0) {
    if (D_00312694 != 0) {
      D_00312694 = 3;
      return;
    }
  }
  else {
    if (D_00312694 != 1) {
      D_00312694 = 2;
      return;
    }
    D_0031269C = 0x40a00000;
  }
  return;
}

void func_000A2910(int param_1)
{
  extern undefined4 D_00311DB4;
  extern undefined4 D_00311DBC;
  if (param_1 == 0) {
    if (D_00311DB4 != 0) {
      D_00311DB4 = 3;
      return;
    }
  }
  else {
    if (D_00311DB4 != 1) {
      D_00311DB4 = 2;
      return;
    }
    D_00311DBC = 0x41200000;
  }
  return;
}

void func_000A2950(int param_1)
{
  extern undefined4 D_00311EE4;
  extern undefined4 D_00311EEC;
  if (param_1 == 0) {
    if (D_00311EE4 != 0) {
      D_00311EE4 = 3;
      return;
    }
  }
  else {
    if (D_00311EE4 != 1) {
      D_00311EE4 = 2;
      return;
    }
    D_00311EEC = 0x41200000;
  }
  return;
}

void func_000A2990(int param_1)
{
  extern undefined4 D_00312734;
  if (param_1 == 0) {
    if (D_00312734 != 0) {
      D_00312734 = 3;
      return;
    }
  }
  else if (D_00312734 != 1) {
    D_00312734 = 2;
  }
  return;
}

void func_000A29C0(int param_1)
{
  extern undefined4 D_00311664;
  extern undefined4 D_0031166C;
  if (param_1 == 0) {
    if (D_00311664 != 0) {
      D_00311664 = 3;
      return;
    }
  }
  else {
    if (D_00311664 != 1) {
      D_00311664 = 2;
      return;
    }
    D_0031166C = 0x41200000;
  }
  return;
}

void func_000A2A00(undefined4 *param_1)
{
  extern undefined D_00312080;
  extern undefined D_0031151C;
  extern undefined D_00312084;
  *param_1 = *(undefined4 *)(((undefined *)&D_00312080) + (D_0031151C / 3) * 0x70);
  param_1[1] = *(undefined4 *)(((undefined *)&D_00312084) + (D_0031151C / 3) * 0x70);
  return;
}

void func_000A2A50(undefined4 *param_1)
{
  extern undefined D_00312088;
  extern undefined D_0031151C;
  extern undefined D_0031208C;
  *param_1 = *(undefined4 *)(((undefined *)&D_00312088) + (D_0031151C / 3) * 0x70);
  param_1[1] = *(undefined4 *)(((undefined *)&D_0031208C) + (D_0031151C / 3) * 0x70);
  return;
}

void func_000A2AA0(int param_1, undefined4 *param_2)
{
  extern undefined D_003116B0;
  extern undefined D_003116B4;
  *param_2 = *(undefined4 *)(((undefined *)&D_003116B0) + param_1 * 0x70);
  param_2[1] = *(undefined4 *)(((undefined *)&D_003116B4) + param_1 * 0x70);
  return;
}

void func_000A2AC0(int param_1, undefined4 *param_2)
{
  extern undefined D_003116B8;
  extern undefined D_003116BC;
  *param_2 = *(undefined4 *)(((undefined *)&D_003116B8) + param_1 * 0x70);
  param_2[1] = *(undefined4 *)(((undefined *)&D_003116BC) + param_1 * 0x70);
  return;
}

void func_000A2AE0(int param_1, undefined4 *param_2)
{
  extern undefined D_00311B40;
  extern undefined D_00311B44;
  *param_2 = *(undefined4 *)(((undefined *)&D_00311B40) + param_1 * 0x70);
  param_2[1] = *(undefined4 *)(((undefined *)&D_00311B44) + param_1 * 0x70);
  return;
}

void func_000A2B00(int param_1, undefined4 *param_2)
{
  extern undefined D_00311B48;
  extern undefined D_00311B4C;
  *param_2 = *(undefined4 *)(((undefined *)&D_00311B48) + param_1 * 0x70);
  param_2[1] = *(undefined4 *)(((undefined *)&D_00311B4C) + param_1 * 0x70);
  return;
}

void func_000A2BE0(int a0) {
    extern int D_00312740;
    D_00312740 = a0;
}

void func_000A2BF0(int param_1, int param_2)
{
  extern undefined D_003119F8;
  extern undefined4 D_00311A30;
  extern undefined4 D_00311A38;
  *(int *)(((undefined *)&D_003119F8) + param_1 * 4) = param_2;
  if (param_2 == 0) {
    if (D_00311A30 != 1) {
      D_00311A30 = 2;
      return;
    }
    D_00311A38 = 0x41200000;
  }
  return;
}

void func_000A2D70(void)
{
  extern undefined4 D_00311B30;
  extern undefined4 D_00311B34;
  extern undefined4 D_00311B38;
  extern undefined4 D_00311B3C;
  if ((((D_00311B30 == 2) && (D_00311B34 == 2)) && (D_00311B38 == 2)) && (D_00311B3C == 2))
  {
    D_00311B30 = 0;
    D_00311B34 = 0;
    D_00311B38 = 0;
    D_00311B3C = 0;
  }
  return;
}

void func_000A2DF0(int param_1)
{
  extern undefined D_00312600;
  extern undefined D_00312490;
  extern undefined4 D_00311F74;
  D_00312600 = param_1 != 0;
  if (D_00312490 != '\0' || param_1 != 0) {
    if (D_00311F74 != 1) {
      D_00311F74 = 2;
    }
  }
  else if (D_00311F74 != 0) {
    D_00311F74 = 3;
    return;
  }
  return;
}

void func_000A2E30(char a0) {
    extern char D_003128A0;
    D_003128A0 = a0;
}

void func_000A2E40(int a0, int a1, int a2, int a3) {
    extern int D_00311684;
    extern int D_00311688;
    extern int D_0031168C;
    extern int D_00311690;
    D_00311684 = a0;
    D_00311688 = a1;
    D_0031168C = a2;
    D_00311690 = a3;
}

void func_000A2E70(int *p, int a, int b, int c, int d, int e) { int func_000688D0(...); int func_0011BF40(...); int func_0011BDD0(...); func_000688D0(); *p=func_0011BF40(a,0); p[1]=func_0011BDD0(*p,0); p[2]=b; p[3]=c; p[4]=d; p[5]=e; p[6]=0; p[8]=0x3f800000; p[7]=0; p[9]=0x3f800000; func_000688D0(); }

void func_000A2EE0(int **param_1) { int func_0011B990(...); int *p=*param_1; *(short*)((char*)p+0x2a) -= 1; *param_1=p; func_0011B990(p); }

void func_000A2F00(void *p,float x,int y) { *(float*)((char*)p+8)=x; *(int*)((char*)p+12)=y; }

void func_000A3020(undefined4 *param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
  int func_000A2E70(...);
  func_000A2E70(param_1 + 1,param_2,param_5,param_6,param_7,param_8);
  func_000A2E70(param_1 + 0xb,param_3,param_5,param_6,param_7,param_8);
  *param_1 = param_4;
  return;
}

void func_000A3070(int p) { int func_0011B990(...); int a=*(int*)(p+4); *(short*)(a+0x2a)-=1; func_0011B990(*(int*)(p+4)); int b=*(int*)(p+0x2c); *(short*)(b+0x2a)-=1; func_0011B990(*(int*)(p+0x2c)); }

void func_000A3130(char a0, int a1) {
    extern char D_00312824;
    extern int D_00312820;
    D_00312824 = a0;
    D_00312820 = a1;
}

void func_000A3150(char a0, int a1) {
    extern char D_00312584;
    extern int D_00312580;
    D_00312584 = a0;
    D_00312580 = a1;
}extern uint D_00312620, D_00312624;extern uint D_00312620, D_00312624;
extern uint D_00312620, D_00312624;
void func_000A2B20(undefined4 *param_1)
{
  extern undefined4 D_00312620;
  extern undefined4 D_00312624;
  *(float *)param_1 = *(float *)&D_00312620;
  param_1[1] = D_00312624;
}
