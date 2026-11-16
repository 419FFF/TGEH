/* 20 functions from 0x0010A569 to 0x0010B32A, found by Ghidra. */
#include "common.h"

#pragma optimize("y", on)
unsigned char __stdcall func_0010AA16(char *dst,char *src,int n){extern int D_001DED88;int _func_0013EEE4(...);int _func_0013EF1F(...);_func_0013EEE4(&D_001DED88,0x10);char *out=dst;char *in=src;while(n){if(*in==0)break;*out=*in;out++;in++;n--;}if(n==0){out--;*out=0;_func_0013EF1F();return 1;}*out=0;_func_0013EF1F();return 0;}

int _func_0010AA7B(void){extern int D_003252D4;int fs;int *tls=*(int**)((char*)&fs+4);return *(int*)(tls[D_003252D4]+8);}

void __stdcall func_0010AAA3(int value) { extern int D_003252D4; int fs; int *tls=*(int**)((char*)&fs+4); *(int*)(tls[D_003252D4]+8)=value; }

extern "C" __declspec(dllimport) int __stdcall RtlNtStatusToDosError(int);
extern void __stdcall RtlInitAnsiString(void*, const char*);
extern int func_00109CF3(int, int);
void __stdcall func_0010AAA3(int);
int __stdcall func_0010AAD1(int);
int __stdcall func_0010AAD1(int s) { int e=RtlNtStatusToDosError(s); func_0010AAA3(e); return e; }

int __stdcall func_0010AAE8(int a0, int *a1, int *out, int a3) { int e; if(a1[0]==0x103){ if(a3==0) e=0x102; else { e=a1[4]; if(!e)e=a0; e=func_00109CF3(e,-1); } if(e==0x102){func_0010AAA3(0x3e4);return 0;} if(e!=0)return 0; } *out=a1[1]; if(a1[0]<0){func_0010AAD1(a1[0]);return 0;} return 1; }

void __stdcall func_0010AB4D(void *a0, void *a1, const char *a2) { RtlInitAnsiString(a1,a2); ((int*)a0)[1]=(int)a1; ((int*)a0)[0]=-4; ((int*)a0)[2]=0x80; }

void __stdcall func_0010B1AA(int a0){int __stdcall func_0010AC5D(int,int);func_0010AC5D(a0,0x4000);}
