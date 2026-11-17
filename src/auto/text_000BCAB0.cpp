/* 6 functions from 0x000BCAB0 to 0x000BD9CC, found by Ghidra. */
#include "common.h"

extern void func_0012F120(unsigned*);
extern void func_0012E6D0(unsigned*, float*, float*);
extern float func_0012EA60(unsigned*);
extern void func_0012EE00(unsigned*, unsigned*, unsigned*);
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
extern void func_0011F270(int, int, float *, float *);
extern float func_00131610(float, float);
extern void func_0012FCF0(float *, float);
extern void func_001105E0(int, float *, int);
#pragma optimize("y", on)
void func_000BD3B0(int param_1, int param_2, int param_3)
{
    float f;
    __declspec(align(16)) float pos[4];
    __declspec(align(16)) float dir[4];
    __declspec(align(16)) float m[16];

    func_0011F270(param_2 + 4, param_3, pos, dir);
    f = func_00131610(dir[0], dir[2]);
    func_0012F120((unsigned *)m);
    func_0012FCF0(m, f);
    m[12] = pos[0];
    m[13] = pos[1];
    m[14] = pos[2];
    func_001105E0(*(int *)(param_1 + 0x2c), m, 1);
}
#pragma optimize("", on)
