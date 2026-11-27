/* 15 functions from 0x000CAA90 to 0x000CBA10, found by Ghidra. */
#include "common.h"

struct Mat64 { float f[16]; };
struct Vec3_CB540 { unsigned x, y, z; };
extern Mat64 D_0031AA80[];

void func_000CAA90(float *param_1)
{
 int func_00110300(...),func_00110060(...),func_0012F890(...);
 extern int D_00318D10,D_00313B60;
 extern float D_001D27B0,D_001DA9EC,D_001D2800,D_0031AA10,D_0031AA0C;
 float fVar1,fVar2,local_60,local_5c,local_58;
 char local_50[76];
 func_00110300(*(int *)(D_00318D10+0x2c),0x1da9f0,0x18);
 {
  int p=D_00313B60;
  func_00110060(p,local_50);
  fVar1=*(float *)(p+0xe4); fVar2=*(float *)(p+0xe8);
 }
 local_60=param_1[0]; local_5c=param_1[1]; local_58=param_1[2];
 func_0012F890(&local_60,local_50);
 D_0031AA10=(float)(((double)local_5c*((double)D_001D27B0/local_58)*fVar2)-D_001D27B0)*D_001DA9EC;
 D_0031AA0C=(float)((((double)D_001D27B0/local_58)*local_60*fVar1)+D_001D27B0)*D_001D2800;
}

void func_000CAB50(void)
{
 extern int D_0031A9D0,D_0031A9D8,D_0031A9C8,D_0031A9CC,D_0031A9F0,D_00318D10,D_0031A9EC;
 extern char D_001DA9F8;
 int func_00110300(...),func_00100400(...),func_001160E0(...),func_00116110(...),func_0011AF60(...);
 D_0031A9D0=0;
 D_0031A9D8=0;
 D_0031A9C8=0;
 D_0031A9CC=0;
 D_0031A9F0=func_00110300(*(int *)(D_00318D10+0x2c),&D_001DA9F8,0);
 D_0031A9EC=func_00100400(0,1,0);
 func_001160E0(D_0031A9EC,1,0,100,0x42700000);
 func_00116110(D_0031A9EC,1);
 func_0011AF60(D_0031A9F0,D_0031A9EC);
}

void func_000CABE0(void)
{
 extern float D_001D27F4,D_0031A9D8,D_001D27B8,D_001D27B0,D_001D27FC;
 extern int D_0031A9EC;
 int func_00116130(...);
 float value=D_001D27F4-D_0031A9D8;
 if(value>=D_001D27B8) value=D_001D27B8;
 else if(value<D_001D27B0) value=D_001D27B0;
 func_00116130(D_0031A9EC,value*D_001D27FC);
}

