/* 4 functions from 0x000E1330 to 0x000E207F, found by Ghidra. */
#include "common.h"
struct __declspec(align(16)) V4_E1F20 { int x, y, z, w; };

#pragma optimize("y", on)
char _func_000E1EA0(int value) { extern unsigned char* D_00322478; extern int D_001E55D4, D_001E5600, D_001E5598, D_001E55B4; int p; if (D_00322478[0x1f11]) { p = (int)&D_001E55D4; do { if (*(int*)p == value + 1) return 0; p += 4; } while (p < (int)&D_001E5600); } if (D_00322478[0x1fa1]) { p = (int)&D_001E5598; do { if (*(int*)p == value + 1) return 0; p += 4; } while (p < (int)&D_001E55B4); } if (D_00322478[0x1f59]) { p = (int)&D_001E55B4; do { if (*(int*)p == value + 1) return 0; p += 4; } while (p < (int)&D_001E55D4); } return 1; }

extern unsigned char *D_00322478;
void func_00130620(void *, void *, void *, int);
void func_00011CB0(void *, void *);
void func_001105E0(int, void *, int);
void func_000E1F20(char *p)
{
    char *g = (char *)D_00322478;
    V4_E1F20 v;
    char buf[76];
    char c;
    v.w = 0x3f800000;
    p[0x126] = (p[0x126] + 1) % p[0x127];
    c = p[p[0x126] + 0x120];
    if (c == 0) {
        v = *(V4_E1F20 *)(g + 0x20bc);
    } else if (c < 0x1a) {
        v = *(V4_E1F20 *)(g + c * 0x130 - 0xe0);
    } else if (c == 0x1b) {
        v.x = *(int *)(g + 0x1f04); v.y = *(int *)(g + 0x1f08); v.z = *(int *)(g + 0x1f0c);
    } else if (c == 0x1c) {
        v.x = *(int *)(g + 0x1f4c); v.y = *(int *)(g + 0x1f50); v.z = *(int *)(g + 0x1f54);
    } else if (c == 0x1d) {
        v.x = *(int *)(g + 0x1f94); v.y = *(int *)(g + 0x1f98); v.z = *(int *)(g + 0x1f9c);
    } else {
        v = *(V4_E1F20 *)(g + (c + 0x287) * 12);
    }
    v.y = *(int *)(p + 0x44);
    func_00130620(p + 0xa0, p + 0x40, &v, 0);
    func_00011CB0(buf, p + 0xa0);
    func_001105E0(*(int *)(p + 0x94), buf, 0);
}

#pragma optimize("", on)

