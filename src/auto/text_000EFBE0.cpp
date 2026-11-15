/* 2 functions from 0x000EFBE0 to 0x000F03A0, found by Ghidra. */
#include "common.h"
extern short _D_00313A78;
extern short _D_00313A7A;
extern short _D_00313A7C;
extern short _D_00324818;
extern short _D_00324810;
extern short _D_00324814;
extern int _D_00313B6C;
extern int _D_00324790;
extern int _D_00324710;
extern void func_0013E469(int, int);

extern volatile int _D_00324700;
extern volatile int _D_00324708;
extern volatile int _D_0032470C;
void func_000EFBE0(char a, int b, int c) { if (a) { _D_00324708++; if (_D_00324708 == 5) _D_00324708 = 0; } else { _D_0032470C++; if (_D_0032470C == 5) _D_0032470C = 0; } if (_D_00324708 == 1) { if (b == 0) _D_00324700--; else if (b == 1) _D_00324700++; else _D_00324700 = c; } if (_D_00324700 > 2) _D_00324700 = 0; if (_D_00324700 < 0) _D_00324700 = 2; }
