/* 19 functions from 0x0011EE40 to 0x0011FE22, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_0011F200(int *param_1)
{
  int func_00116FB0(...);
  return func_00116FB0(param_1[0x3b]);
}

void __cdecl _func_0011F220(void)
{
    extern int _D_003281FC, _D_003281F8;
    int _func_0011EE40(...), _func_0011F200(...), _func_00115D60(...);
    if (_D_003281FC == 0) {
        int local[6];
        local[1] = 0;
        local[3] = 0;
        local[4] = 0;
        local[2] = (int)_func_0011EE40;
        local[5] = (int)_func_0011F200;
        _D_003281F8 = _func_00115D60(local);
    }
    ++_D_003281FC;
}

#pragma intrinsic(memcpy)
int __cdecl _func_0011F890(int a, unsigned int *b)
{
    extern int _D_00328200;
    extern void *memcpy(void *, const void *, unsigned int);
    int _func_0010F750(...), _func_00137CF0(...);
    int *p = (int *)_func_0010F750(a, _D_00328200, 0x110);
    p[0x38] = _func_00137CF0(b);
    memcpy((char *)p + 0xe4, b, 0x24);
    return (int)p;
}
void __cdecl _func_0011F8D0(int *a, unsigned int *b)
{
    extern void *memcpy(void *, const void *, unsigned int);
    int _func_00137D20(...);
    _func_00137D20(a[0x38], b);
    memcpy((char *)a + 0xe4, b, 0x24);
}

int func_0011F900(int *param_1)
{
  int func_001384D0(...);
  return func_001384D0(param_1[0x38]);
}

int __cdecl _func_0011F920(int a)
{
  extern int _D_003291B8;
  extern int _D_00328208;
  int n = 0;
  int *p = *((int **) (a + 0x34));
  while (p)
  {
    if (((*((unsigned char *) (((char *) p) + 6))) & 0x10) == 0)
    {
      int obj = *p;
      if (((*((unsigned char *) (obj + 0x20))) & 1) == 0)
      {
        ((int *) (&_D_00328208))[_D_003291B8] = obj;
        ++_D_003291B8;
        ++n;
      }
    }
    p = (int *) p[3];
  }

  return n;
}

void func_0011F960(int param_1)
{
  extern int _D_003291B8;
  _D_003291B8 -= param_1;
}

void func_0011FCC0(int param_1, uint param_2)
{
  int func_001383B0(...);
  int func_0011FED0(...);
  int func_00137EF0(...);
  uint uVar1;
  undefined1 local_50 [76];
  
  func_001383B0();
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      func_0011FED0(*(undefined4 *)(param_1 + uVar1 * 4),local_50);
      func_00137EF0(*(undefined4 *)(*(int *)(param_1 + uVar1 * 4) + 0xe0),local_50,1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}

void func_0011FD20(void) {
    extern int D_003291B8;
    D_003291B8 = 0;
}

void func_0011FD30(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x108) = param_2;
  return;
}

extern int _D_003291B8;
extern int _D_003291BC;
extern int _D_00328200;
extern int __cdecl _func_00110370(void*);
extern void _func_0011F900(void);
void __cdecl _func_0011FD40(void)
{
    if (_D_003291BC == 0) {
        int local[7];
        local[4] = 0;
        local[1] = 0;
        local[2] = 0;
        local[3] = (int)_func_0011F900;
        _D_00328200 = _func_00110370(local);
    }
    ++_D_003291BC;
}

undefined4 func_0011FD80(undefined4 *param_1)
{
  extern undefined D_003291C8;
  int func_0013AEC0(...);
  int func_00117370(...);
  int func_00137690(...);
  extern undefined4 D_003291C0;
  int func_00128D90(...);
  extern undefined4 D_003291F4;
  extern undefined4 D_003291F0;
  int func_0011FEA0(...);
  extern undefined D_00329278;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((undefined *)&D_003291C8);
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  func_0013AEC0();
  func_00117370(((undefined *)&D_003291C8));
  func_00137690(((undefined *)&D_003291C8));
  D_003291C0 = 1;
  func_00128D90(D_003291F4);
  if (D_003291F0 == 0) {
    D_003291F0 = 0x400;
  }
  func_0011FEA0(D_003291F0);
  D_00329278 = 1;
  return 1;
}

void func_0011FDF0(float p){extern int D_00329238,D_001E7D28;extern float D_001D290C,D_00329234,D_0032923C;float x=(float)D_00329238;D_001E7D28=*(int*)&p;if(D_00329238<0)x=x+D_001D290C;D_0032923C=(x+D_00329234)/p;}
extern unsigned short D_001D290C;
extern unsigned short D_001D2D4C;
