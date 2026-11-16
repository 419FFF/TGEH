/* 9 functions from 0x000CC9B0 to 0x000CD095, found by Ghidra. */
#include "common.h"

char _func_000CCB10(int param) { extern int D_001DAAA0; extern int func_0013F2E9(int, int*); int p; if (param != 0 && (p=*(int*)(param+0x7c)) != 0 && func_0013F2E9(*(int*)(p+0xc),&D_001DAAA0) == 0) return 0; return 1; }

void func_000CCCE0(void) {
    extern char D_0031A9E4;
    D_0031A9E4 = 0;
}

void _func_000CCCF0(int object) { extern int func_00110060(int, void*); extern void func_0012EA60(unsigned int*); extern void func_0012F7A0(int*, void*); extern void func_00068DA0(void*, unsigned int*, int*); extern void func_001105E0(int, void*, int); extern char D_0031A9E4; extern void func_00012D60(int, int); __declspec(align(16)) unsigned char area[0x5c]; unsigned int* matrix=(unsigned int*)(area+8); int* pos=(int*)(area+0x1c); unsigned char* buffer=area+0x20; func_00110060(*(int*)(object+0x2c),buffer); matrix[0]=0x3f800000; matrix[1]=0x3f800000; matrix[2]=0; matrix[3]=0x3e19999a; func_0012EA60(matrix); pos[0]=*(int*)(object+0x40); pos[1]=*(int*)(object+0x44); pos[2]=*(int*)(object+0x48); func_0012F7A0(pos,buffer); func_00068DA0(buffer,matrix,pos); func_001105E0(*(int*)(object+0x2c),buffer,0); if (D_0031A9E4) func_00012D60(object,0); }

void func_000CCDA0(void) {
    int func_000B6510(...);
    func_000B6510(7, 0);
}

void func_000CD000(void) {
    extern int D_0031A9EC;
    int func_001160B0(...);
    func_001160B0(D_0031A9EC);
    D_0031A9EC = 0;
}

long double _func_000CD020(int unused, float x, float y) { extern int D_00317264; extern float D_00317668; extern float D_00316D60[]; extern long double func_00131220(long double); int best=-1, i=0; long double closest=1e7; if (D_00317264 > 0) { float* p=&D_00317668; do { long double dx=(long double)p[-1]-(long double)x; long double dy=(long double)*p-(long double)y; long double dist=func_00131220(dx*dx+dy*dy); if (dist < closest) { closest=dist; best=i; } ++i; p+=3; } while(i<D_00317264); } return D_00316D60[best]; }

