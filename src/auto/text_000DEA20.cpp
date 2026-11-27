/* 8 functions from 0x000DEA20 to 0x000DF44D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000DEA20(void)
{
  extern char *D_0031EA8C;
  extern char *D_0031FB50;
  extern float D_0031FC2C;
  extern float D_001D2B64;
  extern float D_001D515C;
  extern int D_0031EA68;
  extern int D_0031EA6C;
  extern int D_0031EA70;
  extern undefined D_0031ED20;
  extern char D_0031FC1C;
  extern float D_00307DB4;
  extern float D_001D28E0;
  extern float D_001D2A28;
  int func_0012ECA0(...);
  int func_000DCA80(...);
  int func_000DE4F0(...);
  int func_000DCE40(...);
  int func_00110330(...);
  char *p = D_0031EA8C;
  char i;
  float *pf;
  int flag;
  if (p == 0) {
    if (D_0031FB50 != 0) {
      func_0012ECA0(D_0031FB50 + 0x26c, 0x3f733333);
      *(float *)(D_0031FB50 + 0x270) = D_0031FC2C * D_001D2B64 + *(float *)(D_0031FB50 + 0x270);
      *(float *)(D_0031FB50 + 0x2f4) = *(float *)(D_0031FB50 + 0x2f4) * D_001D515C;
      func_000DCA80(D_0031FB50 + 0x10, D_0031FB50);
      func_000DE4F0(D_0031FB50);
    }
  } else {
    *(int *)(p + 0x26c) = D_0031EA68;
    *(int *)(p + 0x270) = D_0031EA6C;
    *(int *)(p + 0x274) = D_0031EA70;
    func_000DE4F0(p);
  }
  func_000DCE40();
  i = 0;
  pf = (float *)&D_0031ED20;
  do {
    if (i == D_0031FC1C && p == 0) {
      flag = 1;
      if (D_00307DB4 - *pf > D_001D28E0) {
        flag = 0;
        if (D_00307DB4 - *pf > D_001D2A28) *pf = D_00307DB4;
      }
    } else {
      flag = 0;
    }
    func_00110330(*(int *)(pf - 0x23), flag);
    i++;
    pf += 0xc4;
  } while (i < 5);
}

void func_000DEB50(void)
{
  int func_000B54C0(...);
  int func_000DD930(...);
  int func_000DEA20(...);
  int func_000DCC40(...);
  int func_000DD050(...);
  extern undefined D_0031EC00;
  int func_000DCFC0(...);
  int func_000DCE40(...);
  int func_000DD390(...);
  int func_000D5120(...);
  extern undefined D_0031E6C0;
  int func_000DD0D0(...);
  int func_000B6C80(...);
  int func_000B6BE0(...);
  char cVar1;
  undefined *puVar2;
  int iVar3;
  
  func_000B54C0(1);
  func_000DD930();
  func_000DEA20();
  func_000DCC40();
  func_000DD050();
  puVar2 = ((undefined *)&D_0031EC00);
  iVar3 = 5;
  do {
    func_000DCFC0(puVar2,puVar2 + 0x10);
    puVar2 = puVar2 + 0x310;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  func_000DCE40();
  func_000DD390();
  cVar1 = func_000D5120();
  if ((cVar1 == '\0') && (D_0031E6C0 == '\0')) {
    cVar1 = func_000DD0D0();
    if (cVar1 != '\0') {
      D_0031E6C0 = 0;
      func_000B6C80();
      return;
    }
    return;
  }
  D_0031E6C0 = 1;
  func_000B6BE0();
  return;
}

void func_000DEBE0(int param_1, char param_2)
{
  extern undefined D_0031FDE8;
  extern undefined D_0031FD18;
  extern undefined4 D_0031FD48;
  int v = *((int *) (((undefined *) (&D_0031FDE8)) + (param_1 * 4)));
  if (param_2)
  {
    if (v == 0)
    {
      *((int *) (((undefined *) (&D_0031FDE8)) + (param_1 * 4))) = 1;
      if (param_1 != 12)
      {
        *((undefined4 *) (((undefined *) (&D_0031FD18)) + (param_1 * 4))) = 0;
      }
      else
      {
        D_0031FD48 = 0x3ed70a3d;
      }
    }
  }
  else
    if ((*((int *) (((undefined *) (&D_0031FDE8)) + (param_1 * 4)))) == 2)
  {
    *((int *) (((undefined *) (&D_0031FDE8)) + (param_1 * 4))) = 3;
    if (param_1 != 12)
    {
      *((undefined4 *) (((undefined *) (&D_0031FD18)) + (param_1 * 4))) = 0x3f000000;
    }
    else
    {
      D_0031FD48 = 0x3f6b851f;
    }
  }
}

void func_000DEC50(int a,int b,int c,int d) { extern undefined4 D_0031FD00; extern undefined D_0031FCEC; extern undefined D_0031FDE8; extern undefined D_0031FD18; extern undefined4 D_0031FD48; int state=*(int *)(((undefined *)&D_0031FD00)+a*4); if(state==0){func_000DEBE0(b,((undefined *)&D_0031FCEC)[d]);if(*(int *)(((undefined *)&D_0031FDE8)+d*4)==2){*(int *)(((undefined *)&D_0031FDE8)+d*4)=3;if(d==12)D_0031FD48=0x3f6b851f;else *(undefined4 *)(((undefined *)&D_0031FD18)+d*4)=0x3f000000;}}if(state==1){if(*(int *)(((undefined *)&D_0031FDE8)+c*4)==2){*(int *)(((undefined *)&D_0031FDE8)+c*4)=3;if(c==12)D_0031FD48=0x3f6b851f;else *(undefined4 *)(((undefined *)&D_0031FD18)+c*4)=0x3f000000;}func_000DEBE0(d,((undefined *)&D_0031FCEC)[b]);}}

void func_000DED00(undefined4 param_1)
{
  int func_000DEC50(...);
  switch(param_1) {
  case 0:
    func_000DEC50(0,0,3,9);
  case 1:
    func_000DEC50(1,1,4,10);
  case 2:
    func_000DEC50(2,5,2,0xb);
  case 3:
    func_000DEC50(3,6,9,0);
  case 4:
    func_000DEC50(4,7,10,1);
  case 5:
    func_000DEC50(5,0xb,8,2);
  default:
    return;
  }
}

void func_000DED90(void)
{
  extern undefined4 D_0031FCB8;
  int func_00110300(...);
  extern undefined4 D_00308158;
  extern undefined D_001DBA90;
  extern undefined4 D_0031FCBC;
  extern undefined D_001DBA84;
  extern undefined4 D_0031FCC0;
  extern undefined D_001DBA78;
  extern undefined4 D_0031FCC4;
  extern undefined D_001DBA68;
  extern undefined4 D_0031FCC8;
  extern undefined D_001DBA58;
  extern undefined4 D_0031FCCC;
  extern undefined D_001DBA48;
  extern undefined4 D_0031FCD0;
  extern undefined D_001DBA38;
  extern undefined4 D_0031FCD4;
  extern undefined D_001DBA28;
  extern undefined4 D_0031FCD8;
  extern undefined D_001DBA18;
  extern undefined4 D_0031FCDC;
  extern undefined D_001DBA08;
  extern undefined4 D_0031FCE0;
  extern undefined D_001DB9F8;
  extern undefined4 D_0031FCE4;
  extern undefined4 D_0031FCE8;
  extern undefined D_001DB9E8;
  extern undefined D_001DB9DC;
  extern undefined4 D_0031FD68;
  extern undefined D_001DB9D0;
  extern undefined4 D_0031FD6C;
  extern undefined D_001DB9C4;
  extern undefined4 D_0031FD70;
  extern undefined D_001DB9B8;
  extern undefined4 D_0031FD74;
  extern undefined D_001DB9AC;
  extern undefined4 D_0031FD78;
  extern undefined D_001DB9A0;
  extern undefined4 D_0031FD7C;
  extern undefined D_001DB994;
  extern undefined4 D_0031FD80;
  extern undefined D_001DB988;
  extern undefined4 D_0031FD84;
  extern undefined D_001DB97C;
  extern undefined4 D_0031FD88;
  extern undefined D_001DB970;
  extern undefined4 D_0031FD8C;
  extern undefined D_001DB964;
  extern undefined4 D_0031FD90;
  extern undefined D_001DB958;
  extern undefined4 D_0031FD94;
  extern undefined D_001DB94C;
  extern undefined4 D_0031FD98;
  extern undefined D_001DB940;
  extern undefined4 D_0031FD9C;
  extern undefined D_001DB930;
  extern undefined4 D_0031FDA0;
  extern undefined D_001DB920;
  extern undefined4 D_0031FDA4;
  extern undefined D_001DB910;
  extern undefined4 D_0031FDA8;
  extern undefined D_001DB900;
  extern undefined4 D_0031FDAC;
  extern undefined D_001DB8F0;
  extern undefined4 D_0031FDB0;
  extern undefined D_001DB8E0;
  extern undefined4 D_0031FD4C;
  extern undefined D_001DB8D4;
  extern undefined4 D_0031FD50;
  extern undefined D_001DB8C8;
  extern undefined4 D_0031FD54;
  extern undefined D_001DB8BC;
  extern undefined4 D_0031FD58;
  extern undefined D_001DB8B0;
  extern undefined4 D_0031FD5C;
  extern undefined D_001DB8A4;
  extern undefined4 D_0031FD60;
  extern undefined D_001DB898;
  extern undefined D_0031FDE8;
  extern undefined D_0031FD18;
  int func_00100400(...);
  extern undefined D_0031FDB4;
  int func_001160E0(...);
  int func_00116110(...);
  int func_0011AF60(...);
  int func_00110330(...);
  extern undefined D_0031FCEC;
  int func_0009C7A0(...);
  extern undefined D_001DB88C;
  int __ftol2(...);
  extern undefined4 D_0031FD00;
  extern volatile int D_0031FD04;
  extern undefined4 D_0031FD08;
  extern undefined4 D_0031FD0C;
  extern undefined4 D_0031FD10;
  extern undefined4 D_0031FD14;
  extern undefined D_0031FCF5;
  extern undefined4 D_0031FDF4;
  extern undefined4 D_0031FD24;
  extern undefined D_0031FCF9;
  extern undefined D_0031FCF6;
  extern undefined4 D_0031FDF8;
  extern undefined4 D_0031FD28;
  extern undefined D_0031FCFA;
  extern undefined4 D_001DB884;
  extern undefined D_0031FCF7;
  extern undefined4 D_0031FDFC;
  extern undefined4 D_0031FD2C;
  extern undefined D_0031FCFB;
  extern undefined4 D_0031FE18;
  extern undefined4 D_0031FD48;
  extern undefined D_0031FCF8;
  extern undefined4 D_001DB888;
  extern undefined4 D_0031FE1C;
  extern undefined4 D_0031FE20;
  extern undefined4 D_0031FE24;
  extern undefined4 D_0031FE28;
  extern undefined4 D_0031FE2C;
  extern undefined4 D_0031FE30;
  extern undefined4 D_0031FD64;
  int func_0009C590(...);
  extern undefined D_001DB87C;
  undefined4 uVar1;
  int iVar2;
  
  D_0031FCB8 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DBA90),0);
  D_0031FCBC = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DBA84),0);
  D_0031FCC0 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DBA78),0);
  D_0031FCC4 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DBA68),0);
  D_0031FCC8 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DBA58),0);
  D_0031FCCC = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DBA48),0);
  D_0031FCD0 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DBA38),0);
  D_0031FCD4 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DBA28),0);
  D_0031FCD8 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DBA18),0);
  D_0031FCDC = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DBA08),0);
  D_0031FCE0 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB9F8),0);
  D_0031FCE4 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB9E8),0);
  D_0031FCE8 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB9DC),0);
  D_0031FD68 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB9D0),0);
  D_0031FD6C = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB9C4),0);
  D_0031FD70 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB9B8),0);
  D_0031FD74 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB9AC),0);
  D_0031FD78 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB9A0),0);
  D_0031FD7C = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB994),0);
  D_0031FD80 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB988),0);
  D_0031FD84 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB97C),0);
  D_0031FD88 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB970),0);
  D_0031FD8C = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB964),0);
  D_0031FD90 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB958),0);
  D_0031FD94 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB94C),0);
  D_0031FD98 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB940),0);
  D_0031FD9C = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB930),0);
  D_0031FDA0 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB920),0);
  D_0031FDA4 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB910),0);
  D_0031FDA8 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB900),0);
  D_0031FDAC = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB8F0),0);
  D_0031FDB0 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB8E0),0);
  D_0031FD4C = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB8D4),0);
  D_0031FD50 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB8C8),0);
  D_0031FD54 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB8BC),0);
  D_0031FD58 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB8B0),0);
  D_0031FD5C = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB8A4),0);
  D_0031FD60 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001DB898),0);
  iVar2 = 0;
  do {
    *(undefined4 *)(((undefined *)&D_0031FDE8) + iVar2) = 0;
    *(undefined4 *)(((undefined *)&D_0031FD18) + iVar2) = 0;
    uVar1 = func_00100400(0,1,0);
    *(undefined4 *)(((undefined *)&D_0031FDB4) + iVar2) = uVar1;
    func_001160E0(uVar1,1,0,100,0x42700000);
    func_00116110(*(undefined4 *)(((undefined *)&D_0031FDB4) + iVar2),1);
    func_0011AF60(*(undefined4 *)(((undefined *)&D_0031FCB8) + iVar2),*(undefined4 *)(((undefined *)&D_0031FDB4) + iVar2));
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x34);
  iVar2 = 0;
  do {
    func_00110330(*(undefined4 *)(((undefined *)&D_0031FD68) + iVar2 * 4),0);
    (((undefined *)&D_0031FCEC))[iVar2] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x13);
  func_0009C7A0(D_00308158,((undefined *)&D_001DB88C),0);
  iVar2 = __ftol2();
  D_0031FD00 = 1;
  D_0031FD04 = 1;
  D_0031FD08 = 0;
  D_0031FD0C = 0;
  D_0031FD10 = 0;
  D_0031FD14 = 1;
  if (iVar2 == 1) {
    D_0031FCF5 = 1;
    func_00110330(D_0031FD8C,1);
    D_0031FDF4 = 2;
    D_0031FD24 = 0x3f000000;
    D_0031FCF9 = 1;
    uVar1 = D_0031FD9C;
  }
  else if (iVar2 == 2) {
    D_0031FCF6 = 1;
    func_00110330(D_0031FD90,1);
    D_0031FDF8 = 2;
    D_0031FD28 = 0x3f000000;
    D_0031FCFA = 1;
    uVar1 = D_0031FDA0;
  }
  else {
    uVar1 = D_001DB884;
    if (iVar2 != 3) goto LAB_000028e3;
    D_0031FCF7 = 1;
    func_00110330(D_0031FD94,1);
    D_0031FDFC = 2;
    D_0031FD2C = 0x3f000000;
    D_0031FCFB = 1;
    uVar1 = D_0031FDA4;
  }
  D_0031FE18 = 2;
  D_0031FD48 = 0x3f000000;
  func_00110330(uVar1,1);
  D_0031FCF8 = 1;
  func_00110330(D_0031FD98,1);
  uVar1 = D_001DB884;
  if (D_0031FD00 == 0) {
    uVar1 = D_001DB888;
  }
LAB_000028e3:
  D_0031FE1C = uVar1;
  D_0031FE20 = D_001DB884;
  if (D_0031FD04 == 0) {
    D_0031FE20 = D_001DB888;
  }
  D_0031FE24 = D_001DB884;
  if (D_0031FD08 == 0) {
    D_0031FE24 = D_001DB888;
  }
  D_0031FE28 = D_001DB884;
  if (D_0031FD0C == 0) {
    D_0031FE28 = D_001DB888;
  }
  D_0031FE2C = D_001DB884;
  if (D_0031FD10 == 0) {
    D_0031FE2C = D_001DB888;
  }
  D_0031FE30 = D_001DB884;
  if (D_0031FD14 == 0) {
    D_0031FE30 = D_001DB888;
  }
  D_0031FD64 = func_0009C590(((undefined *)&D_001DB87C));
  return;
}

void func_000DF3D0(void){int func_001160B0(...);extern undefined D_0031FDB4;extern undefined D_0031FDE8;undefined4*p=(undefined4*)&D_0031FDB4;do{func_001160B0(*p);p++;}while((int)p<(int)&D_0031FDE8);}

void func_000DF3F0(void)
{
  extern unsigned char D_0031FCFE,D_0031FCFD,D_0031FCFC,D_0031FCFB,D_0031FCFA,D_0031FCF9;
  extern int D_0031FE18,D_0031FD48;
  if ((D_0031FCFE|D_0031FCFD|D_0031FCFC|D_0031FCFB|D_0031FCFA|D_0031FCF9)==0) {
    if (D_0031FE18==0) { D_0031FE18=1; D_0031FD48=0x3ed70a3d; }
    else if (D_0031FE18==2) { D_0031FE18=3; D_0031FD48=0x3f6b851f; }
  }
}

