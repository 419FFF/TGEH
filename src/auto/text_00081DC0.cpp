/* 17 functions from 0x00081DC0 to 0x00082CBB, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

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

void func_00082CA0(void)
{
  int func_001160B0(...);
  extern undefined4 D_002FBB1C;
  int func_00110760(...);
  extern undefined4 D_002FBB18;
  func_001160B0(D_002FBB1C);
  func_00110760(D_002FBB18);
  return;
}

