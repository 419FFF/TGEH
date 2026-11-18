/* 32 functions from 0x0011A190 to 0x0011B077, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct FlagByteAt21 { unsigned char pad[0x21]; unsigned char low:6; unsigned char bit6:1; unsigned char high:1; };

void func_0011A190(int *p, unsigned int *v)
{
 int func_00117100(...); int func_00116A90(...); int func_00117130(...); float func_0013E9E0(...);
 int x; float a;
 if (p[0x2b]==0) { func_00117100(); x=func_00116A90(*(int *)(*p+0xc)<<3,1,1); *(int *)(*p+0x28)=x; func_00117130(); }
 a=func_0013E9E0(v[0]); *(float *)(*(int *)(*p+0x28)+p[0x2b]*8)=a;
 a=func_0013E9E0(v[1]); *(float *)(*(int *)(*p+0x28)+p[0x2b]*8+4)=a;
}

void func_0011A200(int *p, int *v) {
 int func_00117100(...); int func_00116A90(...); int func_00117130(...); float func_0013E9E0(...);
 int x; unsigned int i; float a; int *items=v;
 if (p[0x2b]==0) { func_00117100(); x=func_00116A90(*(int *)(*p+0x2c)* *(int *)(*p+0xc)*4,1,1); *(int *)(*p+0x30)=x; func_00117130(); }
 i=0;
 while(i<(unsigned int)*(int *)(*p+0x2c)) {
   int item=items[i];
   if (item==0) break;
   a=func_0013E9E0(item);
   *(float *)(*(int *)(*p+0x30)+(*(int *)(*p+0x2c)*p[0x2b]+i)*4)=a;
   i++;
 }
}

void func_0011A290(int *param_1)
{
  *(undefined4 *)(*param_1 + 0x34) = 0;
  return;
}

void func_0011A2A0(int *p, unsigned int *v) {
 int func_0013E9DB(...); int *p2=p; unsigned int *v2=v; int a,b,c; unsigned short x;
 a=*v2; x=(unsigned short)func_0013E9DB(a); b=*p2; *(unsigned short *)(*(int *)(b+0x38)+*(int *)(b+0x34)*2)=x;
 a=v2[1]; x=(unsigned short)func_0013E9DB(a); b=*p2; *(unsigned short *)(*(int *)(b+0x38)+*(int *)(b+0x34)*2+2)=x;
 a=v2[2]; x=(unsigned short)func_0013E9DB(a); b=*p2; *(unsigned short *)(*(int *)(b+0x38)+*(int *)(b+0x34)*2+4)=x;
 c=*p2; *(int *)(c+0x34)=*(int *)(c+0x34)+3;
}

void func_0011A300(undefined4 param_1, undefined4 *param_2)
{
  int func_00131A10(...);
  int func_00125E80(...);
  char cVar1;
  
  cVar1 = func_00131A10(*param_2);
  if (cVar1 != '\0') {
    func_00125E80(*param_2,param_1);
  }
  return;
}

void func_0011A330(int param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  int iVar1;
  
  iVar1 = func_0013E9DB(*param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
  }
  return;
}

int func_0013E9DB(int);
float func_0013E9E0(int);
int func_0010F750(int, int, int);
int func_0011B820(int);
int func_0011BF40(int, int);
extern int D_003268B0;
void func_0011A350(int a, int *b) { if (func_0013E9DB(*b)) *(unsigned int *)(a + 0x14) |= 4; }

void func_0011A450(int param_1)
{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

undefined4 func_0011A470(int param_1)
{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar1;
  return *(undefined4 *)
          (*(int *)(*(int *)(iVar1 * 0xb8 + -0xb8 + *(int *)(param_1 + 0x10)) + 0x48) + -4 +
          *(int *)(param_1 + 8) * 4);
}

void func_0011A4A0(int a, int *b) { int n=func_0013E9DB(*b); float *p=(float *)(a+n*12); p[0]=func_0013E9E0(b[1]); p[1]=func_0013E9E0(b[2]); p[2]=func_0013E9E0(b[3]); }

int func_0011A4F0(int a, int b, int c) { int p=func_0010F750(a,D_003268B0,0x140); switch(c) { case 3: *(int *)(p+0xe0)=func_0011B820(b); *(unsigned char *)(p+0x21)|=0x40; break; case 2: *(int *)(p+0xe0)=func_0011BF40(b,1); break; case 1: *(int *)(p+0xe0)=func_0011BF40(b,0); } return p; }

void _func_0011A570(int p) { int _func_0011BAE0(...); int _func_0011B990(...); if (*(unsigned char *)(p+0x21)&0x40) _func_0011BAE0(*(int *)(p+0xe0)); else _func_0011B990(*(int *)(p+0xe0)); }

void func_0011A5A0(int *p) { int func_0011BB00(...); func_0011BB00(*(int *)((char *)p+0xe0)); *(unsigned char *)((char *)p+0x21) = *(unsigned char *)((char *)p+0x21) | 0x40; }

void _func_0011A5C0(int p, unsigned int a) { int _func_0011BC10(...); _func_0011BC10(*(unsigned int *)(p+0xe0),a); *(volatile unsigned char*)(p+0x21) |= 0x40; }

void _func_0011A5E0(int p, unsigned int a) { int _func_0011BCA0(...); _func_0011BCA0(*(unsigned int *)(p+0xe0),a); ((FlagByteAt21*)p)->bit6 &= 0; }

#pragma optimize("y", off)
void _func_0011A600(undefined4 param_1)
{
  int _func_0012F120(...); int _func_0012F4F0(...); int _func_0012F2E0(...); int _func_0013BB50(...);
  extern undefined4 _D_003268BC;
  unsigned char local_90[8];
  undefined4 local_88, local_78, local_68, local_58;
  undefined4 local_50[5];
  undefined4 local_3c, local_20, local_1c;
  _func_0012F120(local_90);
  _func_0012F4F0(local_90,param_1);
  _func_0012F120(local_50);
  local_50[0]=0x3f000000; local_3c=0xbf000000;
  local_20=0x3f000000; local_1c=0x3f000000;
  _func_0012F2E0(local_90,local_50);
  local_88=0; local_78=0; local_68=0; local_58=0x3f800000;
  _func_0013BB50(_D_003268BC,local_90);
}
#pragma optimize("", on)

void func_0011A6A0(char on) { extern unsigned char D_003268C4; extern float D_0032923C; extern float D_003268CC; extern float D_003268C8; if(on) { if(D_003268C4==0) { D_003268CC=D_0032923C; D_003268C4=1; D_003268C8=0; return; } } else if(D_003268C4==1) { D_003268C8=D_0032923C-D_003268CC; D_003268C4=0; D_003268CC=0; } }

void _func_0011A700(float *p,int q){extern char D_003268C4;extern float D_003268CC,D_0032923C,D_003268C8;extern void _func_0012F120(void*);extern int _func_001313C0(float);extern void _func_0013BB50(...);long double f;float v[12],x,y;int a,b;if(D_003268C4)f=D_003268CC;else f=(long double)D_0032923C-D_003268C8;_func_0012F120(v);x=(float)(f*p[0]);y=(float)(f*p[1]);a=_func_001313C0(x);x-=(float)a;b=_func_001313C0(y);y-=(float)b;v[0]=x;v[1]=y;_func_0013BB50(q,v);}

void _func_0011A8B0(int a,int *p,int *q,int d){extern int _func_00136B70(...),_func_0012E650(...);extern float _func_0012E940(...);extern void _func_00133860(...);extern float D_001E7D20;extern float D_003268C0;int x[6];x[0]=p[12];x[1]=p[13];x[2]=p[14];int z=_func_00136B70(x);x[3]=*(int*)((char*)z+0x30);x[4]=*(int*)((char*)z+0x34);x[5]=*(int*)((char*)z+0x38);_func_0012E650(x,x+3);float y=_func_0012E940(x);D_003268C0=D_001E7D20*y;_func_00133860(*(int*)((char*)q+0x2c),d);D_003268C0=0;}

bool func_0011A930(char *obj, float *pos, unsigned int n, unsigned int *counts, float *pts)
{
    void func_001151F0(int, int, float *);
    void func_0012F730(float *, char *, float *);
    void func_0012F7A0(float *, float *);
    void func_0012F890(float *, int *);
    float func_0012E8E0(float *, float *);
    extern int D_003292F0;
    unsigned int i, j, k;
    float v[4];
    __declspec(align(16)) float m[16];

    if (*(int *)(obj + 0xe4) != 0) {
        func_001151F0(*(int *)(obj + 0xe4), 0, m);
        func_0012F730(v, obj, m);
        func_0012F7A0(v, pos);
    } else {
        func_0012F730(v, obj, pos);
    }
    func_0012F890(v, &D_003292F0);
    i = 0;
    k = 0;
    while (i < n) {
        for (j = 0; j < *counts; j++, k++) {
            if (func_0012E8E0(v, pts + k * 4) > *(float *)(obj + 0xd8))
                break;
        }
        if (j >= *counts)
            break;
        i++;
        counts++;
    }
    if (i >= n)
        return false;
    return true;
}

void func_0011AF30(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  return;
}

void func_0011AF40(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return;
}

void func_0011AF50(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xec) = param_2;
  return;
}

void func_0011AF60(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xf0) = param_2;
  return;
}

void func_0011AF70(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x124) = param_2;
  return;
}

unsigned char _func_0011AF80(int *p,int a,int b,int c){extern int _func_0011BDD0(...);extern int _func_00110920(...);unsigned char r=0;int x=_func_0011BDD0(*(int*)((char*)p+0xe0),0);if(x){int y=*(int*)((char*)x+0xc);if(y)r=_func_00110920(a,y,b,c);(*(unsigned short*)((char*)*(int*)((char*)p+0xe0)+0x2a))--;}return r;}

extern int _func_0011BDD0(void *, int);
extern unsigned char _func_00110930(unsigned int, unsigned int, void *, unsigned int);
unsigned char _func_0011AFD0(void *p, unsigned int a, unsigned int b, unsigned int c)
{
    unsigned char result = 0;
    void *state = (void *)_func_0011BDD0(*(void **)((char *)p + 0xe0), 0);
    if (state != 0) {
        void *data = *(void **)((char *)state + 0xc);
        if (data != 0)
            result = _func_00110930(a, b, data, c);
        --*(short *)((char *)*(void **)((char *)p + 0xe0) + 0x2a);
    }
    return result;
}

unsigned char _func_0011B020(int *p,int a,int b,int c,int d,int e){extern int _func_0011BDD0(...),_func_001108F0(...);unsigned char r=0;int x=_func_0011BDD0(*(int*)((char*)p+0xe0),0);if(x){int y=*(int*)((char*)x+0xc);if(y)r=_func_001108F0(a,b,y,c,d,e);(*(unsigned short*)((char*)*(int*)((char*)p+0xe0)+0x2a))--;}return r;}

