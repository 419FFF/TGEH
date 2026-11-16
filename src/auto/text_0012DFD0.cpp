/* 44 functions from 0x0012DFD0 to 0x0012EF65, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_0012E280(unsigned int *out, unsigned char *in)
{
    unsigned int value;

    out[0] = 0;
    value = in[7];
    value = (value << 8) | in[6];
    value = (value << 8) | in[5];
    value = (value << 8) | in[4];
    out[2] = value;
    value = in[15];
    value = (value << 8) | in[14];
    out[4] = value;
    value = in[1];
    value = (value << 8) | in[0];
    if (value == 1) out[0] = value;
    value = in[3];
    value = (value << 8) | in[2];
    out[1] = value;
}

void _func_0012E590(float *a, float *b) { a[0] += b[0]; a[1] += b[1]; a[2] += b[2]; }

void _func_0012E5C0(float *a, float *b) { a[0] += b[0]; a[1] += b[1]; a[2] += b[2]; a[3] += b[3]; }

void _func_0012E5F0(float *o,float *a,float *b){ double t=(double)a[0]+b[0]; o[0]=(float)t; t=(double)a[1]+b[1]; o[1]=(float)t; t=(double)a[2]+b[2]; o[2]=(float)t; }

void _func_0012E620(float *a,float *b,float *c){a[0]=b[0]+c[0];a[1]=b[1]+c[1];a[2]=b[2]+c[2];a[3]=b[3]+c[3];}

void _func_0012E650(float *param_1, float *param_2) { param_1[0]=param_1[0]-param_2[0]; param_1[1]=param_1[1]-param_2[1]; param_1[2]=param_1[2]-param_2[2]; }

void func_0012E680(float *a, float *b) { a[0]-=b[0]; a[1]-=b[1]; a[2]-=b[2]; a[3]-=b[3]; }

void func_0012E6B0(float *param_1, float *param_2, float *param_3)
{
  *param_1 = *param_2 - *param_3;
  param_1[1] = param_2[1] - param_3[1];
  return;
}

void func_0012E6D0(float *out, float *a, float *b) { out[0]=a[0]-b[0]; out[1]=a[1]-b[1]; out[2]=a[2]-b[2]; }

void func_0012E700(float *out, float *a, float *b) { out[0]=a[0]-b[0]; out[1]=a[1]-b[1]; out[2]=a[2]-b[2]; out[3]=a[3]-b[3]; }

void func_0012E730(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

void func_0012E750(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

void func_0012E760(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

void func_0012E780(float *p, float *q) {
    int func_00131220(...);
    func_00131220(((longdouble)p[1] - (longdouble)q[1]) * ((longdouble)p[1] - (longdouble)q[1]) +
                  ((longdouble)*p - (longdouble)*q) * ((longdouble)*p - (longdouble)*q));
}

void func_0012E7B0(float *p, float *q) {
    int func_00131220(...);
    func_00131220(((longdouble)p[2] - (longdouble)q[2]) * ((longdouble)p[2] - (longdouble)q[2]) +
                  ((longdouble)p[1] - (longdouble)q[1]) * ((longdouble)p[1] - (longdouble)q[1]) +
                  ((longdouble)*p - (longdouble)*q) * ((longdouble)*p - (longdouble)*q));
}

void func_0012E7F0(float *p, float *q) {
    int func_00131220(...);
    func_00131220(((longdouble)p[3] - (longdouble)q[3]) * ((longdouble)p[3] - (longdouble)q[3]) +
                  ((longdouble)p[2] - (longdouble)q[2]) * ((longdouble)p[2] - (longdouble)q[2]) +
                  ((longdouble)p[1] - (longdouble)q[1]) * ((longdouble)p[1] - (longdouble)q[1]) +
                  ((longdouble)*p - (longdouble)*q) * ((longdouble)*p - (longdouble)*q));
}

longdouble func_0012E840(float *param_1, float *param_2)
{
  return ((longdouble)param_1[1] - (longdouble)param_2[1]) *
         ((longdouble)param_1[1] - (longdouble)param_2[1]) +
         ((longdouble)*param_1 - (longdouble)*param_2) *
         ((longdouble)*param_1 - (longdouble)*param_2);
}

longdouble _func_0012E870(float *a,float *b){longdouble x=(longdouble)a[2]-b[2],y=(longdouble)a[1]-b[1],z=(longdouble)a[0]-b[0];return x*x+y*y+z*z;}

longdouble func_0012E8A0(float *param_1, float *param_2)
{
  return (longdouble)*param_1 * (longdouble)*param_2 +
         (longdouble)param_1[1] * (longdouble)param_2[1];
}

longdouble func_0012E8C0(float *param_1, float *param_2)
{
  return (longdouble)*param_1 * (longdouble)*param_2 +
         (longdouble)param_1[1] * (longdouble)param_2[1] +
         (longdouble)param_1[2] * (longdouble)param_2[2];
}

longdouble func_0012E8E0(float *param_1, float *param_2)
{
  return (longdouble)*param_1 * (longdouble)*param_2 +
         (longdouble)param_1[1] * (longdouble)param_2[1] +
         (longdouble)param_1[2] * (longdouble)param_2[2] +
         (longdouble)param_1[3] * (longdouble)param_2[3];
}

void func_0012E910(float *p) {
    int func_00131220(...);
    func_00131220((longdouble)p[1] * (longdouble)p[1] + (longdouble)*p * (longdouble)*p);
}

void _func_0012E940(float *p){int func_00131220(float);func_00131220((float)((longdouble)p[2]*p[2]+(longdouble)p[1]*p[1]+(longdouble)p[0]*p[0]));}

void _func_0012E970(float *p){int func_00131220(...);func_00131220((longdouble)p[3]*p[3]+(longdouble)p[2]*p[2]+(longdouble)p[1]*p[1]+(longdouble)p[0]*p[0]);}

longdouble func_0012E9B0(float *param_1)
{
  return (longdouble)param_1[1] * (longdouble)param_1[1] +
         (longdouble)*param_1 * (longdouble)*param_1;
}

longdouble _func_0012E9D0(float *p){return (longdouble)p[2]*p[2]+(longdouble)p[1]*p[1]+(longdouble)p[0]*p[0];}

void func_0012EA00(float *p) { extern float D_001D27B8; extern float D_001D27B0; float n; int func_00131220(float); n=func_00131220(p[1]*p[1]+p[0]*p[0]); if(n==D_001D27B8){p[0]=0.0f;p[1]=1.0f;}else{n=D_001D27B0/n;p[0]*=n;p[1]*=n;} }

void func_0012EA60(float *p) { extern float D_001D27B8; extern float D_001D27B0; float n; int func_00131220(float); n=func_00131220(p[2]*p[2]+p[1]*p[1]+p[0]*p[0]); if(n==D_001D27B8){p[0]=0.0f;p[1]=0.0f;p[2]=1.0f;}else{n=D_001D27B0/n;p[0]*=n;p[1]*=n;p[2]*=n;} }

void func_0012EAE0(float *p) { extern float D_001D27B8; extern float D_001D27B0; float n; int func_00131220(float); n=func_00131220(p[3]*p[3]+p[2]*p[2]+p[1]*p[1]+p[0]*p[0]); if(n==D_001D27B8){p[0]=0.0f;p[1]=0.0f;p[2]=0.0f;p[3]=1.0f;}else{n=D_001D27B0/n;p[0]*=n;p[1]*=n;p[2]*=n;p[3]*=n;} }

void func_0012EB70(float *out,float *v) {
    extern float __stdcall func_00131220(float);
    extern float D_001D27B8, D_001D27B0;
    float len=func_00131220(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);
    if(len==D_001D27B8) { out[0]=0; out[1]=0; out[2]=1; return; }
    float scale=D_001D27B0/len;
    out[0]=scale*v[0]; out[1]=scale*v[1]; out[2]=scale*v[2];
}

void _func_0012EC80(float *p, float x) { p[0] *= x; p[1] *= x; }

void func_0012ECA0(float *p, float x) { p[0]=x*p[0]; p[1]=x*p[1]; p[2]=x*p[2]; }

void _func_0012ECD0(float *p, float x) { p[0] *= x; p[1] *= x; p[2] *= x; p[3] *= x; }

void _func_0012ED00(float *param_1, float *param_2, float param_3) { param_1[0]=param_3*param_2[0]; param_1[1]=param_3*param_2[1]; }

void func_0012ED20(float *out,float *v,float s) { out[0]=s*v[0]; out[1]=s*v[1]; out[2]=s*v[2]; }

void _func_0012ED80(float *out, float *a, float *b, float t)
{
    out[0] = (b[0] - a[0]) * t + a[0];
    out[1] = (b[1] - a[1]) * t + a[1];
    out[2] = (b[2] - a[2]) * t + a[2];
}

