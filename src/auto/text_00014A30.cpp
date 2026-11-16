/* 7 functions from 0x00014A30 to 0x000156D0, found by Ghidra. */
#include "common.h"

#pragma optimize("y", on)
unsigned char func_00014D70(int p) { int *x=*(int**)(p+0x110); if(*x==0){*x=1;return 1;}return 0; }
void func_00014D90(int p) { int *x=*(int**)(p+0x110); if(*x==1)*x=0; }
#pragma optimize("y", on)
void func_00014DB0(int p) { int *x=*(int**)(p+0x110); int v=*(int*)((char*)x+0x50); int t=(v!=0)?4:2; *x=t;}
