/* 19 functions from 0x000D4920 to 0x000D58BA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000D4D90(void)
{
  extern unsigned char D_0031B164;
  extern int D_0031B494;
  int func_000D4130(...);
  unsigned char *p = &D_0031B164;
  int i = 0;
  do {
    if (*p != 1) {
      func_000D4130(i);
      return;
    }
    p += 0x110;
    ++i;
  } while ((int)p < D_0031B494);
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
  __declspec(align(16)) char local[0x50];
  int *v = (int *)(local + 0x30);
  func_00011CB0(local + 0x20, param1);
  func_0012ED20(v, param2, 0xbf800000);
  func_0012F7A0(v, param1);
  *(int *)(local + 0x40) = v[0];
  *(int *)(local + 0x44) = v[1];
  *(int *)(local + 0x48) = v[2];
  func_001105E0(param2, local + 0x20, 0);
}

void func_000D51E0(int param1, int param2)
{
  int func_00011CB0(...), func_0012ED20(...), func_0012F7A0(...), func_001105E0(...);
  __declspec(align(16)) char local[0x50];
  int *v = (int *)(local + 0x30);
  func_00011CB0(local + 0x20, param1);
  func_0012ED20(v, param2 + 0x40, 0xbf800000);
  func_0012F7A0(v, param1);
  *(int *)(local + 0x40) = v[0];
  *(int *)(local + 0x44) = v[1];
  *(int *)(local + 0x48) = v[2];
  func_001105E0(*(int *)(param2 + 0x2c), local + 0x20, 0);
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

void func_000D52C0(int *param_1,unsigned int param_2,int param_3)
{
 int func_00110300(...); int func_00110060(...); int func_0012F730(...); int func_00011CB0(...); int func_0013E469(...); extern char D_001DAE24;
 char fallback[268]; int temp1[16], temp2[16], result[3];
 int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0x18);
 if(obj) { *(int *)(param_3+4)=obj; func_00110060(obj,temp1); func_00110060(obj,param_3+0x10); func_0012F730(result,obj,param_3+0x10); ((int *)param_3)[16]=result[0]; ((int *)param_3)[17]=result[1]; ((int *)param_3)[18]=result[2]; func_00011CB0(param_3+0x50,param_3+0x10); }
 else func_0013E469(fallback,&D_001DAE24,param_2);
}

void func_000D5360(int *param_1,unsigned int param_2,int param_3)
{
 int func_00110300(...); int func_00110060(...); int func_00011CB0(...); int func_0013E469(...); extern char D_001DAE24;
 char fallback[268]; int local[16]; int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0);
 if(obj) { *(int *)(param_3+4)=obj; func_00110060(obj,local); for(int i=0;i<16;i++) ((int *)(param_3+0x10))[i]=local[i]; func_00011CB0(param_3+0x50,param_3+0x10); }
 else func_0013E469(fallback,&D_001DAE24,param_2);
}

int func_000D53E0(int *param_1,unsigned int param_2,int param_3)
{
 int func_00110300(...); int func_00110060(...); int func_00011CB0(...);
 int local[16]; int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0); if(!obj)return 0;
 *(int *)(param_3+4)=obj; func_00110060(obj,local); for(int i=0;i<16;i++) ((int *)(param_3+0x10))[i]=local[i]; func_00011CB0(param_3+0x50,param_3+0x10); return 1;
}

