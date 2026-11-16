/* 20 functions from 0x00138E80 to 0x00139D80, found by Ghidra. */
#include "common.h"

void func_001392D0(void) {
    extern int D_00332ACC;
    int __stdcall func_00109C1F(int);
    func_00109C1F(D_00332ACC);
}

float _func_00139440(void *p) {
    extern volatile float _D_001D27B8;
    if (p == 0) return _D_001D27B8;
    return *(float *)((char *)p + 0xbc);
}

