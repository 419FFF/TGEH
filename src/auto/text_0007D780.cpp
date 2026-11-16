/* 17 functions from 0x0007D780 to 0x0007E71E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007DCE0(void) { int func_000688D0(...); int func_0007D780(...); int func_00110370(...); int func_0011BF40(...); extern int D_002FADF4; extern int D_002FADEC; extern int D_001D6694; extern int D_002FADF0; if(D_002FADF4==0){ int local[7]; local[4]=0; local[3]=(int)&func_000688D0; local[1]=(int)&func_0007D780; local[2]=0; D_002FADEC=func_00110370(local); func_000688D0(); D_002FADF0=func_0011BF40(&D_001D6694,0); func_000688D0(); } D_002FADF4++; }

void func_0007DD50(void) { extern int D_002FADF4; extern int D_002FADF0; extern int D_002FADEC; int func_0011B990(...); int func_001103C0(...); D_002FADF4--; if(D_002FADF4==0){func_0011B990(D_002FADF0);func_001103C0(D_002FADEC);} }

void func_0007DD80(int param_1, float param_2) { double value=param_2; *(float*)(param_1+0xe8)=(float)value; }

void func_0007DFF0(void) {
    extern int D_001D66B0;
    extern void func_0007DD90(void);
    extern void func_00083550(void);
    extern void func_00079D10(void);
    extern void func_00083590(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0007DD90, &D_001D66B0);
    func_0011D270(func_00083550, &D_001D66B0);
    func_0011D290(func_00079D10, &D_001D66B0);
    func_0011D2B0(func_00083590, &D_001D66B0);
    func_0011D2D0(func_00092810, &D_001D66B0);
    func_0011D2F0(func_00083D60, &D_001D66B0);
}

void func_0007E050(void) { extern int D_001D66B0; int func_0011D0E0(...); func_0011D0E0((int)&D_001D66B0); }

void func_0007E1F0(void)
{
  int func_001160B0(...);
  extern undefined D_002FADFC;
  int func_00110760(...);
  extern undefined D_002FADF8;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FADFC) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FADF8) + uVar1));
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0x50);
  return;
}

void *_func_0007E220(int a,int *b){int _func_00110420(...);int _func_0012F120(...);int _func_001105E0(...);int _func_00110000(...);int _func_00110550(...);int _func_0011DED0(...);int _func_00083650(...);extern unsigned int _D_002FAE00[20],_D_002FAE48;extern int _D_002FADF8[20],_D_002FAE04[20],_D_002FADFC[20];register unsigned int v=0xffffffffu,slot=0,t=_D_002FAE00[0];if(t<=v){v=t;slot=0;}t=_D_002FAE00[4];if(t<=v){v=t;slot=1;}t=_D_002FAE00[8];if(t<=v){v=t;slot=2;}t=_D_002FAE00[12];if(t<=v){v=t;slot=3;}t=_D_002FAE00[16];if(t<=(int)v)slot=4;int *p=&_D_002FADF8[slot*4];int *o=*(int**)(p[0]+0x2c);_func_00110420(*o,p[0]);_D_002FAE04[slot*4]=0;__declspec(align(16)) char local[64];_func_0012F120(local);*(int*)(local+48)=b[0];*(int*)(local+52)=b[1];*(int*)(local+56)=b[2];_func_001105E0(p[0],local,0);_func_00110000(p[0]);_func_00110550(a,p[0],8);_D_002FAE04[slot*4]=1;_func_0011DED0(_D_002FADFC[slot*4]);_D_002FAE00[slot*4]=_D_002FAE48;++_D_002FAE48;_func_00083650(p[0]);return p;}

void func_0007E570(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x18) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x1c) != 0) {
      func_00116FB0(*(int *)(param_1 + 0x1c));
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined2 *)(param_1 + 0x16) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x49742400;
    *(undefined4 *)(param_1 + 0x10) = 0x49742400;
  }
  return;
}

