/* 21 functions from 0x00137090 to 0x00137EE7, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

unsigned int func_001371E0(void)
{
 extern unsigned char D_0033272C; extern unsigned int D_00332728; int func_00109B91(...);
 int v;
 if(D_0033272C)return D_00332728;
 v=func_00109B91()-1;
 switch(v){case 0:return 0;case 1:return 5;case 2:return 2;case 3:return 1;case 4:return 3;case 5:return 4;case 6:return 7;case 7:return 8;case 8:return 6;default:return 0;}
}

void *func_001373A0(void)
{
 extern unsigned int D_00332298[32]; extern unsigned int D_0033231C; extern unsigned int D_001E8B70;
 int __stdcall func_00165A09(...); int func_00133CF0(...); unsigned int i;
 for(i=0;i<32;i++)D_00332298[i]=0;
 func_00165A09(&D_001E8B70,0,0,D_0033231C,0x200,0x200,0,1);
 func_00133CF0(0x200,0x200,1,1,D_00332298,D_0033231C);
 return D_00332298;
}

extern "C" void *memcpy(void *, const void *, unsigned int);
unsigned int func_00137870(float a,float b,float c,float d)
{
 extern float D_001D66D8;
 int x=(int)(a*D_001D66D8);
 int y=(int)(b*D_001D66D8);
 int z=(int)(c*D_001D66D8);
 int w=(int)(d*D_001D66D8);
 return ((x&255)<<24)|((w&255)<<16)|((y&255)<<8)|(z&255);
}

void func_00137A20(void){extern unsigned char D_00332734;extern int D_00332740,D_0033273C,D_00332738;void __stdcall func_0014DC90(int,int,int,int,int);if(!D_00332734)func_0014DC90(-1,D_00332738,D_0033273C,D_00332740,0x3f800000);else D_00332734=0;}

#pragma optimize("", on)
void func_00137A60(int a0) {
    int __stdcall func_0014DCF0(int, int);
    func_0014DCF0(3, a0);
}

void func_00137A70(undefined4 *param_1)
{
  int __stdcall func_0014DC90(int, int, int, int, int);
  func_0014DC90((int)(3), (int)(*param_1), (int)(param_1[1]), (int)(param_1[2]), (int)(param_1[3]));
  return;
}

void func_00137A90(int a0, int a1) {
    int __stdcall func_0014DC90(int, int, int, int, int);
    func_0014DC90(9, a0, a1, 0, 1065353216);
}

void func_00137AB0(void){extern unsigned char D_00332734;extern int D_00332740,D_0033273C,D_00332738,D_00332744,D_003323A0,D_003326D0,D_003321C0;void __stdcall func_0014DC90(int,int,int,int,int);void func_0014DD80(void);void __stdcall func_0014ADB0(int,int);if(!D_00332734)func_0014DC90(-1,D_00332738,D_0033273C,D_00332740,0x3f800000);else D_00332734=0;func_0014DD80();if(D_00332744>5){func_0014ADB0(0,(int)&D_003323A0);func_0014ADB0(6,(int)&D_003326D0);func_0014ADB0(1,(int)&D_003321C0);}}

undefined * func_00137C30(int param_1)
{
  extern undefined D_00332748;
  return ((undefined *)&D_00332748) + param_1 * 0x68;
}

undefined4 func_00137C40(int param_1)
{
  extern undefined D_00332A88;
  return *(undefined4 *)(((undefined *)&D_00332A88) + param_1 * 4);
}

void func_00137C50(void){void __stdcall func_0014AF00(int);void func_00088F10(...);unsigned int a[17]={0};for(int i=0;i<17;i++)a[i]=0;a[4]=0x3f800000;a[5]=a[6]=a[7]=0x3f800000;a[0]=a[1]=a[2]=a[3]=0x3f800000;a[8]=a[9]=a[10]=0x3f000000;func_0014AF00((int)a);func_00088F10(0x66);}

extern "C" void *memcpy(void*,const void*,unsigned int);
void func_00137CF0(int *p){int func_00116A90(...);int *d=(int*)func_00116A90(0x28,1,1);memcpy(d,p,36);d[9]=-1;}

void *memcpy(void *, const void *, unsigned int);
void __movsd(unsigned int *, const unsigned int *, unsigned int);
void func_00137D20(unsigned int *dst, const unsigned int *src) { memcpy(dst,src,36); }

