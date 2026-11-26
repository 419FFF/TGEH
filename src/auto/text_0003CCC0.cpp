/* 5 functions from 0x0003CCC0 to 0x0003DA56, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
extern undefined4 D_00307DF8;
extern undefined4 D_00307CFC;
extern undefined D_001E3A74;
extern undefined1 D_002EDCD0;
extern undefined4 D_002EE840;
extern undefined4 D_00325160;
extern undefined4 D_00325218;
extern undefined4 D_00325184;
int func_000A2BE0(...);
char func_00104600(...);
int func_00101270(...);
int func_000A2990(...);
char func_001074C0(...);
int func_00107BF0(...);
int func_00101360(...);
void func_0003CCC0(undefined4 param_1, undefined4 *param_2) { if(D_00307DF8==D_00307CFC) { param_2[199]=0x3e800000; func_000A2BE0(0x3e800000); *param_2=0x3f; param_2[0xc5]=0; if(!func_00104600()) func_00101270(0,0,&D_001E3A74); func_000A2990(1); unsigned u=0; D_002EDCD0=1; D_002EE840=1; if(D_00325160) do { int x=*(int*)(D_00325218+u*4); if(*(unsigned short*)(x+2)==D_00325184) { if(*(int*)(x+0x14)) { if(!func_001074C0(param_1,x)) goto done; x=*(int*)(D_00325218+u*4); } func_00107BF0(x,0); } done: ++u; } while(u<D_00325160); } func_00101360(); }

void _func_0003D4F0(char *obj, char *s)
{
  int func_0009C7A0(...); void func_000A22B0(...);
  float func_0012E910(...); void func_0012EC80(int*, float);
  extern char D_001D3FF0, D_001D47F0, D_001D47D8, D_001D47C0, D_001D47A8;
  extern float D_001D27B0, D_00307DB4, D_001D2808;
  extern int D_002EE848, D_002EE84C, D_002EE850;
  int func_001031C0(...), func_00103210(...);
  void func_00103160(...), func_001031A0(...), func_00103990(...);
  int *p = (int*)func_0009C7A0(obj,&D_001D3FF0,0);
  func_000A22B0(obj+0x64,2,p[0],p[1],p[2],0x3e4ccccd);
  int *q=(int*)(s+0x310);
  int a=*(int*)(s+0x98); int b=*(int*)(s+0xa0); *(int*)(s+0x310)=a; *(int*)(s+0x314)=b;
  float f=func_0012E910(q);
  *(float*)(s+0x318)=f;
  func_0012EC80(q,D_001D27B0/f);
  s[0x31c]=0; *(int*)(s+0x1e0)=0; *(int*)(s+0x1e4)=0x3e4ccccd;
  *(int*)(s+0x134)=*(int*)(obj+0xf4);
  *(int*)(s+0x138)=*(int*)(obj+0xf8);
  *(int*)(s+0x13c)=*(int*)(obj+0xfc);
  *(int*)(s+0x140)=D_002EE848;
  *(int*)(s+0x144)=D_002EE84C;
  *(int*)(s+0x148)=D_002EE850;
  s[0x1ae]=0;
  *(int*)(s+0x320)=func_001031C0(D_00307DF8,&D_001D47F0);
  *(float*)(s+0x334)=(float)((long double)D_00307DB4+(long double)D_001D2808);
  *(int*)(s+0x324)=func_00103210(&D_001D47D8);
  *(int*)(s+0x328)=func_00103210(&D_001D47C0);
  *(int*)(s+0x32c)=func_00103210(&D_001D47A8);
  func_00103160(*(int*)(s+0x324),0x3f800000);
  func_00103160(*(int*)(s+0x328),0x3f866666);
  func_00103160(*(int*)(s+0x32c),0x3f733333);
  func_001031A0(*(int*)(s+0x324),0x3f800000+0);
  func_001031A0(*(int*)(s+0x328),0x3f000000);
  func_001031A0(*(int*)(s+0x32c),0x3e800000);
  func_00103990(*(int*)(s+0x324),0);
  func_00103990(*(int*)(s+0x328),0);
  func_00103990(*(int*)(s+0x32c),0);
}

void _func_0003D8E0(char *obj, char *s)
{
  extern float D_002EE848, D_002EE850, D_001D3E00, D_001D2B64;
  extern int D_00307DB4;
  extern char D_001D3CC4, D_00307CF8;
  extern char D_0000FFFF;
  char *func_0009CC90(...);
  int func_0002D030(...);
  int func_0002CF30(...);
  int func_000A1E60(...);
  int func_000A1D10(...);
  int func_0002E990(...);
  *(float *)(s + 0x90) = D_002EE848 * D_001D3E00 + D_001D2B64;
  *(float *)(s + 0x94) = D_002EE850 * D_001D3E00 + D_001D2B64;
  char *t = func_0009CC90(obj, &D_001D3CC4);
  *(float *)(s + 0x134) = *(float *)(obj + 0xf4);
  *(float *)(s + 0x138) = *(float *)(obj + 0xf8);
  *(float *)(s + 0x13c) = *(float *)(obj + 0xfc);
  *(float *)(s + 0x140) = *(float *)(t + 0x54);
  *(float *)(s + 0x144) = *(float *)(t + 0x58);
  *(float *)(s + 0x148) = *(float *)(t + 0x5c);
  *(int *)(s + 0x1e0) = 0;
  *(int *)(s + 0x1e4) = 0x3dcccccd;
  s[0x1ae] = 0;
  s[0x310] = 1;
  *(int *)(s + 0x178) = 0;
  *(int *)(s + 0x170) = 0;
  *(int *)(s + 0x174) = -1;
  *(int *)(s + 0x1b8) = -1;
  *(int *)(s + 0x194) = D_00307DB4;
  s[0x354] = 1;
  *(int *)(s + 0xa0) = 0;
  *(int *)(s + 0x98) = 0;
  *(int *)(s + 0x358) = 0x3f800000;
  *(int *)(s + 0x35c) = 0xbf800000;
  *(int *)(s + 0x364) = 0;
  s[0x1a3] = 0;
  s[0x1a4] = 0;
  *(int *)(s + 0x1c0) = 0;
  func_0002D030(obj);
  func_0002CF30(obj);
  *(int *)s = 0x4b;
  func_000A1E60(*(int *)(s + 0x270));
  func_000A1D10(*(int *)(s + 0x26c), 1, 0, &D_0000FFFF, 0x41c00000, 0);
  D_002EDCD0 = 1;
  D_00307CF8 = 1;
  func_0002E990(obj, 1);
}

