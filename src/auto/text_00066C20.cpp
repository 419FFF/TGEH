/* 7 functions from 0x00066C20 to 0x00067B3B, found by Ghidra. */
#include "common.h"

void func_000679B0(int a0) {
    extern int D_002F77A8;
    D_002F77A8 = a0;
}

int func_000679C0(void) {
    extern int D_002F77A8;
    return D_002F77A8;
}
