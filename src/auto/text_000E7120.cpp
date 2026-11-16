/* 6 functions from 0x000E7120 to 0x000E7E3D, found by Ghidra. */
#include "common.h"

void *memcpy(void *, const void *, unsigned int);
void func_000E72A0(void)
{
 extern float D_00323B00; extern u32 D_00323B10; extern int D_00323B04;
 int func_001105E0(...); int func_00086AA0(...);
 float local[17];
 memcpy(local,&D_00323B10,64);
 local[13]+=D_00323B00;
 func_001105E0(*(int *)(D_00323B04+0x2c),local,0);
 func_00086AA0(*(int *)&D_00323B00);
}

#pragma optimize("y", on)
void func_000E7E00(int a,int b,int c)
{
 extern u32 D_00323B68,D_00323E38,D_00323B64,D_00323B78;
 int i=0; u32 *p=&D_00323B68;
 do {
  if(*p==0) {
   *(u32 *)((char *)&D_00323B68+i*24)=1;
   *(u32 *)((char *)&D_00323B64+i*24)=b;
   *(u32 *)((char *)&D_00323B78+i*24)=c;
   return;
  }
  p=(u32 *)((char *)p+24); ++i;
 } while(p!=&D_00323E38);
}
#pragma optimize("", on)
