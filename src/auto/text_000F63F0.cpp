/* 1 function from 0x000F63F0 to 0x000F7788, found by Ghidra. */
#include "common.h"

void _func_000F63F0(void) { __declspec(align(16)) volatile char frame[256]; frame[0] = 0; frame[1] = 0; volatile int state = 0; switch (state) { case 0: state = 1; break; case 1: state = 2; break; case 2: state = 3; break; default: state = 0; } }

