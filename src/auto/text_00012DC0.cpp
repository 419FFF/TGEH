/* 12 functions from 0x00012DC0 to 0x00013B52, found by Ghidra. */
#include "common.h"
#include <string.h>
#include "ghidra.h"
struct V4_13790 { int a, b, c, d; };

void func_00013140(void){extern int D_002EAF90,D_002EAF94,D_002EAF98,D_002EAF9C,D_002EAFA0,D_002EAFA4,D_002EAFA8,D_002EAFAC,D_002EAFB0,D_002EAFB4,D_003104B4,D_0030C630,D_001E3628,D_001E3620;int func_000F8FA0(...);int func_00049480(...);int func_00105F80(...);int i;D_002EAF90=D_002EAF94=D_002EAF98=D_002EAF9C=D_002EAFA0=D_002EAFA4=D_002EAFA8=D_002EAFAC=D_002EAFB0=D_002EAFB4=0;for(i=1;i!=D_003104B4;i++){int p=*(int*)(D_0030C630+i*4);if(p){int k=*(unsigned char*)(p+21);int f=*(int*)(D_001E3628+k*12);if(f)((void(*)(int))f)(p);*(unsigned char*)(p+21)=0;if(D_001E3620)((void(*)(int))D_001E3620)(p);func_000F8FA0(p);}}func_00049480();func_00105F80();}

void func_000131E0(float*p){extern float D_001D27B8,D_001D28AC;if(*p<D_001D27B8)*p=*p+D_001D28AC;if(*p>D_001D28AC)*p=*p-D_001D28AC;}

void func_00013220(int param_1)
{
  int func_00110300(...);
  extern undefined D_001D28B0;
  int func_00110060(...);
  undefined4 uVar1;
  
  uVar1 = func_00110300(*(undefined4 *)(param_1 + 0x2c),((undefined *)&D_001D28B0),0x18);
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  func_00110060(uVar1,param_1 + 0x120);
  return;
}

extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
#pragma intrinsic(strcpy, strcat)
void func_00013350(int arg)
{
  extern char D_001D28F0, D_001D28D0, D_001D28C4;
  extern float D_001D28E4, D_001D28E0, D_001D28DC, D_001D2868, D_001E461C;
  int func_00116A90(int, int, int);
  char **func_0009C7A0(int, char *, int);
  int func_00110300(int, char *, int);
  float func_00131760(void);
  unsigned int func_00131310(void);
  int func_00110060(int, int);
  int func_0013E469(char *, char *, ...);
  int func_00103210(char *);
  char buf[0x80];
  float f;
  long double p;
  int s;
  s = func_00116A90(0x60, 1, 1);
  *(int *)(arg + 0x110) = s;
  strcpy(buf, *func_0009C7A0(arg, &D_001D28F0, 0));
  strcat(buf, "spin");
  *(int *)(s + 0x40) = func_00110300(*(int *)(arg + 0x2c), buf, 0x18);
  f = (float)((long double)func_00131760() * D_001D28E4 + D_001D28E0);
  if (func_00131310() & 1) {
    p = (long double)D_001E461C * f;
    *(float *)(s + 0x48) = (float)(p * D_001D2868);
  } else {
    p = (long double)D_001E461C * f;
    *(float *)(s + 0x48) = (float)(p * D_001D28DC);
  }
  *(int *)(s + 0x44) = 0;
  func_00110060(*(int *)(s + 0x40), s);
  func_0013E469(buf, &D_001D28D0, *(int *)(arg + 0xc));
  *(int *)(s + 0x4c) = func_00103210(buf);
  func_0013E469(buf, &D_001D28C4, *(int *)(arg + 0xc));
  *(int *)(s + 0x50) = func_00103210(buf);
  *(char *)(s + 0x54) = 0;
}

void func_00013470(int param_1)
{
  extern float D_001D27B8, D_001D2868, D_001D286C;
  int func_00011CB0(...);
  long double func_00131210(float);
  int func_00103990(...);
  int func_0012F7A0(...);
  int func_00068DA0(...);
  int func_001105E0(...);
  int iVar2 = *(int *)(param_1 + 0x110);
  float *pfVar1;
  float fVar4;
  int *puVar3;
  int local_70, local_6c, local_68;
  int local_60, local_5c, local_58;
  float local_54;
  char local_50[76];
  if ((*(int *)(iVar2 + 0x40) != 0) && ((long double)*(float *)(iVar2 + 0x48) != (long double)D_001D27B8)) {
    func_00011CB0(local_50, iVar2);
    fVar4 = (float)((long double)*(float *)(iVar2 + 0x48) + (long double)*(float *)(iVar2 + 0x44));
    pfVar1 = (float *)(iVar2 + 0x44);
    *pfVar1 = fVar4;
    if (func_00131210(fVar4) <= (long double)D_001D2868) {
      if ((long double)D_001D286C < func_00131210(*pfVar1) && *(char *)(iVar2 + 0x54) == 0) {
        func_00103990(*(int *)(iVar2 + 0x50), 0);
        *(char *)(iVar2 + 0x54) = 1;
      }
    } else {
      func_00103990(*(int *)(iVar2 + 0x4c), 0);
      *(char *)(iVar2 + 0x54) = 0;
    }
    func_000131E0(pfVar1);
    local_54 = *pfVar1;
    puVar3 = *(int **)(param_1 + 0x2c);
    local_60 = 0;
    local_5c = 0x3f800000;
    local_58 = 0;
    local_70 = puVar3[0];
    local_6c = puVar3[1];
    local_68 = puVar3[2];
    func_0012F7A0(&local_70, local_50);
    func_00068DA0(local_50, &local_60, &local_70);
    func_001105E0(*(int *)(iVar2 + 0x40), local_50, 0);
  }
}

