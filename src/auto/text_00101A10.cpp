/* 12 functions from 0x00101A10 to 0x00102870, found by Ghidra. */
#include "common.h"

void func_00101A10(int a, int b, int c) {}

extern float D_00324D08;
extern float D_00324D0C;
extern unsigned char D_001E5EC9;
extern int D_00324D34;
int func_0013E3F4(float);
int func_00128870(int, int);
int func_00128840(int, float);
void func_00110760(int);
void func_00102020(int param_1, int param_2, float param_3)
{
    unsigned short flags = *(unsigned short *)(*(int *)(param_1 + 0x78) + 0x32);
    if ((flags & 0x80) == 0) {
        float factor = D_00324D0C;
        if (flags & 0x100)
            factor = D_00324D08;
        param_3 = factor * param_3;
    }
    func_00128840(*(int *)(param_1 + 0xb8), param_3);
}

void func_00102090(char a0) {
    extern char D_001E6230;
    D_001E6230 = a0;
}

void func_00102470(void) {
    int func_001021C0(...);
    func_001021C0();
}

void func_001027B0(int param_1)
{
    if (D_001E5EC9 == 0) {
        func_00110760(*(int *)(param_1 + 0x2c));
        return;
    }
    int *p = (int *)param_1;
    int value = *(int *)((char *)p + 0xb8);
    if (value)
        func_00110760(value);
    p = (int *)((char *)p + 0xbc);
    int count = 4;
    do {
        if (*p)
            func_00110760(*p);
        ++p;
    } while (--count);
}

unsigned char func_00102810(int param_1)
{
    int obj = *(int *)(param_1 + 0x78);
    if (((*(unsigned char *)(obj + 0x32) >> 3) & 1) != 0)
        return 1;
    int id = *(int *)(param_1 + 0x84);
    if (!id)
        return 1;
    int table = D_00324D34;
    if (!table)
        return 1;
    unsigned int count = *(unsigned int *)(table + 0xe4);
    unsigned int index = 0;
    while (index < count) {
        int entry = table + 0xe8 + index * 8;
        if (*(unsigned int *)(entry + 4) < *(unsigned char *)(obj + 0x31))
            return 0;
        if (id == *(int *)entry)
            return 1;
        ++index;
    }
    return 0;
}

