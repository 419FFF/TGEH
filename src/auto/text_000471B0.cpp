/* 13 functions from 0x000471B0 to 0x000480D3, found by Ghidra. */
#include "common.h"

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

