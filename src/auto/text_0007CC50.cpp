/* 15 functions from 0x0007CC50 to 0x0007D77D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007CE20(int param_1) { extern void func_0011E3D0(int),func_000E8390(void),func_0011CFC0(int,int); int p=param_1; func_0011E3D0(p); func_000E8390(); func_0011CFC0(p+0x54,0); }

void func_0007CE50(void) {
    extern int D_001D667C;
    extern void func_0007CC50(void);
    extern void func_00083D00(void);
    extern void func_00079D10(void);
    extern void func_0007CE20(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0007CC50, &D_001D667C);
    func_0011D270(func_00083D00, &D_001D667C);
    func_0011D290(func_00079D10, &D_001D667C);
    func_0011D2B0(func_0007CE20, &D_001D667C);
    func_0011D2D0(func_00092810, &D_001D667C);
    func_0011D2F0(func_00083D60, &D_001D667C);
}

void func_0007CEB0(void) {
    extern int D_001D667C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D667C);
}

void func_0007CEC0(void) {
    extern int D_002FAC8C;
    extern int D_002FAC90;
    D_002FAC8C = 0;
    D_002FAC90 = 0;
}

void func_0007CED0(void) { extern int D_00307DF8,D_001D44F8,D_001D3BC4; extern float D_001D2888; extern int D_002FAC8C,D_002FAC90,D_002FAC80,D_002FAC88; extern int func_001031C0(...),func_00102E80(...),func_00110060(...),func_001105E0(...),func_00110000(...),func_00110300(...); char buf[64]; int base=D_00307DF8; int esi=*(int*)(base+44); int *edi=(int*)(base+44); func_00102E80(func_001031C0(base,&D_001D44F8)); func_00110060(esi,&buf[0]); *(float*)&buf[48] += D_001D2888; func_001105E0(esi,&buf[12],0); func_00110000(esi); D_002FAC8C=1; D_002FAC90=0; D_002FAC80=0; D_002FAC88=0xbf800000; int result=func_00110300(*edi,&D_001D3BC4,0); *(unsigned short*)(result+32)|=1; }

void func_0007CF70(void) { extern int D_00307DF8; extern float D_001D2888; extern unsigned char D_00308151; extern int D_002FAC8C,D_002FAC90; extern int func_00110060(...),func_001105E0(...),func_00110000(...),func_0005A750(...); char buf[64]; int esi=*(int*)(D_00307DF8+44); func_00110060(esi,&buf[0]); *(float*)&buf[48] -= D_001D2888; func_001105E0(esi,&buf[12],0); func_00110000(esi); D_002FAC8C=0; D_002FAC90=0; if(!D_00308151)func_0005A750(); }

void func_0007D500(void) {
    extern int D_002FADE8;
    D_002FADE8 = 0;
}

void func_0007D510(void) { extern unsigned int D_002FADE8,D_002FACD8[]; extern void func_00129C90(...); unsigned int i=0; while(i<D_002FADE8){func_00129C90(D_002FACD8[i]);++i;} }

void func_0007D540(int param_1, float param_2, float param_3)
{
  extern int D_002FADE8;
  extern float D_002FAD28[];
  extern int D_002FADA8[];
  extern float D_002FAC98[];
  extern float D_002FAD68[];
  extern int D_002FACD8[];
  float func_00131760(...);
  int func_0013BB30(...);
  D_002FAD28[D_002FADE8] = param_2;
  D_002FADA8[D_002FADE8] = param_1;
  D_002FAC98[D_002FADE8] = param_3;
  D_002FAD68[D_002FADE8] = (param_2 + param_3) * func_00131760();
  D_002FACD8[D_002FADE8] = func_0013BB30(0);
  ++D_002FADE8;
}

unsigned char func_0007D5B0(int param_1)
{
  extern int D_002FADE8;
  extern int D_002FADA8[];
  extern unsigned char D_002FAD18[];
  unsigned int i = 0;
  while (i < (unsigned int)D_002FADE8) {
    if (param_1 == D_002FADA8[i]) return D_002FAD18[i] != 0;
    ++i;
  }
  return 0;
}

void func_0007D750(undefined4 param_1)
{
  int func_0010F750(...);
  extern undefined4 D_002FADEC;
  int iVar1;
  
  iVar1 = func_0010F750(param_1,D_002FADEC,0xf0);
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  *(undefined4 *)(iVar1 + 0xe4) = 0xbf800000;
  return;
}

