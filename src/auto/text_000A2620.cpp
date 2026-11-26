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

void func_000A2C30(int param_1)
{
  extern int D_00311680, D_00312480, D_00311A30, D_00311D10;
  extern int D_00312694, D_00311DB4, D_00311EE4;
  extern float D_00312488, D_00311A38, D_00311D18, D_0031269C, D_00311DBC, D_00311EEC;
  if (param_1 != 0) {
    if (D_00311680 == 0) {
      if (D_00312480 != 1) D_00312480 = 2; else D_00312488 = 10.0;
      if (D_00311A30 != 1) D_00311A30 = 2; else D_00311A38 = 10.0;
      if (D_00311D10 != 1) D_00311D10 = 2; else D_00311D18 = 10.0;
      if (D_00312694 != 1) D_00312694 = 2; else D_0031269C = 5.0;
      if (D_00311DB4 != 1) D_00311DB4 = 2; else D_00311DBC = 10.0;
      if (D_00311EE4 != 1) D_00311EE4 = 2; else D_00311EEC = 10.0;
      D_00311680 = 1;
    }
  } else if (D_00311680 != 0) {
    if (D_00312480 != 0) D_00312480 = 3;
    if (D_00311A30 != 0) D_00311A30 = 3;
    if (D_00311D10 != 0) D_00311D10 = 3;
    if (D_00312694 != 0) D_00312694 = 3;
    if (D_00311DB4 != 0) D_00311DB4 = 3;
    if (D_00311EE4 != 0) D_00311EE4 = 3;
    D_00311680 = 0;
  }
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

void func_000A2F00(void *p,float x,int y) { volatile float t=x; *(float*)((char*)p+8)=t; *(int*)((char*)p+12)=y; }

void func_000A2F20(float *p)
{
    extern float D_001D27EC;
    void func_00133F30(int *);
    void func_001383B0(void);
    void func_0011E4A0(float, float, float, float, int *, int *, int, float);
    int state[21];
    int a[2];
    int b[2];
    double x0, y0;
    float left, top, right, bottom;
    state[0] = 1;
    state[1] = 1;
    state[2] = ((int *)p)[1];
    a[0] = ((int *)p)[6];
    a[1] = ((int *)p)[7];
    x0 = p[2] - p[4] * (double)D_001D27EC;
    left = (float)(p[6] * (double)p[4] + x0);
    state[6] = 3;
    state[10] = 4;
    state[11] = 5;
    state[12] = 0;
    state[18] = 6;
    state[17] = 0;
    state[19] = 0;
    right = (float)(p[8] * (double)p[4] + x0);
    b[0] = ((int *)p)[8];
    y0 = p[3] - p[5] * (double)D_001D27EC;
    top = (float)(p[5] * (double)p[7] + y0);
    b[1] = ((int *)p)[9];
    bottom = (float)(p[9] * (double)p[5] + y0);
    func_00133F30(state);
    func_001383B0();
    func_0011E4A0(left, top, right, bottom, a, b, 0, 1.0f);
}

void func_000A3020(undefined4 *param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
  int func_000A2E70(...);
  func_000A2E70(param_1 + 1,param_2,param_5,param_6,param_7,param_8);
  func_000A2E70(param_1 + 0xb,param_3,param_5,param_6,param_7,param_8);
  *param_1 = param_4;
  return;
}

void func_000A3070(int p) { int func_0011B990(...); int a=*(int*)(p+4); *(short*)(a+0x2a)-=1; func_0011B990(*(int*)(p+4)); int b=*(int*)(p+0x2c); *(short*)(b+0x2a)-=1; func_0011B990(*(int*)(p+0x2c)); }

void func_000A30A0(int *p,float x) { extern float D_001D27B8,D_001D27B0; int func_000A2F20(...); float f; if(x<D_001D27B8) f=D_001D27B8; else if(D_001D27B0<x) f=D_001D27B0; else f=x; if(p[0]==1) { f=D_001D27B0-f; p[7]=0; p[9]=0x3f800000; p[10]=0x3f800000; p[8]=*(int*)&f; } else if(p[0]==0) {p[9]=*(int*)&f;p[7]=0;p[8]=0;p[10]=0x3f800000;} func_000A2F20(p+1); func_000A2F20(p+11); }

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
}

void func_000A3170(byte a,byte b){extern volatile byte D_00311F80,D_003124F0,D_0031078C,D_00310A40,D_00310CF4,D_00310FA8,D_0031125C,D_00312000,D_00311AB0; D_00311F80=a;D_003124F0=b;if(D_0031078C==0&&D_00310A40==0&&D_00310CF4==0&&D_00310FA8==0&&D_0031125C==0){D_00312000=a&b;D_00311AB0=a&b;return;}D_00312000=a&b;D_00311AB0=a&b;}

void func_000A3460(void){extern int D_0032923C,D_00312570,D_00311680,D_00312744,D_003126B0,D_003126B4,D_003126B8,D_003126BC; extern char D_001D757C; int func_000A65B0(...); int func_0009C590(...); int func_0009D3E0(...); int func_00095AA0(...); void func_000A3170(...); D_00312570=D_0032923C;D_00311680=0;func_000A65B0();D_00312744=func_0009C590(&D_001D757C);if(D_00312744!=0){func_0009D3E0(D_00312744);func_00095AA0(*(int*)(D_00312744+0x2c));}D_003126B0=0;D_003126B4=0;D_003126B8=0;D_003126BC=0;func_000A3170(1,1);}

extern uint D_00312620, D_00312624;extern uint D_00312620, D_00312624;
extern uint D_00312620, D_00312624;
void func_000A2B20(undefined4 *param_1) { extern undefined4 D_00312620; extern undefined4 D_00312624; *(float *)param_1 = *(float *)&D_00312620; param_1[1] = D_00312624; }

extern uint D_00312628, D_0031262C;
void func_000A2B40(undefined4 *param_1) { extern undefined4 D_00312628; extern undefined4 D_0031262C; *(float *)param_1 = *(float *)&D_00312628; param_1[1] = D_0031262C; }

