/* 19 functions from 0x001360A0 to 0x00137090, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00332738, D_0033273C, D_00332740;
extern int D_003326AC, D_003323A0, D_0033244C, D_00332340;
extern void __stdcall RtlEnterCriticalSection(int *);
extern void __stdcall RtlLeaveCriticalSection(int *);
int func_001378E0(...);
int func_00137A20(...);
int func_00137AB0(...);
int func_0014B050(void);
int __stdcall func_0014AF40(int);
int func_0012F310(...);
int __stdcall func_0014ADB0(int, int *);
int func_00011CB0(...);

void func_00136440(void)
{
  return;
}

void func_00136AE0(void) {
    int func_00137B20(...);
    func_00137B20();
}

void func_00136B20(void) {
    extern int D_00332724;
    int __stdcall MmFreeContiguousMemory(int);
    MmFreeContiguousMemory(D_00332724);
}

int func_00136B70(void) {
    extern int D_00332340;
    return (int)&D_00332340;
}

int func_00136F80(void) {
    return 0;
}

void func_00137060(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4)
{
  extern undefined4 D_003326C8;
  extern undefined4 D_003326A4;
  extern undefined4 D_00332430;
  extern undefined4 D_003323E0;
  *param_1 = D_003326C8;
  *param_2 = D_003326A4;
  *param_3 = D_00332430;
  *param_4 = D_003323E0;
  return;
}

