struct FpuB_00142E65 { unsigned b0 : 1, b1 : 1, b2 : 1, b3 : 1, b4 : 1, b5 : 1; };
struct FpuG_00142E65 { unsigned f0 : 1, f1 : 1, f2 : 1, f3 : 1, f4 : 1; };
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

void __cdecl _func_00142E65(unsigned int *param_1, unsigned int *param_2, unsigned int param_3, int param_4, double *param_5, double *param_6)
{
  unsigned char func_001434DC(...);
  int func_001434E7(...);
  int __stdcall func_0010B8A0(int, int, int, unsigned int **);
  unsigned char bVar3;
  unsigned int uVar4;

  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_1[1] = param_1[1] | 1;
    param_3 = 0xc000008f;
  }
  if ((param_3 & 2) != 0) {
    param_1[1] = param_1[1] | 2;
    param_3 = 0xc0000093;
  }
  if ((param_3 & 1) != 0) {
    param_1[1] = param_1[1] | 4;
    param_3 = 0xc0000091;
  }
  if ((param_3 & 4) != 0) {
    param_1[1] = param_1[1] | 8;
    param_3 = 0xc000008e;
  }
  if ((param_3 & 8) != 0) {
    param_1[1] = param_1[1] | 0x10;
    param_3 = 0xc0000090;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 << 1) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  bVar3 = func_001434DC();
  if ((bVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((bVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((bVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((bVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((bVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar4 = *param_2 & 0xc00;
  if (uVar4 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  } else if (uVar4 == 0x400) {
    *param_1 = (*param_1 & 0xfffffffe) | 2;
  } else if (uVar4 == 0x800) {
    *param_1 = (*param_1 & 0xfffffffd) | 1;
  } else if (uVar4 == 0xc00) {
    *param_1 = *param_1 | 3;
  }
  uVar4 = *param_2 & 0x300;
  if (uVar4 == 0) {
    *param_1 = (*param_1 & 0xffffffe7) | 4;
  } else if (uVar4 == 0x200) {
    *param_1 = (*param_1 & 0xffffffeb) | 8;
  } else if (uVar4 == 0x300) {
    *param_1 = *param_1 & 0xffffffe3;
  }
  *param_1 = *param_1 ^ (((unsigned int)param_4 << 5) ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  param_1[8] = (param_1[8] & 0xffffffe3) | 2;
  *(double *)(param_1 + 4) = *param_5;
  param_1[0x18] = param_1[0x18] | 1;
  param_1[0x18] = (param_1[0x18] & 0xffffffe3) | 2;
  *(double *)(param_1 + 0x14) = *param_6;
  func_001434E7();
  func_0010B8A0(param_3, 0, 1, &param_1);
  if ((param_1[2] & 0x10) != 0) {
    *param_2 = *param_2 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *param_2 = *param_2 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *param_2 = *param_2 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *param_2 = *param_2 & 0xffffffdf;
  }
  uVar4 = *param_1 & 3;
  if (uVar4 == 0) {
    *param_2 = *param_2 & 0xfffff3ff;
  } else if (uVar4 == 1) {
    *param_2 = (*param_2 & 0xfffff7ff) | 0x400;
  } else if (uVar4 == 2) {
    *param_2 = (*param_2 & 0xfffffbff) | 0x800;
  } else if (uVar4 == 3) {
    *(unsigned char *)((int)param_2 + 1) = *(unsigned char *)((int)param_2 + 1) | 0xc;
  }
  uVar4 = (*param_1 >> 2) & 7;
  if (uVar4 == 0) {
    *param_2 = (*param_2 & 0xfffff3ff) | 0x300;
  } else if (uVar4 == 1) {
    *param_2 = (*param_2 & 0xfffff3ff) | 0x200;
  } else if (uVar4 == 2) {
    *param_2 = *param_2 & 0xfffff3ff;
  }
  *param_6 = *(double *)(param_1 + 0x14);
}

bool _func_00143109(unsigned int p1, double *p2, unsigned int p3)
{
    extern double D_001DF1B0, D_002E8F20, D_002E8F10;
    double func_00142DB1(double, int *);
    int func_00143517(...);
    unsigned int r = p1 & 0x1f;
    unsigned int loc = r;
    if ((p1 & 8) && (p3 & 1)) {
        func_00143517(1);
        r &= ~8u;
    } else if ((p1 & 4) && (p3 & 4)) {
        func_00143517(4);
        r &= ~4u;
    } else if ((p1 & 1) && (p3 & 8)) {
        unsigned int m = p3 & 0xc00;
        double a, b;
        func_00143517(8);
        a = D_002E8F10;
        b = D_002E8F10;
        if (m == 0) {
        } else if (m == 0x400) {
            b = D_002E8F20;
        } else {
            a = D_002E8F20;
            if (m == 0x800) {
            } else if (m == 0xc00) {
                b = D_002E8F20;
            }
        }
        if (*p2 <= D_001DF1B0) b = -a;
        *p2 = b;
        r &= ~1u;
    } else if ((p1 & 2) && (p3 & 0x10)) {
        bool flag = (p1 & 0x10) != 0;
        if (*p2 != D_001DF1B0) {
            int e;
            double m = func_00142DB1(*p2, &e);
            union { double d; unsigned int w[2]; } u;
            double res;
            e -= 0x600;
            if (e < -0x432) {
                res = m * D_001DF1B0;
                flag = true;
            } else {
                u.d = m;
                u.w[1] = (u.w[1] & 0xfffff) | 0x100000;
                if (e < -0x3fd) {
                    int n = -0x3fd - e;
                    do {
                        if ((u.w[0] & 1) && !flag) flag = true;
                        u.w[0] >>= 1;
                        if (u.w[1] & 1) u.w[0] |= 0x80000000;
                        u.w[1] >>= 1;
                    } while (--n);
                }
                res = u.d;
                if (m < D_001DF1B0) res = -res;
            }
            *p2 = res;
        }
        if (flag) func_00143517(0x10);
        loc &= ~2u;
        r = loc;
    }
    if ((p1 & 0x10) && (p3 & 0x20)) {
        func_00143517(0x20);
        r &= ~0x10u;
    }
    return r == 0;
}

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

double _func_0014334B(void *p0, int key, unsigned int a2, unsigned int a3,
                      unsigned int a4, unsigned int a5, double result, unsigned int a8) {
    extern unsigned int _D_002E8F38[];
    extern unsigned int _D_002E8F3C[];
    extern unsigned int _D_0000FFFF;
    extern int _func_001434F3(unsigned int, unsigned int *);
    extern int _func_0014615B(void *);
    extern int _func_001432F6(void *);
    int i;
    int found = 0;
    unsigned int local;
    for (i=0; i<0x1d; ++i) {
        if (_D_002E8F38[i*2] == (unsigned int)key) {
            found = _D_002E8F3C[i*2];
            break;
        }
    }
    if (found) {
        struct { void *p; unsigned int v[6]; } args;
        args.p=p0; args.v[0]=a2; args.v[1]=a3; args.v[2]=a4;
        args.v[3]=a5; args.v[4]=*(unsigned int *)&result; args.v[5]=*((unsigned int *)&result+1);
        _func_001434F3(a8, &_D_0000FFFF);
        local = _func_0014615B(&args);
        if (!local) _func_001432F6(p0);
        return result;
    }
    _func_001434F3(a8, &_D_0000FFFF);
    _func_001432F6(p0);
    return result;
}

longdouble func_001433E9(undefined4 param_1, double param_2, undefined4 param_3)
{
  extern undefined4 D_002E9688;
  int func_0014334B(...);
  int func_001460D6(...);
  int func_001434F3(...);
  undefined4 *puVar1;
  longdouble lVar2;
  
  if (D_002E9688 == 0) {
    lVar2 = (longdouble)func_0014334B(1,param_1,param_2,0,param_2,param_3);
    return lVar2;
  }
  puVar1 = (undefined4 *)func_001460D6();
  *puVar1 = 0x21;
  func_001434F3();
  return (longdouble)param_2;
}

longdouble func_0014343C(undefined4 param_1, undefined4 param_2, undefined8 param_3, double param_4, undefined4 param_5)
{
  int func_00143109(...);
  int func_00142E65(...);
  int func_0014331E(...);
  extern undefined4 D_002E9688;
  int func_0014334B(...);
  int func_001432F6(...);
  int func_001434F3(...);
  int iVar1;
  longdouble lVar2;
  
  iVar1 = func_00143109(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    func_00142E65();
  }
  iVar1 = func_0014331E(param_1);
  if ((D_002E9688 == 0) && (iVar1 != 0)) {
    lVar2 = (longdouble)func_0014334B(iVar1,param_2,param_3,0,param_4,param_5);
  }
  else {
    func_001432F6(iVar1);
    func_001434F3();
    lVar2 = (longdouble)param_4;
  }
  return lVar2;
}

int func_001434DC(void)
{
  short sw;
  sw = 0;
  return sw;
}
extern unsigned int __cdecl _clear87(void);
extern unsigned int __cdecl _clearfp(void);
#pragma intrinsic(_statusfp)
int _func_001434E7(void) { volatile signed short status=(signed short)_statusfp(); return status; }
int func_001434F3(void)
{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}

void func_00143517(void){volatile unsigned char flags=0;volatile long double x=0.0L;if(flags&1)x=2.0L;if(flags&8)x=1.0L;if(flags&16)x=0.0L;if(flags&4)x=1.0L/x;if(flags&32)x=3.1415926535897932384626433832795029L;(void)x;}

undefined4 func_0014356D(void)
{
  extern undefined D_0037BA30;
  extern undefined D_002E903C;
  extern undefined D_002E9038;
  int func_0014616E(...);
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = ((undefined *)&D_0037BA30);
  do {
    if (*(int *)(((undefined *)&D_002E903C) + iVar2 * 8) == 1) {
      *(undefined **)(((undefined *)&D_002E9038) + iVar2 * 8) = puVar3;
      puVar3 = puVar3 + 0x1c;
      iVar1 = func_0014616E(*(undefined4 *)(((undefined *)&D_002E9038) + iVar2 * 8),4000);
      if (iVar1 == 0) {
        *(undefined4 *)(((undefined *)&D_002E9038) + iVar2 * 8) = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}

extern void _func_001436BF(int);
extern void func_001436BF(int);
extern void func_00143691(int);
extern int func_001439FB(int);
extern int *func_001460D6(void);
extern int func_0014616E(int,int);
extern void func_0013EEE4(void *,int);
extern void func_0013EF1F(void);
extern void func_00143688(void);
extern void func_0013F06A(void *,int);
void _func_001435B6(void) {
    extern undefined D_002E9038;
    extern undefined D_002E9158;
    int zero = 0;
    int *p = (int *)&D_002E9038;
    do {
        if (*p != zero && p[1] != 1) {
            func_001436BF(*p);
            *p = *p & zero;
        }
        p += 2;
    } while ((int)p < (int)&D_002E9158);
}

extern int _D_002E9038[];
extern void (__stdcall *___imp__RtlLeaveCriticalSection)(void *);
extern "C" void (__stdcall * __imp__RtlLeaveCriticalSection)(void *);
void _func_001435DF(int a0) {
    ___imp__RtlLeaveCriticalSection((void *)_D_002E9038[a0 * 2]);
}

extern int _func_001439FB(int);
extern void _func_00143691(int);
extern int *_func_001460D6(void);
extern int _func_0014616E(int,int);
extern void _func_0013EEE4(void *,int);
extern void _func_0013EF1F(void);
extern void _func_00143688(void);
extern void _func_0013F06A(void *,int);
void _func_001435F1(int index) {
    extern undefined D_001E2260;
    extern undefined D_002E9038;
    int *slot = (int *)((char *)&D_002E9038 + index * 8);
    int value;
    _func_0013EEE4(&D_001E2260, 8);
    if (*slot == 0) {
        value = _func_001439FB(0x1c);
        if (value == 0) {
            *_func_001460D6() = 0xc;
        } else {
            _func_00143691(10);
            if (*slot == 0) {
                if (_func_0014616E(value, 4000) == 0) {
                    _func_001436BF(value);
                    *_func_001460D6() = 0xc;
                    _func_0013F06A((char *)&value - 0x10, -1);
                } else {
                    *slot = value;
                }
            } else {
                _func_001436BF(value);
            }
            _func_00143688();
        }
    }
    _func_0013EF1F();
}

void func_00143688(void) {
    int func_001435DF(...);
    func_001435DF(10);
}

extern int func_001435F1(int);
extern void func_00141FD9(int);
extern void (__stdcall *___imp__RtlEnterCriticalSection)(void *);
extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void *);
void _func_00143691(int index) {
    extern undefined D_002E9038;
    int *slot = (int *)((char *)&D_002E9038 + index * 8);
    if (*slot == 0 && func_001435F1(index) == 0)
        func_00141FD9(0x11);
    RtlEnterCriticalSection((void *)*slot);
}

extern void _func_0013EEE4(int,void*); extern void _func_00143691(void); extern void _func_0014370E(void); extern int _func_0010C459(int,int); extern void _func_0010C442(int,int,int); extern void _func_0013EF1F(void); extern char _D_001E2270; extern int _D_0037C090; void _func_001436BF(int arg) { _func_0013EEE4(12,&_D_001E2270); if(arg){ if(_D_0037C090==3){_func_00143691();_func_0014370E();} _func_0010C442(0,arg,_func_0010C459(0,arg)); } _func_0013EF1F(); }

void _func_0014370C(void) { }

void func_0014370E(void) {
    int func_001435DF(...);
    func_001435DF(4);
}

void func_00143717(void) {
    int func_001436BF(...);
    func_001436BF();
}

int __stdcall func_0014371C(int *arg) { return 0; }

undefined4 func_00143762(void)
{
  extern undefined4 D_0037BBB8;
  int __stdcall func_0010B8F6(int);
  int __stdcall func_0014371C(int);
  D_0037BBB8 = func_0010B8F6((int)(&func_0014371C));
  return 0;
}

void func_00143774(void){extern int D_0037BBB8;void __stdcall func_0010B8F6(int);func_0010B8F6(D_0037BBB8);}

