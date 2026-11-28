/* 32 functions from 0x00124700 to 0x0012555E, found by Ghidra. */
#include "common.h"
struct Tri64 { char v[0x40]; };
#include "ghidra.h"

extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)
extern "C" void * __cdecl memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)
struct S_125350 { short a; short pad; int b; int c; };
struct RNode { unsigned char k[4]; RNode *next; };
extern unsigned int D_001DF6B8;
extern unsigned char D_001DF6BC;

#pragma optimize("y", off)
void _func_00124700(void)
{
  extern int D_00331504, D_00331508, D_00331520, D_00331518, D_00331120, D_001E7D64;
  extern int *D_003311D8[];
  extern int *D_00331370[];
  extern float D_001D27B0, D_001D27B8;
  int func_00116FB0(...); int func_00133BB0(...); int func_0011BDD0(...); int func_001235F0(...);
  int iVar5, iVar6, iVar7, iVar1, local_4, r;
  unsigned int uVar4;
  int **piVar8, **piVar9, **piVar10;
  int *t;
  char *q;
  int *p;

  if (D_00331504 != 0) {
    iVar7 = 0;
    uVar4 = D_00331508;
    if (0 < (int)D_00331508) {
      piVar8 = D_003311D8;
      do {
        p = *piVar8;
        if ((unsigned int)(D_00331520 - p[2]) > 2) {
          if (p[0x70 / 4] != 0) func_00116FB0(p[0x70 / 4]);
          func_00133BB0(p[3]);
          p[3] = 0;
          func_00116FB0(p);
          if (iVar7 < D_00331508 - 1) {
            piVar9 = piVar8 + 1;
            piVar10 = piVar8;
            for (iVar5 = D_00331508 - 1 - iVar7; iVar5 != 0; iVar5--) *piVar10++ = *piVar9++;
          }
          uVar4 = D_00331508 - 1;
          D_00331508 = uVar4;
        }
        iVar7++;
        piVar8++;
      } while (iVar7 < (int)uVar4);
    }
    if (uVar4 > 1) {
      iVar7 = uVar4 - 1;
      iVar5 = iVar7;
      local_4 = iVar7;
      if (iVar7 > 0) {
        do {
          iVar6 = 0;
          for (; iVar6 < iVar5; iVar6++) {
            t = D_003311D8[iVar6];
            if (*(float *)((char *)D_003311D8[iVar6 + 1] + 100) < *(float *)((char *)t + 100)) {
              D_003311D8[iVar6] = D_003311D8[iVar6 + 1];
              D_003311D8[iVar6 + 1] = t;
            }
          }
          local_4--;
          iVar5--;
        } while (local_4 != 0);
      }
      for (; iVar7 >= 0; iVar7--) {
        if (D_003311D8[iVar7][0x54 / 4] != 0 && (*(unsigned char *)(D_003311D8[iVar7][0x54 / 4] + 0x13) & 0x10) != 0) {
          for (iVar5 = iVar7; iVar5 >= 1; iVar5--) {
            t = D_003311D8[iVar5 - 1];
            D_003311D8[iVar5 - 1] = D_003311D8[iVar5];
            D_003311D8[iVar5] = t;
          }
        }
      }
    }
    iVar5 = 0;
    r = func_0011BDD0(D_00331504, 0);
    if (r != 0) {
      uVar4 = D_00331508;
      if (D_001E7D64 < (int)D_00331508) uVar4 = D_001E7D64;
      D_00331518 = 0;
      D_00331120 = r;
      if (0 < (int)uVar4) {
        do {
          p = D_003311D8[iVar5];
          q = (char *)p[0x54 / 4];
          p[2] = D_00331520;
          if (*(float *)((char *)p + 100) > *(float *)(q + 4)) {
            *(float *)((char *)p + 0x68) = (*(float *)((char *)p + 100) - *(float *)(q + 4)) / (*(float *)(q + 8) - *(float *)(q + 4));
            if (*(float *)((char *)p + 0x68) > D_001D27B0) p[0x68 / 4] = 0x3f800000;
            *(float *)((char *)p + 0x68) = D_001D27B0 - *(float *)((char *)p + 0x68);
          } else {
            p[0x68 / 4] = 0x3f800000;
          }
          if (*(float *)((char *)p + 0x68) > D_001D27B8) {
            func_001235F0();
            D_00331370[D_00331518] = p;
            D_00331518++;
          }
          iVar5++;
        } while (iVar5 < (int)uVar4);
      }
      (*(short *)(D_00331504 + 0x2a))--;
      iVar7 = 0;
      if (0 < D_00331508) {
        do {
          *(int *)((char *)D_003311D8[iVar7] + 100) = 0x4cbebc20;
          iVar7++;
        } while (iVar7 < D_00331508);
      }
    }
  }
}

