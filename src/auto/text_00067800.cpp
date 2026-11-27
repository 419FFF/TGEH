/* 7 functions from 0x00066C20 to 0x00067B3B, found by Ghidra. */
#include "common.h"

extern float D_001D27B0, D_00329234, D_002F7790, D_002F7788, D_001D4210, D_002F77A4, D_002F7780, D_001D5724, D_001D29E0, D_001D27B8;

extern "C" void* __cdecl memset(void*,int,unsigned int);
#pragma optimize("p", on)

#pragma optimize("", on)

void __cdecl _func_00067800(void)
{
    extern int _D_002F77A8, _D_00313ABC, _D_00313B40;
    extern float _D_002F7794, _D_002F7780, _D_002F7788, _D_002F7790, _D_002F77A4;
    extern float _D_001D2BF4, _D_001D27B0, _D_001D27F4, _D_001D2E24, _D_001D29E0, _D_001D27B8;
    extern char _D_002F778C;
    extern char *_D_00307D08;
    extern void __cdecl _func_000667E0(void);
    extern void __cdecl _func_000669E0(void);
    extern void __cdecl _func_000ACFB0(int, int);
    switch (_D_002F77A8) {
    case 1:
        _func_000667E0();
        _D_002F77A8 = 2;
        return;
    case 2:
        _D_002F7794 = _D_002F7794 + _D_001D2BF4;
        if (_D_002F7794 > _D_001D27B0)
            _D_002F7794 = 1.0f;
        _D_002F77A4 = _D_002F7780;
        _D_002F7780 = _D_002F7780 - _D_001D27F4;
        if (_D_002F778C) {
            _D_002F77A4 = 0.0f;
            _D_002F7780 = 0.0f;
            _D_002F7788 = 0.0f;
            _D_002F7790 = 0.0f;
            _D_002F77A8 = 6;
            _D_002F778C = 0;
        }
        break;
    case 3:
        _func_000669E0();
        _D_002F77A8 = 4;
        _func_000ACFB0(0xb, 0);
        break;
    case 5:
        _D_002F7794 = _D_002F7794 - _D_001D29E0;
        if (_D_002F7794 < _D_001D27B8) {
            _D_002F77A8 = 3;
            _D_002F7794 = 0.0f;
        }
        break;
    case 6:
        _D_002F77A4 = _D_002F7780;
        _D_002F7780 = _D_002F7780 + _D_001D27F4;
        if (_D_002F7780 > _D_001D2E24) {
            _D_002F7790 = _D_002F7788;
            _D_002F7788 = _D_002F7788 + _D_001D27F4;
        }
        if (_D_002F778C) {
            char *p = _D_00307D08;
            if (!p || *(short *)(*(char **)(p + 0x10) + _D_00313ABC * 0x18 + 0x10) != 0
                || *(short *)(*(char **)(p + 0x10) + _D_00313B40 * 0x18 + 0x10) != 0)
                _D_002F77A8 = 5;
        }
        break;
    }
}

void func_000679B0(int a0) {
    extern int D_002F77A8;
    D_002F77A8 = a0;
}

int func_000679C0(void) {
    extern int D_002F77A8;
    return D_002F77A8;
}

void func_0012E700(void*, void*, void*);
void func_0012F810(void*, void*, void*);
float func_00131210(float);
float func_0012E910(void*);
unsigned char func_000679D0(char* a, void* b)
{
    float v[3];
    char tmp[16];
    func_0012E700(tmp, b, a + 0x48);
    func_0012F810(v, tmp, a);
    switch (*(int*)(a + 0x44)) {
    case 1:
        return func_00131210(v[0]) < *(float*)(a + 0x54) && func_00131210(v[2]) < *(float*)(a + 0x58);
    case 2: {
        float r = *(float*)(a + 0x54);
        return func_0012E910(v) < r * r;
    }
    case 3:
        return func_00131210(v[0]) < *(float*)(a + 0x54) && func_00131210(v[1]) < *(float*)(a + 0x58) && func_00131210(v[2]) < *(float*)(a + 0x5c);
    case 4:
        return v[0] * v[0] + v[2] * v[2] < *(float*)(a + 0x54) * *(float*)(a + 0x54) && func_00131210(v[1]) < *(float*)(a + 0x58);
    }
    return 0;
}

int _func_00067B00(const char *param_1) { int _func_000F91D0(const char *); char local[128]; char *dst=local; while(*param_1 && *param_1!='_'){ *dst++=*param_1++; } *dst=0; return *(int *)(_func_000F91D0(local)+0xe0); }

