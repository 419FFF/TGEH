/* 33 functions from 0x001464F0 to 0x001473F4, found by Ghidra. */
#include "common.h"

struct C_00147245 { unsigned int func_00147245(void); };
struct C_0014726E { unsigned int func_0014726E(void); };
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
    int func_0013EEE4(...), func_001467B0(...), func_0010BEA9(...), func_0010AA7B(...);
    int func_001460D6(...), func_001460DF(...), func_00146A6F(...), func_00146A77(...), func_0013EF1F(...);
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
        if (result != 0) {
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
    *(int *)func_001460D6() = 9;
    return func_0013EF1F() | -1;
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

int _func_001460D6(...);
int _func_001460DF(...);
int _func_0013EF1F(...);
int _func_001470B1(void) { *(int*)_func_001460D6()=9; *(int*)_func_001460DF() &= 0; int result=-1; _func_0013EF1F(); return result; }

int func_001470CD(unsigned int id){int _func_001467B0(...);int _func_0010B7F8(...);int _func_0010AA7B(...);int _func_00146767(...);int _func_001460E8(...);extern unsigned int _D_0037C300[];int a=0,b=0,found=0,r;unsigned int i;unsigned char *ptr;r=_func_001467B0(id);if(r==-1)goto skip;if(id==1)goto skip;if(id==2){a=_func_001467B0(2);b=_func_001467B0(1);if(a==b)goto skip;}a=_func_001467B0(id);if(_func_0010B7F8(a)==0){found=_func_0010AA7B();}skip:_func_00146767(id);i=id;ptr=(unsigned char*)_D_0037C300[i>>5];ptr+=(i&31)*40+4;*ptr=0;if(found){_func_001460E8(found);return -1;}return 0;}

void func_0014714E(unsigned int value){int _func_0013EEE4(...);int _func_001467F1(...);int _func_001470CD(...);int _func_001460D6(...);int _func_001471C5(...);extern int _D_001E2740;_func_0013EEE4(&_D_001E2740,12);if(value>=_D_0037C2E0)return;unsigned int off=(value&31)*40;unsigned char *base=(unsigned char*)_D_0037C300[value>>5];if((base[off+4]&1)==0)return;_func_001467F1(value);*(int*)_func_001460D6()=9;if(base[off+4]&1){_func_001470CD(value);}else *(int*)_func_001460D6()=9;_func_001471C5();}

void func_001471E9(unsigned int *p){int _func_001436BF(...);if((p[3]&0x83)&&(p[3]&8)){_func_001436BF(p[2]);*(unsigned short*)(p+3)&=0xfbf7;*p=0;p[2]=0;p[1]=0;}}
#pragma optimize("", on)

extern unsigned __int64 __rdtsc(void);
#pragma intrinsic(__rdtsc)
unsigned int __stdcall func_00147220(unsigned int *p) {
    unsigned __int64 t = __rdtsc();
    int result = 0;
    p[0] = (unsigned int)t;
    p[1] = (unsigned int)(t >> 32);
    return ++result;
}
#pragma optimize("y", on)
int __stdcall func_00147231(int *p){p[1]&=0;p[0]=0x2bb5c755;return (int)(char)1;}

extern "C" int __stdcall _ExQueryNonVolatileSetting(int, void *, void *, int, int);
extern int func_00147D10(void);
#pragma optimize("y", off)
unsigned int C_00147245::func_00147245(void) { unsigned int local_4; unsigned int local_8; if(_ExQueryNonVolatileSetting(0x103,&local_4,&local_8,4,0)>=0) return ((local_4>>8)&0xff); return 0; }
#pragma optimize("", on)
extern int func_00147245(void);
unsigned int func_0014726E(void) { int local_4; int local_8; int status=_ExQueryNonVolatileSetting(8,&local_8,&local_4,4,0); if (status < 0) local_4 &= 0; else local_4 = ((unsigned int)local_4 >> 16) & 0x5f; if (func_00147D10() - 1 == 0 && func_00147245() == 3) local_4 &= 0xfffffff1; return local_4; }

extern void* __imp__MmQueryStatistics;
void __stdcall func_001472B7(int *out) { int data[9]; data[0]=0x24; ((void (__stdcall *)(void*))__imp__MmQueryStatistics)(data); out[1]=0; out[4]=0; out[5]=0; out[2]=data[1]<<12; out[3]=data[2]<<12; out[6]=0x7ffe0000; out[7]=0x7ffe0000-data[4]; out[0]=0x20; }

extern int __stdcall _ExQueryNonVolatileSetting(unsigned int, void*, void*, unsigned int, unsigned int);
extern void __stdcall MmQueryStatistics(void*);
#pragma optimize("y", on)
int __stdcall func_00147306(int value) { if (value <= 9) { value += 0x30; } else { value += 0x37; } return value; }

void __stdcall func_0014731A(unsigned short* text, char* out, int unused) {
    // Declarations for external dependencies and globals (assuming they are handled by edit_file later)
    extern int __stdcall func_0013EEB0(int a, int b, int c, int d);
extern long long __stdcall func_00148B50(int a, long b, int c, int d);
extern int __cdecl func_00148B30(int a, long b, int c);
extern int __stdcall func_00147306(int n);
extern int _D_00010000; // Global/Data
extern int _D_0000FFFF; // Global/Data

    long long v = 0;
    unsigned short* t_ptr = text;

    // Loop: while(*text)
    while (*t_ptr != 0) {
        // Block 1: Call func_0013EEB0 (Target uses and dword ptr [ebp-0x4], [ebp-0x8])
        int t = func_0013EEB0(0, 0, _D_00010000, 0);

        // Block 2: Call func_00148B50 (Uses v+*text and _D_0000FFFF)
        v = func_00148B50((int)(v + *t_ptr), (long)((v + *t_ptr) >> 32), -59, _D_0000FFFF);

        // Advance pointer and count
        t_ptr++;
    }

    // Loop: for(int i=0;i<12;++i){...}
    for (int i = 0; i < 12; ++i) {
        // Calculate n using func_00148B30 and mask & 15
        int n = func_00148B30((int)v, (long)(v >> 32), 0) & 0xF;
        out[11 - i] = (char)func_00147306(n);
    }

    // Finalization
    out[12] = 0;
}

int __stdcall func_001473AC(int a,int b){extern int __stdcall func_0010BCE7(int,int,int,int);extern int __stdcall func_0010BAA0(int,short*,int,int*,int);int local=0;short* ch=(short*)((char*)&b+2);int ok=0;if(b)func_0010BCE7(a,0,0,0);ok=func_0010BAA0(a,ch,2,&local,0);if(ok&&local==2&&*ch!=(short)0xfeff)return 1;return 0;}
extern int __stdcall func_0013EEB0(int a, int b, int c, int d);
extern long long __stdcall func_00148B50(int a, long b, int c, int d);
extern int __cdecl func_00148B30(int a, long b, int c);
extern int __stdcall func_00147306(int n);
extern void _func_00147577_8();
extern int __stdcall func_0010F188_8();
extern int _D_00010000;
extern int _D_0000FFFF;
extern int _D_001E2854;
extern int _D_001E274C;
extern void __imp__RtlNtStatusToDosError();
