/* 20 functions from 0x00138E80 to 0x00139D80, found by Ghidra. */
#include "common.h"

void _func_00139170(void *p) {
extern int _D_00332AC0; extern void __stdcall MmFreeContiguousMemory(void*);
void _func_00131D10(void*);void _func_00116FB0(void*);void _func_0011C3E0(void*);void _func_0011C3B0(int,void*,void*);
if(!*(int*)((char*)p+0x90))return;
void*q=*(void**)((char*)p+0x9c);if(q){(*(void(**)(void*))(*(char**)q+4))(q);*(void**)((char*)p+0x9c)=0;for(int i=0;i<3;i++){void**slot=(void**)((char*)p+0xa0+i*4);MmFreeContiguousMemory(*slot);*slot=0;}}
void*q2=*(void**)((char*)p+0x94);if(q2){_func_00131D10(q2);*(void**)((char*)p+0x94)=0;}
q2=*(void**)((char*)p+0xc);if(q2){_func_00116FB0(q2);*(void**)((char*)p+0xc)=0;}
_func_0011C3E0(p);_func_0011C3B0(_D_00332AC0,p,p);*(int*)((char*)p+0x90)=0;
}

void func_001392D0(void) {
    extern int D_00332ACC;
    int __stdcall func_00109C1F(int);
    func_00109C1F(D_00332ACC);
}

void *_func_001392E0(char *s,int a,unsigned short b) {
void *_func_00116A90(int,int,int); int _func_00131C80(char*,int); void _func_00116FB0(void*);
void _func_0011C3B0(void*,void*,void*); int __stdcall _func_00109C1F(int);
extern char _D_00332AE0; extern int _D_00332ACC;
char*p=(char*)_func_00116A90(0xd0,0x20,1); char *src=s; int delta=(int)(p+0x10)-(int)src; char c;
do {c=*src; *(char*)(delta+(int)src)=c; ++src;}while(c);
*(int*)(p+0x90)=1;int h=_func_00131C80(p+0x10,0);*(int*)(p+0x94)=h;
if(!h){_func_00116FB0(p);return 0;}
*(unsigned short*)(p+0xb8)=b;*(unsigned int*)(p+0xbc)=0x3f800000;_func_0011C3B0(&_D_00332AE0,p,p);_func_00109C1F(_D_00332ACC);return p;
}

void _func_00139370(void *p) {
extern int _D_00332AD8,_D_00332ACC;
extern void __stdcall _D_001AFA1B(void*,int);
void _func_0013AF50(int);
int __stdcall _func_00109C1F(int);
void _func_0013AF70(int);
if(!p)return;
_func_0013AF50(_D_00332AD8);
int s=*(int*)((char*)p+0x90);
if(s==4||s==3||s==1){void*q=*(void**)((char*)p+0x9c);if(q)_D_001AFA1B(q,1);*(int*)((char*)p+0x90)=5;_func_00109C1F(_D_00332ACC);}
_func_0013AF70(_D_00332AD8);
}

void func_001393E0(int self, char flag)
{
  extern int D_00332AD8;
  int func_0013AF50(...), func_0013AF70(...);
  void __stdcall _D_001AFA1B(int, int);
  if (!self) return;
  func_0013AF50(D_00332AD8);
  int state = *(int *)(self + 0x90);
  if (state == 4) goto done;
  if (state == 3) {
    int value = *(int *)(self + 0x9c);
    if (flag) {
      _D_001AFA1B(value, 1);
    } else {
      _D_001AFA1B(value, 0);
    }
  }
done:
  func_0013AF70(D_00332AD8);
}

float _func_00139440(void *p) {
    extern volatile float _D_001D27B8;
    if (p == 0) return _D_001D27B8;
    return *(float *)((char *)p + 0xbc);
}

int func_00139570(int param_1)
{
  if (param_1 != 0) {
    switch (*(int *)(param_1 + 0x90)) {
    case 1: return 4;
    case 2: return 3;
    case 3:
    case 4: return 0;
    }
  }
  return 1;
}

