/* 6 functions from 0x000BCAB0 to 0x000BD9CC, found by Ghidra. */
#include "common.h"

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
void func_0012F120(unsigned*);
void func_0012E6D0(unsigned*, float*, float*);
float func_0012EA60(unsigned*);
void func_0012EE00(unsigned*, unsigned*, unsigned*);
#pragma optimize("y", on)
void _func_000BCAB0(float *out, float *a, float *b, float t)
{
    struct M { float m[16]; };
    float p[4];
    float up[4];
    __declspec(align(16)) M m;

    up[0] = 0.0f;
    up[1] = 1.0f;
    up[2] = 0.0f;
    up[3] = 0.0f;
    p[0] = (a[0] - b[0]) * t + b[0];
    p[1] = (a[1] - b[1]) * t + b[1];
    p[2] = (a[2] - b[2]) * t + b[2];

    func_0012F120((unsigned *)m.m);
    func_0012E6D0((unsigned *)&m.m[8], b, p);
    func_0012EA60((unsigned *)&m.m[8]);
    func_0012EE00((unsigned *)&m.m[0], (unsigned *)up, (unsigned *)&m.m[8]);
    func_0012EA60((unsigned *)&m.m[0]);
    func_0012EE00((unsigned *)&m.m[4], (unsigned *)&m.m[8], (unsigned *)&m.m[0]);
    func_0012EA60((unsigned *)&m.m[4]);
    m.m[12] = p[0];
    m.m[13] = p[1];
    m.m[14] = p[2];

    *(M *)out = m;
}
#pragma optimize("", on)
extern int func_0011F270(...); extern float func_00131610(...); extern void func_0012F120(...); extern void func_0012FCF0(...); extern void func_001105E0(...); void func_000BD3B0(int param_1,int param_2,int param_3) { int local_70,local_6c,local_68,local_60[2],local_58; char local_50[48]; int local_20,local_1c,local_18; func_0011F270(param_2+4,param_3,&local_70,local_60); float f=func_00131610(local_60[0],local_58); func_0012F120(local_50); func_0012FCF0(local_50,f); local_20=local_70; local_1c=local_6c; local_18=local_68; func_001105E0(*(int*)(param_1+0x2c),local_50,1); }
#pragma optimize("", on)
