/* 19 functions from 0x00137EF0 to 0x00138E7C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

extern "C" void (__stdcall * __imp__RtlEnterCriticalSection)(void*);
extern "C" void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);
void _func_001383B0(void){extern unsigned char _D_00332AA8;extern int _D_00332A88,_D_003326AC,_D_00332AAC,_D_00332AB0,_D_00332AB4,_D_00332AB8;extern void (__stdcall * __imp__RtlEnterCriticalSection)(void*);extern void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);int _func_00137EF0(...),_func_00088F10(...);int *p=&_D_00332A88;_D_00332AA8=1;do{int x=*p;if(x)_func_00137EF0(x,0,0);p++;}while((int)p<(int)&_D_00332AA8);_D_00332AAC=0;_D_00332AB0=0;_D_00332AB4=0;_D_00332AB8=0;__imp__RtlEnterCriticalSection(&_D_003326AC);_func_00088F10(0x73);_func_00088F10(0x66);_func_00088F10(0x5c);__imp__RtlLeaveCriticalSection(&_D_003326AC);}

void _func_00138440(unsigned char a){extern unsigned char _D_00332AA9;extern int _D_003326AC;extern void (__stdcall * __imp__RtlEnterCriticalSection)(void*);extern void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);int _func_00088F10(...);_D_00332AA9=a;__imp__RtlEnterCriticalSection(&_D_003326AC);if(a)_func_00088F10(0x66);__imp__RtlLeaveCriticalSection(&_D_003326AC);}

bool func_00138480(void)
{
  extern undefined D_00332AA8;
  return D_00332AA8 == '\0';
}

void _func_00138490(unsigned char a){extern unsigned char _D_00332AA8;extern int _D_003326AC;extern void (__stdcall * __imp__RtlEnterCriticalSection)(void*);extern void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);int _func_00088F10(...);__imp__RtlEnterCriticalSection(&_D_003326AC);if(!_D_00332AA8&&a)_func_00088F10(0x5c);__imp__RtlLeaveCriticalSection(&_D_003326AC);}

void func_001384D0(int p){extern int D_003326AC;extern void __stdcall RtlEnterCriticalSection(void*);extern void __stdcall RtlLeaveCriticalSection(void*);void func_00137EF0(...);int func_00116FB0(...);extern void (__stdcall * __imp__RtlEnterCriticalSection)(void*);extern void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);__imp__RtlEnterCriticalSection(&D_003326AC);func_00137EF0(p,0,0);__imp__RtlLeaveCriticalSection(&D_003326AC);func_00116FB0(p);}

int func_00138510(int a,int b,int c){int __stdcall func_0010EF64(int);int __stdcall func_0010EF78(int,int,int);int __stdcall func_0010EFC6(int,int);int handle;int result=1;handle=func_0010EF64(0);if(handle==-1)return 0;if(func_0010EF78(handle,a,b))result=0;if(func_0010EFC6(handle,c))result=0;return result;}

int _func_00138650(char *s, int h, int x)
{
  int __stdcall _func_0014E330(int, int, int *);
  int __stdcall _func_0014E1A0(int, int, int, int);
  int __stdcall _func_0014E470(int, int);
  int __stdcall _func_0014E340(int, int);
  int __stdcall _func_001A5E47(int, int, int, int, char *, int, int, int);
  int __stdcall _func_0014DF80(int);
  int __stdcall _func_00147E12(int, char *, int);
  int info[7];
  char buf[0x400];
  char path[0x104];
  int obj, k, r, v;
  unsigned i;
  _func_0014E330(h, 0, info);
  obj = _func_0014E1A0(info[5], info[6], 0, 12);
  if ((int)(((unsigned)((obj != 0) - 1)) & 0x8007000eu) < 0) return 0;
  if (info[0] == 11) {
    char *q = (char *)_func_0014E470(x, 0x80);
    for (i = 0; i < 0x100; i++) {
      buf[i * 4] = q[i * 4 + 2];
      buf[i * 4 + 1] = q[i * 4 + 1];
      buf[i * 4 + 2] = q[i * 4];
      buf[i * 4 + 3] = (char)0xff;
    }
  }
  k = _func_0014E340(h, 0);
  r = _func_001A5E47(obj, 0, 0, k, buf, 0, -1, 0);
  _func_0014DF80(k);
  if (r < 0) {
    _func_0014DF80(obj);
    return 0;
  }
  strcpy(path, s);
  strcat(path, "SaveImage.xbx");
  v = _func_00147E12(obj, path, 1);
  _func_0014DF80(obj);
  return v >= 0;
}

int func_001387C0(void) {
    return -1;
}

extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall RtlLeaveCriticalSection(void*);
int _func_001387D0(int unused, int *a, int *b){extern int _D_00332ABC;*a=(int)&_D_00332ABC;*b=4;return 0;}

int func_001387F0(int unused, char *s)
{
  extern int D_001D89C0;
  int __stdcall func_00147ADC(int, int, char *, int, char *, int);
  int __stdcall func_00147653(int *, char *, int, int, char *, int);
  int __stdcall func_0010BF49(char *, int, int, int, int, int, int);
  int __stdcall func_0010B7F8(int);
  int func_00138560(void);
  char wide[0x20c];
  char out[0x200];
  char path[0x200];
  unsigned int i;
  int h;

  for (i = 0; i < strlen(s); i++) {
    if (s[i] == ':')
      s[i] = ' ';
  }
  func_00147ADC(0, 0, s, -1, wide, 0x104);
  if (func_00147653(&D_001D89C0, wide, 3, 0, out, 0x200) != 0)
    return 9;
  strcpy(path, out);
  strcat(path, s);
  h = func_0010BF49(path, 0x80000000, 0, 0, 3, 0x80, 0);
  if (h == -1)
    return (func_00138560() != 0 ? 3 : 0) + 9;
  func_0010B7F8(h);
  return 0;
}

int func_00138910(int a, int b)
{
  extern int D_001D89C0;
  int __stdcall func_00147ADC(int, int, int, int, int, int);
  int __stdcall func_001478B6(void*, void*);
  unsigned char buf[0x20c];

  func_00147ADC(0, 0, b, -1, (int)buf, 0x104);
  return func_001478B6(&D_001D89C0, buf) != 0;
}

int func_00138950(int unused, char *s, int *out)
{
    extern int D_001D89C0;
    int __stdcall func_00147ADC(int, int, char *, int, char *, int);
    int __stdcall func_00147653(int *, char *, int, int, char *, int);
    int __stdcall func_0010BF49(char *, int, int, int, int, int, int);
    int __stdcall func_0010F1F7(char *, int, void *);
    int __stdcall func_00147B97(void *, void *);
    int func_00116A90(...);
    unsigned short st[8];
    unsigned char info[0x24];
    char path[0x200];
    char wide[0x20c];
    int h;
    char *obj;
    *out = 0;
    func_00147ADC(0, 0, s, -1, wide, 0x104);
    if (func_00147653(&D_001D89C0, wide, 3, 0, path, 0x200) != 0)
        return 1;
    strcat(path, s);
    h = func_0010BF49(path, 0xc0000000, 0, 0, 3, 0x80, 0);
    if (h == -1)
        return 1;
    if (func_0010F1F7(path, 0, info) == 0)
        return 1;
    func_00147B97(info + 0x18, st);
    obj = (char *)func_00116A90(0x204, 1, 1);
    strcpy(obj, path);
    *(int *)(obj + 0x1f4) = h;
    *(unsigned short *)(obj + 0x1fe) = st[3];
    *(unsigned short *)(obj + 0x200) = st[1];
    *(unsigned short *)(obj + 0x202) = st[0];
    *(unsigned short *)(obj + 0x1fc) = st[4];
    *(unsigned short *)(obj + 0x1fa) = st[5];
    *(unsigned short *)(obj + 0x1f8) = st[6];
    *out = (int)obj;
    return 0;
}

int func_00138D60(int p){int __stdcall func_0010B7F8(int);int func_00116FB0(...);if(p){int x=*(int*)(p+0x1f4);if(x!=-1)func_0010B7F8(x);func_00116FB0(p);}return 0;}

unsigned int func_00138D90(int p, unsigned int *out) {
 if (!p) return 1;
 unsigned int *src=(unsigned int *)(p+0x1f8);
 out[0]=src[0]; out[1]=src[1]; out[2]=src[2];
 return 0;
}

int func_00138DC0(unsigned int *out,int flag,unsigned int count){extern int D_001D89C0;int __stdcall func_0010A157(int*);int __stdcall func_00109D13(int*,unsigned long long*,int,int);unsigned long long value=0;func_0010A157(&D_001D89C0);func_00109D13(&D_001D89C0,&value,0,0);unsigned int first=(unsigned int)((value+0x3fff)>>14);if(!out)return 0;if(flag){out[0]=first;int a=func_0010A157(&D_001D89C0);unsigned int second=(unsigned int)(((unsigned long long)(count*2+0x4018+a)+0x3fff)>>14);out[1]=second;if(flag&&count){int b=func_0010A157(&D_001D89C0);unsigned int third=(unsigned int)(((unsigned long long)(count*2+0x4018+b)+0x3fff)>>14);if(third>first)return 10;}}return 0;}

