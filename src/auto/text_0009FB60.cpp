/* 8 functions from 0x0009FB60 to 0x000A0778, found by Ghidra. */
#include "common.h"

int _func_000B5650(int); void _func_0009FB60(void) { volatile int v=*(int*)0x00311548; if(!v)return; int a=_func_000B5650(12); int b=_func_000B5650(8); a|=b; }

float func_000A05A0(void) {
    extern float D_003115CC;
    return D_003115CC;
}

int func_000A05B0(void) {
    extern int D_00311548;
    return D_00311548;
}

float func_000A05C0(void) {
    extern float D_00311558;
    return D_00311558;
}

extern int _func_001031C0(int, const void *);
extern int _func_00103480(int, int);
extern int _func_00103990(int, int);
extern int _func_001031A0(int, int);
extern int _func_00102E80(int);
extern int D_00307DF8;
extern unsigned char D_003115D8;
extern char D_001D750C, D_001D486C, D_001D4858;
void _func_000A05D0(char param_1)
{
    int a = _func_001031C0(D_00307DF8, &D_001D750C);
    int b = _func_001031C0(D_00307DF8, &D_001D486C);
    int c = _func_001031C0(D_00307DF8, &D_001D4858);
    _func_00103480(c, 1);
    _func_00103480(b, 1);
    _func_00103480(a, 1);
    if (!D_003115D8) {
        if (!param_1)
            goto done;
        _func_00103990(a, 0);
        _func_00103990(b, 1);
        _func_001031A0(b, 0x3f800000);
        if (!D_003115D8)
            goto done;
    }
    if (!param_1) {
        _func_00102E80(b);
        _func_00103990(c, 0);
        _func_001031A0(c, 0x3f800000);
    }
done:
    D_003115D8 = param_1;
}

void func_000A0690(char a0) {
    extern char D_001E4630;
    D_001E4630 = a0;
}

char func_000A06A0(void) {
    extern char D_001E4630;
    return D_001E4630;
}

void _func_000A06B0(void) { extern int _D_00311554; extern unsigned char _D_003115D8; extern unsigned char _D_001E4630; extern char _D_001D7534; extern int _D_00308158; extern char _D_001D29C7,_D_001D7520; extern int _D_00311550,_D_0031154C,_D_00311548,_D_003115C8,_D_003115D4,_D_003115CC,_D_00311530,_D_00311534,_D_00311544,_D_003115AC,_D_003115D0,_D_00311538,_D_003115C0; extern int _func_00083200(int); extern int _func_0013E469(void*,void*,int); extern int _func_00110300(int,void*,int); extern int _func_00131990(void*); extern int _func_0011BF40(void*,int); extern int _func_0011BDD0(int,int); char local[64]; _D_00311554=0; _D_003115D8=0; _D_001E4630=1; _func_00083200(0); _func_0013E469(local,&_D_001D7534,1); _D_00311550=_func_00110300(*((int*)_D_00308158+11),local,0); _D_0031154C=0; _D_00311548=0; _func_00131990(&_D_001D29C7); _D_003115C8=_func_0011BF40(&_D_001D7520,0); _func_00131990(&_D_001D29C7); _D_00311538=_func_0011BDD0(_D_003115C8,0); _D_003115D4=0; _D_003115CC=0; _D_00311530=0; _D_00311534=0; _D_00311544=0; _D_003115AC=0; _D_003115D0=0; _D_003115C0=0xaf; }