void func_000135A0(int a){int func_0009C7A0(...);int func_000A22B0(...);int func_00099E70(...);extern char D_001D2910,D_001D28FC;extern float D_001D290C;int*p=(int*)func_0009C7A0(a,&D_001D2910,0);func_000A22B0(a+100,1,p[0],p[1],p[2],0x3e4ccccd);*(char*)(a+0x110)=0;float v=(float)(p[1]-p[0]);if(p[1]-p[0]<0)v+=D_001D290C;*(float*)(a+0x114)=v/p[2];*(int*)(a+0x118)=0;*(float*)(a+0x164)=*(float*)(a+0x114);*(char*)(a+0x175)=1;func_00099E70(a+0x170,0,0);*(char*)(a+0x10)|=0x80;*(int*)func_0009C7A0(a,&D_001D28FC,3)=0;}

void _func_00013650(int param_1)
{
  extern float D_001E461C;
  extern int D_00307DF8;
  extern char D_001E3628;
  extern void (*D_001E3698)(int);
  int func_000A2370(...);
  int func_0007A4D0(...);
  int func_00110330(...);
  int func_0007A5C0(...);
  int func_000F8FA0(...);
  int func_000F91D0(...);
  int func_00110420(...);
  int func_00110480(...);
  int func_0009D3E0(...);
  int iVar2;
  void (*fn)(int);

  switch (*(unsigned char *)(param_1 + 0x110)) {
  case 0:
    if (func_000A2370(param_1 + 100) == 0) {
      func_0007A4D0(param_1, param_1);
      func_00110330(*(int *)(param_1 + 0x2c), 0);
      *(int *)(param_1 + 0x118) = 0;
      *(int *)(param_1 + 0x114) = 0x40000000;
      *(unsigned char *)(param_1 + 0x110) = 1;
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x114) != -0x40800000) {
      long double v = (long double)D_001E461C + (long double)*(float *)(param_1 + 0x118);
      *(float *)(param_1 + 0x118) = (float)v;
      if (v > (long double)*(float *)(param_1 + 0x114)) {
        func_0007A5C0(*(int *)(param_1 + 0x2c), param_1);
        *(int *)(param_1 + 0x114) = 0xbf800000;
        if (param_1 != D_00307DF8) {
          fn = *(void (**)(int))(&D_001E3628 + *(unsigned char *)(param_1 + 0x15) * 12);
          if (fn)
            fn(param_1);
          *(unsigned char *)(param_1 + 0x15) = 10;
          if (D_001E3698)
            D_001E3698(param_1);
          func_000F8FA0(param_1);
        }
        iVar2 = func_000F91D0(*(int *)(*(int *)(param_1 + 0x20) + 8));
        func_00110420(*(int *)(param_1 + 0x2c), **(int **)(*(int *)(param_1 + 0x2c) + 0x2c));
        func_00110480(*(int *)(iVar2 + 0xe0), *(int *)(param_1 + 0x2c), 8);
        func_0009D3E0(param_1);
        *(unsigned short *)(param_1 + 0x10) = *(unsigned short *)(param_1 + 0x10) & 0xff7f | 0x100;
      }
    }
    break;
  }
}

void func_000139C0(float*p,undefined4 q){int func_00131220(...);int func_00131270(...);extern float D_001D27B0;float x=*p,y=p[1];int n=func_00131220(x*x+y*y);float s=D_001D27B0/n;x*=s;y*=s;*p=x;p[1]=y;float a,b;func_00131270(q,&a,&b);*p=(b*x-a*y)*n;p[1]=(b*y+a*x)*n;}

void _func_00013A70(int *param_1)
{
  int func_00116A90(...);
  int func_0009C7A0(...);
  extern char D_001D2968, D_001D2950, D_001D2940, D_001D2934, D_001D2928;
  int func_0009CD40(...);
  int func_0009CC90(...);
  int *puVar1;
  int uVar2;
  int *puVar3;
  int iVar4;

  param_1[0x44] = (int)(puVar1 = (int *)func_00116A90(0x34, 1, 1));
  memset(puVar1, 0, 0x34);
  uVar2 = func_0009C7A0(param_1, &D_001D2968, 0);
  puVar1[2] = uVar2;
  uVar2 = func_0009C7A0(param_1, &D_001D2950, 0);
  puVar1[1] = uVar2;
  iVar4 = func_0009CD40(param_1, &D_001D2940);
  if (iVar4 != 0) {
    puVar1[4] = *(int *)(iVar4 + 0x54);
    puVar1[5] = *(int *)(iVar4 + 0x58);
    puVar1[6] = *(int *)(iVar4 + 0x5c);
  } else {
    puVar1[4] = 0x44480000;
    puVar1[5] = 0x44160000;
    puVar1[6] = 0x43480000;
  }
  puVar3 = (int *)func_0009C7A0(param_1, &D_001D2940, 0);
  if (puVar3 != 0) {
    puVar1[4] = *puVar3;
    puVar1[5] = puVar3[1];
    puVar1[6] = puVar3[2];
  }
  uVar2 = func_0009CC90(param_1, &D_001D2934);
  puVar1[3] = uVar2;
  iVar4 = func_0009C7A0(param_1, &D_001D2928, 0);
  if (iVar4 == 0) {
    puVar1[0xb] = 0x3f800000;
  }
  *puVar1 = 0;
  puVar1[10] = 0;
  *(char *)(puVar1 + 0xc) = 1;
}

