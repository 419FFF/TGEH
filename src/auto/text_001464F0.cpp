/* 33 functions from 0x001464F0 to 0x001473F4, found by Ghidra. */
#include "common.h"

extern unsigned int _D_0037C2E0;
extern unsigned int _D_0037C300[];
extern int func_001414C5(...);
extern int func_001460D6(...);
extern int func_001460DF(...);

unsigned int _func_00146767(unsigned int n) { int *e; if(n<_D_0037C2E0){e=(int*)((char*)_D_0037C300[n>>5]+(n&31)*40);if((((unsigned char*)e)[4]&1)&&*e!=-1){*e|=-1;return 0;}}*(unsigned int*)func_001460D6()=9;*(unsigned int*)func_001460DF()&=0;return -1;}

unsigned int _func_001467B0(unsigned int n) { unsigned int *e; if(n<_D_0037C2E0){e=(unsigned int*)((char*)_D_0037C300[n>>5]+(n&31)*40);if(((unsigned char*)e)[4]&1)return *e;}*(unsigned int*)func_001460D6()=9;*(unsigned int*)func_001460DF()&=0;return -1;}

void _func_001467F1(unsigned int n) { int f(...); int e; f(8); f(8); f(8); }

void func_00146888(void) {
    int func_001435DF(...);
    func_001435DF(10);
}

extern void __stdcall RtlLeaveCriticalSection(void*);
void _func_00146891(unsigned int n) { RtlLeaveCriticalSection((char*)_D_0037C300[n>>5]+(n&31)*40+12); }

unsigned long long _func_001468B3(unsigned int n, unsigned int a, unsigned int* b, unsigned int c) { int _func_001467B0(...); int z=_func_001467B0(n); if(z==-1){ int* e=(int*)func_001460D6(); *e=9; } return ((unsigned long long)c<<32)|((unsigned int)b); }

void _func_00146980(unsigned int* p) { if(p[3]&0x40) p[3]=0; else { } }

extern void __imp__RtlLeaveCriticalSection(void*);
void _func_001469C9(void) { int f(...); f(0); }

void _func_001469D1(unsigned int n) {
    extern int _D_001E2720;
    int func_0013EEE4(...), func_001467B0(...), func_0010AA7B(...);
    int func_0010BEA9(...), func_001460D6(...), func_001460DF(...), func_0013EF1F(...);
    int func_00146A6F(...), func_00146A77(...);
    void func_001467F1(...);
    int *entry;
    int result;
    func_0013EEE4(&_D_001E2720, 0xc);
    if (n >= _D_0037C2E0) {
        func_00146A77();
        return;
    }
    entry = (int *)((char *)_D_0037C300[n >> 5] + (n & 31) * 40);
    if ((((unsigned char *)entry)[4] & 1) == 0) {
        *(int *)func_001460D6() = 9;
        func_0013EF1F();
        return;
    }
    func_001467F1(n);
    if ((((unsigned char *)entry)[4] & 1) != 0) {
        result = func_001467B0(n);
        if (func_0010BEA9(result) == 0) result = func_0010AA7B();
        else result = 0;
        if (result) {
            *(int *)func_001460DF() = result;
            *(int *)func_001460D6() = 9;
            func_00146A6F();
        }
    }
    func_0013EF1F();
}

int _func_00146A77(void) {
    int func_001460D6(...);
    int func_0013EF1F(...);
    int *p = (int *)func_001460D6();
    *p = 9;
    int result = -1;
    func_0013EF1F();
    return result;
}

extern void func_00146A8B(unsigned short *, const unsigned short *);
void _func_00146CAD(unsigned short *out, int value, int mode) {
    extern unsigned char D_002E96F8;
    extern unsigned char D_002E9858;
    unsigned char *base = &D_002E96F8 - 0x60;
    unsigned char temp[12];
    if (value == 0) return;
    if (value < 0) {
        value = -value;
        base = &D_002E9858 - 0x60;
    }
    if (mode == 0) *out = 0;
    while (value != 0) {
        unsigned int part = (unsigned int)value & 7;
        value >>= 3;
        base += 0x54;
        if (part != 0) {
            unsigned short *src = (unsigned short *)(base + part * 12);
            if (*src >= 0x8000) {
                unsigned int i;
                for (i = 0; i < 12; ++i) temp[i] = ((unsigned char *)src)[i];
                ((unsigned short *)temp)[1]--;
                src = (unsigned short *)temp;
            }
            func_00146A8B(out, src);
        }
    }
}

extern unsigned __int64 __rdtsc(void);
#pragma intrinsic(__rdtsc)
unsigned int __stdcall func_00147220(unsigned int *p) {
    unsigned __int64 t = __rdtsc();
    int result = 0;
    p[0] = (unsigned int)t;
    p[1] = (unsigned int)(t >> 32);
    return ++result;
}
int __stdcall func_00147231(int *p)
{
  p[1] &= (p[0] ^ p[0]);
  p[0] = 0x2bb5c755;
  return ++p[1];
}

int __stdcall func_00147306(int value)
{
  if (value <= 9) {
    value += 0x30;
  } else {
    value += 0x37;
  }
  return value;
}

