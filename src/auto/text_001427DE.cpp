/* 47 functions from 0x001427DE to 0x00143780, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

unsigned int _func_001427DE(int *a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int *a4, int a5, unsigned int a6, unsigned int a7) { int func_00142ACC(...); int func_00142085(...); int func_001425FF(...); unsigned int r=1; if ((*a4 & 0x1fffffff)!=0x19930520) func_00142ACC(); if ((*(unsigned char *)(a0+1)&0x66)!=0) { if(a4[1]!=0 && a5==0) func_00142085(a1,a3,a4,0xffffffff); } else if(a4[3]!=0) func_001425FF(a0,a1,a2,a3,a4,a7,a5,a6); return r; }

void *_func_00142880(void) { int func_001455E1(...); int func_0010BA93(...); int func_00141FD9(...); int *p=0; p=(int *)func_001455E1(1,0x88); if(p) { p[0x15]=0; p[5]=1; p[1]=-1; p[0]=func_0010BA93(); } else func_00141FD9(0x10); return p; }

void func_001429C2(void) {
    int func_001435DF(...);
    func_001435DF(13);
}

int _func_00142A1D(void) { int func_0014356D(...); int func_001435B6(...); if(func_0014356D()) return 0; func_001435B6(); return 0; }

void _func_00142A90(void) { int func_0013EEE4(...); void *_func_00142880(...); extern int D_001E2140; func_0013EEE4(&D_001E2140,8); _func_00142880(); }

void _func_00142ACC(void) { int func_0013EEE4(...); int func_00142A90(...); extern int D_001E2150; extern int D_002E8F0C; func_0013EEE4(&D_001E2150,8); if(D_002E8F0C) ((void (*)(void))D_002E8F0C)(); func_00142A90(); }

void _func_00142B4C(void) { volatile unsigned int local_20,local_10,local_0c; local_20=0; local_10=0; local_0c=0; }

long double _func_00142B63(long double x) { volatile double d=(double)x; return (long double)d; }

long double _func_00142BA0(long double x) { return (long double)(int)x; }

unsigned int __cdecl _controlfp(unsigned int, unsigned int);
void _func_00142BB5(unsigned int value) { volatile unsigned short control = (unsigned short)((value & 0x300) | 0x7f); (void)control; }

#pragma intrinsic(_statusfp)
extern unsigned int __cdecl _statusfp(void);
extern double D_001E215C;
int _func_00142BCC(unsigned int value) { if ((value & 0x80000) != 0) return 7; return (int)(value ? D_001E215C : D_001E215C); }

long double _func_00142BE5(unsigned int unused, double *p) { return (long double)*p; }

unsigned int _func_00142C28(unsigned int a0, volatile unsigned int a1) { unsigned int bits=a1&0x7ff00000; if(bits==0x7ff00000) return a1; return bits; }

void _func_00142C3E(volatile unsigned short value) { volatile unsigned short copy=value; if (copy != 0x27f) return; }

void _func_00142C4B(void) { _func_00142B63(8); }

unsigned int _func_00142C75(double value,int a,int b) { volatile double copy=value; return ((unsigned int*)&copy)[1]&0x7ff00000; }

void _func_00142C89(void) { _func_00142B63(8); }

#pragma optimize("y", off)
double _func_00142D2C(double x, int exp) {
 volatile union { double d; unsigned int u[2]; } v;
 v.d=x;
 v.u[1]=(v.u[1]&0xffff800fU)|((exp+0x3fe)<<4);
 return v.d;
}

int* _func_001460D6(void);
int _func_00142D56(unsigned int lo, unsigned int hi) {
 if (hi == 0x7ff00000 && lo == 0) return 1;
 if (hi == 0xfff00000 && lo == 0) return 2;
 if ((hi >> 16 & 0x7ff8) == 0x7ff8) return 3;
 if ((hi >> 16 & 0x7ff8) == 0x7ff0 && (hi & 0x7ffff) == 0 && lo == 0) return 0;
 if ((hi >> 16 & 0x7ff8) == 0x7ff0) return 4;
 return 0;
}

double _func_00142DB1(double x, int *exp) { *exp=0; return x; }

#pragma optimize("y", on)
void _func_001432F6(int n) {
 if (n != 1) {
  if (n <= 1) return;
  if (n > 3) return;
  *_func_001460D6() = 0x22;
  return;
 }
 *_func_001460D6() = 0x21;
}
int _func_0014331E(unsigned char value) {
 int result;
 if (value & 0x20) result=5;
 else if (value & 8) result=1;
 else if (value & 4) result=2;
 else if (value & 1) result=3;
 else result=(value & 2) << 1;
 return result;
}
int _func_001434DC(void) { return (int)(short)_statusfp(); }
extern unsigned int __cdecl _clear87(void);
#pragma intrinsic(_clear87)
int _func_001434E7(void)
{
  volatile short status = (short)_clear87();
  return status;
}
void func_00143688(void) {
    int func_001435DF(...);
    func_001435DF(10);
}

void _func_0014370C(void) { }

void func_0014370E(void) {
    int func_001435DF(...);
    func_001435DF(4);
}

void func_00143717(void) {
    int func_001436BF(...);
    func_001436BF();
}

undefined4 func_00143762(void)
{
  extern undefined4 D_0037BBB8;
  int __stdcall func_0010B8F6(int);
  int __stdcall func_0014371C(int);
  D_0037BBB8 = func_0010B8F6((int)(&func_0014371C));
  return 0;
}

void func_00143774(void)
{
  extern int D_0037BBB8[1];
  void __stdcall func_0010B8F6(int);
  func_0010B8F6(D_0037BBB8[0]);
}

