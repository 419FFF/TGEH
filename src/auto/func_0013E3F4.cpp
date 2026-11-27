/* __ftol2 - float to int conversion using x87 FPU */
#include "common.h"

long long __ftol2(float in) {
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
