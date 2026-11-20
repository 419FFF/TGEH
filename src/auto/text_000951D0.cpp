/* 16 functions from 0x000951D0 to 0x00096088, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

void _func_000955D0(void)
{
  extern int D_001D71F8;
  int _func_0011D000(int, int);
  int _func_0011D270(int, int);
  int _func_0011D290(int, int);
  int _func_0011D2B0(int, int);
  int _func_000951D0(void);
  int _func_0007FC90(void);
  int _func_00085E20(void);
  int _func_000688D0(void);
  _func_0011D000((int)&D_001D71F8, (int)_func_000951D0);
  _func_0011D270((int)&D_001D71F8, (int)_func_0007FC90);
  _func_0011D290((int)&D_001D71F8, (int)_func_00085E20);
  _func_0011D2B0((int)&D_001D71F8, (int)_func_000688D0);
}

void func_00095610(void) {
    extern int D_001D71F8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D71F8);
}

void _func_00095620(void) { extern int D_00307BF0,D_00307BF8,D_00307BEC,D_00307BF4; D_00307BF0=0U; D_00307BF8=0U; D_00307BEC=0U; *(volatile unsigned*)(&D_00307BF4)=0xbf800000U; }

void func_00095650(int a0, int a1) {
    extern int D_00307BF0;
    extern int D_00307BF8;
    D_00307BF0 = a0;
    D_00307BF8 = a1;
}

#pragma optimize("y", on)
float* _func_00095670(void)
{
  extern float D_00307BF4, D_001D27B8, D_0032923C, D_001D28E4, D_00307BEC, D_001D27B0, D_00307BF8, D_001D4270, D_001D2BF4, D_001D2868, D_001D29E0, D_00307BFC, D_00307C00;
  extern int D_00307BF0;
  float func_00131230(float);
  float func_00131250(float);
  float fVar1, local_4;
  if (D_00307BF4 >= D_001D27B8) {
    fVar1 = D_0032923C - D_00307BF4;
    D_00307BF4 = D_0032923C;
  } else {
    fVar1 = D_001D27B8;
    D_00307BF4 = D_0032923C;
  }
  D_00307BEC = fVar1 * D_001D28E4 + D_00307BEC;
  while (D_00307BEC > D_001D27B0) {
    D_00307BEC = D_00307BEC - D_001D27B0;
  }
  if (D_00307BF0 == 1) {
    local_4 = 1.0f;
    if (D_00307BF8 < D_001D4270) {
      local_4 = D_00307BF8;
      local_4 *= D_001D2BF4;
    }
    D_00307BFC = (D_001D27B0 + D_001D29E0 * (func_00131230(D_00307BEC * D_001D2868) * local_4));
    D_00307C00 = (D_001D27B0 + D_001D29E0 * (func_00131250(D_00307BEC * D_001D2868) * local_4));
    return &D_00307BFC;
  }
  D_00307BFC = 1.0f;
  D_00307C00 = 1.0f;
  return &D_00307BFC;
}
#pragma optimize("", on)
unsigned char func_000957A0(unsigned int param_1) { extern unsigned int D_00307C04,D_00307C08; int func_00116E50(int,int,int,int); if ((D_00307C04&0x3f)==0) D_00307C08=func_00116E50(D_00307C08,D_00307C04*4+0x100,1,1); *(unsigned int*)(D_00307C08+D_00307C04*4)=param_1; D_00307C04++; return 1; }

int func_000959D0(int param_1, undefined4 param_2)
{
  int func_0011B4F0(int, undefined4);
  undefined4 *puVar1;
  int iVar2;
  
  if (((*(byte *)(param_1 + 0x20) & 8) != 0) &&
     (iVar2 = func_0011B4F0(*(undefined4 *)(param_1 + 0x38),param_2), iVar2 == 0)) {
    return param_1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (((*(byte *)((int)puVar1 + 6) & 1) == 0) &&
       (iVar2 = func_000959D0(*puVar1,param_2), iVar2 != 0)) break;
    puVar1 = (undefined4 *)puVar1[3];
  }
  return iVar2;
}

#pragma optimize("y", off)
void _func_00095A30(int p) { unsigned char *s=(unsigned char*)p; extern int D_00325314[]; int _func_0011FED0(int,char*); if(D_00325314[s[0x22]*7] && !(s[0x20]&1)){ char b[0x4c]; _func_0011FED0(p,b+0x10); ((void (*)(int,char*,int))D_00325314[s[0x22]*7])(p,b+0x14,0); } int n=*(int*)(s+0x28); while(n){ if(!(*(unsigned char*)(n+6)&1)) _func_00095A30(*(int*)n); n=*(int*)(n+0xc); } }
#pragma optimize("", on)
void _func_00095AA0(int p) {
 unsigned char *s=(unsigned char*)p; extern int D_00325314[]; extern int D_003268B0;
 int i=s[0x22]; int _func_0011BDD0(int,int);
 if(D_00325314[i*7] && !(s[0x20]&1) && i==D_003268B0) {
  int a=_func_0011BDD0(*(int*)(s+0xe0),0);
  if(a) {
   unsigned short count=*(unsigned short*)(a+4);
   if(count) { int j=0; do { int c=*(int*)(a+8)+j*0x30+0x28; if(*(int*)c) *(int*)(*(int*)c+0x54)=0; j++; } while(j<count); }
   (*(unsigned short*)(*(int*)(s+0xe0)+0x2a))--;
  }
 }
 int n=*(int*)(s+0x28); while(n){ if(!(*(unsigned char*)(n+6)&1)) _func_00095AA0(*(int*)n); n=*(int*)(n+0xc); }
}

#pragma optimize("y", off)
void _func_00095B30(int p) {
 unsigned char *s=(unsigned char*)p; extern int D_00325314[]; extern int D_003268B0;
 int i=s[0x22]; int _func_0011BDD0(int,int); int _func_0011FED0(int,char*);
 char b[0x40]; int sa[32]; int sb[32];
 if(D_00325314[i*7] && !(s[0x20]&1) && i==D_003268B0) {
  int a=_func_0011BDD0(*(int*)(s+0xe0),0);
  if(a) {
   unsigned int j; int k=0;
   for(j=0;j<*(unsigned short*)(a+4);j++) {
    int c=*(int*)(*(int*)(a+8)+j*0x30+0x28);
    if(c) { sa[k]=*(int*)(c+0x54); *(int*)(c+0x54)=0; sb[k]=*(int*)(c+0x10); *(int*)(*(int*)(*(int*)(a+8)+j*0x30+0x28)+0x10)=2; k++; }
   }
   (*(unsigned short*)(*(int*)(s+0xe0)+0x2a))--;
  }
  _func_0011FED0(p,b);
  ((void (*)(int,char*,int))D_00325314[s[0x22]*7])(p,b,0);
  if(a) {
   unsigned int j; int k=0;
   for(j=0;j<*(unsigned short*)(a+4);j++) {
    int c=*(int*)(*(int*)(a+8)+j*0x30+0x28);
    if(c) { *(int*)(c+0x54)=sa[k]; *(int*)(*(int*)(*(int*)(a+8)+j*0x30+0x28)+0x10)=sb[k]; k++; }
   }
  }
 }
 int n=*(int*)(s+0x28); while(n){ if(!(*(unsigned char*)(n+6)&1)) _func_00095B30(*(int*)n); n=*(int*)(n+0xc); }
}
#pragma optimize("", on)
void func_00095C80(void) {
    int func_00131230(...);
    func_00131230();
}

int _func_00095C90(float *p) {
 extern struct { float *items; int pad; int count; } *D_00307C0C; extern float D_001D333C;
 int i=0; float *q=D_00307C0C->items;
 while(i<D_00307C0C->count) {
  if(!(q[0]-p[0] > D_001D333C || q[0]-p[0] < -D_001D333C) &&
     !(q[1]-p[1] > D_001D333C || q[1]-p[1] < -D_001D333C) &&
     !(q[2]-p[2] > D_001D333C || q[2]-p[2] < -D_001D333C)) return i;
  q=(float*)((char*)q+0x30); ++i;
 }
 return -1;
}

