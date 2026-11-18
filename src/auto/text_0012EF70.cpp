/* 34 functions from 0x0012EF70 to 0x0012FF3B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_0012EF70(double *a,double *b){a[0]=a[0]+b[0];a[1]=a[1]+b[1];a[2]=a[2]+b[2];a[3]=a[3]+b[3];a[4]=a[4]+b[4];a[5]=a[5]+b[5];a[6]=a[6]+b[6];a[7]=a[7]+b[7];}

void _func_0012F010(double *a,double *b){a[0]=a[0]-b[0];a[1]=a[1]-b[1];a[2]=a[2]-b[2];a[3]=a[3]-b[3];a[4]=a[4]-b[4];a[5]=a[5]-b[5];a[6]=a[6]-b[6];a[7]=a[7]-b[7];}

void func_0012F0B0(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}

void func_0012F0F0(undefined4 *param_1)
{
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  return;
}

void func_0012F120(undefined4 *param_1)
{
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  return;
}

void func_0012F160(float *param_1, float *param_2, float *param_3)
{
  *param_1 = param_2[2] * param_3[8] + *param_2 * *param_3 + param_2[1] * param_3[4];
  param_1[1] = param_3[9] * param_2[2] + param_3[1] * *param_2 + param_2[1] * param_3[5];
  param_1[2] = param_3[10] * param_2[2] + param_3[2] * *param_2 + param_2[1] * param_3[6];
  param_1[4] = param_2[4] * *param_3 + param_2[5] * param_3[4] + param_2[6] * param_3[8];
  param_1[5] = param_2[4] * param_3[1] + param_2[5] * param_3[5] + param_2[6] * param_3[9];
  param_1[6] = param_2[4] * param_3[2] + param_2[5] * param_3[6] + param_2[6] * param_3[10];
  param_1[8] = param_2[9] * param_3[4] + param_2[10] * param_3[8] + param_2[8] * *param_3;
  param_1[9] = param_3[1] * param_2[8] + param_3[5] * param_2[9] + param_3[9] * param_2[10];
  param_1[10] = param_3[2] * param_2[8] + param_3[6] * param_2[9] + param_3[10] * param_2[10];
  return;
}

void func_0012F250(int a0, int a1, int a2) {
    int __stdcall func_0010F29B(int, int, int);
    func_0010F29B(a0, a1, a2);
}

#pragma optimize("y", off)
void _func_0012F270(int *param_1,int param_2){int _func_0012F160(int *,int *,int);int local[19];int *p=local;_func_0012F160(p+2,param_1,param_2);param_1[0]=p[2];param_1[1]=p[3];param_1[2]=p[4];param_1[4]=p[6];param_1[5]=p[7];param_1[6]=p[8];param_1[8]=p[10];param_1[9]=p[11];param_1[10]=p[12];}
void _func_0012F2E0(int *param_1,int param_2){int _func_0010F29B(...);int _func_00011CB0(...);int local1[19],local2[3];_func_0010F29B(local1,param_1,param_2);_func_00011CB0(param_1,local2);}

void func_0012F310(float *param_1, float *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[4];
  param_1[2] = param_2[8];
  param_1[3] = 0.0;
  param_1[4] = param_2[1];
  param_1[5] = param_2[5];
  param_1[6] = param_2[9];
  param_1[7] = 0.0;
  param_1[8] = param_2[2];
  param_1[9] = param_2[6];
  param_1[10] = param_2[10];
  param_1[0xb] = 0.0;
  param_1[0xc] = (-(param_2[0xc] * *param_2) - param_2[1] * param_2[0xd]) -
                 param_2[0xe] * param_2[2];
  param_1[0xd] = (-(param_2[4] * param_2[0xc]) - param_2[0xd] * param_2[5]) -
                 param_2[0xe] * param_2[6];
  fVar1 = param_2[0xc];
  fVar2 = param_2[8];
  fVar3 = param_2[0xd];
  fVar4 = param_2[9];
  fVar5 = param_2[0xe];
  fVar6 = param_2[10];
  param_1[0xf] = 1.0;
  param_1[0xe] = (-(fVar1 * fVar2) - fVar3 * fVar4) - fVar5 * fVar6;
  return;
}

#pragma optimize("y", off)
void _func_0012F3C0(int *p){int a=p[1],b=p[2],c=p[4],d=p[6];p[1]=p[4];p[2]=p[8];p[4]=a;p[6]=p[9];p[8]=b;p[9]=d;}

#pragma optimize("y", off)
void _func_0012F420(void *param_1){int _func_0012F310(...);int _func_00011CB0(...);volatile int local[19];_func_0012F310((int*)local,param_1);_func_00011CB0(param_1,(int*)local+6);}

#pragma optimize("y", off)
void _func_0012F450(int param_1,int param_2,int *p3){int _func_0012F160(int,int,int *);char pad[16];int local[12];local[0]=p3[0];local[1]=p3[4];local[2]=p3[8];local[4]=p3[1];local[5]=p3[5];local[6]=p3[9];local[8]=p3[2];local[9]=p3[6];local[10]=p3[10];_func_0012F160(param_1,param_2,local);}

void _func_0012F4C0(void *a,void *b,void *c){char x[64];void _func_0012F310(void *,void *);void __stdcall _func_0010F29B(void *,void *,void *);_func_0012F310(x,c);_func_0010F29B(a,b,x);}

void _func_0012F560(void *a,void *b){char x[52],y[12],z[76];void _func_0012F310(void *,void *);void __stdcall _func_0010F29B(void *,void *,void *);void _func_00011CB0(void *,void *);_func_0012F310(z,b);_func_0010F29B(a,x,z);_func_00011CB0(a,y);}

void _func_0012F610(float *o,float *m){o[0]=m[8]*o[2]+m[4]*o[1]+m[0]*o[0];o[1]=m[9]*o[2]+m[5]*o[1]+m[1]*o[0];o[2]=m[10]*o[2]+m[6]*o[1]+m[2]*o[0];}

void _func_0012F670(float *o,float *v,float *m){o[0]=(float)((long double)m[1]*(long double)v[1]+(long double)m[2]*(long double)v[2]+(long double)m[0]*(long double)v[0]);o[1]=(float)((long double)m[5]*(long double)v[1]+(long double)m[4]*(long double)v[0]+(long double)m[6]*(long double)v[2]);o[2]=(float)((long double)m[9]*(long double)v[1]+(long double)m[8]*(long double)v[0]+(long double)m[10]*(long double)v[2]);}

void _func_0012F6D0(float *o,float *m){long double x=o[0],y=o[1],z=o[2];o[0]=(float)((long double)m[1]*y+(long double)m[2]*z+(long double)m[0]*x);o[1]=(float)((long double)m[5]*y+(long double)m[4]*x+(long double)m[6]*z);o[2]=(float)((long double)m[9]*y+(long double)m[8]*x+(long double)m[10]*z);}

void _func_0012F730(float *o,float *v,float *m){o[0]=(float)((long double)m[0]*v[0]+(long double)m[4]*v[1]+(long double)m[8]*v[2]+m[12]);o[1]=(float)((long double)m[1]*v[0]+(long double)m[5]*v[1]+(long double)m[9]*v[2]+m[13]);o[2]=(float)((long double)m[2]*v[0]+(long double)m[6]*v[1]+(long double)m[10]*v[2]+m[14]);o[3]=1.0f;}

void _func_0012F7A0(float *m,float *o){long double x=o[0],y=o[1],z=o[2];o[0]=(float)(m[0]*x+m[4]*y+m[8]*z+m[12]);o[1]=(float)(m[1]*x+m[5]*y+m[9]*z+m[13]);o[2]=(float)(m[2]*x+m[6]*y+m[10]*z+m[14]);o[3]=1.0f;}

void _func_0012F810(float *m,float *v,float *o){long double x=(long double)v[0]-m[12],y=(long double)v[1]-m[13],z=(long double)v[2]-m[14];o[0]=(float)(m[0]*x+m[4]*y+m[8]*z);o[1]=(float)(m[1]*x+m[5]*y+m[9]*z);o[2]=(float)(m[2]*x+m[6]*y+m[10]*z);o[3]=1.0f;}

void _func_0012F890(float *m,float *v){long double x=(long double)v[0]-m[12],y=(long double)v[1]-m[13],z=(long double)v[2]-m[14];v[0]=(float)(x*m[0]+y*m[1]+z*m[2]);v[1]=(float)(x*m[4]+y*m[5]+z*m[6]);v[2]=(float)(x*m[8]+y*m[9]+z*m[10]);v[3]=1.0f;}

void _func_0012F910(float *m,float s){m[0]=(float)((long double)s*(long double)m[0]);m[1]=(float)((long double)s*(long double)m[1]);m[2]=(float)((long double)s*(long double)m[2]);m[4]=(float)((long double)s*(long double)m[4]);m[5]=(float)((long double)s*(long double)m[5]);m[6]=(float)((long double)s*(long double)m[6]);m[8]=(float)((long double)s*(long double)m[8]);m[9]=(float)((long double)s*(long double)m[9]);m[10]=(float)((long double)s*(long double)m[10]);}

void _func_0012FB60(float *p,float a,float b,float c,float d){extern float _D_001D29F4,_D_001D27B0;*p=_D_001D29F4/a;p[1]=0;p[2]=0;p[3]=0;p[4]=0;p[5]=_D_001D29F4/(a/b);p[6]=0;p[7]=0;p[8]=0;p[9]=0;p[10]=_D_001D27B0/(c-d);p[11]=0;p[12]=0;p[13]=0;p[14]=p[10]*c;p[15]=1;}

void _func_0012FBD0(float *p,float a,float b,float c,float d){int func_00131300(...);extern float _D_001D27EC,_D_001D27B0;float t=func_00131300(a*_D_001D27EC);float y=_D_001D27B0/t;p[1]=p[2]=p[3]=p[4]=0;p[5]=y;p[6]=p[7]=p[8]=p[9]=0;p[10]=0;p[11]=1;p[12]=p[13]=0;p[14]=(c*d)/(c-d);p[15]=0;p[0]=y/b;}

#pragma optimize("", on)

#pragma optimize("", on)

#pragma optimize("", on)
longdouble func_0012FF00(float *param_1)
{
  float *new_var;
  new_var = &param_1[10];
  return (((((longdouble) param_1[9]) * ((longdouble) param_1[4])) - (((longdouble) param_1[8]) * ((longdouble) param_1[5]))) * ((longdouble) param_1[2])) + ((((((longdouble) param_1[5]) * (*new_var)) - (((longdouble) param_1[9]) * ((longdouble) param_1[6]))) * ((longdouble) (*param_1))) - (((((longdouble) param_1[4]) * ((longdouble) (*new_var))) - (((longdouble) param_1[8]) * ((longdouble) param_1[6]))) * ((longdouble) param_1[1])));
}

