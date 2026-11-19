/* 12 functions from 0x000C7D70 to 0x000C8C12, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

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

void func_000C84C0(void) { extern float D_001E461C,D_001D27B8; extern int D_00316258; extern char D_00316850,D_00316930; float *p=(float*)&D_00316850; do { if(((char*)(p+1))[0]) { float f=*p-D_001E461C; *p=f; p[-5]=D_001E461C*p[-3]+p[-5]; p[-4]=D_001E461C*p[-2]+p[-4]; if(f<D_001D27B8) { ((char*)(p+1))[0]=0; D_00316258+=(int)p[-1]; if(D_00316258<0) D_00316258=0; } } p+=7; } while((int)p<0x3f98); }

void func_000C8530(unsigned int x,unsigned int y) { extern float D_001D2800,D_001D27D0,D_001D2BF8,D_001D5D00; extern unsigned char D_00316854; int func_00063090(...); float a,b; func_00063090(&a); a+=D_001D2800; b+=D_001D27D0; int i=0; unsigned char*p=&D_00316854; do { if(!*p) break; p+=0x1c; ++i; } while(p<(unsigned char*)0x4080); if(i<16) { extern unsigned char D_0031683C; float *f=(float*)((char*)&D_0031683C+i*0x1c); f[0]=a; f[5]=0.4f; f[1]=b; *(unsigned int*)((char*)f+0x10)=y; *((unsigned char*)f+6)=1; f[2]=(D_001D2800-a)*D_001D2BF8; f[3]=(D_001D5D00-b)*D_001D2BF8; }}

#pragma optimize("y", off)
void func_000C8AA0(void){extern unsigned int D_001E495C,D_001E4960,D_00316180[16],D_00316928;int func_0012F7A0(...),func_0012F120(...),func_0012FCF0(...),func_0012F250(...),func_001105E0(...);unsigned char b[0xd8];unsigned int v[3];v[1]=D_001E495C;v[2]=D_001E4960;v[0]=0;func_0012F7A0(v,D_00316180);func_0012F120(b+0xa8);func_0012FCF0(b+0xac,0);func_0012F250(b+0x3c,b+0xb8,b+0x74);*(unsigned int*)(b+0x70)=v[0];*(unsigned int*)(b+0x74)=v[1];*(unsigned int*)(b+0x7c)=v[2];func_001105E0(*(unsigned int*)(D_00316928+0x2c),b+0x44,0);}
void func_000C8B60(void){extern unsigned int D_00316180[16],D_0031692C;int func_0012F7A0(...),func_0012F120(...),func_0012FCF0(...),func_0012F250(...),func_001105E0(...);unsigned int v[3]={0,0,0x447a0000};unsigned char b[0xd8];func_0012F7A0(v,D_00316180);func_0012F120(b+0xa8);func_0012FCF0(b+0xac,0x40490fdb);func_0012F250(b+0x3c,b+0xb8,b+0x74);*(unsigned int*)(b+0x70)=v[0];*(unsigned int*)(b+0x74)=v[1];*(unsigned int*)(b+0x7c)=v[2];func_001105E0(*(unsigned int*)(D_0031692C+0x2c),b+0x44,0);}
#pragma optimize("", on)
