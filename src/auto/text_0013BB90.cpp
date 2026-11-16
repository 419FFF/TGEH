/* 10 functions from 0x0013BB90 to 0x0013CB5D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0013C000(undefined4 param_1)
{
  int func_00116A90(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00116A90(8,1,0);
  *puVar1 = param_1;
  puVar1[1] = 0;
  return;
}

void func_0013C020(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 4) != 0) {
    func_00116FB0(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  func_00116FB0(param_1);
  return;
}

void _func_0013C0C0(void)
{
    extern int _D_003326D0;
    extern int _D_003323A0;
    extern int _D_003326AC;
    extern void __stdcall _func_0014ADB0(int,int);
    extern void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);
    _func_0014ADB0(6, (int)&_D_003326D0);
    _func_0014ADB0(0, (int)&_D_003323A0);
    __imp__RtlLeaveCriticalSection(&_D_003326AC);
}

void func_0013C0F0(void* self,int a,int b) {(void)self;(void)a;(void)b;}

void func_0013C980(int a0, int a1, int a2) {
    int func_0013C0F0(...);
    func_0013C0F0(a0, a1, a2, 48);
}
