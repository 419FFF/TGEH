/* 9 functions from 0x00057760 to 0x00058603, found by Ghidra. */
#include "common.h"

struct ActorBase { char pad[0x110]; int *ext; char pad2[0x17c - 0x114]; int tail[10]; };
#include "ghidra.h"

extern void func_0007E470(void*);
void func_00057760(void *p) {
    int *data=*(int **)((char*)p+0x110);
    if (*(int*)((char*)p+0x60)==0) func_0007E470(p);
    switch(data[0]) {
    case 0: data[0]=1; break;
    case 1: data[0]=2; break;
    case 2: data[0]=3; break;
    case 3: data[0]=4; break;
    case 4: data[0]=5; break;
    case 5: data[0]=6; break;
    case 6: data[0]=7; break;
    case 7: data[0]=8; break;
    case 8: data[0]=9; break;
    case 9: data[0]=10; break;
    case 10: data[0]=11; break;
    case 11: data[0]=0; break;
    default: break;
    }
}

void func_00057E80(int param_1)
{
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000A1C00(*(undefined4 *)(iVar1 + 0x18));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x14));
  func_00116FB0(iVar1);
  return;
}

void func_00057EB0(int p) {
 extern int D_00307D04,D_00307D10; extern char D_001D51C4,D_001D51BC,D_001D2AF8;
 int func_00116800(...),func_00116A90(...),func_001060A0(...),func_0013E531(...),func_0004FA80(...),func_00048720(...),func_00110060(...),func_0009C7A0(...),func_00116820(...);
 int s;
 func_00116800(D_00307D04);
 s=func_00116A90(0x2b0,1,1);
 *(int*)(p+0x110)=s;
 int b=func_001060A0(&D_001D51C4);
 func_0013E531(&D_001D51BC,0x2b0);
 func_0004FA80(p,s);
 int h=func_00048720(D_00307D10,0x32,b,p);
 *(int*)(s+0x68)=h; *(int*)(s+0x254)=0;
 func_00110060(*(int*)(p+0x2c),s+0x260);
 int x=func_0009C7A0(p,&D_001D2AF8,0);
 *(int*)(s+0x2a0)=x; func_00116820();
}

int func_0012E750(...);
int func_00056D50(...);
int func_0009CC90(...);
float func_0012E7B0(...);
int func_000A2370(...);
int func_00056C00(...);
void _func_00057F50(int p){extern char D_001D2C3C;int s=*(int*)(p+0x110);switch(*(int*)(s+0x254)){case 0:*(int*)s=2;func_0012E750(s+0x6c);func_00056D50(p,s);*(int*)(s+0x254)=1;case 1:if(*(char*)(p+0x174)){*(int*)(s+0x254)=2;*(char*)(p+0x174)=0;}break;case 2:{*(int*)(s+0x254)=3;int a=func_0009CC90(p,&D_001D2C3C)+0x54;*(int*)(s+0x6c)=*(int*)a;*(int*)(s+0x70)=*(int*)(a+4);*(int*)(s+0x74)=*(int*)(a+8);}case 3:(void)func_0012E7B0(s+0x138,s+0x290);break;case 4:{int a=func_000A2370(p+0x64);if(!a)*(int*)*(int*)(s+0x2a0)=0;}}if(*(int*)(s+0x254)!=4)func_00056C00(p,s);}

void func_00058040(int p) {
 extern int D_00307D10; int func_000487A0(...); int func_00116FB0(...);
 int q=*(int*)(p+0x110); func_000487A0(D_00307D10,*(int*)(q+0x68)); func_00116FB0(q); *(int*)(p+0x110)=0;
}

extern "C" void* memset(void*, int, unsigned);
#pragma intrinsic(memset)
void _func_00058080(ActorBase *o)
{
  extern char D_001D2950, D_001D3830, D_001D5208, D_001D5200, D_001D51F8, D_001D51EC, D_001D29C7, D_001D2940, D_001D51DC, D_001D51D0;
  int func_00116A90(...);
  int func_0009C7A0(...);
  int func_00045A60(...);
  int func_000A1BB0(...);
  int func_00131990(...);
  int func_0009CD40(...);
  int *t = o->tail;
  int *p = (int *)func_00116A90(0x30, 1, 1);
  o->ext = p;
  memset(p, 0, 0x30);
  p[1] = func_0009C7A0(o, &D_001D2950, 1);
  p[6] = func_0009C7A0(o, &D_001D3830, 1);
  func_00045A60(o);
  p[5] = func_000A1BB0(o, &D_001D5208);
  p[4] = func_000A1BB0(o, &D_001D5200);
  p[2] = func_000A1BB0(o, &D_001D51F8);
  p[3] = func_000A1BB0(o, &D_001D51EC);
  func_00131990(&D_001D29C7);
  int *q = (int *)func_0009CD40(o, &D_001D2940);
  if (q != 0) {
    p[8] = q[0x15]; p[9] = q[0x16]; p[10] = q[0x17];
  } else {
    p[8] = 0x44480000; p[9] = 0x44160000; p[10] = 0x43480000;
  }
  q = (int *)func_0009C7A0(o, &D_001D2940, 0);
  if (q != 0) {
    p[8] = q[0]; p[9] = q[1]; p[10] = q[2];
  }
  q = (int *)func_0009C7A0(o, &D_001D51DC, 0);
  if (q != 0 && *q == 0x3f800000) p[0] = 0; else p[0] = 4;
  p[7] = func_0009C7A0(o, &D_001D51D0, 1);
  for (int i = 0; i < 8; i++) t[i] = 0;
  t[8] = 0x3f800000; t[9] = 0x3f800000;
}
void func_000584D0(int p) {
 int func_000A1C00(...),func_00116FB0(...);
 int s=*(int*)(p+0x110);
 func_000A1C00(*(int*)(s+0x14)); func_000A1C00(*(int*)(s+0x10));
 func_000A1C00(*(int*)(s+8)); func_000A1C00(*(int*)(s+0xc));
 func_00116FB0(s);
}

void func_00058510(void *p) {
 int func_00116A90(...),func_0004FA80(...),__ftol2(...),func_00048720(...),func_00056D50(...),func_00045A60(...),func_000A1BB0(...),func_00131990(...);
 extern int D_00307D10; extern char D_001D5210,D_001D29C7;
 int *s=(int*)func_00116A90(0x260,1,1);
 *(int**)((char*)p+0x110)=s;
 for(int i=0;i<0x98;i++) s[i]=0;
 func_0004FA80(p,s+1);
 *(int*)((char*)p+0x17c)=0; *(int*)((char*)p+0x180)=0x3f800000; *(int*)((char*)p+0x19c)=0x3f800000;
 *(int*)((char*)p+0x184)=0; *(int*)((char*)p+0x188)=0; *(int*)((char*)p+0x18c)=0; *(int*)((char*)p+0x190)=0; *(int*)((char*)p+0x194)=0; *(int*)((char*)p+0x198)=0; *(int*)((char*)p+0x1a0)=0;
 *((char*)s+0x99)=0;
 s[0x1a]=*(int*)((char*)p+0x130);
 int n=__ftol2();
 s[0x21]=n*2;
 s[0x1b]=func_00048720(D_00307D10,s[0x21],s[0x1a],p);
 s[1]=10; func_00056D50(p,s+1);
 func_00045A60(p);
 s[0x96]=func_000A1BB0(p,&D_001D5210);
 func_00131990(&D_001D29C7);
 s[0]=0; s[0x97]=-1;
}

