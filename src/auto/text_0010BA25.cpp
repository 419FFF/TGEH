/* 31 functions from 0x0010BA25 to 0x0010C944, found by Ghidra. */
#include "common.h"
extern "C" __declspec(dllimport) int __stdcall XeLoadSection(int);
extern "C" __declspec(dllimport) int __stdcall XeUnloadSection(int);

unsigned int __readfsdword(unsigned long);
#pragma intrinsic(__readfsdword)
unsigned int func_0010BA93(void) { return *(unsigned int *)(__readfsdword(0x28) + 0x12c); }

#pragma optimize("y", on)
typedef long (__stdcall *NtQueryFn)(void*, void*, unsigned long, unsigned long, unsigned long);
typedef long (__stdcall *NtSetFn)(void*, void*, unsigned long, unsigned long);
typedef long (__stdcall *NtFlushFn)(void*, void*);
extern NtQueryFn __imp__NtQueryInformationFile;
extern NtSetFn __imp__NtSetInformationFile;
extern NtFlushFn __imp__NtFlushBuffersFile;
extern void __stdcall _func_0010AAD1(long);
long __stdcall func_0010BEA9(void *h) {
 unsigned int io[2];
 long r=__imp__NtFlushBuffersFile(h,io);
 if(r<0) _func_0010AAD1(r);
 return r>=0;
}

void __stdcall func_0010C0D4(int a,int b){extern int __imp__XboxHDKey;void __cdecl XcHMAC(...);XcHMAC(__imp__XboxHDKey,0x10,&a,4,0,0,b);}

int func_0010C459(void) {
    extern int D_0037C074;
    return D_0037C074;
}

unsigned int __stdcall func_0010C47C(unsigned int p){extern int __stdcall func_0010E21A(int,int,int);extern int _D_0037C074;return (func_0010E21A(_D_0037C074,0,p)!=0)?0:p;}

unsigned int __stdcall func_0010C577(int p){__declspec(dllimport) int __stdcall XeLoadSection(int);extern void __stdcall func_0010AAD1(int);int r=XeLoadSection(p);if(r<0){func_0010AAD1(r);return 0;}return *(unsigned int*)(p+4);}

extern "C" __declspec(dllimport) int __stdcall XeLoadSection(int);
extern "C" __declspec(dllimport) int __stdcall XeUnloadSection(int);
int __stdcall func_0010C598(int p){extern void __stdcall func_0010AAD1(int);int r=XeUnloadSection(p);if(r<0){func_0010AAD1(r);return 0;}return 1;}

#pragma optimize("y", on)
void *__stdcall func_0010C5B6(void *arg) { return *(void **)((char *)arg + 8); }

struct C_0010C5C0{unsigned int func_0010C5C0(void);}; unsigned int C_0010C5C0::func_0010C5C0(void){int _ExQueryNonVolatileSetting(...);unsigned int a,b;int r=_ExQueryNonVolatileSetting(10,&a,&b,4,0);if(r>=0)return a;return 0;}

void *__stdcall func_0010C5E5(void *);
void __stdcall func_0010C726(void *p,unsigned int a,unsigned int b) { (void)p;(void)a;(void)b; }

#pragma optimize("", on)
