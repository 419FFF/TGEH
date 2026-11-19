/* 5 functions from 0x00030A80 to 0x00030F05, found by Ghidra. */
#include "common.h"

extern int func_000A1F50(int);
extern int func_000120B0(int *, unsigned int, int, int);
extern int func_0012ED20(int *, int *, float);

float func_00131220(float);
void func_00030A80(int p1,int p2,float p3)
{
 extern float D_001D3E44,D_001D290C,D_001D3E40;
 double t=func_00131220(p3*D_001D3E44);
 int *q=*(int**)(p2+0x31c); int n=*q;
 if(n<0) n+=(int)D_001D290C;
 *(float*)(p2+0x334)=(float)((*(float*)(p2+0x33c)-n)/(t*D_001D3E40));
 *(float*)(p2+0x9c)=(float)t;
}

void func_00030AD0(int p1,int p2,float p3)
{
 extern float D_001D3E44,D_001D290C,D_001D3E40;
 double t=func_00131220(p3*D_001D3E44);
 int *q=*(int**)(p2+0x32c); int n=*q;
 if(n<0) n+=(int)D_001D290C;
 *(float*)(p2+0x334)=(float)((*(float*)(p2+0x33c)-n)/(t*D_001D3E40));
 *(float*)(p2+0x9c)=(float)t;
}

void func_00030B20(int p1, int p2)
{
 extern char D_001D3F2C[], D_001D3F14[], D_001D3EFC[], D_001D3EE0[], D_001D3EC4[], D_001D3EB4[], D_001D3EA4[], D_001D3E88[], D_001D3E7C[], D_001D3E64[], D_001D3E48[];
 extern int D_00307CFC, D_003080FC, D_00307DD8;
 int func_0009C7A0(...); void func_000309B0(int, int, float);
 *(int*)(p2+0x310)=0;
 *(int*)(p2+0x330)=*(int*)(p2+0x410);
 *(int*)(p2+0x318)=func_0009C7A0(p1,D_001D3F2C,0);
 *(int*)(p2+0x31c)=func_0009C7A0(p1,D_001D3F14,0);
 *(int*)(p2+0x320)=func_0009C7A0(p1,D_001D3EFC,0);
 *(int*)(p2+0x324)=func_0009C7A0(p1,D_001D3EE0,0);
 if(p1==D_00307CFC) *(int*)(p2+0x328)=func_0009C7A0(p1,D_001D3EC4,0);
 *(int*)(p2+0x33c)=*(int*)func_0009C7A0(p1,D_001D3EB4,0);
 *(int*)(p2+0x340)=*(int*)func_0009C7A0(p1,D_001D3EA4,0);
 *(int*)(p2+0x32c)=func_0009C7A0(p1,D_001D3E88,0);
 *(char*)(p2+0x344)=0;
 *(char*)(p2+0x345)=0;
 *(int*)(p2+0x358)=0;
 *(int*)(p2+0x354)=0;
 float *f=(float*)func_0009C7A0(p1,D_001D3E7C,0);
 func_000309B0(p1,p2,(float)((double)*(float*)(p2+0x330)*(double)*f));
 int *q=(int*)func_0009C7A0(p1,D_001D3E64,0);
 if(q) *(int*)(p2+0x374)=*q;
 q=(int*)func_0009C7A0(p1,D_001D3E48,0);
 if(q) *(int*)(p2+0x370)=*q;
 D_003080FC=0;
 D_00307DD8=0;
}

char func_00030C70(int param_1, int *param_2, int *param_3, int param_4)
{
  extern int D_00307DF0;
  int func_000A1F50(...);
  int func_000120B0(...);
  int func_0012ED20(...);
  char cVar1;
  int iVar2;
  int iVar3;

  cVar1 = *(char *)(*(int *)(param_4 + 0xec) + 0x13);
  if (((cVar1 == 4) || (cVar1 == 'O')) && (*param_3 != 6)) {
    D_00307DF0 = *(int *)(param_4 + 0xec);
  }
  if (*(char *)(*(int *)(param_4 + 0xec) + 0x13) == 'B') {
    return 1;
  }
  iVar3 = func_000A1F50(param_2[0xa4]);
  if ((iVar3 == 0) && (iVar3 = *(int *)(param_4 + 0xec), *(char *)(iVar3 + 0x12) == 1)) {
    cVar1 = *(char *)(iVar3 + 0x13);
    if (cVar1 == 0x17) {
      iVar2 = **(int **)(iVar3 + 0x110);
      if (iVar2 == 0) {
        **(int **)(iVar3 + 0x110) = 1;
        func_000120B0(*(int *)(param_4 + 0xec) + 0x150, 0x3e800000, 0, 0);
      }
      else if (iVar2 == 4) {
        *param_2 = 4;
        *(char *)((int)param_2 + 0x1a5) = 1;
        param_2[0x104] = 0x3f800000;
        *(char *)((int)param_2 + 0x346) = 0;
        func_0012ED20(param_2 + 0x53, param_2 + 0xc, 0x43fa0000);
        param_2[0x26] = 0;
        param_2[0x27] = 0;
        param_2[0x28] = 0;
        return 1;
      }
    }
    else if (cVar1 != '>' && cVar1 != '9' && cVar1 != '6' && cVar1 != '5' && cVar1 != 'P' && cVar1 != 5 && cVar1 != '8' && cVar1 != 'N' && cVar1 != 'E' && cVar1 != '\"') {
      *(char *)((int)param_2 + 0x1a5) = 1;
      *param_2 = 4;
      param_2[0x104] = 0x3f800000;
      *(char *)((int)param_2 + 0x346) = 0;
      func_0012ED20(param_2 + 0x53, param_2 + 0xc, 0x43fa0000);
      param_2[0x26] = 0;
      param_2[0x27] = 0;
      param_2[0x28] = 0;
      return 1;
    }
  }
  return 0;
}

void func_00030DD0(int p1, int p2, int *p3, float p4)
{
 extern char D_001E3A88; extern int D_00307DF8; extern int D_002EE754; extern char D_002EDDE8[]; extern int D_003251C4;
 int func_00082CC0(...); int func_00063F40(...); int func_0002ED30(...); int func_00107C40(...);
 if(func_000A1F50(*(int*)(p2+0x290))==0){
  *p3=5;
  return;
 }
 if(D_001E3A88==0 && (double)p4>(double)*(float*)(p2+0x370)){
  if(p3[1]==8) func_00082CC0(D_00307DF8);
  D_001E3A88=1;
  func_00063F40();
  int *z=(int*)(p2+0x37c);
  z[0]=0; z[1]=0; z[2]=0; z[3]=0; z[4]=0; z[5]=0; z[6]=0; z[7]=0; z[8]=0; z[9]=0;
  double x=*(float*)(D_00307DF8+0xfc), y=*(float*)(D_00307DF8+0xf4);
  float d=func_00131220((float)(y*y+x*x));
  int i=0;
  if(D_002EE754!=0){
   char *e=D_002EDDE8;
   do{
    func_0002ED30(e,z,p2+0x40,d,200.0f,4);
    func_0002ED30(e,z,p2+0x40,400.0f,80.0f,5);
    i++; e+=0xc;
   }while(i!=D_002EE754);
  }
  func_00107C40(D_003251C4,D_00307DF8,0);
 }
}

