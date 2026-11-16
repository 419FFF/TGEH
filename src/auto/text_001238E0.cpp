/* 6 functions from 0x001238E0 to 0x001246FC, found by Ghidra. */
#include "common.h"

void func_00116FB0(int);
void func_00129C90(int);
void func_00110760(int);
void func_00133BB0(int);
void _func_001244D0(void){ extern unsigned char D_0033151C; extern int D_00331514,D_0033136C,D_00331368,D_0033150C; extern unsigned D_00331508,D_00331518; extern int D_003311D8[]; if(D_0033151C)func_00116FB0(D_00331514);func_00129C90(D_0033136C);func_00110760(D_00331368);func_00110760(D_0033150C);for(unsigned i=0;i<D_00331508;i++){int p=D_003311D8[i];if(*(int*)(p+0x70))func_00116FB0(*(int*)(p+0x70));func_00133BB0(*(int*)(p+0xc));*(int*)(p+0xc)=0;func_00116FB0(p);}D_00331508=0;D_00331518=0;}
