/* 8 functions from 0x00106340 to 0x00106AFE, found by Ghidra. */
#include "common.h"

void func_00106880(void) {
    extern int D_0032511C;
    extern int D_00325120;
    extern int D_00325124;
    extern char D_00325128;
    extern int D_0032512C;
    D_0032511C = 0;
    D_00325120 = 0;
    D_00325124 = 0;
    D_00325128 = 1;
    D_0032512C = -1;
}

void func_00106410(int,float*,int*);
void func_00106AC0(int p, int a, int *out) { int func_00106410(...); volatile int xy[2]; func_00106410(*(int*)(p+4),a,(int*)xy); out[0]=xy[0]-*(int*)(p+0x14);out[1]=xy[1]-*(int*)(p+0x18);}

