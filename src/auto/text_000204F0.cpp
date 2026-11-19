/* 10 functions from 0x000204F0 to 0x0002142E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void __fastcall func_000204F0(int param_1)
{
 *(undefined4 *)(param_1+0x17c)=0;
 *(undefined4 *)(param_1+0x180)=0x3f800000;*(undefined4 *)(param_1+0x184)=0x3f800000;
 *(undefined4 *)(param_1+0x188)=0x3f800000;*(undefined4 *)(param_1+0x18c)=0x3f800000;
 *(undefined4 *)(param_1+0x190)=0x3f800000;*(undefined4 *)(param_1+0x194)=0x3f800000;
 *(undefined4 *)(param_1+0x198)=0x3f800000;*(undefined4 *)(param_1+0x19c)=0x3f800000;*(undefined4 *)(param_1+0x1a0)=0;
}

void func_00020540(int p)
{
    int func_00116A90(...); int func_0004FA80(...); int func_00048720(...); int func_00056D50(...);
    int func_00045A60(...); int func_000A1BB0(...); int func_00131990(...);
    extern int D_00307D10;
    extern char D_001D2BEC, D_001D3230, D_001D29C7;
    int *w = (int *)(p + 0x17c);
    unsigned int *x = (unsigned int *)func_00116A90(0x270, 1, 1);
    int n;
    *(unsigned int **)(p + 0x110) = x;
    for (int i = 0; i < 0x9c; i++) x[i] = 0;
    func_0004FA80(p, x + 1);
    w[0] = 0; w[2] = 0; w[3] = 0; w[4] = 0; w[5] = 0; w[6] = 0; w[7] = 0; w[9] = 0;
    w[1] = 0x3f800000; w[8] = 0x3f800000;
    x[0xd] = x[7];
    *((char *)x + 0x99) = 0;
    x[0x1a] = *(unsigned int *)(p + 0x130);
    n = (int)((double)*(float *)(p + 0x134) / (double)*(float *)(x[0x1a] + 0x74)) << 1;
    x[0x21] = n;
    x[0x1b] = func_00048720(D_00307D10, n, x[0x1a], p);
    x[1] = 10;
    func_00056D50(p, x + 1);
    x[0x96] = 0;
    func_00045A60(p);
    x[0x9a] = func_000A1BB0(p, &D_001D2BEC);
    x[0x9b] = func_000A1BB0(p, &D_001D3230);
    func_00131990(&D_001D29C7);
    x[0x98] = 0xffffffff;
}

void func_00020650(void) { volatile int marker = 27; (void)marker; }

void func_00020CE0(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x6c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x268));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x26c));
  func_00116FB0(iVar1);
  return;
}

void func_00020D20(int param_1)
{
 int func_00110420(...);int func_00110330(...);int func_00088A50(...);
 byte *pbVar1;int iVar2;int iVar3;undefined4 *puVar4;
 iVar3=*(int *)(param_1+0x110);
 if(*(int *)(iVar3+0xc4)!=0xff){
  iVar2=*(int *)(iVar3+0xc4)*16;
  puVar4=((undefined4 *)*(int *)(iVar3+0xc0))+iVar2;
  if(*(int *)(*(int *)(puVar4+0x30/4)+0x2c))
   func_00110420(*(int *)(puVar4+0x30/4),**(undefined4 **)(*(int *)(puVar4+0x30/4)+0x2c));
  func_00110330(*(undefined4 *)(puVar4+0x30/4),0);
  func_00088A50(*(undefined4 *)(puVar4+0x30/4),0x3f800000,1);
  *(undefined4 *)((char *)puVar4+0x6c)=0;
  iVar2=*(int *)(iVar3+0xc8);*(int *)(iVar3+0xc4)=0xff;
  if(iVar2){*(int *)(param_1+0x2c)=iVar2;*(int *)(iVar3+0xc8)=0;}
  *(int *)(iVar3+4)=3;
  if(*(int *)(param_1+0x60)){pbVar1=(byte *)(*(int *)(param_1+0x60)+0x38);*pbVar1&=0xfe;}
 }
}

void _func_00020D20(void *);
void _func_00088940(void *, int);
void _func_0009CDE0(void *);
void _func_000A1CB0(void *);
void _func_0011C3E0(void *);
void _func_00116FB0(void *);
void _func_000210D0(char *a)
{
    char *b;
    char *p;
    int i;

    b = *(char **)(*(char **)(a + 0x110) + 0xC0);   /* shared block */
    if (b != 0) {
        _func_00020D20(a);
        if (--*(int *)(b + 0x2C) == 0) {            /* last reference */
            p = b + 0x30;                           /* 8 slots, 0x40 apart */
            for (i = 8; i != 0; i--) {
                _func_00088940(*(void **)p, 1);
                _func_0009CDE0(*(void **)p);
                _func_000A1CB0(p + 4);
                p += 0x40;
            }
            _func_0011C3E0(b);
            _func_00116FB0(b);
        }
    }
}

void func_00021410(int param_1)
{
 int func_00020DC0(...);
 *(undefined4 *)(*(int *)(param_1+0x110)+4)=1;
 *(undefined1 *)(param_1+0x14)=0;
 func_00020DC0(param_1);
}

