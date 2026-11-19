/* 9 functions from 0x0004F9B0 to 0x00050858, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0004FEC0(int param_1, int param_2)
{
  int func_0007A4D0(...);
  int func_00110330(...);
  if (*(char *)(param_1 + 0x175) == '\0') {
    func_0007A4D0(param_1,param_1);
    func_00110330(*(undefined4 *)(param_1 + 0x2c),0);
    *(undefined4 *)(param_2 + 0x150) = 0;
    *(undefined4 *)(param_2 + 0x154) = 0x40000000;
    *(undefined4 *)(param_2 + 0x98) = 0x83;
  }
  return;
}

void func_0004FF10(int p,int q) {
 extern float D_001E461C; int func_0007A5C0(...),func_000F91D0(...),func_00110420(...),func_00110480(...),func_0009D3E0(...);
 if(*(int*)(q+0x154)==0xbf800000)return;
 float t=D_001E461C+*(float*)(q+0x150); *(float*)(q+0x150)=t;
 if(!(t>*(float*)(q+0x154)))return;
 func_0007A5C0(*(int*)(p+0x2c),p); *(int*)(q+0x154)=0xbf800000;
 int r=func_000F91D0(*(int*)(*(int*)(p+0x20)+8)); int x=*(int*)(p+0x2c);
 func_00110420(x,**(int**)(x+0x2c)); x=*(int*)(p+0x2c);
 func_00110480(*(int*)(r+0xe0),x,8); func_0009D3E0(p);
 *(unsigned short*)(p+0x10)=(*(unsigned short*)(p+0x10)&0xff7f)|0x100;
}

void func_0004FFB0(int param_1, int param_2)
{
  char func_000A24B0(...);
  int func_00115100(...);
  extern char D_001D3600;
  int func_00091110(...);
  float func_00131760(...);
  int func_000A22B0(...);
  int func_000A2370(...);
  extern float D_001E461C;
  char func_0004F9B0(...);
  int func_0004F310(...);
  int *puVar1;
  float fVar2;
  char cVar3;
  int iVar4;

  if (*(char *)(param_2 + 0x174) != 0) {
    cVar3 = func_000A24B0(param_1 + 100);
    if (cVar3 != 0) {
      iVar4 = func_00115100(*(int *)(param_1 + 0x98), &D_001D3600);
      if (iVar4 != -1) {
        func_00091110(param_1, iVar4, 0);
      }
      *(char *)(param_2 + 0x174) = 0;
    }
  }
  switch (*(int *)(param_2 + 0x98)) {
  case 2:
    iVar4 = func_000A2370(param_1 + 100);
    if (iVar4 == 0) {
      *(int *)(param_2 + 0x98) = 0;
    }
    break;
  case 0:
    puVar1 = *(int **)(param_2 + 4);
    *(float *)(param_2 + 0x150) = 0.0f;
    *(float *)(param_2 + 0x154) = (long double)func_00131760() * *(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x7c);
    func_000A22B0(param_1 + 100, 2, *puVar1, puVar1[1], puVar1[2], 0x3e4ccccd);
    *(int *)(param_2 + 0x98) = 1;
  case 1:
    fVar2 = D_001E461C + *(float *)(param_2 + 0x150);
    *(float *)(param_2 + 0x150) = fVar2;
    if (*(float *)(param_2 + 0x154) < fVar2) {
      cVar3 = func_0004F9B0(param_1, param_2, 0);
      if (cVar3 != 0) {
        *(int *)(param_2 + 0x98) = 2;
      }
    }
    break;
  }
  if (*(char *)(param_1 + 0x174) != 0) {
    func_0004F310(param_1, param_2);
  }
}

void func_000500D0(int param_1,int param_2) {
 *(undefined4 *)(param_2 + 0x98) = 0x79;
 *(undefined1 *)(param_2 + 300) = 0xff;
 int iVar1=0;
 if (*(int *)(*(int *)(*(int *)(param_2+0x68)+8)+0xd4)!=0) {
 do {
 if (param_1==*(int *)(*(int *)(*(int *)(*(int *)(param_2+0x68)+8)+0xd8)+iVar1*8))
 *(char *)(param_2+300)=(char)iVar1;
 iVar1++;
 } while(iVar1!=*(int *)(*(int *)(*(int *)(param_2+0x68)+8)+0xd4));
 }
}

#pragma optimize("y", off)
    void func_00050130(int param_1, int param_2)
    {
      param_1 = param_1 + 9 - 9;
      float func_00131760(...);
      int func_000A22B0(...);
      extern float D_001D27EC;
      int func_00045CC0(...);
      int func_00045D00(...);
      extern float D_001E461C;
      int func_00131310(...);
      int func_0004F9B0(...);
      int func_000A2370(...);
      int func_00045C20(...);
      int func_00046730(...);
      int func_00046F90(...);
      int func_000471B0(...);
      int func_0004F910(...);
      int func_0004ECC0(...);
      int func_00047510(...);
      int func_00047040(...);
      int func_001100A0(...);
      int func_00045E00(...);
      int func_0004F750(...);
      int func_00012070(...);
      extern float D_001D35A0;
      extern float D_001D359C;
      int func_0004FE30(...);
      int func_0004FF10(...);
      int func_0012F120(...);
      int func_000475E0(...);
      int func_0004F0F0(...);
      int func_001105E0(...);
      int func_0004F310(...);
      undefined4 *puVar1;
      double fVar2;
      char cVar3;
      uint uVar4;
      int iVar5;
      int iVar6;
      float lVar7;
      int local_6c;
      undefined4 local_68;
      undefined4 local_64;
      undefined4 local_60;
      undefined1 local_5c [12];
      undefined1 local_50 [76];
      
      switch(*(undefined4 *)(param_2 + 0x98)) {
      case 0x79:
        *(undefined4 *)(*(int *)(param_2 + 0x68) + 0x600) = 0;
        *(undefined4 *)(param_2 + 0x150) = 0;
        lVar7 = (float)func_00131760();
        puVar1 = *(undefined4 **)(param_2 + 4);
        *(float *)(param_2 + 0x154) =
             (float)(lVar7 * (float)*(float *)(param_2 + 0x78) +
                    (float)*(float *)(param_2 + 0x7c));
        if (puVar1 == (undefined4 *)0x0) {
          puVar1 = *(undefined4 **)(param_2 + 0x48);
          *(undefined4 *)(param_2 + 0x98) = 0x7c;
          func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
        }
        else {
          *(undefined4 *)(param_2 + 0x98) = 0x7a;
          func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
          *(float *)(param_2 + 0x154) = *(float *)(param_2 + 0x154) * D_001D27EC;
          func_00045CC0(*(undefined4 *)(param_2 + 0x68),param_2 + 0x138);
          func_00045D00(*(undefined4 *)(param_2 + 0x68),param_2 + 0x138);
        }
        break;
      case 0x7a:
        if ((*(byte *)(param_1 + 0x10) & 0x20) == 0) {
          *(float *)(param_2 + 0x150) = D_001E461C + *(float *)(param_2 + 0x150);
        }
        if (*(float *)(param_2 + 0x150) >= *(float *)(param_2 + 0x154)) {
          uVar4 = func_00131310();
          if (((uVar4 & 1) == 0) && (cVar3 = func_0004F9B0(param_1,param_2,0), cVar3 != '\0')) {
            *(undefined4 *)(param_2 + 0x98) = 0x7b;
          }
          else {
            puVar1 = *(undefined4 **)(param_2 + 0x48);
            *(undefined4 *)(param_2 + 0x98) = 0x7c;
            func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
            *(undefined4 *)(param_2 + 0x150) = 0;
            lVar7 = (float)func_00131760();
            *(float *)(param_2 + 0x154) =
                 (float)(lVar7 * (float)*(float *)(param_2 + 0x78) +
                        (float)*(float *)(param_2 + 0x7c));
          }
        }
        break;
      case 0x7b:
        iVar6 = func_000A2370(param_1 + 100);
        if (iVar6 == 0) {
          uVar4 = func_00131310();
          if ((uVar4 % 3 == 0) && (*(int *)(param_2 + 4) != 0)) {
            *(undefined4 *)(param_2 + 0x98) = 0x79;
          }
          else {
            puVar1 = *(undefined4 **)(param_2 + 0x48);
            *(undefined4 *)(param_2 + 0x98) = 0x7c;
            func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
            *(undefined4 *)(*(int *)(param_2 + 0x68) + 0x600) = 0;
          }
        }
        break;
      case 0x7c:
        *(undefined4 *)(*(int *)(param_2 + 0x68) + 0x600) = 0;
        iVar6 = param_2 + 0x138;
        func_00045CC0(*(undefined4 *)(param_2 + 0x68),iVar6);
        func_00045D00(*(undefined4 *)(param_2 + 0x68),iVar6);
        func_00045C20(*(undefined4 *)(param_2 + 0x68),1,0);
        iVar6 = func_00046730(*(undefined4 *)(param_2 + 0x68),iVar6);
        if (iVar6 != 0) break;
        *(undefined4 *)(param_2 + 0x98) = 0x7d;
        *(undefined4 *)(param_2 + 0x150) = 0;
        lVar7 = (float)func_00131760();
        puVar1 = *(undefined4 **)(param_2 + 0x48);
        *(float *)(param_2 + 0x154) =
             (float)(lVar7 * (float)*(float *)(param_2 + 0x78) +
                    (float)*(float *)(param_2 + 0x7c));
        func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
        func_00046F90(*(undefined4 *)(param_2 + 0x68),**(undefined4 **)(param_2 + 0x4c),D_001E461C,
                       *(undefined4 *)(param_2 + 0x88),0x41200000,0);
      case 0x7d:
        fVar2 = D_001E461C + *(float *)(param_2 + 0x150);
        *(float *)(param_2 + 0x150) = fVar2;
        if (((*(float *)(param_2 + 0x154) <= fVar2) &&
            (cVar3 = func_000471B0(*(undefined4 *)(param_2 + 0x68),param_2 + 0x138,0), cVar3 != '\0'))
           && (cVar3 = func_0004F9B0(param_1,param_2,0), cVar3 != '\0')) {
          *(undefined4 *)(param_2 + 0x98) = 0x7b;
          return;
        }
        if (((*(byte *)(param_1 + 0x10) & 0x20) == 0) || (*(int *)(param_2 + 4) == 0)) {
          iVar6 = func_000A2370(param_1 + 100);
          if (iVar6 == 0) {
            puVar1 = *(undefined4 **)(param_2 + 0x48);
            func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
          }
          iVar6 = func_0004F910(param_1,param_2,*(undefined4 *)(param_2 + 0x68));
          if (iVar6 == 2) {
            iVar6 = param_2 + 0x138;
            func_00045CC0(*(undefined4 *)(param_2 + 0x68),iVar6);
            func_00045D00(*(undefined4 *)(param_2 + 0x68),iVar6);
            func_00045C20(*(undefined4 *)(param_2 + 0x68),1,0);
            iVar6 = func_00046730(*(undefined4 *)(param_2 + 0x68),iVar6);
            if (iVar6 == 0) {
              func_00046F90(*(undefined4 *)(param_2 + 0x68),**(undefined4 **)(param_2 + 0x4c),
                             D_001E461C,*(float *)(param_2 + 0x88) * D_001D27EC,0x41200000,0);
              func_0004ECC0(param_1,param_2);
              break;
            }
            *(undefined4 *)(param_2 + 0x98) = 0x79;
          }
          else if (iVar6 == 3) {
            *(undefined4 *)(param_2 + 0x98) = 0x80;
            lVar7 = (float)
                    func_00047510(*(undefined4 *)(*(int *)(param_2 + 0x68) + 0x608),
                                   *(undefined4 *)(*(int *)(param_2 + 0x68) + 0x610));
            *(float *)(param_2 + 0x130) = (float)lVar7;
            func_0004ECC0(param_1,param_2);
            break;
          }
          func_0004ECC0(param_1,param_2);
        }
        else {
          func_00047040(*(undefined4 *)(param_2 + 0x68));
          *(undefined4 *)(param_2 + 0x98) = 0x79;
        }
        break;
      case 0x7e:
        iVar6 = func_000A2370(param_1 + 100);
        if (iVar6 == 0) {
          *(undefined4 *)(*(int *)(param_2 + 0x68) + 0x600) = 0;
          iVar6 = param_2 + 0x138;
          func_00045CC0(*(undefined4 *)(param_2 + 0x68),iVar6);
          func_00045D00(*(undefined4 *)(param_2 + 0x68),iVar6);
          func_00045C20(*(undefined4 *)(param_2 + 0x68),1,0);
          iVar5 = func_00046730(*(undefined4 *)(param_2 + 0x68),local_5c);
          if (iVar5 == 0) {
            *(undefined4 *)(*(int *)(param_2 + 0x68) + 0x600) = 0;
            *(undefined4 *)(param_2 + 0x150) = 0;
            lVar7 = (float)func_00131760();
            *(float *)(param_2 + 0x154) =
                 (float)(lVar7 * (float)*(float *)(param_2 + 0x78) +
                        (float)*(float *)(param_2 + 0x7c));
            func_00046F90(*(undefined4 *)(param_2 + 0x68),**(undefined4 **)(param_2 + 0x4c),
                           D_001E461C,*(float *)(param_2 + 0x88) * D_001D27EC,0x41200000,0);
            puVar1 = *(undefined4 **)(param_2 + 0x48);
            func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
            *(undefined4 *)(param_2 + 0x98) = 0x7d;
          }
          else {
            func_001100A0(*(undefined4 *)(param_1 + 0x2c),&local_6c);
            cVar3 = func_00045E00(*(undefined4 *)(param_2 + 0x68),param_2 + 0x9c,iVar6,local_6c + 0x20,
                                   **(undefined4 **)(param_2 + 0x4c),0,*(undefined4 *)(param_2 + 0x88),0
                                  );
            if (cVar3 == '\0') {
              puVar1 = *(undefined4 **)(param_2 + 0x48);
              *(undefined4 *)(param_2 + 0x98) = 0x7f;
              func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
            }
            else {
              *(undefined4 *)(param_2 + 0x98) = 0x81;
            }
          }
        }
        break;
      case 0x7f:
        iVar6 = func_000A2370(param_1 + 100);
        if (iVar6 == 0) {
          puVar1 = *(undefined4 **)(param_2 + 0x48);
          func_000A22B0(param_1 + 100,2,*puVar1,puVar1[1],puVar1[2],0x3dcccccd);
        }
        cVar3 = func_0004F750(param_1,param_2);
        if (cVar3 == '\0') break;
        goto LAB_00002dbe;
      case 0x80:
        lVar7 = (float)
                func_00012070(*(undefined4 *)(param_2 + 0x158),*(undefined4 *)(param_2 + 0x130));
        if (*(char *)(param_2 + 0x12d) == '\0') {
          lVar7 = lVar7 * (float)D_001D27EC;
        }
        if ((float)D_001D35A0 < lVar7) {
          *(float *)(param_2 + 0x158) = *(float *)(param_2 + 0x158) + D_001D35A0;
          break;
        }
        if (lVar7 < (float)D_001D359C) {
          *(float *)(param_2 + 0x158) = *(float *)(param_2 + 0x158) - D_001D35A0;
          break;
        }
        *(undefined4 *)(*(int *)(param_2 + 0x68) + 0x600) = 0;
        *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_2 + 0x130);
    LAB_00002dbe:
        *(undefined4 *)(param_2 + 0x98) = 0x7c;
        break;
      case 0x81:
        func_0004FE30(param_1,param_2);
        break;
      case 0x82:
        func_0004FEC0(param_1,param_2);
        break;
      case 0x83:
        func_0004FF10(param_1,param_2);
      }
      func_0012F120(local_50);
      local_68 = *(undefined4 *)(param_1 + 0xe8);
      local_60 = *(undefined4 *)(param_1 + 0xf0);
      local_64 = 0;
      func_000475E0(local_50,&local_68,param_2 + 0x138,*(undefined4 *)(param_2 + 0x158),param_2 + 0x144
                    );
      func_0004F0F0(param_1,local_50,param_2);
      func_001105E0(*(undefined4 *)(param_1 + 0x2c),local_50,1);
      if (*(char *)(param_1 + 0x174) != '\0') {
        func_0004F310(param_1,param_2);
      }
      return;
    }
