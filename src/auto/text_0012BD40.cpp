/* 3 functions from 0x0012BD40 to 0x0012C89C, found by Ghidra. */
#include "common.h"

#pragma optimize("y", on)
void func_0012BD40(char* s, int unused, char* c)
{
    int __ftol2(...);
    int func_001314B0(...);
    extern float D_001DF738, D_001DF734, D_001DF730, D_001DF72C;
    int a = *(int*)(s + 0x18);
    int b = *(int*)(s + 8);
    int t = b + a;
    unsigned char f;
    if (t == 0)
        s[2] &= 0xfe;
    f = s[2];
    if (f & 8) {
        *(int*)(s + 0xb4) = 0;
        s[0xb8] |= 3;
    }
    if (f & 2) {
        double w = (double)(*(int*)(s + 0xc) + *(int*)(s + 0x14));
        w = w * (double)*(int*)(s + 0x30);
        *(int*)(s + 0xac) = (int)(w * *(int*)(s + 0x54) * *(int*)(c + 0x130) * D_001DF738);
    }
    if (f & 4) {
        int e = *(int*)(s + 0x10);
        int d = e - 0x80;
        int m = d >> 31;
        int v = 0x80 - ((d ^ m) - m);
        v = (v / 32) * (*(int*)(s + 0x48) - 0x20) + e;
        if (v < 0) v = 0;
        else if (v > 0xff) v = 0xff;
        *(short*)(s + 0xb0) = (short)v;
    }
    if (f & 1) {
        if (c[0x26] & 1) {
            func_001314B0(2.0, (D_001DF734 - b + a) * D_001DF730);
            *(int*)(s + 0xa8) = (int)((double)D_001DF72C);
        } else {
            *(int*)(s + 0xa8) = (int)(0xda7600 / (long long)t);
        }
    }
    if (s[2] & 0x20) {
        s[0xb8] |= 1;
        *(int*)(s + 0xac) = 0;
    }
}
#pragma optimize("", on)

void func_0012BF00(int* p){volatile int x[10]; x[0]=0; x[9]=1; x[1]=p[0x148]; x[2]=p[0x150]; x[3]=p[0x154]; if(p[6]<=0)return; x[4]=p[0]; x[5]=p[1]; x[6]=p[2];}
