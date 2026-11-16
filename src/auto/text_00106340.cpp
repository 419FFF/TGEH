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

