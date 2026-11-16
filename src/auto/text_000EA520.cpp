/* 5 functions from 0x000EA520 to 0x000EB33C, found by Ghidra. */
#include "common.h"

void func_000EA520(void) {}

void _func_000EB2C0(void) { extern char D_001DC750,D_001D31B8,D_001D3448; extern int D_003244CC,D_003244C8; int _func_0009C590(const char *); int _func_00115100(int,const char *); int _func_000EA520(int); void _func_000EAE90(void); int object=_func_0009C590(&D_001DC750); if(D_003244CC==-1) D_003244CC=_func_00115100(*(int *)(object+0x98),&D_001D31B8); if(D_003244C8==-1) D_003244C8=_func_00115100(*(int *)(object+0x98),&D_001D3448); _func_000EA520(object); _func_000EAE90(); }

void func_000EB330(void) {
    extern int D_001DC750;
    int func_0009C590(...);
    func_0009C590((int)&D_001DC750);
}
