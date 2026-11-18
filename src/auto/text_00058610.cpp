/* 9 functions from 0x00058610 to 0x00059610, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

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
extern float D_001D27B0;

// Struct for param_1 (arg0)
struct S_D_00058B80_arg0 {
    float f32[24]; // Covers offsets 0x0 to 0x23, based on the largest offset used in the draft.
};

// Struct for param_3 (arg2) - assuming it's a pointer to this struct
struct S_D_00058B80_arg2 {
    float f32[16]; // Covers offsets 0x0 to 0xF, based on the largest offset used in the draft.
};
