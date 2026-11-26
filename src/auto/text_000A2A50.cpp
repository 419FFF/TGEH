/* 48 functions from 0x000A2620 to 0x000A34DC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A2A50(unsigned *p) {
 extern unsigned D_00312088[][28],D_0031208C[][28];
 extern unsigned char D_0031151C;
 p[0]=D_00312088[D_0031151C/3][0];
 p[1]=D_0031208C[D_0031151C/3][0];
}
