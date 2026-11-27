/* 16 functions from 0x00056D50 to 0x0005775B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "string.h"

void _func_00056D50(int self, int *msg)
{
    int _func_00110060(...), _func_0012F7A0(...);
    float _func_00047510(int, int);
    void _func_000500D0(...), _func_00051170(...), _func_00051C80(...), _func_00052C10(...), _func_00053350(...), _func_00054550(...), _func_00054620(...), _func_00054CE0(...), _func_00055E30(...);
    __declspec(align(16)) struct { int v[4]; int m[12]; int pad[4]; } L;

    _func_00110060(*(int *)(self + 0x2c), L.m);
    msg[0x51] = 0;
    msg[0x52] = 0x3f800000;
    msg[0x53] = 0;
    *(float *)&msg[0x56] = _func_00047510(L.m[8], L.m[10]);
    L.v[0] = *(int *)(self + 0xe8);
    L.v[2] = *(int *)(self + 0xf0);
    L.v[1] = 0;
    _func_0012F7A0(L.v, L.m);
    msg[0x4e] = L.v[0];
    msg[0x4f] = L.v[1];
    msg[0x50] = L.v[2];
    *(char *)(self + 0x174) = 0;
    switch (msg[0]) {
    case 0: msg[0x26] = 0; return;
    case 12: _func_000500D0(self, msg); return;
    case 1: _func_00051170(self, msg); return;
    case 4: msg[0x26] = 0xb; msg[0x7e] = *(int *)msg[0x13]; return;
    case 2: _func_00051C80(self, msg); return;
    case 3: _func_00052C10(self, msg); return;
    case 5: _func_00053350(self, msg); return;
    case 7: _func_00054550(self, msg); return;
    case 8: _func_00054620(self, msg); return;
    case 10: _func_00054CE0(self, msg); return;
    case 11: _func_00055E30(self, msg); return;
    }
}

void func_00056F00(int p){ int func_00116A90(...); int func_0004FA80(...); int func_0013F2E9(...); int func_00056D50(...); extern char D_001D5168; unsigned int*q=(unsigned int*)func_00116A90(0x254,1,1); *(unsigned int**)(p+0x110)=q; *q=0; func_0004FA80(p,q); unsigned int *obj=*(unsigned int**)(p+0x1c); unsigned int value=*obj; int r=func_0013F2E9(value,(int)&D_001D5168); *((unsigned char*)q+0x174)=(r==0); if(q[0x1e]==0x41200000&&q[0x1f]==0x41200000){q[0x1e]=0x40800000;q[0x1f]=0x40000000;} func_00056D50(p,q);}

void func_00056F80(int param_1)
{
  int func_00056C00(...);
  func_00056C00(param_1,*(undefined4 *)(param_1 + 0x110));
  return;
}

void func_00056FA0(int param_1)
{
  int func_00116A90(...);
  int func_0004FA80(...);
  int func_0009C7A0(...);
  extern undefined D_001D387C;
  int func_00056D50(...);
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)func_00116A90(0x254,1,1);
  *(undefined4 **)(param_1 + 0x110) = puVar1;
  *puVar1 = 1;
  func_0004FA80(param_1,puVar1);
  uVar2 = func_0009C7A0(param_1,((undefined *)&D_001D387C),0);
  puVar1[10] = uVar2;
  func_00056D50(param_1,puVar1);
  return;
}

void func_00056FF0(int p){ int func_00116A90(...); int func_0004FA80(...); int func_00056D50(...); unsigned int *q=(unsigned int*)func_00116A90(0x254,1,1); *(unsigned int**)(p+0x110)=q; unsigned int x=*(unsigned int*)(p+0x130); q[0x18]=x; func_0004FA80(p,q); *q=4; func_00056D50(p,q); }

void func_00057030(int param_1)
{
  int func_00116A90(...);
  int func_0004FA80(...);
  int __ftol2(...);
  int func_00048720(...);
  extern undefined4 D_00307D10;
  int func_00056D50(...);
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)func_00116A90(0x254,1,1);
  *(undefined4 **)(param_1 + 0x110) = puVar1;
  *puVar1 = 2;
  func_0004FA80(param_1,puVar1);
  puVar1[0x19] = *(undefined4 *)(param_1 + 0x134);
  iVar2 = __ftol2();
  puVar1[0x20] = iVar2 << 1;
  uVar3 = func_00048720(D_00307D10,iVar2 << 1,puVar1[0x19],param_1);
  puVar1[0x1a] = uVar3;
  func_00056D50(param_1,puVar1);
  return;
}

void func_000570A0(int param_1)
{
  int func_00116A90(...);
  int func_0004FA80(...);
  int __ftol2(...);
  int func_00048720(...);
  extern undefined4 D_00307D10;
  int func_00056D50(...);
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)func_00116A90(0x254,1,1);
  *(undefined4 **)(param_1 + 0x110) = puVar1;
  *puVar1 = 3;
  func_0004FA80(param_1,puVar1);
  puVar1[0x19] = *(undefined4 *)(param_1 + 0x134);
  iVar2 = __ftol2();
  puVar1[0x20] = iVar2 << 1;
  uVar3 = func_00048720(D_00307D10,iVar2 << 1,puVar1[0x19],param_1);
  puVar1[0x1a] = uVar3;
  func_00056D50(param_1,puVar1);
  return;
}

void func_00057110(int param_1)
{
  int func_00116A90(...);
  int func_0004FA80(...);
  int __ftol2(...);
  int func_00048720(...);
  extern undefined4 D_00307D10;
  int func_00056D50(...);
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)func_00116A90(0x254,1,1);
  *(undefined4 **)(param_1 + 0x110) = puVar1;
  *puVar1 = 5;
  func_0004FA80(param_1,puVar1);
  uVar3 = *(undefined4 *)(param_1 + 0x134);
  puVar1[0x19] = uVar3;
  puVar1[0x18] = *(undefined4 *)(param_1 + 0x130);
  iVar2 = __ftol2();
  puVar1[0x20] = iVar2 << 1;
  uVar3 = func_00048720(D_00307D10,iVar2 << 1,uVar3,param_1);
  puVar1[0x1a] = uVar3;
  func_00056D50(param_1,puVar1);
  return;
}

void func_00057190(int param_1)
{
  int func_00116A90(...);
  int func_0004FA80(...);
  int __ftol2(...);
  int func_00048720(...);
  extern undefined4 D_00307D10;
  int func_00056D50(...);
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)func_00116A90(0x254,1,1);
  *(undefined4 **)(param_1 + 0x110) = puVar1;
  *puVar1 = 6;
  func_0004FA80(param_1,puVar1);
  uVar3 = *(undefined4 *)(param_1 + 0x134);
  puVar1[0x19] = uVar3;
  puVar1[0x18] = *(undefined4 *)(param_1 + 0x130);
  iVar2 = __ftol2();
  puVar1[0x20] = iVar2 << 1;
  uVar3 = func_00048720(D_00307D10,iVar2 << 1,uVar3,param_1);
  puVar1[0x1a] = uVar3;
  func_00056D50(param_1,puVar1);
  return;
}

int _func_00116A90(...);
int _func_0004FA80(...);
int __ftol2(...);
int _func_00048720(...);
int _func_00056D50(...);
int _func_0013F2E9(...);
int _func_00048820(...);
extern int _D_00307D10;
extern char _D_001D5180;
extern char _D_001D5174;
void _func_00057210(int p) {
 int *o=(int *)_func_00116A90(0x254,1,1); *(int **)(p+0x110)=o; *o=7;
 _func_0004FA80(p,o); o[0x19]=*(int *)(p+0x134); o[0x20]=__ftol2()*2;
 o[0x1a]=_func_00048720(_D_00307D10,o[0x20],o[0x19],p); _func_00056D50(p,o);
}

void _func_00057280(int p) {
 int *o=(int *)_func_00116A90(0x254,1,1); *(int **)(p+0x110)=o; *o=8;
 _func_0004FA80(p,o); o[0x19]=*(int *)(p+0x134); o[0x20]=__ftol2()*2;
 o[0x1a]=_func_00048720(_D_00307D10,o[0x20],o[0x19],p); _func_00056D50(p,o);
}

void _func_000572F0(int p) {
 int *o=(int *)_func_00116A90(0x254,1,1); *(int **)(p+0x110)=o; *o=10; _func_0004FA80(p,o);
 if (_func_0013F2E9(**(int **)(p+0x1c),&_D_001D5180)==0 || _func_0013F2E9(**(int **)(p+0x1c),&_D_001D5174)==0) { o[2]=0; o[1]=0; o[5]=0; }
 o[0x19]=*(int *)(p+0x134); o[0x20]=__ftol2()*2; o[0x1a]=_func_00048720(_D_00307D10,o[0x20],o[0x19],p);
 _func_00056D50(p,o); _func_00048820(*(int *)(o[0x1a]+8),o+0x4e);
}

void _func_000573B0(int p) {
 int *o=(int*)_func_00116A90(0x254,1,1);
 *(int**)(p+0x110)=o;
 _func_0004FA80(p,o);
 float value=*(float*)(p+0x138);
 int *base=*(int**)(p+0x134);
 float doubled=value+value;
 float normalized=doubled/(*(float*)((char*)base+0x74));
 int result=__ftol2(base,p);
 o[0x1a]=_func_00048720(_D_00307D10,result);
 *o=0xb;
 _func_00056D50(p,o);
 *((char*)o+0x174)=1;
 int *resource=(int*)o[0x1a];
 _func_00048820(resource[2],o+0x4e);
}

void func_00057430(int p){int func_00116A90(...),func_0004FA80(...),func_00056D50(...);int s=func_00116A90(0x254,1,1);*(int*)(p+0x110)=s;*(int*)(s+0x60)=*(int*)(p+0x130);func_0004FA80(p,s);*(int*)s=4;func_00056D50(p,s);*(int*)(s+0x98)=11;}

void func_00057480(int param_1)
{
  int func_00116A90(...);
  int func_0009C7A0(...);
  extern undefined D_001D2A3C;
  extern undefined D_001D381C;
  extern undefined D_001D3854;
  extern undefined D_001D383C;
  extern undefined D_001D3830;
  extern undefined D_001D51AC;
  int func_00045A60(...);
  int func_000A1BB0(...);
  extern undefined D_001D519C;
  extern undefined D_001D518C;
  int func_00131990(...);
  extern undefined D_001D29C7;
  int func_0009CD40(...);
  extern undefined D_001D2940;
  int func_00110060(...);
  float func_00047510(...);
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)func_00116A90(0xa0,1,1);
  *(undefined4 **)(param_1 + 0x110) = puVar1;
  memset(puVar1, 0, 0xa0);
  uVar2 = func_0009C7A0(param_1,((undefined *)&D_001D2A3C),1);
  puVar1[4] = uVar2;
  uVar2 = func_0009C7A0(param_1,((undefined *)&D_001D381C),1);
  puVar1[3] = uVar2;
  uVar2 = func_0009C7A0(param_1,((undefined *)&D_001D3854),1);
  puVar1[1] = uVar2;
  uVar2 = func_0009C7A0(param_1,((undefined *)&D_001D383C),1);
  puVar1[2] = uVar2;
  uVar2 = func_0009C7A0(param_1,((undefined *)&D_001D3830),1);
  puVar1[7] = uVar2;
  uVar2 = func_0009C7A0(param_1,((undefined *)&D_001D51AC),1);
  puVar1[8] = uVar2;
  func_00045A60(param_1);
  uVar2 = func_000A1BB0(param_1,((undefined *)&D_001D519C));
  puVar1[6] = uVar2;
  uVar2 = func_000A1BB0(param_1,((undefined *)&D_001D518C));
  puVar1[5] = uVar2;
  func_00131990(((undefined *)&D_001D29C7));
  iVar4 = func_0009CD40(param_1,((undefined *)&D_001D2940));
  if (iVar4 != 0) {
    puVar1[0x1c] = *(undefined4 *)(iVar4 + 0x54);
    puVar1[0x1d] = *(undefined4 *)(iVar4 + 0x58);
    puVar1[0x1e] = *(undefined4 *)(iVar4 + 0x5c);
  } else {
    puVar1[0x1c] = 0x44480000;
    puVar1[0x1d] = 0x44160000;
    puVar1[0x1e] = 0x43480000;
  }
  puVar3 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D2940),0);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1[0x1c] = *puVar3;
    puVar1[0x1d] = puVar3[1];
    puVar1[0x1e] = puVar3[2];
  }
  *(undefined4 *)(param_1 + 0x180) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x198) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19c) = 0x3f800000;
  *(volatile undefined4 *)(param_1 + 0x17c) = 0;
  *(volatile undefined4 *)(param_1 + 0x1a0) = (undefined4)0;
  ((volatile undefined4*)puVar1)[0x24] = 0xffffffff;
  puVar1[0x25] = 0xffffffff;
  func_00110060(*(undefined4 *)(param_1 + 0x2c),puVar1 + 0xc);
  *(float*)(puVar1+0x23) = func_00047510(puVar1[0x14],puVar1[0x16]);
  return;
}

float func_00057610(int a, int p)
{
  float func_0004EF90(...);
  float func_00012070(float, float);
  extern float D_001D27B8, D_001D386C;
  int func_0012F120(...), func_00115170(...), func_0012F2E0(...), func_00068DA0(...), func_001105E0(...);
  float t, d, ret;
  __declspec(align(16)) float m[12];
  float pos[3], dir[3];
  float q[19];
  t = func_0004EF90(a);
  d = func_00012070(t, *(float *)(p + 0x8c));
  if (d > D_001D27B8) {
    d -= D_001D386C;
    if (d > D_001D27B8) {
      *(float *)(p + 0x8c) = *(float *)(p + 0x8c) - D_001D386C;
      ret = d;
    } else {
      *(float *)(p + 0x8c) = t;
      ret = 0;
    }
  } else {
    d += D_001D386C;
    if (d < D_001D27B8) {
      *(float *)(p + 0x8c) = *(float *)(p + 0x8c) + D_001D386C;
      ret = d;
    } else {
      *(float *)(p + 0x8c) = t;
      ret = 0;
    }
  }
  func_0012F120(m);
  q[0] = *(float *)(p + 0x60);
  q[1] = *(float *)(p + 0x64);
  q[2] = *(float *)(p + 0x68);
  m[3] = *(float *)(p + 0x8c);
  dir[0] = 0; dir[1] = 1.0f; dir[2] = 0;
  func_00115170(*(int *)(a + 0x98), *(int *)(p + 0x90), q + 3);
  func_0012F2E0(q + 3, m);
  func_00068DA0(m, dir, 0);
  func_001105E0(*(int *)(a + 0x2c), m, 0);
  return ret;
}

