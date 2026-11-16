/* 19 functions from 0x00137EF0 to 0x00138E7C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_001383B0(void){extern unsigned char _D_00332AA8;extern int _D_00332A88,_D_003326AC,_D_00332AAC,_D_00332AB0,_D_00332AB4,_D_00332AB8;extern int __stdcall RtlEnterCriticalSection(void*),__stdcall RtlLeaveCriticalSection(void*);int _func_00137EF0(...),_func_00088F10(...);int *p=&_D_00332A88;_D_00332AA8=1;do{if(*p)_func_00137EF0(*p,0,0);p++;}while(p<(int*)&_D_00332AA8);_D_00332AAC=0;_D_00332AB0=0;_D_00332AB4=0;_D_00332AB8=0;RtlEnterCriticalSection(&_D_003326AC);_func_00088F10(0x73);_func_00088F10(0x66);_func_00088F10(0x5c);RtlLeaveCriticalSection(&_D_003326AC);}

void _func_00138440(unsigned char a){extern unsigned char _D_00332AA9;extern int _D_003326AC;extern int __stdcall RtlEnterCriticalSection(void*),__stdcall RtlLeaveCriticalSection(void*);int _func_00088F10(...);_D_00332AA9=a;RtlEnterCriticalSection(&_D_003326AC);if(a)_func_00088F10(0x66);RtlLeaveCriticalSection(&_D_003326AC);}

bool func_00138480(void)
{
  extern undefined D_00332AA8;
  return D_00332AA8 == '\0';
}

void _func_00138490(unsigned char a){extern unsigned char _D_00332AA8;extern int _D_003326AC;extern int __stdcall RtlEnterCriticalSection(void*),__stdcall RtlLeaveCriticalSection(void*);int _func_00088F10(...);RtlEnterCriticalSection(&_D_003326AC);if(!_D_00332AA8&&a)_func_00088F10(0x5c);RtlLeaveCriticalSection(&_D_003326AC);}

void func_001384D0(void){extern int D_003326AC;extern void __stdcall RtlEnterCriticalSection(void*);extern void __stdcall RtlLeaveCriticalSection(void*);void func_00137EF0(...);int func_00116FB0(...);RtlEnterCriticalSection(&D_003326AC);func_00137EF0(0,0,0);RtlLeaveCriticalSection(&D_003326AC);func_00116FB0(0);}

int func_00138510(int p){int func_0010EF64(...),func_0010EF78(...),func_0010EFC6(...);int s=func_0010EF64(0);if(s==-1)return 0;if(!func_0010EF78(s,*(int*)(p+8),*(int*)(p+4)))return 0;if(!func_0010EFC6(s,*(int*)(p+0xc)))return 0;return 1;}

int func_001387C0(void) {
    return -1;
}

int _func_001387D0(int unused, int *a, int *b){extern int _D_00332ABC;*a=(int)&_D_00332ABC;*b=4;return 0;}

int func_00138910(int a,int b){extern int D_001D89C0;int __stdcall func_00147ADC(int,int,int,int,int,int),func_001478B6(...);unsigned char buf[0x20c];func_00147ADC(0,0,a,-1,(int)&buf[4],0x104);return func_001478B6(&D_001D89C0,buf)!=0;}

int func_00138D60(int p){int __stdcall func_0010B7F8(int);int func_00116FB0(...);if(p){int x=*(int*)(p+0x1f4);if(x!=-1)func_0010B7F8(x);func_00116FB0(p);}return 0;}

unsigned int func_00138D90(unsigned int p,unsigned int*out){if(p==0)return 1;unsigned int *base=(unsigned int*)p;base=base+126;unsigned int a=base[0];out[0]=a;unsigned int b=base[1];out[1]=b;unsigned int c=base[2];out[2]=c;return 0;}

int func_00138DC0(void){return 0;}

