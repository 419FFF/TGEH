/* 15 functions from 0x0005CFA0 to 0x0005DE21, found by Ghidra. */
#include "common.h"

void func_0005D3F0(void) {
    int func_00063780(...);
    func_00063780();
}

void func_0005D400(void) {
    int func_00063360(...);
    func_00063360();
}

extern float _D_001D2BC0;
extern float _D_002EEE80;
void _func_0005DA70(float value)
{
    double result = value;
    result = result * _D_001D2BC0;
    _D_002EEE80 = (float)result;
}

