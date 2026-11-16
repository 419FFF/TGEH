/* 20 functions from 0x00138E80 to 0x00139D80, found by Ghidra. */
#include "common.h"

void _func_00139170(void *p) {
extern int _D_00332AC0;
extern void __stdcall MmFreeContiguousMemory(void*);
void _func_00131D10(void*);
void _func_00116FB0(void*);
void _func_0011C3E0(void*);
void _func_0011C3B0(int,void*,void*);
int *v;
if(!*(int*)((char*)p+0x90))return;
void*q=*(void**)((char*)p+0x9c);
if(q){(*(void(**)(void*))(*(char**)q+4))(q);*(void**)((char*)p+0x9c)=0;v=(int*)((char*)p+0xa0);for(int i=0;i<3;i++){MmFreeContiguousMemory((void*)*v);*v++=0;}}
if(*(void**)((char*)p+0x94)){_func_00131D10(*(void**)((char*)p+0x94));*(void**)((char*)p+0x94)=0;}
if(*(void**)((char*)p+0xc)){_func_00116FB0(*(void**)((char*)p+0xc));*(void**)((char*)p+0xc)=0;}
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
char*p=(char*)_func_00116A90(0xd0,0x20,1); char *src=s; int off=(int)(p+0x10)-(int)src; char c;
do {c=*src;src[off]=c;src++;}while(c);
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
  int func_0013AF50(...), func_0013AF70(...), _D_001AFA1B(...);
  if (self) {
    func_0013AF50(D_00332AD8);
    if (*(int *)(self + 0x90) == 3 || *(int *)(self + 0x90) == 4) {
      _D_001AFA1B(*(int *)(self + 0x9c), flag != 0);
    }
    func_0013AF70(D_00332AD8);
  }
}

float _func_00139440(void *p) {
    extern volatile float _D_001D27B8;
    if (p == 0) return _D_001D27B8;
    return *(float *)((char *)p + 0xbc);
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

void func_00139690(int self)
{
  int _D_001AFA1B(...), func_00139460(...);
  _D_001AFA1B(*(int *)(self + 0x9c), 0);
  func_00139460(self, *(int *)(self + 0xbc));
  *(int *)(self + 0x90) = 4;
}

void func_00139C70(void) { extern int D_00334CA0,D_00332B88[64],D_00332B84[64]; extern int __stdcall func_001AF9D9(int,int); unsigned i; extern int in_ECX; for(i=0;i<(unsigned)D_00334CA0;i++)if(D_00332B88[i]==0)break; if(i<(unsigned)D_00334CA0){ D_00332B88[i]=D_00332B84[D_00334CA0]; D_00334CA0--; D_00332B88[D_00334CA0]=0; } }

