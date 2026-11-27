/* 19 functions from 0x0008B160 to 0x0008C11F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
static unsigned int D_002FE018,D_002FE024;

extern char D_001D6E74[];
extern char D_001D6E58[];
extern char D_001D29E4[];
void func_0011E3D0(int);
int func_0009CBE0(char *);
void func_0011CFC0(int, float);
int func_00115100(int, char *);
void func_00115170(int, int, float *);
void func_001105E0(int, float *, int);
float func_0012E7B0(float *, float *);
#pragma optimize("p", on)
void func_0008B160(int param_1, int param_2, int param_3) {
    int *obj;
    int *pinky;
    int *sweat;
    __declspec(align(16)) float mat[16];
    int idx;
    volatile float *mp;

    func_0011E3D0(param_1);
    obj = *(int **)(param_1 + 0x17c);
    pinky = (int *)func_0009CBE0(D_001D6E74);
    sweat = (int *)func_0009CBE0(D_001D6E58);
    if (pinky == 0) {
        func_0011CFC0(param_1 + 0x54, 0.0f);
        return;
    }
    if (sweat != 0) {
        idx = func_00115100(*(int *)((char *)pinky + 0x98), D_001D29E4);
        if (idx != -1) {
            func_00115170(*(int *)((char *)pinky + 0x98), idx, mat);
            mp = &mat[12];
            *mp = (float)((long double)*mp + *(float *)(*(int *)((char *)pinky + 0x2c) + 0x70));
            mp = &mat[13];
            *mp = (float)((long double)*mp + *(float *)(*(int *)((char *)pinky + 0x2c) + 0x74));
            mp = &mat[14];
            *mp = (float)((long double)*mp + *(float *)(*(int *)((char *)pinky + 0x2c) + 0x78));
            mp = &mat[15];
            *mp = (float)((long double)*mp + *(float *)(*(int *)((char *)pinky + 0x2c) + 0x7c));
            func_001105E0(*(int *)((char *)sweat + 0x2c), mat, 1);
        }
        {
            float dist = func_0012E7B0((float *)(obj + 1), (float *)(param_3 + 0x30));
            func_0011CFC0(param_1 + 0x54, dist);
        }
        obj[1] = *(int *)(param_3 + 0x30);
        obj[2] = *(int *)(param_3 + 0x34);
        obj[3] = *(int *)(param_3 + 0x38);
    }
}
#pragma optimize("", on)
void func_0008B280(void) {
    extern int D_001D6E88;
    extern void func_0008AF60(void);
    extern void func_0008B120(void);
    extern void func_00079D10(void);
    extern void func_0008B160(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0008AF60, &D_001D6E88);
    func_0011D270(func_0008B120, &D_001D6E88);
    func_0011D290(func_00079D10, &D_001D6E88);
    func_0011D2B0(func_0008B160, &D_001D6E88);
    func_0011D2D0(func_00092810, &D_001D6E88);
    func_0011D2F0(func_00083D60, &D_001D6E88);
}

void func_0008B2E0(void) {
    extern int D_001D6E88;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E88);
}

void func_0008B2F0(int *param_1, int param_2)
{
  int func_0011CD40(...);
  float func_00131760(void);
  extern float D_001D2C00;
  extern float D_001D29D8;
  int func_0011CDF0(...);
  int func_0011CE20(...);
  int func_0011CE10(...);
  int func_0011CE30(...);
  int func_0011CE50(...);
  int func_0011CF30(...);
  int func_0011CFC0(...);
  int iVar1;
  unsigned int uVar2;

  iVar1 = func_0011CD40(1,5,1,4,1);
  *param_1 = iVar1;
  *(int *)(*(int *)(iVar1 + 4) + 8) = 0;
  *(int *)(*(int *)(*param_1 + 4) + 4) = 0;
  **(int **)(*param_1 + 4) = 0;
  uVar2 = 0;
  do {
    *(int *)(uVar2 + *(int *)(*param_1 + 0xc)) = 0;
    *(int *)(*(int *)(*param_1 + 0xc) + 4 + uVar2) = 0;
    double f = func_00131760();
    uVar2 = uVar2 + 0xc;
    *(float *)(*(int *)(*param_1 + 0xc) + -4 + uVar2) = (float)(f * D_001D2C00 + D_001D29D8);
  } while (uVar2 < 0x78);
  *(int *)(*(int *)(*param_1 + 0x1c) + 4) = 0x41000000;
  **(int **)(*param_1 + 0x1c) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0xc) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 8) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x14) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x10) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x1c) = 0x41000000;
  *(int *)(*(int *)(*param_1 + 0x1c) + 0x18) = 0x41000000;
  **(int **)(*param_1 + 0x24) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 8) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x24) + 0xc) = 0x3f800000;
  **(int **)(*param_1 + 0x14) = 0x3dcccccd;
  *(int *)(*(int *)(*param_1 + 0x14) + 4) = 0x3dcccccd;
  *(int *)(*(int *)(*param_1 + 0x14) + 8) = 0x3dcccccd;
  *(int *)(*(int *)(*param_1 + 0x14) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE20(param_2,0x3fc00000);
  func_0011CE10(param_2,0x40000000);
  func_0011CE30(param_2,0x41f00000,0x42700000);
  func_0011CE50(param_2,0xbdcccccd,0xbdcccccd,0xbdcccccd,0);
  func_0011CF30(param_2,0x42200000,0x42200000);
  func_0011CFC0(param_2,0x41800000);
}

void func_0008B450(undefined4 param_1)
{
  int func_0011DED0(...);
  extern undefined4 D_002FE010;
  extern undefined4 D_00307DB4;
  func_0011DED0(param_1);
  D_002FE010 = D_00307DB4;
  return;
}

void func_0008B470(int param_1, int param_2)
{
  extern float D_002FE010, D_00307DB4, D_001D6E94, D_001D4270, D_001D2A14, D_001D411C, D_001D31C8;
  extern int D_00307DF8;
  int func_0011DED0(...);
  int func_00115100(...);
  int func_00115170(...);
  int func_0002F450(...);
  int func_0011CFC0(...);
  int func_0010FF70(...);
  float local[12];

  if (D_002FE010 + D_001D6E94 <= D_00307DB4) {
    func_0011DED0(param_1);
    D_002FE010 = D_00307DB4;
  }
  int r = func_00115100(*(int *)(D_00307DF8 + 0x98), D_001D29E4, local);
  func_00115170(*(int *)(D_00307DF8 + 0x98), r);
  switch (**(int **)(D_00307DF8 + 0x110)) {
  case 3:
  case 0x15:
  case 0x58:
    if (func_0002F450(D_00307DF8, *(int *)(D_00307DF8 + 0x110)) == 0) {
      func_0011CFC0(param_1 + 0x54, 0x41800000);
      local[11] = local[11] + D_001D4270;
      goto done;
    }
    break;
  default:
    break;
  case 0xf:
    func_0011CFC0(param_1 + 0x54, 0x41800000);
    local[9] = local[9] - D_001D2A14;
    local[10] = local[10] + D_001D411C;
    local[11] = local[11] - D_001D31C8;
    goto done;
  }
  func_0011CFC0(param_1 + 0x54, 0);
done:
  func_0010FF70(param_2, local);
}

void _func_0008B5F0(void)
{
  extern int D_001D3C7C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0008B2F0(...);
  int _func_0008B450(...);
  int _func_00085E20(...);
  int _func_0008B470(...);
  _func_0011D000(&D_001D3C7C, _func_0008B2F0);
  _func_0011D270(&D_001D3C7C, _func_0008B450);
  _func_0011D290(&D_001D3C7C, _func_00085E20);
  _func_0011D2B0(&D_001D3C7C, _func_0008B470);
}

void func_0008B630(void) {
    extern int D_001D3C7C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D3C7C);
}

void func_0008B640(int *a,int b){int func_0011CD40(...);float func_00131760(void);extern float D_001D2804,D_001D313C,D_001D35F8,D_001D2A2C,D_001D29F4,D_001D27B0,D_001D2B60;extern int D_00313B54;int func_0011CDF0(...);int func_0011CE20(...);int func_0011CE10(...);int func_0011CE30(...);int func_0011CE50(...);int func_0011CF30(...);int func_0011CFC0(...);unsigned int i;double r;*a=func_0011CD40(0x32,0x32,1,4,1);i=0;do{r=func_00131760();*(float*)(i+*(int*)(*a+4))=(float)(r*D_001D2804-D_001D313C);r=func_00131760();*(float*)(*(int*)(*a+4)+i+4)=(float)(r*D_001D35F8);r=func_00131760();i=i+12;*(float*)(*(int*)(*a+4)+i-4)=(float)(r*D_001D2804-D_001D313C);}while(i<0x258);i=0;do{r=func_00131760();*(float*)(i+*(int*)(*a+12))=(float)(r*D_001D2A2C-D_001D29F4);r=func_00131760();*(float*)(*(int*)(*a+12)+i+4)=(float)(r+r);r=func_00131760();i=i+12;*(float*)(*(int*)(*a+12)+i-4)=(float)(r*D_001D2A2C-D_001D29F4);}while(i<0x258);i=0;do{r=func_00131760();*(float*)(*(int*)(*a+28)+i+4)=(float)((r+D_001D27B0)*D_001D2B60);*(int*)(*(int*)(*a+28)+i)=*(int*)(*(int*)(*a+28)+i+4);i=i+8;}while(i<0x20);**(int**)(*a+36)=0;*(int*)(*(int*)(*a+36)+4)=0;*(int*)(*(int*)(*a+36)+8)=0x3f800000;*(int*)(*(int*)(*a+36)+12)=0x3f800000;if(D_00313B54==5){**(int**)(*a+20)=0x3e99999a;*(int*)(*(int*)(*a+20)+4)=0x3f800000;*(int*)(*(int*)(*a+20)+8)=0;*(int*)(*(int*)(*a+20)+12)=0x3f800000;}else{**(int**)(*a+20)=0x3f800000;*(int*)(*(int*)(*a+20)+4)=0x3f800000;*(int*)(*(int*)(*a+20)+8)=0x3f800000;*(int*)(*(int*)(*a+20)+12)=0x3f800000;}func_0011CDF0(b);func_0011CE20(b,0x3f800000);func_0011CE10(b,0x3f800000);func_0011CE30(b,0x41200000,0x42c80000);func_0011CE50(b,0,0,0,0);func_0011CF30(b,0xc2480000,0xc2480000);func_0011CFC0(b,0x42a00000);}

void func_0008B810(int p, int flag)
{
    if(flag) {
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+0)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+4)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+8)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+12)=0x3f800000;
    } else {
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+0)=0x3e99999a;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+4)=0x3f800000;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+8)=0;
      *(int *)(*(int *)(*(int *)(*(int *)(p+0x50)+0x2c)+0x14)+12)=0x3f800000;
    }
}

void func_0008B890(void)
{
  extern int D_001D6E98;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_0008B640(...); int func_00086E60(...); int func_00085E20(...); int func_000688D0(...); int func_0008B810(...);
  func_0011D000(&D_001D6E98,func_0008B640);
  func_0011D270(&D_001D6E98,func_00086E60);
  func_0011D290(&D_001D6E98,func_00085E20);
  func_0011D2B0(&D_001D6E98,func_000688D0);
  func_0011D2D0(&D_001D6E98,func_0008B810);
}

void func_0008B8E0(void) {
    extern int D_001D6E98;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E98);
}

void func_0008B8F0(int*p,unsigned int q){int func_0011CD40(...),func_0011CDF0(...),func_0011CE20(...),func_0011CE10(...),func_0011CE30(...),func_0011CE50(...),func_0011CF30(...),func_0011CFC0(...);float func_00131760(...);extern float D_001D4270,D_001D31C8,D_001D2B64,D_001D2A2C,D_001D29F4,D_001D27B0;unsigned i;longdouble x;*p=func_0011CD40(20,20,1,4,1);for(i=0;i<240;i+=12){x=func_00131760();*(float*)(*(int*)(*p+4)+i)=(float)(D_001D4270*x-D_001D31C8);x=func_00131760();*(float*)(*(int*)(*p+4)+i+4)=(float)(D_001D2B64*x);x=func_00131760();*(float*)(*(int*)(*p+4)+i+8)=(float)(D_001D4270*x-D_001D31C8);}for(i=0;i<240;i+=12){x=func_00131760();*(float*)(*(int*)(*p+12)+i)=(float)(D_001D2A2C*x-D_001D29F4);x=func_00131760();*(float*)(*(int*)(*p+12)+i+4)=(float)(x+x);x=func_00131760();*(float*)(*(int*)(*p+12)+i+8)=(float)(D_001D2A2C*x-D_001D29F4);}for(i=0;i<32;i+=8){x=func_00131760();*(float*)(*(int*)(*p+28)+i+4)=(float)((x+D_001D27B0)*D_001D31C8);*(unsigned int*)(*(int*)(*p+28)+i)=*(unsigned int*)(*(int*)(*p+28)+i+4);}*(unsigned int*)(*(int*)(*p+36))=0;*(unsigned int*)(*(int*)(*p+36)+4)=0;*(unsigned int*)(*(int*)(*p+36)+8)=0x3f800000;*(unsigned int*)(*(int*)(*p+36)+12)=0x3f800000;for(i=0;i<4;i++)*(unsigned int*)(*(int*)(*p+20)+i*4)=0x3f800000;func_0011CDF0(q);func_0011CE20(q,0x3f800000);func_0011CE10(q,0x3f800000);func_0011CE30(q,0x41200000,0x42c80000);func_0011CE50(q,0,0,0,0);func_0011CF30(q,0xc0a00000,0xc0a00000);func_0011CFC0(q,0x42a00000);}

void _func_0008BA90(void)
{
  extern int D_001D6EAC;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0008B8F0(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6EAC, _func_0008B8F0);
  _func_0011D270(&D_001D6EAC, _func_00086E60);
  _func_0011D290(&D_001D6EAC, _func_00085E20);
  _func_0011D2B0(&D_001D6EAC, _func_000688D0);
}

void func_0008BAD0(void) {
    extern int D_001D6EAC;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6EAC);
}

#pragma optimize("y", on)
void func_0008BAE0(void)
{
  extern undefined4 D_001D6EF0;
  extern undefined4 D_001D6EE8;
  extern undefined4 D_001D6EEC;
  extern undefined4 D_001D6EF4;
  extern undefined4 D_001D6EF8;
  int func_0011E840(...);
  extern undefined D_001D6ED4;
  int func_0011DD60(...);
  int func_0011E830(...);
  extern undefined D_001D6EC0;
  extern unsigned int D_002FE018,D_002FE024; extern int D_002FE01C,D_002FE028,D_0030809C;
  extern char D_002FE020,D_002FE02C,D_001D6E98,D_001D6EAC;
  int func_0011DEF0(...); int func_00110480(...);
  double storage[31];
  unsigned int *a=(unsigned int*)storage;
  int iVar1; unsigned int *puVar2;

  puVar2 = a;
  for (iVar1 = 0x3d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  a[46] = 1;
  a[47] = 1;
  a[0] = D_001D6EE8;
  a[1] = D_001D6EEC;
  a[2] = D_001D6EF0;
  a[36] = 2;
  a[37] = 2;
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
  a[57] = 0x32;
  a[3] = D_001D6EF4;
  *(short*)&a[4] = D_001D6EF8;
  a[59] = 0x58;
  D_002FE018 = func_0011E840(((undefined *)&D_001D6ED4),a);
  D_002FE01C = func_0011DD60(((undefined *)&D_001D6E98),0x32,D_002FE018,*(undefined4 *)(D_002FE018 + 0x14c)
                               );
  func_0011E830(D_002FE018,D_002FE01C);
  func_0011DEF0(D_002FE01C);
  D_002FE020 = 0;
  func_00110480(D_0030809C,D_002FE018,8);
  puVar2 = a;
  for (iVar1 = 0x3d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  a[46] = 1;
  a[47] = 1;
  a[36] = 2;
  a[37] = 2;
  a[32] = 0;
  a[33] = 0;
  a[34] = 0;
  a[35] = 0;
  a[42] = 3;
  a[0] = D_001D6EE8;
  a[1] = D_001D6EEC;
  a[2] = D_001D6EF0;
  a[43] = 3;
  a[44] = 3;
  a[45] = 3;
  a[48] = 0;
  a[54] = 0;
  a[53] = 0;
  a[55] = 0;
  a[60] = 10;
  a[57] = 0x32;
  a[3] = D_001D6EF4;
  *(short*)&a[4] = D_001D6EF8;
  a[59] = 0x58;
  D_002FE024 = func_0011E840(((undefined *)&D_001D6EC0),a);
  D_002FE028 = func_0011DD60(((undefined *)&D_001D6EAC),0x32,D_002FE024,*(undefined4 *)(D_002FE024 + 0x14c)
                               );
  func_0011E830(D_002FE024,D_002FE028);
  func_0011DEF0(D_002FE028);
  D_002FE02C = 0;
  func_00110480(D_0030809C,D_002FE024,8);
  return;
}
#pragma optimize("", on)
void func_0008BD80(void)
{
  int func_001160B0(...);
  extern undefined4 D_002FE01C;
  int func_00110760(...);
  extern undefined4 D_002FE018;
  extern undefined4 D_002FE028;
  extern undefined4 D_002FE024;
  func_001160B0(D_002FE01C);
  func_00110760(D_002FE018);
  func_001160B0(D_002FE028);
  func_00110760(D_002FE024);
  return;
}

#pragma optimize("y", off)
void func_0008BDC0(int p,int q){int func_00110420(...);int func_00110480(...);int func_0012F120(...);int func_0010FF70(...);int func_0011E3A0(...);int func_0011DED0(...);int func_00115100(...);int func_00115170(...);extern char D_002FE020,D_002FE02C,D_001D6EFC;extern unsigned int D_002FE018,D_002FE024;extern int D_002FE01C,D_002FE028,D_0030809C,D_00307DF8,D_003080B0,D_00307D00,D_00307CFC;extern float D_001D35F8,D_001D6E28,D_001D411C;char buf[52];float f;switch(p){case 0:if(!D_002FE020){func_00110420(D_0030809C,D_002FE018);func_00110480(*(int*)(D_00307DF8+44),D_002FE018,8);func_0012F120(buf);f=(float)q;func_0010FF70(D_002FE018,buf);func_0011E3A0(D_002FE01C,1);func_0011DED0(D_002FE01C);D_002FE020=1;}break;case 1:if(!D_002FE020){func_00110420(D_0030809C,D_002FE018);func_00110480(*(int*)(D_00307DF8+44),D_002FE018,8);func_0012F120(buf);f=(float)q;func_0010FF70(D_002FE018,buf);func_0011E3A0(D_002FE01C,0);func_0011DED0(D_002FE01C);D_002FE020=1;}break;case 2:if(!D_002FE02C){func_00110480(*(int*)(D_00307DF8+44),D_002FE024,8);q=func_00115100(*(int*)(D_00307DF8+152),&D_001D6EFC);func_00115170(*(int*)(D_00307DF8+152),q,(float*)buf);if(D_00307DF8==D_003080B0)f+=D_001D35F8;else if(D_00307DF8==D_00307D00)f+=D_001D6E28;else if(D_00307DF8==D_00307CFC)f+=D_001D411C;func_0010FF70(D_002FE024,buf);func_0011DED0(D_002FE028);D_002FE02C=1;}break;}}
#pragma optimize("", on)
void func_0008BFB0(int param_1)
{
  int func_00110420(...);
  extern int D_00307DF8;
  int func_00110480(...);
  extern int D_0030809C;
  int func_0011DEF0(...);
  int func_0011D310(...);
  extern unsigned int D_002FE018, D_002FE024;
extern int D_002FE01C, D_002FE028;
  extern char D_002FE020, D_002FE02C;
  unsigned int *puVar3;
  int *piVar1;
  int iVar2;
  char **piVar4;
  unsigned int uVar5;
  int iVar6;

  if (param_1 >= 0) {
    if (param_1 > 1) {
      if (param_1 == 2) {
        func_00110420(*(int *)(D_00307DF8 + 0x2c),D_002FE024);
        func_00110480(D_0030809C,D_002FE024,8);
        func_0011DEF0(D_002FE028);
        puVar3 = (unsigned int *)(D_002FE028 + 0x15c);
        uVar5 = 0;
        if (uVar5 < *puVar3) {
          iVar2 = D_002FE028 + 0x54;
          piVar1 = (int *)(D_002FE028 + 0x50);
          piVar4 = (char **)(D_002FE028 + 0x160);
          iVar6 = 0;
          do {
            func_0011D310(*piVar4 + iVar6,*(int *)(*piVar1 + 0x2c),iVar2);
            *(int *)(iVar6 + 0x20 + *piVar4) = 0;
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 0x58;
          } while (uVar5 < *puVar3);
        }
        D_002FE02C = 0;
      }
    } else {
      func_00110420(*(int *)(D_00307DF8 + 0x2c),D_002FE018);
      func_00110480(D_0030809C,D_002FE018,8);
      func_0011DEF0(D_002FE01C);
      puVar3 = (unsigned int *)(D_002FE01C + 0x15c);
      uVar5 = 0;
      if (uVar5 < *puVar3) {
        iVar2 = D_002FE01C + 0x54;
        piVar1 = (int *)(D_002FE01C + 0x50);
        piVar4 = (char **)(D_002FE01C + 0x160);
        iVar6 = 0;
        do {
          func_0011D310(*piVar4 + iVar6,*(int *)(*piVar1 + 0x2c),iVar2);
          *(int *)(iVar6 + 0x20 + *piVar4) = 0;
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x58;
        } while (uVar5 < *puVar3);
      }
      D_002FE020 = 0;
    }
  }
}

