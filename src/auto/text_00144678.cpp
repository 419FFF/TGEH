/* 35 functions from 0x00144678 to 0x0014562E, found by Ghidra. */
#include "common.h"

int _func_00144A26(...);
int _func_00144A58(...);
int _func_00144A26(unsigned int *, int);
int _func_00144A58(unsigned int *, int);
int _func_00144AA5(unsigned int *bits, int index)
{
    int result = 0;
    int i = index - 1;
    int word = (i + 1) / 32;
    int shift = 31 - ((i + 1) % 32);
    int mask = 1 << shift;
    if (bits[word] & mask) {
        if (_func_00144A26(bits, i + 1) == 0)
            result = _func_00144A58(bits, i);
    }
    bits[word] &= -1 << shift;
    word++;
    if (word < 3) {
        unsigned int *p = bits + word;
        int count = 3 - word;
        do { *p++ = 0; } while (--count != 0);
    }
    return result;
}

void _func_00144B17(int destination, unsigned int *source)
{
    int offset = destination - (int)source;
    int count = 3;
    do {
        *(unsigned int *)((char *)source + offset) = *source;
        source++;
    } while (--count != 0);
}

int _func_00144B32(int *values)
{
    int i = 0;
    do {
        if (values[i] != 0)
            return 0;
        ++i;
    } while (i < 3);
    return 1;
}

#pragma optimize("y", on)
void func_00144D1E(unsigned int a0, unsigned int a1)
{
  extern unsigned int D_002E9270;
  int func_00144BC6(unsigned int, unsigned int, unsigned int);
  func_00144BC6(a0, a1, (unsigned int)&D_002E9270);
}
#pragma optimize("", off)
extern "C" void __cdecl _func_0014581B(void*, void*, int, int, int, int, int);
extern "C" void __cdecl _func_00144D1E(void*, int);
#pragma optimize("y", off)
void __cdecl _func_00144D4A(int param_1, int param_2)
{
    char local_10[12];
    int local_4;
    _func_0014581B(local_10, &local_4, param_2, 0, 0, 0, 0);
    _func_00144D1E(local_10, param_1);
}
#pragma optimize("", on)
void func_00144F42(void) {
    int func_00141FD9(...);
    func_00141FD9(2);
}

int _func_00145125(void) { return 1; }

void _func_001451AC(void)
{
  int _func_00146891(...);
  _func_00146891(-1);
}

int _func_001460D6(...);
int _func_001460DF(...);
int _func_0013EF1F(...);

    int _func_0014544F(void)
{
    int *p = (int *)_func_001460D6();
    *p = 9;
    p = (int *)_func_001460DF();
    *p = 0;
    return _func_0013EF1F() | -1;
}

