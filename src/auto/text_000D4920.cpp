/* 19 functions from 0x000D4920 to 0x000D58BA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000D4D90(void)
{
  extern unsigned char D_0031B164;
  extern int D_0031B494;
  int func_000D4130(...);
  int i = 0;
  int p = (int)&D_0031B164;
  do {
    if (*(unsigned char *)p != 1) {
      func_000D4130(i);
      return;
    }
    p += 0x110;
    ++i;
  } while (p < (int)&D_0031B494);
}

void func_000D50D0(int self, int arg1, int arg2)
{
  int func_0009C7A0(...), func_000A22B0(...);
  int *p;
  int base = *(int *)(self + 4);
  p = (int *)func_0009C7A0(base, arg1, 0);
  if (p != *(int **)(self + 0x90)) {
    *(int **)(self + 0x90) = p;
    func_000A22B0(base + 0x64, arg2, p[0], p[1], p[2], 0x3e4ccccd);
  }
}

char func_000D5120(void) {
    return 0;
}

void func_000D5130(undefined4 param_1, undefined4 *param_2)
{
  int func_0009C7A0(...);
  extern undefined D_001DAE10;
  extern undefined D_001DAE04;
  undefined4 *puVar1;
  
  *param_2 = 0;
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001DAE10),0);
  param_2[1] = *puVar1;
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001DAE04),0);
  param_2[2] = *puVar1;
  return;
}

void __fastcall func_000D4130(int);
void func_000D5170(int param1, int param2)
{
  int func_00011CB0(...), func_0012ED20(...), func_0012F7A0(...), func_001105E0(...);
  __declspec(align(16)) char local[0x40];
  char dummy[16];
  int *v = (int *)local;
  func_00011CB0(local, param1);
  func_0012ED20(v, param2, 0xbf800000);
  func_0012F7A0(v, param1);
  *(int *)(local + 0x30) = v[0]; *(int *)(local + 0x34) = v[1]; *(int *)(local + 0x38) = v[2];
  func_001105E0(param2, local, 0);
}

void func_000D51E0(int param1, int param2)
{
  int func_00011CB0(...), func_0012ED20(...), func_0012F7A0(...), func_001105E0(...);
  __declspec(align(16)) char local[0x40];
  char dummy[16];
  int *v = (int *)local;
  func_00011CB0(local, param1);
  func_0012ED20(v, param2 + 0x40, 0xbf800000);
  func_0012F7A0(v, param1);
  *(int *)(local + 0x30) = v[0]; *(int *)(local + 0x34) = v[1]; *(int *)(local + 0x38) = v[2];
  func_001105E0(*(int *)(param2 + 0x2c), local, 0);
}
#pragma optimize("", on)
void func_000D5250(int param_1,int param_2)
{
 int func_00110060(...); int func_0012F730(...); int temp[4];
 func_00110060(param_1,param_2); func_0012F730(temp,param_1,param_2);
 *(int *)(param_2+0x30)=temp[0]; *(int *)(param_2+0x34)=temp[1]; *(int *)(param_2+0x38)=temp[2];
}

#pragma optimize("", on)
void func_000D5290(int param_1)
{
  int func_00011CB0(...);
  int func_000D5170(...);
  func_00011CB0(param_1 + 0x10,param_1 + 0x50);
  func_000D5170(param_1 + 0x10,*(undefined4 *)(param_1 + 4));
  return;
}

void func_000D52C0(int *param_1,unsigned int param_2,int *out)
{
 int func_00110300(...); int func_00110060(...); int func_0012F730(...); int func_00011CB0(...); int func_0013E469(...); extern char D_001DAE24;
 char fallback[268]; char shape[64]; int local[3];
 int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0x18);
 if(obj) {
   out[1]=obj;
   func_00110060(obj,shape);
   func_00110060(obj,out+4);
   func_0012F730(local,obj,out+4);
   out[16]=local[0]; out[17]=local[1]; out[18]=local[2];
   func_00011CB0(out+20,out+4);
 } else {
   func_0013E469(fallback,&D_001DAE24,param_2);
 }
}

void func_000D5360(int *param_1,unsigned int param_2,int *out)
{
 int func_00110300(...); int func_00110060(...); int func_00011CB0(...); int func_0013E469(...); extern char D_001DAE24;
 char error[268]; int local[16]; int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0);
 if(obj) { out[1]=obj; func_00110060(obj,local); for(int i=0;i<16;i++) out[4+i]=local[i]; func_00011CB0(out+20,out+4); }
 else func_0013E469(error,&D_001DAE24,param_2);
}

int func_000D53E0(int *param_1,unsigned int param_2,int *out)
{
 int func_00110300(...); int func_00110060(...); int func_00011CB0(...); int local[16]; int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0);
 if(obj==0)return 0;
 out[1]=obj; func_00110060(obj,local); for(int i=0;i<16;i++)out[4+i]=local[i]; func_00011CB0(out+20,out+4);return 1;
}
extern int D_0031B914;
extern int D_0031B9A0;
extern int D_0031B9B0;
extern float D_001D290C;

extern int func_0009C7A0(int, int, int);
extern void func_000A22B0(int, int, int, int, int, int);
extern float func_000A2310(int);

extern int D_00313B60;
extern float D_001D27B0;
extern float D_001DAE38;
extern float D_001D5728;
extern void func_00110060(int, char*);
extern void func_0012F310(char*, char*);
extern void func_0012F730(float*, int, char*);

extern int D_0031E4E0;
extern int D_0031D530;
extern int D_001E5380;
extern int D_0031BD00;
extern int D_0031BBC0;
extern void func_0012E700(char*, int, int);
extern void func_0012E620(int, char*, int);
extern void func_000D5170(int, int);
extern void func_00110000(int);

extern int D_00307D08;
extern int D_00313AD0;
extern int D_0031B9D0;
extern float D_001DAE60;
extern float D_001DAE54;
extern int D_0031BCA0;
extern void func_001031C0(int, float, int);
extern void func_00103990(int);

struct Object_000D5450 {
    int base;
    int* vtbl;
    int data[3];
};
