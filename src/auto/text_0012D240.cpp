/* 3 functions from 0x0012D240 to 0x0012DFC4, found by Ghidra. */
#include "common.h"

int __cdecl _func_0012DF90(int param_1)
{
    extern int _D_00331B24;
    int i;
    int value = 0;
    for (i = param_1 - 1; i >= 0; --i)
        value = value * 0x100 + *(unsigned char *)(_D_00331B24 + i);
    _D_00331B24 += param_1;
    return value;
}
