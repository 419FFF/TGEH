/* 12 functions from 0x0004CB90 to 0x0004DB80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

#pragma optimize("y", on)
void func_0004CB90(int param_1)
{
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000A1C00(*(undefined4 *)(iVar1 + 0x30));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x38));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x34));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x3c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x40));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x44));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x48));
  func_00116FB0(iVar1);
  return;
}

void func_0004CBF0(int param_1)
{
  *(int *)(param_1 + 0x110) = 2;
}

void func_0004CC00(int p){int func_0009A8A0(...);int func_001100A0(...);int func_0012F120(...);int func_001105E0(...);extern float D_001D314C,D_001D27B8,D_001D27B0;float a[19];int*q=(int*)a;longdouble r;if(*(int*)(p+0x110)==2){*(int*)(p+0x110)=0;r=func_0009A8A0();a[0]=(float)(r+r);func_001100A0(*(int*)(p+0x2c),q);*(int*)(p+0x118)=*(int*)(q[0]+0x30);*(int*)(p+0x11c)=*(int*)(q[0]+0x34);*(int*)(p+0x120)=*(int*)(q[0]+0x38);func_0012F120(q+1);q[5]=*(int*)(p+0x118);q[6]=*(int*)(p+0x11c);q[7]=*(int*)(p+0x120);q[1]=0x3f800000;q[10]=0;q[13]=0x3f800000;func_001105E0(*(int*)(p+0x2c),q+1,0);}switch(*(int*)(p+0x110)){case 0:r=*(float*)(p+0x114)-D_001D314C;*(float*)(p+0x114)=(float)r;if(r<D_001D27B8){*(int*)(p+0x110)=1;*(float*)(p+0x114)=0;}break;case 1:r=*(float*)(p+0x114)+D_001D314C;*(float*)(p+0x114)=(float)r;func_0012F120(q+1);q[5]=*(int*)(p+0x118);q[6]=*(int*)(p+0x11c);q[12]=*(int*)(p+0x114);q[7]=*(int*)(p+0x120);q[1]=0x3f800000;q[13]=0x3f800000;func_001105E0(*(int*)(p+0x2c),q+1,0);if(D_001D27B0<*(float*)(p+0x114)){*(int*)(p+0x110)=0;r=func_0009A8A0();*(float*)(p+0x114)=(float)(r+D_001D27B0);func_0012F120(q+1);q[5]=*(int*)(p+0x118);q[6]=*(int*)(p+0x11c);q[7]=*(int*)(p+0x120);q[1]=0x3f800000;q[10]=0;q[13]=0x3f800000;func_001105E0(*(int*)(p+0x2c),q+1,0);}}}

void _func_0004CDF0(int p) { extern float D_001D2808,D_001D29F4; extern float _func_00131760(void); float x=_func_00131760()*D_001D2808; *(int*)(p+0x114)=2; *(float*)(p+0x110)=x+D_001D29F4; }

void func_0004CE20(int p)
{
    extern float D_001D3ADC, D_001D27B0, D_001D4F8C, D_001D37AC, D_001D29E0, D_001D27F8;
    extern float func_00131760(void);
    extern void func_00110060(int, void *);
    extern void func_001105E0(int, void *, int);
    extern void func_00110000(int);
    int local[16];
    float x;
    switch (*(int *)(p + 0x114)) {
    case 0:
        x = *(float *)(p + 0x110) + D_001D4F8C;
        *(float *)(p + 0x110) = x;
        if (x > D_001D27B0) {
            *(int *)(p + 0x114) = 1;
            *(float *)(p + 0x110) = func_00131760() * D_001D37AC + D_001D29E0;
            func_00110060(*(int *)(p + 0x2c), local);
            local[15] = *(int *)(p + 0x118);
            func_001105E0(*(int *)(p + 0x2c), local, 0);
            func_00110000(*(int *)(p + 0x2c));
        }
        break;
    case 1:
        x = *(float *)(p + 0x110) + D_001D3ADC;
        *(float *)(p + 0x110) = x;
        if (x > D_001D27B0) {
            *(int *)(p + 0x114) = 0;
            *(float *)(p + 0x110) = 0;
        }
        break;
    case 2:
        func_00110060(*(int *)(p + 0x2c), local);
        *(int *)(p + 0x118) = local[15];
        *(int *)(p + 0x114) = 1;
        break;
    }
    func_00110060(*(int *)(p + 0x2c), local);
    local[15] = *(int *)(p + 0x118);
    if (*(int *)(p + 0x114) == 0)
        *(float *)&local[15] = *(float *)&local[15] - *(float *)(p + 0x110) * D_001D27F8;
    func_001105E0(*(int *)(p + 0x2c), local, 0);
}

void _func_0004CF70(int p) { extern float _func_00131760(void); float v=_func_00131760(); *(float*)(p+0x110)=v; int q=*(int*)(p+0x2c); *(unsigned char*)(q+0x20)&=0xfb; }

void _func_0004CF90(int p) { extern float D_001D333C,D_001D27B0,D_001D27AC,D_001D27EC; extern void _func_001100A0(int,void*); extern void _func_0012F120(void*); extern float _func_00131230(float); extern void _func_001105E0(int,void*,int); float x=*(float*)(p+0x110)+D_001D333C; *(float*)(p+0x110)=x; if(x>D_001D27B0) *(float*)(p+0x110)=x-D_001D27B0; int local[16]; _func_001100A0(*(int*)(p+0x2c),local); _func_0012F120(&local[1]); local[1]=0x3f800000; float a=_func_00131230(*(float*)(p+0x110)*D_001D27AC); local[5]=0x3f800000; *(float*)&local[4]=a*D_001D27EC+D_001D27B0; local[8]=*(int*)(local[0]+0x30); local[9]=*(int*)(local[0]+0x34); local[10]=*(int*)(local[0]+0x38); _func_001105E0(*(int*)(p+0x2c),&local[1],0); }

void func_0004D050(int p){int func_00116A90(...),func_00048720(...),func_0009C7A0(...),func_0009CC90(...),func_00110060(...),func_0012F7A0(...);float func_0012EA60(...),func_00047510(...);extern int D_00307D10;extern char D_001D4FFC,D_001D2ACC,D_001D2AC0,D_001D4FF0,D_001D4FD8,D_001D4FC0,D_001D4FA8,D_001D4F90,D_001D2940,D_001D3830;int i=func_00116A90(0x5c,1,1);*(int *)(p+0x110)=i;*(int *)(i+0x3c)=func_00048720(D_00307D10,0x1f,*(int *)(p+0x134),p);*(int *)(i+8)=func_0009C7A0(p,&D_001D4FFC,0);*(int *)(i+4)=func_0009C7A0(p,&D_001D2ACC,0);*(int *)(i+0xc)=func_0009C7A0(p,&D_001D2AC0,0);*(int *)(i+0x10)=func_0009C7A0(p,&D_001D4FF0,0);*(int *)(i+0x18)=func_0009C7A0(p,&D_001D4FD8,0);*(int *)(i+0x1c)=func_0009C7A0(p,&D_001D4FC0,0);*(int *)(i+0x14)=func_0009C7A0(p,&D_001D4FA8,0);*(int *)(i+0x20)=func_0009C7A0(p,&D_001D4F90,0);int q=func_0009CC90(p,&D_001D2940);int *base=(int *)(q+0x54);*(int *)(i+0x30)=base[0];*(int *)(i+0x34)=base[1];*(int *)(i+0x38)=base[2];int *r=(int *)func_0009C7A0(p,&D_001D2940,0);if(r){*(int *)(i+0x30)=r[0];*(int *)(i+0x34)=r[1];*(int *)(i+0x38)=r[2];}*(int *)(i+0x24)=func_0009C7A0(p,&D_001D3830,0);__declspec(align(16)) char xyz[0x64];func_00110060(*(int *)(p+0x2c),xyz);int x=*(int *)(p+0xe8),z=*(int *)(p+0xf0),y=0;func_0012F7A0(&x,xyz);*(int *)(i+0x40)=x;*(int *)(i+0x44)=y;*(int *)(i+0x48)=z;int a=*(int *)(p+0x6c),b=*(int *)(p+0x74),c=0;func_0012EA60(&a);*(float *)(i+0x4c)=func_00047510(a,b);*(int *)(i+0x50)=0;*(int *)(i+0x54)=0x3f800000;*(int *)(i+0x58)=0;}

extern int _func_00045CC0(int, int);
extern int _func_00045D00(int, int);
extern int _func_00045C20(int, int, int);
extern int D_00307DF8;
extern void _func_001100A0(int, void *);
extern void _func_0012F7A0(void *, int);
extern int _func_00046900(int, int, void *, int);
extern int _func_00045F80(int, void *);
unsigned char _func_0004D210(int unused, int obj) {
    int *at40 = (int *)(obj + 0x40);
    _func_00045CC0(*(int *)(obj + 0x3c), (int)at40);
    _func_00045D00(*(int *)(obj + 0x3c), (int)at40);
    _func_00045C20(*(int *)(obj + 0x3c), 1, 0);
    int matrix;
    _func_001100A0(*(int *)(D_00307DF8 + 0x2c), &matrix);
    int vec1[4];
    vec1[0] = *(int *)(D_00307DF8 + 0xe8);
    vec1[1] = *(int *)(D_00307DF8 + 0xec);
    vec1[2] = *(int *)(D_00307DF8 + 0xf0);
    _func_0012F7A0(vec1, matrix);
    if (_func_00046900(*(int *)(obj + 0x3c), (int)at40, vec1, 0x43fa0000) == 0) {
        int matrix2;
        _func_001100A0(*(int *)(D_00307DF8 + 0x2c), &matrix2);
        int vec2[4];
        vec2[0] = *(int *)(D_00307DF8 + 0xe8);
        vec2[1] = *(int *)(D_00307DF8 + 0xec);
        vec2[2] = *(int *)(D_00307DF8 + 0xf0);
        _func_0012F7A0(vec2, matrix2);
        if (*(int *)(*(int *)(obj + 0x3c) + 0x5c8) <= 2) {
            *(int *)obj = 5;
            return 1;
        }
    }
    unsigned char r = _func_00045F80(*(int *)(obj + 0x3c), vec1) == 0;
    return r;
}

void __cdecl _func_0004D320(void *obj) { volatile int local[29]; volatile int a=1,b=0,c=0; local[0]=a; local[1]=b; local[2]=c; }

void func_0004D990(int param_1)
{
  int func_00116A90(...);
  int func_0004FA80(...);
  int __ftol2(...);
  int func_00048720(...);
  extern undefined4 D_00307D10;
  extern undefined4 D_002EEB88;
  extern undefined4 D_002EEB80;
  extern undefined4 D_002EEB84;
  int func_00116E50(...);
  int func_0013E469(...);
  extern undefined D_001D503C;
  int func_00103210(...);
  extern undefined D_001D5030;
  int func_0009C7A0(...);
  extern undefined D_001D28FC;
  int func_00110060(...);
  int func_00047510(...);
  int func_00045A60(...);
  int func_000A1BB0(...);
  extern undefined D_001D2C10;
  extern undefined D_001D5024;
  int func_00131990(...);
  extern undefined D_001D29C7;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longdouble lVar4;
  undefined1 local_150 [32];
  undefined4 local_130;
  undefined4 local_128;
  undefined1 local_110 [268];
  
  puVar1 = (undefined4 *)func_00116A90(0x330,1,1);
  *(undefined4 **)(param_1 + 0x110) = puVar1;
  puVar1[0x96] = *(undefined4 *)(param_1 + 0x130);
  func_0004FA80(param_1,puVar1 + 1);
  iVar2 = __ftol2(puVar1[0x96],param_1);
  uVar3 = func_00048720(D_00307D10,iVar2 << 1);
  puVar1[0x1b] = uVar3;
  *puVar1 = 0;
  if (D_002EEB88 == D_002EEB80) {
    D_002EEB84 = func_00116E50(D_002EEB84,D_002EEB80 * 4 + 4,1,1);
    *(int *)(D_002EEB84 + D_002EEB80 * 4) = param_1;
    D_002EEB80 = D_002EEB80 + 1;
LAB_00002e9d:
    D_002EEB88 = D_002EEB88 + 1;
  }
  else {
    iVar2 = 0;
    if (0 < D_002EEB80) {
      do {
        if (*(int *)(D_002EEB84 + iVar2 * 4) == 0) {
          *(int *)(D_002EEB84 + iVar2 * 4) = param_1;
          goto LAB_00002e9d;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < D_002EEB80);
    }
  }
  func_0013E469(local_110,((undefined *)&D_001D503C),*(undefined4 *)(param_1 + 0xc));
  uVar3 = func_00103210(local_110);
  puVar1[200] = uVar3;
  func_0013E469(local_110,((undefined *)&D_001D5030),*(undefined4 *)(param_1 + 0xc));
  uVar3 = func_00103210(local_110);
  puVar1[0xc9] = uVar3;
  *(undefined1 *)(puVar1 + 0xca) = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x80;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x198) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a0) = 0x3f800000;
  uVar3 = func_0009C7A0(param_1,((undefined *)&D_001D28FC),2);
  puVar1[0x97] = uVar3;
  func_00110060(*(undefined4 *)(param_1 + 0x2c),local_150);
  lVar4 = (longdouble)func_00047510(local_130,local_128);
  puVar1[0xc5] = (float)lVar4;
  puVar1[0xc6] = (float)lVar4;
  func_00045A60(param_1);
  uVar3 = func_000A1BB0(param_1,((undefined *)&D_001D2C10));
  puVar1[0x98] = uVar3;
  uVar3 = func_000A1BB0(param_1,((undefined *)&D_001D5024));
  puVar1[0x99] = uVar3;
  func_00131990(((undefined *)&D_001D29C7));
  puVar1[0x9a] = 0xffffffff;
  return;
}

