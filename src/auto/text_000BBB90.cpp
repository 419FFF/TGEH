/* 10 functions from 0x000BBB90 to 0x000BCAA4, found by Ghidra. */
#include "common.h"

struct Plr { int d[0x7c]; };
extern int* D_00314414;
extern int D_001D9210;
extern int D_003251A8;
extern int D_00314BD4;
extern int D_001D918C;
extern int D_001D8484;
extern int D_001D84D4;
extern int D_00313B60;
extern int D_00314300;
extern int D_00324AFC;
extern int D_0033116C;
extern int D_00314B38;
extern int D_00307DF8;
extern int D_00314B28;
extern int D_00314B24;
extern int D_00308158;
extern int D_003251A8;

#pragma optimize("y", on)
void func_000BBB90(void) {}

void func_000BC190(void)
{
  extern int D_00314B2C, D_00313B54, D_003080AC, D_00314B34, D_00314348, D_0031434C, D_00314350, D_00314354;
  extern float D_00314338, D_001D29E0;
  extern char D_001D93F4, D_001D93E8, D_001D93E0, D_001D93D8, D_001D93D4, D_001D93D0, D_001D93CC, D_001D93C8;
  int func_000A2560(...), func_0013E469(...);
  int func_001313C0(float);
  int func_000AFD10(...);
  int func_00120E50(...), func_00120EA0(...), func_00121990(...), func_000A2E40(...);
  int iVar1, uVar2;
  char local_100[256];
  if (D_00314B2C != 0 && D_00313B54 == 8 && D_003080AC != 2) {
    func_000A2560(0x3f99999a);
    iVar1 = func_001313C0((float)((double)D_00314338 * D_001D29E0));
    iVar1 = iVar1 + 1;
    if (7 < iVar1) {
      iVar1 = 7;
    }
    uVar2 = func_000AFD10(&D_001D93F4, iVar1, 7);
    func_0013E469(local_100, &D_001D93E8, uVar2);
    func_00120E50(0x41c00000, 0x42700000);
    func_00120EA0(0, 1, 0, 0);
    func_00121990(local_100);
    uVar2 = func_000AFD10(&D_001D93E0, D_00314B34);
    func_0013E469(local_100, &D_001D93D8, uVar2);
    func_00120E50(0x441a0000, 0x42700000);
    func_00120EA0(2, 1, 0, 0);
    func_00121990(local_100);
    func_00120EA0(1, 1, 0, 0);
    func_00120E50(0x44020000, 0x43660000);
    func_00121990(&D_001D93D4, D_00314348);
    func_00120E50(0x44020000, 0x43910000);
    func_00121990(&D_001D93D0, D_0031434C);
    func_00120E50(0x44020000, 0x43af0000);
    func_00121990(&D_001D93CC, D_00314350);
    func_00120E50(0x44020000, 0x43cd0000);
    func_00121990(&D_001D93C8, D_00314354);
    func_000A2E40(D_00314348, D_0031434C, D_00314350, D_00314354);
  }
}

int _func_001031C0(int a, int b);
int func_00102E80(int);
int func_0009C590(int);
void func_000687F0();
void func_00068800(int);
void func_00136450();
int func_000F91D0(int);
int func_000F86E0(int);
void func_00110420(int, int*);
void func_00110480(int*, int, int);
void func_00124AD0();
void func_00110760(int);
int func_0008F610(int);
int func_0008F740(int);
int func_0005CCC0(int);
void func_0002DF20(int);
int func_0009D3E0(int);
int func_0009D640(int);
void func_0010F8A0();
void func_0011BE30();
int func_000F8B60(int, int);
void func_000F9700();
void func_000F9610(int*);
void func_00107C40(int, int, int);

int _func_000BC340(int a, int b, int c, int *p) { extern int D_00314B30; *p = D_00314B30; return 1; }

void func_000BC360(void) {
    int func_0011F890(...); int func_0012F120(...); int func_0012FE20(...); int func_001105E0(...);
    int func_0009C1F0(...); extern char D_001D68E4; extern int D_00314B30; extern int D_0033116C;
    func_0008F610(0);
    func_0008F740(0);
    __declspec(align(16)) char m[64];
    int d[10] = {0};
    d[0] = 1; d[1] = 0x3f800000; d[2] = 0x3f800000; d[3] = 0x3f800000;
    d[6] = 0x3f800000;
    D_00314B38 = func_0011F890(&D_001D68E4, d);
    func_0012F120(m);
    func_0012FE20(m, 0x3fc90fd0, 0, 0);
    func_001105E0(D_00314B38, m, 0);
    func_00124AD0();
    D_00314300 = D_0033116C;
    D_0033116C = 0;
    func_0009C1F0(D_00314B30, -1);
}

