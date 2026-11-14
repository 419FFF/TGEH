/* 27 functions from 0x00121DB0 to 0x00122D6E, found by Ghidra. */
#include "common.h"

void func_001226B0(char a0) {
    extern char D_0032F754;
    D_0032F754 = a0;
}

char func_001226C0(void) {
    extern char D_0032F754;
    return D_0032F754;
}
