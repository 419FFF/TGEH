/* 19 functions from 0x0011EE40 to 0x0011FE22, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_0011F200(int *param_1)
{
  int func_00116FB0(...);
  return func_00116FB0(param_1[0x3b]);
}

void __cdecl _func_0011F220(void)
{
    extern int _D_003281FC, _D_003281F8;
    int _func_0011EE40(...), _func_0011F200(...), _func_00115D60(...);
    if (_D_003281FC == 0) {
        int local[6];
        local[1] = 0;
        local[3] = 0;
        local[4] = 0;
        local[2] = (int)_func_0011EE40;
        local[5] = (int)_func_0011F200;
        _D_003281F8 = _func_00115D60(local);
    }
    ++_D_003281FC;
}

int func_0011F900(int *param_1)
{
  int func_001384D0(...);
  return func_001384D0(param_1[0x38]);
}

int func_0011F920(int self) { extern int D_003291B8,D_00328208; int *p=*(int **)(self+0x34);int n=0;while(p){int obj=*p;if((*(unsigned char *)((char *)p+6)&0x10)==0 && (*(unsigned char *)(obj+0x20)&1)==0){((int *)&D_00328208)[D_003291B8]=obj;D_003291B8++;n++;}p=(int *)p[3];}return n; }

void func_0011F960(int param_1)
{
  extern int _D_003291B8;
  _D_003291B8 -= param_1;
}

void func_0011FD20(void) {
    extern int D_003291B8;
    D_003291B8 = 0;
}

void func_0011FD30(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x108) = param_2;
  return;
}

extern int _D_003291B8;
extern int _D_003291BC;
extern int _D_00328200;
extern int __cdecl _func_00110370(void*);
extern void _func_0011F900(void);
void __cdecl _func_0011FD40(void)
{
    if (_D_003291BC == 0) {
        int local[7];
        local[4] = 0;
        local[1] = 0;
        local[2] = 0;
        local[3] = (int)_func_0011F900;
        _D_00328200 = _func_00110370(local);
    }
    ++_D_003291BC;
}

void func_0011FDF0(float p){extern int D_00329238,D_001E7D28;extern float D_001D290C,D_00329234,D_0032923C;float x=(float)D_00329238;D_001E7D28=*(int*)&p;if(D_00329238<0)x=x+D_001D290C;D_0032923C=(x+D_00329234)/p;}

