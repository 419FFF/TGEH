/* 20 functions from 0x0010A569 to 0x0010B32A, found by Ghidra. */
#include "common.h"

#pragma optimize("y", on)
unsigned char __stdcall func_0010AA16(char *dst,char *src,int n){extern int D_001DED88;int _func_0013EEE4(...);int _func_0013EF1F(...);_func_0013EEE4(&D_001DED88,0x10);char *out=dst;char *in=src;while(n){if(*in==0)break;*out=*in;out++;in++;n--;}if(n==0){out--;*out=0;_func_0013EF1F();return 1;}if(*in==0){if(n==0){out--;*out=0;}}_func_0013EF1F();return 0;}

int _func_0010AA7B(void){extern int D_003252D4;int fs;int *tls=*(int**)((char*)&fs+4);return *(int*)(tls[D_003252D4]+8);}

void __stdcall func_0010B1AA(int a0){int __stdcall func_0010AC5D(int,int);func_0010AC5D(a0,0x4000);}
