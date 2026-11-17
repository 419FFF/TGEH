/* 10 functions from 0x000BBB90 to 0x000BCAA4, found by Ghidra. */
#include "common.h"

#pragma optimize("y", on)
void func_000BBB90(void) {}

int _func_000BC340(int a, int b, int c, int *p) { extern int D_00314B30; *p = D_00314B30; return 1; }
void func_000BC450(void) {
    int func_000B6510(...);
    func_000B6510(16, 0);
}

unsigned char func_000BC460(int *out) {
    extern int D_00314B28, D_00314B24;
    if (D_00314B28 != 2) return 0;
    if (D_00314B24 == 0) {
        D_00314B28 = 0;
        return 0;
    } else {
        *out = 0x3f800000;
        return 1;
    }
}

void func_000BC990(int a, int b) {
 int func_0009C590(...);
 int func_00110060(...);
 int func_001105E0(...);
 char local[64];
 int p=func_0009C590(b);
 func_00110060(*(int *)(p+0x2c), local);
 func_001105E0(*(int *)(a+0x2c), local, 1);
}
#pragma optimize("y", on)
