/* 11 functions from 0x000461D0 to 0x000471B0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern float D_001D27B8;
extern float D_001D2B64;
int func_00106AC0(...);
int func_00026F50(...);
int func_00026EA0(...);
int __ftol2(float);
void func_00058B80(int, float, void *);
void func_00059630(int, float, void *);
int func_00106830(...);

int func_000461D0(char *param_1, int *param_2)
{
  int func_00106AC0(...);
  int func_00026F50(...);
  int func_00026EA0(...);
  char func_00045A10(...);
  int func_00106210(...);
  int iVar2;
  int a[2];
  int b[2];
  int c[2];
  char *p;
  
  if (*param_1 == '\0') {
    return 3;
  }
  p = param_1 + 4;
  func_00106AC0(p,param_2,a);
  if (a[0] >= 0) {
    iVar2 = *(int *)(param_1 + 0xc) - 1;
    if (a[0] <= iVar2 && a[1] >= 0 && a[1] <= iVar2) {
      iVar2 = func_00026F50(*(int *)(param_1 + 0x28),
                             *(int *)(param_1 + 0xc) * a[1] + a[0],param_1 + 0x118,300);
      if (iVar2 == 0) {
        return 2;
      }
      *(int *)(param_1 + 0x5c8) = func_00026EA0(*(int *)(param_1 + 0x28),param_1 + 0x118,iVar2);
      b[0] = a[0] + *(int *)(p + 0x14);
      b[1] = a[1] + *(int *)(p + 0x18);
      if (func_00045A10(*(int *)(param_1 + 8),b) == 0) {
        func_00106210(p,a,c);
        *(int *)(param_1 + 0x5d4) = c[0];
        *(int *)(param_1 + 0x5dc) = c[1];
        return 0;
      }
      *(int *)(param_1 + 0x5d4) = param_2[0];
      *(int *)(param_1 + 0x5d8) = param_2[1];
      *(int *)(param_1 + 0x5dc) = param_2[2];
      return 0;
    }
  }
  return 1;
}

undefined4 func_00046300(char *param_1, undefined4 *param_2)
{
  int iVar1;
  int pos[2];

  if (*param_1 == '\0') {
    return 3;
  }
  func_00106AC0(param_1 + 4,param_2,pos);
  if (pos[0] >= 0) {
    iVar1 = *(int *)(param_1 + 0xc) - 1;
    if (pos[0] <= iVar1 && pos[1] >= 0 && pos[1] <= iVar1) {
      iVar1 = func_00026F50(*(undefined4 *)(param_1 + 0x28),
                             pos[0] + *(int *)(param_1 + 0xc) * pos[1],param_1 + 0x118,300);
      if (iVar1 == 0) {
        return 2;
      }
      *(int *)(param_1 + 0x5c8) = func_00026EA0(*(undefined4 *)(param_1 + 0x28),param_1 + 0x118,iVar1);
      *(undefined4 *)(param_1 + 0x5d4) = *param_2;
      *(undefined4 *)(param_1 + 0x5d8) = param_2[1];
      *(undefined4 *)(param_1 + 0x5dc) = param_2[2];
      return 0;
    }
  }
  return 1;
}

float func_00131760(void);
double func_00131220(float);
double func_00131210(float);
int func_00046730(char *self, float *target)
{
 extern float D_001D27EC, D_001D27B0;

 int func_00106210(...);
 int index, row, best;
 int *cells;
 unsigned int minbits;
 volatile float radius;
 float scale;
 int pos[2];
 float point[2]; int chosen[3];
 if(!*self)return 3;
 scale=(float)*(int*)(self+12) * *(float*)(*(int*)(self+8)+0x74) * D_001D27EC;
 radius=((double)func_00131760()+D_001D27B0)*(double)scale*(double)D_001D27EC;
 cells=*(int**)(*(int*)(self+40)+4);
 minbits=0x7f7fffff;index=0;row=0;best=-1;
 if(*(int*)(self+12)!=0){
 do{
 int col=0;
 if(*(volatile int*)(self+12)!=0) do {
 if((((unsigned char*)cells)[2]&0x50)==0x50){
 pos[0]=col; pos[1]=row;
 func_00106210(self+4,pos,point);
 double dz=(double)point[1]-target[2], dx=(double)point[0]-target[0];
 float squared=(float)(dz*dz+dx*dx);
 double dist=((double (__cdecl*)(int))func_00131220)(*(int*)&squared);
 float delta=radius-dist;
 if(func_00131210(delta)<*(volatile float*)&minbits){
 *(float*)&minbits=(float)func_00131210(delta);best=index;chosen[0]=*(int*)&point[0];chosen[2]=*(int*)&point[1];
 }
 }
 ++index;++cells;++col;
 }while(col!=*(int*)(self+12));
 ++row;
 }while(row!=*(int*)(self+12));
 if(best!=-1){
 *(int*)(self+0x5d4)=chosen[0];*(int*)(self+0x5dc)=chosen[2];
 int n=func_00026F50(*(int*)(self+40),best,self+0x118,300);
 if(n){*(int*)(self+0x5c8)=func_00026EA0(*(int*)(self+40),self+0x118,n);return 0;}
 }
 }
 return 2;
}

longdouble func_0012E910(float*);
void func_0012EA00(float*);
extern float D_001D27B0;
void func_00046EB0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, float *param_6);
void func_00046EB0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, float *param_6)
{
  // Initialize structure fields (assuming param_1 is the struct pointer 'this')
  *(undefined4 *)(param_1 + 0x5f4) = param_4;
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x5f0) = param_3;
  *(undefined4 *)(param_1 + 0x5ec) = param_2;
  *(undefined4 *)(param_1 + 0x5f8) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x5fc) = 0;
  *(undefined4 *)(param_1 + 0x604) = 0;

  // Calculate local variables (using explicit stack/register handling based on diff analysis)
  float local_8 = *param_6 - *(float *)(param_1 + 0x5d4);
  float local_4 = param_6[2] - *(float *)(param_1 + 0x5dc);
  
  // Call external function and check condition
  longdouble lVar1 = func_0012E910(&local_8);

  if (D_001D27B0 < lVar1) {
    func_0012EA00(&local_8); 
    *(undefined1 *)(param_1 + 0x5e9) = 0;
    *(float *)(param_1 + 0x5e0) = local_8;
    *(float *)(param_1 + 0x5e4) = local_4;
    *(undefined1 *)(param_1 + 0x5e8) = 1;
    return;
  }

  // Else block
  *(undefined4 *)(param_1 + 0x5e4) = 0;
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  *(undefined1 *)(param_1 + 0x5e8) = 0;
  *(undefined1 *)(param_1 + 0x5e9) = 0;
  return;
}

void func_00046F90(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, float param_5, undefined4 *param_6)
{
  *(undefined4 *)(param_1 + 0x5f4) = param_4;
  *(undefined4 *)(param_1 + 0x5f0) = param_3;
  *(undefined4 *)(param_1 + 0x5ec) = param_2;
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0xbf800000;
  if (param_5 == D_001D27B8) {
    *(undefined4 *)(param_1 + 0x5f8) = 0x3f000000;
  }
  else {
    *(float *)(param_1 + 0x5f8) = param_5;
  }
  *(undefined4 *)(param_1 + 0x5fc) = 0;
  *(undefined4 *)(param_1 + 0x604) = 0;
  if (param_6 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x5e0) = *param_6;
    *(undefined4 *)(param_1 + 0x5e4) = param_6[1];
    *(undefined1 *)(param_1 + 0x5e8) = 1;
    *(undefined1 *)(param_1 + 0x5e9) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x5e4) = 0;
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  *(undefined1 *)(param_1 + 0x5e8) = 0;
  *(undefined1 *)(param_1 + 0x5e9) = 0;
}

void func_00047040(int param_1)
{
  *(undefined4 *)(param_1 + 0x604) = 2;
  return;
}

bool func_00047050(int param_1, int param_2)
{
  int iVar2;
  int i;
  int local_30[3];
  float local_24[6];
  int local_c;
  int local_8;

  iVar2 = __ftol2(*(float *)(param_2 + 0x1c) / *(float *)(param_1 + 0x74) * D_001D2B64);
  for (i = 0; i != iVar2; i++) {
    func_00058B80(param_2,(float)i / (float)iVar2,local_24);
    local_30[0] = local_c;
    local_30[1] = 0;
    local_30[2] = local_8;
    int r = func_00106830(param_1,local_30);
    if (r == -1 || (*(unsigned char *)(r + *(int *)(param_1 + 0xc4)) & 3) != 3) {
      return 0;
    }
  }
  return 1;
}

undefined4 func_00047100(int param_1, int param_2)
{
  int __ftol2(...);
  int func_00059630(...);
  int func_00106830(...);
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [24];
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = param_2;
  iVar2 = __ftol2();
  param_2 = 0;
  if (iVar2 != 0) {
    do {
      func_00059630(uVar1,(float)param_2 / (float)iVar2,local_24);
      local_30 = local_c;
      local_2c = 0;
      local_28 = local_8;
      iVar3 = func_00106830(param_1,&local_30);
      if ((iVar3 == -1) || ((*(byte *)(iVar3 + *(int *)(param_1 + 0xc4)) & 3) != 3)) {
        return 0;
      }
      param_2 = param_2 + 1;
    } while (param_2 != iVar2);
  }
  return 1;
}