void func_00124A10(void){extern unsigned int D_00331518,D_00331508,D_00331500,D_00331178,D_00331370[],D_00331520; extern float D_001E7D60,D_001D27FC; int __ftol2(void); void func_001383B0(void); void func_00138440(int); void func_00138490(int); void func_0012F120(void*); void func_001364D0(void*); void func_00136FF0(int); void func_00123F90(int); void func_00137030(void); unsigned char buf[0x48]; if(D_00331518){func_001383B0();func_00138440(0);func_00138490(0);func_0012F120(buf);func_001364D0(buf);} D_00331500=D_00331518;D_00331178=D_00331508;func_00136FF0(__ftol2()); for(unsigned i=0;i<D_00331518;++i){int ptr=D_00331370[i];func_00123F90(ptr);*(int*)(ptr+8)=D_00331520;}func_00137030();D_00331520++;}
#pragma optimize("", on)
void func_00124AD0(void){extern unsigned D_00331508,D_00331518; extern int D_003311D8[]; void func_00133BB0(int); void func_00116FB0(int); for(unsigned i=0;i<D_00331508;i++){int p=D_003311D8[i];if(*(int*)(p+0x70))func_00116FB0(*(int*)(p+0x70));func_00133BB0(*(int*)(p+0xc));*(int*)(p+0xc)=0;func_00116FB0(p);}D_00331508=0;D_00331518=0;}

void func_00124B30(int a,int b,int c,unsigned short d){int func_00116A90(int,int,int); unsigned char *p=(unsigned char*)func_00116A90(0x38,1,1);*(int*)p=a;*(int*)(p+4)=b;*(int*)(p+8)=c;*(unsigned short*)(p+0x10)=d;*(unsigned*)(p+0xc)=0x3f800000; p[0x13]=4;*(unsigned*)(p+0x34)=0xbf800000;}

void func_00124B70(int p) { extern unsigned int D_00331508; extern int D_003311D8[]; int func_00116FB0(...); unsigned int i; int q; for(i=0;i<D_00331508;i++){ q=D_003311D8[i]; if(*(int *)(q+0x54)==p) *(int *)(q+0x54)=0; } func_00116FB0(p); }

void func_00124BB0(int p,int flag){if(flag){*(unsigned char*)(p+0x12)=1;*(unsigned char*)(p+0x13)|=8;}else{*(unsigned char*)(p+0x12)=1;*(unsigned char*)(p+0x13)&=0xf7;}}

void func_00124BE0(int param_1, float param_2)
{
  *(float *)(param_1 + 0xc) = param_2;
  *(unsigned char *)(param_1 + 0x12) = 1;
}

