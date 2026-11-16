/* 12 functions from 0x000B75C0 to 0x000B8569, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000B75C0(void) {}

void func_000B7810(void)
{
  int func_00103990(...);
  extern undefined4 D_0031429C;
  extern undefined4 D_00314240;
  func_00103990(D_0031429C,0);
  *(undefined4 *)(D_00314240 + 0x19e4) = 0x40a00000;
  return;
}

extern int D_00314240,D_003142E0; extern void func_00110330(...); extern void func_00102E80(...); void func_000B7AB0(void){ int p=D_00314240; *(char*)(p+0x1a81)=0; func_00110330(*(int*)(p+0x19f4),0); func_00102E80(D_003142E0); }

extern int D_00314240,D_003142E0,D_0031405C;
extern float D_001D29F4,D_00314058,D_001D27B0,D_001D2808;
extern int D_00314170;
extern int func_0009C590(...);
extern void func_0011F8D0(...);
extern void func_0009D280(...);
extern void func_000B7C50(...);
extern void func_00110330(...);
extern void func_00103990(...);
extern void func_00110060(...);
extern void func_000400C0(...);
extern void func_001105E0(...);
extern int D_00314240;
extern int D_003142E0;
extern int D_0031405C;
#pragma optimize("y", on)
void func_000B8010(int a){ int p=D_00314240; *(char*)(p+0x1a80)=1; *(char*)(p+0x1a81)=1; func_0009D280(*(int*)(p+0x19f0)); func_000B7C50(a); int q=*(int*)(p+0x19f4); *(unsigned char*)(q+0x20)=*(unsigned char*)(q+0x20)&0xfb; p=D_00314240; *(char*)(p+0x1a81)=1; func_00110330(*(int*)(p+0x19f4),1); func_00103990(D_003142E0,1); D_0031405C=0; }
#pragma optimize("", off)
void func_000B8080(void){ float *p=(float*)(D_00314240+0x1570); int outer=3; do { int i=3; do { if((int)p[-3]==2){ p[0]+=D_001D29F4; float temp[13]; func_00110060(*(int*)((int)p[-4]+0x2c),temp); float v=temp[12]-p[0]; if(v<p[-1]){v=p[-1];p[-3]=0;func_000400C0(0);} temp[12]=v; func_001105E0(*(int*)((int)p[-4]+0x2c),temp,0); } p+=5; }while(--i); }while(--outer); }

void func_000B8120(int a){ int base=D_00314240; for(int b=0;b<9;b+=3)for(int s=0;s<3;s++){int i=b+s; if(*(int*)(base+0x1560+i*0x14)==a&&s==0){int *p=(int*)(base+0x1578+b*0x14);p[-5]=1;p[0]=2;p[5]=2;func_000400C0(1);D_00314058+=D_001D27B0;if(D_00314058<D_001D2808)D_00314170=0x3f800000;}}}

