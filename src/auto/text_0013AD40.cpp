/* 33 functions from 0x0013AD40 to 0x0013BB8D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

longdouble func_0013ADC0(int param_1)
{
  return (longdouble)*(float *)(param_1 + 0x18);
}

void func_0013ADD0(int param_1)
{
  extern undefined4 D_001E8878;
  if (param_1 == 0) {
    param_1 = 1;
  }
  D_001E8878 = param_1;
  return;
}

void func_0013AF50(void *param_1)
{
  extern unsigned char D_00334E31;
  extern void *__imp__RtlEnterCriticalSection;
  if (D_00334E31 == 0 && param_1 != 0)
    ((void (__stdcall *)(void *))__imp__RtlEnterCriticalSection)(param_1);
}

void func_0013AF70(void *param_1)
{
  extern unsigned char D_00334E31;
  extern void *__imp__RtlLeaveCriticalSection;
  if (D_00334E31 == 0 && param_1 != 0)
    ((void (__stdcall *)(void *))__imp__RtlLeaveCriticalSection)(param_1);
}

void func_0013B280(undefined4 *param_1, char param_2)
{
  int __stdcall func_00109C1F(int);
  int __stdcall func_00109C3F(int);
  if (param_2 != '\0') {
    func_00109C1F((int)(*param_1));
    return;
  }
  func_00109C3F((int)(*param_1));
  return;
}

void func_0013B300(undefined4 *param_1)
{
  int __stdcall func_0010B7F8(int);
  int func_00116FB0(...);
  func_0010B7F8((int)(*param_1));
  func_00116FB0(param_1);
  return;
}

void func_0013BB20(void) {
    extern char D_00334F50;
    D_00334F50 = 0;
}

void func_0013BB30(undefined4 param_1)
{
  int func_00116A90(...);
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)func_00116A90(0x50,1,1);
  *(undefined4 *)(puVar1 + 4) = param_1;
  *puVar1 = 1;
  return;
}

void func_0013BB50(undefined1 *param_1, undefined4 param_2)
{
  int func_00011CB0(...);
  func_00011CB0(param_1 + 0x10,param_2);
  *param_1 = 0;
  return;
}

undefined4 func_0013BB70(int param_1)
{
  extern undefined D_00334E40;
  return *(undefined4 *)(((undefined *)&D_00334E40) + param_1 * 4);
}

undefined * func_0013BB80(int param_1)
{
  extern undefined D_00334E50;
  return ((undefined *)&D_00334E50) + param_1 * 0x40;
}

