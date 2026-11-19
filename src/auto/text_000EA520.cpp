/* 5 functions from 0x000EA520 to 0x000EB33C, found by Ghidra. */
#include "common.h"

void func_000EA520(void) {}

void __cdecl _func_000EAD80(void)
{
  extern int _D_00323F20[], _D_00323F24, _D_00323F28, _D_0032417C, _D_00324194, _D_00324198, _D_00324190, _D_00324560, _D_00324510, _D_003241FC, _D_00324200, _D_00324514, _D_00308158;
  extern char _D_001DC750[], _D_001DC73C[], _D_001DC72C[], _D_001DC720[], _D_001DC718[], _D_001DC70C[], _D_003244D0[], _D_001D2A30[], _D_001D5108[];
  int _func_0009C590(...), _func_001060A0(...), _func_0009CBF0(...), _func_0004FA80(...), _func_00056D50(...), _func_0009CBE0(...), _func_0009D3E0(...), _func_00110060(...), _func_0009C7A0(...);
  int s, i;
  s = _func_0009C590(_D_001DC750);
  for (i = 0; i < 0x180; i++) _D_00323F20[i] = 0;
  _D_00323F24 = _func_001060A0(_D_001DC73C);
  _D_0032417C = _func_0009CBF0(_D_00308158, _D_001DC72C);
  _D_0032417C = _D_0032417C + 4;
  _D_00323F20[0] = 0;
  _func_0004FA80(s, &_D_00323F28);
  _D_00323F28 = 0;
  _func_00056D50(s, &_D_00323F28);
  _D_00324194 = _func_0009CBE0(_D_001DC720);
  _D_00324198 = _func_0009CBE0(_D_001DC718);
  _D_00324190 = 0;
  _D_00324560 = _func_0009CBE0(_D_001DC70C);
  _func_0009D3E0(_D_00324194);
  _func_0009D3E0(_D_00324198);
  _func_00110060(*(int *)(s + 0x2c), _D_003244D0);
  _D_00324510 = 0;
  _D_003241FC = *(int *)_func_0009C7A0(_D_00324194, _D_001D2A30, 0);
  _D_00324200 = _func_0009C7A0(_D_00324194, _D_001D5108, 0);
  _D_00324514 = **(int **)(*(int *)(s + 0x2c) + 0x2c);
}

void _func_000EB2C0(void) { extern char D_001DC750,D_001D31B8,D_001D3448; extern int D_003244CC,D_003244C8; int _func_0009C590(const char *); int _func_00115100(int,const char *); int _func_000EA520(int); void _func_000EAE90(void); int object=_func_0009C590(&D_001DC750); if(D_003244CC==-1) D_003244CC=_func_00115100(*(int *)(object+0x98),&D_001D31B8); if(D_003244C8==-1) D_003244C8=_func_00115100(*(int *)(object+0x98),&D_001D3448); _func_000EA520(object); _func_000EAE90(); }

void func_000EB330(void) {
    extern int D_001DC750;
    int func_0009C590(...);
    func_0009C590((int)&D_001DC750);
}
