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

void func_000C80F0(void) {
    extern char D_0031617C;
    extern char D_0031617D;
    D_0031617C = 0;
    D_0031617D = 0;
}

void func_000C84C0(void)
{
  extern float D_001E461C, D_001D27B8;
  extern int D_00316258;
  extern char D_00316850, D_00316930;
  float *p=(float *)&D_00316850;
  do {
    if (((char *)(p+1))[0]) {
      float f=*p-D_001E461C; *p=f;
      p[-5]=D_001E461C*p[-3]+p[-5]; p[-4]=D_001E461C*p[-2]+p[-4];
      if (f<D_001D27B8) { ((char *)(p+1))[0]=0; D_00316258+=(int)p[-1]; if(D_00316258<0) D_00316258=0; }
    }
    p+=7;
  } while ((int)p < 0x3f98);
}

