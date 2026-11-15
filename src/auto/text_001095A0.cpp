/* 31 functions from 0x001095A0 to 0x0010A569, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_001095A0(void) { int func_001160B0(...); int func_0011D0E0(...); int func_00110760(...); extern unsigned int D_003252A8; extern unsigned int D_00325228[]; extern unsigned int D_00325268[]; unsigned int i=0; if(D_003252A8>0) do { func_001160B0(D_00325228[i]); func_0011D0E0(*(unsigned int*)((char*)D_00325268[i]+0x38)); func_00110760(D_00325268[i]); i++; } while(i<D_003252A8); D_003252A8=0; }

void _func_00109600(void) { }

void func_00109650(void)
{
  int func_000688D0(...);
  int func_0011B990(...);
  extern undefined4 D_003252C0;
  func_000688D0();
  func_0011B990(D_003252C0);
  func_000688D0();
  return;
}

extern undefined4 D_003252A8;
extern undefined4 D_003252B8;
extern undefined4 D_003252B4;
extern undefined4 D_003252C8;
extern undefined4 D_001DEBA4;
void _func_00109670(void) { }

#pragma optimize("y", on)
extern "C" __declspec(dllimport) int __stdcall NtClearEvent(int);
int __stdcall func_00109C3F(int event) { int result=NtClearEvent(event); if(result>=0) return 1; extern int __stdcall func_0010AAD1(int); func_0010AAD1(result); return 0; }

extern void __stdcall _func_00109C5D(int, int, int);
void __stdcall func_00109CF3(int a0, int a1)
{
  _func_00109C5D(a0, a1, 0);
  return;
}

void __stdcall func_00109D05(int a0)
{
  int __stdcall func_00109CA1(int, int);
  int value = a0;
  func_00109CA1(value, 0);
}

#pragma optimize("", on)
