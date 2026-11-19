/* 19 functions from 0x0007ADC0 to 0x0007BDB0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_0007AF50(int s, int arg)
{
  extern int D_001E4618;
  extern float D_001D290C, D_001D27B0, D_001D65B0, D_001D27B8;
  extern char D_002FA6D4;
  extern int D_002FA6C8, D_0030809C;
  int func_000F8F40(...); int func_00110420(...); int func_00110480(...);
  bool b = false;
  unsigned int u;
  int o;
  if (*(int *)(s + 0x4c) == 0) {
    u = 0;
    if (*(unsigned int *)(s + 0x15c) > 0) {
      o = 0;
      do {
        if (D_001D27B8 != *(float *)(*(int *)(s + 0x160) + 0x20 + o)) b = true;
        float d = (float)D_001E4618;
        float *p = (float *)(*(int *)(s + 0x160) + 0x34 + o);
        if (D_001E4618 < 0) d = d + D_001D290C;
        u++;
        o += 0x58;
        *p = *p - (float)((double)D_001D27B0 / d) * D_001D65B0;
      } while (u < *(unsigned int *)(s + 0x15c));
      if (b) return;
    }
    int r = func_000F8F40(arg);
    func_00110420(*(int *)(r + 0xe0), D_002FA6C8);
    func_00110480(D_0030809C, D_002FA6C8, 8);
    D_002FA6D4 = 0;
    return;
  }
  o = 0;
  if (*(unsigned int *)(s + 0x15c) > 0) {
    u = 0;
    do {
      float d = (float)D_001E4618;
      float *p = (float *)(*(int *)(s + 0x160) + 0x34 + u);
      if (D_001E4618 < 0) d = d + D_001D290C;
      o++;
      u += 0x58;
      *p = *p - (float)((double)D_001D27B0 / d) * D_001D65B0;
    } while ((unsigned int)o < *(unsigned int *)(s + 0x15c));
  }
}

void func_0007B080(int param_1) {
 int func_00110060(...); extern int D_002FA6D0;
 float func_00131760(void); extern float D_001D27EC,D_001D3E00,D_001D65B4;
 int iVar1=*(int*)(*(int*)(param_1+0x50)+0x2c);
 __declspec(align(16)) struct { float first; char pad[4]; float second; char rest[48]; } local;
 func_00110060(*(int*)(D_002FA6D0+0x2c),&local.first);
 int i=0; do {
 float v=func_00131760();
 *(float*)(*(int*)(iVar1+0xc)+i)=((v-D_001D27EC)*D_001D3E00+local.first)*D_001D65B4;
 v=func_00131760(); i+=0xc;
 *(float*)(*(int*)(iVar1+0xc)+i-4)=((v-D_001D27EC)*D_001D3E00+local.second)*D_001D65B4;
 } while(i<0x3c);
}

void func_0007B110(void)
{
  int func_0011D000(...);
  extern undefined D_001D65C0;
  int func_0007AAA0(...);
  int func_0011D270(...);
  int func_00078730(...);
  int func_0011D290(...);
  int func_00085E20(...);
  int func_0011D2B0(...);
  int func_0007AC20(...);
  int func_0011D2D0(...);
  int func_0007AD30(...);
  extern undefined D_001D65B8;
  int func_0007ADC0(...);
  int func_0007AF50(...);
  int func_0007B080(...);
  func_0011D000(((undefined *)&D_001D65C0),&func_0007AAA0);
  func_0011D270(((undefined *)&D_001D65C0),&func_00078730);
  func_0011D290(((undefined *)&D_001D65C0),&func_00085E20);
  func_0011D2B0(((undefined *)&D_001D65C0),&func_0007AC20);
  func_0011D2D0(((undefined *)&D_001D65C0),&func_0007AD30);
  func_0011D000(((undefined *)&D_001D65B8),&func_0007ADC0);
  func_0011D270(((undefined *)&D_001D65B8),&func_00078730);
  func_0011D290(((undefined *)&D_001D65B8),&func_00085E20);
  func_0011D2B0(((undefined *)&D_001D65B8),&func_0007AF50);
  func_0011D2D0(((undefined *)&D_001D65B8),&func_0007B080);
  return;
}

void func_0007B1B0(void)
{
 int func_0011D0E0(...);
 extern undefined D_001D65C0;
 extern undefined D_001D65B8;
 func_0011D0E0(&D_001D65C0);
 func_0011D0E0(&D_001D65B8);
}

void func_0007B3A0(void)
{
  int func_001160B0(...);
  extern undefined4 D_002FA6DC;
  int func_00110760(...);
  extern undefined4 D_002FA6D8;
  extern undefined4 D_002FA6CC;
  extern undefined4 D_002FA6C8;
  func_001160B0(D_002FA6DC);
  func_00110760(D_002FA6D8);
  func_001160B0(D_002FA6CC);
  func_00110760(D_002FA6C8);
  return;
}

void _func_0007B710(void)
{
  extern int D_001D65F8;
  int _func_0011D000(...);
  int _func_0011D2B0(...);
  int _func_0007B560(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D65F8, _func_0007B560);
  _func_0011D2B0(&D_001D65F8, _func_000688D0);
}

void func_0007B740(void) {
    extern int D_001D65F8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D65F8);
}

void func_0007B750(int *param_1, int param_2)
{
  int func_0011CD40(...);
  float func_00131760(void);
  extern float D_001D3E00;
  extern float D_001D2C00;
  extern float D_001D29F4;
  int func_0011CDF0(...);
  int func_0011CE10(...);
  int func_0011CE20(...);
  int func_0011CE30(...);
  int func_0011CE50(...);
  int func_0011CF30(...);
  int func_0011CFC0(...);
  int func_0011CF90(...);
  int *puVar1;
  int iVar2;
  unsigned int uVar3;
  double lVar4;

  iVar2 = func_0011CD40(1,0x32,1,10,1);
  *param_1 = iVar2;
  **(int **)(iVar2 + 4) = 0;
  *(int *)(*(int *)(*param_1 + 4) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 4) + 8) = 0;
  uVar3 = 0;
  do {
    lVar4 = func_00131760();
    *(float *)(uVar3 + *(int *)(*param_1 + 0xc)) = (float)(lVar4 * D_001D3E00 - D_001D2C00);
    *(int *)(*(int *)(*param_1 + 0xc) + 4 + uVar3) = 0x3e4ccccd;
    lVar4 = func_00131760();
    uVar3 = uVar3 + 0xc;
    *(float *)(*(int *)(*param_1 + 0xc) + -4 + uVar3) = (float)(lVar4 * D_001D3E00 - D_001D2C00);
  } while (uVar3 < 600);
  **(int **)(*param_1 + 0x14) = 0;
  *(int *)(*(int *)(*param_1 + 0x14) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 0x14) + 8) = 0;
  *(int *)(*(int *)(*param_1 + 0x14) + 0xc) = 0x3f800000;
  uVar3 = 0;
  do {
    lVar4 = func_00131760();
    *(float *)(uVar3 + *(int *)(*param_1 + 0x1c)) = (float)(lVar4 + D_001D29F4);
    puVar1 = (int *)(*(int *)(*param_1 + 0x1c) + uVar3);
    iVar2 = *(int *)(*param_1 + 0x1c) + uVar3;
    uVar3 = uVar3 + 8;
    *(int *)(iVar2 + 4) = *puVar1;
  } while (uVar3 < 0x50);
  **(int **)(*param_1 + 0x24) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 8) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x24) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE10(param_2,0);
  func_0011CE20(param_2,0);
  func_0011CE30(param_2,0x43fa0000,0x43fa0000);
  func_0011CE50(param_2,0,0,0,0x3f800000);
  func_0011CF30(param_2,0,0);
  func_0011CFC0(param_2,0x42200000);
  func_0011CF90(param_2,0,0,0xc3c80000,0);
  func_0011CE10(param_2,0x3f19999a);
}

void _func_0007B8C0(void)
{
  extern int D_001D6604;
  int _func_0011D000(...);
  int _func_0011D2B0(...);
  int _func_0007B750(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6604, _func_0007B750);
  _func_0011D2B0(&D_001D6604, _func_000688D0);
}

void func_0007B8F0(void) {
    extern int D_001D6604;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6604);
}

void func_0007BA90(void)
{
  int func_001160B0(...);
  extern undefined D_002FA6E8;
  int func_00110760(...);
  extern undefined D_002FA6E4;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FA6E8) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FA6E4) + uVar1));
    uVar1 = uVar1 + 0x18;
  } while (uVar1 < 0x30);
  return;
}

int* func_0007BAC0(int param_1,int param_2) {
 extern int _D_002FA6F4[],_D_002FA6E4[],_D_002FA6E8[],_D_002FA6F8[],_D_0030809C;
 int _func_00110420(...); void _func_0012F120(...); void _func_001105E0(...);
 void _func_00110000(...); void _func_00110550(...); void _func_0011DED0(...);
 __declspec(align(16)) char local[64]; int i=0; unsigned int offset=0;
 do { if (*(int*)((char*)_D_002FA6F4+offset)==0) goto found; offset+=0x18; ++i; } while(offset<0x30);
 return 0;
 found:
 { int* p=&_D_002FA6E4[i*6];
 _func_00110420(_D_0030809C,*p); _func_0012F120(local);
 _func_001105E0(*p,local,0); _func_00110000(*p);
 _func_00110550(param_1,*p,8); _func_00110000(*p);
 _func_0011DED0(_D_002FA6E8[i*6]);
 _D_002FA6F4[i*6]=1; _D_002FA6F8[i*6]=param_2;
 return p; }
}

void func_0007BB70(int param_1, int param_2)
{
  extern int D_002FA6F8[], D_002FA6E4[], D_002FA6E8[], D_002FA6F4[], D_0030809C;
  int func_00110420(...); int func_00110480(...); int func_0011DF00(...); int func_0011D310(...);
  int i = 0; unsigned int off = 0;
  do {
    if (*(int*)((char*)D_002FA6F8 + off) == param_2) {
      int o = i * 0x18;
      func_00110420(param_1, *(int*)((char*)D_002FA6E4 + o));
      func_00110480(D_0030809C, *(int*)((char*)D_002FA6E4 + o), 8);
      func_0011DF00(*(int*)((char*)D_002FA6E8 + o));
      int p = *(int*)((char*)D_002FA6E8 + o);
      unsigned int j = 0;
      if (*(unsigned int*)(p + 0x15c) > 0) {
        do {
          func_0011D310(*(int*)(p + 0x160) + i * 0x58, *(int*)(*(int*)(p + 0x50) + 0x2c), p + 0x54);
          *(int*)(*(int*)(p + 0x160) + 0x20 + i * 0x58) = 0;
          j++;
        } while (j < *(unsigned int*)(p + 0x15c));
      }
      *(int*)((char*)D_002FA6F4 + o) = 0;
      *(int*)((char*)D_002FA6F8 + o) = 0;
      return;
    }
    off += 0x18; i++;
  } while (off < 0x30);
}

