/* 19 functions from 0x00137EF0 to 0x00138E7C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_001383B0(void){extern unsigned char _D_00332AA8;extern int _D_00332A88,_D_003326AC,_D_00332AAC,_D_00332AB0,_D_00332AB4,_D_00332AB8;extern void (__stdcall * __imp__RtlEnterCriticalSection)(void*);extern void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);int _func_00137EF0(...),_func_00088F10(...);int *p=&_D_00332A88;_D_00332AA8=1;do{int x=*p;if(x)_func_00137EF0(x,0,0);p++;}while((int)p<(int)&_D_00332AA8);_D_00332AAC=0;_D_00332AB0=0;_D_00332AB4=0;_D_00332AB8=0;__imp__RtlEnterCriticalSection(&_D_003326AC);_func_00088F10(0x73);_func_00088F10(0x66);_func_00088F10(0x5c);__imp__RtlLeaveCriticalSection(&_D_003326AC);}

void _func_00138440(unsigned char a){extern unsigned char _D_00332AA9;extern int _D_003326AC;extern void (__stdcall * __imp__RtlEnterCriticalSection)(void*);extern void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);int _func_00088F10(...);_D_00332AA9=a;__imp__RtlEnterCriticalSection(&_D_003326AC);if(a)_func_00088F10(0x66);__imp__RtlLeaveCriticalSection(&_D_003326AC);}

bool func_00138480(void)
{
  extern undefined D_00332AA8;
  return D_00332AA8 == '\0';
}

void _func_00138490(unsigned char a){extern unsigned char _D_00332AA8;extern int _D_003326AC;extern void (__stdcall * __imp__RtlEnterCriticalSection)(void*);extern void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);int _func_00088F10(...);__imp__RtlEnterCriticalSection(&_D_003326AC);if(!_D_00332AA8&&a)_func_00088F10(0x5c);__imp__RtlLeaveCriticalSection(&_D_003326AC);}

void func_001384D0(int p){extern int D_003326AC;extern void __stdcall RtlEnterCriticalSection(void*);extern void __stdcall RtlLeaveCriticalSection(void*);void func_00137EF0(...);int func_00116FB0(...);extern void (__stdcall * __imp__RtlEnterCriticalSection)(void*);extern void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);__imp__RtlEnterCriticalSection(&D_003326AC);func_00137EF0(p,0,0);__imp__RtlLeaveCriticalSection(&D_003326AC);func_00116FB0(p);}

int func_00138510(int a,int b,int c){int __stdcall func_0010EF64(int);int __stdcall func_0010EF78(int,int,int);int __stdcall func_0010EFC6(int,int);register int result=1;int s=func_0010EF64(0);if(s==-1)return 0;if(func_0010EF78(s,a,b))result=0;if(func_0010EFC6(s,c))result=0;return result;}

int func_001387C0(void) {
    return -1;
}

extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall RtlLeaveCriticalSection(void*);
int _func_001387D0(int unused, int *a, int *b){extern int _D_00332ABC;*a=(int)&_D_00332ABC;*b=4;return 0;}

int func_00138910(int a,int b){extern int D_001D89C0;int __stdcall func_00147ADC(int,int,int,int,int,int);int __stdcall func_001478B6(...);unsigned char buf[0x20c];func_00147ADC(0,0,b,-1,(int)&buf[0],0x104);return func_001478B6(&D_001D89C0,buf)!=0;}

int func_00138D60(int p){int __stdcall func_0010B7F8(int);int func_00116FB0(...);if(p){int x=*(int*)(p+0x1f4);if(x!=-1)func_0010B7F8(x);func_00116FB0(p);}return 0;}

unsigned int func_00138D90(int p, unsigned int *out) {
 if (!p) return 1;
 unsigned int *src=(unsigned int *)(p+0x1f8);
 out[0]=src[0]; out[1]=src[1]; out[2]=src[2];
 return 0;
}

int func_00138DC0(unsigned int *out, int flag, unsigned int count) {
 extern int D_001D89C0;
 int __stdcall func_0010A157(int*);
 int __stdcall func_00109D13(int*, unsigned long long*, int, int);
 unsigned long long value=0;
 func_0010A157(&D_001D89C0);
 func_00109D13(&D_001D89C0,&value,0,0);
 unsigned int first=(unsigned int)((value+0x3fff)>>14);
 if (!out) return 0;
 if (flag) {
  out[0]=first;
  int a=func_0010A157(&D_001D89C0);
  unsigned int second=(unsigned int)(((unsigned long long)(count*2+0x4018+a)+0x3fff)>>14);
  out[1]=second;
  if (flag && count) {
   int b=func_0010A157(&D_001D89C0);
   unsigned int third=(unsigned int)(((unsigned long long)(count*2+0x4018+b)+0x3fff)>>14);
   if (third>first) return 10;
  }
 }
 return 0;
}

