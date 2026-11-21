/* 10 functions from 0x0003BD10 to 0x0003CCB5, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct __declspec(align(16)) M3BD10 { char b[64]; };

#pragma optimize("y", on)
bool func_0003C260(int param_1, int param_2, int param_3)
{
  int func_00011CB0(...), func_0012F7A0(...), func_0012ECA0(...), func_00110060(...);
  char func_0011AFD0(...);
  extern int D_002EE7C0, D_002EE7C4, D_002EE7C8;
  extern int D_002EE754;
  extern int D_002EDDEC[];
  extern int D_00307DF8;
  int v[4];
  int s[3];
  __declspec(align(16)) int m[16];
  __declspec(align(16)) char m2[64];
  int i;
  int *e;
  func_00011CB0(m, param_2 + 0x10);
  v[0] = D_002EE7C0;
  v[1] = D_002EE7C4;
  v[2] = D_002EE7C8;
  func_0012F7A0(v, param_2 + 0x10);
  m[12] = v[0];
  m[13] = v[1];
  m[14] = v[2];
  s[0] = *(int *)(param_3 + 0xf4);
  s[1] = *(int *)(param_3 + 0xf8);
  s[2] = *(int *)(param_3 + 0xfc);
  func_0012ECA0(s, 0x3fc00000);
  i = 0;
  if (D_002EE754 != 0) {
    e = D_002EDDEC;
    do {
      if (e[0] != 0 && e[1] != D_00307DF8 && e[1] != param_3) {
        func_00110060(e[0], m2);
        if (func_0011AFD0(e[0], m, s, m2))
          return false;
      }
      i++;
      e += 3;
    } while (i != D_002EE754);
  }
  return true;
}

void func_0003C710(int param_1, int *param_2)
{
  int func_0009C7A0(...);
  extern char D_001D4684, D_001E3A4C, D_001D2B20, D_001D2B18, D_001D2B10, D_001D2B08;
  int func_000A1D10(...);
  char func_00104600(...);
  int func_00101270(...);
  int func_00110330(...);
  int func_00110300(...);
  int func_0009C6A0(...);
  int func_0009D280(...);
  int *puVar2;
  int iVar3;

  puVar2 = (int *)func_0009C7A0(param_1, &D_001D4684, 0);
  func_000A1D10(param_2[0xa8], 1, puVar2[0], puVar2[1], puVar2[2], 0x3e4ccccd);
  param_2[0xc4] = 0;
  *param_2 = 0x3a;
  if (func_00104600() == 0) {
    func_00101270(&D_001E3A4C, 0, 0);
  }
  *(char *)(param_2 + 0xc5) = 0;
  *((char *)param_2 + 0x315) = 1;
  func_00110330(*(int *)(param_1 + 0x2c), 1);
  iVar3 = func_00110300(*(int *)(param_1 + 0x2c), &D_001D2B20, 0);
  if (iVar3 != 0) {
    func_00110330(iVar3, 1);
  }
  iVar3 = func_00110300(*(int *)(param_1 + 0x2c), &D_001D2B18, 0x18);
  if (iVar3 != 0) {
    func_00110330(iVar3, 0);
  }
  iVar3 = func_00110300(*(int *)(param_1 + 0x2c), &D_001D2B10, 0x18);
  if (iVar3 != 0) {
    func_00110330(iVar3, 1);
  }
  iVar3 = func_00110300(*(int *)(param_1 + 0x2c), &D_001D2B08, 0x18);
  if (iVar3 != 0) {
    func_00110330(iVar3, 0);
  }
  func_0009D280(func_0009C6A0(param_1, &D_001D2B20));
  *(char *)(param_2 + 0xc5) = 1;
}

#pragma optimize("y", on)
void func_0003C840(int param_1, int *param_2)
{
  extern float D_001D27B8;
  extern int D_00307D08, D_00313AF4, D_002EE8C0;
  extern char D_001D46B8, D_001D46A0, D_002EDDE8;
  int func_0006D7A0(...), func_000A1F50(...), func_000A1D10(...), func_0002E300(...);
  int *func_0009C7A0(...);
  __declspec(align(16)) int d[0x58];
  int *v;
  int i;
  long double a;
  for (i = 0; i < 0x58; i++) d[i] = 0;
  d[0] = 0x11;
  d[0x53] = (int)&D_002EDDE8;
  d[0x52] = (int)func_0002E300;
  d[4] = 0x41f00000;
  func_0006D7A0(param_1, param_2 + 4, d);
  a = D_001D27B8;
  if (a == *(float *)(*(int *)(D_00307D08 + 0x10) + D_00313AF4 * 0x18))
    *((char *)param_2 + 0x315) = 0;
  if (func_000A1F50(param_2[0xa8]) == 0) {
    if (*((char *)param_2 + 0x315) != 0) {
      v = func_0009C7A0(param_1, &D_001D46B8, 0);
      func_000A1D10(param_2[0xaa], 1, v[0], v[1], v[2], 0x3e4ccccd);
      *param_2 = 0x3c;
      D_002EE8C0 = 0x3f000000;
      return;
    }
    v = func_0009C7A0(param_1, &D_001D46A0, 0);
    func_000A1D10(param_2[0xa9], 1, v[0], v[1], v[2], 0);
    *param_2 = 0x3b;
  }
}
void func_0003C960(int a, int *p) { extern int D_002EDDE8; extern float D_001D2B64; extern char D_002EB06C; extern char D_001D46D8; int func_0006D7A0(...),func_0009C590(...),func_00012D60(...),func_000A1F50(...); float func_000A1EE0(...); void func_0002E300(void); int v[88]={0}; v[0]=0x11; v[83]=(int)&D_002EDDE8; v[82]=(int)func_0002E300; ((float*)v)[4]=30.0f; func_0006D7A0(a,p+4,v); if(p[0xc4]!=1){ if(D_001D2B64<=func_000A1EE0(p[0xa9])){ D_002EB06C=0; func_00012D60(func_0009C590(&D_001D46D8),0x1d); p[0xc4]=1; } } if(!func_000A1F50(p[0xa9])) p[0]=2; }

extern "C" void *memset(void *, int, unsigned int);
#pragma optimize("y", on)
void func_0003CA30(int param_1, int *param_2)
{
  extern float D_002EE8C0, D_001D2BF4, D_001D27B8, D_001D27F4;
  extern int D_00307D08, D_00313AF4;
  extern char D_001D46E4, D_002EDDE8;
  int func_0006D7A0(...), func_000A1F50(...), func_000A1D10(...), func_0002E300(...);
  int *func_0009C7A0(...);
  __declspec(align(16)) int d[0x58];
  int *v;
  memset(d, 0, sizeof(d));
  d[0] = 0x11;
  d[0x53] = (int)&D_002EDDE8;
  d[0x52] = (int)func_0002E300;
  d[4] = 0x41f00000;
  func_0006D7A0(param_1, param_2 + 4, d);
  if (func_000A1F50(param_2[0xaa]) == 0) {
    D_002EE8C0 = (float)((long double)D_002EE8C0 + (long double)D_001D2BF4);
    if ((long double)*(float *)(*(int *)(D_00307D08 + 0x10) + D_00313AF4 * 0x18) == (long double)D_001D27B8)
      *((char *)param_2 + 0x315) = 0;
    if (*((char *)param_2 + 0x315) == 0 || (long double)D_002EE8C0 > (long double)D_001D27F4) {
      v = func_0009C7A0(param_1, &D_001D46E4, 0);
      func_000A1D10(param_2[0xab], 1, v[0], v[1], v[2], 0x3e4ccccd);
      *param_2 = 0x3d;
    }
  }
}

#pragma float_control(precise, on, push)
void func_0003CB30(int param_1, int *param_2)
{
  extern int D_002EDDE8, D_00307DF8, D_002EB038;
  extern float D_001D2808, D_002EE8C0, D_002EB03C, D_002EB040;
  extern char D_002EB06C, D_001D46D8, D_001D2B40, D_001D2B30;
  int func_0006D7A0(...), func_0009C590(...), func_00012D60(...);
  float func_000A1EE0(...);
  int *func_0009C7A0(...);
  int func_00110060(...), func_0012F610(...);
  void func_0002E300(void);
  __declspec(align(16)) int d[0x58];
  __declspec(align(16)) char buf[64];
  int *v;
  int i;
  int tmp;
  long double scale;
  for (i = 0; i < 0x58; i++) d[i] = 0;
  d[0] = 0x11;
  d[0x53] = (int)&D_002EDDE8;
  d[0x52] = (int)func_0002E300;
  d[4] = 0x41f00000;
  func_0006D7A0(param_1, param_2 + 4, d);
  if ((long double)func_000A1EE0(param_2[0xab]) >= (long double)D_001D2808) {
    D_002EB06C = 1;
    tmp = func_0009C590(&D_001D46D8);
    func_00012D60(tmp, 0x1d);
    D_002EB038 = 0;
    v = func_0009C7A0(D_00307DF8, &D_001D2B40, 0);
    scale = D_002EE8C0;
    D_002EB03C = (float)(scale * (long double)*(float *)v);
    v = func_0009C7A0(D_00307DF8, &D_001D2B30, 0);
    scale = D_002EE8C0;
    D_002EB040 = (float)(scale * (long double)*(float *)v);
    func_00110060(*(int *)(D_00307DF8 + 0x2c), buf);
    func_0012F610(&D_002EB038, buf);
    *param_2 = 0x3e;
  }
}
#pragma float_control(pop)

void func_0003CC40(int a,int *p){extern int D_002EDDE8;int func_0006D7A0(int,void*,void*),func_000A1F50(int);extern int func_0002E300;int local[0x58]={0};local[0]=0x11;local[7]=0x41f00000;local[0x56]= (int)&func_0002E300;local[0x57]=(int)&D_002EDDE8;func_0006D7A0(a,p+4,local);if(!func_000A1F50(p[0xab]))*p=2;}
