/* 4 functions from 0x00074760 to 0x00075617, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern unsigned char *D_00313BAC;
extern float D_001D5704;
extern float D_001D27FC;
int func_00131410(float);
int func_00103430(int);
int func_000B0E80(int, int);
int func_0009F0C0(int);
int func_00071140(void);
extern int D_002FA548, D_002FA59C, D_002FA588, D_002FA4FC, D_002FA544, D_002FA550;
extern unsigned char D_0031151B, D_00311516, D_00311515, D_0031151A;
extern unsigned short D_00311518;
extern int D_00313A70;
void func_00074EE0(unsigned int param_1) { if (param_1 == 0xffffffff) { int a=0,b=0,c=0; unsigned short *p=(unsigned short *)(D_00313BAC+0x2be); for (int n=0;n<6;n++,p+=0x15a) { unsigned char v=(unsigned char)*p; if(v&1)a++; if(v&2)a++; if(v&4)a++; if(v&8)a++; if(v&0x10)a++; if(v&0x20)a++; if(v&0x40)a++; if((signed char)v<0)a++; } p=(unsigned short *)(D_00313BAC+0x132a); for(int n=0;n<6;n++,p+=0x15a) { unsigned char v=(unsigned char)*p; if(v&1)b++; if(v&2)b++; if(v&4)b++; if(v&8)b++; if(v&0x10)b++; if(v&0x20)b++; if(v&0x40)b++; if((signed char)v<0)b++; } p=(unsigned short *)(D_00313BAC+0x2396); for(int n=0;n<6;n++,p+=0x15a) { unsigned char v=(unsigned char)*p; if(v&1)c++; if(v&2)c++; if(v&4)c++; if(v&8)c++; if(v&0x10)c++; if(v&0x20)c++; if(v&0x40)c++; if((signed char)v<0)c++; } int fa=func_00131410((float)a*D_001D5704*D_001D27FC); int fb=func_00131410((float)b*D_001D5704*D_001D27FC); int fc=func_00131410((float)c*D_001D5704*D_001D27FC); (void)fa;(void)fb;(void)fc; } }
