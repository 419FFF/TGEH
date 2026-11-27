/* 9 functions from 0x00058610 to 0x00059610, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct CurveVec2 { float x,y; };
static __forceinline CurveVec2 CurveScale(CurveVec2 v, float k) { CurveVec2 r; r.x=(double)k*v.x; r.y=(double)k*v.y; return r; }
static __forceinline CurveVec2 CurveAdd(CurveVec2 a, CurveVec2 b) { CurveVec2 r; r.x=(double)a.x+b.x; r.y=(double)a.y+b.y; return r; }

void func_00058610(int edi)
{
  extern char D_0000FFFF;
  extern char D_001D5218;
  extern char D_001D2CA0;
  extern float D_001D2F24;
  extern char D_001D3CC4;
  int func_000A1D10(int, int, int, int, int, int);
  void __fastcall func_000204F0(int);
  void func_0006B5A0(int, int);
  int func_00115100(int, int);
  void func_0007C3F0(float, int, int, int);
  int func_000A1F50(int);
  void __fastcall func_0001E500(int);
  void func_000A22B0(int, int, int, int, int, int);
  void func_00056C00(int, int);
  void func_0004F310(int, int);
  void func_0007C4C0(int);
  int *esi = *(int **)(edi + 0x110);
  unsigned short w;
  long double fv;
  int *p;
  switch (*esi) {
  case 1:
    func_000A1D10(esi[0x96], 1, 0, (int)&D_0000FFFF, 0x41c00000, 0);
    func_000204F0(edi);
    func_0006B5A0(edi, (int)&D_001D5218);
    if (esi[0x97] == -1) {
      esi[0x97] = func_00115100(*(int *)(*(int *)(esi[0x96] + 0x18) + 0x34), (int)&D_001D2CA0);
    }
    w = *(unsigned short *)(*(int *)(*(int *)(esi[0x96] + 0x10)) + 0x1a);
    fv = (long double)w * (long double)D_001D2F24;
    func_0007C3F0((float)fv, 0xff00ff00, edi, esi[0x97]);
    *esi = 2;
  case 2:
    if (func_000A1F50(esi[0x96]) == 0) {
      func_0001E500(edi);
      *esi = 0;
      func_0006B5A0(edi, (int)&D_001D3CC4);
      p = (int *)esi[0x15];
      func_000A22B0(edi + 0x64, 2, p[0], p[1], p[2], 0);
    } else {
      if (*(char *)(edi + 0x174) != 0) {
        func_0004F310(edi, (int)(esi + 1));
        *esi = 0;
        func_0007C4C0(edi);
        func_0001E500(edi);
        func_0006B5A0(edi, (int)&D_001D3CC4);
      }
      return;
    }
  case 0:
    if (esi[0x27] != 0x6a) {
      func_00056C00(edi, (int)(esi + 1));
      return;
    }
    func_00056C00(edi, (int)(esi + 1));
    if (esi[0x27] != 0x6a) {
      *esi = 1;
    }
    return;
  default:
    return;
  }
}

void func_00058790(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x6c));
  func_000A1C00(*(undefined4 *)(iVar1 + 600));
  func_00116FB0(iVar1);
  return;
}

float func_000587D0(float*a,float*b){extern float D_001D27B0,D_001D2D4C,D_001D5230,D_001D27B8,D_001D28AC;int func_00131260(...);int func_000139C0(...);double x=(double)a[0]*b[0]+(double)a[1]*b[1];if(x>D_001D27B0)x=1.;else if(x<D_001D2D4C)x=-1.;x=func_00131260((float)x);float v=b[0],w=b[1];func_000139C0(&v,(float)x);if(w*a[1]+v*a[0]<D_001D5230)x=-x;if(x<D_001D27B8)x+=D_001D28AC;return (float)x;}

void func_00058890(float *out,float *in)
{
 float func_0012E840(float*,float*);
 float func_0012EA00(float*);
 float func_0012E910(float*);
 float func_00131260(float),func_00131230(float),func_00131250(float),func_00131210(float);
 extern const float D_001D2A2C,D_001D314C,D_001D29E0,D_001D28E0,D_001D286C,D_001D27B0;
 float delta[2],radial[2],gap[2];
 double distance=func_0012E840(in,in+2);
 if(distance<=(double)in[4]*in[4]*D_001D2A2C){
  if(distance<D_001D314C){
   in[0]=(double)in[0]+D_001D29E0;in[1]=(double)in[1]+D_001D29E0;
   in[2]=(double)in[2]-D_001D29E0;in[3]=(double)in[3]-D_001D29E0;
  }
  in[4]=(double)in[4]*D_001D28E0;
  func_00058890(out,in);return;
 }
 *(int*)(out+2)=*(int*)(in+4);
 delta[0]=(double)in[0]-in[2];delta[1]=(double)in[1]-in[3];
 *(int*)(out+0)=*(int*)(in+2);*(int*)(out+1)=*(int*)(in+3);
 *(int*)(out+17)=*(int*)(in+0);*(int*)(out+18)=*(int*)(in+1);
 func_0012EA00(delta);
 float *axis=in+5;
 double angle=func_000587D0(delta,axis);
 float *dir;
 if(angle>=D_001D286C){
  out[10]=-(double)axis[1];*(int*)(out+11)=*(int*)axis;
  dir=out+3;
  out[10]=(double)out[10]*in[4];out[11]=(double)out[11]*in[4];
  out[10]=(double)out[10]+in[0];out[11]=(double)in[1]+out[11];
  dir[0]=(double)in[2]-out[10];out[4]=(double)in[3]-out[11];
  float inv=1.0f/func_0012E910(dir);
  dir[0]=(double)inv*dir[0];out[4]=(double)inv*out[4];
  *(int*)(out+5)=*(int*)(dir+1);out[6]=-(double)dir[0];
  out[9]=func_00131260((float)(inv*in[4]));
  radial[0]=(double)in[0]-out[10];radial[1]=(double)in[1]-out[11];
  func_0012EA00(radial);
  out[8]=func_000587D0(dir,radial);
 }else{
  *(int*)(out+10)=*(int*)(axis+1);out[11]=-(double)axis[0];
  dir=out+3;
  out[10]=(double)out[10]*in[4];out[11]=(double)out[11]*in[4];
  out[10]=(double)out[10]+in[0];out[11]=(double)in[1]+out[11];
  dir[0]=(double)in[2]-out[10];out[4]=(double)in[3]-out[11];
  float inv=1.0f/func_0012E910(dir);
  dir[0]=(double)inv*dir[0];out[4]=(double)inv*out[4];
  out[5]=-(double)dir[1];*(int*)(out+6)=*(int*)(dir+0);
  out[9]=func_00131260((float)(inv*in[4]));
  radial[0]=(double)in[0]-out[10];radial[1]=(double)in[1]-out[11];
  func_0012EA00(radial);
  out[8]=func_000587D0(radial,dir);
 }
 float sine=func_00131230(out[9]);
 float cosine=func_00131250(out[9]);
 float x=((double)cosine*dir[0]+(double)sine*out[5])*out[2];
 float y=((double)cosine*out[4]+(double)sine*out[6])*out[2];
 out[12]=x+out[10];
 out[13]=y+out[11];
 out[14]=(double)cosine*out[5]-(double)sine*dir[0];
 out[15]=(double)cosine*out[6]-(double)sine*out[4];
 float arc=(double)func_00131210((float)((double)out[9]-out[8]))*out[2];
 gap[0]=(double)out[0]-out[12];gap[1]=(double)out[1]-out[13];
 double total=(double)func_0012E910(gap)+arc;
 out[7]=total;out[16]=(double)arc/total;
}

undefined4 _func_00058C80(int param_1, float *param_2)
{
  int func_0012EA00(...);
  extern undefined4 D_001D27B8;
  int func_000587D0(...);
  extern undefined4 D_001D286C;
  extern undefined4 D_001D5234;
  int func_0012E780(...);
  extern undefined4 D_001D27EC;
  int func_00131210(...);
  int func_00131260(...);
  int func_00131250(...);
  int func_00131230(...);
  extern undefined4 D_001D27B0;
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  longdouble lVar6;
  longdouble lVar7;
  longdouble lVar8;
  double local_20;
  double local_1c;
  double local_18;
  double local_14;
  double local_10;
  double local_c;
  
  pfVar1 = (float *)(param_1 + 4);
  *pfVar1 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 8) = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x18);
  func_0012EA00(pfVar1);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  pfVar2 = (float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x10) = -*pfVar1;
  local_20 = *param_2 - *(float *)(param_1 + 0x14);
  local_1c = param_2[1] - *(float *)(param_1 + 0x18);
  func_0012EA00(&local_20);
  bVar5 = D_001D27B8 < local_1c * param_2[4] - local_20 * param_2[5];
  local_10 = param_2[2] - *(float *)(param_1 + 0x1c);
  local_c = param_2[3] - *(float *)(param_1 + 0x20);
  func_0012EA00(&local_10);
  if (D_001D27B8 < local_c * param_2[6] - local_10 * param_2[7]) {
    bVar5 = bVar5 | 2;
  }
  switch(bVar5) {
  case 0:
    lVar6 = (longdouble)func_000587D0(pfVar2,&local_20);
    if ((lVar6 < (longdouble)D_001D286C == (lVar6 == (longdouble)D_001D286C)) &&
       (((longdouble)D_001D5234 <= lVar6 || (*(char *)(param_1 + 0x4c) == '\0')))) {
      return 1;
    }
    *(float *)(param_1 + 0x50) = local_20;
    *(float *)(param_1 + 0x54) = local_1c;
    *(float *)(param_1 + 0x58) = -*(float *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x50);
    *(float *)(param_1 + 0x70) = (float)lVar6;
    fVar3 = *(float *)(param_1 + 0x24) * *pfVar2;
    *(float *)(param_1 + 0x28) = fVar3 + *(float *)(param_1 + 0x14);
    fVar4 = *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x2c) = fVar4 + *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x30) = fVar3 + *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x34) = fVar4 + *(float *)(param_1 + 0x20);
    lVar6 = (longdouble)func_000587D0(&local_10,pfVar2);
    if (((longdouble)D_001D286C <= lVar6) && (*(char *)(param_1 + 0x4c) == '\0')) {
      return 1;
    }
    *(float *)(param_1 + 0x60) = *pfVar2;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 8);
    break;
  case 1:
    lVar7 = (longdouble)func_0012E780(param_1 + 0x14,param_1 + 0x1c);
    lVar6 = (longdouble)D_001D27EC;
    lVar8 = (longdouble)func_00131210((float)(lVar7 * lVar6));
    if (lVar8 < (longdouble)*(float *)(param_1 + 0x24)) {
      return 2;
    }
    lVar6 = (longdouble)func_00131260(*(float *)(param_1 + 0x24) / (float)(lVar7 * lVar6));
    lVar7 = (longdouble)func_00131250((float)lVar6);
    lVar6 = (longdouble)func_00131230((float)lVar6);
    local_18 = (float)((longdouble)(float)lVar7 * (longdouble)*(float *)(param_1 + 4) -
                      lVar6 * (longdouble)*pfVar2);
    local_14 = (float)((longdouble)(float)lVar7 * (longdouble)*(float *)(param_1 + 8) -
                      lVar6 * (longdouble)*(float *)(param_1 + 0x10));
    lVar6 = (longdouble)func_000587D0(&local_20,&local_18);
    if (lVar6 < (longdouble)D_001D286C == (lVar6 == (longdouble)D_001D286C)) {
      if ((longdouble)D_001D5234 <= lVar6) {
        return 1;
      }
      if (*(char *)(param_1 + 0x4c) == '\0') {
        return 1;
      }
    }
    *(float *)(param_1 + 0x50) = local_20;
    *(float *)(param_1 + 0x54) = local_1c;
    *(float *)(param_1 + 0x58) = local_1c;
    *(float *)(param_1 + 0x5c) = -*(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x70) = (float)lVar6;
    fVar3 = local_18 * *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = fVar3 + *(float *)(param_1 + 0x14);
    fVar4 = local_14 * *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x2c) = fVar4 + *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x1c) - fVar3;
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x20) - fVar4;
    local_14 = -local_14;
    local_18 = -local_18;
    lVar6 = (longdouble)func_000587D0(&local_10,&local_18);
    if ((lVar6 < (longdouble)D_001D286C == (lVar6 == (longdouble)D_001D286C)) &&
       (*(char *)(param_1 + 0x4c) == '\0')) {
      return 1;
    }
    *(float *)(param_1 + 0x60) = local_18;
    *(float *)(param_1 + 100) = local_14;
    *(float *)(param_1 + 0x68) = -*(float *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x60);
    break;
  case 2:
    lVar7 = (longdouble)func_0012E780(param_1 + 0x14,param_1 + 0x1c);
    lVar6 = (longdouble)D_001D27EC;
    lVar8 = (longdouble)func_00131210((float)(lVar7 * lVar6));
    if (lVar8 < (longdouble)*(float *)(param_1 + 0x24)) {
      return 2;
    }
    lVar6 = (longdouble)func_00131260(*(float *)(param_1 + 0x24) / (float)(lVar7 * lVar6));
    lVar7 = (longdouble)func_00131250((float)lVar6);
    lVar6 = (longdouble)func_00131230((float)lVar6);
    local_18 = (float)(lVar6 * (longdouble)*pfVar2 +
                      (longdouble)(float)lVar7 * (longdouble)*(float *)(param_1 + 4));
    local_14 = (float)((longdouble)(float)lVar7 * (longdouble)*(float *)(param_1 + 8) +
                      lVar6 * (longdouble)*(float *)(param_1 + 0x10));
    lVar6 = (longdouble)func_000587D0(&local_18,&local_20);
    if (lVar6 < (longdouble)D_001D286C == (lVar6 == (longdouble)D_001D286C)) {
      if ((longdouble)D_001D286C <= lVar6) {
        return 1;
      }
      if (*(char *)(param_1 + 0x4c) == '\0') {
        return 1;
      }
    }
    *(float *)(param_1 + 0x50) = local_20;
    *(float *)(param_1 + 0x54) = local_1c;
    *(float *)(param_1 + 0x58) = -*(float *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x50);
    *(float *)(param_1 + 0x70) = (float)lVar6;
    fVar3 = local_18 * *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = fVar3 + *(float *)(param_1 + 0x14);
    fVar4 = local_14 * *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x2c) = fVar4 + *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x1c) - fVar3;
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x20) - fVar4;
    local_18 = -local_18;
    local_14 = -local_14;
    lVar6 = (longdouble)func_000587D0(&local_18,&local_10);
    if ((lVar6 < (longdouble)D_001D286C == (lVar6 == (longdouble)D_001D286C)) &&
       (*(char *)(param_1 + 0x4c) == '\0')) {
      return 1;
    }
    *(float *)(param_1 + 0x60) = local_18;
    *(float *)(param_1 + 100) = local_14;
    *(float *)(param_1 + 0x68) = local_14;
    *(float *)(param_1 + 0x6c) = -*(float *)(param_1 + 0x60);
    break;
  case 3:
    local_18 = -*pfVar2;
    local_14 = -*(float *)(param_1 + 0x10);
    lVar6 = (longdouble)func_000587D0(&local_20,&local_18);
    if (lVar6 < (longdouble)D_001D286C == (lVar6 == (longdouble)D_001D286C)) {
      if ((longdouble)D_001D5234 <= lVar6) {
        return 1;
      }
      if (*(char *)(param_1 + 0x4c) == '\0') {
        return 1;
      }
    }
    *(float *)(param_1 + 0x50) = local_20;
    *(float *)(param_1 + 0x54) = local_1c;
    *(float *)(param_1 + 0x58) = local_1c;
    *(float *)(param_1 + 0x5c) = -*(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x70) = (float)lVar6;
    fVar3 = *(float *)(param_1 + 0x24) * *pfVar2;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x14) - fVar3;
    fVar4 = *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x18) - fVar4;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x1c) - fVar3;
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x20) - fVar4;
    lVar6 = (longdouble)func_000587D0(&local_18,&local_10);
    if ((lVar6 < (longdouble)D_001D286C == (lVar6 == (longdouble)D_001D286C)) &&
       (*(char *)(param_1 + 0x4c) == '\0')) {
      return 1;
    }
    *(float *)(param_1 + 0x60) = -*pfVar2;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 8);
    *(float *)(param_1 + 100) = -*(float *)(param_1 + 0x10);
    break;
  default:
    goto switchD_00002720_default;
  }
  *(float *)(param_1 + 0x74) = (float)lVar6;
switchD_00002720_default:
  fVar3 = *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x24);
  lVar6 = (longdouble)func_0012E780((float *)(param_1 + 0x28),(float *)(param_1 + 0x30));
  lVar7 = (longdouble)D_001D27B0;
  *(float *)(param_1 + 0x38) =
       (float)(((longdouble)*(float *)(param_1 + 0x30) - (longdouble)*(float *)(param_1 + 0x28)) *
              (lVar7 / lVar6));
  *(float *)(param_1 + 0x3c) =
       (float)(((longdouble)*(float *)(param_1 + 0x34) - (longdouble)*(float *)(param_1 + 0x2c)) *
              (lVar7 / lVar6));
  lVar7 = (longdouble)*(float *)(param_1 + 0x74) * (longdouble)*(float *)(param_1 + 0x24) + lVar6 +
          (longdouble)fVar3;
  *(float *)(param_1 + 0x40) = (float)lVar7;
  lVar7 = (longdouble)D_001D27B0 / lVar7;
  lVar8 = (longdouble)fVar3 * lVar7;
  *(float *)(param_1 + 0x44) = (float)lVar8;
  *(float *)(param_1 + 0x48) = (float)(lVar6 * lVar7 + lVar8);
  return 0;
}

void func_00059260(char*a,int*b){int func_00131220(...);float func_000587D0(...);float func_00012070(...);a[0]=1;*(int*)(a+40)=b[0];*(int*)(a+44)=b[1];*(int*)(a+48)=b[2];*(int*)(a+52)=b[3];*(int*)(a+36)=b[8];double x=(double)*(float*)(a+48)-*(float*)(a+40);double y=(double)*(float*)(a+52)-*(float*)(a+44);*(float*)(a+4)=(float)x;*(float*)(a+8)=(float)y;double z=x*x+y*y;*(float*)(a+64)=(float)z;func_00131220((float)z);*(float*)(a+64)=100;*(float*)(a+4)=1;*(float*)(a+8)=0;float*p=(float*)(a+4);*(float*)(a+112)=func_000587D0((float*)(b+4),p);*(float*)(a+116)=func_000587D0((float*)(b+6),p);*(float*)(a+68)=func_00012070(*(float*)(a+112),*(float*)(a+116));*(int*)(a+56)=b[4];*(int*)(a+60)=b[5];}

void func_00059320(int a,float t,int c){extern float D_001D27B0;int func_000139C0(...);if(t>=D_001D27B0)t=1.f;float*p=(float*)a,*q=(float*)c;q[6]=(p[12]-p[10])*t+p[10];q[7]=(p[13]-p[11])*t+p[11];q[3]=p[1];q[4]=p[2];func_000139C0(q+3,t*p[17]+p[28]);}

void func_00059390(char *param_1, float *param_2)
{
  extern double func_0012E780(float *, float *);
  extern float D_001D2B64, D_001D37FC, D_001D2D4C, D_001D28E0;
  void func_00059260(char *, float *);
  int func_00058C80(char *, float *);
  float *pfVar1;
  double fVar3;
  float fVar5, fVar7, fm;
  int iVar4, iVar6;
  float local_40, local_3c, local_38, local_34, local_30, local_2c, local_28, local_24;
  float local_20[4];
  int aiStack_10[4];

  pfVar1 = param_2 + 2;
  if (func_0012E780(param_2, pfVar1) < D_001D2B64) {
    func_00059260(param_1, param_2);
    return;
  }
  *param_1 = 0;
  fVar3 = param_2[8];
  *(float *)(param_1 + 0x24) = fVar3;
  local_28 = fVar3 * param_2[5];
  local_24 = fVar3 * -param_2[4];
  local_38 = -local_28;
  local_34 = -local_24;
  local_40 = fVar3 * param_2[7];
  local_3c = fVar3 * -param_2[6];
  local_30 = -local_40;
  local_2c = -local_3c;
  local_28 = (double)local_28 + *param_2;
  local_24 = (double)local_24 + param_2[1];
  local_38 = (double)local_38 + *param_2;
  local_34 = (double)local_34 + param_2[1];
  local_40 = (double)local_40 + *pfVar1;
  local_3c = (double)local_3c + param_2[3];
  local_30 = (double)local_30 + *pfVar1;
  local_2c = (double)local_2c + param_2[3];
  local_20[0] = func_0012E780(&local_28, &local_40);
  local_20[1] = func_0012E780(&local_28, &local_30);
  local_20[2] = func_0012E780(&local_38, &local_40);
  local_20[3] = func_0012E780(&local_38, &local_30);
  iVar6 = 0;
  do {
    double best;
    iVar4 = 0;
    best = D_001D37FC;
    do {
      if ((local_20[iVar4] < best) && (D_001D2D4C < local_20[iVar4])) {
        aiStack_10[iVar6] = iVar4;
        best = local_20[iVar4];
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    local_20[aiStack_10[iVar6]] = -1.0f;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 4);
  iVar6 = 0;
  do {
    switch (aiStack_10[iVar6]) {
    case 0:
      *(float *)(param_1 + 0x14) = local_28;
      fm = local_40;
      fVar5 = local_3c;
      fVar7 = local_24;
      goto L2;
    case 1:
      *(float *)(param_1 + 0x14) = local_28;
      *(float *)(param_1 + 0x18) = local_24;
      *(float *)(param_1 + 0x1c) = local_30;
      *(float *)(param_1 + 0x20) = local_2c;
      break;
    case 2:
      *(float *)(param_1 + 0x14) = local_38;
      *(float *)(param_1 + 0x18) = local_34;
      *(float *)(param_1 + 0x1c) = local_40;
      *(float *)(param_1 + 0x20) = local_3c;
      break;
    case 3:
      *(float *)(param_1 + 0x14) = local_38;
      fm = local_30;
      fVar5 = local_2c;
      fVar7 = local_34;
L2:
      *(float *)(param_1 + 0x18) = fVar7;
      *(float *)(param_1 + 0x1c) = fm;
      *(float *)(param_1 + 0x20) = fVar5;
    }
    iVar4 = func_00058C80(param_1, param_2);
    if (iVar4 == 0) {
      return;
    }
    if (iVar4 == 2) {
      param_2[8] = (double)param_2[8] * D_001D28E0;
      func_00059390(param_1, param_2);
      return;
    }
    iVar6 = iVar6 + 1;
    if (iVar6 == 4) {
      param_1[0x4c] = 1;
      func_00059390(param_1, param_2);
      return;
    }
  } while (1);
}

extern float D_001D27B0;

// Struct for param_1 (arg0)
struct S_D_00058B80_arg0 {
    float f32[24]; // Covers offsets 0x0 to 0x23, based on the largest offset used in the draft.
};

// Struct for param_3 (arg2) - assuming it's a pointer to this struct
struct S_D_00058B80_arg2 {
    float f32[16]; // Covers offsets 0x0 to 0xF, based on the largest offset used in the draft.
};
