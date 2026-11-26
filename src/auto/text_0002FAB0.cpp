/* 8 functions from 0x0002FAB0 to 0x00030A7B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Vec30540 {
 float x,y,z;
 Vec30540(const float *v) { x=v[0];y=v[1];z=v[2]; }
 Vec30540 &operator=(const Vec30540 &v) { x=v.x;y=v.y;z=v.z;return *this; }
};
extern float D_002EE848,D_002EE850,D_001D3E00,D_001D2B64,D_001D27B8,D_001D27B0,D_001D290C;
extern int D_00307DB4;
extern unsigned int D_002EEA94;
extern char D_001D3CC4;
extern unsigned char D_001D2ACC,D_001D3E04,D_00307CF8;

bool func_000302F0(char *a, char *b)
{
    extern char *D_003080FC;
    extern int D_002EDDE8;
    extern float D_001D35F8;
    void func_00110060(int, float *);
    void func_0012F7A0(float *, float *);
    char func_00069E60(float *, float *, int *, unsigned char *, int);
    float func_0012E7B0(float *, char *);
    float v1[8];
    float v2[8];
    __declspec(align(16)) float m[16];
    unsigned char buf[88];

    if (D_003080FC != 0) {
        char t = D_003080FC[0x13];
        if (t == 5 || t == 4 || t == 0x4f || t == 0x39)
            return false;
    }
    func_00110060(*(int *)(a + 0x2c), m);
    *(int *)&v1[0] = *(int *)(a + 0xe8);
    *(int *)&v1[1] = *(int *)(a + 0xec);
    v1[2] = *(float *)(a + 0xfc) + *(float *)(a + 0xf0);
    func_0012F7A0(v1, m);
    *(int *)&v2[0] = *(int *)&v1[0];
    v2[1] = v1[1] - *(float *)(a + 0xf8) * 1.25f;
    *(int *)&v2[2] = *(int *)&v1[2];
    if (func_00069E60(v1, v2, &D_002EDDE8, buf, 0))
        return false;
    if (func_0012E7B0(&m[12], b + 0x11c) > D_001D35F8)
        return true;
    return false;
}

void __cdecl _func_000303F0(int param_1, int *param_2)
{
  extern float D_002EE848, D_001D3E00, D_001D2B64, D_002EE850;
  extern int D_00307DB4;
  extern char D_001D3CC4;
  int _func_0009CC90(...), _func_0002D030(...);
  float *f = (float *)param_2;
  float *p;
  float a, b, c, d;
  int e, g;
  f[0x24] = D_001D3E00 * D_002EE848 + D_001D2B64;
  f[0x25] = D_001D3E00 * D_002EE850 + D_001D2B64;
  p = (float *)(_func_0009CC90(param_1, &D_001D3CC4) + 0x54);
  a = p[0];
  b = p[1];
  e = *(int *)(param_1 + 0xfc);
  g = ((int *)p)[2];
  c = *(float *)(param_1 + 0xf4);
  d = *(float *)(param_1 + 0xf8);
  param_2[0x79] = 0x3dcccccd;
  param_2[0x78] = 0;
  f[0x4d] = c;
  f[0x4e] = d;
  param_2[0x4f] = e;
  f[0x50] = a;
  f[0x51] = b;
  param_2[0x52] = g;
  *((char *)param_2 + 0x1ae) = 0;
  param_2[0xc6] = 0;
  *((char *)param_2 + 0x314) = 1;
  param_2[0x5e] = 0;
  param_2[0x5c] = 0;
  param_2[0x5d] = -1;
  param_2[0x6e] = -1;
  param_2[0x65] = D_00307DB4;
  *((char *)param_2 + 0x35c) = 1;
  param_2[0xd8] = 0;
  param_2[0x28] = 0;
  param_2[0x26] = 0;
  param_2[0xd9] = 0x3f800000;
  param_2[0xda] = 0xbf800000;
  param_2[0xdc] = 0;
  *((char *)param_2 + 0x378) = 0;
  param_2[0xdd] = 0;
  *((char *)param_2 + 0x1a3) = 0;
  *((char *)param_2 + 0x1a4) = 0;
  param_2[0x70] = 0;
  _func_0002D030(param_1);
  *param_2 = 3;
}

void func_00030540(int p,int *s)
{
 int func_0009CC90(...),func_0002D030(...),func_0009C7A0(...),func_000A22B0(...);
 float func_000A2310(int); int func_000A2350(...);
 float *f=(float *)s;
 f[0x24]=(float)D_002EE848*D_001D3E00+D_001D2B64;
 f[0x25]=(float)D_002EE850*D_001D3E00+D_001D2B64;
 float *v=(float *)(func_0009CC90(p,&D_001D3CC4)+0x54);
 float a=v[0],b=v[1],c=*(float *)(p+0xf4),d=*(float *)(p+0xf8);
 int e=*(int *)(p+0xfc),g=((int *)v)[2];
 s[0x78]=0;s[0x79]=0x3dcccccd;
 f[0x4d]=c;f[0x4e]=d;s[0x4f]=e;
 s[0x52]=g;f[0x50]=a;f[0x51]=b;
 *((char *)s+0x1ae)=0;*((char *)s+0x314)=1;s[0xc6]=0;
 s[0x5e]=0;s[0x5c]=0;s[0x5d]=3;s[0x6e]=3;s[0x65]=D_00307DB4;
 *((char *)s+0x35c)=1;s[0xd8]=0;s[0xd9]=0x3f800000;s[0xda]=0xbf800000;
 s[0xdc]=0;*((char *)s+0x378)=0;s[0xdd]=0;
 *((char *)s+0x1a3)=0;*((char *)s+0x1a4)=0;s[0x70]=0;
 func_0002D030(p);*s=3;
 unsigned int *range=(unsigned int *)func_0009C7A0(p,&D_001D2ACC,0);
 D_00307CF8=1;
 *(int *)func_0009C7A0(p,&D_001D3E04,0)=0x3f800000;
 unsigned int n=range[0]; float t;
 if(n==range[1]) t=D_001D27B8;
 else {
 float current=func_000A2310(p+100);
 n=range[0];
 t=(current-(float)n)/(float)(range[1]-n);
 if(t>=D_001D27B8) {
 if(t>D_001D27B0) t=D_001D27B0;
 } else t=D_001D27B8;
 }
 float value=(float)n+(float)(range[1]-n)*t;
 int bits=*(int *)&value;
 func_000A22B0(p+100,2,n,range[1],range[2],0);
 func_000A2350(p+100,bits);
 s[0x5c]=0;s[0x5d]=3;D_002EEA94=3;s[0x80]=0;
}

void func_00030790(int param_1, int param_2)
{
  int func_0009C7A0(...);
  extern undefined D_001D3E10;
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D3E10),0);
  func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
  *(undefined4 *)(param_2 + 0x310) = 0;
  return;
}

void func_000307D0(int param_1, undefined4 *param_2)
{
  extern undefined4 D_00307D08;
  extern undefined4 D_00313AF8;
  int func_000F9C00(...);
  extern undefined4 D_00307DF8;
  extern undefined D_001D3E34;
  extern undefined4 D_00313B34;
  extern undefined4 D_00313AD0;
  extern float D_001E461C;
  extern float D_001D2C00;
  int func_000A2370(...);
  extern float D_001D27B8;
  int func_0002D450(...);
  extern undefined D_001D3E28;
  extern undefined4 D_00313A68;
  extern float D_002EE848;
  extern float D_001D3E00;
  extern float D_001D2B64;
  extern float D_002EE850;
  int func_0006D7A0(...);
  extern undefined4 D_00307DD8;
  extern undefined D_003080B8;
  extern undefined4 D_003080FC;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  __declspec(align(16)) undefined4 local_170 [0x4c];
  undefined4 local_168;
  undefined4 local_160;
  float local_15c;
  float local_158;
  uint local_130;
  undefined4 local_c8 [16];
  undefined4 local_88;
  undefined4 local_84;
  
  bVar7 = 0;
  if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313AF8 * 0x18) != 0) {
    func_000F9C00(D_00307DF8,((undefined *)&D_001D3E34));
  }
  fVar1 = *(float *)(*(int *)(D_00307D08 + 0x10) + D_00313B34 * 0x18);
  fVar2 = *(float *)(*(int *)(D_00307D08 + 0x10) + D_00313AD0 * 0x18);
  fVar3 = D_001E461C + (float)*(float*)((char*)param_2+0x310);
  *(float*)((char*)param_2+0x310) = fVar3;
  if (!(fVar3 <= D_001D2C00)) {
    iVar4 = func_000A2370(param_1 + 100);
    if (((iVar4 == 0) || (fVar1 != D_001D27B8)) || (fVar2 != D_001D27B8)) {
      *param_2 = 2;
      param_2[0x27] = 0;
      func_0002D450(((undefined *)&D_001D3E28));
    }
    if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313AF8 * 0x18) != 0) {
      *param_2 = 4;
      param_2[0x104] = 0x3f800000;
      *(undefined1 *)((int)param_2 + 0x346) = 0;
      *(undefined1 *)((int)param_2 + 0x347) = 0;
    }
    if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313A68 * 0x18) != 0) {
      *param_2 = 0x18;
    }
  }
  local_15c = D_002EE848 * D_001D3E00 + D_001D2B64;
  puVar5 = local_170;
  for (iVar4 = 0x58; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  local_168 = 0;
  local_158 = D_002EE850 * D_001D3E00 + D_001D2B64;
  local_170[0] = 0x19;
  local_160 = 0x41f00000;
  func_0006D7A0(param_1,param_2 + 4,local_170);
  if ((local_130 & 0x102) == 0) {
    *param_2 = 2;
  }
  D_00307DD8 = local_88;
  puVar5 = local_c8;
  puVar6 = (undefined4 *)((undefined *)&D_003080B8);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  D_003080FC = local_84;
  return;
}

void func_000309B0(int a,int b,float c) { int func_00131220(...); int func_000A2310(...); extern float D_001D3E44,D_001D3E40,D_001D290C,D_001D29E0,D_001D39B4; float t=func_00131220(c*D_001D3E44); int *p=*(int**)(b+0x318); int n=*p; if(n<0)n+=(int)D_001D290C; *(float*)(b+0x334)=(*(float*)(b+0x33c)-n)/(t*D_001D3E40); if(*(float*)(b+0x358)!=0) { int q=func_000A2310(a+100); float z=t*D_001D3E40-*(float*)(b+0x358); if(z> D_001D29E0)return; *(float*)(b+0x334)=(*(float*)(b+0x33c)-q)/z; *(float*)(b+0x9c)=t-*(float*)(b+0x358)*D_001D39B4; return; } *(float*)(b+0x9c)=t; }

