/* 22 functions from 0x00078F40 to 0x00079E1C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00078F40(void)
{
 extern float _D_002FA680,_D_001D4F8C,_D_002FA684; extern int _D_001D64F8;
 int func_00103210(...),func_00103990(...);
 _D_002FA680 += _D_001D4F8C;
 if (_D_002FA680 < _D_002FA684) return;
 while (_D_002FA680 >= _D_002FA684) _D_002FA680 -= _D_002FA684;
 if (_D_002FA680 >= _D_002FA684) _D_002FA680 = _D_002FA684;
 func_00103990(func_00103210(_D_001D64F8),0);
}

void func_00078FA0(int *param_1, undefined4 param_2)
{
  int func_0011CD40(...);
  int func_0011CDF0(...);
  int func_0011CE20(...);
  int func_0011CE10(...);
  int func_0011CE30(...);
  int func_0011CE50(...);
  int func_0011CF30(...);
  int func_0011CFC0(...);
  int func_0011CF90(...);
  int iVar1;
  
  iVar1 = func_0011CD40(1,1,1,4,1);
  *param_1 = iVar1;
  **(undefined4 **)(iVar1 + 4) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 4) + 4) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 4) + 8) = 0;
  **(undefined4 **)(*param_1 + 0xc) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 0xc) + 4) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0xc) + 8) = 0;
  **(undefined4 **)(*param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x14) + 4) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x14) + 8) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x14) + 0xc) = 0x3f800000;
  **(undefined4 **)(*param_1 + 0x1c) = 0x40000000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 4) = 0x40000000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 8) = 0x40800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 0xc) = 0x40800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 0x10) = 0x40c00000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 0x14) = 0x40c00000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 0x18) = 0x41000000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 0x1c) = 0x41000000;
  **(undefined4 **)(*param_1 + 0x24) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 0x24) + 4) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 0x24) + 8) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x24) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE20(param_2,0);
  func_0011CE10(param_2,0);
  func_0011CE30(param_2,0x42200000,0x42700000);
  func_0011CE50(param_2,0,0,0,0);
  func_0011CF30(param_2,0,0);
  func_0011CFC0(param_2,0x40f00000);
  func_0011CF90(param_2,0,0,0x42480000,0x3f800000);
  return;
}

#pragma optimize("g", off)
#pragma optimize("y", on)
void func_000790E0(int a0)
{
  extern void func_0011DEF0(...);
  func_0011DEF0(a0);
}
#pragma optimize("", on)
void func_000790F0(int param_1, int param_2, int param_3)
{
  float func_000957F0(...);
  int func_0011DF40(float);
  extern int *D_00307DF8;
  int func_00110330(...);
  int func_00096940(...);
  int func_0011DEF0(...);
  int func_0011DED0(...);
  float func_00131760(...);
  int func_0011CE10(...);
  int func_0011CFC0(...);
  extern float D_001D2B64, D_001D27EC, D_001D541C, D_001D6508, D_001D4788, D_001D27B8, D_002FA684;
  int local_4;
  float fVar1, fVar6, fVar7;
  int iVar5;
  int bVar2;
  int cVar4;
  int bVar3;

  fVar6 = func_000957F0(param_3 + 0x30, &local_4, 0);
  bVar2 = fVar6 > D_001D2B64;
  cVar4 = (unsigned char)func_0011DF40(fVar6);
  if (*(int **)((char *)D_00307DF8 + 0x110) == 0) {
    bVar2 = 0;
  } else {
    iVar5 = **(int **)((char *)D_00307DF8 + 0x110);
    bVar3 = (iVar5 == 0x11 || iVar5 == 0x13);
    bVar2 = bVar2 & bVar3;
    if (iVar5 != 0x11 && iVar5 != 0x13 && iVar5 != 0x12) {
      func_00110330(param_2, 0);
    }
  }
  if (local_4 == 0 || func_00096940(local_4) == 0) {
    if (bVar2) {
      if (cVar4 == 0) func_0011DED0(param_1);
    } else goto L;
  } else {
    bVar2 = 0;
L:
    if (cVar4 != 0) func_0011DEF0(param_1);
  }
  if (!bVar2) return;
  fVar7 = func_00131760() + D_001D27EC;
  if (fVar6 < D_001D541C) fVar7 = fVar6 * D_001D6508 * fVar7;
  func_0011CE10(param_1 + 0x54, fVar7);
  fVar1 = func_00131760() * D_001D4788;
  func_0011CFC0(param_1 + 0x54, fVar1);
  if (fVar1 == D_001D27B8) D_002FA684 = 1.0f;
  else D_002FA684 = D_001D2B64 / fVar1;
  func_00078F40();
}

extern int _D_001D2F4C;
extern int __cdecl _func_0011D000(int*, void (*)(void));
extern int __cdecl _func_0011D270(int*, void (*)(void));
extern int __cdecl _func_0011D290(int*, void (*)(void));
extern int __cdecl _func_0011D2B0(int*, void (*)(void));
extern void _func_00078FA0(void);
extern void _func_000790E0(void);
extern void _func_00085E20(void);
extern void _func_000790F0(void);
void __cdecl _func_00079270(void)
{
    _func_0011D000(&_D_001D2F4C, _func_00078FA0);
    _func_0011D270(&_D_001D2F4C, _func_000790E0);
    _func_0011D290(&_D_001D2F4C, _func_00085E20);
    _func_0011D2B0(&_D_001D2F4C, _func_000790F0);
}

void func_000792B0(void) {
    extern int D_001D2F4C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F4C);
}

void func_00079470(int param_1, int param_2)
{
  int func_00116A90(...);
  int func_0011DED0(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00116A90(0x1c,1,0);
  *(undefined4 **)(param_1 + 0x17c) = puVar1;
  *puVar1 = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(param_2 + 0x11c) = 4;
  *(undefined4 *)(param_2 + 0x120) = 5;
  func_0011DED0(param_1);
  return;
}

void func_000794C0(void *a,void *b,void *p)
{
 extern float _D_001E461C; extern float _D_001D650C;
 int func_0011E3D0(...),func_0011CFC0(...);
 unsigned char *base=(unsigned char *)a;
 func_0011E3D0(a);
 unsigned char *o=*(unsigned char **)(base+0x17c);
 int v=*(int *)(o+0x10); *(int *)(o+0x14)=v;
 *(float *)(o+0x10)=*(float *)(o+0x10)+_D_001E461C;
 if (*(float *)((unsigned char *)p+0x34) > _D_001D650C) func_0011CFC0(base+0x54,20.0f);
 else func_0011CFC0(base+0x54,0);
}

void func_00079520(void) {
    extern int D_001D6510;
    extern void func_000792C0(void);
    extern void func_00079470(void);
    extern void func_00079D10(void);
    extern void func_000794C0(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_000792C0, &D_001D6510);
    func_0011D270(func_00079470, &D_001D6510);
    func_0011D290(func_00079D10, &D_001D6510);
    func_0011D2B0(func_000794C0, &D_001D6510);
    func_0011D2D0(func_00092810, &D_001D6510);
    func_0011D2F0(func_00083D60, &D_001D6510);
}

void func_00079580(void) {
    extern int D_001D6510;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6510);
}

void _func_00079950(void)
{
  extern int D_001D651C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00079590(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D651C, _func_00079590);
  _func_0011D270(&D_001D651C, _func_0007FC90);
  _func_0011D290(&D_001D651C, _func_00085E20);
  _func_0011D2B0(&D_001D651C, _func_000688D0);
}

void func_00079990(void) {
    extern int D_001D651C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D651C);
}

void _func_000799A0(int *param_1, undefined4 param_2)
{
  int func_0011CD40(...);
  int func_0011CDF0(...);
  int func_0011CE10(...);
  int func_0011CE20(...);
  int func_0011CE30(...);
  int func_0011CE50(...);
  int func_0011CF30(...);
  int func_0011CFC0(...);
  float func_00131760(...);
  float func_0012EA60(...);
  extern float D_001D27B0;
  extern float D_001D2B64;
  unsigned int i;
  float f;

  *param_1 = func_0011CD40(10, 1, 1, 1, 1);
  i = 0;
  do {
    f = func_00131760();
    *(float *)(i + *(int *)(*param_1 + 4)) = f + f - D_001D27B0;
    *(undefined4 *)(*(int *)(*param_1 + 4) + 4 + i) = 0;
    f = func_00131760();
    *(float *)(*(int *)(*param_1 + 4) + 8 + i) = f + f - D_001D27B0;
    func_0012EA60((float *)(*(int *)(*param_1 + 4) + i));
    *(float *)(*(int *)(*param_1 + 4) + i) = func_00131760() * *(float *)(*(int *)(*param_1 + 4) + i) * D_001D2B64;
    *(float *)(*(int *)(*param_1 + 4) + 8 + i) = func_00131760() * *(float *)(*(int *)(*param_1 + 4) + 8 + i) * D_001D2B64;
    i += 0xc;
  } while (i < 0x78);
  **(undefined4 **)(*param_1 + 0xc) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 0xc) + 4) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0xc) + 8) = 0;
  **(undefined4 **)(*param_1 + 0x14) = 0x3f000000;
  *(undefined4 *)(*(int *)(*param_1 + 0x14) + 4) = 0x3f000000;
  *(undefined4 *)(*(int *)(*param_1 + 0x14) + 8) = 0x3f000000;
  *(undefined4 *)(*(int *)(*param_1 + 0x14) + 0xc) = 0x3f800000;
  **(undefined4 **)(*param_1 + 0x1c) = 0x3f000000;
  *(undefined4 *)(*(int *)(*param_1 + 0x1c) + 4) = 0x3f000000;
  **(undefined4 **)(*param_1 + 0x24) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 0x24) + 4) = 0;
  *(undefined4 *)(*(int *)(*param_1 + 0x24) + 8) = 0x3f800000;
  *(undefined4 *)(*(int *)(*param_1 + 0x24) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE10(param_2, 0);
  func_0011CE20(param_2, 0);
  func_0011CE30(param_2, 0x41c80000, 0x41f00000);
  func_0011CE50(param_2, 0, 0, 0, 0xbf4ccccd);
  func_0011CF30(param_2, 0x40600000, 0x41480000);
  func_0011CFC0(param_2, 0x41200000);
}

void _func_00079B10(void)
{
  extern int D_001D6528;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000799A0(...);
  int _func_00085870(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6528, _func_000799A0);
  _func_0011D270(&D_001D6528, _func_00085870);
  _func_0011D290(&D_001D6528, _func_00085E20);
  _func_0011D2B0(&D_001D6528, _func_000688D0);
}

void func_00079B50(void) {
    extern int D_001D6528;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6528);
}

void func_00079B60(int *p, undefined4 q){int func_0011CD40(...),func_0011CDF0(...),func_0011CE10(...),func_0011CE20(...),func_0011CE30(...),func_0011CE50(...),func_0011CF30(...),func_0011CFC0(...); float func_00131760(...); float func_0012EA60(...); extern float _D_001D27B0,_D_001D2B64; unsigned int i; *p=func_0011CD40(4,4,1,1,1); for(i=0;i<48;i+=12){*(float *)(*(int *)(*p+4)+i)=func_00131760()*2-_D_001D27B0;*(int *)(*(int *)(*p+4)+i+4)=0;*(float *)(*(int *)(*p+4)+i+8)=func_00131760()*2-_D_001D27B0;func_0012EA60((void *)(*(int *)(*p+4)+i));*(float *)(*(int *)(*p+4)+i)=func_00131760()**(float *)(*(int *)(*p+4)+i)*_D_001D2B64;*(float *)(*(int *)(*p+4)+i+8)=func_00131760()**(float *)(*(int *)(*p+4)+i+8)*_D_001D2B64;} for(i=0;i<48;i+=12){*(float *)(*(int *)(*p+12)+i)=func_00131760();*(float *)(*(int *)(*p+12)+i+4)=func_00131760();*(float *)(*(int *)(*p+12)+i+8)=func_00131760();} *(unsigned int *)(*(int *)(*p+20))=0x3f333333;*(unsigned int *)(*(int *)(*p+20)+4)=0x3f19999a;*(unsigned int *)(*(int *)(*p+20)+8)=0x3ecccccd;*(unsigned int *)(*(int *)(*p+20)+12)=0x3ecccccd;*(unsigned int *)(*(int *)(*p+28))=0x41c00000;*(unsigned int *)(*(int *)(*p+28)+4)=0x41c00000;*(unsigned int *)(*(int *)(*p+36))=0;*(unsigned int *)(*(int *)(*p+36)+4)=0;*(unsigned int *)(*(int *)(*p+36)+8)=0x3f800000;*(unsigned int *)(*(int *)(*p+36)+12)=0x3f800000;func_0011CDF0(q);func_0011CE10(q,0);func_0011CE20(q,0);func_0011CE30(q,0x40400000,0x40800000);func_0011CE50(q,0,0,0,0xbf000000);func_0011CF30(q,0x42000000,0x42000000);func_0011CFC0(q,0x41f00000);}

extern void func_0011DEF0(int);
extern undefined4 D_002FA680;
extern undefined4 D_001D4F8C;
extern undefined4 D_002FA684;
extern undefined D_001D64F8;
int func_00103210(int);
int func_00103990(undefined);
extern undefined4 D_00079D10_arg0;
void func_00079D10(void *a)
{
 extern int func_0011DEF0(...);
 extern void func_00116FB0(...);
 func_0011DEF0(a);
 func_00116FB0(*(int *)((unsigned char *)a+0x17c));
}

void func_00079D30(void *a,void *b,void *p)
{
 extern float _D_001D6534,_D_001D2A2C;
 int func_0011E3D0(...),func_0012E7B0(...),func_0011CFC0(...);
 unsigned char *base=(unsigned char *)a,*q=(unsigned char *)p;
 func_0011E3D0(a);
 unsigned char *o=*(unsigned char **)(base+0x17c);
 float d=func_0012E7B0(o+4,q+0x30);
 if (*(float *)(q+0x34) > _D_001D6534) func_0011CFC0(base+0x54,0);
 else func_0011CFC0(base+0x54,d*_D_001D2A2C);
 *(int *)(o+4)=*(int *)(q+0x30);
 *(int *)(o+8)=*(int *)(q+0x34);
 *(int *)(o+0xc)=*(int *)(q+0x38);
}

void func_00079DB0(void) {
    extern int D_001D6538;
    extern void func_00079B60(void);
    extern void func_0008B120(void);
    extern void func_00079D10(void);
    extern void func_00079D30(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_00079B60, &D_001D6538);
    func_0011D270(func_0008B120, &D_001D6538);
    func_0011D290(func_00079D10, &D_001D6538);
    func_0011D2B0(func_00079D30, &D_001D6538);
    func_0011D2D0(func_00092810, &D_001D6538);
    func_0011D2F0(func_00083D60, &D_001D6538);
}

void func_00079E10(void) {
    extern int D_001D6538;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6538);
}

