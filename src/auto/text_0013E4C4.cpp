/* 25 functions from 0x0013E4C4 to 0x0013F025, found by Ghidra. */
#include "common.h"

void __fastcall func_0013E4C4(int x) {
    extern int D_002E8B84;
    extern void __fastcall func_00140FE7(int, int*);
    func_00140FE7(x, &D_002E8B84);
}

void __fastcall func_0013E4CE(int x) {
    extern int D_002E8B84;
    extern void __fastcall func_00140F6C(int, int*);
    func_00140F6C(x, &D_002E8B84);
}

long double _func_0013E4D8(long double a, long double b)
{
  return a - (long long)(a / b) * b;
}

void _func_0013E4F0(unsigned int n)
{
    volatile unsigned int *p = (volatile unsigned int *)((char *)&n - n);
    *p = *(volatile unsigned int *)((char *)p + 4);
}

void _func_0013E531(void)
{
 extern int D_001E1AA8, D_002E8C78;
 int func_0013EEE4(...),func_001414A2(...),func_00141517(...),func_001407E2(...),func_0014159F(...),func_0013E58C(...),func_0013EF1F(...);
 int a,b;
 func_0013EEE4(&D_001E1AA8,0x10);
 func_001414A2(1,&D_002E8C78);
 a=func_00141517(&D_002E8C78);
 b=func_001407E2(&D_002E8C78, *(int *)((char *)&b+0x2c), (char *)&b+0x30);
 func_0014159F(a,&D_002E8C78);
 func_0013E58C();
 func_0013EF1F(b);
}

void func_0013E587(void)
{
  extern int _D_002E8C78;
  (void)_D_002E8C78;
}

void func_0013E58C(void)
{
  int func_001414F4(...);
  int value = 1;
  func_001414F4(value);
}

void func_0013E9DB(void) {
    int func_0013E983(...);
    func_0013E983();
}

int __fastcall func_0013EA40(int a0, int a1) { int x = a0; return (a1 - 1) + (x - x); }

struct Wrapper_0013E4C4 { void func_0013E4C4(void); };
