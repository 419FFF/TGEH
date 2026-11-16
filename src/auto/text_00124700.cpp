/* 32 functions from 0x00124700 to 0x0012555E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00124A10(void){extern unsigned int D_00331518,D_00331508,D_00331500,D_00331178,D_00331370[],D_00331520; extern float D_001E7D60,D_001D27FC; int func_0013E3F4(void); void func_001383B0(void); void func_00138440(int); void func_00138490(int); void func_0012F120(void*); void func_001364D0(void*); void func_00136FF0(int); void func_00123F90(int); void func_00137030(void); unsigned char temp[64]; if(D_00331518){func_001383B0();func_00138440(0);func_00138490(0);func_0012F120(temp);func_001364D0(temp);} D_00331500=D_00331518;D_00331178=D_00331508; func_00136FF0(func_0013E3F4()); for(unsigned i=0;i<D_00331518;i++){int p=D_00331370[i];func_00123F90(p);*(unsigned*)(p+8)=D_00331520;}func_00137030();D_00331520++;}

void func_00124AD0(void){extern unsigned D_00331508,D_00331518; extern int D_003311D8[]; void func_00133BB0(int); void func_00116FB0(int); for(unsigned i=0;i<D_00331508;i++){int p=D_003311D8[i];if(*(int*)(p+0x70))func_00116FB0(*(int*)(p+0x70));func_00133BB0(*(int*)(p+0xc));*(int*)(p+0xc)=0;func_00116FB0(p);}D_00331508=0;D_00331518=0;}

void func_00124B30(int a,int b,int c,unsigned short d){int func_00116A90(int,int,int); unsigned char *p=(unsigned char*)func_00116A90(0x38,1,1);*(int*)p=a;*(int*)(p+4)=b;*(int*)(p+8)=c;*(unsigned short*)(p+0x10)=d;*(unsigned*)(p+0xc)=0x3f800000; p[0x13]=4;*(unsigned*)(p+0x34)=0xbf800000;}

void func_00124B70(int p) { extern unsigned int D_00331508; extern int D_003311D8[]; int func_00116FB0(...); unsigned int i; int q; for(i=0;i<D_00331508;i++){ q=D_003311D8[i]; if(*(int *)(q+0x54)==p) *(int *)(q+0x54)=0; } func_00116FB0(p); }

void func_00124BE0(int param_1, float param_2)
{
  *(float *)(param_1 + 0xc) = param_2;
  *(unsigned char *)(param_1 + 0x12) = 1;
}

void func_00124DC0(undefined4 *param_1)
{
  int func_00116A90(...);
  undefined4 uVar1;
  
  uVar1 = func_00116A90(0xc,1,1);
  *param_1 = uVar1;
  return;
}

void func_00124DE0(undefined4 *param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  undefined4 uVar1;
  
  uVar1 = func_0013E9DB(*param_2);
  *param_1 = uVar1;
  return;
}

void func_00124E00(int p, unsigned int *v) { int func_0013E9DB(...); int func_00116A90(...); int n=func_0013E9DB(*v); int q=func_00116A90(n*4,1,1); *(int *)(p+8)=q; *(int *)(p+4)=0; }

unsigned int _func_00124E90(unsigned int param_1) { int _func_00131A10(...); int _func_00125E80(...); unsigned int local; if (!_func_00131A10(param_1)) return 0; _func_00125E80(param_1,&local); return local; }

void func_00124F00(void) {
    extern int D_00331528;
    int func_00115DE0(...);
    func_00115DE0(D_00331528, 28);
}

int func_00124F20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  int func_00115E10(...);
  int func_0011BF40(...);
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_00115E10(param_1,0x34);
  uVar2 = func_0011BF40(param_2,param_3);
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  return iVar1;
}

unsigned char _func_00124F50(int p) { int _func_0011BDD0(...); int obj=*(int *)(p+0x30); if (_func_0011BDD0(obj,0)) { --*(short *)(obj+0x2a); return 1; } return 0; }

int func_0011B990(int); void func_00125020(int *a0) { func_0011B990(a0[12]); }

void func_00125440(undefined4 param_1, short *param_2)
{
  int func_00129C90(...);
  int func_00116FB0(...);
  if (*param_2 == 0) {
    func_00129C90(*(undefined4 *)(param_2 + 2));
    func_00116FB0(*(undefined4 *)(param_2 + 4));
  }
  func_00116FB0(param_2);
  return;
}

void func_00125470(void) {
    extern int D_00331530;
    int func_00115DE0(...);
    func_00115DE0(D_00331530, 32);
}

void func_00125500(int *p) { int func_0011BAE0(...); int func_0011B990(...); if (*(unsigned char *)(p+5)&1) func_0011BAE0(*(int *)(p+0x30)); else func_0011B990(*(int *)(p+0x30)); }

void *_func_00125530(int *p){extern int _func_0011BDD0(...);extern unsigned short D_0000FFFF;int x=_func_0011BDD0(*(int*)((char*)p+0x30),0);if(x){unsigned short v=*(unsigned short*)((char*)x+2);(*(unsigned short*)((char*)*(int*)((char*)p+0x30)+0x2a))--;return (void*)(unsigned)(v-1);}return &D_0000FFFF;}

