/* 15 functions from 0x00091510 to 0x000924F6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
static int D_00306E3C;

void __cdecl _func_00091510(int a, int b, int *c, unsigned char d, unsigned char e) { volatile unsigned char local[0x74]; unsigned int i; for(i=0;i<sizeof(local);++i) local[i]=(unsigned char)(a+b+(i%13)); if(c) *c=local[0]; if(d) local[3]=e; }

void _func_00091CF0(void)
{
    extern int D_001E3FE0[], D_001E4064[], D_001E40B8[], D_001E464C[], D_001E3FE4[], D_001E4068[];
    extern int D_00305E20;
    extern char D_00304200[];
    int func_0011D000(int, void *);
    int func_0011D270(int, void *);
    int func_0011D290(int, void *);
    int func_0011D2B0(int, void *);
    void func_00091380(void);
    void func_00078730(void);
    void func_00085E20(void);
    void func_000688D0(void);
    int func_0013F2E9(int, int);
    void func_000913A0(void *, int *);
    int *p, *q, *r;
    p = D_001E3FE0;
    do {
        func_0011D000(*p, (void *)func_00091380);
        func_0011D270(*p, (void *)func_00078730);
        func_0011D290(*p, (void *)func_00085E20);
        func_0011D2B0(*p, (void *)func_000688D0);
        p += 0xb;
    } while ((int)p < (int)D_001E4064);
    p = D_001E40B8;
    do {
        *p = 0;
        if (p[-0x13]) {
            q = D_001E3FE0;
            do {
                if (func_0013F2E9(*q, p[-0x13]) == 0)
                    *p = (int)q;
                q += 0xb;
            } while ((int)q < (int)D_001E4064);
        }
        p += 0x15;
    } while ((int)p < (int)D_001E464C);
    D_00305E20 = 0;
    r = D_001E3FE4;
    do {
        int i = 0;
        if (*r > 0) {
            do {
                func_000913A0(D_00304200 + D_00305E20++ * 0x90, r - 1);
                i++;
            } while (i < *r);
        }
        r += 0xb;
    } while ((int)r < (int)D_001E4068);
}

void func_00091DE0(void){ extern int D_00305E20; extern int D_00304204[]; int func_0011CFC0(int,int); int i=0; int *p=D_00304204; if(D_00305E20>0) do { p[0x1a]=0; func_0011CFC0(*p+0x54,0x3727c5ac); int j=0,n=*(int*)(*p+0x15c); if(n>0) do { int *a=*(int**)(*p+0x160); *(int*)((char*)a+j*0x58+0x20)=0; *(int*)((char*)a+j*0x58+0x24)=0; ++j;}while(j<n); ++i;p+=0x24;}while(i<D_00305E20);}

void func_00091E60(void)
{
  extern undefined4 D_00305E20;
  int func_00091B50(...);
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < D_00305E20) {
    iVar1 = 0x3ff0;
    do {
      if (*(char *)(iVar1 + 0x6c) != '\0') {
        func_00091B50(iVar1);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x90;
    } while (iVar2 < D_00305E20);
  }
  return;
}

void func_00091EA0(void){extern int D_00305E20;extern int D_00304208[];extern int D_001E3FE0[],D_001E4064[];int func_001160B0(int),func_00110760(int),func_0011D0E0(int);int i=0,*p=D_00304208;if(D_00305E20>0)do{func_001160B0(p[2]);func_00110760(p[0]);func_00110760(p[1]);++i;p+=0x24;}while(i<D_00305E20);for(p=D_001E3FE0;p<D_001E4064;p+=0xb)func_0011D0E0(*p);}

void func_00091F00(int param_1)
{
  int func_0012F0F0(...);
  int func_0012FC50(...);
  func_0012F0F0(param_1);
  func_0012FC50(param_1,0xbfc90fdb);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

void func_000920C0(void)
{
  extern undefined4 D_00306E4C;
  int func_00115100(...);
  extern undefined4 D_00307DF8;
  extern undefined D_001D7138;
  D_00306E4C = func_00115100(*(undefined4 *)(D_00307DF8 + 0x98),((undefined *)&D_001D7138));
  return;
}

void func_000920E0(void) {
    extern int D_001D7140;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D7140);
}

extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
void func_000920F0(void)
{
    extern int D_001D6FCC, D_001D6FD0, D_001D6FD4, D_001D6FD8, D_001D6FDC;
    extern char D_001D714C, D_001D7140;
    extern int D_00306E3C, D_00306E40, D_00306E38, D_0030809C;
    int func_0011E840(...);
    int func_0011DD60(...);
    int func_0011E830(...);
    int func_0011DEF0(...);
    int func_00110480(...);
    __declspec(align(8)) int s[0x3d];
    memset(s, 0, sizeof(s));
    s[0x24] = 2;
    s[0x25] = 2;
    s[0] = D_001D6FCC;
    s[1] = D_001D6FD0;
    s[0x2e] = 4;
    s[0x2f] = 5;
    s[0x2a] = 3;
    s[0x36] = 0;
    s[0x37] = 0;
    s[0x3c] = 10;
    s[0x39] = 0xf;
    s[2] = D_001D6FD4;
    s[3] = D_001D6FD8;
    s[4] = D_001D6FDC;
    s[0x3b] = 0x58;
    D_00306E3C = func_0011E840(&D_001D714C, s);
    D_00306E40 = func_0011DD60(&D_001D7140, 0xf, D_00306E3C, *(int *)(D_00306E3C + 0x14c));
    func_0011E830(D_00306E3C, D_00306E40);
    func_0011DEF0(D_00306E40);
    func_00110480(D_0030809C, D_00306E3C, 8);
    D_00306E38 = 0;
}
void func_00092220(void)
{
  int func_001160B0(...);
  extern undefined4 D_00306E40;
  int func_00110760(...);
  extern int D_00306E3C;
  func_001160B0(D_00306E40);
  func_00110760(D_00306E3C);
}

#pragma optimize("y", off)
void func_00092240(int param){extern int D_00306E40,D_00306E3C,D_00306E44,D_00306E48,D_00306E38;int func_0012F120(void*),func_00110420(int,int),func_001105E0(int,void*,int),func_00110000(int),func_000F8F40(int),func_00110480(int,int,int),func_0011E3A0(int,int),func_0011CFC0(int,int),func_0011DED0(int);struct X{char b[64];int z;} local;int a=D_00306E40;func_0012F120(local.b);if(*(int*)(D_00306E3C+0x2c))func_00110420(D_00306E3C,**(int**)(D_00306E3C+0x2c));func_001105E0(D_00306E3C,local.b,0);func_00110000(D_00306E3C);int b=func_000F8F40(*(int*)(param+0x2c));func_00110480(*(int*)(b+0xe0),D_00306E3C,8);D_00306E44=param;D_00306E48=b;func_0011E3A0(D_00306E40,0);func_0011CFC0(a+0x54,0x42200000);D_00306E38=0;func_0011DED0(D_00306E40);}
#pragma optimize("", on)
void func_00092300(void)
{
  extern undefined4 D_00306E38;
  int func_0011CFC0(...);
  extern undefined4 D_00306E40;
  if (D_00306E38 == 0) {
    D_00306E38 = 10;
    func_0011CFC0(D_00306E40 + 0x54,0x3a83126f);
  }
  return;
}

