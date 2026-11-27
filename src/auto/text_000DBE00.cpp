/* 10 functions from 0x000DBE00 to 0x000DCD80, found by Ghidra. */
#include "common.h"

struct Buf28 { float a[28]; };
extern "C" double fabs(double);
#pragma intrinsic(fabs)

void func_000DC430(void) { extern int D_0031E514,D_00307DF8,D_002EECA0,D_00308158,D_003251D8; extern char D_001D8018; int func_000687F0(...); int func_00136450(...); int func_000A29C0(...); int func_000A2840(...); int func_000A2780(...); int func_000A3070(...); int func_000DAE60(...); int func_0002DF20(...); int func_0009C590(...); int func_0009D3E0(...); int func_0009D640(...); int func_00107C40(...); int func_00116FB0(...); int func_000A2E30(...); char *p=(char*)D_0031E514,*q; func_000687F0();func_00136450();func_000A29C0(0);func_000A2840();q=(char*)D_0031E514;func_000A2780(0x3a,0,0);func_000A3070(q+0x9ec);func_000DAE60();func_0002DF20(D_00307DF8);D_002EECA0=1;func_0009D3E0(func_0009C590(&D_001D8018));func_0009D640(func_0009C590(&D_001D8018));if(*p)func_00107C40(D_003251D8,D_00308158,D_00308158);func_00116FB0(p);func_000A2E30(0); }

#pragma float_control(precise, on)
void _func_000DC4E0(void)
{
  extern char D_0031E6B2;
  extern int D_00313EF4, D_00307DB4;
  extern char *D_0031E514;
  extern float D_001E461C, D_001D27B8, D_0031E510, D_001D28E0;
  extern char D_001DB5E0;
  int func_000DA370(...); int func_000DA480(...); int func_000DBE00(...); int func_000DB0D0(...);
  int func_000DBCB0(...); int func_000DA100(...); int func_000DA6A0(...); int func_000D9FB0(...);
  int func_000DAFF0(...); int func_001031C0(...); int func_00103990(...);
  char func_000D5120(...); int func_000B6BE0(...); int func_000B6C80(...);
  char *s = D_0031E514;
  if (D_0031E6B2 == 0 && D_00313EF4 == 4) {
    *(int *)(D_0031E514 + 0xbf8) = D_00307DB4;
    D_0031E6B2 = 1;
  }
  if (s[3] != 0) {
    func_000D9FB0();
  } else {
    func_000DA370();
    func_000DA480();
    func_000DBE00();
    func_000DB0D0(s + 0x6c0);
    func_000DB0D0(s + 0x5f0);
    *(float *)(s + 0x69c) = D_001E461C + *(float *)(s + 0x69c);
    func_000DBCB0();
    func_000DA100();
    func_000DA6A0();
  }
  func_000DAFF0();
  if (*(float *)(s + 0xbf4) >= *(float *)(s + 8)) {
    if ((double)D_001D27B8 == (double)D_0031E510) {
      int *p = (int *)func_001031C0(*(int *)(D_0031E514 + 0x10), &D_001DB5E0, 0);
      func_00103990(p);
    }
    D_0031E510 = D_0031E510 + D_001E461C;
    if (D_0031E510 > D_001D28E0) *s = 1;
  }
  if (func_000D5120() != 0) {
    *s = 1;
  } else if (*s == 0 && s[1] == 0 && s[2] == 0) {
    return;
  }
  if (*D_0031E514 != 0) {
    func_000B6BE0();
  } else {
    func_000B6C80();
  }
}
extern float D_0031FC70, D_0031FC74, D_0031FC90, D_0031FC94;
extern unsigned char D_0031FCA8;
extern void __cdecl _func_0012F7A0(void *, void *);
bool __cdecl _func_000DC610(int *param_1, float *param_2)
{
  float v[3];
  float ox, oy;
  long double lo, hi;
  bool r;
  bool ch = false;
  int base = *param_1;
  v[0] = *(float *)(base + 0xe8);
  v[1] = *(float *)(base + 0xec);
  v[2] = *(float *)(base + 0xf0);
  _func_0012F7A0(v, param_2);
  ox = v[0];
  oy = v[1];
  base = *param_1;
  D_0031FCA8 = 0;
  lo = (long double)D_0031FC70 + *(float *)(base + 0xf4);
  if ((long double)v[0] < lo) { v[0] = (float)lo; ch = true; }
  hi = (long double)D_0031FC74 - *(float *)(base + 0xf4);
  if ((long double)v[0] > hi) { v[0] = (float)hi; ch = true; }
  hi = (long double)D_0031FC94 - *(float *)(base + 0xf8);
  if ((long double)v[1] > hi) { v[1] = (float)hi; ch = true; }
  r = ch;
  lo = (long double)D_0031FC90 + *(float *)(base + 0xf8);
  if ((long double)v[1] < lo) { v[1] = (float)lo; D_0031FCA8 = 1; ch = true; }
  if (ch) {
    param_2[12] = (float)((long double)v[0] - ox + param_2[12]);
    param_2[13] = (float)((long double)v[1] - oy + param_2[13]);
  }
  return r;
}