void func_000BC450(void) {
    int func_000B6510(...);
    func_000B6510(16, 0);
}

unsigned char func_000BC460(int *out)
{
  unsigned char new_var;
  extern int D_00314B28;
  extern int D_00314B24;
  if (D_00314B28 == 2)
  {
    int value = D_00314B24;
    new_var = 0x3f800000;
    D_00314B28 = 0;
    if (value)
    {
      *out = 0;
      return 1;
    }
    *out = new_var;
    return 1;
  }
  return 0;
}

void func_000BC4A0(void)
{
  extern unsigned short D_0031151F;
  int func_00136450(...);
  extern int D_00314B2C;
  int func_00110420(...);
  int func_00110480(...);
  int func_00012040(...);
  int func_000F8F40(...);
  int func_000F91D0(...);
  extern char D_001D93F8, D_001D2B50, D_0000FFFF;
  int func_000F86E0(...);
  int func_0010F8A0(...);
  int func_0011BE30(...);
  int func_000688D0(...);
  int func_000F8870(...);
  int func_0009C590(...);
  int func_0009D280(...);
  int func_0009D780(...);
  int func_0011BED0(...);
  int func_0009D9E0(...);
  extern int D_00314418, D_00314604, D_003147F4, D_003149E4, D_00314B3C;
  int func_001105E0(...);
  int func_00110000(...);
  int func_0006B5A0(...);
  int func_0005CCC0(...);
  int func_0002D7B0(...);
  int func_000BBAD0(...);
  int func_000BC360(...);
  extern int D_0031437C, D_00314B5C, D_0031436C, D_00314360, D_00314B34, D_00314358;
  extern float D_00314338;
  extern unsigned char D_00314B60;
  int func_001031C0(...);
  int func_00103990(...);
  int func_001031A0(...);
  int func_0012E750(...);
  int func_00110060(...);
  float func_00131610(...);
  int func_000BB8E0(...);
  int func_000A1D10(...);
  int func_000BA0F0(...);
  int func_000687C0(...);
  int func_000B5520(...);
  int uVar1;
  int *piVar3;
  int *puVar4;
  int iVar2;
  __declspec(align(16)) int local_50[16];

  D_0031151F |= 2;
  func_00136450();
  uVar1 = **(int **)(*(int *)(D_00314B2C + 0x2c) + 0x2c);
  func_00110420(D_00313B60, **(int **)(D_00313B60 + 0x2c));
  func_00110480(uVar1, D_00313B60, 0);
  func_00012040(D_00307DF8, uVar1);
  D_00324AFC = func_000F8F40(*(int *)(D_00314B2C + 0x2c));
  uVar1 = func_000F91D0(&D_001D84D4);
  func_000F86E0(uVar1);
  func_0010F8A0();
  func_0010F8A0();
  func_0010F8A0();
  func_0011BE30();
  func_0011BE30();
  func_0011BE30();
  func_000688D0();
  uVar1 = func_000F91D0(&D_001D8484);
  func_000F8870(uVar1);
  uVar1 = func_0009C590(&D_001D918C);
  func_0009D280(uVar1);
  func_0009D780(uVar1);
  func_0011BED0();
  func_0009D9E0(uVar1);
  func_000688D0();
  piVar3 = (int *)&D_00314414;
  do {
    func_001105E0(*(int *)(*piVar3 + 0x2c), piVar3 - 0x11, 0);
    func_00110000(*(int *)(*piVar3 + 0x2c));
    piVar3 = piVar3 + 0x7c;
  } while ((int)piVar3 < (int)&D_00314BD4);
  func_0006B5A0(D_00314414, &D_001D2B50);
  func_0006B5A0(D_00314418, &D_001D2B50);
  func_0006B5A0(D_00314604, &D_001D2B50);
  func_0006B5A0(D_003147F4, &D_001D2B50);
  func_0006B5A0(D_003149E4, &D_001D2B50);
  func_00110420(D_00313B60, **(int **)(D_00313B60 + 0x2c));
  func_00110480(*(int *)(func_0009C590(&D_001D918C) + 0x2c), D_00313B60, 8);
  func_0005CCC0(7);
  func_0002D7B0(D_00307DF8, 1);
  func_000BBAD0();
  func_00110000(D_00313B60);
  func_000BC360();
  puVar4 = &D_0031437C;
  do {
    func_00103990(func_001031C0(puVar4[0x26], &D_001D9210), 1);
    func_001031A0(func_001031C0(puVar4[0x26], &D_001D9210), 0);
    puVar4[-3] = 0;
    puVar4[-4] = 0;
    func_0012E750(puVar4 + 0xd);
    func_00110060(*(int *)(puVar4[0x26] + 0x2c), local_50);
    puVar4[-1] = local_50[7];
    *puVar4 = local_50[8];
    puVar4[-2] = local_50[6];
    puVar4[1] = local_50[9];
    ((float *)puVar4)[-4] = ((float *)puVar4)[0xc] = func_00131610(local_50[0], local_50[2]);
    puVar4[7] = 0;
    puVar4[8] = 0x3f800000;
    puVar4[9] = 0;
    puVar4[0x68] = 0x3dcccccd;
    puVar4[6] = 0;
    puVar4[0x61] = 0;
    *(char *)(puVar4 + 0x70) = 0;
    *((char *)puVar4 + 0x1c1) = 0;
    *((char *)puVar4 + 0x1c2) = 0;
    *(char *)(puVar4 + 0x71) = 0;
    *((char *)puVar4 + 0x1c3) = 0;
    puVar4[0x72] = 0;
    puVar4 = puVar4 + 0x7c;
  } while ((int)puVar4 < (int)&D_00314B3C);
  D_00314B5C = D_0031436C;
  D_00314B60 = 1;
  iVar2 = 0;
  puVar4 = &D_00314360;
  do {
    ((int *)&D_00314338)[iVar2] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    func_000BB8E0(iVar2);
    func_000A1D10(puVar4[0x6c], 2, 0, &D_0000FFFF, 0x41c00000, 0);
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 0x7c;
  } while (iVar2 < 4);
  func_000BA0F0();
  D_00314B60 = 0;
  func_000687C0(&D_001D93F8);
  D_00314B34 = 3;
  D_00314B24 = 0xffffffff;
  D_00314B28 = 1;
  D_00314358 = 0;
  func_000B5520(1);
}

