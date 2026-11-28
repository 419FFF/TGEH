/* 5 functions from 0x00054550 to 0x00054D4B, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

void func_00054550(int a,int b){int func_00110060(...);int func_0012F7A0(...);int func_00131220(...);long double r;unsigned char buf[0x4c];int v[3];*(int*)(b+0x98)=0x49;v[0]=*(int*)(a+0xe8);v[2]=*(int*)(a+0xf0);v[1]=0;func_00110060(*(int*)(a+0x2c),buf);func_0012F7A0(v,buf);*(int*)(b+0x138)=v[0];*(int*)(b+0x13c)=v[1];*(int*)(b+0x140)=v[2];r=(long double)func_00131220(*(float*)(a+0xf8)**(float*)(a+0xf8)+*(float*)(a+0xf4)**(float*)(a+0xf4));if((long double)*(float*)(b+0x74)<r)*(float*)(b+0x188)=(float)r;else *(float*)(b+0x188)=*(float*)(b+0x74);}

void _func_00054620(int param_1,int param_2)
{
 int _func_00110060(...); int _func_0012F7A0(...);
 int local[32]; int trip[3]; int count, i; int *p;
 *(int *)(param_2+0x98)=0x57;
 trip[0]=*(int *)(param_1+0xe8); trip[2]=*(int *)(param_1+0xf0); trip[1]=0;
 _func_00110060(*(int *)(param_1+0x2c),local);
 _func_0012F7A0(trip,local);
 *(int *)(param_2+0x138)=trip[0]; *(int *)(param_2+0x13c)=trip[1]; *(int *)(param_2+0x140)=trip[2];
 *(unsigned char *)(param_2+0x12c)=0xff;
 p=*(int **)(*(int *)(param_2+0x68)+8); count=p[0xd4/4]; i=0;
 while(i<count) { if(param_1==*(int *)(*(int *)(p[0xd8/4])+i*8)) *(unsigned char *)(param_2+0x12c)=(unsigned char)i; ++i; }
}

#pragma optimize("y", on)
void _func_00054CB0(int param_1)
{
 int _func_000487A0(...); int _func_00116FB0(...); extern int _D_00307D10;
 int *p=*(int **)(param_1+0x110);
 _func_000487A0(_D_00307D10,*(int *)(p+0x68/4));
 _func_00116FB0(p);
}

void _func_00054CE0(int item,int *object)
{
 int i=0; int *root; int *node; int count;
 object[0x98/4]=0x5e; object[0x174/4]=0x41200000; object[0x178/4]=0x40f00000;
 *((unsigned char *)object+0x12c)=0xff;
 root=*(int **)((char *)object+0x68);
 node=*(int **)((char *)root+8);
 count=*(int *)((char *)node+0xd4);
 if(count) {
   do {
     if(item==*(int *)(*(int *)((char *)node+0xd8)+i*8))
       *((unsigned char *)object+0x12c)=(unsigned char)i;
     ++i;
     node=*(int **)((char *)*(int **)((char *)object+0x68)+8);
     count=*(int *)((char *)node+0xd4);
   } while(i!=count);
 }
}
#pragma optimize("", off)

