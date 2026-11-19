/* 9 functions from 0x00084750 to 0x000856E2, found by Ghidra. */
#include "common.h"

int func_00084750(char *param_1)
{
  int func_0011B4F0(...);
  extern char D_001D6B7C;
  extern char D_001D6B74;
  extern char D_001D6B6C;
  extern char D_001D6B64;
  extern char D_001D6B54;
  extern char D_001D6B4C;
  extern char D_001D6B44;
  extern char D_001D6B3C;
  extern char D_001D6B34;
  extern char D_001D6B2C;
  extern char D_001D6B24;
  extern char D_001D6B14;
  extern char D_001D6B0C;
  extern char D_001D3B3C;
  extern char D_001D6AFC;
  extern char D_001D6AD0;
  extern char D_001D6AC8;
  extern char D_001D6AC0;
  extern char D_001D6AB8;
  extern char D_001D6AB0;
  extern char D_001D6AA8;
  extern char D_001D6AA0;
  extern char D_001D6A98;
  extern char D_001D6A8C;
  extern char D_001D6A84;
  extern char D_001D6A7C;
  extern char D_001D6A74;
  extern char D_001D6A6C;
  extern char D_001D6A64;
  extern char D_001D6A5C;
  extern char D_001D6A54;
  extern char D_001D6A4C;
  extern char D_001D6A44;
  extern char D_001D6A3C;
  extern char D_001D6A34;
  extern char D_001D6A30;
  extern char D_001D6A28;
  extern char D_001D6A1C;
  extern char D_001D6A14;
  extern char D_001D6A10;
  extern char D_001D6A08;
  extern char D_001D69FC;
  extern char D_001D69F4;
  extern char D_001D69E8;
  extern char D_001D69E0;
  extern char D_001D69D4;
  extern char D_001D69C8;
  extern char D_001D69BC;
  extern char D_001D69B0;
  extern char D_001D69A4;
  extern char D_001D6994;
  extern char D_001D6984;
  extern char D_001D697C;
  extern char D_001D6974;
  extern char D_001D696C;
  extern char D_001D6964;
  extern char D_001D695C;
  extern char D_001D6950;
  extern char D_001D6944;
  extern char D_001D6938;
  extern char D_001D692C;
  extern char D_001D6920;
  extern char D_001D6914;
  extern char D_001D6908;
  extern char D_001D68FC;
  int iVar1;
  
  if ((((*param_1 != 'h') && (*param_1 != 'H')) || ((param_1[1] != 'u' && (param_1[1] != 'U')))) ||
     (((param_1[2] != 'd' && (param_1[2] != 'D')) || (param_1[3] != '_')))) {
    return 0xffffffff;
  }
  param_1 = param_1 + 4;
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B7C));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B74));
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B6C));
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B64));
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = func_0011B4F0(param_1,0x3f80);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B54));
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B4C));
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B44));
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B3C));
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B34));
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B2C));
  if (iVar1 == 0) {
    return 10;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B24));
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = func_0011B4F0(param_1,0x3fc0);
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B14));
  if (iVar1 == 0) {
    return 0xd;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6B0C));
  if (iVar1 == 0) {
    return 0xe;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D3B3C));
  if (iVar1 == 0) {
    return 0xf;
  }
  iVar1 = func_0011B4F0(param_1,0x3fe0);
  if (iVar1 == 0) {
    return 0x10;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6AFC));
  if (iVar1 == 0) {
    return 0x11;
  }
  iVar1 = func_0011B4F0(param_1,0x3ff0);
  if (iVar1 == 0) {
    return 0x12;
  }
  iVar1 = func_0011B4F0(param_1,0x3ff8);
  if (iVar1 == 0) {
    return 0x13;
  }
  iVar1 = func_0011B4F0(param_1,0x4000);
  if (iVar1 == 0) {
    return 0x14;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6AD0));
  if (iVar1 == 0) {
    return 0x15;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6AC8));
  if (iVar1 == 0) {
    return 0x16;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6AC0));
  if (iVar1 == 0) {
    return 0x17;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6AB8));
  if ((iVar1 == 0) || (iVar1 = func_0011B4F0(param_1,((char *)&D_001D6AB0)), iVar1 == 0)) {
    return 0x18;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6AA8));
  if (iVar1 == 0) {
    return 0x19;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6AA0));
  if (iVar1 == 0) {
    return 0x1a;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A98));
  if (iVar1 == 0) {
    return 0x1b;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A8C));
  if (iVar1 == 0) {
    return 0x1c;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A84));
  if (iVar1 == 0) {
    return 0x1d;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A7C));
  if (iVar1 == 0) {
    return 0x1e;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A74));
  if (iVar1 == 0) {
    return 0x1f;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A6C));
  if (iVar1 == 0) {
    return 0x20;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A64));
  if (iVar1 == 0) {
    return 0x2d;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A5C));
  if (iVar1 == 0) {
    return 0x21;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A54));
  if (iVar1 == 0) {
    return 0x22;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A4C));
  if (iVar1 == 0) {
    return 0x23;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A44));
  if (iVar1 == 0) {
    return 0x24;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A3C));
  if (iVar1 == 0) {
    return 0x25;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A34));
  if (iVar1 == 0) {
    return 0x26;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A30));
  if (iVar1 == 0) {
    return 0x27;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A28));
  if (iVar1 == 0) {
    return 0x28;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A1C));
  if (iVar1 == 0) {
    return 0x29;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A14));
  if (iVar1 == 0) {
    return 0x2a;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A10));
  if (iVar1 == 0) {
    return 0x2b;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6A08));
  if (iVar1 == 0) {
    return 0x2c;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D69FC));
  if (iVar1 == 0) {
    return 0x2e;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D69F4));
  if (iVar1 == 0) {
    return 0x2f;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D69E8));
  if (iVar1 == 0) {
    return 0x30;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D69E0));
  if (iVar1 == 0) {
    return 0x31;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D69D4));
  if (iVar1 == 0) {
    return 0x32;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D69C8));
  if (iVar1 == 0) {
    return 0x33;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D69BC));
  if (iVar1 == 0) {
    return 0x34;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D69B0));
  if (iVar1 == 0) {
    return 0x35;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D69A4));
  if (iVar1 == 0) {
    return 0x38;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6994));
  if (iVar1 == 0) {
    return 0x37;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6984));
  if (iVar1 == 0) {
    return 0x36;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D697C));
  if (iVar1 == 0) {
    return 0x39;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6974));
  if (iVar1 == 0) {
    return 0x3a;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D696C));
  if (iVar1 == 0) {
    return 0x3b;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6964));
  if (iVar1 == 0) {
    return 0x3c;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D695C));
  if (iVar1 == 0) {
    return 0x3d;
  }
  iVar1 = func_0011B4F0(param_1,((char *)&D_001D6950));
  if (iVar1 != 0) {
    iVar1 = func_0011B4F0(param_1,((char *)&D_001D6944));
    if (iVar1 == 0) {
      return 0x3f;
    }
    iVar1 = func_0011B4F0(param_1,((char *)&D_001D6938));
    if (iVar1 == 0) {
      return 0x40;
    }
    iVar1 = func_0011B4F0(param_1,((char *)&D_001D692C));
    if (iVar1 == 0) {
      return 0x41;
    }
    iVar1 = func_0011B4F0(param_1,((char *)&D_001D6920));
    if (iVar1 != 0) {
      iVar1 = func_0011B4F0(param_1,((char *)&D_001D6914));
      if (iVar1 == 0) {
        return 0x43;
      }
      iVar1 = func_0011B4F0(param_1,((char *)&D_001D6908));
      if (iVar1 != 0) {
        iVar1 = func_0011B4F0(param_1,((char *)&D_001D68FC));
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        return 0x45;
      }
      return 0x44;
    }
    return 0x42;
  }
  return 0x3e;
}