void func_000DC9E0(void) { extern float D_0031FC98,D_0031FC9C,D_0031FCA0,D_001D7FA0,D_001DB5F0; extern int D_0031E760; extern char D_001D70E8,D_001D70D4; int func_00091F00(...); int func_00091510(...); float v[16]; *(int*)((char*)v+0x30)=*(int*)&D_0031FC98;*(int*)((char*)v+0x38)=*(int*)&D_0031FC9C;*(int*)((char*)v+0x3c)=*(int*)&D_0031FCA0;func_00091F00(v);if(D_0031FC98>=D_001D7FA0&&D_0031FC98<=D_001DB5F0)func_00091510(&D_001D70E8,D_0031E760,v,0,0);else func_00091510(&D_001D70D4,D_0031E760,v,0,0); }

void func_000DCA80(unsigned int *dst, unsigned int *src)
{
  extern float D_001D2BC0;
  int func_0012FD80(unsigned int *, float);
  dst[0] = src[0x50 / 4];
  dst[1] = src[0x54 / 4];
  dst[2] = src[0x58 / 4];
 ;
  dst[4] = src[0x60 / 4];
  dst[5] = src[0x64 / 4];
  dst[6] = src[0x68 / 4];
  dst[8] = src[0x70 / 4];
  dst[9] = src[0x74 / 4];
  dst[10] = src[0x78 / 4];
  func_0012FD80(dst, (*((float *) (((char *) src) + 0x2f4))) * D_001D2BC0);
}

void func_000DCAE0(void) { extern int D_0031EA8C,D_00307DB4,D_0031EA94,D_0031E9D0; extern unsigned char D_0031EA90; extern char D_001DB5F4; int func_000ECB60(...); int func_00103210(...); int func_00103990(...); int func_00110330(...); if(D_0031EA8C){D_0031EA90=0;D_0031EA94=D_00307DB4;func_000ECB60();int r=func_00103210(&D_001DB5F4,0);func_00103990(r);} func_00110330(D_0031E9D0,(unsigned char)D_0031EA90); }

extern char D_0031E9B0[], D_0031E7E0[], D_0031E770[], D_0031E970[], D_0031E940[], D_0031E870[], D_0031E830[], D_0031E800[], D_0031E910[], D_0031E8D0[], D_0031E8A0[], D_0031EA74[], D_0031E7A0[];
extern char* D_0031E934;
extern int D_0031E7F4, D_0031EA88, D_0031E894;
extern float D_0031E974, D_0031E7A4;
void func_0012E700(void*, void*, void*);
void func_0012F730(void*, void*, void*);
void func_000D5170(void*, int);
void func_0012FE20(void*, int, int, int);
void func_0012E5F0(void*, void*, void*);
void func_000DCB30(void)
{
    char local[16];
    struct { int x; float y; int z; int w; } v;
    func_0012E700(local, D_0031E9B0, D_0031E7E0);
    func_0012F730(D_0031E970, local, D_0031E770);
    func_000D5170(D_0031E940, (int)D_0031E934);
    func_0012E700(local, D_0031E870, D_0031E7E0);
    func_0012F730(D_0031E830, local, D_0031E770);
    func_000D5170(D_0031E800, D_0031E7F4);
    func_0012E700(local, D_0031E910, D_0031E7E0);
    func_0012F730(D_0031E8D0, local, D_0031E770);
    func_0012FE20(D_0031E8A0, 0, D_0031EA88, 0);
    func_000D5170(D_0031E8A0, D_0031E894);
    float t = (float)((double)D_0031E974 - D_0031E7A4 - *(float*)(D_0031E934 + 0x14));
    v.x = 0;
    v.y = t;
    v.z = 0;
    func_0012E5F0(D_0031EA74, D_0031E7A0, &v);
}

void _func_000DCC40(void)
{
  extern float D_0031EA84, D_001D313C, D_001D2E24, D_0031E880, D_001D27B8, D_001D28E0, D_001DB60C, D_001D5D00, D_0031E920, D_001D2BC0, D_001D27EC;
  extern float D_0031E820, D_0031E824, D_0031E828;
  int func_0012FCF0(char *, float); float func_0012EA60(void *); int func_0012FD80(char *, float);
  float *v = (float *)D_0031E800;
  float x = (D_0031EA84 * D_001D313C + D_001D2E24) - D_0031E880;
  if (x > D_001D27B8) {
    if (x > D_001D28E0) x = D_001D28E0;
  } else {
    x = D_0031E880 * D_001DB60C;
  }
  x = x + D_0031E880;
  if (x > D_001D5D00) x = D_001D5D00;
  else if (x < D_001D2E24) x = D_001D2E24;
  D_0031E880 = D_0031E920 = x;
  func_0012FCF0(D_0031E800, (float)((double)x * D_001D2BC0));
  func_0012EA60(D_0031E800);
  func_0012EA60(&D_0031E820);
  v[0] = v[0] * D_001D27EC;
  v[1] = v[1] * D_001D27EC;
  v[2] = v[2] * D_001D27EC;
  D_0031E820 = D_0031E820 * D_001D27EC;
  D_0031E824 = D_0031E824 * D_001D27EC;
  D_0031E828 = D_0031E828 * D_001D27EC;
  func_0012FD80(D_0031E8A0, D_0031E920 * D_001D2BC0);
}

