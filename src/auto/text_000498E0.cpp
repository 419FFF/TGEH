/* 11 functions from 0x000498E0 to 0x0004A574, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00049D60(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x6c));
  func_00116FB0(iVar1);
  return;
}

void func_00049D90(void){extern int D_002EEB7C;extern int D_002EEB78;int func_000497B0(...);int i=0,j=0;if(D_002EEB7C>0){i=0;do{int p=D_002EEB78+i;if(*(int*)(p+8)==1)func_000497B0(p);++j;i+=44;}while(j<D_002EEB7C);}}

void func_00049DD0(undefined4*a,undefined4*b,undefined4 c){int func_0012E6D0(...);int func_0012E940(...);int func_0012ECA0(...);int func_0012EA00(...);extern float D_001D27B0;undefined4*p=a+3;a[0]=b[0];a[1]=b[1];a[2]=b[2];func_0012E6D0(p,c,b);float l=func_0012E940(p);*(float*)(a+8)=l;func_0012ECA0(p,D_001D27B0/l);*(float*)(a+6)=-*(float*)(a+5);*(float*)(a+7)=*(float*)p;func_0012EA00(a+6);}

longdouble func_00049E40(int a,undefined4 b){int func_0012E6D0(...);int func_00131210(...);extern float D_001D27B8,D_001D27B0;float t[3];func_0012E6D0(t,b,a);float x=func_00131210(*(float*)(a+12));float y=func_00131210(*(float*)(a+20));float v=*(float*)(a+32);if(x<=y)v=t[1]/(v**(float*)(a+20));else v=t[0]/(v**(float*)(a+12));if(v<D_001D27B8)v=D_001D27B8;if(D_001D27B0<v)v=D_001D27B0;return v;}

void func_00049ED0(int a,float*b,int c,float d){int func_0012ED20(...);int func_0012E590(...);extern float D_001E461C,D_001D27B0;func_0012ED20(c,a+12,*b**(float*)(a+32));func_0012E590(c,a);float v=(D_001E461C/ *(float*)(a+32))*d+*b;*b=v;if(v>D_001D27B0)*b=1.0f;}

