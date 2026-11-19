/* 6 functions from 0x000E7120 to 0x000E7E3D, found by Ghidra. */
#include "common.h"

void *memcpy(void *, const void *, unsigned int);
struct S7300 { int h; int one; int z; float m[16]; int z2; int z3; float r; int pad; };
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

void func_000E7300(void)
{
  extern char D_00323504, D_001DC494, D_001DC484, D_001DC474, D_001DC460, D_001DC450, D_00323B10, D_00323E41, D_00323E48;
  extern int D_00323AA0, D_00323AA4, D_00323AA8, D_00323AF0, D_00323B04, D_003234E0, D_003234E8, D_00323B50, D_003234F0, D_00323E44;
  extern unsigned int D_00323AF4;
  int func_0013E469(...); int func_0009CBE0(...); int func_001105E0(...); int func_00110060(...);
  int func_0009D3E0(...); int func_00110330(...); int func_0009C590(...);
  int iVar1, iVar2, cnt;
  int *p;
  char buf[268];
  float v[13];
  iVar2 = 1;
  p = (int *)&D_00323504;
  cnt = 15;
  do {
    func_0013E469(buf, &D_001DC494, iVar2);
    iVar1 = func_0009CBE0(buf);
    p[-1] = iVar1;
    p[0] = 1;
    p[1] = 0;
    p[0x13] = 0;
    p[0x14] = 0;
    func_001105E0(*(int *)(iVar1 + 0x2c), p + 3, 0);
    func_0013E469(buf, &D_001DC484, iVar2);
    iVar1 = func_0009CBE0(buf);
    func_00110060(*(int *)(iVar1 + 0x2c), v);
    ((float *)p)[0x15] = ((float *)p)[0x10] - v[9];
    func_0009D3E0(iVar1);
    func_00110330(*(int *)(iVar1 + 0x2c), 0);
    iVar2++;
    p += 0x18;
    cnt--;
  } while (cnt != 0);
  D_00323AA0 = func_0009CBE0(&D_001DC474);
  D_00323AA4 = 4;
  D_00323AA8 = 0;
  D_00323AF0 = 0;
  D_00323AF4 = 0xc3480000;
  iVar2 = func_0009CBE0(&D_001DC460);
  func_00110060(*(int *)(iVar2 + 0x2c), v);
  D_00323B04 = func_0009C590(&D_001DC450);
  func_001105E0(*(int *)(D_00323B04 + 0x2c), &D_00323B10, 0);
  D_003234E0 = 0;
  D_003234E8 = 0;
  D_00323B50 = 0;
  D_003234F0 = 0;
  D_00323E44 = 0;
  D_00323E41 = 0;
  D_00323E48 = 0;
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