void func_000BC990(int a, int b) {
 int func_0009C590(...);
 int func_00110060(...);
 int func_001105E0(...);
 char local[64];
 int p=func_0009C590(b);
 func_00110060(*(int *)(p+0x2c), local);
 func_001105E0(*(int *)(a+0x2c), local, 1);
}

void func_000BC9D0(float param_1)
{
  extern int D_001D27B8;
  extern int D_00314CD4;
  extern int D_00314CD8;
  extern int D_00314CDC;
  extern int D_00314CF0;
  extern int D_00314CF4;
  extern int D_001D27B0;
  extern int D_001D29F4;
  extern int D_00314C74;
  extern int D_002EEC40;
  extern int D_002EEC44;
  extern int D_00314CF8;
  extern int D_00314CE4;
  extern int D_002EEC48;
  extern int D_00314CE8;
  extern int D_002EEC4C;
  extern int D_00314CEC;

  // Attempting to match the float comparison logic by comparing param_1 directly 
  // against the integer addresses, hoping the compiler handles the type conversion.
  if (param_1 == (float)D_001D27B8) {
    D_00314CD4 = 0;
    D_00314CD8 = 0;
    D_00314CDC = 0;
    D_00314CF0 = 0;
    D_00314CF4 = 0;
  } else if (param_1 == (float)D_001D27B0) {
    // Using hex literals for float constants where possible, assuming they are stored as floats.
    D_00314CD4 = 0x3f800000; // Float(1.0)
    D_00314CD8 = 0;
    D_00314CDC = 0x3cf5c28f; // Float(0.5)
    D_00314CF0 = 0;
    D_00314CF4 = 1;
  } else if (param_1 == (float)D_001D29F4) {
    D_00314CF0 = D_00314C74;
    D_00314CE4 = D_002EEC44;
    D_00314CE8 = D_002EEC48;
    D_00314CEC = D_002EEC4C;
    D_00314CF4 = 2;
    D_00314CF8 = 0x3f800000; // Float(1.0)
  }
}

#pragma optimize("y", on)
