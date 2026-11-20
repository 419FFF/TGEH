/* 25 functions from 0x0010E40E to 0x0010F399, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern "C" void (__stdcall *__imp__HalInitiateShutdown)(void);
extern "C" int (__stdcall *__imp__NtQueryDirectoryFile)(void *, void *, void *, void *, void *, void *, unsigned int, int, void *, int);
extern "C" void (__stdcall *__imp__RtlInitAnsiString)(void *, const char *);
extern "C" int (__stdcall *__imp__NtOpenFile)(void *, unsigned int, void *, void *, unsigned int, unsigned int);
extern "C" int (__stdcall *__imp__NtSetInformationFile)(void *, void *, void *, unsigned int, int);
extern "C" int (__stdcall *__imp__NtClose)(void *);
extern "C" void *memset(void *, int, unsigned int);
int __stdcall func_0010E40E(int a,int b,int c,int d){return (a|b)+(c|d);}

void _func_0010EB3C(void){extern void (__stdcall *__imp__KeSetTimer)(void*,unsigned int,int,void*);extern int _D_0037C020,_D_0037C040;unsigned int due=0xB5659000u;int period=-51;__imp__KeSetTimer(&_D_0037C040,due,period,&_D_0037C020);}

void __stdcall _func_0010EB57(int a,int b,int c,int d){extern int _D_0037C068;extern void (__stdcall *__imp__HalInitiateShutdown)(void);if(_D_0037C068)__imp__HalInitiateShutdown();}

void _func_0010EB69(void){extern int _D_0037C020,_D_0037C040,_D_0037C068,_D_0037C06C;extern void (__stdcall *__imp__KeInitializeDpc)(void*,void*,void*);extern void (__stdcall *__imp__KeInitializeTimerEx)(void*,int);extern unsigned char *__imp__XboxHardwareInfo;extern int __stdcall _func_0010F279(int,int*,int*,int*,int);extern void _func_0010EB3C(void);int a,b,c;__imp__KeInitializeDpc(&_D_0037C020,_func_0010EB57,0);__imp__KeInitializeTimerEx(&_D_0037C040,0);_D_0037C068=0;_D_0037C06C=0;if(!(*__imp__XboxHardwareInfo&8)){if(!_func_0010F279(0x11,&c,&a,(int*)&b,4))_D_0037C068=a&1;}else _D_0037C06C=1;_func_0010EB3C();}

void _func_0010EBDD(void){extern void *__imp__IdexChannelObject;extern void (__stdcall *__imp__KeSetEvent)(void*,int,int);extern int _D_001E6780;void *p=__imp__IdexChannelObject;*(int*)((char*)p+0x20)=0;__imp__KeSetEvent(&_D_001E6780,1,0);}

int __fastcall _func_0010EC50(unsigned int x, void *unused) { return x; }

void __stdcall func_0010EC79(unsigned char *p,unsigned int n,void *c){unsigned int b[16];unsigned int i;if(n>64)n=64;for(i=0;i<16;i++)b[i]=0;for(i=0;i<n;i++)((unsigned char*)b)[i]=p[i];for(i=0;i<16;i++)b[i]^=0x36363636;extern void __stdcall XcSHAInit(void*);extern void __stdcall XcSHAUpdate(void*,void*,unsigned int);XcSHAInit(c);XcSHAUpdate(c,b,64);}

void func_0010ECDB(void)
{
  extern void XcSHAUpdate(void);
  XcSHAUpdate();
}

void __stdcall func_0010ECE0(void*c,unsigned char*p,unsigned int n,void*out){unsigned int b[16],i;unsigned char d[20];if(n>64)n=64;for(i=0;i<16;i++)b[i]=0;for(i=0;i<n;i++)((unsigned char*)b)[i]=p[i];for(i=0;i<16;i++)b[i]^=0x5c5c5c5c;extern void __stdcall XcSHAFinal(void*,void*);extern void __stdcall XcSHAInit(void*);extern void __stdcall XcSHAUpdate(void*,void*,unsigned int);XcSHAFinal(c,d);XcSHAInit(c);XcSHAUpdate(c,b,0x54);XcSHAFinal(c,out);}

int __stdcall func_0010ED52(unsigned char*out,unsigned char*data,unsigned int len){extern unsigned char __imp__XboxHDKey[];extern unsigned char _D_0000FFFF;extern int __stdcall func_0010F279(const void*,unsigned int*,unsigned char*,unsigned int,unsigned int*);extern void __stdcall func_0010EC79(unsigned char*,unsigned int,void*);extern void __stdcall func_0010ECE0(void*,unsigned char*,unsigned int,void*);extern void __stdcall XcSHAUpdate(void*,void*,unsigned int);unsigned char tmp[256];unsigned int a=0,b=0;unsigned char *key=__imp__XboxHDKey;unsigned int i;unsigned char any=0;for(i=0;i<16;i++)any|=key[i];if(!any){func_0010F279(&_D_0000FFFF,&a,tmp,256,&b);key=tmp+54;}func_0010EC79(key,16,out+8);XcSHAUpdate(out+8,data,20);func_0010ECE0(out+8,key,16,out);return 1;}

void *__stdcall func_0010EDC7(unsigned int a,unsigned int b){return 0;}

int __stdcall func_0010EE47(unsigned int*p,unsigned char*out){return 0;}

unsigned int *func_0010EEA9(void){extern void *__stdcall func_0010ABA3(unsigned int,unsigned int);extern void __stdcall func_0010AAA3(unsigned int);extern void __stdcall XcSHAInit(void*);unsigned int *p=(unsigned int*)func_0010ABA3(0x7c,0x24830000);if(!p){func_0010AAA3(8);return (unsigned int*)-1;}volatile unsigned int *q=p+1;*q &= 0;unsigned int *ctx=p+2;p[0]=2;XcSHAInit(ctx);return p;}

#pragma optimize("y", on)
int __stdcall func_0010EEDF(int *ctx,int data,int n){extern void __stdcall XcSHAUpdate(int,int,unsigned int);XcSHAUpdate((int)(ctx+2),data,n);return 0;}
#pragma optimize("", on)
int __stdcall func_0010EEF9(void*a,void*b){extern void __stdcall XcSHAFinal(void*,void*);extern int __stdcall func_0010AC43(void*,unsigned int);if(b)XcSHAFinal((char*)a+8,b);func_0010AC43(a,0x24830000);return 0;}

#pragma optimize("y", on)
extern unsigned int *D_00010118;
extern int D_003252D8, D_003252DC, D_003252E0;
int __stdcall func_0010EF23(unsigned int, unsigned int);
#pragma optimize("y", on)
void __stdcall func_0010EF64(unsigned int a)
{
    extern unsigned int *D_00010118;
    extern int __stdcall func_0010EF23(unsigned int, unsigned int);
    unsigned int *p = D_00010118;
    func_0010EF23(a, p[2]);
}
int __stdcall func_0010EF78(int *p, int a, int b)
{
    unsigned int mode = *p;
    if (mode > 1) {
        if (mode == 2 || mode == 4) return func_0010EEDF(p, a, b);
        if (mode == 8) return ((int (__cdecl *)(void *, int, int))D_003252DC)(p, a, b);
        return 0x32;
    }
    return func_0010EEDF(p, a, b);
}

int __stdcall func_0010EFC6(unsigned int *p, unsigned char *a)
{
    unsigned int mode = *p;
    if (mode > 1) {
        if (mode == 2 || mode == 4) return func_0010EEF9(p, a);
        if (mode == 8) return ((int (__cdecl *)(void *, void *))D_003252E0)(p, a);
        return 0x32;
    }
    return func_0010EE47(p, a);
}

#pragma optimize("y", off)
int __stdcall func_0010F188(const char *name,unsigned int value){struct L{unsigned char buffer[328];unsigned char io[8];unsigned char ansi[8];unsigned int access;void*ansiPtr;unsigned int attr;} l;extern void (__stdcall *__imp__RtlInitAnsiString)(void*,const char*);extern int (__stdcall *__imp__NtOpenFile)(void*,unsigned int,void*,void*,unsigned int,unsigned int);extern int (__stdcall *__imp__NtClose)(void*);extern int __stdcall _func_0010F00B(void*,void*);int status;__imp__RtlInitAnsiString(l.ansi,name);l.access=value;l.ansiPtr=l.ansi;l.attr=0x40;status=__imp__NtOpenFile((void*)&name,0x110101,&l.access,l.io,3,0x4021);if(status>=0){status=_func_0010F00B((void*)name,l.buffer);__imp__NtClose((void*)name);}return status;}
int __stdcall func_0010F1F7(const char*name,unsigned int unused,unsigned int*out){extern void (__stdcall *__imp__RtlInitAnsiString)(void*,const char*);extern int (__stdcall *__imp__NtQueryFullAttributesFile)(void*,void*);extern void __stdcall _func_0010AAD1(int);struct L{unsigned int info[13];unsigned int fields[6];} l;int status;__imp__RtlInitAnsiString(&l.fields[2],name);l.fields[3]=(unsigned int)&l.fields[2];l.fields[0]=0xfffffffd;l.fields[2]=0x40;status=__imp__NtQueryFullAttributesFile(&l.fields[0],l.info);if(status>=0){unsigned int *q=out; q[0]=l.info[12];q[1]=l.info[0];q[2]=l.info[1];q[3]=l.info[2];q[4]=l.info[3];q[5]=l.info[4];q[6]=l.info[5];q[7]=l.info[10];q[8]=l.info[9];return 1;}_func_0010AAD1(status);return 0;}
#pragma optimize("", on)

#pragma optimize("", on)
extern "C" int __stdcall ExQueryNonVolatileSetting(int,int*,int*,int*,int);
extern "C" int (__stdcall *__imp__RtlNtStatusToDosError)(int);
extern "C" void (__stdcall *__imp__RtlInitAnsiString)(void*,const char*);
extern "C" int (__stdcall *__imp__NtOpenFile)(void*,unsigned int,void*,void*,unsigned int,unsigned int);
extern "C" int (__stdcall *__imp__NtClose)(void*);
extern "C" int __stdcall _func_0010F00B(void*,void*);
extern "C" int (__stdcall *__imp__NtQueryFullAttributesFile)(void*,void*);
extern "C" void __stdcall _func_0010AAD1(int);
#pragma optimize("g", off)
int __stdcall func_0010F279(int a,int*b,int*c,int*d,int e){return __imp__RtlNtStatusToDosError(ExQueryNonVolatileSetting(a,b,c,d,e));}

#pragma optimize("", on)
float *__stdcall func_0010F29B(float *out, float *a, float *b)
{
    ((__m128 *)out)[0] = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[0], ((__m128 *)a)[0], 0x00), ((__m128 *)b)[0]), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[0], ((__m128 *)a)[0], 0x55), ((__m128 *)b)[1])), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[0], ((__m128 *)a)[0], 0xaa), ((__m128 *)b)[2])), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[0], ((__m128 *)a)[0], 0xff), ((__m128 *)b)[3]));
    ((__m128 *)out)[1] = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[1], ((__m128 *)a)[1], 0x00), ((__m128 *)b)[0]), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[1], ((__m128 *)a)[1], 0x55), ((__m128 *)b)[1])), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[1], ((__m128 *)a)[1], 0xaa), ((__m128 *)b)[2])), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[1], ((__m128 *)a)[1], 0xff), ((__m128 *)b)[3]));
    ((__m128 *)out)[2] = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[2], ((__m128 *)a)[2], 0x00), ((__m128 *)b)[0]), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[2], ((__m128 *)a)[2], 0x55), ((__m128 *)b)[1])), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[2], ((__m128 *)a)[2], 0xaa), ((__m128 *)b)[2])), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[2], ((__m128 *)a)[2], 0xff), ((__m128 *)b)[3]));
    ((__m128 *)out)[3] = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[3], ((__m128 *)a)[3], 0x00), ((__m128 *)b)[0]), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[3], ((__m128 *)a)[3], 0x55), ((__m128 *)b)[1])), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[3], ((__m128 *)a)[3], 0xaa), ((__m128 *)b)[2])), _mm_mul_ps(_mm_shuffle_ps(((__m128 *)a)[3], ((__m128 *)a)[3], 0xff), ((__m128 *)b)[3]));
    return out;
}
