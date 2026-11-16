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

unsigned int func_00137870(float a,float b,float c,float d)
{
 extern float D_001D66D8;
 int x=(int)(a*D_001D66D8), y=(int)(b*D_001D66D8), z=(int)(c*D_001D66D8), w=(int)(d*D_001D66D8);
 return ((x&255)<<24)|((y&255)<<16)|((z&255)<<8)|(w&255);
}

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

