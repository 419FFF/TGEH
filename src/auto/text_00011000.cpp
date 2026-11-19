/* 8 functions from 0x00011000 to 0x00011E2E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00011130(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  extern undefined4 D_002EAF64;
  extern undefined4 D_002EAF68;
  extern undefined4 D_002EAF6C;
  extern undefined4 D_002EAF70;
  extern undefined4 D_002EAEC8;
  extern undefined4 D_002EAF74;
  int func_0012F120(...);
  extern undefined D_002EAF00;
  extern undefined4 D_002EAEF0;
  D_002EAF64 = param_1;
  D_002EAF68 = param_2;
  D_002EAF6C = param_3;
  D_002EAF70 = param_4;
  D_002EAEC8 = 0;
  D_002EAF74 = param_5;
  func_0012F120(((undefined *)&D_002EAF00));
  D_002EAEF0 = 1;
  return;
}

extern int _D_002EAEC8;
extern float _D_002EAE70;
extern float _D_002EAF58;
extern float _D_002EAEAC;
extern float _D_002EAE60;
extern float _D_002EAEA8;
extern float _D_001D2808;
extern float _D_001D27B0;
extern void __cdecl func_00011000(float);
void func_00011190(float dt) { switch (_D_002EAEC8) { case 0: _D_002EAE70=1000.f; _D_002EAF58=1000.f; _D_002EAEAC=1000.f; _D_002EAE60=1000.f; _D_002EAEA8=0.f; _D_002EAEC8=1; break; case 1: _D_002EAEA8+=dt*_D_001D2808; if (_D_002EAEA8>=_D_001D27B0) { _D_002EAEA8=1.f; func_00011000(dt); } break; default: break; } }

void func_00011CB0(undefined4 *param_1, undefined4 *param_2)
{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  return;
}

undefined4 func_00011D20(int param_1)
{
  if ((*(char *)(param_1 + 0x175) == '\0') && (*(char *)(param_1 + 0x174) == '\0')) {
    return 0;
  }
  return 1;
}

long double func_00011D40(int param_1)
{
  extern float D_001D280C;
  extern char D_002EB02D;
  if (*(int *)(param_1 + 0x178) == 9 && !(*(float *)(param_1 + 0x1a0) >= D_001D280C)) D_002EB02D = 1;
  return *(float *)(param_1 + 0x17c + *(int *)(param_1 + 0x178) * 4) * *(float *)(param_1 + 0x168);
}

longdouble func_00011D80(int param_1)
{
  return (longdouble)*(float *)(param_1 + 0x17c + *(int *)(param_1 + 0x178) * 4) *
         (longdouble)*(float *)(param_1 + 0x16c);
}

void func_00011DA0(void)
{
  extern int D_002EAF84, D_002EAF88, D_00313B54, D_00308158;
  extern char D_001D2858, D_001D2848, D_001D2838, D_001D2824, D_001D2810;
  int func_000F9280(...);
  int func_00110300(...);
  D_002EAF84 = 0;
  D_002EAF88 = 0;
  switch (D_00313B54) {
  case 3:
    D_002EAF84 = func_000F9280(&D_001D2824);
    D_002EAF88 = func_000F9280(&D_001D2810);
    break;
  case 5:
    D_002EAF84 = func_00110300(*(int *)(D_00308158 + 0x2c), &D_001D2848, 0);
    D_002EAF88 = func_00110300(*(int *)(D_00308158 + 0x2c), &D_001D2838, 0);
    break;
  case 7:
    D_002EAF84 = func_000F9280(&D_001D2858);
  }
}

