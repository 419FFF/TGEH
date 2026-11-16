/* 14 functions from 0x00125560 to 0x0012632D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

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
 int func_00116E50(...); int func_00116A90(...);
 if((*(unsigned int*)(p+0x50)&0xf)==0)
 *(int*)(p+0x54)=func_00116E50(*(int*)(p+0x54),*(unsigned int*)(p+0x50)*4+0x40,1,1);
 int s=func_00116A90(0x44,1,1);
 *(int*)(*(int*)(p+0x54)+*(int*)(p+0x50)*4)=s;
 int delta=s-(int)name;
 do { char c=*name; name++; *(char*)(delta+(int)name-1)=c; } while(*name);
 *(int*)(s+0x40)=arg; ++*(int*)(p+0x50);
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
 if(p[2]==0) {
 func_00131D60(p[0],&p[1],4); func_00131D60(p[0],&p[3],4); func_00117100();
 p[2]=func_00116A90(p[1]<<2,1,0); func_00131D60(p[0],p[2],p[1]<<2); func_00117130();
 p[4]=func_00116A90(p[3],1,0); func_00131D60(p[0],p[4],p[3]);
 }
 int ecx=*(int*)(p[2]+p[5]*4); int edi=0;
 if(ecx>0) edi=p[6]+p[4];
 int ebx=p[6]+ecx; int eax=p[5]+1; p[6]=ebx; p[5]=eax;
 if(eax==p[1]) { func_00116FB0(p[2]); p[2]=0;p[5]=0;p[6]=0;p[3]=0;p[1]=0; }
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
