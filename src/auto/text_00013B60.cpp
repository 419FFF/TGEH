/* 6 functions from 0x00013B60 to 0x00014A23, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct __declspec(align(16)) Vec13B60 { float x, y, z; };

#pragma optimize("t", on)
void func_00013B60(char *p)
{
 int func_0007E470(...), func_000A22B0(...), func_00047960(...), func_001100A0(...), func_0012F7A0(...), func_0012ECA0(...), func_000A2370(...), func_00110060(...), func_0009C7A0(...), func_0003F820(...);
 float func_0012EA60(...); char func_00012120(...);
 extern float D_001D27B8, D_001E461C;
 extern int D_00307DF8;
 extern char D_001D2878;
 int *s=*(int**)(p+0x110), *v, *q;
 int a,b; unsigned int flag;
 __declspec(align(16)) float x[3], y[3];
 __declspec(align(16)) float m[16];
 if (!*(int*)(p+0x60)) func_0007E470(p);
 switch (*s) {
 case 0:
 v=(int*)s[2]; func_000A22B0(p+100,2,v[0],v[1],v[2],0x3e4ccccd); *s=1;
 case 1:
 if (*(float*)(s+10)<=D_001D27B8) {
 if (func_00047960(p,s+4,0,0,25,0)&1) *s=2;
 else *((char*)s+0x30)=1;
 } else *(float*)(s+10)-=D_001E461C;
 *(char*)(p+0x174)=0; return;
 case 2:
 if (*((char*)s+0x30)) {
 *((char*)s+0x30)=0;
 func_001100A0(*(int*)(p+0x2c),&a);
 v=(int*)(s[3]+0x48);
 ((int*)y)[0]=v[0]; ((int*)y)[1]=v[1]; ((int*)y)[2]=v[2];
 func_0012F7A0(y,a);
 v=(int*)(D_00307DF8+0xe8);
 ((int*)x)[0]=v[0]; ((int*)x)[1]=v[1]; ((int*)x)[2]=v[2];
 func_001100A0(*(int*)(D_00307DF8+0x2c),&b);
 func_0012F7A0(x,b);
 q=s+7; *(float*)q=x[0]-y[0]; s[8]=0; *(float*)(s+9)=x[2]-y[2];
 func_0012EA60(q); func_0012ECA0(q,0x43fa0000);
 }
 v=(int*)s[1]; func_000A22B0(p+100,1,v[0],v[1],v[2],0x3e4ccccd); *s=3;
 *(char*)(p+0x174)=0; return;
 case 3:
 if (!func_000A2370(p+100)) { *s=0; s[10]=s[11]; *(char*)(p+0x174)=0; return; }
 func_00110060(*(int*)(p+0x2c),m);
 v=(int*)func_0009C7A0(p,&D_001D2878,0);
 if(v) flag=(unsigned char)(int)*(float*)v; else flag=1;
 if (func_00012120(p,s[3]+0x48,s[3]+0x54,m,flag)) {
 q=*(int**)(D_00307DF8+0x110);
 q[0x53]=s[7]; q[0x54]=s[8]; q[0x55]=s[9];
 if (*q==5) goto special;
 func_0003F820(D_00307DF8,q); *q=4; q[0x104]=0x3f800000; setflag: *((char*)q+0x1a5)=1;
 clear:
 q[0x26]=0; q[0x27]=0; q[0x28]=0;
 }
 }
 *(char*)(p+0x174)=0; return;
 special: if(q[0xc4]>=5) goto setflag; *((char*)q+0x347)=1; goto clear;
}
#pragma optimize("", on)
int _func_00013E30(void *arg)
{
    int _func_00116FB0(...);
    return _func_00116FB0(*(int *)((char *)arg + 0x110));
}

void func_00013E50(int p)
{
  int func_00116A90(...); int func_0004FA80(...); int func_00048720(...); int func_00056D50(...);
  int func_00045A60(...); int func_000A1BB0(...); int func_00131990(...); int func_0009C7A0(...);
  extern int D_00307D10;
  extern char D_001D29D0, D_001D29C8, D_001D29C7, D_001D29B0, D_001D2998, D_001D2980;
  int *w = (int*)(p + 0x17c);
  unsigned int *x = (unsigned int*)func_00116A90(0x280, 1, 1);
  unsigned int *y;
  int n;
  *(unsigned int**)(p + 0x110) = x;
  for (int i = 0; i < 0xa0; i++) x[i] = 0;
  y = x + 1;
  func_0004FA80(p, y);
  w[0] = 0; w[2] = 0; w[3] = 0; w[4] = 0; w[5] = 0; w[6] = 0; w[7] = 0; w[9] = 0;
  w[1] = 0x3f800000; w[8] = 0x3f800000;
  x[0xd] = x[7];
  *((char*)x + 0x99) = 0;
  x[0x1a] = *(unsigned int*)(p + 0x134);
  n = (int)((long double)*(float*)(p + 0x138) / *(float*)(x[0x1a] + 0x74)) << 1;
  x[0x21] = n;
  x[0x1b] = func_00048720(D_00307D10, n, x[0x1a], p);
  x[0x19] = *(unsigned int*)(p + 0x130);
  x[1] = 5;
  func_00056D50(p, y);
  x[0x9c] = 0;
  func_00045A60(p);
  x[0x99] = func_000A1BB0(p, &D_001D29D0);
  x[0x9a] = func_000A1BB0(p, &D_001D29C8);
  func_00131990(&D_001D29C7);
  x[0x96] = func_0009C7A0(p, &D_001D29B0, 0);
  x[0x97] = func_0009C7A0(p, &D_001D2998, 0);
  y = (unsigned int*)func_0009C7A0(p, &D_001D2980, 0);
  *((char*)x + 0x27c) = 0;
  x[0x98] = (unsigned int)y;
  x[0x9e] = 0xffffffff;
}

void func_00013FB0(int param_1)
{
  int func_00115100(...);
  extern undefined D_001D29E4;
  int func_00047960(...);
  int func_00131310(...);
  int func_000A1D10(...);
  extern undefined D_0000FFFF;
  int func_00011D40(...);
  extern undefined4 D_001D280C;
  int func_000A22B0(...);
  int func_0004F290(...);
  int func_00056C00(...);
  int func_000A1F50(...);
  int func_001100A0(...);
  int func_000124E0(...);
  int func_0004EF90(...);
  int func_00012070(...);
  extern undefined4 D_001D29E0;
  extern undefined4 D_001D29DC;
  int func_000A2370(...);
  extern undefined4 D_001D29D8;
  int func_00047040(...);
  int func_0012ED20(...);
  extern undefined4 D_001E461C;
  int func_0012E5F0(...);
  int func_00047260(...);
  int func_000471B0(...);
  int func_00045CC0(...);
  int func_00045D00(...);
  int func_00045C20(...);
  int func_00110060(...);
  extern undefined4 D_00307DF8;
  int func_00045F80(...);
  int func_00046F90(...);
  int func_0004ECA0(...);
  int func_0004F910(...);
  int func_0004ECC0(...);
  int func_00047510(...);
  int func_0004F1D0(...);
  int func_000204F0(...);
  int func_0007C3F0(...);
  extern undefined4 D_001D27B8;
  int func_0001E500(...);
  int func_00045AF0(...);
  int func_0012F120(...);
  int func_000475E0(...);
  int func_0004F0F0(...);
  int func_001105E0(...);
  int func_0004F310(...);
  int func_0007C4C0(...);
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  longdouble lVar9;
  float local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [48];
  undefined1 local_20 [28];
  
  piVar1 = *(int **)(param_1 + 0x110);
  if (piVar1[0x9e] == -1) {
    iVar5 = func_00115100(*(undefined4 *)(param_1 + 0x98),((undefined *)&D_001D29E4));
    piVar1[0x9e] = iVar5;
  }
  if (*piVar1 == 0) {
    switch(piVar1[0x27]) {
    case 0x2f:
_L00014079:
      *(undefined1 *)(piVar1 + 0x9f) = 1;
      break;
    case 0x32:
      if (((char)piVar1[0x9f] == '\0') &&
         (uVar6 = func_00047960(param_1,piVar1 + 0x1c,piVar1[0x25],piVar1[0x22],1,0),
         (uVar6 & 0x10) != 0)) {
        uVar6 = func_00131310();
        uVar6 = uVar6 & 0x80000001;
        bVar8 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar8 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar8) {
          func_000A1D10(piVar1[0x99],1,0,((undefined *)&D_0000FFFF),0x41c00000,0x3e4ccccd);
          *piVar1 = 1;
        }
        goto _L00014079;
      }
      break;
    case 0x35:
      *piVar1 = 2;
      break;
    case 0x39:
      *piVar1 = 0xb;
      break;
    case 0x3c:
      *piVar1 = 4;
    }
  }
  if (*(char *)(param_1 + 0x174) == '\0') goto LAB_00002600;
  iVar5 = *piVar1;
  if ((iVar5 == 5) || (iVar5 == 4)) {
LAB_000025f9:
    *(undefined1 *)(param_1 + 0x174) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x178) != 5) {
      lVar9 = (longdouble)func_00011D40(param_1);
      if ((longdouble)D_001D280C <= lVar9) goto LAB_00002600;
      func_000A1D10(piVar1[0x9a],1,0,((undefined *)&D_0000FFFF),0x41c00000,0x3d4ccccd);
      *piVar1 = 0xd;
      goto LAB_000025f9;
    }
    if ((((iVar5 == 6) || (iVar5 == 7)) || (iVar5 == 2)) || (iVar5 == 3)) {
LAB_00002574:
      puVar2 = (undefined4 *)piVar1[6];
      func_000A22B0(param_1 + 100,1,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
      *piVar1 = 0xc;
      goto LAB_000025f9;
    }
    if (iVar5 == 0) {
      if ((piVar1[0x27] != 0x2f) && (piVar1[0x27] != 0x30)) goto LAB_00002574;
    }
    else if ((iVar5 != 8) && (iVar5 != 9)) {
      func_0004F290(param_1);
      *piVar1 = 8;
      piVar1[0x9b] = 0x3fc00000;
      goto LAB_000025f9;
    }
  }
LAB_00002600:
  switch(*piVar1) {
  case 0:
    func_00056C00(param_1,piVar1 + 1);
    break;
  case 1:
    iVar5 = func_000A1F50(piVar1[0x99]);
    if (iVar5 == 0) {
      puVar2 = (undefined4 *)piVar1[0x15];
      func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
      *piVar1 = 0;
      func_00056C00(param_1,piVar1 + 1);
    }
    break;
  case 2:
    puVar2 = (undefined4 *)piVar1[7];
    func_000A22B0(param_1 + 100,1,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
    *piVar1 = 3;
  case 3:
    func_001100A0(*(undefined4 *)(param_1 + 0x2c),&local_78);
    func_000124E0(param_1,local_78,*(undefined4 *)piVar1[0xc],0x41700000);
    lVar9 = (longdouble)func_0004EF90(param_1);
    local_7c = (float)lVar9;
    lVar9 = (longdouble)func_00012070(piVar1[0x57],local_7c);
    if (lVar9 <= (longdouble)D_001D29E0) {
      if ((longdouble)D_001D29DC <= lVar9) {
        piVar1[0x57] = (int)local_7c;
      }
      else {
        piVar1[0x57] = (int)((float)piVar1[0x57] - D_001D29E0);
      }
    }
    else {
      piVar1[0x57] = (int)((float)piVar1[0x57] + D_001D29E0);
    }
    iVar5 = func_000A2370(param_1 + 100);
    if (iVar5 != 0) break;
    func_0004F290(param_1);
    *piVar1 = 6;
    goto LAB_00002c5c;
  case 4:
    puVar2 = (undefined4 *)piVar1[0x96];
    func_000A22B0(param_1 + 100,1,*puVar2,puVar2[1],puVar2[2],0);
    *piVar1 = 5;
    piVar1[0x9d] = 0;
    piVar1[0x58] = (int)(*(float *)piVar1[0x16] * *(float *)(piVar1[0x1b] + 0x600) * D_001D29D8);
    *(undefined4 *)(piVar1[0x1b] + 0x600) = 0;
    piVar1[0x27] = 0x3d;
    func_00047040(piVar1[0x1b]);
  case 5:
    func_001100A0(*(undefined4 *)(param_1 + 0x2c),&local_78);
    func_000124E0(param_1,local_78,*(undefined4 *)piVar1[0xc],0x41700000);
    func_001100A0(*(undefined4 *)(param_1 + 0x2c),&local_7c);
    func_0012ED20(local_68,(int)local_7c + 0x20,D_001E461C * (float)piVar1[0x58]);
    func_0012E5F0(&local_74,piVar1 + 0x4f,local_68);
    cVar4 = func_00047260(param_1,*(undefined4 *)(piVar1[0x1b] + 8),&local_74,local_5c);
    if ((cVar4 == '\0') && (cVar4 = func_000471B0(piVar1[0x1b],&local_74,0), cVar4 != '\0')) {
      piVar1[0x4f] = local_74;
      piVar1[0x50] = local_70;
      piVar1[0x51] = local_6c;
    }
    iVar5 = func_000A2370(param_1 + 100);
    if (iVar5 != 0) break;
    iVar5 = piVar1[0x9d];
    piVar1[0x9d] = iVar5 + 1;
    if (iVar5 + 1 != 4) {
      puVar2 = (undefined4 *)piVar1[0x96];
      func_000A22B0(param_1 + 100,1,*puVar2,puVar2[1],puVar2[2],0);
      break;
    }
    func_0004F290(param_1);
    *piVar1 = 8;
    goto LAB_00002c5c;
  case 6:
    *(undefined4 *)(piVar1[0x1b] + 0x600) = 0;
    piVar1[0x55] = 0;
    piVar1[0x56] = 0x40400000;
    func_00045CC0(piVar1[0x1b],piVar1 + 0x4f);
    func_00045D00(piVar1[0x1b],piVar1 + 0x4f);
    func_00045C20(piVar1[0x1b],1,0);
    func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_50);
    iVar5 = func_00045F80(piVar1[0x1b],local_20);
    if (iVar5 == 0) {
      func_00046F90(piVar1[0x1b],*(undefined4 *)piVar1[0x16],D_001E461C,piVar1[0x23],0x41200000,0
                    );
      *piVar1 = 7;
      goto _L00014609;
    }
    func_0004ECA0(param_1,piVar1 + 1);
    piVar1[0x27] = 0x33;
    *piVar1 = 0;
    func_00056C00(param_1,piVar1 + 1);
    break;
  case 7:
_L00014609:
    fVar3 = D_001E461C + (float)piVar1[0x55];
    piVar1[0x55] = (int)fVar3;
    if (fVar3 < (float)piVar1[0x56]) {
      iVar5 = func_000A2370(param_1 + 100);
      if (iVar5 == 0) {
        puVar2 = (undefined4 *)piVar1[0x15];
        func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
      }
      iVar5 = func_0004F910(param_1,piVar1 + 1,piVar1[0x1b]);
      if (iVar5 == 2) {
        func_00045CC0(piVar1[0x1b],piVar1 + 0x4f);
        func_00045D00(piVar1[0x1b],piVar1 + 0x4f);
        func_00045C20(piVar1[0x1b],1,0);
        func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_50);
        iVar5 = func_00045F80(piVar1[0x1b],local_20);
        if (iVar5 != 0) {
          func_0004F290(param_1);
          func_0004ECA0(param_1,piVar1 + 1);
          piVar1[0x27] = 0x33;
          *piVar1 = 0;
          goto LAB_00002c3a;
        }
        func_00046F90(piVar1[0x1b],*(undefined4 *)piVar1[0x16],D_001E461C,piVar1[0x23],0x41200000
                       ,0);
        func_0004ECC0(param_1,piVar1 + 1);
      }
      else if (iVar5 == 3) {
        piVar1[0x27] = 0x80;
        *piVar1 = 0;
        lVar9 = (longdouble)
                func_00047510(*(undefined4 *)(piVar1[0x1b] + 0x608),
                               *(undefined4 *)(piVar1[0x1b] + 0x610));
        piVar1[0x4d] = (int)(float)lVar9;
        *(undefined1 *)((int)piVar1 + 0x131) = 1;
        func_0004ECC0(param_1,piVar1 + 1);
      }
      else {
LAB_00002c3a:
        func_0004ECC0(param_1,piVar1 + 1);
      }
    }
    else {
      func_0004ECA0(param_1,piVar1 + 1);
      cVar4 = func_0004F1D0(param_1);
      *piVar1 = 0;
      piVar1[0x27] = (-(uint)(cVar4 != '\0') & 0xfffffffe) + 0x33;
      func_00056C00(param_1,piVar1 + 1);
    }
    break;
  case 8:
    puVar2 = (undefined4 *)piVar1[0x97];
    func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
    func_000204F0();
    piVar1[0x9b] = 0x3fc00000;
    func_0007C3F0(0x3fc00000,0xff00ff00,param_1,piVar1[0x9e]);
    *piVar1 = 9;
  case 9:
    fVar3 = (float)piVar1[0x9b] - D_001E461C;
    piVar1[0x9b] = (int)fVar3;
    if (fVar3 < D_001D27B8 == (fVar3 == D_001D27B8)) break;
    puVar2 = (undefined4 *)piVar1[0x98];
    func_000A22B0(param_1 + 100,1,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
    func_0001E500();
    *piVar1 = 10;
_L00014522:
    iVar5 = func_000A2370(param_1 + 100);
    if (iVar5 != 0) break;
    *piVar1 = 6;
_L0001453C:
    iVar5 = func_000A2370(param_1 + 100);
    if (iVar5 != 0) break;
    *(undefined1 *)(param_1 + 0x175) = 0;
    func_00045AF0(param_1,piVar1[0x15],1);
    *piVar1 = 6;
    goto LAB_00002c5c;
  case 10:
    goto _L00014522;
  case 0xb:
    goto _L0001453C;
  case 0xc:
  case 0xd:
    iVar5 = func_000A1F50(*(undefined4 *)(param_1 + 0x84));
    if (iVar5 == 0) {
      cVar4 = func_0004F1D0(param_1);
      *piVar1 = 0;
      if (cVar4 != '\0') {
        piVar1[0x27] = 0x31;
        return;
      }
      piVar1[0x27] = 0x33;
      return;
    }
  }
  if (*piVar1 != 0) {
LAB_00002c5c:
    func_0012F120(local_50);
    local_74 = *(int *)(param_1 + 0xe8);
    local_6c = *(undefined4 *)(param_1 + 0xf0);
    local_70 = 0;
    if ((char)piVar1[0x26] == '\0') {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = piVar1 + 0x52;
    }
    func_000475E0(local_50,&local_74,piVar1 + 0x4f,piVar1[0x57],piVar7);
    func_0004F0F0(param_1,local_50,piVar1 + 1);
    func_001105E0(*(undefined4 *)(param_1 + 0x2c),local_50,1);
    if (*(char *)(param_1 + 0x174) != '\0') {
      func_0004F310(param_1,piVar1 + 1);
      func_0001E500();
      func_0007C4C0(param_1);
      *piVar1 = 0;
    }
  }
  return;
}

void func_000148F0(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x6c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x264));
  func_00116FB0(iVar1);
  return;
}

void _func_00014930(int p){extern int func_00116A90(...);extern int func_001031C0(...);extern int func_00110420(...);extern int func_00110480(...);extern int func_00110330(...);extern float D_001D27B8;extern char D_001D29EC;extern int D_0030809C; int *q=(int*)func_00116A90(0x60,1,1);*(int**)(p+0x110)=q;int *z=q;for(int i=24;i;i--)*z++=0;if(*(float*)(p+0x130)>D_001D27B8)q[15]=*(int*)(p+0x130);else q[15]=0xc47a0000;if(*(float*)(p+0x134)!=D_001D27B8)q[16]=*(int*)(p+0x134);else q[16]=0x3f060a92;if(*(char*)(p+0x13c))q[23]=*(char*)(p+0x13c);else q[23]=1;if(*(float*)(p+0x138)>D_001D27B8)q[18]=*(int*)(p+0x138);else q[18]=0x3f800000;q[0]=0;q[22]=func_001031C0(p,&D_001D29EC);func_00110420(*(int*)(p+0x2c),**(int**)(*(int*)(p+0x2c)+0x2c));func_00110480(D_0030809C,*(int*)(p+0x2c),8);func_00110330(*(int*)(p+0x2c),0);}

