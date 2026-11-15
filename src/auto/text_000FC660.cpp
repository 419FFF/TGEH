/* 47 functions from 0x000FC660 to 0x000FD5F2, found by Ghidra. */
#include "common.h"

extern undefined4 D_001D27B8;
extern undefined4 D_001D290C;

// Functions called from here (defined elsewhere)
extern char func_0013E3F4(float);
extern void func_00101690(int);

char func_000FC660(void *arg0, void *arg1) {
    float f = *(float *)(arg1 + 4);
    int result = func_0013E3F4(f);
    func_00101690(result);
    return 1;
}
