/* 14 functions from 0x00125560 to 0x0012632D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00125B00(void) {
 extern int D_00331538,D_00331530,D_00331534; extern char D_001DC790,D_001DF6C8,D_001DF208,D_001DC8A4,D_001DF6C0;
 int func_00125560(...),func_00125530(...),func_00125500(...),func_00125440(...),func_00125350(...),func_00125160(...),func_00125120(...),func_00125250(...),func_001252B0(...),func_00125310(...);
 int func_00115D60(...),func_0011B5C0(...),func_00125BC0(...),func_00125D20(...);
 if(D_00331538==0) { int local[6]={0,(int)func_00125560,0,(int)func_00125530,(int)func_00125500,0};
 D_00331530=func_00115D60(local);
 func_0011B5C0(&D_001DC790,func_00125350,func_00125440);
 D_00331534=func_00125BC0(0,&D_001DF6C8,func_00125120,func_00125160);
 func_00125D20(D_00331534,&D_001DF208,func_00125250);
 func_00125D20(D_00331534,&D_001DC8A4,func_001252B0);
 func_00125D20(D_00331534,&D_001DF6C0,func_00125310);
 } ++D_00331538;
}

undefined4 func_00125CA0(int param_1, undefined4 param_2)
{
  int func_0011B4F0(...);
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar1 = func_0011B4F0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar2 * 4),param_2);
      if (iVar1 == 0) {
        return *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x48));
  }
  return 0;
}

unsigned int func_00125CE0(int param_1,unsigned int param_2) {
 int func_0011B4F0(...); int iVar1,iVar2=0;
 if(0<*(int*)(param_1+0x50)) do {
 iVar1=func_0011B4F0(*(int*)(*(int*)(param_1+0x54)+iVar2*4),param_2);
 if(iVar1==0)return *(unsigned int*)(*(int*)(param_1+0x54)+iVar2*4);
 iVar2++;
 } while(iVar2<*(int*)(param_1+0x50));
 return 0;
}

void func_00125D20(int p,char *name,int arg) {
 int func_00116E50(...),func_00116A90(...);
 unsigned int n=*(unsigned int*)(p+0x50);
 if((n&15)==0) *(int*)(p+0x54)=func_00116E50(*(int*)(p+0x54),n*4+0x40,1,1);
 int s=func_00116A90(0x44,1,1); *(int*)(*(int*)(p+0x54)+n*4)=s;
 int d=s-(int)name; char c; do { c=*name; *(char*)(d+(int)name)=c; name++; } while(c);
 *(int*)(s+0x40)=arg; *(int*)(p+0x50)=n+1;
}

undefined4 * func_00126120(undefined4 param_1)
{
  int func_00117100(...);
  int func_00116A90(...);
  int func_00131C80(...);
  int func_00117130(...);
  int func_00131EB0(...);
  undefined4 *puVar1;
  undefined4 uVar2;
  
  func_00117100();
  puVar1 = (undefined4 *)func_00116A90(0x20,1,1);
  uVar2 = func_00131C80(param_1,0);
  *puVar1 = uVar2;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  puVar1[7] = 0;
  func_00117130();
  func_00131EB0(*puVar1,0xc,0);
  return puVar1;
}

void func_00126170(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}

int func_00126180(int *p) {
 int func_00131D60(...),func_00116FB0(...),func_00117100(...),func_00117130(...),func_00116A90(...);
 int result=0;
 if(p[2]==0) { func_00131D60(p[0],&p[1],4); func_00131D60(p[0],&p[3],4); func_00117100(); p[2]=func_00116A90(p[1]<<2,1,0); func_00131D60(p[0],p[2],p[1]<<2); func_00117130(); p[4]=func_00116A90(p[3],1,0); func_00131D60(p[0],p[4],p[3]); }
 unsigned int ecx=*(unsigned int*)(p[2]+p[5]*4); int edi=0;
 if(ecx>0) edi=p[6]+p[4];
 unsigned int eax=p[5]+1; p[6]+=ecx; p[5]=eax;
 if(eax==(unsigned int)p[1]) { func_00116FB0(p[2]); p[2]=0;p[5]=0;p[6]=0;p[3]=0;p[1]=0; }
 return edi;
}

int func_00126240(int *p, int param_2) {
 int func_00131D60(...),func_00116FB0(...),func_00117100(...),func_00117130(...),func_00116A90(...);
 int result=0;
 if(p[2]==0) { func_00131D60(p[0],&p[1],4); func_00131D60(p[0],&p[3],4); func_00117100(); p[2]=func_00116A90(p[1]<<2,1,0); func_00131D60(p[0],p[2],p[1]<<2); func_00117130(); p[4]=func_00116A90(p[3],param_2,0); func_00131D60(p[0],p[4],p[3]); }
 unsigned int ecx=*(unsigned int*)(p[2]+p[5]*4); int edi=0;
 if(ecx>0) edi=p[6]+p[4];
 unsigned int eax=p[5]+1; p[6]+=ecx; p[5]=eax;
 if(eax==(unsigned int)p[1]) { func_00116FB0(p[2]); p[2]=0;p[5]=0;p[6]=0;p[3]=0;p[1]=0; }
 return edi;
}

void func_00126300(undefined4 *param_1)
{
  int func_00131D10(...);
  func_00131D10(*param_1);
  func_00131D10(param_1);
  return;
}

void func_00126320(void) {
    extern int D_00331540;
    extern int D_00331544;
    D_00331540 = 0;
    D_00331544 = 0;
}
