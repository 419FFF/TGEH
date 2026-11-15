/* 13 functions from 0x0006F6C0 to 0x000700A1, found by Ghidra. */
#include "common.h"

void func_0006F7F0(int p,int q){ extern int D_002FA080; extern int D_001E3CD8; extern int D_002FA060; D_002FA080=0; if(p!=1) D_002FA080=0x3f800000; D_001E3CD8=p; D_002FA060=q; }

void func_0006FD40(void) {
    extern int D_002FA2CC;
    D_002FA2CC = 0;
}

void func_0006FD50(int p) { extern int D_00308158; extern int D_002FA2CC; extern int D_002FA088[256]; extern int _func_0009CC90(int,int); int x=_func_0009CC90(D_00308158,p); D_002FA088[D_002FA2CC]=x; ++D_002FA2CC; }

void _func_00070091(unsigned char *a) { unsigned char x=*a; *a=x+1; }

