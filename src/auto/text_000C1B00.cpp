/* 3 functions from 0x000C1B00 to 0x000C1E4B, found by Ghidra. */
#include "common.h"
struct Vec3_C1BD0 { float x, y, z; };

#pragma optimize("y", on)
void _func_000C1E00(int param_1) { extern int func_00131310(void); unsigned int v; unsigned int same; do { v = func_00131310() & 3; same = 0; if (*(unsigned int*)(param_1 + 0x2ec) == v) same = 1; if (*(unsigned int*)(param_1 + 0x2f0) == v) same++; } while (same >= 2U); *(unsigned int*)(param_1 + 0x2ec + *(int*)(param_1 + 0x2f4) * 4) = v; *(int*)(param_1 + 0x2f4) = (*(int*)(param_1 + 0x2f4) - 1) & 1; }
#pragma optimize("", on)
