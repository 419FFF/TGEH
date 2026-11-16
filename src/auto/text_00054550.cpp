/* 5 functions from 0x00054550 to 0x00054D4B, found by Ghidra. */
#include "common.h"

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

#pragma optimize("y", on)
void _func_00054CE0(int item, int *obj)
{
 int i; int *container;
 obj[0x98/4]=0x5e;
 obj[0x174/4]=0x41200000;
 obj[0x178/4]=0x40f00000;
 *((unsigned char *)obj+0x12c)=0xff;
 container=*(int **)((char *)obj+0x68);
 container=*(int **)((char *)container+8);
 i=0;
 if(*(int *)((char *)container+0xd4)!=0) {
  do {
   if(item==*(int *)(*(int *)((char *)container+0xd8)+i*8))
    *((unsigned char *)obj+0x12c)=(unsigned char)i;
   ++i;
  } while(i!=*(int *)((char *)container+0xd4));
 }
}
#pragma optimize("", off)

