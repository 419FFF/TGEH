/* 55 functions from 0x0013F028 to 0x0013FEB8, found by Ghidra. */
#include "common.h"

extern int _D_002E8BE0; extern void func_00143876(void); void __stdcall func_0013F0F5(int arg) { int *p = &_D_002E8BE0; func_00143876(); *p = arg; }

void func_0013F58E(void)
{
  extern void (*D_0037B9E4)(void);
  int func_00141FD9(...);
  if (D_0037B9E4) D_0037B9E4();
  func_00141FD9(0x19);
}

void __stdcall func_0013F5CD(int a, int b)
{
}

void _func_0013F5D2(void) { ((void (*)(void))(*(void **)0))(); }

void func_0013F9A0(void)
{
  int func_00142C28(...);
  int func_0013F9BD(...);
  long double in_ST0;
  func_00142C28((double)in_ST0);
  func_0013F9BD();
}

void func_0013F9B4(float a0, float a1) {
    extern void __fastcall func_00142BE5(float, float*);
    func_00142BE5(a0, &a0);
}

void func_0013FB59(void) {
    int func_001435DF(...);
    func_001435DF(14);
}

void func_0013FC91(void) {
    int func_00143876(...);
    func_00143876();
}

