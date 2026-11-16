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
extern "C" NtQueryFn __imp__NtQueryInformationFile;
extern NtSetFn __imp__NtSetInformationFile;
extern NtFlushFn __imp__NtFlushBuffersFile;
extern void __stdcall _func_0010AAD1(long);
long __stdcall func_0010BEA9(void *h) {
 unsigned int io[2];
 long r=__imp__NtFlushBuffersFile(h,io);
 if(r<0) _func_0010AAD1(r);
 return r>=0;
}

int __stdcall func_0010BED0(void *h, int *out)
{
    unsigned int io[2];
    unsigned char info[0x38];
    long status = __imp__NtQueryInformationFile(h, io, (unsigned long)info, 0x38, 0x22);
    if (status < 0) {
        _func_0010AAD1(status);
        return 0;
    }
    out[0] = *(int *)(info + 0x28);
    out[1] = *(int *)(info + 0x2c);
    return 1;
}

int __stdcall func_0010BF0E(void *h,int *out){int __stdcall func_0010BED0(void*,int*);void __stdcall func_0010AAA3(unsigned int);int local[2];if(!func_0010BED0(h,local))local[0]=-1;else{if(out)*out=local[1];if(local[0]==-1)func_0010AAA3(0);}return local[0];}

void __stdcall func_0010C0D4(int a,int b){extern unsigned char __imp__XboxHDKey[];extern void __stdcall XcHMAC(void*,unsigned int,void*,unsigned int,unsigned int,unsigned int,int);XcHMAC(__imp__XboxHDKey,0x10,&a,4,0,0,b);}

int func_0010C459(void) {
    extern int D_0037C074;
    return D_0037C074;
}

int __stdcall func_0010C45F(unsigned int a, unsigned int b) { extern int D_0037C074; int __stdcall func_0010DA9F(int, int, int); return func_0010DA9F(D_0037C074, (a >> 3) & 8, b); }

unsigned int __stdcall func_0010C47C(unsigned int p){extern int __stdcall func_0010E21A(int,int,int);extern int _D_0037C074;return (func_0010E21A(_D_0037C074,0,p)!=0)?0:p;}

void *__stdcall func_0010C49A(unsigned int a,unsigned int b,unsigned int c,unsigned int d) { extern void *__stdcall __imp__MmAllocateContiguousMemoryEx(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int); void __stdcall func_0010AAA3(int); unsigned int lo,hi; void*p; if(b==0xffffffff){lo=0;hi=0xffffffff;}else{lo=b;hi=a+b-1;c=0;}p=__imp__MmAllocateContiguousMemoryEx(a,lo,hi,c,d);if(!p)func_0010AAA3(8);return p;}

void *__stdcall func_0010C4DD(unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e) { extern void *__stdcall __imp__MmAllocateContiguousMemoryEx(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int); void __stdcall func_0010AAA3(int);void*p=__imp__MmAllocateContiguousMemoryEx(a,b,c,d,e);if(!p)func_0010AAA3(8);return p;}

unsigned int __stdcall func_0010C510(char*name) { extern long __stdcall __imp__RtlInitAnsiString(void*,const char*);extern unsigned char __stdcall __imp__RtlEqualString(void*,void*,int);extern int D_0001011C;extern unsigned int D_00010120;void __stdcall func_0010AAA3(int);unsigned char n[8],v[8];unsigned char*p;unsigned int end;__imp__RtlInitAnsiString(n,name);p=(unsigned char*)D_00010120;end=(unsigned int)(p+D_0001011C*0x38);do{__imp__RtlInitAnsiString(v,*(char**)(p+0x14));if(__imp__RtlEqualString(n,v,1))return(unsigned int)p;p+=0x38;}while(p<(unsigned char*)end);func_0010AAA3(0x490);return 0xffffffff;}

unsigned int __stdcall func_0010C577(int p){extern void __stdcall func_0010AAD1(int);int r=XeLoadSection(p);if(r<0){func_0010AAD1(r);r=0;goto done;}r=*(int*)(p+4);done:return r;}

extern "C" __declspec(dllimport) int __stdcall XeLoadSection(int);
extern "C" __declspec(dllimport) int __stdcall XeUnloadSection(int);
int __stdcall func_0010C598(int p){extern void __stdcall func_0010AAD1(int);int r=XeUnloadSection(p);if(r<0){func_0010AAD1(r);return 0;}goto yes;yes:return 1;}

#pragma optimize("y", on)
void *__stdcall func_0010C5B6(void *arg) { return *(void **)((char *)arg + 8); }

struct C_0010C5C0{unsigned int func_0010C5C0(void);}; unsigned int C_0010C5C0::func_0010C5C0(void){extern int _ExQueryNonVolatileSetting(...);unsigned int a,b;int r=_ExQueryNonVolatileSetting(10,&a,&b,4,0);if(r>=0)return a;return 0;}

#pragma optimize("Ob1", on)
void __stdcall func_0010C705(void *p, unsigned int *node) {
    unsigned int **head=(unsigned int **)((char *)p+0x18);
    unsigned int *old=(unsigned int *)((char *)*head+0x4c);
    *node=*old;
    *(unsigned int **)((char *)*head+0x4c)=node;
    node[1]=0;
    node[2]=0;
}
void *__stdcall func_0010C5E5(void *);
void __stdcall func_0010C726(void *p,unsigned int a,unsigned int b) {
    unsigned char *base=(unsigned char*)p;
    unsigned int *link=(unsigned int*)(base+0x38);
    unsigned int *n;
    unsigned int end=a+b;
    while ((n=(unsigned int*)*link)!=0) {
        unsigned int start=n[1], len=n[2];
        if (start > a) break;
        if (start+len == a) {
            n[2]+=b;
            if (n[2] > *(unsigned int*)(base+0x1c)) *(unsigned int*)(base+0x1c)=n[2];
            return;
        }
        link=n;
    }
    if (end > *(unsigned int*)(base+0x1c)) *(unsigned int*)(base+0x1c)=end;
}

#pragma optimize("", on)
