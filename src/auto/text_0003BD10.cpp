/* 10 functions from 0x0003BD10 to 0x0003CCB5, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

void func_0003C960(int a, int *p) { extern int D_002EDDE8; extern float D_001D2B64; extern char D_002EB06C; extern char D_001D46D8; int func_0006D7A0(...),func_0009C590(...),func_00012D60(...),func_000A1F50(...); float func_000A1EE0(...); void func_0002E300(void); int v[88]={0}; v[0]=0x11; v[83]=(int)&D_002EDDE8; v[82]=(int)func_0002E300; ((float*)v)[4]=30.0f; func_0006D7A0(a,p+4,v); if(p[0xc4]!=1){ if(D_001D2B64<=func_000A1EE0(p[0xa9])){ D_002EB06C=0; func_00012D60(func_0009C590(&D_001D46D8),0x1d); p[0xc4]=1; } } if(!func_000A1F50(p[0xa9])) p[0]=2; }

void func_0003CC40(int a,int *p){extern int D_002EDDE8;int func_0006D7A0(int,void*,void*),func_000A1F50(int);extern int func_0002E300;int local[0x58]={0};local[0]=0x11;local[7]=0x41f00000;local[0x56]= (int)&func_0002E300;local[0x57]=(int)&D_002EDDE8;func_0006D7A0(a,p+4,local);if(!func_000A1F50(p[0xab]))*p=2;}
