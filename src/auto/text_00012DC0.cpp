/* 12 functions from 0x00012DC0 to 0x00013B52, found by Ghidra. */
#include "common.h"
#include <string.h>
#include "ghidra.h"

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

void func_000135A0(int a){int func_0009C7A0(...);int func_000A22B0(...);int func_00099E70(...);extern char D_001D2910,D_001D28FC;extern float D_001D290C;int*p=(int*)func_0009C7A0(a,&D_001D2910,0);func_000A22B0(a+100,1,p[0],p[1],p[2],0x3e4ccccd);*(char*)(a+0x110)=0;float v=(float)(p[1]-p[0]);if(p[1]-p[0]<0)v+=D_001D290C;*(float*)(a+0x114)=v/p[2];*(int*)(a+0x118)=0;*(float*)(a+0x164)=*(float*)(a+0x114);*(char*)(a+0x175)=1;func_00099E70(a+0x170,0,0);*(char*)(a+0x10)|=0x80;*(int*)func_0009C7A0(a,&D_001D28FC,3)=0;}

void func_000139C0(float*p,undefined4 q){int func_00131220(...);int func_00131270(...);extern float D_001D27B0;float x=*p,y=p[1];int n=func_00131220(x*x+y*y);float s=D_001D27B0/n;x*=s;y*=s;*p=x;p[1]=y;float a,b;func_00131270(q,&a,&b);*p=(b*x-a*y)*n;p[1]=(b*y+a*x)*n;}

void _func_00013A70(int param_1)
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

  puVar1 = (int *)func_00116A90(0x34, 1, 1);
  *(int **)(param_1 + 0x110) = puVar1;
  puVar3 = puVar1;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
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

