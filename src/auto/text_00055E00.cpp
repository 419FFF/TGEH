/* 5 functions from 0x00055E00 to 0x00056D4C, found by Ghidra. */
#include "common.h"

#pragma optimize("y", on)
void _func_00055E00(int arg) { extern int D_00307D10; extern void func_000487A0(int, int); extern void func_00116FB0(int); func_000487A0(D_00307D10, *(int*)(*(int*)(arg + 0x110) + 0x68)); func_00116FB0(*(int*)(arg + 0x110)); }
