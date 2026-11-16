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

#pragma intrinsic(memcpy)
extern "C" void *__cdecl memcpy(void *, const void *, unsigned);
void __cdecl _func_0009F850(unsigned int *dest)
{
  extern unsigned int _D_003104B8[];
  extern void __cdecl _func_0009F160(void);
  memcpy(dest, _D_003104B8, 0x41b * 4);
  _func_0009F160();
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
  extern char *_D_00313B60;
  extern float _D_001D68EC, _D_001D27B0, _D_001D6014;
  extern void __cdecl _func_00110060(void *, void *);
  __declspec(align(16)) unsigned char local[64];
  double a, b;
  _func_00110060(_D_00313B60, local);
  a = ((double)x * _D_001D68EC - _D_001D27B0) / *(float *)(_D_00313B60 + 0xe4);
  b = (_D_001D27B0 - (double)y * _D_001D6014) / *(float *)(_D_00313B60 + 0xe8);
  out[2] = 1.0f;
  out[0] = (float)a;
  out[1] = (float)b;
}

void __cdecl _func_0009F8F0(unsigned char flag, unsigned int *src, unsigned int *dst)
{
  extern void __cdecl _func_0012E6D0(void *);
  extern float __cdecl _func_0012EA60(void *);
  extern void __cdecl _func_0012ECA0(void *, float);
  extern void __cdecl _func_0012E5F0(void *, void *, unsigned int *);
  extern unsigned int _D_003115B4, _D_003115B8, _D_003115BC;
  extern float _D_00307DB4, _D_001D29E0;
  extern unsigned int _D_00311548, _D_003115A0, _D_003115A4, _D_003115A8;
  unsigned char local[12];
  if (flag) {
    _func_0012E6D0(local);
    (void)_func_0012EA60(local);
    _func_0012ECA0(local, 100.0f);
    _func_0012E5F0(&_D_003115B4, src, dst);
  } else {
    _D_003115B4 = src[0]; _D_003115B8 = src[1]; _D_003115BC = src[2];
  }
  _D_00311548 = 1;
  _D_003115B4 = _D_00307DB4 + _D_001D29E0;
  _D_003115A0 = dst[0]; _D_003115A4 = dst[1]; _D_003115A8 = dst[2];
}

void func_0009F990(void)
{
    extern int _D_003115C0;
    if (_D_003115C0 < 0)
        _D_003115C0 = 0;
    else if (_D_003115C0 < 0xaf)
        _D_003115C0 += 2;
    else
        _D_003115C0 = 0xaf;
}