#pragma optimize("y", on)
unsigned int func_000CAD00(int param_1, int param_2, int param_3, int param_4, char param_5)
{
  extern char D_00317278;
  extern char D_001E4B50;
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *puVar6;
  int *puVar7;
  int local_4;

  param_3 = param_3 * 0xb;
  puVar6 = (int *)&D_00317278;
  for (iVar3 = 0xf2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_4 = 0;
  do {
    iVar4 = 0;
    iVar3 = local_4;
    do {
      uVar2 = 0;
      iVar5 = iVar3;
      do {
        iVar1 = *(int *)(&D_001E4B50 + iVar5);
        if (iVar1 != 0) {
          if (iVar1 == param_1 + 1) {
            if ((param_5 != '\0') &&
                ((((param_3 < 0 || (param_3 >= 0x16)) || (iVar4 + param_4 < 0)) ||
                  (((iVar4 + param_4 >= 11 || ((int)(uVar2 + param_2) < 0)) ||
                    (((int)(uVar2 + param_2) >= 11 ||
                      (*(int *)(&D_00317278 + ((param_3 + iVar4 + param_4) * 0xb + uVar2 + param_2) * 4) != 0)))))))) {
              return uVar2 & 0xffffff00;
            }
            *(int *)(&D_00317278 + ((param_3 + iVar4 + param_4) * 0xb + uVar2 + param_2) * 4) = param_1 + 1;
          } else {
            *(int *)(&D_00317278 + iVar5) = iVar1;
          }
        }
        uVar2 = uVar2 + 1;
        iVar5 = iVar5 + 4;
      } while ((int)uVar2 < 0xb);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar4 < 0xb);
    local_4 = local_4 + 0x1e4;
    param_3 = param_3 + 0xb;
    if (0x3c7 < local_4) {
      if (param_5 == '\0') {
        puVar6 = (int *)&D_00317278;
        puVar7 = (int *)&D_001E4B50;
        for (iVar3 = 0xf2; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      return (uVar2 & 0xffffff00) | 1;
    }
  } while (1);
}

unsigned char func_000CAE20(int p, char flag)
{
  extern int D_00317278[], D_001E4B50[];
  extern float D_001D2B64, D_001E4AC0[], D_001E4ADC[];
  int __ftol2(float);
  int i, j, k;
  for (i = 0; i < 242; i++) D_00317278[i] = 0;
  for (i = 0; i < 11; i++) {
    for (j = 0; j < 11; j++) {
      for (k = 0; k < 11; k++) {
        int v = D_001E4B50[i * 121 + j * 11 + k];
        if (v) {
          if (v == p + 1) {
            float a = D_001D2B64 - D_001E4AC0[p];
            float b = D_001E4ADC[p] + D_001D2B64;
            int r = __ftol2((float)j - b);
            int c;
            r = __ftol2(-((float)j - b) + a);
            c = __ftol2((float)k - a + b);
            if (flag && (c < 0 || c >= 11 || r < 0 || r >= 11 || D_00317278[(i * 11 + c) * 11 + r]))
              return 0;
            D_00317278[(i * 11 + c) * 11 + r] = p + 1;
          } else {
            D_00317278[i * 121 + j * 11 + k] = v;
          }
        }
      }
    }
  }
  if (!flag) for (i = 0; i < 242; i++) D_001E4B50[i] = D_00317278[i];
  return 1;
}

#pragma optimize("", on)
void func_000CB080(int a, int b, int c)
{
  char func_000CAD00(int, int, int, int, int);
  extern float D_001E4AC0[], D_001E4ADC[];
  if (!func_000CAD00(a, -b, 0, c, 1)) return;
  {
    Mat64 m = D_0031AA80[a];
    m.f[12] = m.f[12] - (float)(b * 6);
    m.f[13] = m.f[13] - (float)(c * 6);
    D_0031AA80[a] = m;
  }
  D_001E4AC0[a] = (float)b + D_001E4AC0[a];
  D_001E4ADC[a] = (float)c + D_001E4ADC[a];
  func_000CAD00(a, -b, 0, c, 0);
}

char func_000CB150(int a, int b)
{
  char func_000CAD00(int, int, int, int, int);
  extern int D_0031A9AC;
  __declspec(align(16)) Mat64 m;
  if (func_000CAD00(a, 0, b, 0, 1)) {
    m = D_0031AA80[a];
    m.f[12] = (float)((long double)m.f[12] - (long double)(float)(b * 3));
    D_0031AA80[a] = m;
    func_000CAD00(a, 0, b, 0, 0);
    if (b > 0) D_0031A9AC = 1;
    if (b < 0) D_0031A9AC = 0;
    return 1;
  }
  return 0;
}

#pragma optimize("y", on)
void func_000CB3E0(int a, int b)
{
    extern char D_00318E40[];
    extern char D_00318E4C[];
    int func_00110060(...);
    int func_0012F7A0(...);
    int func_0012E6D0(...);
    int func_0012E590(...);
    int func_0012E650(...);
    int func_001105E0(...);
    int func_00110000(...);
    int v1[4];
    int v2[4];
    int diff[4];
    __declspec(align(16)) char m1[64];
    __declspec(align(16)) char m2[64];
    int ia = a * 0xc0;
    int fa = *(int *)(D_00318E4C + ia);
    int *pa = *(int **)(D_00318E40 + ia);
    int ib = b * 0xc0;
    int fb = *(int *)(D_00318E4C + ib);
    int *pb = *(int **)(D_00318E40 + ib);
    *(int *)(D_00318E4C + ia) = fb;
    *(int *)(D_00318E4C + ib) = fa;
    func_00110060(pa, m1);
    func_00110060(pb, m2);
    v1[0] = pa[0];
    v1[1] = pa[1];
    v1[2] = pa[2];
    func_0012F7A0(v1, m1);
    v2[0] = pb[0];
    v2[1] = pb[1];
    v2[2] = pb[2];
    func_0012F7A0(v2, m2);
    func_0012E6D0(diff, v2, v1);
    func_0012E590(m2 + 0x30, diff);
    func_0012E650(m1 + 0x30, diff);
    func_001105E0(pa, m1, 0);
    func_001105E0(pb, m2, 0);
    func_00110000(pa);
    func_00110000(pb);
}
#pragma optimize("", on)

void func_000CB500(void)
{
 int func_0009A880(...), func_000CB3E0(...);
 unsigned int first, first_rem, second, second_rem, i=100;
 do {
  first=(unsigned int)func_0009A880();
  first_rem=first%36;
  do { second=(unsigned int)func_0009A880(); second_rem=second%36; }
  while(first_rem==second_rem);
  func_000CB3E0(first_rem,second_rem);
  --i;
 } while(i);
}

#pragma optimize("y", on)
void func_000CB540(void) {
 extern char D_00318E78,D_0031A978;extern unsigned D_001E4A30,D_001E4A34,D_001E4A38;extern int D_00318D10;
 void func_00110060(int,void *);void func_0012F5B0(void *,void *,void *);void func_0012F7A0(void *,void *);void func_0012E5F0(void *,void *,void *);void func_0012ECA0(void *,float);void func_00068DA0(void *,void *,void *);void func_001105E0(int,void *,int);
 __declspec(align(16)) unsigned tmp[16],axis[4],v1[4],v2[4],mid[4],mat[16];
 unsigned *p=(unsigned *)&D_00318E78;
 do {
 unsigned *a=p-2;func_00110060(p[-14],a);
 unsigned *b=p+14;func_00110060(p[-11],b);
 unsigned z=D_001E4A38,y=D_001E4A34,x=D_001E4A30;((volatile unsigned *)p)[30]=0x40490fdb;p[-9]=x;p[-8]=y;p[-7]=z;
 func_00110060(*(int *)(D_00318D10+0x2c),mat);func_0012F5B0(axis,p-9,mat);
 unsigned *s=(unsigned *)p[-14];v1[0]=s[0];v1[1]=s[1];v1[2]=s[2];
 s=(unsigned *)p[-11];v2[0]=s[0];v2[1]=s[1];v2[2]=s[2];
 func_0012F7A0(v1,a);func_0012F7A0(v2,b);func_0012E5F0(mid,v1,v2);func_0012ECA0(mid,0.5f);
 tmp[0]=a[0];tmp[1]=a[1];tmp[2]=a[2];tmp[3]=a[3];tmp[4]=a[4];tmp[5]=a[5];tmp[6]=a[6];tmp[7]=a[7];tmp[8]=a[8];tmp[9]=a[9];tmp[10]=a[10];tmp[11]=a[11];tmp[12]=a[12];tmp[13]=a[13];tmp[14]=a[14];tmp[15]=a[15];
 axis[3]=p[30];func_00068DA0(tmp,axis,mid);func_001105E0(p[-14],tmp,0);
 tmp[0]=b[0];tmp[1]=b[1];tmp[2]=b[2];tmp[3]=b[3];tmp[4]=b[4];tmp[5]=b[5];tmp[6]=b[6];tmp[7]=b[7];tmp[8]=b[8];tmp[9]=b[9];tmp[10]=b[10];tmp[11]=b[11];tmp[12]=b[12];tmp[13]=b[13];tmp[14]=b[14];tmp[15]=b[15];
 axis[3]=p[30];func_00068DA0(tmp,axis,mid);func_001105E0(p[-11],tmp,0);
 p+=48;
 }while((int)p<(int)&D_0031A978);
}
#pragma optimize("", on)

extern "C" void *memset(void *,int,unsigned int);
extern "C" char *strcpy(char *,const char *);
extern "C" char *strcat(char *,const char *);
#pragma optimize("y", on)
#pragma intrinsic(memset,strcpy,strcat)
void func_000CB7B0(void) {
 extern int D_001DAA30,D_001DAA34;extern short D_001DAA38;
 extern char D_00318E30,D_00318E40,D_00319500,D_0031A940;extern int D_00318D10,D_0031A944,D_0031A948,D_0031AC44;
 extern unsigned char D_00318D04,D_0031AC50,D_0031AC51,D_0031A954;extern float D_001D27EC;
 int func_0013E469(char *,const char *,...);int func_00110300(int,char *,int);void func_0012F120(void *);void func_001105E0(int,void *,int);void func_000CB500();
 char number[4];int i;char name[52];__declspec(align(16)) char mat[64];
 memset(&D_00318E30,0,0x1b20);i=1;
 char *p=&D_00318E40;
 do {
 *(int*)name=D_001DAA30;*(int*)(name+4)=D_001DAA34;*(short*)(name+8)=D_001DAA38;func_0013E469(number,"%d",i);
 if((int)p<(int)&D_00319500){strcat(name,"0");number[1]=0;}
 strcat(name,number);
 *(int *)p=func_00110300(*(int *)(D_00318D10+0x2c),name,0x18);
 func_0012F120(mat);func_001105E0(*(int *)p,mat,1);
 *(int *)(p+8)=(int)((double)(i-1)*D_001D27EC);
 strcat(name,"b");int b=func_00110300(*(int *)(D_00318D10+0x2c),name,0x18);*(int *)(p+0xc)=b;func_001105E0(b,mat,1);
 strcpy(name,"face5butt");func_0013E469(number,"%d",i);
 if((int)p<(int)&D_00319500){strcat(name,"0");number[1]=0;}
 strcat(name,number);strcat(name,"light");
 *(int *)(p+0x10)=func_00110300(*(int *)(D_00318D10+0x2c),name,0x18);
 ++i;p+=0xc0;
 }while(p!=&D_0031A940);
 D_0031A944=-1;D_0031A948=-1;D_0031AC44=0;D_00318D04=0;D_0031AC50=0;D_0031AC51=0;D_0031A954=1;func_000CB500();
}
#pragma optimize("", on)
