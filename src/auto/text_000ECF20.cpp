/* 15 functions from 0x000ECF20 to 0x000EDF00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

void __fastcall func_000ED300(int self, int unused, float x, float y, float w, float h)
{
  void func_00133F30(int *);
  void func_0011E4A0(float, float, float, float, float *, float *, float *, float);
  void func_000688D0(void);
  float a[2], b[2], c[4];
  int d[21];
  d[0] = 2; d[1] = 2; d[2] = self; d[6] = 3; d[10] = 1; d[11] = 1; d[12] = 0; d[17] = 0; d[18] = 6; d[19] = 2;
  c[0] = c[1] = c[2] = c[3] = 1.0f;
  a[0] = 0.0f; a[1] = 0.0f;
  b[0] = 1.0f; b[1] = 1.0f;
  func_00133F30(d);
  func_0011E4A0(x, y, x + w, y + h, a, b, c, 1.0f);
  func_000688D0();
}

void func_000ED480(void)
{
  extern char D_001D29C7, D_001D5CC4, D_001D788C, D_001DC9E4, D_001DC9CC, D_001DC9B4, D_001DC99C, D_001DC984;
  extern int D_003245F0, D_003245CC, D_003245AC, D_003245D0, D_003245B0, D_003245D4, D_003245B4, D_003245D8, D_003245B8;
  extern int D_003245A8, D_003245EC, D_00313B00, D_003245A4;
  int func_000688D0(...), func_00131780(...), func_00131990(...), func_00120BF0(...);
  int func_0011BF40(...), func_0011BDD0(...), func_0013B380(...), func_0006E860(...), func_0006E9B0(...);
  func_000688D0();
  func_00131780(&D_001D5CC4, &D_001D29C7);
  func_000688D0();
  func_000688D0();
  func_00131990(&D_001D788C);
  D_003245F0 = func_00120BF0(&D_001DC9E4);
  func_00131990(&D_001D29C7);
  func_000688D0();
  func_000688D0();
  D_003245CC = func_0011BF40(&D_001DC9CC, 0);
  D_003245AC = func_0011BDD0(D_003245CC, 0);
  D_003245D0 = func_0011BF40(&D_001DC9B4, 0);
  D_003245B0 = func_0011BDD0(D_003245D0, 0);
  D_003245D4 = func_0011BF40(&D_001DC99C, 0);
  D_003245B4 = func_0011BDD0(D_003245D4, 0);
  D_003245D8 = func_0011BF40(&D_001DC984, 0);
  D_003245B8 = func_0011BDD0(D_003245D8, 0);
  func_000688D0();
  D_003245A8 = 0;
  D_003245EC = func_0013B380(D_00313B00);
  D_003245A4 = 0;
  func_0006E860();
  func_0006E9B0();
  func_0006E860();
}

void func_000ED590(void)
{
  int func_000688D0(...);
  int func_00120DD0(...);
  extern undefined4 D_003245F0;
  extern undefined4 D_003245CC;
  int func_0011B990(...);
  extern undefined4 D_003245D0;
  extern undefined4 D_003245D4;
  extern undefined4 D_003245D8;
  int func_001317D0(...);
  extern undefined D_001D29C7;
  func_000688D0();
  func_000688D0();
  func_00120DD0(D_003245F0);
  func_000688D0();
  func_000688D0();
  *(short *)(D_003245CC + 0x2a) = *(short *)(D_003245CC + 0x2a) + -1;
  func_0011B990(D_003245CC);
  *(short *)(D_003245D0 + 0x2a) = *(short *)(D_003245D0 + 0x2a) + -1;
  func_0011B990(D_003245D0);
  *(short *)(D_003245D4 + 0x2a) = *(short *)(D_003245D4 + 0x2a) + -1;
  func_0011B990(D_003245D4);
  *(short *)(D_003245D8 + 0x2a) = *(short *)(D_003245D8 + 0x2a) + -1;
  func_0011B990(D_003245D8);
  func_000688D0();
  func_000688D0();
  func_001317D0(((undefined *)&D_001D29C7));
  func_000688D0();
  return;
}

void _func_000ED830(int a, int b, int c, int d, int e, int g)
{
  extern int D_0032464C, D_00324648;
  extern char *D_00324650;
  extern float D_00324654, D_0032465C, D_001D2800, D_001D27B0, D_001D27B8;
  float func_001219C0(char *);
  float func_00131210(float);
  int func_00137870(int, int, int, float);
  int func_00105510(int, int, int, int, int, int);
  char buf[0x400];
  int n;
  long double v;
  if (D_0032464C < 1)
    D_0032464C = D_00324648;
  n = D_0032464C - 1;
  memcpy(buf, D_00324650, n);
  buf[D_0032464C - 1] = 0;
  D_0032464C = n;
  v = func_001219C0(buf);
  v = func_00131210((float)(((long double)D_001D2800 - (v + (long double)D_00324654)) / (long double)D_0032465C));
  v = (long double)D_001D27B0 - v;
  if (v < (long double)D_001D27B8 || (long double)D_001D27B0 < v)
    v = (long double)D_001D27B8;
  func_00105510(a, b, c, func_00137870(0x3f800000, 0x3f800000, 0x3f800000, (float)((long double)D_001D27B0 - ((long double)D_001D27B0 - v) * ((long double)D_001D27B0 - v))), e, g);
}

void func_000EDA30(void)
{
  extern int D_00324650, D_00324660, D_00324664;
  extern float D_00324654, D_001D2808, D_001D2800, D_0032465C, D_00324658;
  int func_00120F60(...), func_00120F70(...), func_00120E20(...);
  double func_001219C0(...);
  if (D_00324650) {
    D_00324660 = *(int *)&D_00324654;
    D_00324654 = D_00324654 - D_001D2808;
    func_00120F60(0x3f4ccccd);
    func_00120F70(0x3f4ccccd);
    func_00120E20(0,0,0x459c4000,0x43f00000);
    if (!(func_001219C0(D_00324650) + D_00324654 >= D_001D2800 - D_0032465C)) {
      D_00324664++;
      D_00324654 = D_00324658;
    }
    func_00120E20(0,0,0x44200000,0x43f00000);
  }
}

extern undefined4 D_001D27EC;
extern undefined4 D_003246D4;
extern undefined4 D_001D27B0;
extern undefined4 D_001D27AC;
longdouble func_00131250(float param_1, float param_2);
void func_000EDBC0(float param_1, float param_2, float param_3, float param_4, int param_5);
void _func_000EDD30(float param_1, float param_2, float param_3, float param_4)
{
  // fld st, dword ptr [esp+0x10]; fsub st, dword ptr [esp+0x8]; fmul st, dword ptr [_D_001D27EC]
  float temp1 = param_3; // Assume param_3 is at esp+0x10 (or similar)
  float temp2 = param_1; // Assume param_1 is at esp+0x8 (or similar)
  float fVar5 = (temp1 - temp2) * D_001D27EC; 

  // fld st, dword ptr [esp+0x14]; fsub st, dword ptr [esp+0xc]; fmul st, dword ptr [_D_001D27EC]
  float temp3 = param_4; // Assume param_4 is at esp+0x14
  float temp4 = param_2; // Assume param_2 is at esp+0xc (or similar)
  float fVar1 = (temp3 - temp4) * D_001D27EC;

  // fld st, dword ptr [esp]; fadd st, dword ptr [esp+0x8]; ffstp dword ptr [esp+0x14], st
  float p1_new = fVar5 + param_1; 
  
  // fld st, dword ptr [esp+0x10]; fadd st, dword ptr [esp+0xc]; ffstp dword ptr [esp+0x8], st
  float p2_new = fVar1 + param_2;

  // fld st, dword ptr [_D_003246D4]; fld st, dword ptr [_D_003246D4]
  float fVar2 = D_003246D4; 
  if (D_001D27B0 < D_003246D4) { // Original: fcomp st, dword ptr [_D_001D27B0]; fnstsw ax; test ah, 0x41; jne short 0xe6c
    fVar2 = D_001D27B0;
  }

  // lVar3 calculation:
  longdouble lVar3 = (longdouble)func_00131250(fVar2 * D_001D27AC, fVar5);

  // Replicating the arithmetic structure for lVar3:
  lVar3 = ((longdouble)D_001D27B0 - (lVar3 + (longdouble)D_001D27B0) * (longdouble)D_001D27EC) 
          + (longdouble)D_001D27B0;

  // lVar4 calculation:
  longdouble lVar4 = (longdouble)fVar1 * lVar3; 

  // fVar5 update:
  float fVar5_new = (float)(lVar3 * (longdouble)fVar5);

  // temp_var and temp_var2 calculations:
  float temp_var = param_1 - fVar5_new; 
  float temp_var2 = (param_2 - lVar4) / 2.0f; 

  // final_var calculation (unused in the call below, but keeping structure):
  float final_var = (param_1 - temp_var) + (param_2 - lVar4); 

  func_000EDBC0(temp_var, temp_var2, fVar5_new + param_1, 
                 (float)((longdouble)param_2 - lVar4), 0);
}

int __fastcall func_000EDE10(int a) {
  switch (a) {
  case 2: return 6;
  case 4: return 1;
  case 5: return 2;
  case 6: return 3;
  case 7: return 4;
  case 8: return 5;
  case 9: return 7;
  default: return 0;
  }
}

void func_000EDE70(void)
{
  void func_0012F120(...), func_0012FE20(...), func_001105E0(...);
  extern int D_003246C0, D_003246C4, D_003246C8, D_003246F0;
  extern int D_0032460C, D_003246BC, D_00324600;
  __declspec(align(16)) char local[0x40];

  func_0012F120(local);
  func_0012FE20(local, 0, 0x40490fd0, 0);
  *(int *)(local + 0x30) = D_003246C0;
  *(int *)(local + 0x34) = D_003246C4;
  *(int *)(local + 0x38) = D_003246C8;
  func_001105E0(D_003246F0, local, 0);
  func_0012F120(local);
  func_0012FE20(local, D_003246BC, D_0032460C, 0);
  func_001105E0(D_00324600, local, 0);
}

