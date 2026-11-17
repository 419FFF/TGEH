/* 6 functions from 0x000BCAB0 to 0x000BD9CC, found by Ghidra. */
#include "common.h"

static inline bool float_equal(float a, float b) { return a == b; }

struct S_BD6E0 {
    int a0;
    int a4;
    int state;
    float f0c;
    float f10;
    float f14;
    int h18;
    int h1c;
    int h20;
    int h24;
};

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

extern int D_00314CF4;
extern int D_00314CF0;
extern float D_00314CF8;
extern const float D_001D314C;
extern const float D_001D27EC;
extern const float D_001D27B0;
extern const float D_001D27B8;
extern const float D_001D286C;
extern const float D_001D2BC0;
extern int *D_00314BB8[];
extern float D_00314CE0[];
extern float D_002EEC10[];
extern float D_00314CD8;
extern float D_00314CD4;
extern float D_00314CDC;
extern float D_00314C7C[][3];
extern float D_00314CA0[];
extern float D_00314CB8[];
extern void func_00110060(int, float *);
extern void _func_000BCAB0(float *, float *, float *, float);
extern float func_00131230(float);
extern void func_00011E30(float *, float *, float *);
extern float D_00314C80[][3];
extern float D_00314C84[][3];
#pragma optimize("y", on)
void func_000BCBB0(void)
{
    float f;
    float v[3];
    __declspec(align(16)) float m[16];
    __declspec(align(16)) float x[16];
    float s;
    int from, to;

    if (D_00314CF4 == 2) {
        D_00314CF8 -= D_001D314C;
        if (D_00314CF8 < D_001D27EC)
            D_00314CF8 = 0.5f;
        func_00110060(D_00314BB8[D_00314CF0 * 12][0x2c / 4], x);
        _func_000BCAB0(D_002EEC10, D_00314CE0, &x[12], D_00314CF8);
        return;
    }
    if (D_00314CD8 < D_00314CD4) {
        D_00314CD8 = D_00314CDC + D_00314CD8;
        if (D_00314CD8 > D_001D27B0)
            D_00314CD8 = 1.0f;
    }
    if (D_00314CD8 > D_00314CD4) {
        D_00314CD8 = D_00314CD8 - D_00314CDC;
        if (D_00314CD8 < D_001D27B8)
            D_00314CD8 = 0.0f;
    }
    f = D_00314CD8;
    func_0012F120((unsigned *)m);
    s = (func_00131230((f - D_001D27EC) * D_001D286C) + D_001D27B0) * D_001D27EC;
    from = D_00314CF0;
    to = D_00314CF4;
    v[2] = 4.88692191f;
    m[12] = (D_00314C7C[to][0] - D_00314C7C[from][0]) * s + D_00314C7C[from][0];
    m[13] = (D_00314C80[to][0] - D_00314C80[from][0]) * s + D_00314C80[from][0];
    m[14] = (D_00314C84[to][0] - D_00314C84[from][0]) * s + D_00314C84[from][0];
    v[0] = (D_00314CA0[to] - D_00314CA0[from]) * s + D_00314CA0[from];
    v[1] = ((D_00314CB8[to] - D_00314CB8[from]) * s * f + D_00314CB8[from]) * D_001D2BC0;
    func_00011E30(m, D_002EEC10, v);
}
#pragma optimize("", on)

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