void func_000851F0(int p, int q)
{
  extern float D_001D27B8;
  extern char D_002FDD68[], D_002FDD64[];
  extern int D_0030809C;
  int func_000F8F40(...); int func_00110420(...); int func_00110480(...);
  int n, i;
  unsigned int k;
  if (*(int *)(p + 0x4c) == 0) {
    n = *(int *)(p + 0x15c);
    for (i = 0; i < n; i++) {
      if (*(float *)(*(int *)(p + 0x160) + i * 0x58 + 0x20) != D_001D27B8) break;
    }
    if (i == n) {
      for (k = 0; k < 0x30; k += 0x10) {
        if (*(int *)(D_002FDD68 + k) == p) {
          int r = func_000F8F40(q);
          func_00110420(*(int *)(r + 0xe0), *(int *)(D_002FDD64 + k));
          func_00110480(D_0030809C, *(int *)(D_002FDD64 + k), 8);
        }
      }
    }
  }
}

void func_00085310(void)
{
  extern int D_001D6B84;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_00084E80(...); int func_00078730(...); int func_00085E20(...); int func_000851F0(...); int func_000850A0(...);
  func_0011D000(&D_001D6B84,func_00084E80);
  func_0011D270(&D_001D6B84,func_00078730);
  func_0011D290(&D_001D6B84,func_00085E20);
  func_0011D2B0(&D_001D6B84,func_000851F0);
  func_0011D2D0(&D_001D6B84,func_000850A0);
}

void func_00085360(void) {
    extern int D_001D6B84;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6B84);
}

void func_00085370(void)
{
  extern int D_001D670C, D_001D6710, D_001D6714, D_001D6718, D_001D671C;
  extern char D_001D6B90, D_001D6B84, D_002FDD64[], D_002FDD68[], D_002FDD6C[], D_002FDD70[];
  extern int D_0030809C, D_002FDD94;
  int func_0011E840(...); int func_0011DD60(...); int func_0011E830(...); int func_0011DEF0(...); int func_00110480(...);
  int a[61];
  unsigned int k;
  int r;
  int *p = a;
  for (r = 0x3d; r != 0; r--)
    *p++ = 0;
  a[36] = 2;
  a[37] = 2;
  a[0] = D_001D670C;
  a[1] = D_001D6710;
  a[46] = 4;
  a[47] = 5;
  a[42] = 3;
  a[54] = 0;
  a[55] = 0;
  a[60] = 10;
  a[57] = 0x14;
  a[2] = D_001D6714;
  a[3] = D_001D6718;
  a[4] = D_001D671C;
  a[59] = 0x58;
  for (k = 0; k < 0x30; k += 0x10) {
    r = func_0011E840(&D_001D6B90, a);
    *(int *)(D_002FDD64 + k) = r;
    r = func_0011DD60(&D_001D6B84, 0x14, r, *(int *)(r + 0x14c));
    *(int *)(D_002FDD68 + k) = r;
    func_0011E830(*(int *)(D_002FDD64 + k), r);
    func_0011DEF0(*(int *)(D_002FDD68 + k));
    *(int *)(D_002FDD6C + k) = 0;
    *(int *)(D_002FDD70 + k) = 0;
    func_00110480(D_0030809C, *(int *)(D_002FDD64 + k), 8);
  }
  D_002FDD94 = 0;
}

