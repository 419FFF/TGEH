/* 13 functions from 0x000D2FF0 to 0x000D3A51, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

unsigned char func_000D32B0(unsigned char unused,int a,int b,int c) { extern int D_0031B900,D_0031B864,D_0031B8F0; extern float D_001D290C; int func_000A2310(...); if(D_0031B900!=7)return 0; func_000A2310(D_0031B864+100,c); int v=*(int *)(D_0031B8F0+4); float f=(float)v; if(v<0)f+=D_001D290C; return (float)a < f; }

void func_000D3550(void) { extern char D_0031B130,D_0031AF24,D_0031B3C4,D_0031B460,D_0031B7C4; int func_0012E750(...); int *p=(int *)&D_0031B130; do { ((char *)p)[0x34]=0;*p=0;p[-4]=0;p+=0x44;}while((int)p<(int)&D_0031B460); char *b=&D_0031AF24,*a=&D_0031B3C4; do{func_0012E750(a+0x10);*a=0;*b=0;a+=0x40;b+=0x18;}while((int)a<(int)&D_0031B7C4); }

void func_000D36B0(void) { int func_0012F120(...); int func_00110060(...); int func_0012F7A0(...); int func_00011E30(...); int func_001105E0(...); extern int *D_0031ACB0; extern float D_001DAC48; extern int D_00313B60; unsigned char a[0x4c],b[0x30]; int x[3]; float t[3]; func_0012F120(a); func_00110060(D_0031ACB0,b); x[0]=D_0031ACB0[0];x[1]=0x43af0000;x[2]=D_0031ACB0[2];func_0012F7A0(x,b); ((int *)a)[0]=x[0];((int *)a)[1]=x[1];((int *)a)[2]=x[2];t[0]=*(float *)((char *)D_0031ACB0+0x18)+D_001DAC48;t[1]=1.3089969f;t[2]=1.5707964f;func_00011E30(b,a,t);func_001105E0(D_00313B60,a,1); }

void func_000D39E0(int a,int b,int c,int *out) { extern int D_0031ACB0; extern unsigned char D_003268B0; int *p=*(int **)(D_0031ACB0+0x28); unsigned n=0; while(p){ if((*(unsigned char *)((char *)p+6)&0x18)==0){int *obj=(int *)*p; if(*(unsigned char *)((char *)obj+0x22)==D_003268B0){out[n]=*p;++n;}} p=(int *)p[3];} }

void func_000D3A20(void)
{
  int func_001031C0(...);
  extern undefined4 D_0031ACB4;
  extern undefined D_001DAC4C;
  int func_00102E80(...);
  extern undefined D_001DAC3C;
  undefined4 uVar1;
  
  uVar1 = func_001031C0(D_0031ACB4,((undefined *)&D_001DAC4C));
  func_00102E80(uVar1);
  uVar1 = func_001031C0(D_0031ACB4,((undefined *)&D_001DAC3C));
  func_00102E80(uVar1);
  return;
}
