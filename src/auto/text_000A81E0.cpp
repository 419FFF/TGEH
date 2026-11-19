/* 13 functions from 0x000A81E0 to 0x000A90E1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A81E0(void)
{
  int func_000F93A0(...);
  int func_000F91D0(...);
  int func_000F7EF0(...);
  extern undefined D_001D7928;
  extern undefined D_001D7A54;
  extern undefined D_001D7A44;
  extern undefined D_001D72DC;
  extern undefined D_001D7990;
  extern undefined D_001D79EC;
  extern undefined D_001D7A3C;
  extern undefined D_001D7A34;
  extern undefined D_001D7A28;
  extern undefined D_001D7A1C;
  extern undefined D_001D7A10;
  extern undefined D_001D7A04;
  extern undefined D_001D7960;
  extern undefined D_001D7968;
  extern undefined D_001D79C8;

  func_000F93A0(((undefined *)&D_001D7A54), ((undefined *)&D_001D7928));
  func_000F93A0(((undefined *)&D_001D7A54), ((undefined *)&D_001D7A44));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A54)), func_000F91D0(((undefined *)&D_001D72DC)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A54)), func_000F91D0(((undefined *)&D_001D7990)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A54)), func_000F91D0(((undefined *)&D_001D79EC)));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7A3C));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7A28));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7A1C));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7A10));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7A04));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7960));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7990));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A34)), func_000F91D0(((undefined *)&D_001D7968)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A34)), func_000F91D0(((undefined *)&D_001D79C8)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A34)), func_000F91D0(((undefined *)&D_001D79EC)));
}

void _func_000A86D0(void)
{
  extern char D_001D7918, D_001D7AC8, D_001D7AB8, D_001D7AAC, D_001D7AA4, D_001D7318;
  extern int D_00312DA8, D_00312DAC, D_00308158, D_00312D8C;
  extern float D_001D27B8;
  int func_0009C590(char *, ...);
  int func_0009C7A0(int, char *, int);
  void func_0009D3E0(int);
  int func_00100540(char *);
  void func_000A7D80(void);
  void func_000A7E60(void);
  void func_000A7FB0(void);
  void func_000A81E0(void);
  void func_000A8340(void);
  void func_000A84D0(void);
  int func_001100A0(int);
  void func_0011A600(int);
  float *pfVar1;
  int iVar3;
  int local_4;

  func_0009C590(&D_001D7918);
  D_00312DA8 = -1;
  D_00312DAC = func_0009C7A0(D_00308158, &D_001D7AC8, 0);
  pfVar1 = (float *)func_0009C7A0(D_00308158, &D_001D7AB8, 0);
  if (*pfVar1 != D_001D27B8) {
    func_0009D3E0(func_0009C590(&D_001D7AAC));
  }
  D_00312D8C = func_00100540(&D_001D7AA4);
  func_000A7D80();
  func_000A7E60();
  func_000A7FB0();
  func_000A81E0();
  func_000A8340();
  func_000A84D0();
  iVar3 = func_0009C590(&D_001D7318, &local_4);
  func_001100A0(*(int *)(iVar3 + 0x2c));
  func_0011A600(local_4);
}

void func_000A8790(void) {
    extern int D_00312D8C;
    int func_00100730(...);
    func_00100730(D_00312D8C);
}

void func_000A8930(void)
{
  extern undefined4 D_00312DB4;
  int func_00110300(...);
  extern undefined4 D_00308158;
  extern undefined D_001D7B50;
  extern undefined4 D_00312DB8;
  extern undefined D_001D7B3C;
  extern undefined4 D_00312DBC;
  extern undefined D_001D7B28;
  extern undefined4 D_00312DC0;
  extern undefined D_001D7B14;
  extern undefined4 D_00312DC4;
  extern undefined D_001D7B00;
  D_00312DB4 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B50),0x18);
  D_00312DB8 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B3C),0x18);
  D_00312DBC = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B28),0x18);
  D_00312DC0 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B14),0x18);
  D_00312DC4 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B00),0x18);
  return;
}

void func_000A89C0(void)
{
  extern int D_00313B60, D_00312DB4[];
  extern float D_001D286C;
  int func_001100A0(...); float func_00131610(...); void func_0012F120(...); void func_0012FE20(...);
  void func_0012E650(...); void func_0012F2E0(...); void func_0012E590(...); void func_001105E0(...);
  __declspec(align(16)) char c[0x40];
  __declspec(align(16)) char a[0x30];
  char b[16];
  float f;
  int p;
  func_001100A0(D_00313B60, &p);
  f = func_00131610(*(int*)(p + 0x20), *(int*)(p + 0x28)) + D_001D286C;
  func_0012F120(c);
  func_0012FE20(c, 0, *(int*)&f, 0);
  for (unsigned int i = 0; i < 0x18; i += 4) {
    if (*(int*)((char*)D_00312DB4 + i) != 0) {
      func_0012F120(a);
      func_0012E650(b, *(int*)((char*)D_00312DB4 + i));
      func_0012F2E0(a, c);
      func_0012E590(b, *(int*)((char*)D_00312DB4 + i));
      func_001105E0(*(int*)((char*)D_00312DB4 + i), a, 0);
    }
  }
}

void func_000A8A90(void)
{
  extern undefined D_00313040;
  extern undefined4 D_00313044;
  int func_00103990(...);
  extern undefined4 D_00312DE0;
  int func_001031A0(...);
  D_00313040 = 1;
  D_00313044 = 0;
  func_00103990(D_00312DE0,1);
  func_001031A0(D_00312DE0,0);
  return;
}

void __cdecl _func_000A8E00(void)
{
    extern int _D_00312E0C;
    extern int _D_00312E10;
    extern int _D_00312E14;
    extern int _D_00312E08;
    extern int __cdecl _func_001160B0(int);
    extern int __cdecl _func_00100730(int);
    _func_001160B0(_D_00312E0C);
    _func_001160B0(_D_00312E10);
    _func_001160B0(_D_00312E14);
    _func_00100730(_D_00312E08);
}

void __cdecl _func_000A8FD0(unsigned int v)
{
    extern unsigned int _D_00312DDC;
    extern float _D_001D29E0, _D_001D28C0;
    extern const float _D_001D27FC;
    extern int _D_00312E0C, _D_00312E10, _D_00312E14;
    extern int __cdecl _func_00116610(int);
    extern int __cdecl _func_00116130(int, float);
    float f[3];
    _D_00312DDC = v;
    f[0] = (float)((v / 100) % 10) * _D_001D29E0 - _D_001D28C0;
    f[1] = (float)((v / 10) % 10) * _D_001D29E0;
    f[2] = (float)(v % 10) * _D_001D29E0;
    _func_00116610(_D_00312E0C);
    _func_00116610(_D_00312E10);
    _func_00116610(_D_00312E14);
    _func_00116130(_D_00312E0C, f[0] * _D_001D27FC);
    _func_00116130(_D_00312E10, f[1] * _D_001D27FC);
    _func_00116130(_D_00312E14, f[2] * _D_001D27FC);
}

