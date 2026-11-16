/* 19 functions from 0x00068AC0 to 0x00069AB4, found by Ghidra. */
#include "common.h"

void func_00068AC0(int p,float t,int *out,int *out2){extern float D_001D27B8;int __stdcall func_000688E0(int);void func_0011F270(...);int type=*(int*)(p+4);if(type==0){if(out){out[0]=0;out[1]=0;out[2]=0;}if(out2){out2[0]=0;out2[1]=0x3f800000;out2[2]=0;}return;}if(type==1){if(out){int*q=*(int**)(p+8);out[0]=q[0];out[1]=q[1];out[2]=q[2];}if(out2){out2[0]=0;out2[1]=0x3f800000;out2[2]=0;}return;}int x=func_000688E0(p);if(t<D_001D27B8)t=0;if((float)*(int*)(x+0xc)<t)func_0011F270();else func_0011F270();}

long double func_00068BA0(int p,float t){extern float D_001D27B8;int __stdcall func_000688E0(int);int __ftol();if(*(int*)(p+4)<2)return D_001D27B8;int x=func_000688E0(p);if(t<D_001D27B8)t=0;int n=__ftol();long double sum=D_001D27B8;int i=0;float*values=*(float**)(x+4);for(;i<n;i++)sum+=values[i];if(t<(float)*(int*)(x+0xc))sum+=(t-n)*values[n];return sum;}

long double func_00068C50(int p,float t){extern float D_001D27B8;int __stdcall func_000688E0(int);if(*(int*)(p+4)<2)return D_001D27B8;int x=func_000688E0(p);long double sum=D_001D27B8;int i=0;if(t>D_001D27B8){while(i<*(int*)(x+0xc)&&sum<t){sum+=*(float*)(*(int*)(x+4)+i*4);i++;}}i--;long double value=(t-(sum-*(float*)(*(int*)(x+4)+i*4)))/(*(float*)(*(int*)(x+4)+i*4))+i;if(value<D_001D27B8)value=D_001D27B8;if(*(int*)(x+0xc)<value)value=*(int*)(x+0xc);return value;}

extern float D_001D27B8;
extern float func_0011F7C0(void *);
float func_00068CF0(int *p) { if ((unsigned)p[1] < 2) return D_001D27B8; return func_0011F7C0(p+1); }

void __fastcall func_00068D10(float *src, int unused, float *dst) {
 float x=src[0], y=src[1], z=src[2];
 dst[0]=-x; dst[1]=-y; dst[2]=-z;
 dst[3]=x; dst[4]=-y; dst[5]=-z;
 dst[6]=x; dst[7]=y; dst[8]=-z;
 dst[9]=-x; dst[10]=y; dst[11]=-z;
 dst[12]=-x; dst[13]=-y; dst[14]=z;
 dst[15]=x; dst[16]=-y; dst[17]=z;
 dst[18]=x; dst[19]=y; dst[20]=z;
 dst[21]=-x; dst[22]=y; dst[23]=z;
}

void func_00068D90(int a0) {
    extern int D_002F82F8;
    D_002F82F8 = a0;
}
