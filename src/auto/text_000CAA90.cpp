/* 15 functions from 0x000CAA90 to 0x000CBA10, found by Ghidra. */
#include "common.h"

struct Mat64 { float f[16]; };
extern Mat64 D_0031AA80[];

void func_000CAA90(float *param_1)
{
 int func_00110300(...),func_00110060(...),func_0012F890(...);
 extern int D_00318D10,D_00313B60;
 extern float D_001D27B0,D_001DA9EC,D_001D2800,D_0031AA10,D_0031AA0C;
 float fVar1,fVar2,local_60,local_5c,local_58;
 char local_50[76];
 func_00110300(*(int *)(D_00318D10+0x2c),0x1da9f0,0x18);
 {
  int p=D_00313B60;
  func_00110060(p,local_50);
  fVar1=*(float *)(p+0xe4); fVar2=*(float *)(p+0xe8);
 }
 local_60=param_1[0]; local_5c=param_1[1]; local_58=param_1[2];
 func_0012F890(&local_60,local_50);
 D_0031AA10=(float)(((double)local_5c*((double)D_001D27B0/local_58)*fVar2)-D_001D27B0)*D_001DA9EC;
 D_0031AA0C=(float)((((double)D_001D27B0/local_58)*local_60*fVar1)+D_001D27B0)*D_001D2800;
}

void func_000CAB50(void)
{
 extern int D_0031A9D0,D_0031A9D8,D_0031A9C8,D_0031A9CC,D_0031A9F0,D_00318D10,D_0031A9EC;
 extern char D_001DA9F8;
 int func_00110300(...),func_00100400(...),func_001160E0(...),func_00116110(...),func_0011AF60(...);
 D_0031A9D0=0;
 D_0031A9D8=0;
 D_0031A9C8=0;
 D_0031A9CC=0;
 D_0031A9F0=func_00110300(*(int *)(D_00318D10+0x2c),&D_001DA9F8,0);
 D_0031A9EC=func_00100400(0,1,0);
 func_001160E0(D_0031A9EC,1,0,100,0x42700000);
 func_00116110(D_0031A9EC,1);
 func_0011AF60(D_0031A9F0,D_0031A9EC);
}

void func_000CABE0(void)
{
 extern float D_001D27F4,D_0031A9D8,D_001D27B8,D_001D27B0,D_001D27FC;
 extern int D_0031A9EC;
 int func_00116130(...);
 float value=D_001D27F4-D_0031A9D8;
 if(value>=D_001D27B8) value=D_001D27B8;
 else if(value<D_001D27B0) value=D_001D27B0;
 func_00116130(D_0031A9EC,value*D_001D27FC);
}

void func_000CB500(void)
{
 int func_0009A880(...), func_000CB3E0(...);
 unsigned int first, first_rem, second, second_rem, i=100;
 do {
  first=(unsigned int)func_0009A880();
  first_rem=first%36;
  do { second=(unsigned int)func_0009A880(); second_rem=second%36; }
  while(first_rem==second_rem);
  func_000CB3E0(first_rem,second_rem);
  --i;
 } while(i);
}
