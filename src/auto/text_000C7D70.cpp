/* 12 functions from 0x000C7D70 to 0x000C8C12, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct Ent_C8180 { int obj; char c; char pad[0x1b]; int a; int b; int d; };

void func_000C7D70(void)
{
  int func_000C3830(...);
  int func_0011B990(...);
  extern undefined4 D_00316050;
  extern undefined4 D_0031609C;
  func_000C3830();
  func_0011B990(D_00316050);
  func_0011B990(D_0031609C);
  return;
}

void _func_000C7D90(void)
{
  extern int D_003159A4, D_00315004;
  extern float D_001E4928[], D_001E493C[], D_001D27B0, D_00314F70, D_00314F74, D_00314F78;
  int func_00133F30(...);
  int func_00110060(...);
  int func_000C7790(...);
  int func_000C32F0(...);
  __declspec(align(16)) float m[16];
  float c0[3];
  float c1[3];
  int b[4];
  int a[21];
  if (D_003159A4 != -1) {
    int i;
    for (i = 0; i < 21; i++) a[i] = 0;
    a[0] = 0;
    a[1] = 0;
    a[10] = 1;
    a[11] = 0;
    a[12] = 0;
    a[20] = 0;
    a[19] = 0;
    a[21 - 1 + 0] = 0;
    func_00133F30(a);
    float t0 = D_001E4928[D_003159A4];
    float t1 = D_001E493C[D_003159A4];
    func_00110060(*(int *)(D_00315004 + 0x2c), m);
    float u = D_001D27B0 - t0;
    c0[0] = D_00314F70 * t0 + m[12] * u;
    b[0] = 0;
    b[1] = 0x3f800000;
    b[2] = 0;
    b[3] = 0x3f800000;
    c0[1] = D_00314F74 * t0 + m[13] * u;
    c0[2] = D_00314F78 * t0 + u * m[14];
    float u1 = D_001D27B0 - t1;
    c1[0] = D_00314F70 * t1 + m[12] * u1;
    c1[1] = D_00314F74 * t1 + m[13] * u1;
    c1[2] = D_00314F78 * t1 + u1 * m[14];
    func_000C7790(c0, c1, 0x41200000, 0x42200000, 6, 0, 0x40c90fdb, b);
  }
  func_000C32F0();
}

unsigned char func_000C7F20(unsigned char param_1)
{
  extern unsigned char D_0031617D, D_0031617C;
  extern unsigned char D_001E4954;
  extern int D_00308158, D_001DA6A4;
  int func_0009CB40(...), func_00107BF0(...), func_000B6600(...);
  if (((unsigned char *)&D_001E4954)[(signed char)D_0031617D] == param_1) {
    ++D_0031617D;
    if (D_0031617D == 4) {
      short *p=(short *)func_0009CB40(D_00308158,&D_001DA6A4);
      if (*p != 0) { func_00107BF0(p,0); D_0031617C=1; func_000B6600(0x13); }
    }
    return 1;
  }
  return 0;
}

void func_000C7F80(int param_1)
{
  int func_0013F2E9(...);
  int func_0009CB40(...);
  int func_00107BF0(...);
  unsigned char func_000C7F20(unsigned char);
  void func_000ECB20(int, float, float);
  extern int D_00308158;
  extern char D_001DA750, D_001DA73C, D_001DA724, D_001DA710, D_001DA6F8, D_001DA6E4, D_001DA6CC, D_001DA6B8, D_001D2B9C;
  extern unsigned char D_0031617C, D_0031617D;
  short *p;
  unsigned char id;

  switch (*(unsigned char *)(param_1 + 0x13)) {
  case 'W':
    p = (short *)func_0009CB40(D_00308158, &D_001D2B9C);
    func_00107BF0(p, 0);
    *p = 0;
    func_000ECB20(0, 60.0f, 0.2f);
    break;
  case 'X':
    if (func_0013F2E9(*(int *)(param_1 + 0xc), &D_001DA750) == 0) {
      p = (short *)func_0009CB40(D_00308158, &D_001DA73C);
      id = 1;
    } else if (func_0013F2E9(*(int *)(param_1 + 0xc), &D_001DA724) == 0) {
      p = (short *)func_0009CB40(D_00308158, &D_001DA710);
      id = 2;
    } else if (func_0013F2E9(*(int *)(param_1 + 0xc), &D_001DA6F8) == 0) {
      p = (short *)func_0009CB40(D_00308158, &D_001DA6E4);
      id = 3;
    } else if (func_0013F2E9(*(int *)(param_1 + 0xc), &D_001DA6CC) == 0) {
      p = (short *)func_0009CB40(D_00308158, &D_001DA6B8);
      id = 4;
    } else {
      return;
    }
    if (*p != 0) {
      func_00107BF0(p, 0);
      if (D_0031617C == 0 && func_000C7F20(id) == 0) {
        D_0031617D = 0;
        func_000C7F20(id);
      }
    }
    *p = 0;
    func_000ECB20(0, 60.0f, 0.2f);
    break;
  }
}

void func_000C80F0(void) {
    extern char D_0031617C;
    extern char D_0031617D;
    D_0031617C = 0;
    D_0031617D = 0;
}

void _func_000C8180(float param_1)
{
  extern int D_00316930, D_003161CC, D_00316210, D_00316214;
  extern float D_00316220, D_0031621C;
  extern int D_00316218;
  extern int D_00316258, D_003161C8, D_0031691C, D_00316920, D_00316928, D_0031692C, D_003161C0, D_003161C4;
  extern float D_0031625C[];
  extern char D_00316924;
  extern char D_001D8D40[], D_003161D0[], D_001DA848[], D_001DA83C[], D_001DA828[], D_001DA814[], D_001DA800[];
  extern char D_001DA7E8[], D_001DA7D0[], D_001DA7B8[], D_001DA7A4[], D_001DA794[], D_001DA774[], D_001DA768[];
  extern int D_00307DF8;
  extern int D_003163F0[], D_0031683C[], D_00316854[], D_00316934[];
  int func_0009C590(...);
  int func_00110060(...);
  int func_0009CBF0(...);
  int func_0009D3E0(...);
  int func_0005CCC0(...);
  int func_0005CCE0(...);
  int func_0011F270(int, float, void *, int);
  float func_0012E7B0(...);
  int func_0013E469(...);
  int func_0009C6A0(...);
  int func_0013F2E9(...);
  int func_00088990(...);
  int func_000A29C0(...);
  int func_000A2810(...);
  int func_001031C0(...);
  int func_00103990(...);
  int func_000B5520(...);
  int iVar1;
  int iVar4;
  int *piVar5;
  char *puVar2;
  int local_64;
  int rem;
  float f1, f2;
  char local_60[16];
  char local_50[16];
  char local_40[64];

  D_00316930 = *(int *)&param_1;
  D_003161CC = func_0009C590(D_001D8D40);
  func_00110060(*(int *)(D_003161CC + 0x2c), D_003161D0);
  D_00316210 = func_0009CBF0(D_003161CC, D_001DA848);
  D_00316214 = *(int *)(D_00316210 + 4);
  func_0009D3E0(D_00307DF8);
  func_0005CCC0(4);
  func_0005CCE0(1);
  iVar4 = 0;
  D_00316220 = 0;
  D_0031621C = 0;
  *(int *)&param_1 = 0;
  local_64 = 0;
  if (0 < D_00316214) {
    do {
      f1 = (float)(local_64 + (long double)0);
      func_0011F270(D_00316210 + 4, f1, local_50, 0);
      iVar4 = local_64 + 1;
      rem = iVar4 % D_00316214;
      f2 = (float)(rem + (long double)0);
      func_0011F270(D_00316210 + 4, f2, local_60, 0);
      D_0031625C[local_64] = (float)(param_1 + (long double)0);
      param_1 = (float)((long double)func_0012E7B0(local_50, local_60) + (long double)param_1);
      local_64 = iVar4;
    } while (iVar4 < D_00316214);
  }
  D_0031625C[iVar4] = (float)(param_1 + (long double)0);
  D_00316218 = *(int *)&param_1;
  D_00316258 = 0;
  D_003161C8 = 0x42960000;
  iVar4 = 0;
  piVar5 = D_003163F0;
  do {
    iVar4 = iVar4 + 1;
    func_0013E469(local_40, D_001DA83C, iVar4);
    iVar1 = func_0009C6A0(D_003161CC, local_40);
    *piVar5 = iVar1;
    *(char *)(piVar5 + 1) = 0;
    func_0009D3E0(iVar1);
    piVar5[8] = 0;
    iVar1 = func_0013F2E9(**(int **)(*piVar5 + 0x1c), D_001DA828);
    if (iVar1 == 0) {
      piVar5[9] = 0;
      piVar5[8] = 5;
      piVar5[10] = 0xc2480000;
    }
    iVar1 = func_0013F2E9(**(int **)(*piVar5 + 0x1c), D_001DA814);
    if (iVar1 == 0) {
      piVar5[9] = 1;
      piVar5[8] = 10;
      piVar5[10] = 0xc1f00000;
    }
    iVar1 = func_0013F2E9(**(int **)(*piVar5 + 0x1c), D_001DA800);
    if (iVar1 == 0) {
      piVar5[9] = 2;
      piVar5[8] = 0x19;
      piVar5[10] = 0;
    }
    if (func_0013F2E9(**(int **)(*piVar5 + 0x1c), D_001DA7E8) == 0 ||
        func_0013F2E9(**(int **)(*piVar5 + 0x1c), D_001DA7D0) == 0 ||
        func_0013F2E9(**(int **)(*piVar5 + 0x1c), D_001DA7B8) == 0) {
      piVar5[9] = 3;
      piVar5[8] = -0x14;
      piVar5[10] = 0x41700000;
    }
    piVar5 = piVar5 + 0xb;
  } while (piVar5 < D_0031683C);
  puVar2 = (char *)D_00316854;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 0x1c;
  } while (puVar2 < (char *)D_00316934);
  D_0031691C = func_0009C590(D_001DA7A4);
  func_0009D3E0(D_0031691C);
  D_00316920 = 0;
  D_00316924 = 0;
  D_00316928 = func_0009C590(D_001DA794);
  *(char *)(D_00316928 + 0x14) = 0;
  D_0031692C = func_0009C590(D_001DA774);
  *(char *)(D_0031692C + 0x14) = 0;
  func_00088990(*(int *)(D_0031692C + 0x2c), 0, 0, 1);
  func_0009D3E0(D_0031692C);
  D_003161C0 = 0;
  D_003161C4 = 0;
  func_000A29C0(1);
  func_000A2810();
  func_00103990(func_001031C0(D_00316928, D_001DA768, 1));
  func_000B5520(0);
}

void func_000C84C0(void) { extern float D_001E461C,D_001D27B8; extern int D_00316258; extern char D_00316850,D_00316930; float *p=(float*)&D_00316850; do { if(((char*)(p+1))[0]) { float f=*p-D_001E461C; *p=f; p[-5]=D_001E461C*p[-3]+p[-5]; p[-4]=D_001E461C*p[-2]+p[-4]; if(f<D_001D27B8) { ((char*)(p+1))[0]=0; D_00316258+=(int)p[-1]; if(D_00316258<0) D_00316258=0; } } p+=7; } while((int)p<0x3f98); }

void func_000C8530(unsigned int x,unsigned int y) { extern float D_001D2800,D_001D27D0,D_001D2BF8,D_001D5D00; extern unsigned char D_00316854; int func_00063090(...); float a,b; func_00063090(&a); a+=D_001D2800; b+=D_001D27D0; int i=0; unsigned char*p=&D_00316854; do { if(!*p) break; p+=0x1c; ++i; } while(p<(unsigned char*)0x4080); if(i<16) { extern unsigned char D_0031683C; float *f=(float*)((char*)&D_0031683C+i*0x1c); f[0]=a; f[5]=0.4f; f[1]=b; *(unsigned int*)((char*)f+0x10)=y; *((unsigned char*)f+6)=1; f[2]=(D_001D2800-a)*D_001D2BF8; f[3]=(D_001D5D00-b)*D_001D2BF8; }}

#pragma optimize("y", off)
void func_000C8AA0(void){extern unsigned int D_001E495C,D_001E4960,D_00316180[16],D_00316928;int func_0012F7A0(...),func_0012F120(...),func_0012FCF0(...),func_0012F250(...),func_001105E0(...);unsigned char b[0xd8];unsigned int v[3];v[1]=D_001E495C;v[2]=D_001E4960;v[0]=0;func_0012F7A0(v,D_00316180);func_0012F120(b+0xa8);func_0012FCF0(b+0xac,0);func_0012F250(b+0x3c,b+0xb8,b+0x74);*(unsigned int*)(b+0x70)=v[0];*(unsigned int*)(b+0x74)=v[1];*(unsigned int*)(b+0x7c)=v[2];func_001105E0(*(unsigned int*)(D_00316928+0x2c),b+0x44,0);}
void func_000C8B60(void){extern unsigned int D_00316180[16],D_0031692C;int func_0012F7A0(...),func_0012F120(...),func_0012FCF0(...),func_0012F250(...),func_001105E0(...);unsigned int v[3]={0,0,0x447a0000};unsigned char b[0xd8];func_0012F7A0(v,D_00316180);func_0012F120(b+0xa8);func_0012FCF0(b+0xac,0x40490fdb);func_0012F250(b+0x3c,b+0xb8,b+0x74);*(unsigned int*)(b+0x70)=v[0];*(unsigned int*)(b+0x74)=v[1];*(unsigned int*)(b+0x7c)=v[2];func_001105E0(*(unsigned int*)(D_0031692C+0x2c),b+0x44,0);}
#pragma optimize("", on)
