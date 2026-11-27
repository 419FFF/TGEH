/* 19 functions from 0x00068AC0 to 0x00069AB4, found by Ghidra. */
#include "common.h"

struct Ent_000693E0 { int *o; float r2; float p[3]; int pad; };

void func_00068AC0(int p,float t,int *out,int *out2){ extern float D_001D27B8; int func_000688E0(int); void func_0011F270(); unsigned type=*(unsigned*)(p+4); if(type==0){if(out){out[0]=0;out[1]=0;out[2]=0;}if(out2){out2[0]=0;out2[1]=0x3f800000;out2[2]=0;}return;} if(type==1){if(out){int*q=*(int**)(p+8);out[0]=q[0];out[1]=q[1];out[2]=q[2];}if(out2){out2[0]=0;out2[1]=0x3f800000;out2[2]=0;}return;} int x=func_000688E0(p); if(t<D_001D27B8)t=0; if((float)*(int*)(x+0xc)<t)func_0011F270();else func_0011F270(); }

float func_00068B80(int p) { extern float D_001D27B8; int func_000688E0(int); if ((unsigned)*(int*)(p+4)<2) return D_001D27B8; int x=func_000688E0(p); return *(float*)(x+8); }

long double func_00068BA0(int p,float t){extern float D_001D27B8; int func_000688E0(int); int func_0013E3F4(); if((unsigned)*(int*)(p+4)<2)return D_001D27B8; int x=func_000688E0(p); if((double)t<(double)D_001D27B8)t=0; int n=func_0013E3F4(); long double s=D_001D27B8; int i=0; float *v=*(float**)(x+4); for(;i<n;i++)s+=v[i]; if(t<(float)*(int*)(x+12))s+=(t-n)*v[n]; return s;}

long double func_00068C50(int p,float t){extern float D_001D27B8; int func_000688E0(int); if((unsigned)*(int*)(p+4)<2)return D_001D27B8; int x=func_000688E0(p); int n=*(int*)(x+12); float *a=*(float**)(x+4); long double sum=D_001D27B8; int i=0; if(t>D_001D27B8){while(i<n){if(!(sum<t))break;sum+=a[i];++i;}} --i; long double v=((long double)t-(sum-a[i]))/a[i]+i; if(v<D_001D27B8)v=D_001D27B8; if((long double)n<v)v=n; return v;}

extern float D_001D27B8;
extern float func_0011F7C0(void *);
float func_00068CF0(int *p) { if ((unsigned)p[1] < 2) return D_001D27B8; return func_0011F7C0(p+1); }

void __fastcall func_00068D10(float *src,int unused,float *dst) { float x=src[0],y=src[1],z=src[2]; dst[0]=-x;dst[1]=-y;dst[2]=-z;dst[3]=x;dst[4]=-y;dst[5]=-z;dst[6]=x;dst[7]=y;dst[8]=-z;dst[9]=-x;dst[10]=y;dst[11]=-z;dst[12]=-x;dst[13]=-y;dst[14]=z;dst[15]=x;dst[16]=-y;dst[17]=z;dst[18]=x;dst[19]=y;dst[20]=z;dst[21]=-x;dst[22]=y;dst[23]=z; }

void func_00068D90(int a0) {
    extern int D_002F82F8;
    D_002F82F8 = a0;
}

float func_00068EA0(float a, float b, int p)
{
  extern float D_001D27B0, D_001D2D4C, D_001D27B8;
  void func_0012E6D0(float *, int, int);
  void func_0012EE00(float *, float *, float *);
  float func_0012EA60(float *);
  float func_00131260(float);
  float v[3], u[3], w[3];
  float s, f;
  func_0012E6D0(v, p + 0x10, p);
  func_0012E6D0(u, p + 0x20, p);
  func_0012EE00(w, v, u);
  func_0012EA60(w);
  s = w[2];
  if (s > D_001D27B0) s = 1.0f;
  else if (s < D_001D2D4C) s = -1.0f;
  f = func_00131260(s);
  if (s >= D_001D27B8 && (f < a || (f >= a && f <= b && f != b)))
    return D_001D27B0;
  return D_001D27B8;
}

