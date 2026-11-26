/* 11 functions from 0x0009A0D0 to 0x0009ABC7, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0009A0D0(int param_1){extern int D_00307CC4,D_003080AC,D_003104B4; extern int D_00307DDC,D_0030C630; int func_000A1EA0(...); int func_0001B4F0(...); int func_001015F0(...); int func_000ECB70(...); int i; *(int*)((char*)&D_00307DDC+D_00307CC4*4)=D_003080AC; D_00307CC4++; D_003080AC=param_1; for(i=0;(unsigned int)i<(unsigned int)D_003104B4;i++){int p=*(int*)((char*)&D_0030C630+i*4); if(p && !(*(unsigned char*)(p+0x11)&0x40)){int q=*(int*)(p+0x84); if(q)func_000A1EA0(q,1); p=*(int*)((char*)&D_0030C630+i*4); if(*(unsigned char*)(p+0x15)==0x19)func_0001B4F0(p,1);}} func_001015F0(1); func_000ECB70(1);}

void func_0009A160(void){extern int D_00307CC4,D_003080AC,D_003104B4; extern int D_00307DDC,D_0030C630; int func_000A1EA0(...); int func_0001B4F0(...); int func_001015F0(...); int func_000ECB70(...); int i; --D_00307CC4; D_003080AC=*(int*)((char*)&D_00307DDC+D_00307CC4*4); for(i=0;i<D_003104B4;i++){int p=*(int*)((char*)&D_0030C630+i*4); if(p && !(*(unsigned char*)(p+0x11)&0x40)){int q=*(int*)(p+0x84); if(q)func_000A1EA0(q,0); p=*(int*)((char*)&D_0030C630+i*4); if(*(unsigned char*)(p+0x15)==0x19)func_0001B4F0(p,0);}} func_001015F0(0); func_000ECB70(0);}

void func_0009A460(void)
{
  extern int D_00307DD0, D_00313B60, D_00324AFC, D_00307F08;
  extern float D_001D27EC, D_001D729C, D_001D5728, D_001D2B64, D_001D2CEC, D_001D7298;
  int func_001100A0(...);
  int func_0012E6D0(...);
  int func_0012EB70(...);
  float func_0012E8C0(...);
  float func_0012E940(...);
  float func_0012E9D0(...);
  int func_00110330(...);
  int *puVar1;
  int iVar2;
  int iVar3;
  float f;
  int local_28;
  unsigned int local_24;
  int local_20;
  float local_1c;
  char local_18[12];
  char local_c[12];

  D_00307DD0 = 0;
  func_001100A0(D_00313B60, &local_28);
  local_24 = 0;
  if (*(unsigned int *)(D_00324AFC + 0xe4) != 0) {
    iVar3 = 0xe8;
    iVar2 = D_00324AFC;
    do {
      puVar1 = *(int **)(*(int *)(iVar2 + iVar3) + 0x294);
      for (; puVar1 != 0; puVar1 = (int *)*puVar1) {
        iVar2 = puVar1[2];
        if (*(int *)(iVar2 + 0x98) != 0) {
          *(unsigned char *)(iVar2 + 0x10) &= 0xcf;
          if (((*(unsigned char *)(*(int *)(iVar2 + 0x2c) + 0x20) & 1) == 0) &&
              ((*(unsigned short *)(iVar2 + 0x10) & 0x1080) == 0)) {
            func_001100A0(*(int *)(iVar2 + 0x2c), &local_20);
            func_0012E6D0(local_18, local_20 + 0x30, local_28 + 0x30);
            func_0012EB70(local_c, local_18);
            if (func_0012E8C0(local_18, local_28 + 0x20) <= D_001D27EC) {
              f = func_0012E9D0(local_18);
              if (f >= D_001D2CEC) {
                *(unsigned char *)(iVar2 + 0x10) |= 0x20;
              }
              if (f >= D_001D7298) goto L;
            } else {
              local_1c = *(float *)(iVar2 + 0x34) / func_0012E940(local_18);
              f = func_0012E9D0(local_18);
              if (f >= D_001D729C) {
                *(unsigned char *)(iVar2 + 0x10) |= 0x20;
              }
              if (local_1c * D_001D5728 <= D_001D2B64) {
L:
                func_00110330(*(int *)(iVar2 + 0x2c), 0);
                *(int *)((char *)&D_00307F08 + D_00307DD0 * 4) = iVar2;
                D_00307DD0 = D_00307DD0 + 1;
                *(unsigned short *)(iVar2 + 0x10) |= 0x10;
              }
            }
          }
        }
        iVar2 = D_00324AFC;
      }
      local_24 = local_24 + 1;
      iVar3 = iVar3 + 8;
    } while (local_24 < *(unsigned int *)(iVar2 + 0xe4));
  }
}

void func_0009A610(void)
{
  int func_000F87B0(...);
  int func_00067D50(...);
  int func_0005CF90(...);
  int func_000688D0(...);
  int func_00059880(...);
  int func_000B6F40(...);
  extern undefined4 D_00313B54;
  int func_00136450(...);
  int func_000F9700(...);
  int func_0011BED0(...);
  int func_00105280(...);
  int func_0009F370(...);
  int func_000ECB60(...);
  int func_000A8790(...);
  int func_000A8E00(...);
  int func_000A9D70(...);
  int func_000AB120(...);
  int func_000ABAC0(...);
  int func_000AC9B0(...);
  int func_0006E0C0(...);
  int func_00013140(...);
  int func_000486C0(...);
  extern undefined4 D_00307D10;
  int func_000AFD00(...);
  extern undefined4 D_00307DD4;
  extern undefined4 D_00313B60;
  int func_00110420(...);
  int func_00105CC0(...);
  int func_00070D60(...);
  int func_00109650(...);
  int func_000A7B60(...);
  int func_00100E50(...);
  int func_000FFA80(...);
  int func_0009F870(...);
  int func_000A3F00(...);
  int func_000A2770(...);
  int func_00107BB0(...);
  int func_000FA740(...);
  int func_0005C6C0(...);
  int func_0006FCE0(...);
  int func_001095A0(...);
  int func_000F4320(...);
  int func_0006E2B0(...);
  int func_000EFA10(...);
  int func_000F49A0(...);
  int func_000F6170(...);
  int func_0009D080(...);
  int func_000F7CE0(...);
  int func_00064EA0(...);
  int func_00088820(...);
  int func_00087FE0(...);
  int func_0011B990(...);
  extern undefined4 D_00331504;
  int __stdcall func_0014DF80(int);
  extern undefined4 D_00307DCC;
  int func_001244D0(...);
  int func_0008F610(...);
  int func_0011E450(...);
  int func_001053A0(...);
  extern undefined4 D_00307D18;
  int func_001052C0(...);
  int func_00110760(...);
  extern undefined4 D_0030809C;
  int func_0010F8A0(...);
  int func_0011BE30(...);
  int func_0006F670(...);
  extern undefined D_00308100;
  int func_00122710(...);
  extern undefined D_001D72A0;
  extern undefined4 D_00307D04;
  extern undefined4 D_00326880;
  int func_00117340(...);
  extern undefined4 D_00307CF4;
  int func_001167C0(...);
  int func_001317D0(...);
  extern undefined D_001D29C7;
  int iVar1;
  uint uVar2;
  
  func_000F87B0();
  func_00067D50();
  func_0005CF90(1);
  func_000688D0();
  func_00059880();
  func_000B6F40(D_00313B54);
  func_00136450();
  func_000F9700();
  func_0011BED0();
  func_00105280();
  func_000688D0();
  func_0009F370();
  func_000ECB60();
  switch(D_00313B54) {
  case 3:
    func_000A8790();
    break;
  case 4:
    func_000A8E00();
    break;
  case 5:
    func_000A9D70();
    break;
  case 6:
    func_000AB120();
    break;
  case 7:
    func_000ABAC0();
    break;
  case 8:
    func_000AC9B0();
  }
  func_0006E0C0();
  func_00013140();
  func_000486C0(D_00307D10);
  func_000AFD00(D_00307DD4);
  if (*(undefined4 **)(D_00313B60 + 0x2c) != (undefined4 *)0x0) {
    func_00110420(D_00313B60,**(undefined4 **)(D_00313B60 + 0x2c));
  }
  func_00105CC0();
  func_000688D0();
  iVar1 = func_00070D60();
  if (iVar1 != 3) {
    func_00109650();
  }
  func_000A7B60();
  func_00100E50();
  func_000FFA80();
  func_0009F870();
  func_000A3F00();
  func_000A2770();
  func_00107BB0();
  func_000FA740();
  func_0005C6C0();
  func_0006FCE0();
  func_001095A0();
  func_000F4320();
  func_0006E2B0();
  func_000EFA10();
  func_000F49A0();
  func_000F6170();
  func_0009D080();
  func_000F7CE0();
  func_00064EA0();
  func_000688D0();
  func_00088820();
  func_00087FE0();
  func_0011B990(D_00331504);
  func_0014DF80((int)(D_00307DCC));
  func_001244D0();
  func_0008F610();
  func_0011E450();
  func_001053A0(D_00307D18);
  func_001052C0();
  func_00110760(D_0030809C);
  D_0030809C = 0;
  func_0010F8A0();
  func_0010F8A0();
  func_0010F8A0();
  func_0011BE30();
  func_0011BE30();
  func_0011BE30();
  func_0011BED0();
  func_0006F670();
  uVar2 = 0;
  do {
    if (*(int *)(((undefined *)&D_00308100) + uVar2) != 0) {
      func_00122710(*(int *)(((undefined *)&D_00308100) + uVar2));
      *(undefined4 *)(((undefined *)&D_00308100) + uVar2) = 0;
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x50);
  func_000688D0(1,((undefined *)&D_001D72A0),0xa04);
  if (D_00307D04 != D_00326880) {
    func_00117340(D_00307D04);
  }
  if (D_00307CF4 != D_00326880) {
    func_00117340(D_00307CF4);
  }
  func_001167C0();
  func_001317D0(((undefined *)&D_001D29C7));
  return;
}

unsigned int func_0009A880(void){extern unsigned int D_003080A4; extern int D_00269EC3; D_003080A4=D_003080A4*0x343fd+(unsigned int)&D_00269EC3; return (D_003080A4>>16)&0x7fff;}

float func_0009A8A0(void){extern unsigned int D_003080A4; extern unsigned char D_00269EC3; extern float D_001D72C0; D_003080A4=D_003080A4*0x343fd+D_00269EC3; return (float)((D_003080A4>>16)&0x7fff)*D_001D72C0;}

unsigned int func_0009A8D0(unsigned int max,unsigned int avoid){extern unsigned int D_003080A4; extern int D_00269EC3; if(max<=1)return 0; unsigned int x; do {unsigned int n=D_003080A4*0x343fd+(unsigned int)&D_00269EC3; D_003080A4=n; x=((n>>16)&0x7fff)%max;}while(x==avoid); return x;}

void func_0009A920(int a0) {
    extern int D_00308154;
    D_00308154 = a0;
}

void func_0009A930(void){extern int D_00308154,D_00307DF8; extern int D_001D72D0,D_001D72C8,D_001D72C4; int func_0009A0D0(...); int func_000F49D0(...); int func_0009D8D0(...); int func_0009BF40(...); int func_0009A160(...); if(D_00308154){func_0009A0D0(2); if(D_00308154==1)func_000F49D0(&D_001D72D0,1); if(D_00308154==2)func_000F49D0(&D_001D72C8,1); if(D_00308154==3)func_000F49D0(&D_001D72C4,1); func_0009D8D0(D_00307DF8); func_0009BF40(D_00307DF8); D_00308154=0; func_0009A160();}}

void func_0009A9C0(void)
{
  extern int D_002EED14, D_00308158, D_00307DF8, D_003080AC, D_00313B54, D_00307CC0, D_00307D08, D_00313B40, D_002EEC00, D_002EECA0;
  extern char D_001E4624, D_001E4625;
  extern bool D_00308150, D_00308151, D_00308152;
  extern char D_001D3758, D_001D37EC, D_001D72D8;
  extern unsigned int D_00307DC8, D_001E4618;
  extern float D_001D27B0, D_001D290C, D_00307DB4;
  int func_000ECF20(...);
  int func_000679B0(...);
  bool func_00061610(...);
  float *func_0009C7A0(...);
  int func_000F9C00(...);
  int func_000FA660(...);
  int func_000679C0(...);
  int func_0007D5E0(...);
  int func_000688D0(...);
  int func_000A0780(...);
  int func_000FFAE0(...);
  int func_00044F90(...);
  int func_000129B0(...);
  int func_000B6640(...);
  int func_000B7100(...);
  int func_0009A930(...);
  int func_00104770(...);
  int func_00107E20(...);
  int func_000FA8A0(...);
  int func_0005C800(...);
  int func_00064F40(...);
  int func_000452F0(...);
  int func_0008FBF0(...);
  int func_0007BDD0(...);
  int func_0008ED40(...);
  int func_00091080(...);
  int func_000F4460(...);
  int func_000A3F30(...);
  int func_0008D340(...);
  bool func_00063C50(...);
  int func_00063C60(...);
  int func_0009A0D0(...);
  float *pf;
  int iVar4;

  if (D_002EED14 != 0) {
    func_0005C800();
  } else {
    D_001E4624 = D_001E4625;
    D_001E4625 = 1;
    if (D_00308150) {
      pf = func_0009C7A0(D_00308158, &D_001D3758, 0);
      *pf = *pf + (double)D_001D27B0;
      iVar4 = func_000F9C00(D_00307DF8, &D_001D37EC);
      *(int *)(iVar4 + 0x20) = iVar4 + 0x5c;
      *(int *)(iVar4 + 0x1c) = D_00307DF8;
      func_000FA660(iVar4, 1);
      D_00308150 = false;
      D_00308151 = true;
    } else if (D_00308151) {
      if (!func_00061610()) {
        D_00308151 = false;
        D_00308152 = true;
      }
    } else if (D_00308152) {
      func_000ECF20(&D_001D72D8);
      func_000679B0(1);
      D_00308152 = false;
    }
    if (func_000679C0() == 1)
      D_003080AC = 7;
    func_0007D5E0();
    func_000688D0();
    func_000A0780();
    func_000FFAE0();
    func_00044F90();
    func_000129B0();
    func_000B6640();
    func_000B7100(D_00313B54);
    func_0009A930();
    func_00104770();
    func_00107E20();
    func_000FA8A0();
    func_0005C800();
    func_00064F40();
    func_000452F0();
    func_0008FBF0();
    func_0007BDD0();
    func_0008ED40();
    func_00091080();
    func_000F4460();
    func_000A3F30();
    func_0008D340();
    D_00307DC8 = D_00307DC8 + 1;
    D_00307DB4 = (float)D_00307DC8 / (float)D_001E4618;
    D_00307CC0 = **(int **)(*(int *)(D_00307DF8 + 0x2c) + 0x2c);
  }
  if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313B40 * 0x18) != 0) {
    if (func_00063C50() || D_002EEC00 == 6 || D_002EECA0 == 6) {
      *(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313B40 * 0x18) = 0;
      func_00063C60();
      return;
    }
    func_0009A0D0(2);
  }
}

