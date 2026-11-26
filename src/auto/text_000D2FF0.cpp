/* 13 functions from 0x000D2FF0 to 0x000D3A51, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
struct D3300Entry { int model; int object; char rest[0xcc]; char active; char padding[11]; char complete; char tail[0x2f]; };

void _func_000D2FF0(void)
{
    extern int D_0031B8F4[3], D_0031B8A0[3], D_0031AD40[3], D_0031AD90[3];
    extern int D_0031B900, D_0031B864, D_0031B914;
    extern char D_001DAC20, D_001DAC04, D_0031B860, D_001DABE8, D_0031B910, D_001DABCC, D_001D2968, D_001DABB4, D_0031B870, D_0031B920;
    extern int _func_000D2F90(int *);
    extern float _func_0012E780(void *, void *);
    extern char _func_000D4FB0(void *, void *, float, float, int, float);
    extern void _func_000D50D0(void *, void *, int);
    extern void _func_000D51E0(void *, int);
    int v[3];
    float f;
    float k;
    int d;
    char *pp;
    char c;
    _func_000D2F90(v);
    f = _func_0012E780(v, D_0031B8F4);
    switch (D_0031B900) {
    case 3:
        k = 5.0f;
        pp = &D_001DAC20;
        goto A;
    case 2:
        k = 8.0f;
        pp = &D_001DAC04;
    A:
        c = _func_000D4FB0(&D_0031B860, pp, f, k, 1, 0.2f);
        _func_000D4FB0(&D_0031B910, &D_001DABE8, f, 5.0f, 1, 0.2f);
    check:
        if (c) {
            D_0031B8F4[0] = v[0];
            D_0031B8F4[1] = v[1];
            D_0031B8F4[2] = v[2];
            D_0031AD90[0] = D_0031AD40[0];
            D_0031AD90[1] = D_0031AD40[1];
            D_0031AD90[2] = D_0031AD40[2];
        }
        break;
    case 4:
        f = _func_0012E780(D_0031AD40, D_0031AD90);
        d = -1;
        goto B;
    case 5:
        f = _func_0012E780(D_0031AD40, D_0031AD90);
        d = 1;
    B:
        c = _func_000D4FB0(&D_0031B860, &D_001DABCC, f, 10.0f, d, 0.2f);
        _func_000D4FB0(&D_0031B910, &D_001DABE8, f, 5.0f, 1, 0.2f);
        goto check;
    case 6:
        _func_000D50D0(&D_0031B860, &D_001D2968, 2);
        _func_000D50D0(&D_0031B910, &D_001D2968, 2);
        break;
    case 7:
        _func_000D50D0(&D_0031B860, &D_001DABB4, 1);
        break;
    }
    D_0031B8A0[0] = v[0];
    D_0031B8A0[1] = v[1];
    D_0031B8A0[2] = v[2];
    _func_000D51E0(&D_0031B870, D_0031B864);
    _func_000D51E0(&D_0031B920, D_0031B914);
}

void func_000D31E0(int a, float t) { extern int D_0031ADBC,D_0031B900,D_0031B9B0; extern float D_0031AD44,D_0031ADA0,D_0031ADA4,D_001D27B8; if(D_0031ADBC!=3){ if(D_0031AD44<t){D_0031B900=7;D_0031B9B0=10;return;} float x=(float)fabs(D_0031ADA0),y=(float)fabs(D_0031ADA4); float s=x+y; if(D_001D27B8==s){D_0031B900=6;return;} if(x>y){ if(D_0031ADA0<D_001D27B8){D_0031B900=3;return;} D_0031B900=2;return;} D_0031B900=4; if(!(D_0031ADA4>D_001D27B8))D_0031B900=5; } }

unsigned char func_000D32B0(void) { extern int D_0031B900,D_0031B864,D_0031B8F0; extern float D_001D290C; float func_000A2310(...); if(D_0031B900==7) { float result=func_000A2310(D_0031B864+100); int *p=(int *)(D_0031B8F0+4); float bound=(float)*p; if(*p<0)bound+=D_001D290C; if(result<bound)return 1; } return 0; }

#pragma optimize("l", off)
void func_000D3300(void) {
 extern int D_0031AD00,D_0031AD04;
 extern float D_001D3330,D_001D2E24,D_001D5420,D_001D35F8;
 extern char D_0031B094,D_0031AD9C; extern signed char D_0031ADB8;
 void func_00110060(int,void*); void func_0012F7A0(void*,void*);
 void func_000D5450(void*,void*); float func_00131210(float);
 unsigned char func_000D2D70(void*,int,int),func_000D2DF0(void*,void*);
 int func_0009A880();
 unsigned int offset; float a[4],b[4],screen[4],v[10]; float *c=screen,*d=screen+2;
 __declspec(align(16)) char m[64]; char *t=m+48;
 long double x=(long double)*(float*)(D_0031AD00+0x10)*D_001D3330;
 long double z=-*(float*)(D_0031AD00+0x18);
 v[0]=(float)x;v[2]=(float)z;
 unsigned char done=0;
 v[1]=0;v[3]=1;v[5]=(float)-x;v[6]=0;v[8]=1;v[7]=(float)z;
 func_00110060(D_0031AD04,m);
 b[3]=1;
 ((int*)b)[0]=*(int*)D_0031AD04;((int*)b)[1]=*(int*)(D_0031AD04+4);((int*)b)[2]=*(int*)(D_0031AD04+8);
 b[2]-=*(float*)(D_0031AD04+0x18);
 func_0012F7A0(b,m);func_000D5450(b,c);
 offset=0;
 do { D3300Entry *entry=(D3300Entry*)((int)&D_0031B094+offset*0x110-4);
 int *p=&entry->object;
 ((char*)p)[0xdc]=0;
 if(((char*)p)[0xd0] && D_0031AD9C && !done && D_0031ADB8<4){
 D3300Entry *obj=entry;
 func_00110060(obj->model,m);
 int e=*p;
 a[3]=1;
 ((int*)a)[0]=*(int*)(e+0x40);((int*)a)[1]=*(int*)(e+0x44);((int*)a)[2]=*(int*)(e+0x48);
 a[1]-=*(float*)(e+0x34);a[2]+=D_001D2E24;
 func_0012F7A0(a,m);func_000D5450(a,d);
 if(func_00131210(d[0]-c[0])<D_001D5420 && func_00131210(d[1]-c[1])<D_001D35F8){
 if(func_000D2D70(obj,0,1))done=func_000D2DF0(t,v+(func_0009A880()&1)*5);
 if(func_000D2D70(obj,2,3))done|=func_000D2DF0(t,v+(func_0009A880()&1)*5);
 }
 if(((char*)p)[0xdc]==1)return;
 }
 ++offset;
 }while(offset<3);
}
#pragma optimize("", on)
void func_000D3550(void) { extern char D_0031B130,D_0031AF24,D_0031B3C4,D_0031B460,D_0031B7C4; int func_0012E750(...); int *p=(int *)&D_0031B130; do { ((char *)p)[0x34]=0;*p=0;p[-4]=0;p+=0x44;}while((int)p<(int)&D_0031B460); char *b=&D_0031AF24,*a=&D_0031B3C4; do{func_0012E750(a+0x10);*a=0;*b=0;a+=0x40;b+=0x18;}while((int)a<(int)&D_0031B7C4); }

void func_000D36B0(void) { int func_0012F120(...),func_00110060(...),func_0012F7A0(...),func_00011E30(...),func_001105E0(...); extern int *D_0031ACB0; extern float D_001DAC48; extern int D_00313B60; unsigned char a[0x4c],b[0x30]; int x[3]; float t[3]; func_0012F120(a); func_00110060(D_0031ACB0,b); x[0]=D_0031ACB0[0];x[1]=0x43af0000;x[2]=D_0031ACB0[2];func_0012F7A0(x,b); ((int *)a)[0]=x[0];((int *)a)[1]=x[1];((int *)a)[2]=x[2];t[0]=*(float *)((char *)D_0031ACB0+0x18)+D_001DAC48;t[1]=1.3089969f;t[2]=1.5707964f;func_00011E30(b,a,t);func_001105E0(D_00313B60,a,1); }

void func_000D3780(undefined4 p){int func_00110060(...);int func_001105E0(...);int func_00110000(...);extern int D_0031ACB0;extern float D_001D3418;char x[48],y[48];func_00110060(D_0031ACB0,x);func_00110060(p,y);*(float*)(x+4)=*(float*)(y+4)-D_001D3418;*(int*)x=*(int*)y;*(int*)(x+8)=*(int*)(y+8);func_001105E0(p,y,0);func_00110000(p);}

int func_000D37F0(void){int func_00110330(...);int func_0012FE20(...);int func_000D5170(...);extern int D_0031AE80,D_0031AD9C,D_0031AD10,D_0031AD00;extern float D_0031ADDC,D_001D2BB4,D_0031ADD8,D_001D342C,D_001D286C;int result=0;D_0031AD9C=0;func_00110330(D_0031AE80,0);D_0031ADDC+=D_001D2BB4;D_0031ADD8+=D_0031ADDC;if(D_0031ADD8>D_001D342C){D_0031ADD8=1.5707964f;result=1;}func_0012FE20(&D_0031AD10,D_0031ADD8+D_001D286C,0x40490fdb,0);func_000D5170(&D_0031AD10,D_0031AD00);return result;}

int func_000D3960(void){extern float D_00307DB4,D_0031ACA8,D_0031ACA4,D_001D27FC;int func_000B6C80(...);int func_000A27E0(...);int func_000B55C0(...);float delta=D_00307DB4-D_0031ACA8;float x=(delta/D_0031ACA4)*D_001D27FC;unsigned char b=0;if(D_001D27FC<x){func_000B6C80();x=100.0f;b=1;}else{func_000B55C0(D_0031ACA4-delta);}func_000A27E0(x);return b;}

void func_000D39E0(int a,int b,int c,int *out) { extern int D_0031ACB0; extern unsigned char D_003268B0; int *p=*(int **)(D_0031ACB0+0x28); unsigned n=0; while(p){ if((*(unsigned char *)((char *)p+6)&0x18)==0){int *obj=(int *)*p; if(*(unsigned char *)((char *)obj+0x22)==D_003268B0){out[n]=*p;++n;}} p=(int *)p[3];} }

void func_000D3A20(void)
{
  int func_001031C0(...);
  extern undefined4 D_0031ACB4;
  extern undefined D_001DAC4C;
  int func_00102E80(...);
  extern undefined D_001DAC3C;
  undefined4 uVar1;
  
  uVar1 = func_001031C0(D_0031ACB4,((undefined *)&D_001DAC4C));
  func_00102E80(uVar1);
  uVar1 = func_001031C0(D_0031ACB4,((undefined *)&D_001DAC3C));
  func_00102E80(uVar1);
  return;
}
extern void __cdecl _func_00110060(void* arg1, undefined* arg2);
extern void __cdecl _func_001105E0(void* arg1, undefined* arg2, int arg3);

// Global float values used in calculations (assuming they are floats based on fld/fsub/fmul)
extern float D_0031ACB0; // Assuming this is the actual symbol name for the address _D_0031ACB0
extern float D_001D3418; 
extern float D_0031B7E8; 
extern float D_0031B830;
extern float D_001D37D0;
extern float D_0031B834;
extern float D_001D2808;
extern float D_0031B838;
// Structs
struct S_D_000D35B0_arg0 { float f32; };
struct S_D_000D35B0_arg1 { float f32; };
struct S_D_000D35B0_arg2 { float f32; };

// Extern Globals/Constants (assuming undefined4 for addresses)
extern undefined4 _D_0031ACB4;
extern undefined4 _D_001DAC3C;
extern undefined4 _D_0031ACAC;
extern undefined4 _D_001D27B8;
extern undefined4 _D_001E461C;
extern undefined4 _D_0031AD9C; // Used as a byte comparison, maybe char or u8? Let's stick to undefined4 for now.
extern undefined4 _D_0031ADC8;
extern undefined4 _D_0031ADC4;
extern undefined4 _D_0031ADC0;
extern undefined4 _D_0031B7D8;

// Function prototypes (placeholders for now)
void func_0009C6A0(undefined4 a, undefined4 b);
int func_000ECB20(undefined4 a, undefined4 b, undefined4 c);
void func_001031A0(int a, int b);
void func_000ECB60();
