/* 12 functions from 0x000AFE90 to 0x000B0E76, found by Ghidra. */
#include "common.h"
extern int D_003291F8;
extern int D_00313B0C;
extern int D_00313B3C;
extern int D_00313A68;
extern int D_00313AE4;
extern int D_00313B30;
extern int D_00313B34;
extern int D_00313B28;
extern int D_00313AD0;
extern int D_00313A84;
extern int D_00313A90;
extern int D_00313B50;
extern int D_00313AC4;
extern int D_00313B08;
extern int D_00313AF8;
extern int D_00313A88;
extern int D_00313AA8;
extern int D_00313AF4;
extern int D_00313A98;
extern int D_00313B40;
extern int D_00313B68;
extern int D_00313B2C;
extern int D_00313AAC;
extern int D_00313B5C;
extern int D_00313ACC;
extern int D_00313B64;
extern int D_00313B4C;
extern int D_00313AB4;
extern int D_00313AC8;
extern int D_00313B18;
extern int D_00313B20;
extern int D_00313AEC;
extern int D_00313B10;
extern int D_00313AB0;
extern int D_00313A64;
extern int D_00313B48;
extern int D_00313A94;
extern int D_00313A6C;
extern int D_00313A80;
extern int D_00313B38;
extern int D_00313AC0;
extern int D_00313B04;
extern int D_00313AA4;
extern int D_00313ABC;
extern int D_00313B58;
extern int D_00313B24;
extern int D_00313AFC;
extern int D_00313B14;
extern int D_00313AF0;
extern int D_00313B44;

void __cdecl _func_000AFE90(void) { switch(D_003291F8) { case 0: if (!(D_00313B0C&1)) { D_00313A68=0x15; D_00313B30=0x12; D_00313B34=0x1f; D_00313AD0=0x10; D_00313A90=0x25; D_00313B40=0; D_00313B64=0x13; D_00313B38=0x7a; D_00313AC0=0x7b; return; } case 1: D_00313AC4=3; D_00313B3C=0xe; D_00313B30=0xc; D_00313B34=0; D_00313AD0=1; D_00313A90=2; D_00313AF8=0xe; D_00313A88=0xf; D_00313AA8=0x10; D_00313AF4=0x11; D_00313A98=6; D_00313A68=8; D_00313B40=4; D_00313B68=0xf; D_00313B2C=0xf; D_00313AAC=0xf; D_00313AE4=0xe; D_00313B5C=0xd; D_00313ACC=0xd; D_00313B4C=0xf; D_00313B64=0xc; D_00313AB4=0xf; D_00313AC8=0x10; D_00313B18=0x11; D_00313AFC=9; D_00313B20=0xb; D_00313AEC=10; D_00313B10=0; D_00313A64=1; D_00313A94=4; D_00313A6C=10; D_00313A80=0xb; D_00313B38=0xc; D_00313AC0=0xd; D_00313B14=0x11; D_00313AF0=0x11; D_00313B44=0x10; break; case 2: D_00313B64=0xc; D_00313B38=0xc; D_00313B30=0xc; D_00313AA8=0x11; D_00313AC8=0x11; D_00313B14=0x11; D_00313AF0=0x11; D_00313AC4=3; D_00313B5C=0xd; D_00313ACC=0xd; D_00313AC0=0xd; D_00313B40=4; D_00313A94=4; D_00313B34=0; D_00313AD0=1; D_00313A90=2; D_00313AF8=0x10; D_00313A88=0xf; D_00313AF4=0xe; D_00313A98=6; D_00313A68=8; D_00313B68=0xf; D_00313B3C=0x10; D_00313B2C=0xf; D_00313B04=0x10; D_00313AAC=0xf; D_00313AE4=0x10; D_00313B4C=0xf; D_00313AA4=0x10; D_00313AB4=0xf; D_00313B18=0xe; D_00313AFC=0x13; D_00313B20=0xb; D_00313AEC=10; D_00313B10=0; D_00313A64=1; D_00313ABC=0x10; D_00313B58=0xe; D_00313B24=5; D_00313A6C=10; D_00313A80=0xb; D_00313B44=0xf; break; case 3: D_00313AC4=3; D_00313B3C=0xe; D_00313AA8=0x11; D_00313B30=0xc; D_00313AC8=0x11; D_00313B34=0; D_00313AD0=1; D_00313A90=2; D_00313AF8=0xe; D_00313A88=0xf; D_00313AF4=0x10; D_00313A98=7; D_00313A68=9; D_00313B40=4; D_00313B68=0xf; D_00313B2C=0xf; D_00313AAC=0xf; D_00313AE4=0xe; D_00313B5C=0xd; D_00313ACC=0xd; D_00313B4C=0xf; D_00313B64=0xc; D_00313AB4=0xf; D_00313B18=0x10; D_00313AFC=0x13; D_00313B20=0xb; D_00313AEC=10; D_00313B10=0; D_00313A64=1; D_00313A94=4; D_00313B24=5; D_00313A6C=10; D_00313A80=0xb; D_00313B38=0xc; D_00313AC0=0xd; D_00313B14=0x10; D_00313B44=0xf; break; } }

