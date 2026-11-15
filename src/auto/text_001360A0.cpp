/* 19 functions from 0x001360A0 to 0x00137090, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00332738, D_0033273C, D_00332740;
extern int D_003326AC, D_003323A0, D_0033244C, D_00332340, D_003326D0;
extern void __stdcall RtlEnterCriticalSection(int *);
extern void __stdcall __imp__RtlEnterCriticalSection(int *);
extern void __stdcall RtlLeaveCriticalSection(int *);
int func_001378E0(...);
int func_00137A20(...);
int func_00137AB0(...);
int func_0014B050(void);
int __stdcall func_0014AF40(int);
int func_0012F310(...);
int __stdcall func_0014ADB0(int, int *);
int func_00011CB0(...);

void func_00136440(void) { return; }

void func_00136450(void) {
  RtlEnterCriticalSection(&D_003326AC);
  int value = func_0014B050();
  func_0014AF40(value);
  RtlLeaveCriticalSection(&D_003326AC);
}

void func_00136480(int a, int b) {
  RtlEnterCriticalSection(&D_003326AC);
  D_0033244C = a;
  func_0012F310(&D_003323A0, b);
  func_0014ADB0(0, &D_003323A0);
  func_00011CB0(&D_00332340, b);
  RtlLeaveCriticalSection(&D_003326AC);
}

void func_001364D0(int a) {
  __imp__RtlEnterCriticalSection(&D_003326AC);
  func_0014ADB0(6, &a);
  func_00011CB0(&D_003326D0, a);
  RtlLeaveCriticalSection(&D_003326AC);
}

void func_00136AE0(void) {
    int func_00137B20(...);
    func_00137B20();
}

int func_00136AF0(int *param) {
  extern int D_00332680;
  extern int D_00332724;
  int __stdcall func_0010C49A(int,int,int,int);
  int __stdcall func_001472B7(int);
  D_00332724 = func_0010C49A(*param, -1, 0, 4);
  func_001472B7((int)&D_00332680);
  return D_00332724;
}

void func_00136B20(void) {
    extern int D_00332724;
    int __stdcall MmFreeContiguousMemory(int);
    MmFreeContiguousMemory(D_00332724);
}

int func_00136B30(void) {
  int __stdcall func_001472B7(int);
  extern int D_0033269C, D_0033268C, D_00332694;
  int local[8];
  func_001472B7((int)local);
  return (((D_0033269C - local[7]) - local[2]) - local[5]) + D_0033268C + D_00332694;
}

int func_00136B70(void) {
    extern int D_00332340;
    return (int)&D_00332340;
}

int func_00136F80(void) {
    return 0;
}

void func_00136F90(short x, short y) {
  extern short D_00332320, D_00332318;
  if (x < -15) x = -15;
  else if (x > 15) x = 15;
  if (y < -15) y = -15;
  else if (y > 15) y = 15;
  D_00332320 = x;
  D_00332318 = y;
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

