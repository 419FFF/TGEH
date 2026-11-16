/* 9 functions from 0x000E08C0 to 0x000E132D, found by Ghidra. */
#include "common.h"

void func_000E1070(void) {
 extern int D_001E556C; extern int D_00313AB8; extern char D_001DBAE8;
 int func_001383B0(...); int func_00120E00(...); int func_00120EA0(...); int func_00120ED0(...);
 int func_00120E70(...); int func_00120F60(...); int func_00120F70(...); int func_00120F80(...);
 int func_00120E50(...); int func_00121990(...);
 if(D_001E556C==-1)return;
 func_001383B0(); func_00120E00(D_00313AB8);
 func_00120EA0(1,1,0,0); func_00120ED0(4,5);
 func_00120E70(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
 func_00120F60(0x3fd9999a); func_00120F70(0x3fd9999a); func_00120F80(0x3fd9999a,0x3fd9999a);
 func_00120E50(0x43a00000,0x43680000);
 func_00121990(&D_001DBAE8,D_001E556C);
}

void func_000E1110(int a0) {
    extern int D_001E556C;
    D_001E556C = a0;
}

void func_000E1270(int a0) {
    extern int D_0031FEC4;
    D_0031FEC4 = a0;
}

void func_000E1280(int a,int b,float c) {
 extern int D_0031FEE4,D_0031FEEC,D_0031FE8C; extern float D_0031FEBC; extern int D_0031FE88,D_0031FE90;
 int func_001031A0(...); int func_00103960(...);
 D_0031FEBC=-c; D_0031FE88=a; D_0031FE90=b;
 func_001031A0(D_0031FEE4,1.0f);
 func_00103960(D_0031FEE4,D_0031FEEC,1);
 D_0031FE8C=5;
}

