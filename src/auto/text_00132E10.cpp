/* 16 functions from 0x00132E10 to 0x00133DCE, found by Ghidra. */
#include "common.h"
extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall RtlLeaveCriticalSection(void*);

struct S33860 { char kind; char pad[3]; int f4; void (__cdecl *f8)(S33860 *, int); int fc; unsigned int f10; char *f14; unsigned int f18; int *f1c; unsigned int f20; char *f24; char pad2[0x20]; unsigned short f48; };
signed char _func_00132F90(signed char index) { extern signed char _D_001E82AC[]; return _D_001E82AC[(int)index]; }

int _func_00133430(void) { return 0; }

void _func_00133490(void *p) { extern unsigned int _D_001E82DC,_D_00331D68,_D_00331D6C,_D_00331D70; extern unsigned short _D_00331D74,_D_00331D78,_D_00331D7C,_D_00331D80; unsigned char*q=(unsigned char*)p; *(unsigned int*)(q+52)=_D_001E82DC; *(unsigned int*)(q+56)=_D_00331D68; *(unsigned int*)(q+60)=_D_00331D6C; *(unsigned int*)(q+64)=_D_00331D70; *(unsigned short*)(q+42)=_D_00331D74; *(unsigned short*)(q+44)=_D_00331D78; *(unsigned short*)(q+46)=_D_00331D7C; *(unsigned short*)(q+48)=_D_00331D80; }

void func_001336F0(int *s)
{
  extern float *D_00331C84;
  extern signed char D_001E82AC[];
  void __fastcall func_0014CD20(int, float *, int);
  __declspec(align(16)) float m[12];
  unsigned int k;
  if (D_00331C84) {
    for (k = 0; k < (unsigned int)s[1]; k++) {
      unsigned int idx = ((unsigned char *)s)[8 + k];
      if (D_00331C84) {
        float *src = D_00331C84 + idx * 16;
        m[0] = src[0]; m[1] = src[4]; m[2] = src[8]; m[3] = src[12];
        m[4] = src[1]; m[5] = src[5]; m[6] = src[9]; m[7] = src[13];
        m[8] = src[2]; m[9] = src[6]; m[10] = src[10]; m[11] = src[14];
      }
      func_0014CD20(D_001E82AC[(signed char)k] + 0x60, m, 12);
    }
  }
}

void _func_001339F0(int a, int b, int c) { if (a != b) (void)c; }

void _func_00133AB0(unsigned char i) { extern int _D_00332380[]; extern void __stdcall _func_0014BB30(int,int); if (_D_00332380[i] != 0) { _func_0014BB30(i,0); _D_00332380[i]=0; } }

void _func_00133BB0(void *p) { extern int _D_00331DB4; extern int _D_00332380,_D_00332384,_D_00332388,_D_0033238C; extern void *_D_003326AC; extern void __stdcall _func_0014BCE0(int,int); extern void __stdcall _func_0014BB30(int,int); extern void _func_0014E090(void*); extern void __stdcall _func_0014DF80(int); extern void _func_00116FB0(void*); int n=_D_00331DB4-1; _D_00331DB4=n; RtlEnterCriticalSection(&_D_003326AC); _D_00332380=0; _func_0014BCE0(0,0); _func_0014BB30(0,0); _D_00332384=0; _func_0014BCE0(1,0); _func_0014BB30(1,0); _D_00332388=0; _func_0014BCE0(2,0); _func_0014BB30(2,0); _D_0033238C=0; _func_0014BCE0(3,0); _func_0014BB30(3,0); _func_0014E090((char*)p+0x48); _func_0014E090((char*)p+0x20); if(*(int*)((char*)p+0x54))_func_0014DF80(*(int*)((char*)p+0x54)); RtlLeaveCriticalSection(&_D_003326AC); _func_00116FB0(p); }

unsigned char _func_00133C60(float *out,int i) {
 extern unsigned char _D_00331D84[],_D_00331D88[],_D_00331D8C[]; extern float _D_001D290C;
 int n=i*12,x,y; int *p=(int*)out;
 if (_D_00331D84[n] == 0) return 0;
 x=*(int*)(_D_00331D88+n); if(x<0) out[0]=(float)x+_D_001D290C; else out[0]=(float)x;
 p[1]=0;p[2]=0;p[3]=0;p[4]=0;
 y=*(int*)(_D_00331D8C+n); if(y<0) out[5]=(float)y+_D_001D290C; else out[5]=(float)y;
 p[6]=0;p[7]=0;p[8]=0;p[9]=0;
 p[10]=0x3f800000;p[11]=0;p[12]=0;p[13]=0;p[14]=0x3f800000;p[15]=0; return 1;
}
extern int _D_00332380[256];
extern int _D_00332458[]; // Array size needs to be determined or assumed large enough (e.g., 1024)
extern int _D_00159EF0[];
extern int _D_00159EE8;
extern int _D_0033245C[];
extern int _D_00159EF4[];
