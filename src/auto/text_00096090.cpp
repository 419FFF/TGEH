/* 14 functions from 0x00096090 to 0x00096F66, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00096090(void)
{
  extern int *D_00307C0C;
  int func_00117100(...);
  int func_00116A90(...);
  int func_00117130(...);
  int func_00124BF0(...);
  int func_00116FB0(...);
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  uint local_10;
  short local_4;
  
  local_10 = 0;
  if ((uint)D_00307C0C[2] > 0) {
    iVar10 = 0x24;
    do {
      func_00117100();
      iVar2 = func_00116A90(*(int *)(iVar10 + *D_00307C0C) * 0xc,1,0);
      func_00117130();
      piVar1 = D_00307C0C;
      iVar6 = *D_00307C0C;
      uVar3 = 0;
      if (*(uint *)(iVar10 + iVar6) > 0) {
        piVar7 = (int *)(iVar2 + 4);
        do {
          int sample = *(ushort *)(*(int *)(iVar10 + -4 + iVar6) + uVar3 * 2);
          fVar8 = (float)(double)sample;
          int bits = *(int *)&fVar8;
          if ((bits & 0x80000000) != 0) bits = ~bits; else bits ^= 0x80000000;
          piVar7[-1] = bits;
          *piVar7 = (int)(piVar7 + 2);
          *(undefined2 *)(piVar7 + 1) = *(undefined2 *)(*(int *)(iVar10 + -4 + *piVar1) + uVar3 * 2)
          ;
          iVar6 = *piVar1;
          uVar3 = uVar3 + 1;
          piVar7 = piVar7 + 3;
        } while (uVar3 < *(uint *)(iVar10 + iVar6));
      }
      *(undefined4 *)(iVar2 + -8 + uVar3 * 0xc) = 0;
      iVar4 = func_00124BF0(iVar2);
      iVar9 = 0;
      uVar3 = 0;
      iVar6 = iVar4;
      if (*(uint *)(iVar10 + *D_00307C0C) > 0) {
        do {
          if (iVar6 == 0) break;
          if ((uVar3 == 0) || (*(short *)(iVar6 + 8) != local_4)) {
            iVar9 = iVar9 + 1;
          }
          local_4 = *(short *)(iVar6 + 8);
          iVar6 = *(int *)(iVar6 + 4);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(iVar10 + *D_00307C0C));
      }
      uVar5 = func_00116A90(iVar9 * 2,1,0);
      piVar1 = D_00307C0C;
      *(undefined4 *)(iVar10 + 4 + *D_00307C0C) = uVar5;
      uVar3 = 0;
      *(undefined4 *)(iVar10 + 8 + *piVar1) = 0;
      iVar6 = *piVar1;
      if (*(uint *)(iVar10 + iVar6) > 0) {
        do {
          if (iVar4 == 0) break;
          if ((uVar3 == 0) || (*(short *)(iVar4 + 8) != local_4)) {
            *(undefined2 *)(*(int *)(iVar10 + 4 + iVar6) + *(int *)(iVar10 + 8 + iVar6) * 2) =
                 *(undefined2 *)(iVar4 + 8);
            *(int *)(iVar10 + 8 + *piVar1) = *(int *)(iVar10 + 8 + *piVar1) + 1;
          }
          iVar6 = *piVar1;
          local_4 = *(short *)(iVar4 + 8);
          iVar4 = *(int *)(iVar4 + 4);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(iVar10 + iVar6));
      }
      func_00116FB0(iVar2);
      local_10 = local_10 + 1;
      iVar10 = iVar10 + 0x30;
    } while (local_10 < (uint)D_00307C0C[2]);
  }
  return;
}

void func_00096230(void) { volatile int marker = 22; (void)marker; }

int func_00110760(int);
int func_00110330(int, int);
extern int func_00116FB0(int);
void func_000968D0(int *p) {
    unsigned int i;
    func_00116FB0(p[5]);
    if ((unsigned)p[1] > 0) {
        for (i=0; i<(unsigned)p[2]; ++i) {
            func_00116FB0(*(int *)(*p+8+i*0x30));
            func_00116FB0(*(int *)(*p+i*0x30));
        }
        func_00116FB0(*p);
    }
    func_00116FB0((int)p);
}

undefined4 func_00096940(int param_1)
{
  return *(undefined4 *)(**(int **)(param_1 + 0x2c) + 0xe0);
}

void func_00096950(int *p, int q){int func_0011CD40(...),func_0011CDF0(...),func_0011CE10(...),func_0011CE20(...),func_0011CE30(...),func_0011CE50(...),func_0011CF30(...),func_0011CFC0(...),func_0011CF90(...),func_00131310(...); float func_00131760(...); extern float D_001D27B8,D_001D27EC,D_001D3418,D_001D27F4,D_001D27B0,D_001D515C,D_001D3F50,D_001D2C00,D_001D29D8,D_001D31C8,D_001D605C; unsigned int i; float f;
*p=func_0011CD40(0x23,10,5,5,1);
i=0; do{
do{ f=10.0f; f=f-func_00131760(); }while(f>D_001D27B8);
*(float *)(*(int *)(*p+4)+i)=(func_00131760()-D_001D27EC)*D_001D3418;
i+=12;
*(int *)(*(int *)(*p+4)+i-8)=0;
*(int *)(*(int *)(*p+4)+i-4)=0;
}while(i<0x1a4);
i=0; do{
int r=func_00131310();
*(int *)(*(int *)(*p+12)+i)=0;
if(r%10>6){
*(float *)(*(int *)(*p+12)+i+4)=func_00131760()*D_001D27F4+D_001D27B0;
*(float *)(*(int *)(*p+12)+i+8)=func_00131760()*D_001D515C+D_001D27EC;
}else{
*(float *)(*(int *)(*p+12)+i+4)=func_00131760()*D_001D27F4+D_001D27B0;
*(float *)(*(int *)(*p+12)+i+8)=D_001D3F50-func_00131760();
}
i+=12;
}while(i<0x78);
i=0; do{
*(float *)(*(int *)(*p+20)+i)=func_00131760()*D_001D2C00+D_001D29D8;
*(int *)(*(int *)(*p+20)+i+4)=*(int *)(*(int *)(*p+20)+i);
*(int *)(*(int *)(*p+20)+i+8)=*(int *)(*(int *)(*p+20)+i);
*(int *)(*(int *)(*p+20)+i+12)=0x3f333333;
i+=16;
}while(i<0x50);
i=0; do{
*(float *)(*(int *)(*p+28)+4+i)=func_00131760()*D_001D31C8+D_001D605C;
*(int *)(*(int *)(*p+28)+i)=*(int *)(*(int *)(*p+28)+4+i);
i+=8;
}while(i<0x28);
*(int *)(*(int *)(*p+36))=0;
*(int *)(*(int *)(*p+36)+4)=0;
*(int *)(*(int *)(*p+36)+8)=0x3f800000;
*(int *)(*(int *)(*p+36)+12)=0x3f4ccccd;
func_0011CDF0(q);func_0011CE20(q,0);func_0011CE10(q,0);func_0011CE30(q,0x430c0000,0x43200000);func_0011CE50(q,0,0,0,0xbeb33333);func_0011CF30(q,0,0);func_0011CFC0(q,0x42340000);func_0011CF90(q,0,0,0xc3340000,0);}

void _func_00096B60(void)
{
  extern int D_001D7210;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00096950(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D7210, _func_00096950);
  _func_0011D270(&D_001D7210, _func_00086E60);
  _func_0011D290(&D_001D7210, _func_00085E20);
  _func_0011D2B0(&D_001D7210, _func_000688D0);
}

void func_00096BA0(void) {
    extern int D_001D7210;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D7210);
}

void func_00096BB0(int *param_1, int param_2)
{
  int func_0011CD40(...);
  float func_00131760(void);
  float func_00131250(float);
  extern float D_001D27B8;
  extern float D_001D27EC;
  extern float D_001D27FC;
  extern float D_001D27AC;
  extern float D_001D27B0;
  extern float D_001D27F4;
  extern float D_001D2C00;
  extern float D_001D29D8;
  extern float D_001D2B60;
  extern float D_001D4270;
  int func_0011CDF0(...);
  int func_0011CE10(...);
  int func_0011CE20(...);
  int func_0011CE30(...);
  int func_0011CE50(...);
  int func_0011CF30(...);
  int func_0011CFC0(...);
  int func_0011CF90(...);
  int *piVar4;
  int iVar5;
  unsigned int uVar7;
  float fVar3;
  float fVar8;

  piVar4 = param_1;
  iVar5 = func_0011CD40(0x23,10,5,5,1);
  *param_1 = iVar5;
  uVar7 = 0;
  do {
    fVar8 = 10.0f;
    do {
      fVar8 = fVar8 - func_00131760();
    } while (fVar8 > D_001D27B8);
    *(float *)(uVar7 + *(int *)(*piVar4 + 4)) = (func_00131760() - D_001D27EC) * D_001D27FC;
    uVar7 = uVar7 + 0xc;
    *(int *)(*(int *)(*piVar4 + 4) - 8 + uVar7) = 0;
    *(int *)(*(int *)(*piVar4 + 4) - 4 + uVar7) = 0;
  } while (uVar7 < 0x1a4);
  uVar7 = 0;
  do {
    fVar3 = func_00131760() * D_001D27AC;
    *(float *)(uVar7 + *(int *)(*piVar4 + 0xc)) = func_00131250(fVar3) + func_00131760() * func_00131250(fVar3);
    *(float *)(*(int *)(*piVar4 + 0xc) + 4 + uVar7) = (func_00131760() + D_001D27B0) * D_001D27F4;
    uVar7 = uVar7 + 0xc;
    *(float *)(*(int *)(*piVar4 + 0xc) - 4 + uVar7) = func_00131250(fVar3) + func_00131760() * func_00131250(fVar3);
  } while (uVar7 < 0x78);
  uVar7 = 0;
  do {
    *(float *)(uVar7 + *(int *)(*piVar4 + 0x14)) = func_00131760() * D_001D2C00 + D_001D29D8;
    *(int *)(*(int *)(*piVar4 + 0x14) + uVar7 + 4) = *(int *)(*(int *)(*piVar4 + 0x14) + uVar7);
    *(int *)(*(int *)(*piVar4 + 0x14) + uVar7 + 8) = *(int *)(*(int *)(*piVar4 + 0x14) + uVar7);
    uVar7 = uVar7 + 0x10;
    *(float *)(*(int *)(*piVar4 + 0x14) - 4 + uVar7) = func_00131760() * D_001D2C00 + D_001D29D8;
  } while (uVar7 < 0x50);
  uVar7 = 0;
  do {
    *(float *)(*(int *)(*piVar4 + 0x1c) + 4 + uVar7) = func_00131760() * D_001D2B60 + D_001D4270;
    iVar5 = *(int *)(*piVar4 + 0x1c) + uVar7;
    uVar7 = uVar7 + 8;
    *(int *)iVar5 = *(int *)(iVar5 + 4);
  } while (uVar7 < 0x28);
  **(int **)(*piVar4 + 0x24) = 0;
  *(int *)(*(int *)(*piVar4 + 0x24) + 4) = 0;
  *(int *)(*(int *)(*piVar4 + 0x24) + 8) = 0x3f800000;
  *(int *)(*(int *)(*piVar4 + 0x24) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE20(param_2,0);
  func_0011CE10(param_2,0);
  func_0011CE30(param_2,0x42480000,0x42c80000);
  func_0011CE50(param_2,0,0,0,0xbf19999a);
  func_0011CF30(param_2,0x42200000,0x42200000);
  func_0011CFC0(param_2,0x41f00000);
  func_0011CF90(param_2,0,0,0xc3340000,0);
}

void _func_00096DE0(void)
{
  extern int D_001D7220;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00096BB0(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D7220, _func_00096BB0);
  _func_0011D270(&D_001D7220, _func_00086E60);
  _func_0011D290(&D_001D7220, _func_00085E20);
  _func_0011D2B0(&D_001D7220, _func_000688D0);
}

void func_00096E20(void) {
    extern int D_001D7220;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D7220);
}

void func_00096E30(int a0) {
    extern int D_00307C10;
    D_00307C10 = a0;
}

void func_00096E40(int param_1) {
 extern int D_00307C10;
 int *p = *(int **)(*(int *)(param_1 + 0x2c) + 0x28);
 if (D_00307C10 == 0) {
  while (p != 0) { func_00110760(*p); p=(int *)p[3]; }
 } else {
  while (p != 0) {
   if (((char (__cdecl *)(int))D_00307C10)(*p) != 0) func_00110330(0, *p);
   else func_00110760(*p);
   p=(int *)p[3];
  }
 }
}

void func_00096EB0(int param_1)
{
  int func_0011B990(...);
  int __stdcall func_0014DF80(int);
  int func_00116FB0(...);
  int func_000968D0(...);
  short *psVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    psVar1 = (short *)(*(int *)(param_1 + 0x100) + 0x2a);
    *psVar1 = *psVar1 + -1;
    func_0011B990(*(undefined4 *)(param_1 + 0x100));
  }
  func_0014DF80((int)(*(undefined4 *)(param_1 + 0xf8)));
  *(undefined4 *)(param_1 + 0xf8) = 0;
  func_0014DF80((int)(*(undefined4 *)(param_1 + 0xfc)));
  *(undefined4 *)(param_1 + 0xfc) = 0;
  func_00116FB0(0);
  func_000968D0(*(undefined4 *)(param_1 + 0xf4));
  return;
}

void func_00096F20(undefined4 param_1, int param_2, undefined4 param_3)
{
  int func_0010F750(...);
  extern undefined4 D_00307C58;
  int iVar1;
  
  iVar1 = func_0010F750(*(undefined4 *)(param_2 + 0xc),D_00307C58,0x120);
  *(undefined4 *)(iVar1 + 0xe0) = param_3;
  *(undefined4 *)(iVar1 + 0xe4) = 0;
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  return;
}