extern float D_00314CC4;
extern float D_00314CC8;
extern float D_00314CCC;
extern float D_00314CD0;
extern int D_00314C74;
extern int D_00314BC0[];
extern int D_00314BE4[];
extern int D_00314BF0;
extern int D_00314C20;
extern int D_00314BB4;
extern int D_00314BB0;
extern char D_00314C78;
extern int D_00307DF8;
extern const float D_001D605C;
extern const float D_001D95F0;
extern char D_001D95F4[];
extern char D_001D95E4[];
extern void func_000A1D10(int, int, int, int, float, int);
extern int func_000A1F50(int);
extern float func_000A2310(int);
extern void func_000BC990(int *, char *);
extern int func_001031C0(int, char *, int);
extern void func_00103990(int);
extern void func_001007B0(int);
extern char D_0000FFFF;
extern void func_000A1D10(int, int, int, void *, float, int);
extern void func_000BC990(int, char *);
extern int func_001031C0(int, char *);
extern void func_00103990(int, int);
void func_000BD440(int *p)
{
    float d;

    switch (p[1]) {
    case 0:
        func_000A1D10(p[6], 2, 0, &D_0000FFFF, 24.0f, 0);
        p[1] = 5;
        return;
    case 1:
        if (D_00314CC4 > D_00314CD0) {
            func_000A1D10(p[4], 1, 0, &D_0000FFFF, 24.0f, 0);
            p[1] = 2;
        }
        return;
    case 2:
        if (D_00314CC4 > D_00314CCC)
            p[1] = 3;
        return;
    case 3:
        if (D_00314CC4 > D_00314CC8) {
            p[1] = 7;
            ((int *)D_00314BB8)[D_00314C74 * 12 + 2] = 5;
            func_000BC990(D_00314BB8[D_00314C74 * 12], D_001D95F4);
            func_000A1D10(p[8], 1, 0, &D_0000FFFF, 24.0f, 0);
            func_000A1D10(D_00314BE4[D_00314C74 * 12], 1, 9, &D_0000FFFF, 24.0f, 0);
            return;
        }
        d = func_000A2310(D_00307DF8 + 100);
        if (d > D_001D605C && d < D_001D95F0) {
            p[1] = 4;
            func_00103990(func_001031C0(p[0], D_001D95E4), 0);
            func_000A1D10(p[5], 1, 0, &D_0000FFFF, 24.0f, 0);
        }
        return;
    case 4:
        if (func_000A1F50(p[5]) == 0) {
            D_00314C78 = 0;
            p[1] = 6;
            func_000A1D10(p[7], 1, 0, &D_0000FFFF, 24.0f, 0);
        }
        return;
    case 6:
        if (func_000A1F50(p[7]) == 0) {
            D_00314C78 = 0;
            p[1] = 5;
            func_000A1D10(p[6], 2, 0, &D_0000FFFF, 24.0f, 0);
        }
        return;
    case 7:
        if (func_000A1F50(p[8]) == 0) {
            D_00314C78 = 0;
            D_00314BB4 = 3;
            func_001007B0(0);
            goto done;
        }
        return;
    case 8:
        if (func_000A1F50(p[9]) == 0) {
            D_00314BB4 = 3;
        done:
            D_00314BB0 = 0;
            p[1] = 9;
            D_00314BC0[0] = 9;
            D_00314BF0 = 9;
            D_00314C20 = 9;
        }
        return;
    }
}

extern const float D_001E461C;
extern float D_001E47FC[];
extern int D_001E47E4[];
extern const float D_001D2B64;
extern const float D_001D2B60;
extern const float D_001D9608;
extern const float D_001D31C8;
extern const float D_001D31CC;
extern const float D_001D3F8C;
extern void func_000BC9D0(float);
extern void func_000F8FA0(int);
#pragma optimize("y", on)
void func_000BD6E0(S_BD6E0 *p)
{
    __declspec(align(16)) float m[16];

    switch (p->state) {
    case 0:
        func_000A1D10(p->h20, 2, 0, &D_0000FFFF, 24.0f, 0);
        p->state = 1;
        func_000BC9D0(0.0f);
        break;
    case 2:
        p->f0c = D_001E461C + p->f0c;
        if (p->f0c > D_001D27B0) {
            p->state = 3;
            p->f0c = 0.0f;
            p->f10 = 0.0f;
            func_000A1D10(p->h1c, 2, 0, &D_0000FFFF, 24.0f, 0);
        }
        break;
    case 3:
        p->f0c = D_001E461C + p->f0c;
        if (p->f0c > D_001E47FC[D_00314C74]) {
            p->state = 4;
            p->f0c = 0.0f;
            func_000A1D10(p->h24, 2, 0, &D_0000FFFF, 24.0f, 0);
            D_00314CC8 = D_001D2B64 / p->f14 * D_001D2B60;
            D_00314CCC = D_00314CC8 - (float)D_001E47E4[D_00314C74];
            D_00314CD0 = D_00314CCC - D_001D9608;
        }
        break;
    case 4:
        D_00314CC4 = D_00314CC4 + D_001D27B0;
        if ((D_001D2B64 == D_00314CC4) != 0)
            func_000BC9D0(1.0f);
        p->f10 = D_001E461C * p->f14 + p->f10;
        if (p->f10 > D_001D31C8)
            p->state = 7;
        if (D_00314CC8 + D_001D27B0 < D_00314CC4 && D_00314CF4 != 2) {
            func_000BC9D0(2.0f);
            D_00314C78 = 0;
        }
        if (D_00314CCC - D_001D3F8C < D_00314CC4 && D_00314CC4 < D_00314CCC)
            D_00314C78 = 1;
        break;
    case 7:
        p->f14 = p->f14 - (D_001E461C + D_001E461C);
        if (p->f14 < D_001D27B0)
            p->f14 = 1.0f;
        p->f10 = D_001E461C * p->f14 + p->f10;
        if (p->f10 > D_001D31CC) {
            func_00110060(D_00314BB8[D_00314C74 * 12][0x2c / 4], m);
            func_001105E0(D_00314BB8[D_00314C74 * 12][0x2c / 4], m, 1);
            func_000F8FA0(p->a0);
            p->state = 8;
            func_000A1D10(p->h18, 2, 0, &D_0000FFFF, 24.0f, 0);
        }
        break;
    }
    if (p->state != 5 && p->state != 6)
        func_000BD3B0(p->a0, p->a4, *(int *)&p->f10);
}
#pragma optimize("", on)

#pragma optimize("", on)
