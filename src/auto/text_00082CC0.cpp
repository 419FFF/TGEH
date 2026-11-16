/* 19 functions from 0x00082CC0 to 0x00083B2B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000831E0(int param_1)
{
  extern undefined D_002FBB34;
  *(int *)(((undefined *)&D_002FBB34) + *(int *)(param_1 + 0xe0) * 8) =
       *(int *)(((undefined *)&D_002FBB34) + *(int *)(param_1 + 0xe0) * 8) + -1;
  return;
}

undefined4 func_00083200(int param_1)
{
  extern undefined D_002FBB30;
  return *(undefined4 *)(((undefined *)&D_002FBB30) + param_1 * 8);
}

void func_000832B0(void)
{
  extern undefined4 D_002FBB2C;
  int func_001103C0(...);
  extern undefined4 D_002FBB28;
  D_002FBB2C = D_002FBB2C + -1;
  if (D_002FBB2C == 0) {
    func_001103C0(D_002FBB28);
  }
  return;
}

int _func_000832D0(const char *param_1)
{
  extern const char _D_001D6838[];
  int memcmp(const void *, const void *, unsigned int);
  return !memcmp(param_1, _D_001D6838, 7) - 1;
}

void func_00083550(int param_1)
{
  int func_0011CFC0(...);
  int func_0011DED0(...);
  int func_00116A90(...);
  int iVar1;
  
  func_0011CFC0(param_1 + 0x54,0);
  func_0011DED0(param_1);
  iVar1 = func_00116A90(8,1,0);
  *(int *)(param_1 + 0x17c) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  return;
}

void func_000835E0(void) {
    extern int D_001D6840;
    extern void func_000832F0(void);
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
    func_0011D000(func_000832F0, &D_001D6840);
    func_0011D270(func_00083550, &D_001D6840);
    func_0011D290(func_00079D10, &D_001D6840);
    func_0011D2B0(func_00083590, &D_001D6840);
    func_0011D2D0(func_00092810, &D_001D6840);
    func_0011D2F0(func_00083D60, &D_001D6840);
}

void func_00083640(void) {
    extern int D_001D6840;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6840);
}

void func_00083650(int param_1)
{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x158) + 0x17c) + 4) = 0x3f800000;
  return;
}

void func_000837F0(void)
{
  int func_001160B0(...);
  extern undefined D_002FBB3C;
  int func_00110760(...);
  extern undefined D_002FBB38;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FBB3C) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FBB38) + uVar1));
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0x50);
  return;
}

void *_func_00083820(int a,int *b){int _func_00110420(...);int _func_0012F120(...);int _func_001105E0(...);int _func_00110000(...);int _func_00110550(...);int _func_0011DED0(...);int _func_00083650(...);extern unsigned int _D_002FBB40[20],_D_002FBB88;extern int _D_002FBB38[20],_D_002FBB44[20],_D_002FBB3C[20],_D_002FBB50,_D_002FBB60,_D_002FBB70,_D_002FBB80;register unsigned int v=0xffffffffu,slot=0,t=_D_002FBB40[0];if(t<=v){v=t;slot=0;}t=_D_002FBB40[4];if(t<=v){v=t;slot=1;}t=_D_002FBB40[8];if(t<=v){v=t;slot=2;}t=_D_002FBB40[12];if(t<=v){v=t;slot=3;}t=_D_002FBB40[16];if(t<=(int)v)slot=4;int *p=&_D_002FBB38[slot*4];int *o=*(int**)(p[0]+0x2c);_func_00110420(*o,p[0]);_D_002FBB44[slot*4]=0;__declspec(align(16)) char local[64];_func_0012F120(local);*(int*)(local+48)=b[0];*(int*)(local+52)=b[1];*(int*)(local+56)=b[2];_func_001105E0(p[0],local,0);_func_00110000(p[0]);_func_00110550(a,p[0],8);_D_002FBB44[slot*4]=1;_func_0011DED0(_D_002FBB3C[slot*4]);_D_002FBB40[slot*4]=_D_002FBB88;++_D_002FBB88;_func_00083650(p[0]);return p;}