void func_00124BF0(RNode *list)
{
  RNode *b[256];
  RNode *a[256];
  RNode *n, *nx, *t;
  unsigned i;
  unsigned char c;

  if (list == 0) return;
  for (i = 0; i < 256; i++) b[i] = 0;
  for (i = 0; i < 256; i++) a[i] = 0;
  n = list;
  do {
    t = b[n->k[0]];
    b[n->k[0]] = n;
    nx = n->next;
    n->next = t;
    n = nx;
  } while (n);
  for (i = 0; i < 256; i++) {
    n = b[i];
    while (n) {
      c = ~n->k[1];
      t = a[c];
      a[c] = n;
      nx = n->next;
      n->next = t;
      n = nx;
    }
  }
  for (i = 0; i < 256; i++) b[i] = 0;
  for (i = 0; i < 256; i++) {
    n = a[i];
    while (n) {
      t = b[n->k[2]];
      b[n->k[2]] = n;
      nx = n->next;
      n->next = t;
      n = nx;
    }
  }
  for (i = 0; i < 256; i++) a[i] = 0;
  for (i = 0; i < 256; i++) {
    n = b[i];
    while (n) {
      c = ~n->k[3];
      t = a[c];
      a[c] = n;
      nx = n->next;
      n->next = t;
      n = nx;
    }
  }
  i = 0;
  do {
    if (a[i] != 0) break;
    if (a[i + 1] != 0) { i = i + 1; break; }
    if (a[i + 2] != 0) { i = i + 2; break; }
    if (a[i + 3] != 0) { i = i + 3; break; }
    i = i + 4;
  } while (i < 256);
  nx = a[i];
  if (nx == 0) return;
  for (n = nx; n->next != 0; n = n->next) ;
  while (++i < 256) {
    t = a[i];
    if (t != 0) {
      n->next = t;
      for (n = t; n->next != 0; n = n->next) ;
    }
  }
}

void func_00124DC0(undefined4 *param_1)
{
  int func_00116A90(...);
  undefined4 uVar1;
  
  uVar1 = func_00116A90(0xc,1,1);
  *param_1 = uVar1;
  return;
}

void func_00124DE0(undefined4 *param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  undefined4 uVar1;
  
  uVar1 = func_0013E9DB(*param_2);
  *param_1 = uVar1;
  return;
}

void func_00124E00(int p, unsigned int *v) { int func_0013E9DB(...); int func_00116A90(...); int n=func_0013E9DB(*v); int q=func_00116A90(n*4,1,1); *(int *)(p+8)=q; *(int *)(p+4)=0; }

void func_00124E30(unsigned int *p, unsigned int *v) { int func_00116A90(...); float func_0013E9E0(...); int q=func_00116A90(*p<<2,1,1); *(int *)(p[2]+p[1]*4)=q; for(unsigned int i=0;i<*p;i++) { float x=func_0013E9E0(v[i]); *(float *)(*(int *)(p[2]+p[1]*4)+i*4)=x; } p[1]++; }

unsigned int _func_00124E90(unsigned int param_1) { unsigned char _func_00131A10(...); int _func_00125E80(...); unsigned int local; if (!_func_00131A10(param_1)) return 0; _func_00125E80(param_1,&local); return local; }

void _func_00124EC0(int unused, unsigned int *p) { int _func_00116FB0(...); unsigned int i=0; unsigned int n=p[1]; if(n>0){ do { _func_00116FB0(*(unsigned int *)(p[2]+i*4)); ++i; } while(i<p[1]); } _func_00116FB0(p[2]); _func_00116FB0(p); }

void func_00124F00(void) {
    extern int D_00331528;
    int func_00115DE0(...);
    func_00115DE0(D_00331528, 28);
}

int func_00124F20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  int func_00115E10(...);
  int func_0011BF40(...);
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_00115E10(param_1,0x34);
  uVar2 = func_0011BF40(param_2,param_3);
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  return iVar1;
}

unsigned char _func_00124F50(int p) { int _func_0011BDD0(...); int esi=p; int eax=*(int *)(esi+0x30); if(_func_0011BDD0(eax,0)){eax=*(int *)(esi+0x30); --*(short *)(eax+0x2a);return 1;}return 0;}

