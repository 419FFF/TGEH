/* 12 functions from 0x00064090 to 0x00064F3E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00064180(void)
{
  int func_00063FD0(...);
  int func_00064090(...);
  func_00063FD0();
  func_00064090();
  return;
}

void _func_00064190(void) { extern int D_00308158; extern char D_001D54FC,D_001D54E8,D_002F7348,D_002F734C,D_002F7350; extern int _func_0013E469(...); extern int _func_00110300(...); char local[256]; int i=0; do { if(i!=0) { _func_0013E469(local,&D_001D54FC,i); } else { _func_0013E469(local,&D_001D54E8); } int a=_func_00110300(*(int*)(D_00308158+0x2c),local,0); *(int*)(&D_002F7348+i*12)=a; *(int*)(&D_002F734C+i*12)=0x3f800000; *(&D_002F7350+i*12)=0; ++i; } while(i<0x47); }

void func_00064440(int a0) {
    extern int D_002F769C;
    D_002F769C = a0;
}

void func_00064450(int a0) {
    extern int D_002F76A0;
    D_002F76A0 = a0;
}

#pragma optimize("p", off)
void func_00064460(int param_1, undefined4 param_2)
{
  extern undefined D_001D5574;
  extern undefined D_001D556C;
  extern undefined D_001D5564;
  extern undefined D_001D5558;
  extern undefined D_001D554C;
  extern undefined D_001D5540;
  extern undefined D_001D5534;
  extern undefined D_001D5528;
  extern volatile unsigned int D_002F769C;
  extern undefined4 D_002F76A0;
  int func_00120E00(...);
  int func_00120EA0(...);
  int func_00120ED0(...);
  int func_00120F60(...);
  extern float D_001D557C;
  int func_00120F70(...);
  int func_00120F80(...);
  int func_00120E70(...);
  int func_000AFD10(...);
  extern undefined D_001D556C;
  extern undefined D_001D5564;
  extern undefined D_001D554C;
  float func_001219C0(int, ...);
  int func_00120E50(...);
  extern float D_001D2800;
  extern double D_001D4508;
  int func_0006F4D0(...);
  int func_00121990(...);
  extern double D_001D27EC;
  int func_000688D0(...);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  float lVar9;
  longdouble lVar10;
  float lVar11;
  longdouble lVar12;
  
  func_00120E00(param_1);
  func_00120EA0(1,1,1,0);
  func_00120ED0(4,5);
  func_00120F60(D_001D557C / (float)*(ushort *)(param_1 + 0x258a));
  func_00120F70(D_001D557C / (float)*(ushort *)(param_1 + 0x258a));
  func_00120F80(0x40200000,0x40200000);
  func_00120E70(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  uVar1 = func_000AFD10(((undefined *)&D_001D5574));
  uVar2 = func_000AFD10(((undefined *)&D_001D556C));
  uVar3 = func_000AFD10(((undefined *)&D_001D5564));
  uVar4 = func_000AFD10(((undefined *)&D_001D5558));
  func_000AFD10(((undefined *)&D_001D554C));
  uVar5 = func_000AFD10(((undefined *)&D_001D5540));
  uVar6 = func_000AFD10(((undefined *)&D_001D5534));
  uVar7 = func_000AFD10(((undefined *)&D_001D5528));
  switch(D_002F769C) {
  case 1:
    lVar12 = (float)func_001219C0(uVar2,param_2);
    func_00120E50((float)((float)D_001D2800 - lVar12 * (float)D_001D4508));
    func_0006F4D0(D_002F76A0 == 1);
    func_00121990(uVar2);
    lVar12 = (float)func_001219C0(uVar3,param_2);
    func_00120E50((float)(lVar12 * (float)D_001D4508 + (float)D_001D2800));
    bVar8 = D_002F76A0 == 2;
    goto LAB_00002547;
  case 2:
    lVar9 = (float)func_001219C0(uVar2,param_2);
    lVar12 = (float)D_001D27EC;
    lVar11 = (float)D_001D2800;
    lVar10 = (float)func_001219C0(uVar3);
    func_00120E50((float)((float)(float)(lVar11 - lVar9 * lVar12) -
                          lVar10 * (float)D_001D27EC));
    func_0006F4D0(D_002F76A0 == 1);
    func_00121990(uVar2);
    func_00120E50(0x43a00000,param_2);
    func_0006F4D0(D_002F76A0 == 2);
    func_00121990(uVar3);
    lVar11 = (float)func_001219C0(uVar7,param_2);
    lVar12 = (float)func_001219C0(uVar3);
    lVar12 = lVar12 + (float)(float)lVar11;
    goto LAB_00002528;
  case 3:
    func_00120E50(0x43a00000,param_2);
    func_0006F4D0(1);
    func_00121990(uVar1);
    goto switchD_000024af_default;
  case 4:
    lVar12 = (float)func_001219C0(uVar1,param_2);
    func_00120E50((float)((float)D_001D2800 - lVar12 * (float)D_001D27EC));
    func_0006F4D0(D_002F76A0 == 3);
    func_00121990(uVar1);
    lVar12 = (float)func_001219C0(uVar7,param_2);
    goto LAB_00002528;
  case 5:
    lVar12 = (float)func_001219C0(uVar4,param_2);
    func_00120E50((float)((float)D_001D2800 - lVar12 * (float)D_001D4508));
    func_0006F4D0(D_002F76A0 == 4);
    func_00121990(uVar4);
    lVar12 = (float)func_001219C0(uVar7,param_2);
    lVar12 = lVar12 * (float)D_001D4508;
    break;
  case 6:
    lVar9 = (float)func_001219C0(uVar5,param_2);
    lVar12 = (float)D_001D4508;
    lVar11 = (float)D_001D2800;
    lVar10 = (float)func_001219C0(uVar4);
    func_00120E50((float)((float)(float)(lVar11 - lVar9 * lVar12) - lVar10));
    func_0006F4D0(D_002F76A0 == 8);
    func_00121990(uVar5);
    func_00120E50(0x43a00000,param_2);
    func_0006F4D0(D_002F76A0 == 4);
    func_00121990(uVar4);
    lVar9 = (float)func_001219C0(uVar7,param_2);
    lVar11 = (float)D_001D4508;
    lVar12 = (float)func_001219C0(uVar4);
    lVar12 = lVar12 + (float)(float)(lVar9 * lVar11);
    break;
  case 7:
    lVar9 = (float)func_001219C0(uVar1,param_2);
    lVar12 = (float)D_001D27EC;
    lVar11 = (float)D_001D2800;
    lVar10 = (float)func_001219C0(uVar7);
    func_00120E50((float)((float)(float)(lVar11 - lVar9 * lVar12) - lVar10));
    func_0006F4D0(D_002F76A0 == 3);
    func_00121990(uVar1);
    lVar12 = (float)func_001219C0(uVar7,param_2);
    func_00120E50((float)((float)D_001D2800 - lVar12 * (float)D_001D27EC));
    func_0006F4D0(D_002F76A0 == 7);
    func_00121990(uVar7);
    lVar12 = (float)func_001219C0(uVar6,param_2);
    func_00120E50((float)(lVar12 * (float)D_001D27EC + (float)D_001D2800));
    func_0006F4D0(D_002F76A0 == 5);
    func_00121990(uVar6);
    lVar11 = (float)func_001219C0(uVar4,param_2);
    lVar12 = (float)D_001D27EC;
    lVar9 = (float)func_001219C0(uVar6);
    func_00120E50((float)(lVar9 + (float)(float)(lVar11 * lVar12) + (float)D_001D2800))
    ;
    func_0006F4D0(D_002F76A0 == 4);
    goto LAB_00002a50;
  case 8:
    lVar9 = (float)func_001219C0(uVar1,param_2);
    lVar12 = (float)D_001D27EC;
    lVar11 = (float)D_001D2800;
    lVar10 = (float)func_001219C0(uVar6);
    func_00120E50((float)((float)(float)(lVar11 - lVar9 * lVar12) - lVar10));
    func_0006F4D0(D_002F76A0 == 3);
    func_00121990(uVar1);
    lVar12 = (float)func_001219C0(uVar6,param_2);
    func_00120E50((float)((float)D_001D2800 - lVar12 * (float)D_001D27EC));
    func_0006F4D0(D_002F76A0 == 5);
    func_00121990(uVar6);
    lVar12 = (float)func_001219C0(uVar4,param_2);
    func_00120E50((float)(lVar12 * (float)D_001D27EC + (float)D_001D2800));
    func_0006F4D0(D_002F76A0 == 4);
    func_00121990(uVar4);
    lVar9 = (float)func_001219C0(uVar7,param_2);
    lVar11 = (float)D_001D27EC;
    lVar12 = (float)func_001219C0(uVar4);
    lVar12 = lVar12 + (float)(float)(lVar9 * lVar11);
    break;
  case 9:
    lVar9 = (float)func_001219C0(uVar1,param_2);
    lVar12 = (float)D_001D27EC;
    lVar11 = (float)D_001D2800;
    lVar10 = (float)func_001219C0(uVar6);
    func_00120E50((float)((float)(float)(lVar11 - lVar9 * lVar12) -
                          lVar10 * (float)D_001D27EC));
    func_0006F4D0(D_002F76A0 == 3);
    func_00121990(uVar1);
    func_00120E50(0x43a00000,param_2);
    func_0006F4D0(D_002F76A0 == 5);
    func_00121990(uVar6);
    lVar11 = (float)func_001219C0(uVar7,param_2);
    lVar12 = (float)func_001219C0(uVar6);
    lVar12 = lVar12 + (float)(float)lVar11;
LAB_00002528:
    lVar12 = lVar12 * (float)D_001D27EC;
    break;
  default:
    goto switchD_000024af_default;
  }
  func_00120E50((float)(lVar12 + (float)D_001D2800));
  bVar8 = D_002F76A0 == 7;
  uVar3 = uVar7;
LAB_00002547:
  uVar4 = uVar3;
  if (bVar8) {
    func_0006F4D0(1);
  }
  else {
    func_0006F4D0(0);
  }
LAB_00002a50:
  func_00121990(uVar4);
switchD_000024af_default:
  func_000688D0();
  func_0006F4D0(0);
  return;
}

void _func_00064DF0(void) { extern int D_001E3B48,D_001E3B4C,D_001E3B50,D_001E3B54,D_001E3B58,D_001E3B5C,D_001E3B60,D_001E3B64,D_001E3B68; extern int D_002F7714,D_002F771C,D_002F7700,D_002F7704,D_002F7708,D_002F7724,D_002F7728,D_002F772C,D_002F76F0,D_002F76F4,D_002F76F8,D_002F76FC,D_002F770C,D_002F7718; extern char D_001D5580; extern int _func_001229B0(...); extern int _func_00063F30(...); D_002F7714=0; D_002F771C=0; D_002F7700=D_001E3B54; D_002F7704=D_001E3B58; D_002F7708=D_001E3B5C; D_002F7724=D_001E3B48; D_002F7728=D_001E3B4C; D_002F772C=D_001E3B50; D_002F76F0=D_001E3B60; D_002F76F4=D_001E3B64; D_002F76F8=D_001E3B68; D_002F76FC=0; D_002F770C=5; D_002F7718=_func_001229B0(&D_001D5580); _func_00063F30(D_002F7718,0x4019999a,0x404ccccd); }

void func_00064EA0(void) {
    extern int D_002F7718;
    int func_00110760(...);
    func_00110760(D_002F7718);
}

void _func_00064EB0(void *p) { extern int D_002F7720, D_002F7730, D_002F7718; extern char D_001D5590, D_002F76B0; extern int _func_00110300(int,const char*,int); extern int _func_00110060(int,const char*); extern int _func_00110420(int,int); extern int _func_00110480(int,int,int); extern int _func_00110330(int,int); if (p) { D_002F7720=(int)p; D_002F7730=_func_00110300(*(int*)((char*)p+0x2c),&D_001D5590,0x18); _func_00110060(*(int*)((char*)p+0x2c),&D_002F76B0); int a=*(int*)((char*)p+0x2c); _func_00110420(**(int**)(a+0x2c),a); _func_00110480(D_002F7718,*(int*)((char*)p+0x2c),8); _func_00110330(*(int*)((char*)p+0x2c),0); } }

bool func_00064F30(void)
{
  extern undefined4 D_002F7714;
  return D_002F7714 == 0;
}

