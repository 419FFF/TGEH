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
extern int _D_003245F4;
extern int _D_003245F8;
extern int _D_003245FC;
extern void func_00110330(int, int);
extern float _D_001D29E0;
extern void func_00100BC0(float);
extern void func_00100BE0(float);
extern void func_00100C10(float);
extern int func_00103210(const char *, int);
extern void func_00103990(int);
extern void func_0013E469(int, int);

extern volatile int _D_00324700;
extern volatile int _D_00324708;
extern volatile int _D_0032470C;
void func_000EFBE0(char a, int b, int c) { if (a) { _D_00324818 = _D_00313A78; _D_00324814 = _D_00313A7C; _D_00324810 = _D_00313A7A; switch (_D_00313B6C) { case 0: func_0013E469(_D_00324790, 0x1DCCB0); func_0013E469(_D_00324710, 0x1DCC94); break; case 1: func_0013E469(_D_00324790, 0x1DCC78); func_0013E469(_D_00324710, 0x1DCC5C); break; case 2: func_0013E469(_D_00324790, 0x1DCC40); func_0013E469(_D_00324710, 0x1DCC24); break; case 3: case 4: func_0013E469(_D_00324790, 0x1DCCB0); func_0013E469(_D_00324790, 0x1DCC94); break; } } if (b) { ++_D_00324700; if (_D_00324700 > 2) _D_00324700 = 0; } else { --_D_00324700; if (_D_00324700 < 0) _D_00324700 = 2; } func_00103990(func_00103210(_D_001D5298, 0)); func_00110330(_D_003245F4, _D_00324700 == 0); func_00110330(_D_003245F8, _D_00324700 == 1); func_00110330(_D_003245FC, _D_00324700 == 2); }