struct V3_00068F90 { float x, y, z; };
void func_00068F90(float *p, float *v, char *hit)
{
  extern float D_001D27B8;
  void func_0012E6D0(float *, float *, float *);
  void func_0012EE00(float *, float *, float *);
  double func_0012EA60(float *);
  void func_0012ECA0(float *, float);
  double func_00068EA0(float, float, float *);
  double func_0012EB70(float *, float *);
  double func_0012E8C0(float *, float *);
  void func_0012ED20(float *, float *, float);
  void func_0012E650(float *, float *);
  float dir[3], tmp[3], up[3], b[3], c[3], t[3], a[3], m[9];
  float r;
  int outside;
  float *r1, *r2;

  up[0] = 0.0f; up[1] = -1.0f; up[2] = 0.0f;
  dir[0] = 0.0f; dir[1] = 0.0f; dir[2] = 0.0f;
  if (!(*(int *)(p + 0xf) & 0x100)) {
  r1 = p + 4; r2 = p + 8;
  func_0012E6D0(a, r1, p);
  func_0012E6D0(b, r2, p);
  func_0012EE00(c, a, b);
  func_0012EA60(c);
  func_0012EE00(t, up, c);
  func_0012EE00(dir, t, c);
  func_0012EA60(dir);
  if (dir[1] > D_001D27B8) func_0012ECA0(dir, -1.0f);
  m[0] = p[0]; m[1] = p[1]; m[2] = p[2];
  m[3] = r1[0]; m[4] = r1[1]; m[5] = r1[2];
  m[6] = r2[0]; m[7] = r2[1]; m[8] = r2[2];
  r = func_00068EA0(0.52359885f, 0.78539824f, m);
  *hit = 0;
  if ((double)D_001D27B8 == (double)r) *hit = 1;
  outside = 0;
  if ((double)D_001D27B8 != (double)v[0] || (double)D_001D27B8 != (double)v[2]) {
    func_0012EB70(tmp, v);
    tmp[1] = 0.0f;
    if (func_0012E8C0(tmp, dir) < D_001D27B8) goto skip;
  }
  outside = 1;
skip:
  if (!*hit) {
    tmp[0] = v[0]; tmp[2] = v[2]; tmp[1] = 0.0f;
    func_0012ECA0(tmp, r);
    v[0] = tmp[0]; v[2] = tmp[2];
  } else if (!outside) {
    r = func_0012E8C0(v, dir);
    func_0012ED20(a, dir, r);
    func_0012E650(v, a);
  }
  }
}

int _func_000692C0(int a,int b,int *out,int max,int *data,unsigned int count)
{
 int _func_00068D10(...); char _func_001118C0(...);
 char buffer[96]; int result=0; int i=0;
 _func_00068D10();
 if(count!=0) {
  data+=4;
  do {
   if(_func_001118C0(a,b,buffer,data-4,data,data+4)) {
    out[result]=i;
    if(++result==max) return result;
   }
   ++i; data+=16;
  } while((unsigned)i!=count);
 }
 return result;
}

void _func_00069340(int p1,int p2,int *obj,int *param4,int *param5)
{
 int _func_00110060(...); int _func_0011AFD0(...); extern int _D_0032F714;
 int index=0; __declspec(align(16)) char buffer[64];
 int base=(int)param4, second=(int)param5;
 if(*(int *)((char *)obj+0x96c)!=0) {
  int *item=(int *)((char *)obj+4);
  do {
   if(*item) {
    _func_00110060(*item,buffer);
    int old=_D_0032F714;
    _func_0011AFD0(*item,p1,p2,buffer);
    if(old!=_D_0032F714) {
     int *pi=(int *)(second+old*4);
     int delta=base-second;
     int left=_D_0032F714-old;
     do {
      *(int *)(delta+(int)pi)=*item;
      *pi=item[1]; ++pi; --left;
     } while(left);
    }
   }
   index++; item+=3;
  } while(index!=*(int *)((char *)obj+0x96c));
 }
}

