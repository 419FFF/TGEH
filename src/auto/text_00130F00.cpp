/* 36 functions from 0x00130F00 to 0x00131EB0, found by Ghidra. */
#include "common.h"

extern double fabs(double);
#pragma intrinsic(fabs)
float func_00131210(float param_1) {
    return (float)(param_1 < 0.0f ? -(double)param_1 : (double)param_1);
}
float _func_00131220(float param_1)
{
  return param_1 * param_1;
}

extern double sin(double);
#pragma intrinsic(sin)
float func_00131230(float x) {
    return (float)sin((double)x);
}
float func_00131240(float a0) {
    extern void func_0013FF4C(void);
    float r = a0;
    func_0013FF4C();
    return r;
}

extern double cos(double);
#pragma intrinsic(cos)
float func_00131250(float x) {
    return (float)cos((double)x);
}

#pragma intrinsic(sin)
#pragma intrinsic(cos)
extern void sincos(double, double *, double *);
void func_00131270(float x, float *s, float *c) {
    float a = (float)sin((double)x);
    *s = a;
    *c = (float)cos((double)x);
}

float func_00131290(float param_1, float param_2, float param_3) {
    if (param_1 < param_2) {
        return param_2;
    }
    if (param_1 < param_3) {
        return param_1;
    }
    return param_3;
}

float func_001312C0(float param_1, float param_2) {
    if (param_1 >= param_2) {
        return param_1;
    }
    return param_2;
}

float func_001312E0(float param_1, float param_2) {
    if (param_1 < param_2) {
        return param_1;
    }
    return param_2;
}

float _func_00131300(float x) {
    double d = (double)x;
    return (float)d;
}

void _func_00131310(void) {
    extern u16 D_00331B34;
    extern u16 D_00331B30;
    extern u16 D_00331B28;
    
    int val = *(int*)(D_00331B34 + D_00331B30 * 4);
    int other = *(int*)(D_00331B34 + D_00331B28 * 4);
    val += other;
    
    D_00331B30--;
    if (D_00331B30 > 9) {
        D_00331B30 = 10;
    }
    
    D_00331B28--;
    if (D_00331B28 > 9) {
        D_00331B28 = 10;
    }
}

int func_00131460(float x) {
 extern float D_001D27EC, D_001D27B8;
 unsigned int u = 0x9d - (((unsigned int)(x + D_001D27EC) >> 23) & 255);
 if (u > 31) u = 31;
 int v = (((unsigned int)(x + D_001D27EC) & 0x7fffff) + 0x800000) << 7;
 if (x + D_001D27EC < D_001D27B8) v = -v;
 return v >> u;
}

extern void _D_0014001C(float, float);
float func_001314B0(float a,float b) { extern float D_0014001C(float,float); return D_0014001C(a,b); }

void func_001314C0(void) { }

float func_00131550(float x) { return 0.0f; }

float func_00131760(void) { extern unsigned int func_00131310(void); extern float D_001D27B0; unsigned int u=func_00131310(); u=(u&0x7fffff)|0x3f800000; return *(float*)&u-D_001D27B0; }

