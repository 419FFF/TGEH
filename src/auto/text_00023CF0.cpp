/* 6 functions from 0x00023CF0 to 0x00024901, found by Ghidra. */
#include "common.h"
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(strcpy, strcat, strlen, memset)
#include <xmmintrin.h>
struct Vec3_23CF0 { float x, y, z; };

#pragma optimize("y", on)
void func_00023CF0(int param_1)
{
  int func_00116A90(...);
  int func_0009CBF0(...);
  int func_0013E469(...);
  int func_0009CBE0(...);
  int func_0011F270(...);
  float func_0012EA60(...);
  int func_0012F120(...);
  int func_0006B640(...);
  int func_001105E0(...);
  int func_00110000(...);
  int *func_0009C7A0(...);
  int func_00045A60(...);
  int func_000A1BB0(...);
  int func_00131990(...);
  extern int D_00308158;
  int *obj;
  int i, len;
  int *slot;
  char last[4];
  char base[104];
  char path[104];
  char tmp[116];
  __declspec(align(16)) int vp[7];
  float mat[15];

  obj = (int *)func_00116A90(0x54, 1, 1);
  *(int **)(param_1 + 0x110) = obj;
  obj[0] = 0;
  strcpy(base, *(char **)(param_1 + 0xc));
  len = strlen(base);
  last[0] = base[len - 1];
  base[len - 1] = 0;
  last[1] = 0;
  strcpy(path, base);
  strcat(path, "Path");
  strcat(path, last);
  obj[1] = func_0009CBF0(D_00308158, path) + 4;
  i = 0;
  slot = obj + 2;
  do {
    int n = i + 1;
    *slot = 0;
    func_0013E469(tmp, "%sTrigger%s_%i", base, last, n);
    *slot = func_0009CBE0(tmp);
    i = n;
    slot++;
  } while (i != 4);
  obj[6] = **(int **)(*(int *)(param_1 + 0x2c) + 0x2c);
  func_0011F270(obj[1], 0, vp + 4, vp);
  vp[1] = 0;
  func_0012EA60(vp);
  func_0012F120(mat);
  func_0006B640(mat, vp);
  *(Vec3_23CF0 *)&mat[12] = *(Vec3_23CF0 *)(vp + 4);
  func_001105E0(*(int *)(param_1 + 0x2c), mat, 1);
  func_00110000(*(int *)(param_1 + 0x2c));
  *(char *)(obj + 0x14) = 0;
  obj[0xb] = *func_0009C7A0(param_1, "SpeedRun", 0);
  obj[0xc] = 0;
  func_00045A60(param_1);
  obj[7] = func_000A1BB0(param_1, "turn180");
  func_00131990("");
}
#pragma optimize("", on)
void func_00023F00(int param_1) { volatile int marker=10; }

void __fastcall func_00024580(unsigned int* p){unsigned int z=0;p[0x17c/4]=z;p[0x180/4]=0x3f800000;p[0x184/4]=z;p[0x188/4]=z;p[0x18c/4]=z;p[0x190/4]=z;p[0x194/4]=z;p[0x198/4]=z;p[0x19c/4]=z;p[0x1a0/4]=z;}

void __fastcall func_000245D0(unsigned int* p){unsigned int one=0x3f800000;unsigned int z=0;p[0x17c/4]=z;p[0x180/4]=one;p[0x184/4]=one;p[0x188/4]=one;p[0x18c/4]=one;p[0x190/4]=z;p[0x194/4]=one;p[0x198/4]=one;p[0x19c/4]=z;p[0x1a0/4]=z;}

