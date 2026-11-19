/* 10 functions from 0x000DA370 to 0x000DB0CF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct S_000DA370 {
  float unk_0x0, f4, f8, fc;
  float x10, x14;
  float t18;
  float samples[16];
  char idx;
};

void func_000DA370(void)
{
  extern int D_00307D08, D_00313B34, D_00313AD0, D_0031E514;
  extern float D_00307DB4, D_001D27B8, D_001D6744, D_001D2BB4, D_001D28C0;
  float func_00131610(int, int);
  float func_000DA320(float, float);
  int iVar4 = D_0031E514;
  int uVar1 = *(int *)(*(int *)(D_00307D08 + 0x10) + D_00313B34 * 0x18);
  int uVar2 = *(int *)(*(int *)(D_00307D08 + 0x10) + D_00313AD0 * 0x18);
  float a = func_00131610(*(int *)(iVar4 + 0x920), *(int *)(iVar4 + 0x924));
  float b = func_00131610(uVar1, uVar2);
  float r = func_000DA320(a, b);
  float dt = D_00307DB4 - *(float *)(iVar4 + 0x928);
  float s;
  float *p;
  int i;
  if (dt <= D_001D27B8) {
    r = 0.0f;
  } else {
    r = r / dt;
  }
  *(float *)(iVar4 + 0x92c + *(char *)(iVar4 + 0x96c) * 4) = r;
  *(char *)(iVar4 + 0x96c) = (char)((*(char *)(iVar4 + 0x96c) + 1) % 16);
  s = 0.0f;
  p = (float *)(iVar4 + 0x92c);
  i = 16;
  do {
    s = s + *p;
    p++;
    i--;
  } while (i != 0);
  s = s * D_001D6744;
  *(int *)(iVar4 + 0x920) = uVar1;
  *(int *)(iVar4 + 0x924) = uVar2;
  *(float *)(iVar4 + 0x914) = s;
  s = s * D_001D2BB4;
  *(float *)(iVar4 + 0x928) = D_00307DB4;
  *(float *)(iVar4 + 0x918) = s;
  *(float *)(iVar4 + 0x91c) = s * D_001D28C0;
}

void func_000DA480(void)
{
  extern undefined4 D_0031E514;
  int func_0012FD80(...);
  int func_000D5170(...);
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = D_0031E514;
  iVar3 = D_0031E514 + 0xb0;
  func_0012FD80(iVar3,*(undefined4 *)(D_0031E514 + 0x918));
  func_000D5170(iVar3,*(undefined4 *)(iVar1 + 0xa4));
  iVar3 = iVar1 + 0x140;
  iVar2 = 5;
  do {
    func_0012FD80(iVar3,*(undefined4 *)(iVar1 + 0x91c));
    func_000D5170(iVar3,*(undefined4 *)(iVar3 + -0xc));
    iVar3 = iVar3 + 0x90;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

void func_000DA4E0(void) {
 int func_000A2780(...); int func_000A30A0(...);
 extern int D_0031E514,D_003080AC; extern float D_001D2BF4,D_001DB3CC,D_001DB3C8;
 int self=D_0031E514;
 func_000A2780(0x3a,1,*(int *)(self+0xc08));
 if(D_003080AC!=2) {
   double delta=(double)*(float *)(self+0xbf0)-(double)*(float *)(self+0xbf4);
   if(delta>(double)D_001D2BF4) *(float *)(self+0xbf4)=*(float *)(self+0xbf0);
   else *(float *)(self+0xbf4)=(float)((double)*(float *)(self+0xbf4)+(double)D_001D2BF4);
   double v=(double)*(float *)(self+0xbf4)/(double)*(float *)(self+8);
   float result=(float)(v*(double)D_001DB3CC+(double)D_001DB3C8);
   func_000A30A0(self+0x9ec,result);
 }
}

extern int _D_001D8018;
extern int _D_0031E510;
extern int func_0009C590(int);
extern void func_0009D280(int);
extern void func_0009D780(int);
extern void func_0009D8D0(int);
extern void func_0009D9E0(int);
extern int _D_001D8018; extern int _D_0031E510; extern int func_0009C590(int); extern void func_0009D280(int); extern void func_0009D780(int); extern void func_0009D8D0(int); extern void func_0009D9E0(int); void func_000DA800(void){volatile int marker=0; _D_0031E510=0;func_0009D280(func_0009C590(_D_001D8018));func_0009D780(func_0009C590(_D_001D8018));func_0009D8D0(func_0009C590(_D_001D8018));func_0009D9E0(func_0009C590(_D_001D8018));}

void func_000DAFF0(void) {
 int func_0012F120(...); int func_00011CB0(...); int func_0012E760(...); int func_0012F7A0(...); int func_00011E30(...); int func_001105E0(...);
 extern int D_0031E514,D_00313B60; extern float D_001D3AE4;
 char local_50[0x4c], local_90[0x30]; float local_ac[3]; float local_9c[3];
 int self=D_0031E514;
 func_0012F120(local_50);
 func_00011CB0(local_90,self+0x20);
 func_0012E760(local_ac);
 ((int *)local_ac)[1]=0x430c0000;
 func_0012F7A0(local_ac,local_90);
 ((int *)local_50)[0x18/4]=((int *)local_ac)[0];
 ((int *)local_50)[0x1c/4]=((int *)local_ac)[1];
 ((int *)local_50)[0x20/4]=((int *)local_ac)[2];
 local_9c[0]=*(float *)(*(int *)(self+0x14)+0x18)+D_001D3AE4;
 local_9c[1]=1.5707964f; local_9c[2]=1.5707964f;
 func_00011E30(local_90,local_50,local_9c);
 func_001105E0(D_00313B60,local_50,1);
}

void func_000DB0B0(void) {
    extern char D_0031E6B0;
    extern char D_0031E6B1;
    D_0031E6B0 = 0;
    D_0031E6B1 = 0;
}

void func_000DB0C0(void) {
    extern int D_003080AC;
    extern void func_000DA4E0(void);
    if (D_003080AC != 2) {
        func_000DA4E0();
    }
}

