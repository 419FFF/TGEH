/* 36 functions from 0x00130F00 to 0x00131EB0, found by Ghidra. */
#include "common.h"

extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)
float func_00131210(volatile float param_1) {
    param_1 = (float)fabs((double)param_1);
    return param_1;
}
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
float _func_00131220(volatile float param_1)
{
  param_1 = (float)sqrt((double)param_1);
  return param_1;
}

extern double sin(double);
#pragma intrinsic(sin)
float func_00131230(float x) {
    return (float)sin((double)x);
}
extern "C" double __cdecl atan(double);
extern "C" double __cdecl acos(double);
float func_00131240(float a0) {
    float r = (float)acos(a0);
    return r;
}

extern double cos(double);
#pragma intrinsic(cos)
float func_00131250(float x) {
    return (float)cos((double)x);
}

float func_00131260(float a0) {
    float r = (float)acos(a0);
    return r;
}

#pragma intrinsic(sin)
#pragma intrinsic(cos)
extern void sincos(double, double *, double *);
void func_00131270(float x, float *s, float *c) {
    float a = (float)sin((double)x);
    *s = a;
    *c = (float)cos((double)x);
}

float func_00131290(float param_1, float param_2, float param_3) {
    if (param_1 < param_2) {
        return param_2;
    }
    if (param_1 < param_3) {
        return param_1;
    }
    return param_3;
}

float func_001312C0(float param_1, float param_2) {
    if (param_1 >= param_2) {
        return param_1;
    }
    return param_2;
}

float func_001312E0(float param_1, float param_2) {
    if (param_1 < param_2) {
        return param_1;
    }
    return param_2;
}

extern "C" double __cdecl tan(double);
#pragma intrinsic(tan)
float _func_00131300(float x) {
    return (float)tan((double)x);
}
void _func_00131310(void) {
    extern u16 D_00331B34;
    extern u16 D_00331B30;
    extern u16 D_00331B28;
    
    int val = *(int*)(D_00331B34 + D_00331B30 * 4);
    int other = *(int*)(D_00331B34 + D_00331B28 * 4);
    val += other;
    
    D_00331B30--;
    if (D_00331B30 > 9) {
        D_00331B30 = 10;
    }
    
    D_00331B28--;
    if (D_00331B28 > 9) {
        D_00331B28 = 10;
    }
}

int func_00131460(float x) {
 extern float D_001D27EC, D_001D27B8;
 unsigned int u = 0x9d - (((unsigned int)(x + D_001D27EC) >> 23) & 255);
 if (u > 31) u = 31;
 int v = (((unsigned int)(x + D_001D27EC) & 0x7fffff) + 0x800000) << 7;
 if (x + D_001D27EC < D_001D27B8) v = -v;
 return v >> u;
}

extern void _D_0014001C(float, float);
float func_001314B0(float a,float b) { extern float D_0014001C(float,float); return D_0014001C(a,b); }

void func_001314C0(void) { }

float func_00131550(float x) { return 0.0f; }

float func_00131760(void) { extern unsigned int func_00131310(void); extern float D_001D27B0; unsigned int u=func_00131310(); u=(u&0x7fffff)|0x3f800000; return *(float*)&u-D_001D27B0; }

void func_00131780(int arg0,char *arg1) { extern int func_00148220(int); extern int func_00116A90(int,int,int); extern int func_0011C3B0(int,int,int); extern char D_00331B64; int value=func_00148220(arg0); int obj=func_00116A90(0x90,1,1); char *dst=(char*)(obj+0xc); char *src=arg1; int off=(int)dst-(int)src; char c; do { c=*src; dst[off+(int)src]=c; src++; } while(c); *(int*)(obj+0x8c)=value; func_0011C3B0((int)&D_00331B64,obj,obj); }

void func_001317D0(char *name) { extern int *D_00331B64; extern int func_0011C3E0(int); extern int func_00148540(int); extern int func_00116FB0(int); int *node=D_00331B64; while(node){ volatile unsigned char *a=(unsigned char*)node+12; volatile unsigned char *b=(unsigned char*)name; while(*a==*b && *a){ if(a[1]!=b[1]) break; a+=2;b+=2; } if(*a==*b)break; node=(int*)*node; } if(node){int obj=(int)node;func_0011C3E0(obj);func_00148540(*(int*)(obj+140));func_00116FB0(obj);} }

int *_func_00131850(void *name){extern int *D_00331B64;extern int _func_0013F294(...),_func_001486F0(...);extern void _func_0011C3E0(int),_func_0011C3B0(...);int *node=D_00331B64;int result=0;while(node){char *s=(char*)node+0xc;char *end=s+1;while(*end)end++;int len=(int)end-(int)node-0xd;if(len>=0&&_func_0013F294(name,s,len)==0&&_func_001486F0(node[0x23],name)){_func_0011C3E0((int)node);_func_0011C3B0(&D_00331B64,node,node);result=(int)node;break;}node=(int*)*node;}return (int*)result;}

