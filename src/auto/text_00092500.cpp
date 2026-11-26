/* 16 functions from 0x00092500 to 0x000934EC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00092500(void)
{
  extern int D_001D7140;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_00091F30(...); int func_00078730(...); int func_00085E20(...); int func_00092330(...); int func_000920C0(...);
  func_0011D000(&D_001D7140,func_00091F30);
  func_0011D270(&D_001D7140,func_00078730);
  func_0011D290(&D_001D7140,func_00085E20);
  func_0011D2B0(&D_001D7140,func_00092330);
  func_0011D2D0(&D_001D7140,func_000920C0);
}

void func_000927D0(int param_1)
{
  int func_0011CFC0(...);
  int func_0011DED0(...);
  int func_00116A90(...);
  int iVar1;
  
  func_0011CFC0(param_1 + 0x54,0);
  func_0011DED0(param_1);
  iVar1 = func_00116A90(0x1c,1,0);
  *(int *)(param_1 + 0x17c) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}

void func_00092810(int param_1, undefined4 param_2)
{
  **(undefined4 **)(param_1 + 0x17c) = param_2;
  return;
}

void func_00092B40(void) {
    extern int D_001D2F38;
    extern void func_00092550(void);
    extern void func_000927D0(void);
    extern void func_00079D10(void);
    extern void func_00092830(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_00092550, &D_001D2F38);
    func_0011D270(func_000927D0, &D_001D2F38);
    func_0011D290(func_00079D10, &D_001D2F38);
    func_0011D2B0(func_00092830, &D_001D2F38);
    func_0011D2D0(func_00092810, &D_001D2F38);
    func_0011D2F0(func_00083D60, &D_001D2F38);
}

void func_00092BA0(void) {
    extern int D_001D2F38;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F38);
}

void func_00092BB0(int *p, undefined4 q){int func_0011CD40(...),func_0011CDF0(...),func_0011CE10(...),func_0011CE20(...),func_0011CE30(...),func_0011CE50(...),func_0011CF30(...),func_0011CFC0(...),func_0011CF90(...); float func_00131760(...); float func_0012EA60(...); extern float D_001D27B0,D_001D2B60,D_001D31C8,D_001D28C0,D_001D2C00,D_001D29D8,D_001D29E0,D_001D37AC; extern char D_00306E51; unsigned int i; *p=func_0011CD40(0x32,0x32,4,4,1);
for(i=0;i<600;){
*(float *)(*(int *)(*p+4)+i)=func_00131760()*2-D_001D27B0;
*(int *)(*(int *)(*p+4)+i+4)=0;
*(float *)(*(int *)(*p+4)+i+8)=func_00131760()*2-D_001D27B0;
func_0012EA60((void *)(*(int *)(*p+4)+i));
*(int *)(*(int *)(*p+12)+i)=*(int *)(*(int *)(*p+4)+i);
*(int *)(*(int *)(*p+12)+i+4)=0x3f800000;
*(int *)(*(int *)(*p+12)+i+8)=*(int *)(*(int *)(*p+4)+i+8);
*(float *)(*(int *)(*p+4)+i)=func_00131760()**(float *)(*(int *)(*p+4)+i)*D_001D2B60;
*(float *)(*(int *)(*p+4)+i+4)=(float)((long double)*(float *)(*(int *)(*p+4)+i+4)-D_001D31C8);
*(float *)(*(int *)(*p+4)+i+8)=func_00131760()**(float *)(*(int *)(*p+4)+i+8)*D_001D2B60;
*(float *)(*(int *)(*p+12)+i)=(float)((long double)*(float *)(*(int *)(*p+12)+i)*D_001D28C0);
float *a=(float *)(*(int *)(*p+12)+8+i);
float *b=(float *)(*(int *)(*p+12)+8+i);
i+=12;
*b=(float)((long double)*a*D_001D28C0);
}
i=0; do{
*(float *)(*(int *)(*p+20)+i)=func_00131760()*D_001D2C00+D_001D29D8;
*(float *)(*(int *)(*p+20)+i+4)=func_00131760()*D_001D2C00+D_001D29D8;
float f=func_00131760()*D_001D29E0+D_001D37AC;
i+=16;
*(float *)(*(int *)(*p+20)+i-8)=f;
*(int *)(*(int *)(*p+20)+i-4)=0x3f800000;
}while(i<0x40);
*(int *)(*(int *)(*p+28))=0x40200000;
*(int *)(*(int *)(*p+28)+4)=0x40200000;
*(int *)(*(int *)(*p+28)+8)=0x40a00000;
*(int *)(*(int *)(*p+28)+12)=0x40a00000;
*(int *)(*(int *)(*p+28)+16)=0x40f00000;
*(int *)(*(int *)(*p+28)+20)=0x40f00000;
*(int *)(*(int *)(*p+28)+24)=0x41200000;
*(int *)(*(int *)(*p+28)+28)=0x41200000;
*(int *)(*(int *)(*p+36))=0;
*(int *)(*(int *)(*p+36)+4)=0;
*(int *)(*(int *)(*p+36)+8)=0x3f800000;
*(int *)(*(int *)(*p+36)+12)=0x3f800000;
func_0011CDF0(q);func_0011CE20(q,0);func_0011CE10(q,0);func_0011CE30(q,0x43fa0000,0x447a0000);func_0011CE50(q,0,0,0,0);func_0011CF30(q,0xc1c80000,0xc1c80000);func_0011CFC0(q,0x461c4000);func_0011CF90(q,0,0,0xc4bb8000,0);D_00306E51=0;}

void _func_00092E20(int p){int _func_0011CFC0(...),_func_0011DED0(...),_func_00116A90(...);int v;_func_0011CFC0(p+0x54,0);_func_0011DED0(p);v=_func_00116A90(0x10,1,0);*(int*)(p+0x17c)=v;*(int*)(v+4)=0;*(int*)(v+8)=0;}

#pragma float_control(precise, on)
void func_00092E60(int param_1, undefined4 param_2, int param_3)
{
  float func_000957F0(...);
  extern undefined4 D_00307DF8;
  int func_00096940(...);
  extern float D_001D27B8;
  extern float D_001D4210;
  extern undefined D_00306E51;
  int func_00110330(...);
  int func_0011CFC0(...);
  int iVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  
  iVar5 = param_3;
  iVar4 = param_1;
  iVar1 = *(int *)(param_1 + 0x17c);
  func_000957F0(param_3 + 0x30,&param_1,0);
  if (*(int **)(D_00307DF8 + 0x110) == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = **(int **)(D_00307DF8 + 0x110);
    if (((((iVar9 == 0x10) || (iVar9 == 0x11)) || (iVar9 == 0x12)) ||
        ((iVar9 == 0x13 || (iVar9 == 0x17)))) || (iVar9 == 0x16)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
  }
  if (param_1 == 0) {
    iVar9 = *(int *)(iVar1 + 4);
  }
  else if ((iVar9 != 0) && (iVar6 = func_00096940(param_1), iVar6 != 0)) {
    iVar9 = 0;
  }
  if (*(float *)(iVar1 + 8) <= D_001D27B8) {
    if ((*(int *)(iVar1 + 4) == 0) && (iVar9 != 0)) {
      *(undefined4 *)(iVar1 + 8) = 0x3e4ccccd;
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar5 + 0x34);
    }
    else {
      func_0011CFC0(iVar4 + 0x54,0);
    }
  }
  else {
    fVar3 = *(float *)(iVar1 + 8) - D_001D4210;
    *(float *)(iVar1 + 8) = fVar3;
    if (fVar3 < D_001D27B8) {
      func_0011CFC0(iVar4 + 0x54,0x47c35000);
      *(undefined4 *)(iVar1 + 8) = 0;
    }
  }
  *(int *)(iVar1 + 4) = iVar9;
  *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(iVar1 + 0xc);
  uVar2 = *(uint *)(iVar4 + 0x15c);
  uVar7 = 0;
  if (3 < (int)uVar2) {
    pfVar8 = (float *)(*(int *)(iVar4 + 0x160) + 0x78);
    do {
      if (pfVar8[-0x16] != D_001D27B8) goto LAB_00002acf;
      if (*pfVar8 != D_001D27B8) {
        uVar7 = uVar7 + 1;
        goto LAB_00002acf;
      }
      if (pfVar8[0x16] != D_001D27B8) {
        uVar7 = uVar7 + 2;
        goto LAB_00002acf;
      }
      if (pfVar8[0x2c] != D_001D27B8) {
        uVar7 = uVar7 + 3;
        goto LAB_00002acf;
      }
      uVar7 = uVar7 + 4;
      pfVar8 = pfVar8 + 0x58;
    } while (uVar7 < uVar2 - 3);
  }
  if (uVar7 < uVar2) {
    pfVar8 = (float *)(*(int *)(iVar4 + 0x160) + 0x20 + uVar7 * 0x58);
    do {
      if (*pfVar8 != D_001D27B8) break;
      uVar7 = uVar7 + 1;
      pfVar8 = pfVar8 + 0x16;
    } while (uVar7 < uVar2);
  }
LAB_00002acf:
  if (uVar7 >= uVar2) {
    if (D_00306E51 < '\x14') {
      D_00306E51 = D_00306E51 + '\x01';
      return;
    }
    func_00110330(param_2,0);
  }
  D_00306E51 = 0;
  return;
}
void func_00093040(void) {
    extern int D_001D2F30;
    extern void func_00092BB0(void);
    extern void func_00092E20(void);
    extern void func_00079D10(void);
    extern void func_00092E60(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_00092BB0, &D_001D2F30);
    func_0011D270(func_00092E20, &D_001D2F30);
    func_0011D290(func_00079D10, &D_001D2F30);
    func_0011D2B0(func_00092E60, &D_001D2F30);
    func_0011D2D0(func_00092810, &D_001D2F30);
    func_0011D2F0(func_00083D60, &D_001D2F30);
}

void func_000930A0(void) {
    extern int D_001D2F30;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F30);
}

void _func_00093430(void){extern int D_001D2F28;void _func_000930B0(void),_func_000927D0(void),_func_00079D10(void),_func_00092810(void),_func_00083D60(void);void _func_0011D000(...),_func_0011D270(...),_func_0011D290(...),_func_0011D2B0(...),_func_0011D2D0(...),_func_0011D2F0(...);_func_0011D000(_func_000930B0,&D_001D2F28);_func_0011D270(_func_000927D0,&D_001D2F28);_func_0011D290(_func_00079D10,&D_001D2F28);_func_0011D2B0(&D_001D2F28,0x93330);_func_0011D2D0(_func_00092810,&D_001D2F28);_func_0011D2F0(_func_00083D60,&D_001D2F28);}

void func_00093490(void) {
    extern int D_001D2F28;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F28);
}

undefined4 func_000934A0(undefined4 param_1)
{
  int func_0010F750(...);
  extern undefined4 D_00306E58;
  extern undefined4 D_00306E60;
  int func_000688D0(...);
  extern undefined4 D_00306E64;
  int func_0011BF40(...);
  extern undefined D_001D7160;
  undefined4 uVar1;
  
  uVar1 = func_0010F750(param_1,D_00306E58,0x160);
  if (D_00306E60 == 0) {
    func_000688D0();
    D_00306E64 = func_0011BF40(((undefined *)&D_001D7160),0);
    func_000688D0();
  }
  D_00306E60 = D_00306E60 + 1;
  return uVar1;
}

