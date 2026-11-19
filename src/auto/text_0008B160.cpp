/* 19 functions from 0x0008B160 to 0x0008C11F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern char D_001D6E74[];
extern char D_001D6E58[];
extern char D_001D29E4[];
void func_0011E3D0(int);
int func_0009CBE0(char *);
void func_0011CFC0(int, float);
int func_00115100(int, char *);
void func_00115170(int, int, float *);
void func_001105E0(int, float *, int);
float func_0012E7B0(float *, float *);
void func_0008B160(int param_1, int param_2, int param_3) {
    int *obj;
    int *pinky;
    int *sweat;
    __declspec(align(16)) float mat[16];
    int idx;

    func_0011E3D0(param_1);
    obj = *(int **)(param_1 + 0x17c);
    pinky = (int *)func_0009CBE0(D_001D6E74);
    sweat = (int *)func_0009CBE0(D_001D6E58);
    if (pinky == 0) {
        func_0011CFC0(param_1 + 0x54, 0.0f);
        return;
    }
    if (sweat != 0) {
        idx = func_00115100(*(int *)((char *)pinky + 0x98), D_001D29E4);
        if (idx != -1) {
            func_00115170(*(int *)((char *)pinky + 0x98), idx, mat);
            mat[12] = (float)(*(float *)(*(int *)((char *)pinky + 0x2c) + 0x70) + (long double)mat[12]);
            mat[13] = (float)(*(float *)(*(int *)((char *)pinky + 0x2c) + 0x74) + (long double)mat[13]);
            mat[14] = (float)(*(float *)(*(int *)((char *)pinky + 0x2c) + 0x78) + (long double)mat[14]);
            mat[15] = (float)(*(float *)(*(int *)((char *)pinky + 0x2c) + 0x7c) + (long double)mat[15]);
            func_001105E0(*(int *)((char *)sweat + 0x2c), mat, 1);
        }
        {
            float dist = func_0012E7B0((float *)(obj + 1), (float *)(param_3 + 0x30));
            func_0011CFC0(param_1 + 0x54, dist);
        }
        obj[1] = *(int *)(param_3 + 0x30);
        obj[2] = *(int *)(param_3 + 0x34);
        obj[3] = *(int *)(param_3 + 0x38);
    }
}

void func_0008B280(void) {
    extern int D_001D6E88;
    extern void func_0008AF60(void);
    extern void func_0008B120(void);
    extern void func_00079D10(void);
    extern void func_0008B160(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0008AF60, &D_001D6E88);
    func_0011D270(func_0008B120, &D_001D6E88);
    func_0011D290(func_00079D10, &D_001D6E88);
    func_0011D2B0(func_0008B160, &D_001D6E88);
    func_0011D2D0(func_00092810, &D_001D6E88);
    func_0011D2F0(func_00083D60, &D_001D6E88);
}

void func_0008B2E0(void) {
    extern int D_001D6E88;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E88);
}

void func_0008B2F0(int *param_1, int param_2)
{
  int func_0011CD40(...);
  float func_00131760(void);
  extern float D_001D2C00;
  extern float D_001D29D8;
  int func_0011CDF0(...);
  int func_0011CE20(...);
  int func_0011CE10(...);
  int func_0011CE30(...);
  int func_0011CE50(...);
  int func_0011CF30(...);
  int func_0011CFC0(...);
  int iVar1;
  unsigned int uVar2;

  iVar1 = func_0011CD40(1,5,1,4,1);
  *param_1 = iVar1;
  *(int *)(*(int *)(iVar1 + 4) + 8) = 0;
  *(int *)(*(int *)(*param_1 + 4) + 4) = 0;
  **(int **)(*param_1 + 4) = 0;
  uVar2 = 0;
  do {
    *(int *)(uVar2 + *(int *)(*param_1 + 0xc)) = 0;
    *(int *)(*(int *)(*param_1 + 0xc) + 4 + uVar2) = 0;
    double f = func_00131760();
    uVar2 = uVar2 + 0xc;
    *(float *)(*(int *)(*param_1 + 0xc) + -4 + uVar2) = (float)(f * D_001D2C00 + D_001D29D8);
  } while (uVar2 < 0x78);
  *(int *)(*(int *)(*param_1 + 0x1c) + 4) = 0x41000000;
  **(int **)(*param_1 + 0x1c) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0xc) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 8) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x14) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x10) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x1c) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x18) = 0x41000000;
  **(int **)(*param_1 + 0x24) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 8) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x24) + 0xc) = 0x3f800000;
  **(int **)(*param_1 + 0x14) = 0x3dcccccd;
  *(int *)(*(int *)(*param_1 + 0x14) + 4) = 0x3dcccccd;
  *(int *)(*(int *)(*param_1 + 0x14) + 8) = 0x3dcccccd;
  *(int *)(*(int *)(*param_1 + 0x14) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE20(param_2,0x3fc00000);
  func_0011CE10(param_2,0x40000000);
  func_0011CE30(param_2,0x41f00000,0x42700000);
  func_0011CE50(param_2,0xbdcccccd,0xbdcccccd,0xbdcccccd,0);
  func_0011CF30(param_2,0x42200000,0x42200000);
  func_0011CFC0(param_2,0x41800000);
}

void func_0008B450(undefined4 param_1)
{
  int func_0011DED0(...);
  extern undefined4 D_002FE010;
  extern undefined4 D_00307DB4;
  func_0011DED0(param_1);
  D_002FE010 = D_00307DB4;
  return;
}

void _func_0008B5F0(void)
{
  extern int D_001D3C7C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0008B2F0(...);
  int _func_0008B450(...);
  int _func_00085E20(...);
  int _func_0008B470(...);
  _func_0011D000(&D_001D3C7C, _func_0008B2F0);
  _func_0011D270(&D_001D3C7C, _func_0008B450);
  _func_0011D290(&D_001D3C7C, _func_00085E20);
  _func_0011D2B0(&D_001D3C7C, _func_0008B470);
}

void func_0008B630(void) {
    extern int D_001D3C7C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D3C7C);
}

void func_0008B810(int p, int flag)
{
    if(flag) {
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+0)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+4)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+8)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+12)=0x3f800000;
    } else {
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+0)=0x3e99999a;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+4)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+8)=0;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+12)=0x3f800000;
    }
}

void func_0008B890(void)
{
  extern int D_001D6E98;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_0008B640(...); int func_00086E60(...); int func_00085E20(...); int func_000688D0(...); int func_0008B810(...);
  func_0011D000(&D_001D6E98,func_0008B640);
  func_0011D270(&D_001D6E98,func_00086E60);
  func_0011D290(&D_001D6E98,func_00085E20);
  func_0011D2B0(&D_001D6E98,func_000688D0);
  func_0011D2D0(&D_001D6E98,func_0008B810);
}

void func_0008B8E0(void) {
    extern int D_001D6E98;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E98);
}

void _func_0008BA90(void)
{
  extern int D_001D6EAC;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0008B8F0(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6EAC, _func_0008B8F0);
  _func_0011D270(&D_001D6EAC, _func_00086E60);
  _func_0011D290(&D_001D6EAC, _func_00085E20);
  _func_0011D2B0(&D_001D6EAC, _func_000688D0);
}

void func_0008BAD0(void) {
    extern int D_001D6EAC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6EAC);
}

void func_0008BD80(void)
{
  int func_001160B0(...);
  extern undefined4 D_002FE01C;
  int func_00110760(...);
  extern undefined4 D_002FE018;
  extern undefined4 D_002FE028;
  extern undefined4 D_002FE024;
  func_001160B0(D_002FE01C);
  func_00110760(D_002FE018);
  func_001160B0(D_002FE028);
  func_00110760(D_002FE024);
  return;
}

