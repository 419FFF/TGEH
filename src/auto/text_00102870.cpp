/* 27 functions from 0x00102870 to 0x001034C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_00102A20(int p) { int func_00110060(...); int func_001105E0(...); __declspec(align(16)) unsigned char b[0x5c]; int obj=*(int*)(p+0xb8); if(obj){func_00110060(obj,b+0x10); *(int*)(b+0x48)=*(int*)(p+0xe4); *(int*)(b+0x50)=*(int*)(p+0xe8); *(int*)(b+0x5c)=*(int*)(p+0xec); func_001105E0(obj,b+0x1c,0);} }

void _func_00102C50(int p) { int func_00131230(...); extern int D_00324D2C; extern float D_001DE730,D_001D27B0; int edx=*(int*)(p+0xe0); int ecx=*(int*)(p+0x78); int delta=D_00324D2C-edx; float t=func_00131230((float)delta * *(float*)(ecx+0x7c) * D_001DE730); *(float*)(p+0x9c)=t**(float*)(ecx+0x80)+D_001D27B0; *(float*)(p+0xac)=t**(float*)(ecx+0x84)+D_001D27B0; }

void _func_00102DB0(int p,char flag) { extern char D_001E5EC9; int func_00128C50(...); int func_00128BE0(...); if(!D_001E5EC9)return; int obj=*(int*)(p+0xb8); if(!obj)return; unsigned short v=*(unsigned short*)(p+0xb6); unsigned char dl=(unsigned char)v; dl>>=5; if(dl&1)return; unsigned char al=(unsigned char)v; al>>=4; if(al&1)return; if(!*(unsigned char*)(p+0xb4))return; int state; if(flag)state=func_00128C50(obj); else state=func_00128C50(obj); if(flag){if(state==2)func_00128BE0(obj,1);}else if(state==1)func_00128BE0(obj,0); }

void _func_00102E40(void *arg) {
extern void *_D_00324BCC; void _func_00102DB0(void*,void*);
void *it=_D_00324BCC;
while(it){void *obj=((void**)it)[1];void *v=*(void**)((char*)obj+0x78);if(!v || ((*(unsigned char*)((char*)v+0x32)>>5)&1)==0)_func_00102DB0(*(void**)((char*)it+4),arg);it=*(void**)it;}
}

void _func_00102E80(void *p) {
extern char _D_001E5EC9;void _func_0011C3E0(void*);void _func_00128C00(void*);
if(!_D_001E5EC9||!p)return;
int a=*(int*)((char*)p+0x88);int b=*(int*)((char*)p+0x8c);
if(a){*(int*)((char*)p+0x8c)=0;}else if(b){_func_0011C3E0((char*)p+0x88);*(int*)((char*)p+0x8c)=0;}
void*q=*(void**)((char*)p+0xb8);*(int*)((char*)p+0x88)=0;if(q)_func_00128C00(q);
}

void _func_00102EE0(void *p) {
char __cdecl _func_00102810(void*);
extern volatile float _D_001D2B60,_D_001D27B0,_D_001D27B8;
if(_func_00102810(p)){float f=*(float*)((char*)p+0xa0)+_D_001D2B60;*(float*)((char*)p+0xa0)=f;if(_D_001D27B0<=f)*(int*)((char*)p+0xa0)=0x3f800000;}
else{float f=*(float*)((char*)p+0xa0)-_D_001D2B60;*(float*)((char*)p+0xa0)=f;if(f<=_D_001D27B8)*(int*)((char*)p+0xa0)=0;}
}

void _func_00103160(int p,int value) { extern char D_001E5EC9; if(D_001E5EC9 && p) *(int*)(p+0x98)=value; }

void func_00103180(int param_1, undefined4 param_2)
{
  extern undefined D_001E5EC9;
  if (D_001E5EC9 != '\0') {
    *(undefined4 *)(param_1 + 0xf0) = param_2;
  }
  return;
}

void _func_001031A0(void *p,int value) { extern char _D_001E5EC9; if(_D_001E5EC9 && p) *(int*)((char*)p+0x94)=value; }

void _func_001032A0(void) { extern int D_00324EA8,D_00324EA0,D_00324E9C,D_00324E98,D_00324BEC,D_00324BCC,D_00324BF4,D_00324BDC; D_00324EA8=0; D_00324EA0=0; D_00324E9C=0; D_00324E98=0; D_00324BEC=0; D_00324BCC=0; D_00324BF4=0; D_00324BDC=0; }

extern int D_00308158;
extern unsigned char D_001E5EC9;
extern int D_00324BCC;
int _func_000F8F40(...);
int _func_00128C50(int);
int _func_0013F2E9(int, int);
int _func_0009C590(char *);
int _func_000F8F40(int);
int _func_00103320(int p) { int x=*(int*)((char*)p+0x7c); if(x==D_00308158)return *(int*)((char*)p+0x84); return _func_000F8F40(*(int*)(x+0x2c)); }

void func_001033A0(int a0) {
    extern int D_00324EA8;
    D_00324EA8 = a0;
}

undefined4 * func_001033B0(undefined4 param_1)
{
  int func_00116A90(...);
  int func_00131990(...);
  extern undefined4 D_001E46C0;
  int func_0011BF40(...);
  int func_0011BDD0(...);
  int func_0013A020(...);
  extern undefined D_001D29C7;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)func_00116A90(8,1,1);
  func_00131990(D_001E46C0);
  uVar2 = func_0011BF40(param_1,0);
  *puVar1 = uVar2;
  uVar2 = func_0011BDD0(uVar2,1);
  uVar2 = func_0013A020(uVar2,0x3f800000);
  puVar1[1] = uVar2;
  func_00131990(((undefined *)&D_001D29C7));
  return puVar1;
}

void func_00103400(int *param_1)
{
  int func_0013ADF0(...);
  int func_0011B990(...);
  int func_00116FB0(...);
  func_0013ADF0(param_1[1]);
  *(short *)(*param_1 + 0x2a) = *(short *)(*param_1 + 0x2a) + -1;
  func_0011B990(*param_1);
  func_00116FB0(param_1);
  return;
}

int _func_00103430(int *p) { int _func_0013AB30(...); return _func_0013AB30(p[1]); }

void func_00103440(int param_1, char param_2)
{
  int func_0013AC00(...);
  extern undefined4 D_00324D0C;
  int func_0013AA30(...);
  func_0013AC00(*(undefined4 *)(param_1 + 4),D_00324D0C);
  if (param_2 != '\0') {
    func_0013AA30(*(undefined4 *)(param_1 + 4),1);
    return;
  }
  func_0013AA30(*(undefined4 *)(param_1 + 4),0);
  return;
}

undefined4 func_001034A0(int param_1)
{
  extern undefined4 D_00324BD8;
  extern undefined4 D_00324BC8;
  if ((*(int *)(param_1 + 0x7c) != D_00324BD8) && (*(int *)(param_1 + 0x7c) != D_00324BC8)) {
    return 0;
  }
  return 1;
}