void func_001395C0(void)
{
  extern int D_00332AD8, D_00332AE0, D_00332AEC;
  int func_0013AF50(...), func_0013AF70(...);
  void __stdcall func_00109CF3(int, int);
  for (;;) {
    func_0013AF50(D_00332AD8);
    int node = D_00332AE0;
    while (node && *(int *)(*(int *)(node + 8) + 0x90) != 6)
      node = *(int *)node;
    func_0013AF70(D_00332AD8);
    if (!node) break;
    func_00109CF3(D_00332AEC, -1);
  }
}

void func_00139630(int p) { extern int func_00139170(...),func_0011C3E0(...),func_00139460(...),func_00116FB0(...); extern int D_00332AEC; extern void __stdcall func_00109C1F(int); func_00139170(); if(p){if(*(int*)(p+0xc0))func_0011C3E0(p+0xc4);func_00139460(p,*(int*)(p+0xbc));*(int*)(p+0xc0)=0;}func_0011C3E0(p);func_00116FB0(p);func_00109C1F(D_00332AEC);}

void func_00139690(int self)
{
  int _D_001AFA1B(...), func_00139460(...);
  _D_001AFA1B(*(int *)(self + 0x9c), 0);
  *(int *)(self + 0x90) = 4;
  func_00139460(self, *(int *)(self + 0xbc));
}

unsigned char func_00139A70(void) { extern int D_00332AF0,D_00332AE0,D_00332AE4,D_00332AC0,D_00332AC4,D_00332AD8,D_00332AD4,D_00332ACC,D_00332AEC,D_00332AD0; extern int func_0013AF00(...),func_00116A90(...),func_001359C0(...),func_0013AFB0(...),func_001398C0(...),func_0013B0B0(...); extern int __stdcall func_00109BBE(int,int,int,int); extern void func_001392D0(...); if(!D_00332AF0){D_00332AE0=0;D_00332AE4=0;D_00332AC0=0;D_00332AC4=0;D_00332AD8=func_0013AF00();D_00332AD4=func_00116A90(0x24000,0x20,1);D_00332ACC=func_00109BBE(0,0,0,0);D_00332AEC=func_00109BBE(0,0,0,0);func_001359C0(func_001392D0);D_00332AD0=func_0013AFB0(func_001398C0,0,0x2000);func_0013B0B0(D_00332AD0,0);}D_00332AF0++;return 1;}

void func_00139B10(int p){extern int D_00332AD8,D_00332ACC;extern int func_0013AF50(...),func_00139370(...),func_00139630(...),func_0013AF70(...);extern void __stdcall func_00109C1F(int);if(!p)return;func_0013AF50(D_00332AD8);func_00139370(p);if(!*(int*)(p+0x90)){func_00139630(p);func_0013AF70(D_00332AD8);return;}*(int*)(p+0x90)=6;func_00109C1F(D_00332ACC);func_0013AF70(D_00332AD8);}

void func_00139C70(void) { extern int D_00334CA0,D_00332B88[64],D_00332B84[64]; unsigned i=0; while(i<(unsigned)D_00334CA0 && D_00332B88[i])i++; if(i<(unsigned)D_00334CA0){D_00332B88[i]=D_00332B84[D_00334CA0];D_00334CA0--;D_00332B88[D_00334CA0]=0;} }

void _func_00139CD0(char enabled) {
extern int _D_00332B84; extern int _D_00332B88[64];
int __stdcall _func_001B12C7(int,int*,void*,int);
struct T { int a,b; unsigned short c; unsigned short d; int e,f,g,h; unsigned short i; unsigned short j; int k,l,m; } t;
t.a=t.b=t.c=t.d=t.e=t.f=t.g=t.h=t.i=t.j=t.k=t.l=t.m=0;
t.a=1;t.b=1;t.d=0x10;t.e=0x18;t.f=0x2b2a;t.g=2;t.h=0x5654;
if(enabled){int *items=_D_00332B88;for(int i=0;i<64;i++,items++)_func_001B12C7(_D_00332B84,items,&t,0);}
}