#pragma optimize("t", on)
int func_000B04F0(void)
{
 extern char D_00308153; extern int D_001E4718,D_001E4714,D_001E46C4,D_00313B54,D_00313AD4,D_00313B40,D_002EEC00,D_002EECA0,D_003080AC;
 int func_0009A0D0(int);
 int *p, mode; unsigned int i,j,count;
 if(!D_00308153) D_00308153=(D_001E4718!=1);
 mode=D_00313B54;
 if(mode==2||mode==1) goto search;
 D_001E46C4=D_001E4714;
 if(D_001E4714!=-1) {
  p=*(int**)((char*)&D_00313AD4+D_001E4714*4);
  if(!(*(char*)p&1)) {D_00308153=1;D_001E4718=0;goto done;}
  if(!D_00308153) return (int)p;
  int *slot=(int*)((char*)*(int*)((char*)p+0x10)+0x10+D_00313B40*0x18);
  if(*(short*)slot){*(short*)slot=0;D_00308153=0;D_001E4718=1;return (int)p;}
  goto done;
 }
search:
 D_001E46C4=-1;
 for(i=0;i<4;i++) {
  p=*(int**)((char*)&D_00313AD4+i*4);
  if(*(char*)p&1) {
   if(!D_00308153) {
    count=p[3];
    for(j=0;j<count;j++) {
     if(*(short*)((char*)p[4]+0x10+j*0x18)) {
      D_001E46C4=i; D_001E4714=i; return (int)p;
     }
    }
   }
   if(*(short*)((char*)p[4]+0x10+D_00313B40*0x18)) {
    *(short*)((char*)p[4]+0x10+D_00313B40*0x18)=0;
    D_001E46C4=i; D_001E4714=i; D_00308153=0; D_001E4718=1;
    return (int)p;
   }
  }
 }
done:
 mode=D_00313B54;
 if(!((D_002EEC00==6)&&(D_002EECA0==6)) && (mode>2&&mode<9)) {
  if(D_003080AC==1) func_0009A0D0(2);
  else if(D_003080AC==3) func_0009A0D0(8);
 }
 return D_00313AD4;
}
#pragma optimize("", on)
int func_000B06A0(void) {
    extern int D_001E46C4;
    return D_001E46C4;
}

void func_000B0730(int param_1)
{
  int func_0011FD80(...);
  int func_000688D0(...);
  int func_001103D0(...);
  int func_00116150(...);
  int func_00122A70(...);
  int func_0011B080(...);
  int func_0011CD00(...);
  int func_00128E60(...);
  int func_00122AD0(...);
  int func_00128590(...);
  int func_0011E990(...);
  int func_00115B10(...);
  int func_00125060(...);
  int func_00125B00(...);
  int func_0011F220(...);
  int func_00127AC0(...);
  int func_00122940(...);
  int func_00065F00(...);
  int func_000AFB80(...);
  int func_001271C0(...);
  int func_00139A70(...);
  int func_000B0D90(...);
  int func_00127190(...);
  int func_001004F0(...);
  extern int D_00313AD4, D_00313AD8, D_00313ADC, D_00313AE0, D_00313AE8;
  int func_000AFE90(...);
  int func_000B06B0(...);
  int func_00131780(...);
  extern char D_001D76C4, D_001D29C7;
  extern short D_00313A78, D_00313A7A, D_00313A7C;
  int func_00100B90(...);
  int func_00100BC0(float);
  int func_00100BE0(float);
  int func_00100C10(float);
  extern float D_001D29E0;
  extern int D_00313B1C;
  int func_00116A90(...);
  extern char D_0000FA00;
  int func_00131990(...);
  extern char D_001D788C;
  extern int D_00313A74, D_00313AB8;
  int func_00120BF0(...);
  extern char D_001D8B38, D_001D8B2C;
  int func_00120F80(...);
  extern int D_00313B60;
  int func_001229B0(...);
  extern char D_001D8B1C;
  extern int D_002EEC50, D_002EECA8;
  int func_00063F30(...);
  extern unsigned int D_001E46B4;
  extern int D_00313B00;
  int func_0013B320(float);
  extern int D_00313A9C;
  int func_000AFB90(...);
  extern char D_001D76BC;
  int func_000EC970(...);
  int func_000AF0B0(...);
  int func_000F9910(...);
  int func_000FE410(...);
  int func_001085D0(...);
  int func_0009F010(...);
  extern unsigned char D_00311518, D_00311515, D_00311516;
  extern int D_00313B54;
  int func_001317D0(...);

  func_0011FD80(param_1);
  func_000688D0();
  func_001103D0();
  func_00116150();
  func_00122A70();
  func_0011B080(0);
  func_0011CD00();
  func_00128E60();
  func_00122AD0();
  func_00128590();
  func_0011E990();
  func_00115B10(100);
  func_00125060();
  func_00125B00();
  func_0011F220();
  func_00127AC0();
  func_00122940();
  func_00065F00();
  func_000688D0();
  func_000AFB80();
  func_001271C0();
  func_00139A70();
  func_000B0D90();
  func_00127190();
  func_001004F0();
  D_00313AD4 = 0;
  D_00313AD8 = 0;
  D_00313ADC = 0;
  D_00313AE0 = 0;
  func_000AFE90();
  D_00313AE8 = 0;
  func_000B06B0();
  func_000688D0();
  func_00131780(&D_001D76C4, &D_001D29C7);
  func_000688D0();
  D_00313A78 = 7;
  D_00313A7A = 10;
  D_00313A7C = 10;
  func_00100B90();
  func_00100BC0((float)((long double)(int)D_00313A78 * D_001D29E0));
  func_00100BE0((float)((long double)(int)D_00313A7A * D_001D29E0));
  func_00100C10((float)(D_001D29E0 * (double)(int)D_00313A7C));
  D_00313B1C = func_00116A90(&D_0000FA00, 1, 1);
  func_000688D0();
  func_00131990(&D_001D788C);
  D_00313A74 = func_00120BF0(&D_001D8B38);
  D_00313AB8 = func_00120BF0(&D_001D8B2C);
  func_00131990(&D_001D29C7);
  func_000688D0();
  func_00120F80(0x40000000, 0x40000000);
  D_00313B60 = func_001229B0(&D_001D8B1C);
  D_002EEC50 = 0x4019999a;
  D_002EECA8 = 0x404ccccd;
  func_00063F30(D_00313B60, 0x4019999a, 0x404ccccd);
  D_00313B00 = func_0013B320((float)(double)D_001E46B4);
  func_000688D0();
  D_00313A9C = func_000AFB90(&D_001D76BC);
  func_000688D0();
  func_000EC970();
  func_000AF0B0();
  func_000F9910();
  func_000FE410();
  func_001085D0();
  func_0009F010();
  D_00311518 |= 1;
  D_00311515 = 0;
  D_00311516 = 0;
  D_00313B54 = 0;
  func_000688D0();
  func_001317D0(&D_001D29C7);
  func_000688D0();
}