void func_000693E0(int self, float *pos, float r, int out, int *cnt)
{
  float func_00131210(float);
  float func_0012E870(float *, float *);
  unsigned int i;
  int off = 0;
  for (i = 0; i < *(unsigned int *)(self + 0x27c); i++, off += 0x18) {
    int *e;
    int obj;
    unsigned char fl;
    if (*cnt == 200) return;
    e = *(int **)(self + 0x280);
    obj = *(int *)((char *)e + off);
    fl = *(unsigned char *)(obj + 0x20);
    e = (int *)((char *)e + off);
    if (!(fl & 1)) {
      if (*(unsigned char *)(obj + 0xd0) & 4) {
        float t = r * r + ((float *)e)[1];
        if (!(func_0012E870(pos, (float *)(e + 2)) > t)) goto add;
      } else {
        if (!(func_00131210(pos[0] - ((float *)e)[2]) > r + *(float *)(*e + 0x10)) &&
            !(func_00131210(pos[1] - ((float *)e)[3]) > r + *(float *)(*e + 0x14)) &&
            !(func_00131210(pos[2] - ((float *)e)[4]) > r + *(float *)(*e + 0x18)))
        {
        add:
          *(int *)(out + 4 + *cnt * 12) = *e;
          *(int *)(out + 8 + *cnt * 12) = 0;
          *(int *)(out + *cnt * 12) = 10;
          (*cnt)++;
        }
      }
    }
  }
}

#pragma optimize("", on)
int _func_00069540(int a, int b, int c, int ctx)
{
 int _func_000693E0(...);
 int count=*(int *)(ctx+0xe4);
 int result=0;
 int *entry=(int *)(ctx+0xe8);
 int i=0;
 if(count) {
  do {
   if(entry[1]>1) return result;
   _func_000693E0(entry[0],a,b,c,&result);
   ++i; entry+=2;
  } while(i!=*(int *)(ctx+0xe4));
 }
 return result;
}

void func_000695A0(float *pos, float radius, int *obj, int a4, int a5, int *out, int *count)
{
    extern unsigned int D_003268B0;
    void func_001100A0(int *, int *);
    void func_0012F7A0(int *, int);
    float func_0012E870(float *, int *);
    int *child;
    int mat;
    float r2;
    int v[4];

    for (child = (int *)obj[10]; child != 0; child = (int *)child[3]) {
        if ((*((unsigned char *)child + 6) & 0x18) == 0)
            func_000695A0(pos, radius, (int *)child[0], a4, a5, out, count);
    }
    if (*((unsigned char *)obj + 0x22) == D_003268B0 && *count != 200) {
        r2 = radius * radius + *(float *)&obj[0x36] * *(float *)&obj[0x36];
        func_001100A0(obj, &mat);
        v[0] = obj[0];
        v[1] = obj[1];
        v[2] = obj[2];
        func_0012F7A0(v, mat);
        if (func_0012E870(pos, v) < r2) {
            out[*count * 3] = a5;
            out[*count * 3 + 2] = a4;
            out[*count * 3 + 1] = (int)obj;
            (*count)++;
        }
    }
}

int func_00069990(int *a, int *b, int c, float *out)
{
  int func_00110060(...), func_0012F810(...), func_0011B020(...), func_0012F7A0(...);
  extern int D_00307D60;
  __declspec(align(16)) float v[4];
  float t[4];
  float m1[4], m2[4], m3[16];
  int *p;
  int found = 0, i = 0;
  v[0] = ((float *)b)[0]; v[1] = ((float *)b)[1]; v[2] = ((float *)b)[2]; v[3] = ((float *)b)[3];
  if (*(int *)(c + 0x96c) != 0) {
    p = (int *)(c + 8);
    do {
      if (p[0] && p[-1] && *(char *)(p[0] + 0x13) == 12) {
        func_00110060(p[-1], m3);
        func_0012F810(m1, a, m3);
        func_0012F810(m2, v, m3);
        if ((char)func_0011B020(p[-1], m1, m2, t, 0, 0)) {
          func_0012F7A0(t, m3);
          v[0] = t[0]; v[1] = t[1]; v[2] = t[2];
          found = p[0];
          D_00307D60 = found;
        }
      }
      i++;
      p += 3;
    } while (i != *(int *)(c + 0x96c));
    if (found) { out[0] = v[0]; out[1] = v[1]; out[2] = v[2]; }
  }
  return found;
}

