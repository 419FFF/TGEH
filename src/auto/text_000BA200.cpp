/* 7 functions from 0x000BA200 to 0x000BB014, found by Ghidra. */
#include "common.h"

struct BA200_Ent {
  float x;
  float y;
  float z;
  char pad0c[0x58];
  int id;
  char pad68[0xe8];
  float f150;
  char pad154[0x3b];
  unsigned char f18f;
  char pad190[0x60];
};

#pragma optimize("y", on)
void func_000BAAF0(int p,unsigned char flag){extern float D_001D27B8,D_001D37AC; extern unsigned char D_00314500; extern float D_003143B0,D_003143B8; extern int D_00314B54,D_00314414,D_001D91D4; int func_001031C0(...); int func_00103990(...); if(*(float*)((char*)&D_00314500+p*0x1f0)==D_001D27B8){*(float*)((char*)&D_003143B0+p*0x1f0)*=D_001D37AC; *(u32*)((char*)&D_00314500+p*0x1f0)=0x3f800000; *(float*)((char*)&D_003143B8+p*0x1f0)*=D_001D37AC; if(flag)func_00103990(func_001031C0(*(int*)((char*)&D_00314414+D_00314B54*0x1f0),&D_001D91D4,0));}}
#pragma optimize("", on)
void func_000BAB70(int a, int b)
{
 extern char D_00314374;
 extern double D_001D2B98;
 extern double D_003143B0,D_003143B4,D_003143B8;
 void func_0012E6D0(...); double func_0012EA60(...);
 double v[3];
 func_0012E6D0(v, (char*)&D_00314374+a*0x1f0, (char*)&D_00314374+b*0x1f0);
 func_0012EA60(v);
 v[0]*=D_001D2B98; v[1]*=D_001D2B98; v[2]*=D_001D2B98;
 *(double*)((char*)&D_003143B0+a*0x1f0)+=v[0];
 *(double*)((char*)&D_003143B4+a*0x1f0)+=v[1];
 *(double*)((char*)&D_003143B8+a*0x1f0)+=v[2];
 *(double*)((char*)&D_003143B0+b*0x1f0)-=v[0];
 *(double*)((char*)&D_003143B4+b*0x1f0)-=v[1];
 *(double*)((char*)&D_003143B8+b*0x1f0)-=v[2];
}

#pragma optimize("y", on)
void func_000BAC30(int param_1)
{
  extern int D_00314B2C, D_00314B54;
  extern unsigned char D_0031453F[];
  extern int D_00314414[], D_00314BD4[];
  extern float D_003143B0[], D_00314B70[];
  extern float D_001D27B8, D_001D37AC;
  extern int D_001D91D4;
  int func_000BAAF0(...), func_000BAB70(...), func_001031C0(...), func_00103990(...);
  int idx, i;
  int *p;
  float *f;
  if (*(int *)(*(int *)(param_1 + 4) + 8) == D_00314B2C)
    D_0031453F[D_00314B54 * 0x1f0] = 1;
  func_000BAAF0(D_00314B54, *(int *)(*(int *)(param_1 + 4) + 8) != D_00314B2C);
  idx = -1;
  i = 0;
  p = D_00314414;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 8) == *p)
      idx = i;
    p += 0x7c;
    i++;
  } while (p < D_00314BD4);
  if (idx != -1)
    func_000BAB70(D_00314B54, idx);
  f = D_003143B0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 8) == *(int *)(f + 0x19) && f[0x54] == D_001D27B8) {
      *(int *)(f + 0x54) = 0x3f800000;
      f[0] *= D_001D37AC;
      f[2] *= D_001D37AC;
      func_00103990(func_001031C0(D_00314414[D_00314B54 * 0x7c], &D_001D91D4, 0));
    }
    f += 0x7c;
  } while (f < D_00314B70);
}
#pragma optimize("", on)

