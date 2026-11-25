/* 13 functions from 0x000471B0 to 0x000480D3, found by Ghidra. */
#include "common.h"
struct PathTbl_000476A0 { int n; float (*pts)[4]; };
struct PathWalker_000476A0 { PathTbl_000476A0 *tbl; int sub[7]; float f20; int u24[11]; int idx; int cnt; int x58; float t; float rate; float out; };

unsigned char __cdecl _func_000471B0(int a, int *b, char c)
{
    int _func_00106410(...), _func_00045C20(...), _func_00106AC0(...);
    int xy[2], n, x,y;
    if (*(int *)(a+0x604) && c) {
        *(int *)(a+0xfc)=b[0];*(int *)(a+0x100)=b[1];*(int *)(a+0x104)=b[2];
        _func_00106410(*(int *)(a+8),b,a+0x108);_func_00045C20(a,0,0);
    }
    _func_00106AC0(a+4,b,xy);x=xy[0];y=xy[1];n=*(int *)(a+0xc)-1;
    if(x<0||x>n||y<0||y>n)return 0;
    return (unsigned char)((*(unsigned char *)(*(int *)(*(int *)(a+0x28)+4)+(x+*(int *)(a+0xc)*y)*4+2)&0x50)==0x50);
}

bool _func_00047260(int self, int world, int *pos, int out)
{
    extern void func_001100A0(int, int *);
    extern float func_0012E870(int *, int *);
    extern void func_0012E6D0(int, int *, int *);
    extern float func_0012EA60(int);
    int a[3];
    int b[3];
    float r;
    int mat;
    int i;

    a[0] = pos[0];
    a[2] = pos[2];
    a[1] = 0;
    r = *(float *)(self + 0xf4);
    if (r < *(float *)(self + 0xfc))
        r = *(float *)(self + 0xfc);
    i = 0;
    if (*(int *)(world + 0xd4) != 0) {
        do {
            int *ent = (int *)(*(int *)(world + 0xd8) + i * 8);
            int o = ent[0];
            if (o != 0 && (*(unsigned char *)(*(int *)(o + 0x2c) + 0x20) & 1) == 0 && o != self &&
                *(char *)(o + 0x15) != 0 && ent[1] != 0) {
                double d;
                double r2;
                func_001100A0(*(int *)(o + 0x2c), &mat);
                b[0] = *(int *)(mat + 0x30);
                b[1] = *(int *)(mat + 0x34);
                b[2] = *(int *)(mat + 0x38);
                b[1] = 0;
                d = func_0012E870(a, b);
                r2 = *(float *)(o + 0xf4);
                if (r2 < *(float *)(o + 0xfc))
                    r2 = *(float *)(o + 0xfc);
                if (d < (r2 + (double)r) * (r2 + (double)r)) {
                    func_0012E6D0(out, a, b);
                    func_0012EA60(out);
                    return true;
                }
            }
            i++;
        } while (i != *(int *)(world + 0xd4));
    }
    return false;
}

void __cdecl _func_000473B0(volatile float *p)
{
    extern volatile float _D_001D27B8, _D_001D2868;
    while (*p < _D_001D27B8) *p = *p + _D_001D2868;
    while (*p >= _D_001D2868) *p = *p - _D_001D2868;
}

void _func_00047420(int *dst, int *src, int *p)
{
    void func_00130DD0(...);
    void func_0012E6D0(...);
    void func_0012E5F0(...);
    int L[17];
    int *a = L, *t = L + 3, *u = L + 6, *w = L + 9, *q = L + 13;
    int i;
    int *d;
    a[0] = src[0]; a[1] = src[1]; a[2] = src[2];
    d = dst;
    for (i = 3; i != 0; i--) {
        func_00130DD0(t, d, a, src[3]);
        d[0] = t[0]; d[1] = t[1]; d[2] = t[2];
        d += 4;
    }
    if (p) {
        int *e;
        q[0] = p[0]; q[1] = p[1]; q[2] = p[2];
        e = dst + 12;
        func_0012E6D0(t, e, q);
        func_00130DD0(u, t, a, src[3]);
        w[3] = 0x3f800000;
        func_0012E5F0(w, u, q);
        e[0] = w[0]; e[1] = w[1]; e[2] = w[2]; e[3] = w[3];
    }
}

float __cdecl _func_00047510(float x, float y)
{
    float _func_00131550(...);
    void _func_0012EA60(...), _func_00130DD0(...);
    float _func_0012E8C0(...);
    extern float _D_001D2870, _D_001D3334;
    void _func_000473B0(float *);
    float angle=_func_00131550(-(x/y));
    float m[3]={x,0,y}, z[3]={0,0,1}, one[3]={0,1,0};
    _func_0012EA60(m);_func_00130DD0(z,one,m,angle);
    if(_func_0012E8C0(z,m)<_D_001D2870) angle+=_D_001D3334;
    _func_000473B0(&angle);return angle;
}

