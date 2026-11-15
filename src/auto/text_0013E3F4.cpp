/* 2 functions from 0x0013E3F4 to 0x0013E4C1, found by Ghidra. */
#include "common.h"

long long func_0013E3F4(float in) {
    unsigned int uin = *(unsigned int*)&in;
    
    if ((uin & 0x80000000) == 0) {
        // Positive - use FPU to convert float to integer (with sign extension)
        long long result = (long long)in;
        return -(result);
    } else {
        // Negative - absolute value via FPU, then negate back
        unsigned int uabs = ~uin + 1;
        float abs_val = *(float*)&uabs;
        long long result = (long long)abs_val;
        return -(result);
    }
}
