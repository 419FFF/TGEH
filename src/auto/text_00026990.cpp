/* 13 functions from 0x00026990 to 0x0002794C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_00026D90(...); int func_00026EA0(int a, unsigned int *p, int n) { unsigned int t[255]; int i=0,j,k=1; t[0]=p[0]; n--; do { j=i+11; if(n<j)j=n; while(!func_00026D90(a,p[i],p[j])) { --j; if(j==i)return k; } t[k]=p[j]; ++k; i=j; }while(j!=n); for(i=0;i<k;i++)p[i]=t[i]; return k; }

void func_00027110(int param_1)
{
  int func_0009CC90(...);
  extern undefined D_001D3634;
  int func_0009C7A0(...);
  extern undefined D_001D362C;
  extern undefined D_001D3620;
  undefined4 uVar1;
  
  uVar1 = func_0009CC90(param_1,((undefined *)&D_001D3634));
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  uVar1 = func_0009C7A0(param_1,((undefined *)&D_001D362C),0);
  *(undefined4 *)(param_1 + 0x114) = uVar1;
  uVar1 = func_0009C7A0(param_1,((undefined *)&D_001D3620),0);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  return;
}

void func_00027390(int p) { volatile int *dst=(int *)(p+0x110); volatile int *src=(int *)(p+0x130); int a=src[0]; int b=src[1]; int c=src[2]; dst[0]=a; dst[1]=b; dst[2]=c; dst[3]=0; }

void func_00027560(int param_1)
{
  int func_000273C0(...);
  func_000273C0(param_1,param_1 + 0x110);
  return;
}

extern float D_001D37A0; extern int D_002ED3DC; extern int func_00116A90(...); extern void func_0009DAF0(...); extern void func_00012D60(...); extern int func_0009C7A0(...); extern int func_000F91D0(...); struct B275 { unsigned int v[68]; }; B275 *func_00027580(B275 *p, int a) { B275 *b=(B275*)func_00116A90(0x1a0,1,1); *b=*p; *((char*)b+0x12)=5; func_0009DAF0(b); func_00012D60(b,2); if(*(int*)func_0009C7A0(p,&D_001D37A0,0)==0x3f800000)D_002ED3DC++; *((char*)b+0x124)=1; *(unsigned int*)((char*)b+0x110)=func_000F91D0(a); return b; }

void func_00027600(int a0)
{
  void func_0007E570(int);
  func_0007E570(a0 + 0x160);
}

extern float D_001D27B0,D_001D37B4,D_001D2A28,D_001D37B0,D_001D37AC,D_001D2B64; extern int func_00131230(int); void func_00027620(int a,float *p){ if(*(char*)(a+0x124)){ long double t=func_00131230(*(int*)(a+0x11c)); long double x=((long double)D_001D27B0-t)*D_001D37B4+D_001D2A28; long double y=t*D_001D37B0+D_001D37AC; p[0]=(float)(x*p[0]);p[1]=(float)(y*p[1]);p[2]=(float)(x*p[2]);p[4]=(float)(x*p[4]);p[5]=(float)(y*p[5]);p[6]=(float)(x*p[6]);p[8]=(float)(x*p[8]);p[9]=(float)(y*p[9]);p[10]=(float)(x*p[10]);p[13]=(float)(t*D_001D2B64+p[13]);}}

