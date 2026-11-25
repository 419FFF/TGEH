/* 12 functions from 0x000D58C0 to 0x000D65C4, found by Ghidra. */
#include "common.h"
struct S_D5E00 { float x; float rest[0x23]; };

struct S0x40 { int v[16]; };
#define CP(off) (*(S0x40 *)(c + (off)) = *(S0x40 *)(c + (off) - 0x40))

void _func_000D58C0(unsigned char *p,register char count,register char enable){extern unsigned char D_0031BCA0,D_0031BCB0[];extern unsigned int func_0009A880(void),func_00131310(void);register int i;register unsigned int v;if(p==&D_0031BCA0&&enable){count--;if(count<0)return;i=count;do{v=func_0009A880();p[i]=(unsigned char)(v%10u);while(p[i]==D_0031BCB0[i]){v=func_00131310();p[i]=(unsigned char)(v%10u);}--i;--count;}while(count);return;}count--;if(count<0)return;i=count;do{v=func_00131310();p[i]=(unsigned char)(v%10u);--i;--count;}while(count);}

void func_000D5AD0(char *param_1)
{
  extern char *D_001E5380[];
  extern char *D_001E5340[];
  extern char D_0031BCC0[];
  extern char D_0031BCC4[];
  int func_00110330(int, char);
  char cVar2;
  char cVar3;
  if (param_1 != 0) {
    char **local_c = D_001E5380;
    char *local_8 = D_0031BCC0;
    int local_4 = 3;
    do {
      char *pcVar5 = D_001E5340[*param_1];
      char *pcVar7 = *local_c;
      param_1++;
      cVar3 = 0;
      do {
        int uVar1 = *(int *)(local_8 + *pcVar7 * 0x90 + 0x3f4);
        if (*pcVar5 != -1 && cVar3 == *pcVar5) {
          cVar2 = 1;
          pcVar5++;
        } else {
          cVar2 = 0;
        }
        func_00110330(*(int *)(local_8 + *pcVar7 * 0x90 + 4), cVar2);
        func_00110330(uVar1, cVar2 == 0);
        cVar3++;
        pcVar7++;
      } while (cVar3 < 7);
      local_c++;
      local_8 += 0x7e0;
      local_4--;
    } while (local_4 != 0);
    return;
  }
  char *puVar6 = D_0031BCC4;
  int n = 3;
  do {
    int iVar4 = 7;
    char *puVar8 = puVar6;
    do {
      int uVar1 = *(int *)(puVar8 + 0x3f0);
      func_00110330(*(int *)puVar8, 0);
      func_00110330(uVar1, 1);
      puVar8 += 0x90;
      iVar4--;
    } while (iVar4 != 0);
    puVar6 += 0x7e0;
    n--;
  } while (n != 0);
}

int func_000D5C00(char a) {
 extern float D_001D27B8,D_0031E4C4,D_0031E4C8,D_0031E4CC,D_0031E4C0,D_00307DB4,D_0031E4E8,D_001D27F8;
 float v=a?D_0031E4C4:D_001D27B8;
 D_0031E4C8=v+D_0031E4C8;
 D_0031E4CC=((D_0031E4C0-((D_00307DB4-D_0031E4E8)+D_0031E4C8))/D_0031E4C0)*D_001D27F8;
 if(D_0031E4CC<=D_001D27B8) D_0031E4CC=D_001D27B8;
 return D_0031E4CC==D_001D27B8;
}

