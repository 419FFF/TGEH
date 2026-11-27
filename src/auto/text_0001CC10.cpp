/* 5 functions from 0x0001CC10 to 0x0001D6E1, found by Ghidra. */
#include "common.h"

struct Obj1D160 {
  char pad0[0x12]; char b12; char pad1[0x19];
  int f2c; char pad2[0xe0]; int f110; char pad3[0xc];
};
struct Base1D160 { int w[0x44]; };
struct Args1D160 { int a, b, c, d; };
struct Zero1D160b { union { double dd; int x[0x21]; }; };
struct Zero1D160 { int x[0x21]; };
struct Config1CE80 { union { double align; char bytes[244]; }; };

extern "C" void* __cdecl memset(void*,int,unsigned);
#pragma optimize("y", on)
char *func_0001CE80(char *input,int param) {
 int func_00116A90(...),func_0009C7A0(...),func_001313C0(...),func_0011E840(...),func_0011B4F0(...),func_0011E7E0(...),func_00117100(...),func_0011E800(...),func_00117130(...),func_0011DD60(...),func_0011E830(...),func_0001D2D0(...),func_0011E3A0(...),func_0011E9E0(...),func_0001CC10(...);
 void __cdecl func_0001C990(char*);
 extern char D_001D2DDC,D_001D302C,D_001D3024,D_001D301C,D_001D3014,D_001D3008,D_001D2F4C,D_001D2F40,D_001D2F38,D_001D2F30,D_001D2F28;
 extern float D_001D27B8;
 Config1CE80 config;Zero1D160b zero;
 char *obj=(char*)func_00116A90(0x120,1,1);
 *(Base1D160*)obj=*(Base1D160*)input;
 obj[0x12]=4;
 memset(config.bytes,0,244);
 int *state=(int*)(config.bytes+128);
 state[4]=2;state[5]=2;state[14]=4;state[15]=5;
 state[0]=0;state[1]=0;state[2]=0;state[3]=0;state[10]=3;state[11]=3;state[12]=3;state[13]=3;state[16]=0;state[22]=0;state[21]=0;state[23]=0;
 char *src=*(char**)func_0009C7A0(obj,&D_001D2DDC,0),*dst=config.bytes;
 char c;do{c=*src++;*dst++=c;}while(c);
 state[25]=func_001313C0(*(int*)func_0009C7A0(obj,&D_001D302C,0));state[28]=10;
 float *v=(float*)func_0009C7A0(obj,&D_001D3024,0);
 if(v){ double value=*v; if(D_001D27B8!=value)state[28]&=~8;}
 int *kind=(int*)func_0009C7A0(obj,&D_001D301C,0);
 if(kind && *kind==0x40000000){
 state[27]=0x58;
 int resource=func_0011E840(&D_001D3014,config.bytes);
 int name=*(int*)func_0009C7A0(obj,&D_001D3008,0);
 if(func_0011B4F0(name,&D_001D2F4C)&&func_0011B4F0(name,&D_001D2F40)&&func_0011B4F0(name,&D_001D2F38)&&func_0011B4F0(name,&D_001D2F30)&&func_0011B4F0(name,&D_001D2F28)){
 func_0011E7E0(resource);func_00117100();func_0011E800(resource);func_00117130();
 }
 *(int*)(obj+0x2c)=resource;
 int inst=func_0011DD60(name,state[25],resource,*(int*)(resource+0x14c));
 *(int*)(obj+0x110)=inst;func_0011E830(*(int*)(obj+0x2c),inst);
 func_0001D2D0(obj);func_0011E3A0(*(int*)(obj+0x110),param);func_0001C990(obj);return obj;
 }
 state[27]=0x30;
 int resource=func_0011E840(&D_001D3014,config.bytes);
 *(int*)(obj+0x2c)=resource;func_0011E7E0(resource);func_00117100();func_0011E800(*(int*)(obj+0x2c));func_00117130();
 memset(&zero,0,132);zero.x[0]=state[25];
 int inst=func_0011E9E0(&zero);*(int*)(obj+0x110)=inst;func_0011E830(*(int*)(obj+0x2c),inst);func_0001CC10(obj);func_0001C990(obj);return obj;
}
#pragma optimize("", on)
Obj1D160 *func_0001D160(Obj1D160 *param_1)
{
  int func_00116A90(...);
  int func_0009C7A0(...);
  extern char D_001D302C, D_001D301C, D_001D3008, D_001D3014;
  int func_001313C0(...);
  int func_000934A0(...);
  int func_0011E9E0(...);
  int func_000688D0(...);
  int func_0001CC10(...);
  extern unsigned int D_00306E54;
  int func_0011DD60(...);
  int func_0001D2D0(...);
  Obj1D160 *obj;
  int *puVar2;
  int *piVar3;
  int uVar4;
  int uVar7;
  int uVar8;
  int iVar5;
  Args1D160 a;

  obj = (Obj1D160 *)func_00116A90(0x120, 1, 1);
  *(Base1D160 *)obj = *(Base1D160 *)param_1;
  obj->b12 = 4;
  a.a = 0;
  a.b = 0;
  a.c = 0;
  a.d = 0;
  puVar2 = (int *)func_0009C7A0(obj, &D_001D302C, 0);
  a.a = func_001313C0(*puVar2);
  a.d = 10;
  piVar3 = (int *)func_0009C7A0(obj, &D_001D301C, 0);
  if ((piVar3 != 0) && (*piVar3 == 0x40000000)) {
    puVar2 = (int *)func_0009C7A0(obj, &D_001D3008, 0);
    uVar4 = *puVar2;
    a.c = 0x58;
    iVar5 = func_000934A0(&D_001D3014, &a);
    obj->f2c = iVar5;
    if (*(unsigned char *)(iVar5 + 0x22) == D_00306E54) {
      uVar8 = *(int *)(iVar5 + 0x14c);
      uVar7 = a.a;
    } else {
      uVar8 = 0;
      uVar7 = 0;
    }
    uVar4 = func_0011DD60(uVar4, uVar7, iVar5, uVar8);
    obj->f110 = uVar4;
    func_000688D0(obj->f2c, uVar4);
    if (obj->f110 != 0) {
      func_0001D2D0(obj);
    }
  } else {
    Zero1D160 z;
    a.c = 0x30;
    obj->f2c = func_000934A0(&D_001D3014, &a);
    for (iVar5 = 0; iVar5 < 0x21; iVar5++) z.x[iVar5] = 0;
    z.x[0] = a.a;
    obj->f110 = func_0011E9E0(&z);
    func_000688D0(obj->f2c, obj->f110);
    func_0001CC10(obj);
  }
  func_000688D0(obj->f2c);
  return obj;
}

