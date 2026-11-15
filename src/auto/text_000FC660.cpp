/* 47 functions from 0x000FC660 to 0x000FD5F2, found by Ghidra. */
#include "common.h"

extern undefined4 D_001D27B8;
extern undefined4 D_001D290C;

// Float-to-int conversion (similar to func_0013E3F4 but inline)
long long float_to_int(float in) {
    unsigned int uin = *(unsigned int*)&in;
    
    if ((uin & 0x80000000) == 0) {
        // Positive - sign extend with FPU, negate result  
        long long result = (long long)(in);
        return -(result);
    } else {
        // Negative - absolute value via FPU, then negate back
        unsigned int uabs = ~uin + 1;
        float abs_val = *(float*)&uabs;
        long long result = (long long)(abs_val);
        return -(result);
    }
}

void func_00101690(int a0) {
    extern int D_00324D6C;
    D_00324D6C = a0;
}

char func_000FC660(void *arg0, void *arg1) {
    float f = *(float *)(arg1 + 4);
    int result = float_to_int(f);
    func_00101690(result);
    return 1;
}