unsigned char _func_00124F80(int p1,int p2) { int _func_0011BDD0(...); int _func_00116490(...); int owner=*(int *)(*(int *)(p1+4)+8); int item=_func_0011BDD0(*(int *)(owner+0x30),0); if(item==0)return 0; if(*(int *)(item+4)==0){--*(short *)(*(int *)(owner+0x30)+0x2a);return 0;} float a,b; int x,y; _func_00116490(owner,*(int *)(item+4),&x); unsigned int i=0,n=*(unsigned int *)item; if(n>0) do { float v1=*(float *)(*(int *)(*(int *)(item+8)+x*4)+i*4); float v2=*(float *)(*(int *)(*(int *)(item+8)+y*4)+i*4); *(float *)(*(int *)(p2+0xf8)+i*4)=a*v1+b*v2; ++i; }while(i<n); --*(short *)(*(int *)(owner+0x30)+0x2a);return 1;}

int func_0011B990(int); void func_00125020(int *a0) { func_0011B990(a0[12]); }

unsigned int _func_00125030(int *p){extern int _func_0011BDD0(...);extern unsigned int D_0000FFFF;register unsigned int r=(unsigned int)&D_0000FFFF;int obj=*(int*)((char*)p+0x30);int x=_func_0011BDD0(obj,0);if(x){r=*(unsigned*)((char*)x+4);r--;(*(unsigned short*)((char*)obj+0x2a))--;}return r;}

void _func_00125060(void){extern int D_0033152C,D_00331524,D_00331528;extern int D_001DC78C,D_001DF6A8,D_001D88C0,D_001DF208,D_001DF538;extern int _func_00115D60(void*);extern void _func_0011B5C0(...);extern int _func_00125BC0(...);extern void _func_00125D20(...);extern void _func_00124F80(void),_func_00125030(void),_func_00125020(void),_func_00124EC0(void),_func_00124E90(void),_func_00124DC0(void),_func_00124DE0(void),_func_00124E00(void),_func_00124E30(void);if(D_0033152C){D_0033152C++;return;}int local[6];local[2]=(int)_func_00124F80;local[1]=0;local[3]=(int)_func_00125030;local[4]=(int)_func_00125020;local[5]=0;D_00331528=_func_00115D60(local);_func_0011B5C0(&D_001DC78C,_func_00124E90,_func_00124EC0);D_00331524=_func_00125BC0(0,&D_001DF6A8,_func_00124DC0,0);_func_00125D20(D_00331524,&D_001D88C0,_func_00124DE0);_func_00125D20(D_00331524,&D_001DF208,_func_00124E00);_func_00125D20(D_00331524,&D_001DF538,_func_00124E30);D_0033152C++;}

int *_func_00125120(int *p){extern void _func_00117100(void),_func_00117130(void);extern int _func_00116A90(int,int,int);_func_00117100();int *a=(int*)_func_00116A90(0xc,1,1);_func_00117130();int b=_func_00116A90(0xc,1,1);*a=b;*p=b;return a;}

extern float D_001D314C;
float func_0012E8C0(char *a, char *b);
float func_00131210(float x);
int func_00129CA0(unsigned int n, int p, unsigned char f);
void func_00125160(int *param_1)
{
  int func_00116FB0(...);
  unsigned int i = 0;
  unsigned char done = 0;
  if (i < (unsigned int)param_1[1]) {
    do {
      if (func_00131210(func_0012E8C0(((Tri64 *)param_1[2])[i].v, ((Tri64 *)param_1[2])[i].v + 0x10)) > D_001D314C) break;
      if (func_00131210(func_0012E8C0(((Tri64 *)param_1[2])[i].v + 0x10, ((Tri64 *)param_1[2])[i].v + 0x20)) > D_001D314C) break;
      if (func_00131210(func_0012E8C0(((Tri64 *)param_1[2])[i].v + 0x20, ((Tri64 *)param_1[2])[i].v)) > D_001D314C) break;
      i++;
    } while (i < (unsigned int)param_1[1]);
  }
  if (i >= (unsigned int)param_1[1]) done = 1;
  *(int *)(*param_1 + 4) = func_00129CA0(param_1[1], param_1[2], done);
  func_00116FB0(param_1[2]);
  func_00116FB0(param_1);
}

