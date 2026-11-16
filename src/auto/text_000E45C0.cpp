/* 3 functions from 0x000E45C0 to 0x000E545F, found by Ghidra. */
#include "common.h"

void func_000E45C0(unsigned int a, int b) {
    volatile unsigned char *s = (volatile unsigned char *)b;
    volatile unsigned int *state = *(volatile unsigned int **)(s + 0xcf4);
    if (state == 0) return;
    unsigned int n = state[2];
    if (n == 0 || n > 15) return;
    state[2] = n;
    (void)a;
}

#pragma optimize("y", on)
char _func_000E4FD0(int unused, int *obj)
{
 extern int _D_001E583C; int _func_00131310(...); int i; int *p;
 if (_D_001E583C != 0x12) return 0;
 if (*(int *)((char *)obj+0xb8c)==0) return 0;
 i=0; p=(int *)((char *)obj+0xd94);
 do { if (*p==0) { char *dst=(char *)obj+i*40; *(int *)(dst+0xd94)=1; _func_00131310(); *(int *)(dst+0xd9c)=*(int *)((char *)obj+0xe0c+i*4); return 1; } ++i; p+=10; } while(i!=3);
 return 0;
}
#pragma optimize("", off)

