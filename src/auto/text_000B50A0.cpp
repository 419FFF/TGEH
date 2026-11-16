/* 23 functions from 0x000B50A0 to 0x000B58B3, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000B50A0(void) {
    extern int D_00313D84;
    extern int D_00313BB0;
    D_00313D84 = -1;
    D_00313BB0 = -1;
}

bool func_000B50B0(int param_1, int param_2) { extern char _D_00313BAC[]; int func_0013F2E9(...); int i; for(i=0;i<0x3144;i+=0x106c) if(i!=param_2 && _D_00313BAC[i] && !func_0013F2E9(_D_00313BAC+i,param_1)) return 0; return 1; }

undefined4 *func_000B5100(char *param_1,int param_2,int param_3) { int func_00116A90(...); int func_0006EB60(...); char c; int n; undefined4 *p; unsigned int size; p=(undefined4*)func_00116A90(0x40,1,1); size=(param_3+31)&~63; p[3]=size; p[4]=0; p[5]=0; p[2]=param_2; p[6]=func_00116A90(size*param_2,1,1); p[0]=func_0006EB60(p[3]); p[1]=func_0006EB60(p[3]); *(char*)(p+15)=1; while((c=*param_1)!=0) { ((char*)p)[0x1c+(param_1-(char*)0)]=c; param_1++; } return p; }

void func_000B5180(undefined4 *param_1)
{
  int func_00116FB0(...);
  int func_0006EB40(...);
  func_00116FB0(param_1[6]);
  func_0006EB40(*param_1);
  func_0006EB40(param_1[1]);
  func_00116FB0(param_1);
  return;
}

int func_000B51B0(unsigned int *p) { int func_0006E9E0(...); int func_00116A90(...); unsigned int index; unsigned int *bits; if(p[4]<p[3]) { func_0006E9E0(p[0],&index); bits=(unsigned int*)(*(int*)p[0]+(index>>5)*4); *bits |= 1<<(index&31); p[4]++; if(p[4]>p[5]) p[5]=p[4]; return p[2]*index+p[6]; } if(*((char*)p+0x3c)) { p[4]++; if(p[4]>p[5])p[5]=p[4]; return func_00116A90(p[2],1,1); } return 0; }

void func_000B5420(int param_1, undefined1 param_2)
{
  *(undefined1 *)(param_1 + 0x3c) = param_2;
  return;
}

void func_000B5430(void)
{
  int func_0013F2E9(...);
  extern undefined4 D_00308158;
  extern undefined D_001D8A74;
  int func_000C2F40(...);
  extern undefined D_001D8A60;
  int func_000CCDA0(...);
  extern undefined D_001D89EC;
  int func_000BC450(...);
  int iVar1;
  
  iVar1 = func_0013F2E9(**(undefined4 **)(D_00308158 + 0x1c),((undefined *)&D_001D8A74));
  if (iVar1 == 0) {
    func_000C2F40();
  }
  iVar1 = func_0013F2E9(**(undefined4 **)(D_00308158 + 0x1c),((undefined *)&D_001D8A60));
  if (iVar1 == 0) {
    func_000CCDA0();
  }
  iVar1 = func_0013F2E9(**(undefined4 **)(D_00308158 + 0x1c),((undefined *)&D_001D89EC));
  if (iVar1 == 0) {
    func_000BC450();
    return;
  }
  return;
}

void func_000B54A0(void) {
    int func_000400A0(...);
    func_000400A0();
}

void func_000B54B0(void) {
    int func_000400B0(...);
    func_000400B0();
}

void func_000B54C0(void) {
    int func_000400C0(...);
    func_000400C0();
}

void func_000B54D0(int param_1) { int func_000A1EA0(...); int func_0011A6A0(...); int func_001015F0(...); int func_000400A0(...); int func_000400B0(...); int func_000400C0(...); extern unsigned char D_00313F0E; extern int D_00307DF8; D_00313F0E=(unsigned char)param_1; if(*(int*)(D_00307DF8+0x84))func_000A1EA0(*(int*)(D_00307DF8+0x84),param_1); func_0011A6A0(param_1); func_001015F0(param_1); func_000400A0(param_1); func_000400B0(param_1); func_000400C0(param_1); }

void func_000B5520(unsigned char param_1) { extern unsigned char D_00313F0D,D_00313F0E,D_00313F14,D_00313F10,D_0031151C; extern int D_00313EF8,D_00313EF4,D_00313EFC,D_00307DF8; int func_000A1EA0(...); int func_0011A6A0(...); int func_001015F0(...); int func_000400A0(...); int func_000400B0(...); int func_000400C0(...); int func_000A0690(...); D_00313F0D=param_1; D_00313EF8=0; D_00313EF4=2; D_00313EFC=0x4479c000; D_00313F0E=0; if(*(int*)(D_00307DF8+0x84))func_000A1EA0(*(int*)(D_00307DF8+0x84),0); func_0011A6A0(0); func_001015F0(0); func_000400A0(0); func_000400B0(0); func_000400C0(0); func_000A0690(0); if(D_00313F14){D_0031151C=D_00313F10;return;} D_00313F10=(unsigned int)(unsigned char)D_0031151C; D_00313F14=1; }

void func_000B55C0(float param_1) { extern float D_00313EFC; extern float D_00313F00; extern float D_00313F04; extern float D_001D27B0; int func_00103210(...); int func_00103990(...); extern char D_001D8D10; extern char D_001D8D00; D_00313EFC=param_1; if(param_1<D_00313F00){D_00313F00-=D_001D27B0; func_00103990(func_00103210(&D_001D8D10,0));} if(D_00313EFC<D_00313F04){D_00313F04-=D_001D27B0; func_00103990(func_00103210(&D_001D8D00,0));} }

unsigned char func_000B5650(int param_1) { extern unsigned char D_00313F15,D_00313F17,D_00313F16,D_00313F18; extern int D_00313ED8; if(param_1==0x13)return D_00313F15; if(param_1==0x14)return D_00313F17; if(param_1==0x15)return D_00313F16; if(param_1==0x12)return D_00313F18; return D_00313ED8==param_1; }

char func_000B5690(void) {
    extern char D_00313F0E;
    return D_00313F0E;
}

int func_000B57F0(void) {
    extern int D_00313ED8;
    return D_00313ED8;
}

void func_000B5800(void) { extern int D_00307DF8; extern unsigned char D_00313F0E; int func_000A1EA0(...); int func_0011A6A0(...); int func_001015F0(...); int func_000400A0(...); int func_000400B0(...); int func_000400C0(...); D_00313F0E=0; if(*(int*)((char*)D_00307DF8+0x84)) func_000A1EA0(*(int*)((char*)D_00307DF8+0x84),0); func_0011A6A0(0); func_001015F0(0); func_000400A0(0); func_000400B0(0); func_000400C0(0); }

bool func_000B5850(void) { extern int _D_00313ED8; if (_D_00313ED8) return false; return true; }

void func_000B5860(void)
{
  extern undefined4 D_00307DF8;
  int func_00110330(...);
  int func_0006F7F0(...);
  int func_0006F820(...);
  int func_00089410(...);
  int func_0002D450(...);
  extern undefined D_001D3BE4;
  int func_000A05D0(...);
  int func_000860B0(...);
  int iVar1;
  
  iVar1 = *(int *)(D_00307DF8 + 0x110);
  *(undefined1 *)(iVar1 + 0x1ac) = 0;
  func_00110330(*(undefined4 *)(iVar1 + 0x210),0);
  func_0006F7F0(2,0x42c84ccd);
  func_0006F820();
  func_00089410(0,1);
  func_0002D450(((undefined *)&D_001D3BE4));
  func_000A05D0(0);
  func_000860B0();
  return;
}

