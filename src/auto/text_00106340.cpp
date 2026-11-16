/* 8 functions from 0x00106340 to 0x00106AFE, found by Ghidra. */
#include "common.h"

int func_001064C0(...);
int func_0012F890(...);
int func_00131460(float);
int func_0012F7A0(...);
int _func_00106340(int p, int *cell, float *out) {
    extern float D_001D27EC;
    int width = *(int*)((char*)p + 0x68);
    int row = cell[1];
    int col = cell[0];
    int index = row * width + col;
    if ((*(unsigned char*)(*(int*)((char*)p + 0xc4) + index) & 3) != 3) return 0;
    float half = D_001D27EC;
    float x = ((float)col + half) - (float)width * half;
    float z = ((float)row + half) - (float)*(int*)((char*)p + 0x6c) * half;
    x *= *(float*)((char*)p + 0x74);
    z *= *(float*)((char*)p + 0x74);
    float y = (float)*(short*)(*(int*)((char*)p + 0xc0) + index * 2);
    float v[3] = {x, y, z};
    func_0012F7A0(v, (char*)p + 0x80);
    out[0] = v[0]; out[1] = v[1]; out[2] = v[2];
    return 1;
}

void func_00106410(int p, float *in, int *out) { float v[4]; extern float D_001D27B0; extern float D_001D27EC; v[0]=in[0];v[1]=in[1];v[2]=in[2];v[3]=1.0f;func_0012F890(v,(char*)p+0x80);float scale=D_001D27B0/ *(float*)((char*)p+0x74);v[0]=(float)*(int*)((char*)p+0x68)*D_001D27EC-D_001D27EC+v[1]*scale;v[2]=(float)*(int*)((char*)p+0x6c)*D_001D27EC-D_001D27EC+v[3]*scale;out[0]=func_00131460(v[0]);out[1]=func_00131460(v[2]);}

void func_00106730(int *p) {
 int bit=1;
 func_001064C0(p,*p,0x10,0x20,0,0,0x3f800000,0);
 int i=0, n=*(int*)((char*)p[1]+0xd4);
 if(n) do {
  int *e=(int*)(*(int*)((char*)p[1]+0xd8))+i*2;
  int a=e[0];
  if(a && a!=*p) {
   if(e[1]==1) {
    if(*(char*)(a+0x15)==0x1c && **(int**)(a+0x110)!=5)
     func_001064C0(p,a,0x10,0,0,0,0x40400000,(int*)(*(int*)(a+0x110)+0x270));
    else if((*(int*)(*(int*)(a+0x2c)+0x20)&bit)==0)
     func_001064C0(p,a,0x10,0,0,0,0x3fc00000,0);
   } else if(e[1]==0) {
    int flag=*(int*)(*(int*)(a+0x2c)+0x20)&bit;
    if(flag) func_001064C0(p,a,0,0,0x20,3,0x3fa66666,0);
    else func_001064C0(p,a,0x10,0,3,0x20,0x3f99999a,0);
   }
  }
  ++i;
 } while(i != *(int*)((char*)p[1]+0xd4));
 func_001064C0(p,*p,0x20,0x10,0,0,0x3f800000,0);
}

int func_00106830(int p, float *in) { int xy[2];func_00106410(p,in,xy);if(xy[0]<0||xy[0]>=*(int*)((char*)p+0x68)||xy[1]<0||xy[1]>=*(int*)((char*)p+0x6c))return -1;return *(int*)((char*)p+0x68)*xy[1]+xy[0];}

void func_00106880(void) {
    extern int D_0032511C;
    extern int D_00325120;
    extern int D_00325124;
    extern char D_00325128;
    extern int D_0032512C;
    D_0032511C = 0;
    D_00325120 = 0;
    D_00325124 = 0;
    D_00325128 = 1;
    D_0032512C = -1;
}

void func_00106410(int,float*,int*);
void func_00106AC0(int p, int a, int *out) { int func_00106410(...); volatile int xy[2]; func_00106410(*(int*)(p+4),a,(int*)xy); out[0]=xy[0]-*(int*)(p+0x14);out[1]=xy[1]-*(int*)(p+0x18);}

