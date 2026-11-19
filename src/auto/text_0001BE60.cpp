/* 8 functions from 0x0001BE60 to 0x0001CC08, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0001BE60(int p)
{
  int func_00116A90(...); int func_0004FA80(...); int func_00048720(...); int func_00056D50(...);
  int func_00045A60(...); int func_000A1BB0(...); int func_00131990(...); int func_0009C6A0(...);
  int func_0011DF00(...);
  extern int D_00307D10;
  extern char D_001D2EF8, D_001D2EEC, D_001D2EDC, D_001D2ED0, D_001D29C7, D_001D2EC4;
  int *w = (int*)(p + 0x17c);
  unsigned int *x = (unsigned int*)func_00116A90(0x280, 1, 1);
  unsigned int *y;
  int n;
  *(unsigned int**)(p + 0x110) = x;
  for (int i = 0; i < 0xa0; i++) x[i] = 0;
  y = x + 1;
  func_0004FA80(p, y);
  w[0] = 0; w[1] = 0x3f800000; w[2] = 0; w[3] = 0; w[4] = 0; w[5] = 0; w[6] = 0; w[7] = 0; w[8] = 0; w[9] = 0;
  *((char*)x + 0x99) = 0;
  x[1] = 5;
  x[0x1a] = *(unsigned int*)(p + 0x134);
  x[0x19] = *(unsigned int*)(p + 0x130);
  n = (int)((long double)*(float*)(p + 0x138) / *(float*)(x[0x1a] + 0x74)) << 1;
  x[0x21] = n;
  x[0x1b] = func_00048720(D_00307D10, n, x[0x1a], p);
  func_00056D50(p, y);
  x[0] = 0;
  func_00045A60(p);
  x[0x9c] = func_000A1BB0(p, &D_001D2EF8);
  x[0x9d] = func_000A1BB0(p, &D_001D2EEC);
  x[0x9e] = func_000A1BB0(p, &D_001D2EDC);
  x[0x9f] = func_000A1BB0(p, &D_001D2ED0);
  func_00131990(&D_001D29C7);
  x[0x97] = func_0009C6A0(p, &D_001D2EC4);
  x[0x98] = *(unsigned int*)(*(int*)(x[0x97] + 0x2c) + 0x158);
  func_0011DF00(x[0x98]);
  *((char*)x + 0x264) = 0;
  *((char*)x + 0x265) = 0;
  x[0x9a] = 0xffffffff;
  *(unsigned short*)(p + 0x10) |= 0x80;
}

#pragma optimize("y", off)
void _func_0001BFD0(int object) { extern int D_001D2CA0,D_0000FFFF,D_001D2F24; int func_00115100(...), func_0004F290(...), func_000A1D10(...), func_0007C3F0(...); volatile int frame[64]; int *state=*(int**)(object+0x110); if (state[0x9a]==-1) state[0x9a]=func_00115100(*(int*)(object+0x98),&D_001D2CA0); switch (*state) { case 0: { int* p; func_0004F290(object); func_000A1D10(state[0x9c],1,0,&D_0000FFFF,0x41c00000,0x3e4ccccd); *state=2; p=*(int**)(state[0x9c]+0x10); frame[12]=*(unsigned short*)(*p+0x1a); if (*(unsigned char*)((char*)state+0x264)) { frame[5]=state[0x98]; } frame[5]=frame[12]; *(float*)((char*)state+0x26c)=(float)frame[12]*(*(float*)&D_001D2F24); break; } case 1: frame[1]=1; break; case 2: frame[2]=2; break; case 3: frame[3]=3; break; case 4: frame[4]=4; break; case 5: frame[5]=5; break; case 6: frame[6]=6; break; case 7: frame[7]=16; break; default: break; } }
#pragma optimize("", on)
void func_0001C930(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x6c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x27c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x270));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x278));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x274));
  func_00116FB0(iVar1);
  return;
}

extern unsigned short D_003281E4;
extern char D_001D2F4C, D_001D2F40, D_001D2F38, D_001D2F30, D_001D2F28;
int func_0011B4F0(int, const void *);
int func_0011E7E0(int);
void func_000688D0(int);
int func_0011D310(int, int, int);
extern unsigned short D_003281E4; extern char D_001D2F4C,D_001D2F40,D_001D2F38,D_001D2F30,D_001D2F28; int func_0011B4F0(...); int func_0011E7E0(...); void _func_0001C990(int p){ int *a=*(int**)(p+0x2c); int *o=*(int**)((char*)a+0x158); if(*(unsigned short*)o==D_003281E4){ if(func_0011B4F0(*(int*)((char*)o+0x50),&D_001D2F4C)&&func_0011B4F0(*(int*)((char*)o+0x50),&D_001D2F40)&&func_0011B4F0(*(int*)((char*)o+0x50),&D_001D2F38)&&func_0011B4F0(*(int*)((char*)o+0x50),&D_001D2F30)&&func_0011B4F0(*(int*)((char*)o+0x50),&D_001D2F28)) func_0011E7E0((int)a); } }

int func_0011E800(int);
void func_0001CA30(int p)
{
    int q = *(int *)(p + 0x2c);
    unsigned char *s = *(unsigned char **)(q + 0x158);
    unsigned int d = *(unsigned int *)&D_003281E4;
    if (*(unsigned short *)s != d ||
        (func_0011B4F0(*(int *)(s + 0x50), &D_001D2F4C) &&
         func_0011B4F0(*(int *)(s + 0x50), &D_001D2F40) &&
         func_0011B4F0(*(int *)(s + 0x50), &D_001D2F38) &&
         func_0011B4F0(*(int *)(s + 0x50), &D_001D2F30) &&
         func_0011B4F0(*(int *)(s + 0x50), &D_001D2F28))) {
        func_0011E800(*(int *)(p + 0x2c));
        if (*(int *)(q + 0x150) != 0x30 && *(unsigned short *)s == *(unsigned int *)&D_003281E4) {
            unsigned int i;
            *(int *)(s + 0x160) = *(int *)(q + 0x14c);
            for (i = 0; i < *(unsigned int *)(s + 0x15c); i++) {
                int o = i * 0x58;
                func_0011D310(*(int *)(s + 0x160) + o, *(int *)(*(int *)(s + 0x50) + 0x2c), (int)(s + 0x54));
                *(int *)(o + 0x20 + *(int *)(s + 0x160)) = 0;
            }
        }
    }
}

int _func_0001CB50(void *arg)
{
    int _func_000688D0(...);
    return _func_000688D0(*(void **)((char *)arg + 0x2c));
}

void func_0001CBF0(int param)
{
  void func_001160B0(...);
  int value = *(int *)(param + 0x110);
  if (value)
    func_001160B0(value);
}

