/* 26 functions from 0x00140F6C to 0x00141815, found by Ghidra. */
#include "common.h"

extern "C" __declspec(dllimport) int __stdcall RtlEnterCriticalSection(int);
extern int _D_002E9688;
extern void _func_00141253(void);
extern void _func_00141036(void);
extern void _func_001411EC(void);
extern void _func_001411B0(int, int);
extern void _func_0014102F(void);
void _func_00140F6C(void)
{
  volatile unsigned char frame[720];
  if (_D_002E9688) {
    _func_00141253();
    frame[0] |= 3;
    _func_00141036();
  }
}

void func_0014102F(void)
{
  unsigned char flag = 0;
  flag &= 0xfe;
}

void func_0014145F(void)
{
  extern volatile unsigned char D_0037BBC0;
  void func_00145812(void);
  void func_0014562E(void);
  func_00145812();
  if ((unsigned char)D_0037BBC0 == (unsigned char)0) {
    return;
  } else {
    func_0014562E();
  }
}

int __cdecl _func_00141473(unsigned int param_1)
{
    extern int _D_002E8C58;
    extern int _D_002E8EB8;
    extern int __cdecl _func_00143691(int);
    register unsigned int base = (unsigned int)&_D_002E8C58;
    if (param_1 < base || param_1 > (unsigned int)&_D_002E8EB8)
        return RtlEnterCriticalSection(param_1 + 0x20);
    return _func_00143691(((int)(param_1 - base) >> 5) + 0x10);
}

void __cdecl _func_001414A2(int value, int object)
{
  if (value < 0x14) {
    extern int __cdecl _func_00143691(int);
    _func_00143691(value + 0x10);
    return;
  }
  RtlEnterCriticalSection(object + 0x20);
}
