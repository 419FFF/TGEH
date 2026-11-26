/* 15 functions from 0x00077F50 to 0x00078F3C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00078540(int *param_1, int param_2)
{
  int func_0011CD40(...);
  double func_00131760(void);
  extern float D_001D27AC;
  float func_00131230(float);
  extern float D_001D4270;
  float func_00131250(float);
  extern float D_001D31C8;
  extern float D_001D27D4;
  extern float D_001D2808;
  extern float D_001D29E0;
  extern float D_001D29D8;
  extern float D_001D27EC;
  extern float D_001D27B0;
  extern float D_001D2C00;
  extern float D_001D2A14;
  int func_0011CDF0(...);
  int func_0011CE20(...);
  int func_0011CE10(...);
  int func_0011CE30(...);
  int func_0011CE50(...);
  int func_0011CF30(...);
  int func_0011CFC0(...);
  int *puVar1;
  int *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  double lVar6;
  double lVar7;
  double lVar8;
  double lVar9;
  
  iVar3 = func_0011CD40(0xf,10,1,5,1);
  *param_1 = iVar3;
  uVar4 = 0;
  do {
    lVar6 = (double)func_00131760();
    lVar9 = (double)D_001D27AC;
    lVar7 = (double)func_00131230((float)(lVar6 * lVar9));
    lVar8 = (double)func_00131760();
    *(float *)(uVar4 + *(int *)(*param_1 + 4)) =
         (float)(lVar8 * (double)(float)lVar7 * (double)D_001D4270);
    *(int *)(*(int *)(*param_1 + 4) + 4 + uVar4) = 0;
    lVar9 = (double)func_00131250((float)(lVar6 * lVar9));
    lVar6 = (double)func_00131760();
    uVar4 = uVar4 + 0xc;
    *(float *)(*(int *)(*param_1 + 4) + -4 + uVar4) =
         (float)(lVar6 * (double)(float)lVar9 * (double)D_001D31C8);
  } while (uVar4 < 0xb4);
  uVar4 = 0;
  do {
    lVar9 = (double)func_00131760();
    uVar5 = uVar4 + 0xc;
    *(float *)(uVar4 + *(int *)(*param_1 + 0xc)) =
         (float)(lVar9 * (double)D_001D27D4 - (double)D_001D2808);
    *(int *)(*(int *)(*param_1 + 0xc) + -8 + uVar5) = 0x3f800000;
    *(int *)(*(int *)(*param_1 + 0xc) + -4 + uVar5) = 0x40800000;
    uVar4 = uVar5;
  } while (uVar5 < 0x78);
  **(int **)(*param_1 + 0x14) = 0x3f800000;
  lVar9 = (double)func_00131760();
  *(float *)(*(int *)(*param_1 + 0x14) + 4) =
       (float)(lVar9 * (double)D_001D29E0 + (double)D_001D29D8);
  lVar9 = (double)func_00131760();
  *(float *)(*(int *)(*param_1 + 0x14) + 8) =
       (float)(lVar9 * (double)D_001D29E0 + (double)D_001D27EC);
  lVar9 = (double)func_00131760();
  uVar4 = 0;
  *(float *)(*(int *)(*param_1 + 0x14) + 0xc) =
       (float)((lVar9 + (double)D_001D27B0) * (double)D_001D2C00);
  do {
    lVar9 = (double)func_00131760();
    *(float *)(*(int *)(*param_1 + 0x1c) + 4 + uVar4) =
         (float)((lVar9 + (double)D_001D27B0) * (double)D_001D2A14);
    puVar2 = (int *)(*(int *)(*param_1 + 0x1c) + 4 + uVar4);
    puVar1 = (int *)(*(int *)(*param_1 + 0x1c) + uVar4);
    uVar4 = uVar4 + 8;
    *puVar1 = *puVar2;
  } while (uVar4 < 0x28);
  **(int **)(*param_1 + 0x24) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 8) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x24) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE20(param_2,0);
  func_0011CE10(param_2,0);
  func_0011CE30(param_2,0x40a00000,0x41200000);
  func_0011CE50(param_2,0,0,0,0xbe4ccccd);
  func_0011CF30(param_2,0x42200000,0x42200000);
  func_0011CFC0(param_2,0x42200000);
  return;
}

void func_00078730(undefined4 param_1, int param_2)
{
  int func_0011DED0(...);
  func_0011DED0(param_1);
  *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) & 0xfffffffd;
  return;
}

void _func_00078760(void){extern void _func_0011D000(...);extern void _func_0011D270(...);extern void _func_0011D290(...);extern int D_001D64BC;extern void _func_00078540(void);extern void _func_00078730(void);extern void _func_00085E20(void);_func_0011D000(_func_00078540,&D_001D64BC);_func_0011D270(_func_00078730,&D_001D64BC);_func_0011D290(_func_00085E20,&D_001D64BC);}

void func_000787A0(void) {
    extern int D_001D64BC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64BC);
}

void func_000787B0(int *p, int q){int func_0011CD40(...),func_0011CDF0(...),func_0011CE10(...),func_0011CE20(...),func_0011CE30(...),func_0011CF30(...); int func_0011CE50(int,float,float,float,float); int func_0011CFC0(int,float); float func_00131760(...); extern float D_001D54E4,D_001D2A14,D_001D3F8C,D_001D27B0,D_001D2808,D_001D29E0,D_001D27EC,D_001D2B64,D_001E461C,D_001D64CC,D_001D2B60; unsigned int i; float *c;
*p=func_0011CD40(0x19,0x19,1,5,1);
i=0; do{
*(float *)(*(int *)(*p+4)+i)=func_00131760()*D_001D54E4-D_001D2A14;
*(float *)(*(int *)(*p+4)+i+4)=func_00131760()*D_001D3F8C;
float f=func_00131760()*D_001D54E4-D_001D2A14;
i+=12;
*(float *)(*(int *)(*p+4)+i-4)=f;
}while(i<300);
i=0; do{
*(float *)(*(int *)(*p+12)+i)=func_00131760()*2-D_001D27B0;
*(float *)(*(int *)(*p+12)+i+4)=func_00131760()*D_001D2808;
float f=func_00131760()*2-D_001D27B0;
i+=12;
*(float *)(*(int *)(*p+12)+i-4)=f;
}while(i<300);
*(int *)(*(int *)(*p+20))=0x3f19999a;
*(float *)(*(int *)(*p+20)+4)=func_00131760()*D_001D29E0+D_001D27EC;
*(float *)(*(int *)(*p+20)+8)=(func_00131760()+D_001D27B0)*D_001D29E0;
*(int *)(*(int *)(*p+20)+12)=0x3f800000;
i=0; do{
*(float *)(*(int *)(*p+28)+4+i)=(func_00131760()+D_001D27B0)*D_001D2B64;
*(int *)(*(int *)(*p+28)+i)=*(int *)(*(int *)(*p+28)+4+i);
i+=8;
}while(i<0x28);
*(int *)(*(int *)(*p+36))=0;
*(int *)(*(int *)(*p+36)+4)=0;
*(int *)(*(int *)(*p+36)+8)=0x3f800000;
*(int *)(*(int *)(*p+36)+12)=0x3f800000;
func_0011CDF0(q);func_0011CE20(q,*(int *)&D_001E461C);func_0011CE10(q,0x3e99999a);func_0011CE30(q,0x42200000,0x42f00000);
c=*(float **)(*p+20);
func_0011CE50(q,(float)((long double)c[0]*D_001D64CC),(float)((long double)c[1]*D_001D64CC),(float)((long double)c[2]*D_001D64CC),0);
func_0011CF30(q,0x40000000,0x40000000);func_0011CFC0(q,(float)((long double)D_001D2B60/D_001E461C));}

void _func_000789C0(void)
{
  extern int D_001D64D0;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000787B0(...);
  int _func_000688D0(...);
  int _func_00085E20(...);
  _func_0011D000(&D_001D64D0, _func_000787B0);
  _func_0011D270(&D_001D64D0, _func_000688D0);
  _func_0011D290(&D_001D64D0, _func_00085E20);
  _func_0011D2B0(&D_001D64D0, _func_000688D0);
}

void func_00078A00(void) {
    extern int D_001D64D0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64D0);
}

void _func_00078A10(void)
{
  extern int D_001D3CA4, D_001D3CA8, D_001D3CAC, D_001D3CB0;
  extern short D_001D3CB4;
  extern char D_001D64DC, D_001D64D0, D_002FA620[], D_002FA624[], D_002FA628[];
  extern int D_0030809C;
  int func_0011E840(...); int func_0011DD60(...); int func_0011E830(...); int func_0011DEF0(...); int func_00110480(...);
  int a[61];
  unsigned int k;
  int r;
  for (k = 0; k < 0x60; k += 0xc) {
    int *p = a;
    for (r = 0x3d; r != 0; r--)
      *p++ = 0;
    a[46] = 1;
    a[47] = 1;
    a[36] = 2;
    a[37] = 2;
    a[0] = D_001D3CA4;
    a[1] = D_001D3CA8;
    a[2] = D_001D3CAC;
    a[32] = 0;
    a[33] = 0;
    a[34] = 0;
    a[35] = 0;
    a[42] = 3;
    a[43] = 3;
    a[44] = 3;
    a[45] = 3;
    a[48] = 0;
    a[54] = 0;
    a[53] = 0;
    a[55] = 0;
    a[60] = 10;
    a[57] = 0x19;
    a[3] = D_001D3CB0;
    *(short *)&a[4] = D_001D3CB4;
    a[59] = 0x58;
    r = func_0011E840(&D_001D64DC, a);
    *(int *)(D_002FA620 + k) = r;
    r = func_0011DD60(&D_001D64D0, 0x19, r, *(int *)(r + 0x14c));
    *(int *)(D_002FA624 + k) = r;
    func_0011E830(*(int *)(D_002FA620 + k), r);
    func_0011DEF0(*(int *)(D_002FA624 + k));
    *(int *)(D_002FA628 + k) = 0;
    func_00110480(D_0030809C, *(int *)(D_002FA620 + k), 8);
  }
}

void func_00078B90(void)
{
  int func_001160B0(...);
  extern undefined D_002FA624;
  int func_00110760(...);
  extern undefined D_002FA620;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FA624) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FA620) + uVar1));
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < 0x60);
  return;
}

extern float D_002FA628[];
extern float D_001D28C0;
extern float D_00307DB4;
extern void* D_002FA620[];
extern void* D_002FA624[];
void _func_00110060(void*,void*);
void _func_0012F0F0(void*);
void _func_00110420(void*,void*);
void _func_001105E0(void*,void*,int);
void _func_00110000(void*);
void* _func_000F8F40(void*);
void _func_00110480(void*,void*,int);
void _func_0011DED0(void*);
void _func_00078BC0(void* p) { float tmp[16]; int i=0; unsigned int off=0; do { if((long double)*(float*)((char*)D_002FA628+off)+(long double)D_001D28C0<(long double)D_00307DB4) { void* obj=*(void**)((char*)D_002FA620+off); _func_00110060(*(void**)((char*)p+0x2c),tmp); _func_0012F0F0((char*)tmp+4); i*=3; i*=4; obj=*(void**)((char*)D_002FA620+i); _func_00110420(*(void**)((char*)*(char**)((char*)obj+0x2c)),obj); _func_001105E0(obj,(char*)tmp+0x18,0); _func_00110000(obj); void* q=_func_000F8F40(*(void**)((char*)p+0x2c)); _func_00110480(*(void**)((char*)q+0xe0),obj,8); _func_0011DED0(*(void**)((char*)D_002FA624+i)); *(float*)((char*)D_002FA628+i)=D_00307DB4; return; } off+=12; ++i; } while(off<0x60); }

void func_00078C90(int *param_1, int param_2) {
 int func_0011CD40(...); float func_00131760(void); float func_0012EA60(...);
 int func_0011CDF0(...),func_0011CE10(...),func_0011CE20(...),func_0011CE30(...),func_0011CE50(...),func_0011CF30(...),func_0011CFC0(...);
 extern float D_001D27B0,D_001D2B64,D_001D2A14,D_001D2A2C,D_001D31C8;
 unsigned unsigned int i; float* p; long double x;
 *param_1=func_0011CD40(10,4,1,1,1);
 for(i=0;i!=0x78;i+=12) {
 x=func_00131760(); *(float*)(*(int*)(*param_1+4)+i)=(float)((x+x)-D_001D27B0);
 *(int*)(*(int*)(*param_1+4)+i+4)=0;
 x=func_00131760(); *(float*)(*(int*)(*param_1+4)+i+8)=(float)((x+x)-D_001D27B0);
 func_0012EA60((float*)(*(int*)(*param_1+4)+i));
 p=(float*)(*(int*)(*param_1+4)+i);*p=(float)((long double)func_00131760()*(*p)*D_001D2B64);
 p=(float*)(*(int*)(*param_1+4)+i+8);*p=(float)((long double)func_00131760()*(*p)*D_001D2B64);
 }
 for(i=0;i!=0x30;i+=12) {
 x=func_00131760();*(float*)(*(int*)(*param_1+12)+i)=(float)(x*D_001D2A14-D_001D2A2C);
 x=func_00131760();*(float*)(*(int*)(*param_1+12)+i+4)=(float)(x*D_001D31C8);
 x=func_00131760();*(float*)(*(int*)(*param_1+12)+i+8)=(float)(x*D_001D2A14-D_001D2A2C);
 }
 *(int*)(*(int*)(*param_1+0x14))=0x3f19999a;
 *(int*)(*(int*)(*param_1+0x14)+4)=0x3f000000;
 *(int*)(*(int*)(*param_1+0x14)+8)=0x3e99999a;
 *(int*)(*(int*)(*param_1+0x14)+12)=0x3f000000;
 *(int*)(*(int*)(*param_1+0x1c))=0x41d00000;
 *(int*)(*(int*)(*param_1+0x1c)+4)=0x41d00000;
 *(int*)(*(int*)(*param_1+0x24))=0;
 *(int*)(*(int*)(*param_1+0x24)+4)=0;
 *(int*)(*(int*)(*param_1+0x24)+8)=0x3f800000;
 *(int*)(*(int*)(*param_1+0x24)+12)=0x3f800000;
 func_0011CDF0(param_2);func_0011CE10(param_2,0);func_0011CE20(param_2,0);
 func_0011CE30(param_2,0x40000000,0x40000000);
 func_0011CE50(param_2,0,0,0,0xbe4ccccd);
 func_0011CF30(param_2,0x43340000,0x43340000);
 func_0011CFC0(param_2,0x41200000);
}

void func_00078E60(int a,int b,int c){extern void func_0011E3D0(...);extern double func_0012E7B0(...);extern void func_0011CFC0(...);extern float D_001D2B64;int p=*(int*)(a+0x17c);int q=c+0x30;double x;func_0011E3D0(a);x=func_0012E7B0(p+4,q);if(x<D_001D2B64)func_0011CFC0(a+0x54,0);else func_0011CFC0(a+0x54,5);*(int*)(p+4)=*(int*)q;*(int*)(p+8)=*(int*)(c+0x34);*(int*)(p+12)=*(int*)(c+0x38);}

extern int D_001D2B64;
void func_00078ED0(void) {
    extern int D_001D64EC;
    extern void func_00078C90(void);
    extern void func_00083D00(void);
    extern void func_00079D10(void);
    extern void func_00078E60(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_00078C90, &D_001D64EC);
    func_0011D270(func_00083D00, &D_001D64EC);
    func_0011D290(func_00079D10, &D_001D64EC);
    func_0011D2B0(func_00078E60, &D_001D64EC);
    func_0011D2D0(func_00092810, &D_001D64EC);
    func_0011D2F0(func_00083D60, &D_001D64EC);
}

void func_00078F30(void) {
    extern int D_001D64EC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D64EC);
}

extern int D_001D64EC;
extern int D_001D64F4;
int func_0011D0E0(...);
// Shared externs for this file
extern int D_001D64BC;
extern int D_001D64D0;
extern int _D_001D64D0;
extern int _D_001D2B64;
extern int _D_001D64EC;
extern int D_001D64F4;
