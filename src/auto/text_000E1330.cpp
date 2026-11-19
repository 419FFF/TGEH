/* 4 functions from 0x000E1330 to 0x000E207F, found by Ghidra. */
#include "common.h"
struct V4_E1F20 { int x, y, z, w; };

#pragma optimize("y", on)
char _func_000E1EA0(int value) { extern unsigned char* D_00322478; extern int D_001E55D4, D_001E5600, D_001E5598, D_001E55B4; int p; if (D_00322478[0x1f11]) { p = (int)&D_001E55D4; do { if (*(int*)p == value + 1) return 0; p += 4; } while (p < (int)&D_001E5600); } if (D_00322478[0x1fa1]) { p = (int)&D_001E5598; do { if (*(int*)p == value + 1) return 0; p += 4; } while (p < (int)&D_001E55B4); } if (D_00322478[0x1f59]) { p = (int)&D_001E55B4; do { if (*(int*)p == value + 1) return 0; p += 4; } while (p < (int)&D_001E55D4); } return 1; }
#pragma optimize("", on)

