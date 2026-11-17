/* 5 functions from 0x00030A80 to 0x00030F05, found by Ghidra. */
#include "common.h"

extern int func_000A1F50(int);
extern int func_000120B0(int, unsigned int, int, int);
extern int func_0012ED20(int *, int *, float);

float func_00131220(float);
void func_00030A80(int p1,int p2,float p3)
{
 extern float D_001D3E44,D_001D290C,D_001D3E40;
 double t=func_00131220(p3*D_001D3E44);
 int *q=*(int**)(p2+0x31c); int n=*q;
 if(n<0) n+=(int)D_001D290C;
 *(float*)(p2+0x334)=(float)((*(float*)(p2+0x33c)-n)/(t*D_001D3E40));
 *(float*)(p2+0x9c)=(float)t;
}

void func_00030AD0(int p1,int p2,float p3)
{
 extern float D_001D3E44,D_001D290C,D_001D3E40;
 double t=func_00131220(p3*D_001D3E44);
 int *q=*(int**)(p2+0x32c); int n=*q;
 if(n<0) n+=(int)D_001D290C;
 *(float*)(p2+0x334)=(float)((*(float*)(p2+0x33c)-n)/(t*D_001D3E40));
 *(float*)(p2+0x9c)=(float)t;
}