void _func_001318D0(unsigned int a,char*p){int func_0013B1E0(unsigned int);int func_0013E469(void*,int,int);extern int _D_001DED74;int x=func_0013B1E0(a);func_0013E469(p,(int)&_D_001DED74,x);while(*p){char c=*p;if(c=='\\')*p='/';else if(c>='A'&&c<='Z')*p=c+32;p++;}}

void func_00131990(char *param_1)
{
  int func_0013B1E0(...);
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)func_0013B1E0();
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return;
}

void _func_001319B0(char *out,unsigned int size){extern char *_func_0013B1E0(void);char *src=_func_0013B1E0();char *end=src;while(*end)end++;unsigned int n=(unsigned int)(end-src-1);if(size<=n){unsigned int i=0;while(i<size-1){out[i]=src[i];i++;}out[size-1]=0;return;}int off=(int)out-(int)src;do{char c=*src;*(char*)((int)src+off)=c;src++;}while(src[-1]);}

extern volatile int D_00331B70;
extern char *D_00331B74;
extern void _func_001318D0(unsigned int, char *);
extern int _func_00131850(char *);
extern void _func_00131920(unsigned int, char *);
extern "C" int __stdcall func_0010BF49(char *, int, int, int, int, int, int);
extern int _func_0010AA7B(void);
extern void _func_00137400(int);
extern "C" void __stdcall func_0010B7F8(int);
bool _func_00131A10(unsigned int a) {
    char buf[128];
    int h;
    int code;
    while (D_00331B70 != 0) {}
    _func_001318D0(a, buf);
    if (_func_00131850(buf) == 0) {
        _func_00131920(a, buf);
        D_00331B70 = 0;
        h = func_0010BF49(buf, 0, 0, 0, 3, 0x28000000, 0);
        while (h == -1) {
            code = _func_0010AA7B();
            if (code == 2 || code == 3) return false;
            D_00331B70 = 5;
            D_00331B74 = buf;
            _func_00137400(5);
            h = func_0010BF49(buf, 0, 0, 0, 3, 0x28000000, 0);
        }
        D_00331B70 = 0;
        D_00331B74 = 0;
        func_0010B7F8(h);
    }
    return true;
}

void *_func_00131B00(unsigned int a){void _func_001318D0(unsigned int,char*);int _func_00131850(char*);int _func_00148740(int,char*);void _func_00117100(void);void *_func_00116A90(int,int,int);void _func_00117130(void);char b[128];_func_001318D0(a,b);int x=_func_00131850(b);if(x==0)return 0;int y=_func_00148740(*(int*)(x+0x8c),b);if(y==0)return 0;_func_00117100();void*p=_func_00116A90(0x2c,1,1);*(int*)((char*)p+8)=y;*(char*)p=0;_func_00117130();return p;}

extern void _func_00117100(void);
extern void *_func_00116A90(int, int, int);
extern void _func_00117130(void);
extern char D_00010000;
void *_func_00131B80(unsigned int a) {
    char buf[128];
    int h;
    int code;
    char *p;
    _func_00131920(a, buf);
    D_00331B70 = 0;
    D_00331B74 = buf;
    h = func_0010BF49(buf, 0x80000000, 0, 0, 3, 0x28000000, 0);
    while (h == -1) {
        code = _func_0010AA7B();
        if (code == 2 || code == 3) return 0;
        D_00331B70 = 5;
        _func_00137400(5);
        h = func_0010BF49(buf, 0x80000000, 0, 0, 3, 0x28000000, 0);
    }
    D_00331B70 = 0;
    D_00331B74 = 0;
    _func_00117100();
    p = (char *)_func_00116A90(0x2c, 1, 1);
    *(int *)(p + 4) = h;
    *p = 0;
    *(int *)(p + 0x14) = 0;
    *(int *)(p + 0x18) = 0;
    *(int *)(p + 0x1c) = -1;
    *(int *)(p + 0x24) = -1;
    *(void **)(p + 0x28) = _func_00116A90((int)&D_00010000, 1, 1);
    _func_00117130();
    return p;
}

void _func_00131C80(unsigned int a){extern int _D_00331B70,_D_003291C8;void _func_00131920(unsigned int,char*);int __stdcall _func_0010BF49(int,int,int,int,int,int,int);void __stdcall _func_0010B7F8(int);void *_func_00131B80(unsigned int);void *_func_00131B00(unsigned int);volatile char b[128];if(_D_00331B70)return;if(_D_003291C8&2){_func_00131920(a,(char*)b);int x=_func_0010BF49((int)b,0,0,0,3,0x28000000,0);if(x!=-1){_func_0010B7F8(x);_func_00131B80(a);return;}}if(!_func_00131B00(a))_func_00131B80(a);}

void _func_00131D10(char*p){int func_00148B10(int);int func_00116FB0(void*);void __stdcall func_0010B7F8(int);if(*p==0){int x=*(int*)(p+8);if(x){func_00148B10(x);func_00116FB0(p);return;}x=*(int*)(p+4);if(x!=-1)func_0010B7F8(x);func_00116FB0(*(void**)(p+0x28));func_00116FB0(p);}}

