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

void _func_0012E620(float *param_1,float *param_2,float *param_3){param_1[0]=param_2[0]+param_3[0];param_1[1]=param_2[1]+param_3[1];param_1[2]=param_2[2]+param_3[2];param_1[3]=param_2[3]+param_3[3];}

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

void _func_0012E940(float *p){int func_00131220(...);func_00131220((longdouble)p[2]*p[2]+(longdouble)p[1]*p[1]+(longdouble)p[0]*p[0]);}

longdouble func_0012E9B0(float *param_1)
{
  return (longdouble)param_1[1] * (longdouble)param_1[1] +
         (longdouble)*param_1 * (longdouble)*param_1;
}

longdouble _func_0012E9D0(float *p){return (longdouble)p[2]*p[2]+(longdouble)p[1]*p[1]+(longdouble)p[0]*p[0];}

void _func_0012EC80(float *p, float x) { p[0] *= x; p[1] *= x; }

void _func_0012ED00(float *param_1, float *param_2, float param_3) { param_1[0]=param_3*param_2[0]; param_1[1]=param_3*param_2[1]; }

