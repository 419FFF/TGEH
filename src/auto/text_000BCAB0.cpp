/* 6 functions from 0x000BCAB0 to 0x000BD9CC, found by Ghidra. */
#include "common.h"

#pragma optimize("y", off)
extern int func_0011F270(...);
extern float func_00131610(...);
extern void func_0012FCF0(...);
extern void func_001105E0(...);
void func_0012F120(...);
void func_0012E6D0(...);
float func_0012EA60(...);
void func_0012EE00(...);
extern void func_0012F120(unsigned*);
extern void func_0012E6D0(unsigned*, float*, float*);
extern float func_0012EA60(unsigned*);
extern void func_0012EE00(unsigned*, unsigned*, unsigned*);
void _func_000BCAB0(u32 *out, float *a, float *b, float t)
{
    float p[4];
    u32 m[16];
    u32 identity[4];
    u32 intermediate[16];
    u32 composed[16];

    identity[0] = 0.0f;
    identity[1] = 1.0f;
    identity[2] = 0.0f;
    identity[3] = 0.0f;

    p[0] = (a[0] - b[0]) * t + b[0];
    p[1] = (a[1] - b[1]) * t + b[1];
    p[2] = (a[2] - b[2]) * t + b[2];
    p[3] = 1.0f;

    func_0012F120(m);
    func_0012E6D0(intermediate, b, p);
    func_0012EA60(intermediate);
    func_0012EE00(m, identity, intermediate);
    func_0012EA60(m);
    func_0012EE00(composed, intermediate, m);
    func_0012EA60(composed);

    for (int i = 0; i < 4; i++) {
        out[i] = (u32)m[i];
    }
}
#pragma optimize("", on)
extern int func_0011F270(...); extern float func_00131610(...); extern void func_0012F120(...); extern void func_0012FCF0(...); extern void func_001105E0(...); void func_000BD3B0(int param_1,int param_2,int param_3) { int local_70,local_6c,local_68,local_60[2],local_58; char local_50[48]; int local_20,local_1c,local_18; func_0011F270(param_2+4,param_3,&local_70,local_60); float f=func_00131610(local_60[0],local_58); func_0012F120(local_50); func_0012FCF0(local_50,f); local_20=local_70; local_1c=local_6c; local_18=local_68; func_001105E0(*(int*)(param_1+0x2c),local_50,1); }
#pragma optimize("", on)