void func_0001D5C0(int p)
{
  int func_00116A90(...); int func_0004FA80(...); int func_00048720(...); int func_00056D50(...);
  int func_00045A60(...); int func_000A1BB0(...); int func_00131990(...);
  extern int D_00307D10;
  extern char D_001D30C4, D_001D30BC, D_001D30B0, D_001D29C7;
  int *w = (int*)(p + 0x17c);
  unsigned int *x = (unsigned int*)func_00116A90(0x274, 1, 1);
  int n;
  *(unsigned int**)(p + 0x110) = x;
  for (int i = 0; i < 0x9d; i++) x[i] = 0;
  func_0004FA80(p, x + 1);
  w[0] = 0; w[2] = 0; w[3] = 0; w[4] = 0; w[5] = 0; w[6] = 0; w[7] = 0; w[9] = 0;
  w[1] = 0x3f800000; w[8] = 0x3f800000;
  x[0xd] = x[7];
  *((char*)x + 0x99) = 0;
  x[0x1a] = *(unsigned int*)(p + 0x130);
  n = (int)((long double)*(float*)(p + 0x134) / *(float*)(x[0x1a] + 0x74)) << 1;
  x[0x21] = n;
  x[0x1b] = func_00048720(D_00307D10, n, x[0x1a], p);
  x[1] = 10;
  func_00056D50(p, x + 1);
  x[0x96] = 0;
  func_00045A60(p);
  x[0x9a] = func_000A1BB0(p, &D_001D30C4);
  x[0x9c] = func_000A1BB0(p, &D_001D30BC);
  x[0x9b] = func_000A1BB0(p, &D_001D30B0);
  func_00131990(&D_001D29C7);
  x[0x98] = 0xffffffff;
}