extern int D_00313B54;
extern int D_00313A70;
extern int D_001E46BC[];
extern char D_001D29C7[];
void __cdecl _func_000A7890(void);
void __cdecl _func_000ED590(void);
void __cdecl _func_00070720(void);
void __cdecl _func_0009A610(void);
void __cdecl _func_000A75D0(void);
void __cdecl _func_000ED480(void);
void __cdecl _func_000705C0(void);
void __cdecl _func_0009B5C0(int, char *);
void __cdecl _func_000A7A30(void);
void __cdecl _func_000ED620(void);
void __cdecl _func_000708D0(void);
void __cdecl _func_0009ABD0(void);
void __cdecl _func_000B09A0(void)
{
    if (D_00313B54 != D_00313A70) {
        switch (D_00313B54) {
        case 1: _func_000A7890(); break;
        case 12: _func_000ED590(); break;
        case 2: _func_00070720(); break;
        case 3: case 4: case 5: case 6: case 7: case 8: case 9: _func_0009A610(); break;
        }
        D_00313B54 = D_00313A70;
        switch (D_00313A70) {
        case 1: _func_000A75D0(); break;
        case 12: _func_000ED480(); break;
        case 2: _func_000705C0(); break;
        case 3: case 4: case 5: case 6: case 7: case 8: case 9: _func_0009B5C0(D_001E46BC[D_00313A70], D_001D29C7); break;
        }
    }
    switch (D_00313B54) {
    case 1: _func_000A7A30(); break;
    case 12: _func_000ED620(); break;
    case 2: _func_000708D0(); break;
    case 3: case 4: case 5: case 6: case 7: case 8: case 9: _func_0009ABD0(); break;
    }
}

extern int D_00313D38,D_00313BB4,D_00313B9C,D_00313BA0,D_00313BA4,D_00313DAC;
void func_000B0E00(void){D_00313D38=0x3144;D_00313BB4=1;D_00313B9C=1;D_00313BA0=1;D_00313BA4=1;D_00313DAC=1;}

extern int D_00313DAC,D_00313D7C,D_00313BB4,D_00313B90,D_001E46C4,D_00313AD4,D_00313AE8,D_00313B8C,D_00313B84,D_00313D84,D_00313BB0,D_00313BAC,D_00313D74,D_00313DD4,D_00313D78,D_00313B78,D_00313D38,D_00313B9C,D_00313BA0,D_00313BA4;
void func_000B0E30(void){D_00313DAC=1;D_00313D7C=-1;D_00313BB4=0;D_00313B90=0;}

int func_000B0E60(void) {
    extern int D_00313DAC;
    return D_00313DAC;
}

int func_000B0E70(void) {
    extern int D_00313BB0;
    return D_00313BB0;
}

