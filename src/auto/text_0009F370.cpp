/* 9 functions from 0x0009F370 to 0x0009FB57, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern u16 D_00311510;

unsigned int __cdecl _func_0009F820(void)
{
  extern unsigned char _D_00311512;
  extern unsigned short _D_00311510;
  extern int _D_0000FFFF;
  if (_D_00311512 & 1) return (unsigned int)&_D_0000FFFF;
  return _D_00311510;
}

void func_0009F840(unsigned short param_1)
{
  D_00311510 |= param_1;
}

void func_0009F870(void)
{
  extern undefined4 D_003115C8;
  int func_0011B990(...);
  int iVar1;
  
  iVar1 = D_003115C8;
  *(short *)(D_003115C8 + 0x2a) = *(short *)(D_003115C8 + 0x2a) + -1;
  func_0011B990(iVar1);
  return;
}

void __cdecl _func_0009F890(float x, float y, float *out)
{
  extern int _D_00313B60;
  extern float _D_001D68EC, _D_001D27B0, _D_001D6014;
  extern void __cdecl _func_00110060(int, void *);
  __declspec(align(16)) unsigned char local[64];
  _func_00110060(_D_00313B60, local);
  out[0] = (x * _D_001D68EC - _D_001D27B0) / *(float *)((char *)&_D_00313B60 + 0xe4);
  out[1] = (_D_001D27B0 - y * _D_001D6014) / *(float *)((char *)&_D_00313B60 + 0xe8);
  out[2] = 1.0f;
}

