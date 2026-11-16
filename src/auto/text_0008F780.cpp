/* 13 functions from 0x0008F780 to 0x000905B8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0008F780(void)
{
  int func_0009C590(...);
  extern undefined D_00302DB0;
  int func_00124BE0(...);
  extern undefined4 D_001E3FBC;
  int func_00124700(...);
  int iVar1;
  
  iVar1 = func_0009C590(((undefined *)&D_00302DB0));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) != 0)) {
    func_00124BE0(*(int *)(iVar1 + 0x60),D_001E3FBC);
  }
  func_00124700();
  return;
}

void func_0008F7B0(void){int func_000688D0(...);int func_00124A10(...);int func_001226C0(...);int func_001226B0(...);int func_0007E720(...);func_000688D0();func_00124A10();unsigned char x=func_001226C0();func_001226B0(1,x);func_0007E720();func_001226B0(x);}

void func_0008F7E0(int p){extern int D_00325314;extern int D_001D6F84;int func_0013F2E9(...);struct N{int a,b,c;struct N*next;};if(*(int*)((char*)&D_00325314+(*(unsigned char*)(p+0x22))*0x1c)&&!(*(unsigned char*)(p+0x20)&1)&&(*(char*)(p+0x20)<0)&&func_0013F2E9(&D_001D6F84,*(int*)(p+0x38))==0)*(unsigned char*)(p+0x20)&=0x7f;for(N*n=*(N**)(p+0x28);n;n=n->next)if(!(*(unsigned char*)((char*)n+6)&0x10))func_0008F7E0(n->a);}

void func_0008F840(undefined4 param_1, undefined4 param_2)
{
  int func_00123480(...);
  int func_0008F7E0(...);
  func_00123480(param_1,param_2);
  func_0008F7E0(param_1);
  return;
}

void func_0008F860(void){extern int D_00303C80[0x130];extern int D_00304140;extern int D_00303EDC[];extern int D_0030439C[];int func_0008C380(...);for(int i=0;i<0x130;i++)D_00303C80[i]=0;D_00304140=0;struct A{int a,b,c,d,e,f,g;char h,i,j,k,l,m;int n;}a={8,0x41200000,(int)0xff5d7df5,(int)0xff7fb6f5,0,0x40000000,0x19,0,0,0,0,0,0,1};for(int*p=D_00303EDC;p<D_0030439C;p+=0x98)*p=func_0008C380(&a);}

void func_0008FB40(void){extern int D_00302E20[0x380],D_001D6F98,D_00304144,D_00304148,D_00303C50,D_00303C54,D_00303C58,D_00303C70,D_00303C6C,D_00303C78,D_00303C20,D_00303C28,D_00303C2C,D_00303C74,D_00303C30,D_00303C40;int func_0011BF40(...);int func_0011BDD0(...);void func_0008F860(void);D_00304144=0;for(int i=0;i<0x380;i++)D_00302E20[i]=0;D_00304148=func_0011BF40(&D_001D6F98,0);D_00303C20=func_0011BDD0(D_00304148,0);D_00303C50=1;D_00303C54=1;D_00303C58=0;D_00303C70=0;D_00303C6C=0;D_00303C78=0;D_00303C28=2;D_00303C2C=2;D_00303C74=2;D_00303C30=D_00303C20;D_00303C40=3;func_0008F860();}

void func_0008FBD0(void)
{
  extern undefined4 D_00304148;
  int func_0011B990(...);
  extern undefined4 D_00303C20;
  int iVar1;
  
  iVar1 = D_00304148;
  *(short *)(D_00304148 + 0x2a) = *(short *)(D_00304148 + 0x2a) + -1;
  func_0011B990(iVar1);
  D_00303C20 = 0;
  return;
}