void __cdecl _func_000475E0(int a, int b, int c, int d, int *e)
{
    int _func_0012F120(...), _func_0012E6D0(...), _func_0012E5F0(...), _func_00047420(...), _func_0012EE00(...), _func_00130590(...);
    float _func_0012EA60(...);
    int aa[4],bb[4];
    _func_0012F120(a);_func_0012E6D0(a+0x30,c,b);_func_0012E5F0(aa,c,b);
    bb[0]=0;bb[1]=0x3f800000;bb[2]=0;bb[3]=d;
    _func_00047420(a,bb,aa);
    if(e){int *p=(int *)(a+0x10),*q=(int *)(a+0x20);
      p[0]=e[0];p[1]=e[1];p[2]=e[2];
      _func_0012EE00(a,e,q);_func_0012EA60(a);_func_0012EE00(q,a,p);_func_0012EA60(q);}
    _func_00130590(a);
}

bool func_00047840(int *param_1, int *param_2)
{
  int func_00058890(...);
  int func_00058B80(int *, float, int *);
  extern float D_001E461C, D_001D27B0;
  int *piVar3;
  int iVar2;
  float *f = (float *)param_1;
  int l[9];
  float fVar1;
  double d;

  if (param_1[0x17] == -0x40800000) {
    iVar2 = param_1[0x14];
    if (iVar2 == param_1[0x15] + 1) {
      param_1[0x14] = -1;
      return true;
    }
    piVar3 = (int *)*param_1;
    if (iVar2 == *piVar3) {
      param_1[0x14] = 0;
    }
    l[1] = param_2[0xe];
    l[0] = param_2[0xc];
    d = *(float *)(param_1[0x14] * 0x10 + piVar3[1]);
    *(float *)&l[2] = (float)d;
    l[5] = param_2[8];
    d = *(float *)(param_1[0x14] * 0x10 + 8 + piVar3[1]);
    *(float *)&l[3] = (float)d;
    l[6] = param_2[10];
    l[4] = param_1[0x16];
    func_00058890(param_1 + 1, l);
    param_1[0x17] = 0;
    param_1[0x14] = param_1[0x14] + 1;
  }
  fVar1 = (float)((double)f[0x18] / (double)f[8] * D_001E461C + (double)f[0x17]);
  f[0x17] = fVar1;
  func_00058B80(param_1 + 1, fVar1, l);
  param_2[8] = l[3];
  param_2[0xc] = l[5];
  param_2[0xe] = l[6];
  param_2[2] = l[1];
  param_2[10] = l[4];
  *param_2 = l[0];
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[1] = 0;
  param_2[9] = 0;
  d = f[0x17];
  if (!(d <= (double)D_001D27B0)) {
    param_1[0x17] = -0x40800000;
    return false;
  }
  return true;
}

float __cdecl _func_00047C90(int a, float f, int *out)
{
    int _func_00110060(...), _func_0012F7A0(...), _func_0012E6D0(...), _func_0012ED20(...);
    float _func_0012E940(...);
    extern int _D_00307DF8;
    extern float _D_001D27B0;
    int m1[16], m2[16], v[3];
    int p[4], q[4];
    float len;
    _func_00110060(*(int *)(a+0x2c), m1);
    _func_00110060(*(int *)(_D_00307DF8+0x2c), m2);
    p[0]=*(int *)(a+0xe8);p[1]=*(int *)(a+0xec);p[2]=*(int *)(a+0xf0);p[3]=0;
    q[0]=*(int *)(_D_00307DF8+0xe8);q[1]=*(int *)(_D_00307DF8+0xec);q[2]=*(int *)(_D_00307DF8+0xf0);q[3]=0;
    _func_0012F7A0(p, m1);
    _func_0012F7A0(q, m2);
    ((float *)q)[1] = ((float *)q)[1] - f;
    _func_0012E6D0(v, q, p);
    len = _func_0012E940(v);
    if (out) _func_0012ED20(out, v, _D_001D27B0 / len);
    return len;
}

void __cdecl _func_00047DA0(int v0,int v1,int v2,int v3,int *out,int d)
{
    float _func_0012E870(...);extern float _D_001D27B8;
    int *list=(int *)v3;*(int *)((char *)out+0x58)=v0;*(int *)out=v1;*(int *)((char *)out+0x5c)=0xbf800000;*(int *)((char *)out+0x60)=v2;*(int *)((char *)out+0x54)=v3;
    int n=*list,best=0;float min=3.402823466e+38f;
    if(!n){*(int *)((char *)out+0x50)=0;return;}
    for(int i=0;i<n;i++){float x=_func_0012E870(list[1]+i*16,d);if(x<min&&x!=_D_001D27B8){min=x;best=i;}}
    *(int *)((char *)out+0x50)=best;
}

void __cdecl _func_00047E40(float *src, float *dst, float limit)
{
    int _func_00131060(...), _func_00130DD0(...);extern float _D_001D27B8;
    float out[3], local[4];
    _func_00131060(dst,src,local);
    if(local[3] != _D_001D27B8) {
        if(local[3] <= _D_001D27B8) {
            if(local[3] < -limit) local[3]=-limit;
            else {dst[0]=src[0];dst[1]=src[1];dst[2]=src[2];return;}
        } else if(limit < local[3]) local[3]=limit;
        else {dst[0]=src[0];dst[1]=src[1];dst[2]=src[2];return;}
        _func_00130DD0(out,dst,src,local[3]);
        dst[0]=out[0];dst[1]=out[1];dst[2]=out[2];
    }
}

