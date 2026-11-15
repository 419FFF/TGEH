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
extern char _D_001DCCB0[];
extern char _D_001DCC94[];
extern char _D_001DCC78[];
extern char _D_001DCC5C[];
extern char _D_001DCC40[];
extern char _D_001DCC24[];
extern char _D_001D5298[];
extern char _D_001D5280[];
extern int _D_00307D08;
extern int _D_00313B58;
extern int _D_00313ABC;
extern int _D_00324668;
extern int _D_003246D8;
extern int _D_00324694;
extern int _D_003246D4;
extern int func_00103210(const char *, int);
extern void func_00103990(int);
extern void func_0013E469(int, int);

extern volatile int _D_00324700;
extern volatile int _D_00324708;
extern volatile int _D_0032470C;
void func_000EFBE0(char a, int b, int c) { if (a) { _D_00324818 = _D_00313A78; _D_00324814 = _D_00313A7C; _D_00324810 = _D_00313A7A; switch (_D_00313B6C) { case 0: func_0013E469(0x1DCCB0, _D_00324790); func_0013E469(0x1DCC94, _D_00324710); break; case 1: func_0013E469(0x1DCC78, _D_00324790); func_0013E469(0x1DCC5C, _D_00324710); break; case 2: func_0013E469(0x1DCC40, _D_00324790); func_0013E469(0x1DCC24, _D_00324710); break; case 3: func_0013E469(0x1DCCB0, _D_00324790); func_0013E469(0x1DCC94, _D_00324790); break; case 4: func_0013E469(0x1DCCB0, _D_00324790); func_0013E469(0x1DCC94, _D_00324790); break; } } }