int _func_000D5C80(void)
{
  extern float D_00307DB4, D_0031E4E8, D_0031E4C8, D_0031E4C0, D_0031E4CC, D_001D290C, D_001D27EC, D_001D27B8, D_001D2BB4, D_001D4F88, D_001D411C, D_001D2C00;
  extern int D_0031E4D0, D_0031BC14;
  extern char D_0031BC90, D_0031BC50, D_0031BC20, D_0031D980;
  void _func_0011F270(int *, float, void *, int);
  void _func_0012E650(void *, void *);
  void _func_0012E5F0(void *, void *, void *);
  void _func_000D5170(void *, int);
  void _func_00110330(int, int);
  char b1[16], b2[16];
  float f1, f2, t;
  char *p;
  unsigned int n, i;
  f1 = D_00307DB4 - D_0031E4E8 + D_0031E4C8;
  p = &D_0031D980;
  t = (float)*(unsigned int *)(D_0031E4D0 + 4);
  t = t / D_0031E4C0 * f1 - D_001D27EC;
  f2 = t < D_001D27B8 ? 0.0f : t;
  _func_0011F270((int *)(D_0031E4D0 + 4), 0.0f, b1, 0);
  _func_0011F270((int *)(D_0031E4D0 + 4), f2, b2, 0);
  _func_0012E650(b2, b1);
  _func_0012E5F0(&D_0031BC50, &D_0031BC90, b2);
  _func_000D5170(&D_0031BC20, D_0031BC14);
  n = (unsigned int)(D_0031E4CC * D_001D2BB4 + D_001D4F88);
  if (n > 0) {
    i = n;
    do {
      _func_00110330(*(int *)(p + 4), 1);
      p += 0x90;
    } while (--i);
  }
  if (n < 0x14) {
    int *q = (int *)(p + 4);
    for (i = n; i < 0x14; i++) {
      _func_00110330(*q, 0);
      q += 0x24;
    }
  }
  f1 = D_0031E4C0 - f1;
  if (f1 < D_001D411C) {
    if (f1 - (float)(int)f1 < D_001D2C00)
      return 1;
    return 0;
  }
  return f1 < D_001D411C;
}

int func_000D5E00(void)
{
    extern float D_0031E4F4, D_001D2BF4, D_001D99CC, D_001DAE68;
    extern float D_0031BAA0, D_0031BB30, D_0031BBC0, D_0031BC50;
    extern int D_0031BA64, D_0031BAF4, D_0031BB84, D_0031BC14;
    extern char D_0031BA70, D_0031BB00, D_0031BB90, D_0031BC20, D_0031BB70;
    extern float D_0031D4A0[], D_0031C0F0[], D_0031D9C0[];
    void func_000D5170(void *, int);
    float func_0012E7B0(void *, void *);
    float s;
    float *p, *q;
    int i, j;
    D_0031E4F4 = D_0031E4F4 - D_001D2BF4;
    if (D_0031E4F4 > D_001D99CC)
        D_0031E4F4 = -3.0f;
    s = -D_0031E4F4;
    D_0031BAA0 = D_0031BAA0 + s;
    func_000D5170(&D_0031BA70, D_0031BA64);
    D_0031BB30 = D_0031BB30 + s;
    func_000D5170(&D_0031BB00, D_0031BAF4);
    D_0031BBC0 = D_0031BBC0 + s;
    func_000D5170(&D_0031BB90, D_0031BB84);
    p = D_0031D4A0;
    i = 3;
    do {
        p[0] = s + p[0];
        func_000D5170(p - 0xc, *(int *)(p - 0xf));
        p[0x6c] = s + p[0x6c];
        func_000D5170(p + 0x60, *(int *)(p + 0x5d));
        p[0xd8] = s + p[0xd8];
        func_000D5170(p + 0xcc, *(int *)(p + 0xc9));
        p += 0x24;
        i--;
    } while (i != 0);
    i = 3;
    p = D_0031C0F0;
    do {
        j = 7;
        q = p;
        do {
            q[0] = s + q[0];
            func_000D5170(q - 0xc, *(int *)(q - 0xf));
            q[-0xfc] = s + q[-0xfc];
            func_000D5170(q - 0x108, *(int *)(q - 0x10b));
            q += 0x24;
            j--;
        } while (j != 0);
        p += 0x1f8;
        i--;
    } while (i != 0);
    p = D_0031D9C0;
    i = 0x14;
    do {
        p[0] = s + p[0];
        func_000D5170(p - 0xc, *(int *)(p - 0xf));
        p += 0x24;
        i--;
    } while (i != 0);
    D_0031BC50 = D_0031BC50 + s;
    func_000D5170(&D_0031BC20, D_0031BC14);
    if (func_0012E7B0(&D_0031BB30, &D_0031BB70) > D_001DAE68)
        return 1;
    return 0;
}

