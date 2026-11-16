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
  int local20[3];
  char local50[48];
  int local60[3];
  func_00011CB0(local50, param1);
  func_0012ED20(local60, param2, 0xbf800000);
  func_0012F7A0(local60, param1);
  local20[0] = local60[0]; local20[1] = local60[1]; local20[2] = local60[2];
  func_001105E0(param2, local50, 0);
}

void func_000D51E0(int param1, int param2)
{
  int func_00011CB0(...), func_0012ED20(...), func_0012F7A0(...), func_001105E0(...);
  int local20[3];
  char local50[48];
  int local60[3];
  func_00011CB0(local50, param1);
  func_0012ED20(local60, param2 + 0x40, 0xbf800000);
  func_0012F7A0(local60, param1);
  local20[0] = local60[0]; local20[1] = local60[1]; local20[2] = local60[2];
  func_001105E0(*(int *)(param2 + 0x2c), local50, 0);
}
#pragma optimize("", on)
void func_000D5250(int param_1,int param_2)
{
 int func_00110060(...); int func_0012F730(...);
 int temp[4];
 func_00110060(param_1,param_2);
 func_0012F730(temp,param_1,param_2);
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
 int func_00110300(...); int func_00110060(...); int func_0012F730(...); int func_00011CB0(...); int func_0013E469(...);
 extern char D_001DAE24; int storage[80];
 int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0x18);
 if(obj) { int scratch[4]; *(int *)(param_3+4)=obj; func_00110060(obj,storage); func_00110060(obj,param_3+0x10); func_0012F730(scratch,obj,param_3+0x10); *(int *)(param_3+0x40)=scratch[0]; *(int *)(param_3+0x44)=scratch[1]; *(int *)(param_3+0x48)=scratch[2]; func_00011CB0(param_3+0x50,param_3+0x10); }
 else { char error[268]; func_0013E469(error,&D_001DAE24,param_2); }
}

void func_000D5360(int *param_1,unsigned int param_2,int param_3)
{
 int func_00110300(...); int func_00110060(...); int func_00011CB0(...); int func_0013E469(...); extern char D_001DAE24;
 int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0); if(obj) { int local[16]; *(int *)(param_3+4)=obj; func_00110060(obj,local); for(int i=0;i<16;i++) ((int *)(param_3+0x10))[i]=local[i]; func_00011CB0(param_3+0x50,param_3+0x10); } else { char error[268]; func_0013E469(error,&D_001DAE24,param_2); }
}

int func_000D53E0(int *param_1,unsigned int param_2,int param_3)
{
 int func_00110300(...); int func_00110060(...); int func_00011CB0(...);
 int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0); if(!obj)return 0;
 int local[16]; *(int *)(param_3+4)=obj; func_00110060(obj,local); for(int i=0;i<16;i++) ((int *)(param_3+0x10))[i]=local[i]; func_00011CB0(param_3+0x50,param_3+0x10); return 1;
}

