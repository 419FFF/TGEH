/* 17 functions from 0x00081DC0 to 0x00082CBB, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
static int D_002FBB18;

void _func_00081F60(void)
{
  extern int D_001D67EC;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00081DC0(...);
  int _func_00081460(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D67EC, _func_00081DC0);
  _func_0011D270(&D_001D67EC, _func_00081460);
  _func_0011D290(&D_001D67EC, _func_00085E20);
  _func_0011D2B0(&D_001D67EC, _func_000688D0);
}

void func_00081FA0(void) {
    extern int D_001D67EC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D67EC);
}

void func_00082230(int param_1, int param_2)
{
  extern float D_001D27B8;
  extern int D_002FBB08, D_0030809C;
  extern char D_002FBB04;
  int func_000F8F40(...);
  int func_00110420(...);
  int func_00110480(...);
  int iVar1;
  unsigned int uVar1;
  unsigned int uVar3;
  float *pfVar4;

  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = *(int *)(param_1 + 0x15c);
    uVar1 = iVar1;
    uVar3 = 0;
    if (iVar1 >= 4) {
      pfVar4 = (float *)(*(int *)(param_1 + 0x160) + 0x78);
      do {
        if ((long double)D_001D27B8 != pfVar4[-0x16]) goto done;
        if ((long double)D_001D27B8 != pfVar4[0]) {
          uVar3++;
          goto done;
        }
        if ((long double)D_001D27B8 != pfVar4[0x16]) {
          uVar3 += 2;
          goto done;
        }
        if ((long double)D_001D27B8 != pfVar4[0x2c]) {
          uVar3 += 3;
          goto done;
        }
        uVar3 += 4;
        pfVar4 += 0x58;
      } while (uVar3 < uVar1 - 3);
    }
    if (uVar3 < uVar1) {
      pfVar4 = (float *)(*(int *)(param_1 + 0x160) + 0x20 + uVar3 * 0x58);
      do {
        if ((long double)D_001D27B8 != *pfVar4) break;
        uVar3++;
        pfVar4 += 0x16;
      } while (uVar3 < uVar1);
    }
done:
    if (uVar3 == uVar1) {
      iVar1 = func_000F8F40(param_2);
      func_00110420(*(int *)(iVar1 + 0xe0), D_002FBB08);
      func_00110480(D_0030809C, D_002FBB08, 8);
      D_002FBB04 = 0;
    }
  }
}

void func_00082340(void)
{
  extern int D_001D67F8;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_00081FB0(...); int func_00078730(...); int func_00085E20(...); int func_00082230(...); int func_0007A8D0(...);
  func_0011D000(&D_001D67F8,func_00081FB0);
  func_0011D270(&D_001D67F8,func_00078730);
  func_0011D290(&D_001D67F8,func_00085E20);
  func_0011D2B0(&D_001D67F8,func_00082230);
  func_0011D2D0(&D_001D67F8,func_0007A8D0);
}

void func_00082390(void) {
    extern int D_001D67F8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D67F8);
}

extern "C" void *memset(void *, int, unsigned int);
extern "C" char *strcpy(char *, const char *);
void func_000823A0(void)
{
  extern int D_001D67F8, D_0030809C;
  extern int D_002FBB08, D_002FBB0C;
  extern char D_002FBB04;
  int func_0011E840(...), func_0011DD60(...), func_0011E830(...), func_0011DEF0(...), func_00110480(...);
  struct {
    char name[0x90];
    int f90, f94;
    int pad98[4];
    int fa8;
    int padac[3];
    int fb8, fbc;
    int padc0[6];
    int fd8, fdc;
    int pade0;
    int fe4;
    int pade8;
    int fec;
    int f_f0;
  } __declspec(align(8)) s;
  memset(&s, 0, sizeof(s));
  s.f90 = 2;
  s.f94 = 2;
  s.fb8 = 4;
  s.fbc = 5;
  s.fa8 = 3;
  s.fd8 = 0;
  s.fdc = 0;
  s.f_f0 = 10;
  s.fe4 = 0x28;
  strcpy(s.name, "sprites/whitecloud.tga");
  s.fec = 0x58;
  int obj = func_0011E840("__GroundFallSmoke", &s);
  int n = *(int *)(obj + 0x14c);
  D_002FBB08 = obj;
  int r = func_0011DD60(&D_001D67F8, 0x28, obj, n);
  D_002FBB0C = r;
  func_0011E830(D_002FBB08, r);
  func_0011DEF0(D_002FBB0C);
  func_00110480(D_0030809C, D_002FBB08, 8);
  D_002FBB04 = 0;
}

void func_000824A0(void)
{
  int func_001160B0(...);
  extern undefined4 D_002FBB0C;
  int func_00110760(...);
  extern undefined4 D_002FBB08;
  func_001160B0(D_002FBB0C);
  func_00110760(D_002FBB08);
  return;
}

void func_000824C0(int p)
{
  int func_00110060(...), func_00110420(...), func_001105E0(...), func_00110000(...);
  int func_000F8F40(...), func_00110480(...), func_0011E3A0(...), func_0011DED0(...);
  extern char D_002FBB04;
  extern int D_002FBB08, D_002FBB0C;
  __declspec(align(16)) char local[64];
  if (!D_002FBB04) {
    func_00110060(*(int *)(p + 0x2c), local);
    if (*(int **)(D_002FBB08 + 0x2c))
      func_00110420(D_002FBB08, **(int **)(D_002FBB08 + 0x2c));
    func_001105E0(D_002FBB08, local, 0);
    func_00110000(D_002FBB08);
    int r = func_000F8F40(*(int *)(p + 0x2c));
    func_00110480(*(int *)(r + 0xe0), D_002FBB08, 8);
    func_0011E3A0(D_002FBB0C, p);
    func_0011DED0(D_002FBB0C);
    D_002FBB04 = 1;
  }
}

void func_00082820(int param_1, int param_2)
{
  extern float D_001D27B8;
  extern int D_002FBB18, D_0030809C;
  extern int D_002FBB14;
  int func_000F8F40(...);
  int func_00110420(...);
  int func_00110480(...);
  int iVar1;
  unsigned int uVar1;
  unsigned int uVar3;
  float *pfVar4;

  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = *(int *)(param_1 + 0x15c);
    uVar1 = iVar1;
    uVar3 = 0;
    if (iVar1 >= 4) {
      pfVar4 = (float *)(*(int *)(param_1 + 0x160) + 0x78);
      do {
        if ((long double)D_001D27B8 != pfVar4[-0x16]) goto done;
        if ((long double)D_001D27B8 != pfVar4[0]) {
          uVar3++;
          goto done;
        }
        if ((long double)D_001D27B8 != pfVar4[0x16]) {
          uVar3 += 2;
          goto done;
        }
        if ((long double)D_001D27B8 != pfVar4[0x2c]) {
          uVar3 += 3;
          goto done;
        }
        uVar3 += 4;
        pfVar4 += 0x58;
      } while (uVar3 < uVar1 - 3);
    }
    if (uVar3 < uVar1) {
      pfVar4 = (float *)(*(int *)(param_1 + 0x160) + 0x20 + uVar3 * 0x58);
      do {
        if ((long double)D_001D27B8 != *pfVar4) break;
        uVar3++;
        pfVar4 += 0x16;
      } while (uVar3 < uVar1);
    }
done:
    if (uVar3 == uVar1) {
      iVar1 = func_000F8F40(param_2);
      func_00110420(*(int *)(iVar1 + 0xe0), D_002FBB18);
      func_00110480(D_0030809C, D_002FBB18, 8);
      D_002FBB14 = 0;
    }
  }
}

void func_00082B20(void)
{
  extern int D_001D681C;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_00082570(...); int func_00078730(...); int func_00085E20(...); int func_00082820(...); int func_00082930(...);
  func_0011D000(&D_001D681C,func_00082570);
  func_0011D270(&D_001D681C,func_00078730);
  func_0011D290(&D_001D681C,func_00085E20);
  func_0011D2B0(&D_001D681C,func_00082820);
  func_0011D2D0(&D_001D681C,func_00082930);
}

void func_00082B70(void) {
    extern int D_001D681C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D681C);
}

void func_00082B80(void)
{
    extern int D_001D670C, D_001D6710, D_001D6714, D_001D6718, D_001D671C;
    extern int D_001D6828, D_001D681C;
    extern int D_002FBB1C, D_002FBB20, D_002FBB14, D_0030809C;
    int func_0011E840(...);
    int func_0011DD60(...);
    int func_0011E830(...);
    int func_0011DEF0(...);
    int func_00110480(...);
    __declspec(align(8)) int s[0x3d];
    memset(s, 0, sizeof(s));
    s[0x24] = 2;
    s[0x25] = 2;
    s[0] = D_001D670C;
    s[1] = D_001D6710;
    s[0x2e] = 4;
    s[0x2f] = 5;
    s[0x2a] = 3;
    s[0x36] = 0;
    s[0x37] = 0;
    s[0x3c] = 10;
    s[0x39] = 0x14;
    s[2] = D_001D6714;
    s[3] = D_001D6718;
    s[4] = D_001D671C;
    s[0x3b] = 0x58;
    D_002FBB18 = func_0011E840(&D_001D6828, s);
    D_002FBB1C = func_0011DD60(&D_001D681C, 0x14, D_002FBB18, *(int *)(D_002FBB18 + 0x14c));
    func_0011E830(D_002FBB18, D_002FBB1C);
    func_0011DEF0(D_002FBB1C);
    D_002FBB20 = 0;
    func_00110480(D_0030809C, D_002FBB18, 8);
    D_002FBB14 = 0;
}

void func_00082CA0(void)
{
  int func_001160B0(...);
  extern undefined4 D_002FBB1C;
  int func_00110760(...);
  extern int D_002FBB18;
  func_001160B0(D_002FBB1C);
  func_00110760(D_002FBB18);
  return;
}

