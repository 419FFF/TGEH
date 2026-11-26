/* 6 functions from 0x00023CF0 to 0x00024901, found by Ghidra. */
#include "common.h"
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strcpy, strcat, strlen)
struct Vec3_23CF0 { float x, y, z; };

void func_00023F00(int param_1) { volatile int marker=10; }

void __fastcall func_00024580(unsigned int* p){unsigned int z=0;p[0x17c/4]=z;p[0x180/4]=0x3f800000;p[0x184/4]=z;p[0x188/4]=z;p[0x18c/4]=z;p[0x190/4]=z;p[0x194/4]=z;p[0x198/4]=z;p[0x19c/4]=z;p[0x1a0/4]=z;}

void __fastcall func_000245D0(unsigned int* p){unsigned int one=0x3f800000;unsigned int z=0;p[0x17c/4]=z;p[0x180/4]=one;p[0x184/4]=one;p[0x188/4]=one;p[0x18c/4]=one;p[0x190/4]=z;p[0x194/4]=one;p[0x198/4]=one;p[0x19c/4]=z;p[0x1a0/4]=z;}

