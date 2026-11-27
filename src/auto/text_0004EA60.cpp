/* 17 functions from 0x0004EA60 to 0x0004F9A9, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int _func_00045BC0(...);
int _func_00116A90(...);
int _func_0004FA80(...);
int __ftol2(...);
int _func_00048720(...);
int _func_00056D50(...);
int _func_000A2310(...);
int _func_000A23B0(...);
int _func_001100A0(...);
int _func_0012F7A0(...);
int _func_0012E6D0(...);
int _func_0012EA60(...);
int _func_00047510(...);
extern int _D_00307D10;
extern float _D_001D505C;
extern float _D_001D290C;
void func_0004EA60(void)
{
  extern int D_002EEB80;
  extern int *D_002EEB84;
  char __fastcall func_00089430(int);
  int func_001100A0(...);
  int func_0012F250(...);
  int func_0012F7A0(...);
  int func_001383B0(...);
  int func_00133F30(...);
  int func_00136AE0(...);
  __declspec(align(16)) int A[24];
  int B[50][48];
  int local_8;
  int local_c;
  int i;
  int iVar1;
  int *piVar2;
  int *obj;
  int *q;
  int *p;

  local_c = 0;
  if (D_002EEB80 != 0) {
    i = 0;
    q = &B[0][10];
    do {
      obj = (int *)D_002EEB84[i];
      if (obj != 0) {
        piVar2 = *(int **)((char *)obj + 0x110);
        if (*piVar2 == 2) {
          iVar1 = *(int *)((char *)obj + 0x2c);
          if (func_00089430(0) != 0 || (*(unsigned char *)(iVar1 + 0x124) & 1) == 0) {
            q[-2] = 0x3f000000;
            q[-1] = 0x3f000000;
            q[0] = 0x3f000000;
            q[1] = 0x3f000000;
            q[0x16] = 0x3f000000;
            q[0x17] = 0x3f000000;
            q[0x18] = 0x3f000000;
            q[0x19] = 0x3f000000;
            func_001100A0(*(int *)(D_002EEB84[i] + 0x2c), &local_8);
            func_0012F250(A, piVar2 + 0xac, local_8);
            q[-10] = A[12];
            q[-9] = A[13];
            q[-8] = A[14];
            p = (int *)(D_002EEB84[i] + 0xe8);
            q[0xe] = p[0];
            q[0xf] = p[1];
            q[0x10] = p[2];
            func_0012F7A0(&q[0xe], local_8);
            local_c = local_c + 1;
            q += 0x30;
          }
        }
      }
      i++;
    } while (i != D_002EEB80);
    if (local_c != 0) {
      func_001383B0();
      A[0] = 0;
      A[1] = 0;
      A[2] = 0;
      A[6] = 0;
      A[11] = 0;
      A[12] = 0;
      A[18] = 0;
      A[10] = 1;
      A[17] = 1;
      A[19] = 2;
      func_00133F30(A);
      func_00136AE0(1, local_c * 2, B);
    }
  }
}

void _func_0004EBF0(int p){ int *o=(int*)_func_00116A90(0x254,1,1); *(int**)(p+0x110)=o; o[0x18]=*(int*)(p+0x134); _func_0004FA80(p,o); int n=__ftol2((int)(*(float*)(p+0x138)/(*(float*)(*(int*)(p+0x130)+0x74))),p); o[0x1a]=_func_00048720(_D_00307D10,n*2); *o=5; _func_00056D50(p,o); *(int*)(p+0x17c)=0; *(int*)(p+0x180)=0x3f800000; *(int*)(p+0x184)=0;*(int*)(p+0x188)=0;*(int*)(p+0x18c)=0;*(int*)(p+0x190)=0;*(int*)(p+0x194)=0;*(int*)(p+0x198)=0;*(int*)(p+0x19c)=0x3f800000;*(int*)(p+0x1a0)=0;*(unsigned char*)(p+0x10)|=0x80;}

void _func_0004ECA0(int a,int b){_func_00045BC0(a,*(int*)(b+0x58)?1:0);}

void _func_0004ECC0(int a,int b){unsigned short id=*(unsigned short*)(**(int**)(*(int*)(a+0x84)+0x10)+0x18);_func_000A2310(a+0x64);int*v=*(int**)(b+0x48);float f=id==*(unsigned short*)v?*(float*)(v+8):*(float*)(*(int*)(b+0x50)+8);float s=*(float*)(*(int*)(b+0x68)+0x600);if(s<_D_001D505C)s=_D_001D505C;_func_000A23B0(a+0x64,s*f);}

#pragma optimize("p", off)
void func_0004ED30(int actor,int state,char active) {
 extern int D_00307DF8,D_00307D04;
 extern float D_001D286C,D_001D2868,D_001D27B8,D_001D2C00,D_001D4F28,D_001D4F24;
 void func_0012F120(void *);void func_001100A0(int,int *);void func_0012F7A0(float *,int);float func_0012EA60(float *);void func_0012F6D0(float *,int);float func_00047510(float,float);
 void func_001156D0(int);void func_00068DA0(void *,float *,int);void func_00116800(int);void func_001155F0(int,int,void *);void func_00116820();
 int h;float h2;float delta[3];__declspec(align(16)) float other[3];__declspec(align(16)) float vec[4];__declspec(align(16)) char mat[64];
 float angle;
 func_0012F120(mat);
 if(active){
 *(char *)(state+0x171)=0;
 ((int*)vec)[0]=*(int *)(actor+0xe8);((int*)vec)[1]=*(int *)(actor+0xec);((int*)vec)[2]=*(int *)(actor+0xf0);
 func_001100A0(*(int *)(actor+0x2c),&h);func_0012F7A0(vec,h);
 ((int*)other)[0]=*(int *)(D_00307DF8+0xe8);((int*)other)[1]=*(int *)(D_00307DF8+0xec);((int*)other)[2]=*(int *)(D_00307DF8+0xf0);
 func_001100A0(*(int *)(D_00307DF8+0x2c),(int*)&h2);func_0012F7A0(other,*(int*)&h2);
 delta[0]=other[0]-vec[0];delta[1]=0;delta[2]=other[2]-vec[2];func_0012EA60(delta);func_0012F6D0(delta,h);
 angle=func_00047510(delta[0],delta[2]);if(angle>D_001D286C)angle-=D_001D2868;
 }else if(!*(char *)(state+0x171)){
 if(D_001D27B8==(double)*(volatile float *)(state+0x160)){*(char *)(state+0x171)=1;func_001156D0(*(int *)(actor+0x98));}
 angle=D_001D27B8;
 }else angle=h2;
 if(!*(char *)(state+0x171)){
 if(angle-D_001D2C00>*(volatile float *)(state+0x160))angle=(double)*(volatile float *)(state+0x160)+D_001D2C00;
 else if(angle+D_001D2C00<*(volatile float *)(state+0x160))angle=*(volatile float *)(state+0x160)-D_001D2C00;
 *(volatile float *)(state+0x160)=(float)angle;
 if(*(volatile float *)(state+0x160)>D_001D4F28)*(volatile float *)(state+0x160)=0.785398185f;
 else if(*(volatile float *)(state+0x160)<D_001D4F24)*(volatile float *)(state+0x160)=-0.785398185f;
 vec[0]=0;vec[1]=1;vec[2]=0;((int*)vec)[3]=*(int *)(state+0x160);
 func_00068DA0(mat,vec,0);func_00116800(D_00307D04);func_001155F0(*(int *)(actor+0x98),*(int *)(state+0x16c),mat);func_00116820();
 }
}
#pragma optimize("", on)
void func_0004EF90(int param_1)
{
  int func_001100A0(...); extern int D_00307DF8; int func_0012F7A0(...); int func_0012E6D0(...);
  float func_0012EA60(...); int func_00047510(...);
  int v1[3], v2[4], r[4], s1, s2;
  func_001100A0(*(int*)(D_00307DF8 + 0x2c), &s1);
  func_001100A0(*(int*)(param_1 + 0x2c), &s2);
  v1[0] = *(int*)(D_00307DF8 + 0xe8);
  v1[1] = *(int*)(D_00307DF8 + 0xec);
  v1[2] = *(int*)(D_00307DF8 + 0xf0);
  v2[0] = *(int*)(param_1 + 0xe8);
  v2[1] = *(int*)(param_1 + 0xec);
  v2[2] = *(int*)(param_1 + 0xf0);
  func_0012F7A0(v1, s1);
  func_0012F7A0(v2, s2);
  func_0012E6D0(r, v1, v2);
  r[1] = 0;
  func_0012EA60(r);
  func_00047510(r[0], r[2]);
}

void _func_0004F060(int p,int q){int a[4],b[2],c[2];_func_001100A0(*(int*)(p+0x2c),a);a[0]=*(int*)(p+0xe8);a[1]=*(int*)(p+0xec);a[2]=*(int*)(p+0xf0);_func_0012F7A0(a,q);_func_0012E6D0(b,q,a);b[1]=0;(void)_func_0012EA60(b);_func_00047510(b[0],b[1]);(void)c;}

unsigned char func_0004F1D0(int p) { extern unsigned char D_00311512,D_002EEB9C,D_002EEB9D; extern int D_002EEB8C[3],D_002EEB98; int i; unsigned char k; if(D_00311512&8){*(char*)(p+0x174)=1;*(int*)(p+0x178)=1;*(int*)(p+0x168)=0x437f0000;return 0;} for(i=0;i<3;i++)if(D_002EEB8C[i]==p)return 1; k=*(unsigned char*)(p+0x15); if(k==0x3e&&D_002EEB9C)return 0; if(k==0x3d&&D_002EEB9D)return 0; if(D_002EEB98>=3)return 0; for(i=0;i<3;i++)if(!D_002EEB8C[i])break; if(i<3)D_002EEB8C[i]=p; D_002EEB98++; if(k==0x3e)D_002EEB9C=1; if(k==0x3d)D_002EEB9D=1; return 1; }

void func_0004F290(int p) {
 extern int D_002EEB8C[3],D_002EEB98; extern unsigned char D_002EEB9C,D_002EEB9D;
 int i; unsigned char c;
 for(i=0;i<3;i++)if(D_002EEB8C[i]==p) {
   int count=D_002EEB98;
   D_002EEB8C[i]=0;
   c=*(unsigned char *)(p+0x15);
   --count; D_002EEB98=count;
   if(c==0x3e){D_002EEB9C=0;return;}
   if(c==0x3d){D_002EEB9D=0;return;}
   return;
 }
}

void func_0004F2E0(void) {
    extern int D_002EEB8C;
    extern int D_002EEB90;
    extern int D_002EEB94;
    extern int D_002EEB98;
    extern char D_002EEB9C;
    extern char D_002EEB9D;
    D_002EEB8C = 0;
    D_002EEB90 = 0;
    D_002EEB94 = 0;
    D_002EEB98 = 0;
    D_002EEB9C = 0;
    D_002EEB9D = 0;
}

void func_0004F660(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00046C10(...);
  int func_00045F80(...);
  if ((*(int **)(param_2 + 0x5c) != (int *)0x0) && (**(int **)(param_2 + 0x5c) == 0x3f800000)) {
    func_00046C10(*(undefined4 *)(param_2 + 0x68),param_4,param_3);
    return;
  }
  func_00045F80(*(undefined4 *)(param_2 + 0x68),param_4);
  return;
}

void func_0004F6A0(int a,int b,int c) {
 int _func_000A2310(...),_func_00048430(...),_func_0012EA60(...),_func_00047510(...);
 extern float D_001D290C;
 int *r; longdouble x,y; int out[3];
 if(*(int *)(b+0x58)==0) goto work;
 x=(longdouble)_func_000A2310(a+100);
 r=*(int **)(b+0x58);
 y=(longdouble)r[0]; if(r[0]<0)y+=(longdouble)D_001D290C;
 if(x<y)return;
 y=(longdouble)r[1]; if(r[1]<0)y+=(longdouble)D_001D290C;
 if(y<x)return;
 work:
 _func_00048430(*(int *)(b+0x60),c,b+0x138,out,**(int **)(b+0x4c),3);
 out[1]=0;
 _func_0012EA60(out);
 out[2]=0;
 *(float *)(b+0x158)=(float)_func_00047510(out[0],out[2]);
}

unsigned char func_0004F750(int a,int b) {
 int _func_000A2310(...),_func_00048AE0(...);
 extern float D_001D290C;
 int *r; long double x,y; unsigned char z;
 if(*(int *)(b+0x58)!=0) {
  x=(long double)_func_000A2310(a+100); r=*(int **)(b+0x58);
  y=(long double)r[0]; if(r[0]<0)y+=(long double)D_001D290C;
  if(!(x>y))return 0;
  y=(long double)r[1]; if(r[1]<0)y+=(long double)D_001D290C;
  if(!(y>x))return 0;
 }
 z=_func_00048AE0(b+0x9c,b+0x138,b+0x158); return z?1:0;
}

#pragma optimize("s", on)
unsigned char func_0004F7D0(int a, int b, int *c) {
 int func_000476A0(...);
 float func_000A2310(...);
 extern float D_001D290C, D_001E461C, D_001D28E4;
 unsigned int *r; float x; unsigned char z; float t, d;
 z = (unsigned char)a;
 if (*(int *)(b+0x58) == 0) {
  z = func_000476A0(c, b+0x138, b+0x158);
 } else {
  x = func_000A2310(a+100);
  r = *(unsigned int **)(b+0x58);
  if ((double)r[0] < x && x < (double)r[1]) { z = func_000476A0(c, b+0x138, b+0x158); }
 }
 if (*(int *)(b+0x84) == -0x40800000) {
  int i = c[0x14];
  if (i == *(int *)c[0]) i = 0;
  t = *(float *)(*(int *)(c[0]+4) + 4 + i*0x10);
  d = D_001E461C * *(float *)(c+0x18) * D_001D28E4;
  if (*(float *)(b+0x13c) <= t) {
   d += *(float *)(b+0x13c);
   if (t <= d) *(float *)(b+0x13c) = t; else *(float *)(b+0x13c) = d;
  } else {
   d = *(float *)(b+0x13c) - d;
   if (d <= t) *(float *)(b+0x13c) = t; else *(float *)(b+0x13c) = d;
  }
 }
 return z;
}
#pragma optimize("", on)
int _func_000492F0(...);
int _func_0004F910(int a,int p,int c){int *r=*(int**)(p+0x58);if(r){longdouble x=(longdouble)_func_000A2310(a+100),y=(longdouble)r[0];if(r[0]<0)y+=(longdouble)_D_001D290C;if(x>y){y=(longdouble)r[1];if(r[1]<0)y+=(longdouble)_D_001D290C;if(x<y)return _func_000492F0(c,p+0x138,p+0x158);}return 0;}return _func_000492F0(c,p+0x138,p+0x158);}