void func_000D5FF0(void)
{
  int func_00011CB0(...);
  extern char D_0031B8B0, D_0031B870, D_0031BAB0, D_0031BA70, D_0031BB40, D_0031BB00, D_0031BBD0, D_0031BB90;
  extern int D_0031D4B4[], D_0031C104[];
  int *puVar1;
  int *puVar2;
  int iVar3;
  int iVar4;

  func_00011CB0(&D_0031B8B0, &D_0031B870);
  func_00011CB0(&D_0031BAB0, &D_0031BA70);
  func_00011CB0(&D_0031BB40, &D_0031BB00);
  func_00011CB0(&D_0031BBD0, &D_0031BB90);
  puVar1 = D_0031D4B4;
  iVar3 = 3;
  do {
    int t = puVar1[-0x11];
    puVar1[-1] = t;
    *puVar1 = puVar1[-0x10];
    puVar1[1] = puVar1[-0xf];
    puVar1[2] = puVar1[-0xe];
    puVar1[3] = puVar1[-0xd];
    puVar1[4] = puVar1[-0xc];
    puVar1[5] = puVar1[-0xb];
    puVar1[6] = puVar1[-10];
    puVar1[7] = puVar1[-9];
    puVar1[8] = puVar1[-8];
    puVar1[9] = puVar1[-7];
    puVar1[10] = puVar1[-6];
    puVar1[0xb] = puVar1[-5];
    puVar1[0xc] = puVar1[-4];
    puVar1[0xd] = puVar1[-3];
    puVar1[0xe] = puVar1[-2];
    puVar1[0x6b] = puVar1[0x5b];
    puVar1[0x6c] = puVar1[0x5c];
    puVar1[0x6d] = puVar1[0x5d];
    puVar1[0x6e] = puVar1[0x5e];
    puVar1[0x6f] = puVar1[0x5f];
    puVar1[0x70] = puVar1[0x60];
    puVar1[0x71] = puVar1[0x61];
    puVar1[0x72] = puVar1[0x62];
    puVar1[0x73] = puVar1[99];
    puVar1[0x74] = puVar1[100];
    puVar1[0x75] = puVar1[0x65];
    puVar1[0x76] = puVar1[0x66];
    puVar1[0x77] = puVar1[0x67];
    puVar1[0x78] = puVar1[0x68];
    puVar1[0x79] = puVar1[0x69];
    puVar1[0x7a] = puVar1[0x6a];
    puVar1[0xd7] = puVar1[199];
    puVar1[0xd8] = puVar1[200];
    puVar1[0xd9] = puVar1[0xc9];
    puVar1[0xda] = puVar1[0xca];
    puVar1[0xdb] = puVar1[0xcb];
    puVar1[0xdc] = puVar1[0xcc];
    puVar1[0xdd] = puVar1[0xcd];
    puVar1[0xde] = puVar1[0xce];
    puVar1[0xdf] = puVar1[0xcf];
    puVar1[0xe0] = puVar1[0xd0];
    puVar1[0xe1] = puVar1[0xd1];
    puVar1[0xe2] = puVar1[0xd2];
    puVar1[0xe3] = puVar1[0xd3];
    puVar1[0xe4] = puVar1[0xd4];
    puVar1[0xe5] = puVar1[0xd5];
    puVar1[0xe6] = puVar1[0xd6];
    puVar1 = puVar1 + 0x24;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = D_0031C104;
  iVar3 = 3;
  do {
    iVar4 = 7;
    puVar2 = puVar1;
    do {
      puVar2[-1] = puVar2[-0x11];
      *puVar2 = puVar2[-0x10];
      puVar2[1] = puVar2[-0xf];
      puVar2[2] = puVar2[-0xe];
      puVar2[3] = puVar2[-0xd];
      puVar2[4] = puVar2[-0xc];
      puVar2[5] = puVar2[-0xb];
      puVar2[6] = puVar2[-10];
      puVar2[7] = puVar2[-9];
      puVar2[8] = puVar2[-8];
      puVar2[9] = puVar2[-7];
      puVar2[10] = puVar2[-6];
      puVar2[0xb] = puVar2[-5];
      puVar2[0xc] = puVar2[-4];
      puVar2[0xd] = puVar2[-3];
      puVar2[0xe] = puVar2[-2];
      puVar2[-0xfd] = puVar2[-0x10d];
      puVar2[-0xfc] = puVar2[-0x10c];
      puVar2[-0xfb] = puVar2[-0x10b];
      puVar2[-0xfa] = puVar2[-0x10a];
      puVar2[-0xf9] = puVar2[-0x109];
      puVar2[-0xf8] = puVar2[-0x108];
      puVar2[-0xf7] = puVar2[-0x107];
      puVar2[-0xf6] = puVar2[-0x106];
      puVar2[-0xf5] = puVar2[-0x105];
      puVar2[-0xf4] = puVar2[-0x104];
      puVar2[-0xf3] = puVar2[-0x103];
      puVar2[-0xf2] = puVar2[-0x102];
      puVar2[-0xf1] = puVar2[-0x101];
      puVar2[-0xf0] = puVar2[-0x100];
      puVar2[-0xef] = puVar2[-0xff];
      puVar2[-0xee] = puVar2[-0xfe];
      puVar2 = puVar2 + 0x24;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar1 = puVar1 + 0x1f8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
}

void func_000D6490(int a,int b,int c) {
 extern int D_0031B9D4,D_0031B870,D_0031BB30;
 int func_00110060(...),func_0012FE20(...),func_0012F5B0(...),func_0012E5F0(...);
 __declspec(align(16)) char local[0x40]; char small[12];
 func_00110060(D_0031B9D4,local);
 func_0012FE20(&D_0031B870,0,c,0);
 func_0012F5B0(small,b,&D_0031B870);
 func_0012E5F0(a,&D_0031BB30,small);
}

void func_000D64F0(void) {
 extern int D_0031BAB0,D_0031B9D4,D_00313B60;
 extern float D_001D35FC;
 int func_0012F120(...),func_00011CB0(...),func_0012E760(...),func_0012F7A0(...),func_00011E30(...),func_001105E0(...);
 __declspec(align(16)) unsigned char frame[0xa0];
 func_0012F120(frame+0x60);
 func_00011CB0(frame+0x24,&D_0031BAB0);
 func_0012E760(frame+0x10);
 *(int *)(frame+0x20)=0xc1200000;
 func_0012F7A0(frame+0x30,frame+0x18);
 *(int *)(frame+0x68)=*(int *)(frame+0x1c);
 *(int *)(frame+0x6c)=*(int *)(frame+0x20);
 *(int *)(frame+0x70)=*(int *)(frame+0x24);
 *(float *)(frame+0x34)=*(float *)(D_0031B9D4+0x18)+D_001D35FC;
 *(int *)(frame+0x3c)=0x3fa78d36;
 *(int *)(frame+0x40)=0x3fc90fdb;
 func_00011E30(frame+0x2c,frame+0x7c,frame+0x40);
 func_001105E0(D_00313B60,frame+0x88,1);
}

void func_000D65B0(void) {
    extern int D_00308158;
    extern int D_001DAE6C;
    int func_000F9C00(...);
    func_000F9C00(D_00308158, (int)&D_001DAE6C);
}
