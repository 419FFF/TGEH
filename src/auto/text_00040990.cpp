/* 1 function from 0x00040990 to 0x00042148, found by Ghidra. */
#include "common.h"
extern float _D_001D2D4C;
extern float _D_001E461C;
extern float _D_001D2C00;
extern int _D_002EEC00;
extern int _D_002EECA0;

void _func_00040990(int a, int *b) {
    char frame[0x3b4];
    float f = *(float*)((char*)b + 0x370);
    frame[15] = 0;
    if (f > _D_001D2D4C) {
        f += _D_001E461C;
        *(float*)((char*)b + 0x370) = f;
        if (f > _D_001D2C00) *(float*)((char*)b + 0x370) = -1.0f;
    }
}
