/* 6 functions from 0x00043710 to 0x00044350, found by Ghidra. */
#include "common.h"
struct V3 { int x, y, z; };
struct E43710 { int a, b, c; int d; short e; short f; int g; };
struct H43710 { int pad[3]; int count; E43710 *items; };

extern "C" void * __cdecl memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)
void func_00043710(int param_1)
{
  extern char D_002EEAA4, D_002EEAAC, D_002EEAA3, D_002EEAA2;
  extern H43710 *D_00307D08;
  extern int D_00313A88, D_00313B34, D_00313AD0, D_00313AF8, D_00307DF0;
  int func_000FA580(...);
  int func_00042590(...);
  char buf[0x204];
  E43710 *p;

  if (D_002EEAA4 == 0) {
    D_002EEAAC = func_000FA580() & 1;
    if (D_002EEAA3 != 0 || D_002EEAA2 != 0) {
      p = D_00307D08->items;
      memcpy(buf, p, D_00307D08->count * 24);
      if (D_002EEAA3 != 0) {
        p[D_00313A88].a = 0;
        D_00307D08->items[D_00313A88].e = 0;
        D_00307D08->items[D_00313A88].d = 0;
      }
      if (D_002EEAA2 != 0) {
        D_00307D08->items[D_00313B34].a = 0;
        D_00307D08->items[D_00313B34].e = 0;
        D_00307D08->items[D_00313B34].d = 0;
        D_00307D08->items[D_00313AD0].a = 0;
        D_00307D08->items[D_00313AD0].e = 0;
        D_00307D08->items[D_00313AD0].d = 0;
        D_00307D08->items[D_00313AF8].a = 0;
        D_00307D08->items[D_00313AF8].e = 0;
        D_00307D08->items[D_00313AF8].d = 0;
      }
    }
    D_00307DF0 = 0;
    func_00042590(param_1);
    if (D_002EEAA3 != 0 || D_002EEAA2 != 0)
      memcpy(D_00307D08->items, buf, D_00307D08->count * 24);
  }
}

void _func_000438D0(char *param)
{
    extern int _D_00307D10, _D_002EEAE0;
    extern char _D_002EEAE4[];
    extern int _func_00116A90(int, int, int);
    extern void _func_0004FA80(char*, void*);
    extern int _func_00048720(int, int, int, char*);
    extern void _func_001100A0(int, char**);
    extern void _func_00048820(int, void*);
    extern void _func_00012890(char*);
    char *obj = param;
    int *s;
    int i;
    int ptr;
    char none = -1;
    V3 *src, *dst;
    s = (int*)_func_00116A90(0x738, 1, 1);
    *(int**)(obj + 0x110) = s;
    for (i = 0; i < 0x1ce; i++) s[i] = 0;
    _func_0004FA80(obj, s + 1);
    ptr = *(int*)(obj + 0x134);
    s[0x1b] = _func_00048720(_D_00307D10, (int)(*(float*)(obj + 0x138) * 2 / *(float*)(ptr + 0x74)), ptr, obj);
    _func_001100A0(*(int*)(obj + 0x2c), &param);
    src = (V3*)(param + 0x30);
    dst = (V3*)(s + 0x4f);
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
    _func_00048820(*(int*)(s[0x1b] + 8), dst);
    s[0] = 0;
    *(char*)(s + 0x4c) = none;
    for (i = 0; i != *(int*)(*(int*)(s[0x1b] + 8) + 0xd4); i++) {
        if (obj == *(char**)(*(int*)(*(int*)(s[0x1b] + 8) + 0xd8) + i * 8))
            *(char*)(s + 0x4c) = (char)i;
    }
    *(char*)(s + 0x1cd) = none;
    s[0x1c5] = 0;
    s[0x1c4] = 0;
    *(float*)(s + 0x1c6) = *(float*)(s + 0x1c) + *(float*)(s + 0x1c);
    s[0x96] = 0;
    s[0x97] = 0;
    ((char**)_D_002EEAE4)[_D_002EEAE0] = obj;
    _D_002EEAE0++;
    _func_00012890(obj);
}

void _func_00043A00(int a,int b,int c)
{
 int _func_00047040(...);
 int x=*(int *)(a+0x110); int y=*(int *)(c+0x110);
 *(int *)(x+0x25c)=0; *(int *)(x+0x714)=0; *(int *)(x+0x710)=0;
 *(int *)(y+0x258)=0; _func_00047040(*(int *)(y+0x6c));
}

void _func_00043A40(int *out,float *scalar)
{
 int _func_0004FDE0(...); extern float D_001D27EC;
 int *edi=0,*esi=0; int p=* (int *)((char*)edi+0x258);
 if (!p) { int v[4]; _func_0004FDE0(v); esi[0]=v[0];esi[1]=v[1];esi[2]=v[2];*scalar=*(float*)((char*)edi+0x78); }
 else { int q=*(int*)((char*)p+0x110); esi[0]=*(int*)((char*)q+0x13c);esi[1]=*(int*)((char*)q+0x140);esi[2]=*(int*)((char*)q+0x144);*scalar=*(float*)((char*)edi+0x78)*D_001D27EC; }
}

