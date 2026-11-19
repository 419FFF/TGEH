/* 2 functions from 0x0012C8A0 to 0x0012D235, found by Ghidra. */
#include "common.h"

void __cdecl _func_0012D120(int *p)
{
    int _func_0012BF00(...), _func_0012C8A0(...);
    int a;
    if (p[0x4e] == 0) {
        if (p[0x55] >= 0) p[0x52] = p[0x55];
        if (p[0x54] >= 0) p[0x51] = p[0x54];
        _func_0012BF00(p);
        if (p[0x54] == -1) {
            p[0x54] = p[0x51] + 1;
            if (p[0x51] + 1 >= *(int *)(*p + *((unsigned char *)p + p[0x52] + 0x2c) * 8)) {
                p[0x55] = p[0x52] + 1;
                if (p[0x55] >= *(short *)((char *)p + 0x14)) p[0x55] = *(short *)((char *)p + 0x16);
                p[0x54] = 0;
                if (p[0x9a]) ((void (__cdecl *)(int *, int))p[0x9a])(p, p[0x55]);
            }
        }
        if (p[0x55] != p[0x52] && p[0x55] != -1 && *(short *)((char *)p + 0x162) == p[0x52])
            p[0x55] = *(short *)((char *)p + 0x160);
    } else {
        _func_0012C8A0(p);
    }
    p[0x4e]++;
    a = p[0x4e];
    if (!(a < p[0x4f] + p[0x53])) {
        p[0x53] = 0;
        p[0x4e] = 0;
    }
}
