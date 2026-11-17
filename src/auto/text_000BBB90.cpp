/* 10 functions from 0x000BBB90 to 0x000BCAA4, found by Ghidra. */
#include "common.h"

extern int* D_00314414;
extern int D_001D9210;
extern int D_003251A8;
extern int D_00314BD4;
extern int D_001D918C;
extern int D_001D8484;
extern int D_001D84D4;
extern int D_00313B60;
extern int D_00314300;
extern int D_00324AFC;
extern int D_0033116C;
extern int D_00314B38;
extern int D_00307DF8;
extern int D_00314B28;
extern int D_00314B24;
extern int D_00308158;
extern int D_003251A8;

#pragma optimize("y", on)
void func_000BBB90(void) {}

int _func_001031C0(int a, int b);
int func_00102E80(int);
int func_0009C590(int);
void func_000687F0();
void func_00068800(int);
void func_00136450();
int func_000F91D0(int);
int func_000F86E0(int);
void func_00110420(int, int*);
void func_00110480(int*, int, int);
void func_00124AD0();
void func_00110760(int);
int func_0008F610(int);
int func_0008F740(int);
int func_0005CCC0(int);
void func_0002DF20(int);
int func_0009D3E0(int);
int func_0009D640(int);
void func_0010F8A0();
void func_0011BE30();
int func_000F8B60(int, int);
void func_000F9700();
void func_000F9610(int*);
void func_00107C40(int, int, int);

int _func_000BC340(int a, int b, int c, int *p) { extern int D_00314B30; *p = D_00314B30; return 1; }
void func_000BC450(void) {
    int func_000B6510(...);
    func_000B6510(16, 0);
}

unsigned char func_000BC460(int *out)
{
  unsigned char new_var;
  extern int D_00314B28;
  extern int D_00314B24;
  if (D_00314B28 == 2)
  {
    int value = D_00314B24;
    new_var = 0x3f800000;
    D_00314B28 = 0;
    if (value)
    {
      *out = 0;
      return 1;
    }
    *out = new_var;
    return 1;
  }
  return 0;
}

void func_000BC990(int a, int b) {
 int func_0009C590(...);
 int func_00110060(...);
 int func_001105E0(...);
 char local[64];
 int p=func_0009C590(b);
 func_00110060(*(int *)(p+0x2c), local);
 func_001105E0(*(int *)(a+0x2c), local, 1);
}
#pragma optimize("y", on)
