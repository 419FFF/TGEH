/* 27 functions from 0x00102870 to 0x001034C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct V3_00102870 { int x, y, z; };
struct F_00102A80 { unsigned short a:4, b:1, c:1; };

void _func_00102870(int p)
{
    int func_00110060(...); int func_001100A0(...); float func_0011F7C0(...); int func_0011F270(...); int func_0012F730(...);
    extern int D_00324BD4, D_00324D38, D_00308158;
    int loc[3];
    __declspec(align(16)) int b[15];
    int *v = b + 12;
    int *o = (int*)(*(int*)(p + 0x78));
    char t = *(char*)((char*)o + 0x32);
    t = t >> 3;
    if ((t & 1) != 0) {
        func_00110060(D_00324BD4, b);
        o = (int*)*(int*)(p + 0x78);
        o[7] = v[0]; o[8] = v[1]; o[9] = v[2];
        *(int*)(p + 0xe4) = v[0]; *(int*)(p + 0xe8) = v[1]; *(int*)(p + 0xec) = v[2];
        return;
    }
    if (*(int*)(p + 0x80)) {
        func_00110060(*(int*)(*(int*)(p + 0x80) + 0x2c), b);
    } else if (*(int*)(p + 0xf0)) {
        func_001100A0(*(int*)(D_00324D38 + 0x2c), loc);
        func_00110060(*(int*)(p + 0xb8), b);
        float f = func_0011F7C0(*(int*)(p + 0xf0) + 4, loc[0] + 0x30, 10);
        func_0011F270(*(int*)(p + 0xf0) + 4, *(int*)&f, b + 12, 0);
    } else if (*(int*)(p + 0x7c) == D_00308158) {
        *(int*)(p + 0xe4) = o[7]; *(int*)(p + 0xe8) = o[8]; *(int*)(p + 0xec) = o[9];
        return;
    } else {
        func_00110060(*(int*)(*(int*)(p + 0x7c) + 0x2c), b);
        func_0012F730(loc, *(int*)(p + 0x78) + 0x1c, b);
        v[0] = loc[0]; v[1] = loc[1]; v[2] = loc[2];
    }
    *(int*)(p + 0xe4) = v[0]; *(int*)(p + 0xe8) = v[1]; *(int*)(p + 0xec) = v[2];
}

void _func_00102A20(int p) { int func_00110060(...); int func_001105E0(...); __declspec(align(16)) unsigned char b[0x5c]; int obj=*(int*)(p+0xb8); if(obj){func_00110060(obj,b+0x10); *(int*)(b+0x48)=*(int*)(p+0xe4); *(int*)(b+0x50)=*(int*)(p+0xe8); *(int*)(b+0x5c)=*(int*)(p+0xec); func_001105E0(obj,b+0x1c,0);} }

void _func_00102A80(int p)
{
    extern float D_001D27B8; extern float D_001D290C;
    int func_0011BDD0(...); int func_001288B0(...);
    int i;
    unsigned char b = *(unsigned char *)(p + 0xb6);
    b >>= 5;
    if (b & 1) {
        int o = *(int *)(p + 0xb8);
        if (func_0011BDD0(*(int *)(o + 0xec), 0) == 0) return;
        (*(short *)(*(int *)(o + 0xec) + 0x2a))--;
        i = 0;
        if (*(unsigned char *)(*(int *)(p + 0x78) + 0x30) - 1 > 0) {
            int *q = (int *)(p + 0xbc);
            do {
                int c = *q;
                if (func_0011BDD0(*(int *)(c + 0xec), 0) == 0) return;
                (*(short *)(*(int *)(c + 0xec) + 0x2a))--;
                i++; q++;
            } while (i < *(unsigned char *)(*(int *)(p + 0x78) + 0x30) - 1);
        }
        *(unsigned char *)(p + 0xb6) &= 0xdf;
    }
    unsigned short fl = *(unsigned short *)(p + 0xb6);
    unsigned char c1 = fl;
    c1 >>= 5;
    if ((c1 & 1) == 0) {
        unsigned char c2 = fl;
        c2 >>= 4;
        if ((c2 & 1) == 0) {
        if (*(float *)(*(int *)(p + 0x78) + 0x2c) == D_001D27B8 && *(int *)(p + 0xb8) != 0) {
            int r = func_001288B0(*(int *)(p + 0xb8));
            float f = (float)r;
            if (r < 0) f += D_001D290C;
            *(float *)(*(int *)(p + 0x78) + 0x2c) = f;
        }
        i = 0;
        if (*(unsigned char *)(*(int *)(p + 0x78) + 0x30) - 1 > 0) {
            int off = 0x50;
            int *q = (int *)(p + 0xbc);
            do {
                if (*(float *)(off + *(int *)(p + 0x78)) == D_001D27B8 && *q != 0) {
                    int r = func_001288B0(*q);
                    float f = (float)r;
                    if (r < 0) f += D_001D290C;
                    *(float *)(off + *(int *)(p + 0x78)) = f;
                }
                i++; q++; off += 4;
            } while (i < *(unsigned char *)(*(int *)(p + 0x78) + 0x30) - 1);
        }
        }
    }
    if (*(float *)(p + 0xcc) == D_001D27B8) {
        int s = *(int *)(p + 0x78);
        if (*(float *)(s + 0x2c) != D_001D27B8) {
            *(int *)(p + 0xcc) = *(int *)(s + 0x2c);
            i = 0;
            if (*(unsigned char *)(s + 0x30) - 1 > 0) {
                int off = 0x50;
                int *q = (int *)(p + 0xd0);
                do {
                    *q = *(int *)(off + *(int *)(p + 0x78));
                    i++; off += 4; q++;
                } while (i < *(unsigned char *)(*(int *)(p + 0x78) + 0x30) - 1);
            }
        }
    }
}

void _func_00102C50(int p) { int func_00131230(...); extern int D_00324D2C; extern float D_001DE730,D_001D27B0; int edx=*(int*)(p+0xe0); int ecx=*(int*)(p+0x78); int delta=D_00324D2C-edx; float t=func_00131230((float)delta * *(float*)(ecx+0x7c) * D_001DE730); *(float*)(p+0x9c)=t**(float*)(ecx+0x80)+D_001D27B0; *(float*)(p+0xac)=t**(float*)(ecx+0x84)+D_001D27B0; }

void _func_00102DB0(int p,char flag) { extern char D_001E5EC9; int func_00128C50(...); int func_00128BE0(...); if(!D_001E5EC9)return; int obj=*(int*)(p+0xb8); if(!obj)return; unsigned short bits=*(unsigned short*)(p+0xb6); unsigned char a=(unsigned char)bits; unsigned char d=a; d>>=5; if(d&1)return; a>>=4; if(a&1)return; if(!*(unsigned char*)(p+0xb4))return; if(flag){if(func_00128C50(obj)==2)func_00128BE0(obj,1);}else if(func_00128C50(obj)==1)func_00128BE0(obj,0); }

void _func_00102E40(void *arg) {
extern void *_D_00324BCC; void _func_00102DB0(void*,void*);
void *it=_D_00324BCC;
while(it){void *obj=((void**)it)[1];void *v=*(void**)((char*)obj+0x78);if(!v || ((*(unsigned char*)((char*)v+0x32)>>5)&1)==0)_func_00102DB0(*(void**)((char*)it+4),arg);it=*(void**)it;}
}

void _func_00102E80(void *p) {
extern char _D_001E5EC9;void _func_0011C3E0(void*);void _func_00128C00(void*);
if(!_D_001E5EC9||!p)return;
int a=*(int*)((char*)p+0x88);int b=*(int*)((char*)p+0x8c);
if(a){*(int*)((char*)p+0x8c)=0;}else if(b){_func_0011C3E0((char*)p+0x88);*(int*)((char*)p+0x8c)=0;}
void*q=*(void**)((char*)p+0xb8);*(int*)((char*)p+0x88)=0;if(q)_func_00128C00(q);
}

void _func_00102EE0(void *p) {
char __cdecl _func_00102810(void*);
extern volatile float _D_001D2B60,_D_001D27B0,_D_001D27B8;
if(_func_00102810(p)){float f=*(float*)((char*)p+0xa0)+_D_001D2B60;*(float*)((char*)p+0xa0)=f;if(_D_001D27B0<=f)*(int*)((char*)p+0xa0)=0x3f800000;}
else{float f=*(float*)((char*)p+0xa0)-_D_001D2B60;*(float*)((char*)p+0xa0)=f;if(f<=_D_001D27B8)*(int*)((char*)p+0xa0)=0;}
}

char _func_00103130(int p) { extern char D_001E5EC9; int _func_00128C50(int); if (D_001E5EC9 == 0) { return 1; } else { int v=*(int*)(p+0xb8); if(v == 0) return 1; else return (_func_00128C50(v) == 0) ? 1 : 0; } }

void _func_00103160(int p,int value) { extern char D_001E5EC9; if(D_001E5EC9 && p) *(int*)(p+0x98)=value; }

void func_00103180(int param_1, undefined4 param_2)
{
  extern undefined D_001E5EC9;
  if (D_001E5EC9 != '\0') {
    *(undefined4 *)(param_1 + 0xf0) = param_2;
  }
  return;
}

void _func_001031A0(void *p,int value) { extern char _D_001E5EC9; if(_D_001E5EC9 && p) *(int*)((char*)p+0x94)=value; }

extern "C" unsigned char D_001E5EC9;
extern "C" int D_00324BCC;
extern "C" int D_00308158;
extern "C" int func_00128C50(int);
extern "C" int func_0013F2E9(int, int);
extern "C" int func_0009C590(const char *);
extern "C" int func_001031C0(int, int);
int func_001031C0(int key, int value)
{
    int node = D_00324BCC;
    while (node) {
        int item = *(int *)(node + 4);
        if (*(int *)(item + 0x7c) == key) {
            int sub = *(int *)(item + 0x78);
            if (sub && func_0013F2E9(*(int *)(sub + 0x14), value) == 0)
                return item;
        }
        node = *(int *)node;
    }
    return 0;
}

void func_00103210(char *path)
{
    char local[128];
    char *s = path;
    do {
        *(&local[0] + (s - path)) = *s;
    } while (*s++ != 0);
    s = path;
    while (*s++ != 0) {}
    int len = (int)(s - path) - 2;
    while (len > 0 && path[len] != '.') --len;
    if (len <= 0) {
        func_001031C0(D_00308158, (int)path);
        return;
    }
    local[len] = 0;
    int found = func_0009C590(local);
    if (found)
        func_001031C0(found, (int)(path + len + 1));
}

void _func_001032A0(void) { extern int D_00324EA8,D_00324EA0,D_00324E9C,D_00324E98,D_00324BEC,D_00324BCC,D_00324BF4,D_00324BDC; D_00324EA8=0; D_00324EA0=0; D_00324E9C=0; D_00324E98=0; D_00324BEC=0; D_00324BCC=0; D_00324BF4=0; D_00324BDC=0; }

void _func_001032D0(void) {
extern void *_D_00324BEC;extern int _D_00324E98,_D_00324EA0,_D_00324D34;void _func_00116FB0(void*);
void *node=_D_00324BEC;
if(node){do{void *next=*(void**)node;_func_00116FB0(*(void**)((char*)node+4));node=next;}while(node);}
_D_00324E98=0;_D_00324EA0=0;_D_00324D34=0;
}

extern int D_00308158;
extern unsigned char D_001E5EC9;
extern int D_00324BCC;
int _func_000F8F40(...);
int _func_00128C50(int);
int _func_0013F2E9(int, int);
int _func_0009C590(char *);
int _func_000F8F40(int);
int _func_00103320(int p) { int x=*(int*)((char*)p+0x7c); if(x==D_00308158)return *(int*)((char*)p+0x84); return _func_000F8F40(*(int*)(x+0x2c)); }

void _func_00103350(int p) {
    extern int _D_00308158;
    extern int _D_00324BD8;
    extern int _D_00324BC8;
    extern int _D_00324D34;
    int _func_000F8F40(int);
    int value = *(int *)(p + 0x7c);

    if (value == _D_00308158)
        return;
    if (value == _D_00324BD8 || value == _D_00324BC8) {
        *(int *)(p + 0x84) = _D_00324D34;
        return;
    }
    *(int *)(p + 0x84) = _func_000F8F40(*(int *)(value + 0x2c));
}

void func_001033A0(int a0) {
    extern int D_00324EA8;
    D_00324EA8 = a0;
}

undefined4 * func_001033B0(undefined4 param_1)
{
  int func_00116A90(...);
  int func_00131990(...);
  extern undefined4 D_001E46C0;
  int func_0011BF40(...);
  int func_0011BDD0(...);
  int func_0013A020(...);
  extern undefined D_001D29C7;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)func_00116A90(8,1,1);
  func_00131990(D_001E46C0);
  uVar2 = func_0011BF40(param_1,0);
  *puVar1 = uVar2;
  uVar2 = func_0011BDD0(uVar2,1);
  uVar2 = func_0013A020(uVar2,0x3f800000);
  puVar1[1] = uVar2;
  func_00131990(((undefined *)&D_001D29C7));
  return puVar1;
}

void func_00103400(int *param_1)
{
  int func_0013ADF0(...);
  int func_0011B990(...);
  int func_00116FB0(...);
  func_0013ADF0(param_1[1]);
  *(short *)(*param_1 + 0x2a) = *(short *)(*param_1 + 0x2a) + -1;
  func_0011B990(*param_1);
  func_00116FB0(param_1);
  return;
}

int _func_00103430(int *p) { int _func_0013AB30(...); return _func_0013AB30(p[1]); }

void func_00103440(int param_1, char param_2)
{
  int func_0013AC00(...);
  extern undefined4 D_00324D0C;
  int func_0013AA30(...);
  func_0013AC00(*(undefined4 *)(param_1 + 4),D_00324D0C);
  if (param_2 != '\0') {
    func_0013AA30(*(undefined4 *)(param_1 + 4),1);
    return;
  }
  func_0013AA30(*(undefined4 *)(param_1 + 4),0);
  return;
}

void func_00103480(int param_1, char param_2)
{
  if (param_1 != 0) {
    if (param_2 != '\0') {
      *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 8;
      return;
    }
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xf7;
  }
  return;
}

undefined4 func_001034A0(int param_1)
{
  extern undefined4 D_00324BD8;
  extern undefined4 D_00324BC8;
  if ((*(int *)(param_1 + 0x7c) != D_00324BD8) && (*(int *)(param_1 + 0x7c) != D_00324BC8)) {
    return 0;
  }
  return 1;
}