void _func_00125250(int *p,undefined4 *q){int func_0013E9DB(...);int func_00116A90(...);int func_00117100(...);int func_00117130(...);p[1]=func_0013E9DB(q[0]);func_00117100();p[2]=func_00116A90(p[1]<<6,1,1);func_00117130();*(short*)(*p+2)=(short)p[1];*(int*)(*p+8)=func_00116A90(p[1],1,1);}

void _func_001252B0(int p,undefined4 *q){int func_0013E9DB(...);longdouble func_0013E9E0(...);int i=func_0013E9DB(q[0])<<6;float *dst=(float*)(i+*(int*)(p+8));q++;for(int outer=0;outer<4;outer++){int inner=4;do{*dst++=(float)func_0013E9E0(*q++);--inner;}while(inner);}}

void _func_00125310(int *p,undefined4 *q){int func_0013E9DB(...);int a=func_0013E9DB(q[0]);int b=func_0013E9DB(q[1]);int *node=(int*)*p;int idx=node[2];*(unsigned char*)(a+idx)=b?0:1;}

S_125350* _func_00125350(char *name)
{
  unsigned char _func_00131A10(...); int _func_00126120(...); S_125350* _func_00126180(...); int _func_0012ADA0(...); int _func_00126300(...); int _func_00125E80(...);
  S_125350 *r;
  char buf[0x100];
  char *p;
  int i = 0;
  do { buf[i] = name[i]; } while (name[i++]);
  buf[strlen(buf) + 1] = 0;
  p = buf + 3;
  do { p++; } while (*p);
  *(unsigned int*)p = D_001DF6B8;
  p[4] = D_001DF6BC;
  if (_func_00131A10(buf)) {
    int h = _func_00126120(buf);
    r = _func_00126180(h);
    r->c = (int)_func_00126180(h);
    r->b = _func_0012ADA0(h, 1);
    _func_00126300(h);
    r->a = 1;
    return r;
  }
  if (_func_00131A10(name)) {
    _func_00125E80(name, &r);
    return r;
  }
  return 0;
}

void func_00125440(undefined4 param_1, short *param_2)
{
  int func_00129C90(...);
  int func_00116FB0(...);
  if (*param_2 == 0) {
    func_00129C90(*(undefined4 *)(param_2 + 2));
    func_00116FB0(*(undefined4 *)(param_2 + 4));
  }
  func_00116FB0(param_2);
  return;
}

void func_00125470(void) {
    extern int D_00331530;
    int func_00115DE0(...);
    func_00115DE0(D_00331530, 32);
}

int _func_00125490(int p,undefined4 q,int mode){int func_00115E10(...);int func_0011B820(...);int func_0011BF40(...);int obj=func_00115E10(p,0x34);switch(mode){case 1:*(int*)(obj+0x30)=func_0011BF40(q,0);break;case 2:*(int*)(obj+0x30)=func_0011BF40(q,1);break;case 3:*(int*)(obj+0x30)=func_0011B820(q);*(unsigned int*)(obj+0x14)|=1;break;}return obj;}

void func_00125500(int p) { int func_0011BAE0(...); int func_0011B990(...); if (*(unsigned char *)(p+0x14)&1) func_0011BAE0(*(int *)(p+0x30)); else func_0011B990(*(int *)(p+0x30)); }

unsigned int _func_00125530(int *p){extern int _func_0011BDD0(...);extern unsigned int D_0000FFFF;unsigned int fallback=(unsigned int)&D_0000FFFF;int x=_func_0011BDD0(*(int*)((char*)p+0x30),0);unsigned int r=fallback;if(x){r=*(unsigned short*)((char*)x+2);r--;(*(unsigned short*)((char*)*(int*)((char*)p+0x30)+0x2a))--;}return r;}
extern void *memset(void*,int,unsigned int);
extern void *memset(void*,int,unsigned int);
