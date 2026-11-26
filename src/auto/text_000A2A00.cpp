/* 48 functions from 0x000A2620 to 0x000A34DC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A2A00(unsigned *p) {
 extern unsigned D_00312080[][28],D_00312084[][28];
 extern unsigned char D_0031151C;
 p[0]=D_00312080[D_0031151C/3][0];
 p[1]=D_00312084[D_0031151C/3][0];
}
