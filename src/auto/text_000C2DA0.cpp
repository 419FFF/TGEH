/* 10 functions from 0x000C2DA0 to 0x000C3BD1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
struct C2FVec { float x, y, z, w; };

void func_000C2DA0(void)
{
    extern int D_003080AC;
    extern int D_00314EF4;
    extern unsigned char D_00314ED8;
    extern char D_001D9BA0;
    extern char D_001D9B98;
    extern char D_001D9B8C;
    extern char D_001D9B88;
    extern char D_001D9B80;
    extern char D_001D9B74;
    int func_000A2500(int);
    int func_00120E50(int, int);
    int func_000AFD10(char *);
    int func_0013E469(char *, char *, ...);
    int func_00121990(char *);
    char buf[64];

    if (D_003080AC != 2) {
        func_000A2500(0x3fd9999a);
        switch (D_00314EF4) {
        case 18:
            func_00120E50(0x43a00000, 0x43700000);
            func_0013E469(buf, &D_001D9B98, func_000AFD10(&D_001D9BA0), D_00314ED8 + 1);
            func_00121990(buf);
            return;
        case 13:
            func_00120E50(0x43a00000, 0x43700000);
            func_0013E469(buf, &D_001D9B88, func_000AFD10(&D_001D9B8C));
            func_00121990(buf);
            return;
        case 11:
            if (D_00314ED8 < 2)
                break;
            func_00120E50(0x43a00000, 0x43700000);
            func_0013E469(buf, &D_001D9B88, func_000AFD10(&D_001D9B80));
            func_00121990(buf);
            return;
        case 20:
            func_00120E50(0x43a00000, 0x43700000);
            func_0013E469(buf, &D_001D9B88, func_000AFD10(&D_001D9B74));
            func_00121990(buf);
            return;
        }
    }
}

void func_000C2F00(void)
{
  int func_0009C590(...);
  extern undefined D_001D9AAC;
  int func_000B5650(...);
  int func_000B6600(...);
  int func_00116FB0(...);
  char cVar1;
  int iVar2;
  
  iVar2 = func_0009C590(((undefined *)&D_001D9AAC));
  cVar1 = func_000B5650(4);
  if (cVar1 != '\0') {
    func_000B6600(4);
  }
  func_00116FB0(*(undefined4 *)(iVar2 + 0x110));
  return;
}

void func_000C2F40(void)
{
  int func_000F49D0(...);
  extern undefined D_001D42F0;
  int func_00012040(...);
  extern undefined4 D_00307DF8;
  extern undefined4 D_00314E7C;
  int func_000B6510(...);
  func_000F49D0(((undefined *)&D_001D42F0),1);
  func_00012040(D_00307DF8,**(undefined4 **)(*(int *)(D_00314E7C + 0x2c) + 0x2c));
  func_000B6510(4,0);
  return;
}

#pragma optimize("y", on)
void func_000C2F80(float *param_1, float *param_2)
{
  extern undefined D_00315715;
  int func_0011FED0(...);
  int func_00137A20(...);
  extern undefined4 D_00332738;
  extern undefined4 D_0033273C;
  extern undefined4 D_00332740;
  int func_00137A60(...);
  int func_00137A90(...);
  extern float D_001D2F24;
  extern float D_001D2A2C;
extern char D_00315995;
  __m128 dummy = _mm_setzero_ps();
  float *pfVar8;
  C2FVec first, second, temp;
  float fVar11;
  float *pfVar12;
  int local_88;
  char *local_84;
  float matrix[16];
  
  local_84 = (char *)&D_00315715;
  do {
    if ((local_84[-1] != '\0') && (*local_84 == '\0')) {
      func_0011FED0(*(undefined4 *)(*(int *)(local_84 + 0x23) + 0x2c),matrix);
      first.x = (float)((double)*(volatile float*)&matrix[12] + (double)*param_1);
      first.y = (float)((double)*(volatile float*)&matrix[13] + (double)param_1[1]);
      first.z = (float)((double)*(volatile float*)&matrix[14] + (double)param_1[2]);
      func_00137A20();
      *(C2FVec*)&D_00332738 = first;
      func_00137A60(0xffffffff);
      func_00137A90(0,0);
      second.x = (float)((double)*(volatile float*)&matrix[12] + (double)*param_2);
      second.y = (float)((double)*(volatile float*)&matrix[13] + (double)param_2[1]);
      second.z = (float)((double)*(volatile float*)&matrix[14] + (double)param_2[2]);
      func_00137A20();
      *(C2FVec*)&D_00332738 = first;
      func_00137A60(0xffffffff);
      func_00137A90(0,0x3f800000);
      func_00137A20();
      *(C2FVec*)&D_00332738 = first;
      func_00137A60(0xffffffff);
      func_00137A90(0,0);
      func_00137A20();
      *(C2FVec*)&D_00332738 = second;
      func_00137A60(0xffffffff);
      func_00137A90(0,0x3f800000);
      local_88 = 0;
      pfVar12 = param_1 + 5;
      pfVar8 = param_2;
      do {
        temp.z = (float)((double)*(volatile float*)&matrix[14] + (double)pfVar12[1]);
        temp.y = (float)((double)*(volatile float*)&matrix[13] + (double)*pfVar12);
        temp.x = (float)((double)*(volatile float*)&matrix[12] + (double)pfVar12[-1]);
        func_00137A20();
        *(C2FVec*)&D_00332738 = temp;
        func_00137A60(0xffffffff);
        fVar11 = (float)((double)local_88 * D_001D2F24 * D_001D2A2C);
        func_00137A90(*(unsigned int*)&fVar11,0);
        temp.z = (float)((double)*(volatile float*)&matrix[14] + (double)pfVar8[6]);
        temp.y = (float)((double)*(volatile float*)&matrix[13] + (double)*(float *)(((int)param_2 - (int)param_1) + (int)pfVar12));
        temp.x = (float)((double)*(volatile float*)&matrix[12] + (double)pfVar8[4]);
        func_00137A20();
        *(C2FVec*)&D_00332738 = temp;
        func_00137A60(0xffffffff);
        func_00137A90(*(unsigned int*)&fVar11,0x3f800000);
        local_88 = local_88 + 1;
        pfVar12 = pfVar12 + 4;
        pfVar8 = pfVar8 + 4;
      } while (local_88 < 0x18);
      func_00137A20();
      *(C2FVec*)&D_00332738 = first;
      func_00137A60(0xffffffff);
      func_00137A90(0,0);
      func_00137A20();
      *(C2FVec*)&D_00332738 = second;
      func_00137A60(0xffffffff);
      func_00137A90(0,0x3f800000);
      func_00137A20();
      *(C2FVec*)&D_00332738 = first;
      func_00137A60(0xffffffff);
      func_00137A90(0,0);
      func_00137A20();
      *(C2FVec*)&D_00332738 = first;
      func_00137A60(0xffffffff);
      func_00137A90(0,0x3f800000);
    }
    local_84 = local_84 + 0x40;
  } while ((int)local_84 < (int)&D_00315995);
  return;
}
extern "C" void *memset(void*,int,unsigned);
void func_000C32F0(void) {
 extern char D_00316178; extern float D_001D9C1C,D_001D9C18,D_001D29E0,D_001D2C00,D_001D314C,D_001D27EC,D_001D313C;
 extern float D_003160B0,D_003160AC,D_003160A8,D_00316118[],D_003160B8[];
 extern int D_0031609C;
 float func_00131230(float);float func_00131250(float);float func_00131760(void);
 int func_0011BDD0(int,int); int func_00133F30(void*); int func_001383B0(void);
 int func_0012F120(void*); int func_001364D0(void*); int func_001378E0(int,int);
 int func_0012FE20(void*,float,float,float);int func_0012F610(void*,void*);
 int func_000C2F80(void*,void*);int func_00137AB0(void);
 __declspec(align(16)) float high[100];
 __declspec(align(16)) float low[100];
 float matrix[16]; unsigned desc[21];
 __declspec(align(16)) float mat[16];
 float temp;
 int pass,i,offset;
 if(!D_00316178) {
  *(volatile unsigned*)&temp=0;
  i=0; do{
   temp=(float)((double)*(volatile float*)&temp+D_001D9C1C);
   D_00316118[i]=(float)((double)func_00131230(temp)*D_001D9C18);
   D_003160B8[i]=(float)((double)func_00131250(temp)*D_001D9C18);i++;
  }while(i<24);D_00316178=1;
 }
 D_003160B0=(float)((double)*(volatile float*)&D_003160B0+D_001D29E0);
 memset(desc,0,84);
 D_003160AC=(float)((double)*(volatile float*)&D_003160AC+D_001D2C00);
 desc[10]=1;desc[11]=1;
 D_003160A8=(float)((double)*(volatile float*)&D_003160A8+D_001D314C);
 desc[0]=2;desc[1]=2;desc[19]=2;desc[12]=0;desc[18]=0;desc[17]=0;desc[20]=0;
 desc[2]=func_0011BDD0(D_0031609C,0);desc[6]=0;
 func_00133F30(desc);func_001383B0();func_0012F120(matrix);func_001364D0(matrix);func_001378E0(4,7);
 func_0012F120(mat);func_0012FE20(mat,D_003160B0,D_003160AC,D_003160A8); pass=0;
 do {
  if(pass==1){unsigned a=((unsigned*)mat)[2],b=((unsigned*)mat)[10];*(volatile float*)(mat+2)=(float)(double)*(volatile float*)mat;((unsigned*)mat)[0]=a;*(volatile float*)(mat+10)=(float)(double)*(volatile float*)(mat+8);((unsigned*)mat)[8]=b;}
  high[0]=0;high[1]=40;high[2]=170;func_0012F610(high,mat);
  low[0]=0;low[1]=-40;low[2]=170;func_0012F610(low,mat);
  for(i=0,offset=0;i<24;i++,offset+=4){
   double r=(double)func_00131760()-D_001D27EC;
   double noise=(r+r)*(double)*(volatile float*)&D_001D313C; temp=(float)noise;
   high[4+offset]=D_00316118[i];high[6+offset]=D_003160B8[i];
   high[5+offset]=(float)(noise+D_001D313C);func_0012F610(high+4+offset,mat);
   low[4+offset]=D_00316118[i];low[5+offset]=(float)((double)temp-D_001D313C);low[6+offset]=D_003160B8[i];
   func_0012F610(low+4+offset,mat);
  }
  func_000C2F80(high,low);pass++;
 }while(pass<2);
 func_00137AB0();--*(short*)(D_0031609C+0x2a);
}

void func_000C35B0(void)
{
  extern undefined D_00316098;
  extern undefined D_001D9C38;
  extern undefined D_00316058;
  extern undefined D_00315190;
  int func_0011E840(...);
  extern undefined D_001D9C28;
  int func_00110480(...);
  extern undefined4 D_001D6C2C;
  extern undefined4 D_001D2B98;
  extern undefined4 D_001D504C;
  extern undefined4 D_001D9AEC;
  int func_00131310(...);
  int __ftol2(...);
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int local_108;
  int *local_104;
  undefined4 local_100 [57];
  undefined4 local_1c;
  undefined4 local_18;
  
  if (D_00316098 == '\0') {
    puVar6 = local_100;
    for (iVar5 = 0x3d; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_18 = 0;
    local_1c = 0xc;
    puVar6 = (undefined4 *)((undefined *)&D_001D9C38);
    puVar7 = local_100;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    piVar8 = (int *)((undefined *)&D_00316058);
    local_104 = (int *)((undefined *)&D_00315190);
    do {
      iVar5 = func_0011E840(((undefined *)&D_001D9C28),local_100);
      *piVar8 = iVar5;
      *(undefined4 *)(iVar5 + 0xf4) = 2;
      *(undefined4 *)(*piVar8 + 0xf8) = 2;
      *(undefined4 *)(*piVar8 + 0x11c) = 1;
      *(undefined4 *)(*piVar8 + 0x120) = 1;
      *(undefined4 *)(*piVar8 + 0x10c) = 3;
      func_00110480(*(undefined4 *)(*local_104 + 0x2c),*piVar8,8);
      puVar6 = *(undefined4 **)(*piVar8 + 0x14c);
      local_108 = 0;
      do {
        *puVar6 = 0;
        puVar6[1] = 0xc4c80000;
        fVar1 = (float)local_108 * D_001D6C2C;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0x3f800000;
        puVar6[7] = 0x3f800000;
        fVar2 = D_001D2B98 - fVar1 * D_001D504C;
        puVar6[8] = fVar2;
        puVar6[9] = fVar2;
        puVar6[2] = fVar1 * D_001D9AEC - D_001D2B98;
        uVar4 = func_00131310();
        puVar6[10] = uVar4 & 0x1f;
        cVar3 = __ftol2();
        *(char *)(puVar6 + 3) = -1 - cVar3;
        cVar3 = __ftol2();
        *(char *)((int)puVar6 + 0xd) = 'z' - cVar3;
        cVar3 = __ftol2();
        local_108 = local_108 + 1;
        *(char *)((int)puVar6 + 0xe) = '^' - cVar3;
        *(undefined1 *)((int)puVar6 + 0xf) = 0xff;
        puVar6 = puVar6 + 0xc;
      } while (local_108 < 0xc);
      local_104 = local_104 + 0xb;
      piVar8 = piVar8 + 1;
    } while ((int)local_104 < 0x4078);
    D_00316098 = '\x01';
  }
  return;
}

void func_000C3760(char param_1)
{
  extern int D_00316058[];
  extern const float D_001D6C2C, D_001D504C, D_001D2B98, D_001D66D8, D_001D9C24, D_001D9C20, D_001D27FC, D_001D35FC;
  int *piVar3 = D_00316058;
  do {
    int i = 0;
    float *pf = (float*)(*(int*)(*piVar3 + 0x14c) + 0x24);
    do {
      float k = (float)i * D_001D6C2C;
      if (param_1 != 0) {
        float f = D_001D2B98 - D_001D504C * k;
        pf[-1] = f;
        pf[0] = f;
        *((unsigned char*)pf - 0x18) = (unsigned char)(0xff - (char)(D_001D66D8 * k));
        *((unsigned char*)pf - 0x17) = (unsigned char)(0x7a - (char)(D_001D9C24 * k));
        *((unsigned char*)pf - 0x16) = (unsigned char)(0x5e - (char)(D_001D9C20 * k));
      } else {
        float f = D_001D35FC - k * D_001D27FC;
        *((unsigned char*)pf - 0x18) = 0;
        *((unsigned char*)pf - 0x17) = 0x80;
        *((unsigned char*)pf - 0x16) = 0xff;
        pf[-1] = f;
        pf[0] = f;
      }
      i++;
      *((unsigned char*)pf - 0x15) = 0xff;
      pf += 12;
    } while (i < 12);
    piVar3++;
  } while ((int)piVar3 < (int)&D_00316058[0] + 0x40);
}

void func_000C3830(void)
{
  extern undefined D_00316098;
  extern undefined D_00316058;
  int func_00110420(...);
  int func_00110760(...);
  int iVar1;
  int *piVar2;
  
  if (D_00316098 != '\0') {
    piVar2 = (int *)((undefined *)&D_00316058);
    do {
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x2c) != 0) {
        func_00110420(iVar1,**(undefined4 **)(iVar1 + 0x2c));
      }
      func_00110760(*piVar2);
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x3ff8);
  }
  D_00316098 = 0;
  return;
}

void func_000C3880(void)
{
  int func_000A2500(int);
  extern int D_00314F00;
  extern unsigned char D_00314F08;
  extern int D_003250F8;
  int func_001054C0(int, int *, int, int);
  int func_001054B0(int);
  int func_00105990(void);
  int func_00120E50(int, int);
  int func_000AFD10(int *);
  extern int D_001D9C98;
  int func_00121990(int);
  extern int D_003080AC;
  int func_000A2780(int, int, int);
  extern int D_0031601C;
  extern float D_001D27D0, D_00314FAC, D_00329234, D_001D27B0, D_00316024, D_001D9C94;
  extern float D_00314FA8, D_00316020, D_001D557C, D_001D2800;
  int func_000A2F00(int *, int, int);
  extern int D_00315FC8, D_00315FF0;
  extern unsigned char D_00315FC4, D_0031599C, D_00315C90;
  int func_000A2F20(int *);
  float fVar1, fVar2;
  long double A;
  int local[4];
  func_000A2500(0x3fd9999a);
  if (D_00314F00 == 6) {
    if ((D_00314F08 & 4) != 0) {
      D_003250F8 = 1;
      local[0] = 0x43988000;
      local[1] = 0x42d80000;
      local[2] = 0x43a78000;
      local[3] = 0x43060000;
      func_001054C0(0, local, 99, -1);
      func_001054B0(0);
      func_00105990();
    }
    if ((D_00314F08 & 2) != 0) {
      func_00120E50(0x43a00000, 0x43200000);
      func_00121990(func_000AFD10(&D_001D9C98));
    }
  }
  if (D_003080AC != 2) {
    func_000A2780(0x3b, 1, D_0031601C);
    A = (long double)D_00329234 * D_00314FA8 + D_00316020 * ((long double)D_001D27B0 - D_00329234);
    fVar1 = (float)((long double)D_001D27D0 - ((long double)D_00314FAC * D_00329234 + ((long double)D_001D27B0 - D_00329234) * D_00316024) * D_001D9C94);
    fVar2 = (float)(A * D_001D557C + D_001D2800);
    func_000A2F00(&D_00315FC8, *(int *)&fVar2, *(int *)&fVar1);
    func_000A2F00(&D_00315FF0, *(int *)&fVar2, *(int *)&fVar1);
    D_00315FC4 = D_0031599C;
    if (D_00315C90 != 0) {
      func_000A2F20(&D_00315FC8);
      if (D_00315FC4 != 0) {
        func_000A2F20(&D_00315FF0);
      }
    }
  }
}

void *memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)
void func_000C39F0(void){int func_000687F0(...),func_00136450(...),func_00088A50(...),func_0010FF70(...),func_00102E80(...),func_0009C590(...),func_0011F8D0(...),func_000A2780(...),func_000A2EE0(...),func_0009D280(...),func_0005F310(...),func_0005CCC0(...),func_00044C90(...),func_0009D3E0(...),func_0009D640(...),func_0010F8A0(...),func_0011BE30(...),func_000F8B60(...),func_000F9700(...);extern int D_00316034,D_00316038,D_00316040,D_00316044,D_0031501C,D_00315020,D_00315024,D_00315028,D_0031502C,D_00314FE8,D_00315CD8,D_00315CDC,D_00315CE0,D_00315CE4,D_00315CE8,D_00316018,D_00307DF8,D_00314F14;extern char D_00315050[],D_00315090[],D_003150D0[],D_00315110[],D_00315150[],D_001D57EC[],D_001D9CA0[],D_00315FC8[],D_00315FF0[];int data[9];int v[3];func_000687F0();func_00136450();func_00088A50(D_00316034,0x3f800000,1);func_00088A50(D_00316038,0x3f800000,1);func_00088A50(D_00316040,0x3f800000,1);func_00088A50(D_00316044,0x3f800000,1);func_0010FF70(D_0031501C,D_00315050);func_0010FF70(D_00315020,D_00315090);func_0010FF70(D_00315024,D_003150D0);func_0010FF70(D_00315028,D_00315110);func_0010FF70(D_0031502C,D_00315150);func_00102E80(D_00314FE8);func_00102E80(D_00315CD8);func_00102E80(D_00315CDC);func_00102E80(D_00315CE0);func_00102E80(D_00315CE4);func_00102E80(D_00315CE8);int obj=func_0009C590(D_001D57EC);memcpy(data,(char*)(*(int*)(obj+0x2c)+0xe4),36);data[8]=D_00316018;func_0011F8D0(*(int*)(obj+0x2c),data);func_000A2780(2,0,0);func_000A2EE0(D_00315FC8);func_000A2EE0(D_00315FF0);func_0009D280(D_00307DF8);func_0005F310(0);func_0005CCC0(1);v[0]=0;v[1]=0;v[2]=0x42c80000;obj=func_0009C590(D_001D9CA0);func_00044C90(obj,v);func_0009D3E0(D_00314F14);func_0009D640(D_00314F14);func_0010F8A0();func_0010F8A0();func_0010F8A0();func_0011BE30();func_0011BE30();func_0011BE30();func_000F8B60(1,0);func_000F9700();}
