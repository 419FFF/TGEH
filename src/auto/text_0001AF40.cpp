/* 15 functions from 0x0001AF40 to 0x0001BE54, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

short func_0001B280(int p)
{
    int func_0001AED0(int);
    int func_00088940(int, int);
    int func_0009CDE0(int);
    int func_000A1CB0(int);
    int func_0011C3E0(int);
    short func_00116FB0(int);
    char *b = *(char **)(p + 0x114);
    func_0001AED0(p);
    if (--*(short *)(b + 0x2c) == 0) {
        unsigned int i;
        for (i = 0; i < *(unsigned short *)(b + 0x2e); ++i) {
            char *slot = b + 0x30 + i * 0x40;
            func_00088940(*(int *)slot, 1);
            func_0009CDE0(*(int *)slot);
            func_000A1CB0((int)(slot + 4));
        }
        func_0011C3E0((int)b);
        return func_00116FB0((int)b);
    }
    return *(short *)(b + 0x2c);
}

void func_0001B3E0(void) {
    int func_0001B280(...);
    func_0001B280();
}

void func_0001B3F0(int param_1)
{
  *(undefined2 *)(param_1 + 0x110) = 0;
  return;
}

void func_0001B4F0(int p){int func_000A22F0(int);unsigned short n=*(unsigned short*)(p+0x110);if(--n==0){int x=*(int*)(p+0x118),y=*(int*)(p+0x114);func_000A22F0(p+0x34+(x<<6)+y);}}

void func_0001B7F0(void)
{
  int func_000B5650(...);
  int func_0001B520(...);
  char cVar1;
  
  cVar1 = func_000B5650(0xe);
  if (cVar1 == '\0') {
    cVar1 = func_000B5650(0xc);
    if (cVar1 == '\0') {
      func_0001B520();
      return;
    }
  }
  return;
}

void __fastcall func_0001BE10(unsigned int *p){unsigned int one=0x3f800000;unsigned int zero=0;p[0x17c/4]=zero;p[0x180/4]=one;p[0x184/4]=one;p[0x188/4]=one;p[0x18c/4]=one;p[0x190/4]=one;p[0x194/4]=one;p[0x198/4]=one;p[0x19c/4]=zero;p[0x1a0/4]=zero;}

