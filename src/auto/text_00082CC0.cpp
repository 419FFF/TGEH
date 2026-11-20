/* 19 functions from 0x00082CC0 to 0x00083B2B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_00083190(void *a, void *b) { extern int D_002FBB28,D_002FBB30,D_002FBB34; int func_0010F750(...); int func_000832D0(...); int *p=(int*)func_0010F750(a,D_002FBB28,0xf0); int x=func_000832D0(*(int*)((char*)b+0xc)); *(int*)((char*)p+0xe0)=x; if(x!=-1){((int*)&D_002FBB30)[x*2]= (int)p; ((int*)&D_002FBB34)[x*2]++;} return (int)p; }

void func_000831E0(int param_1)
{
  extern undefined D_002FBB34;
  *(int *)(((undefined *)&D_002FBB34) + *(int *)(param_1 + 0xe0) * 8) =
       *(int *)(((undefined *)&D_002FBB34) + *(int *)(param_1 + 0xe0) * 8) + -1;
  return;
}

undefined4 func_00083200(int param_1)
{
  extern undefined D_002FBB30;
  return *(undefined4 *)(((undefined *)&D_002FBB30) + param_1 * 8);
}

void func_00083210(int a, int b) { extern int D_002FBB30,D_00308158; int func_0011FD20(...); int func_0011F920(...); int func_001105E0(...); int func_00095A30(...); int func_001206B0(...); int func_0011F960(...); int p=((int*)&D_002FBB30)[a*2]; if(p){func_0011FD20(); int q=func_0011F920(*(int*)(D_00308158+0x2c)); func_001105E0(p,b,0);func_00095A30(p);func_001206B0();func_0011F960(q);} }

void func_00083260(void) { extern int D_002FBB2C,D_002FBB28,D_002FBB30,D_002FBB34; int func_00110370(...); struct {int a,b; void *c; int d;} local; if(!D_002FBB2C){local.a=0;local.b=0;local.c=func_000831E0;local.d=0;D_002FBB28=func_00110370(&local);D_002FBB30=0;D_002FBB34=0;} ++D_002FBB2C; }

void func_000832B0(void)
{
  extern undefined4 D_002FBB2C;
  int func_001103C0(...);
  extern undefined4 D_002FBB28;
  D_002FBB2C = D_002FBB2C + -1;
  if (D_002FBB2C == 0) {
    func_001103C0(D_002FBB28);
  }
  return;
}

int func_000832D0(const char *s) { extern const char D_001D6838[]; int i; for(i=0;i<7;i++) if(s[i]!=D_001D6838[i]) return 0; return -1; }

void func_00083550(int param_1)
{
  int func_0011CFC0(...);
  int func_0011DED0(...);
  int func_00116A90(...);
  int iVar1;
  
  func_0011CFC0(param_1 + 0x54,0);
  func_0011DED0(param_1);
  iVar1 = func_00116A90(8,1,0);
  *(int *)(param_1 + 0x17c) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  return;
}

extern float D_001D27B8;
void func_00083590(int param_1){ int func_0011CFC0(...); int p=*(int*)(param_1+0x17c); if(D_001D27B8==*(float*)(p+4)) func_0011CFC0(param_1+0x54,0); else {func_0011CFC0(param_1+0x54,100);*(int*)(p+4)=0;} }

void func_000835E0(void) {
    extern int D_001D6840;
    extern void func_000832F0(void);
    extern void func_00083550(void);
    extern void func_00079D10(void);
    extern void func_00083590(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_000832F0, &D_001D6840);
    func_0011D270(func_00083550, &D_001D6840);
    func_0011D290(func_00079D10, &D_001D6840);
    func_0011D2B0(func_00083590, &D_001D6840);
    func_0011D2D0(func_00092810, &D_001D6840);
    func_0011D2F0(func_00083D60, &D_001D6840);
}

void func_00083640(void) {
    extern int D_001D6840;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6840);
}

void func_00083650(int param_1)
{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x158) + 0x17c) + 4) = 0x3f800000;
  return;
}

void func_00083670(void)
{
  extern int D_001D684C, D_001D6850, D_001D6854, D_001D6858;
  extern short D_001D685C;
  extern char D_001D6844, D_001D6840, D_002FBB38[], D_002FBB3C[], D_002FBB40[], D_002FBB44[];
  extern int D_002FBB88;
  extern int D_0030809C;
  int func_0011E840(...);
  int func_0011DD60(...);
  int func_0011E830(...);
  int func_0011DEF0(...);
  int func_00110480(...);
  int a[61];
  unsigned int k;
  int r;
  for (k = 0; k < 0x50; k += 0x10) {
    int *p = a;
    for (r = 0x3d; r != 0; r--)
      *p++ = 0;
    a[36] = 2;
    a[37] = 2;
    a[0] = D_001D684C;
    a[1] = D_001D6850;
    a[2] = D_001D6854;
    a[46] = 1;
    a[47] = 1;
    a[32] = 0;
    a[33] = 0;
    a[34] = 0;
    a[35] = 0;
    a[42] = 3;
    a[43] = 3;
    a[44] = 3;
    a[45] = 3;
    a[48] = 0;
    a[54] = 0;
    a[53] = 0;
    a[55] = 0;
    a[60] = 10;
    a[57] = 0x1e;
    a[3] = D_001D6858;
    *(short *)&a[4] = D_001D685C;
    a[59] = 0x58;
    r = func_0011E840(&D_001D6844, a);
    *(int *)(D_002FBB38 + k) = r;
    r = func_0011DD60(&D_001D6840, 0x1e, r, *(int *)(r + 0x14c));
    *(int *)(D_002FBB3C + k) = r;
    func_0011E830(*(int *)(D_002FBB38 + k), r);
    func_0011DEF0(*(int *)(D_002FBB3C + k));
    *(int *)(D_002FBB40 + k) = 1;
    *(int *)(D_002FBB44 + k) = 0;
    func_00110480(D_0030809C, *(int *)(D_002FBB38 + k), 8);
  }
  D_002FBB88 = 1;
}

void func_000837F0(void)
{
  int func_001160B0(...);
  extern undefined D_002FBB3C;
  int func_00110760(...);
  extern undefined D_002FBB38;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FBB3C) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FBB38) + uVar1));
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0x50);
  return;
}

void *_func_00083820(int a,int *b){int _func_00110420(...);int _func_0012F120(...);int _func_001105E0(...);int _func_00110000(...);int _func_00110550(...);int _func_0011DED0(...);int _func_00083650(...);extern unsigned int _D_002FBB40[20],_D_002FBB88;extern int _D_002FBB38[20],_D_002FBB44[20],_D_002FBB3C[20],_D_002FBB50,_D_002FBB60,_D_002FBB70,_D_002FBB80;register unsigned int v=0xffffffffu,slot=0,t=_D_002FBB40[0];if(t<=v){v=t;slot=0;}t=_D_002FBB40[4];if(t<=v){v=t;slot=1;}t=_D_002FBB40[8];if(t<=v){v=t;slot=2;}t=_D_002FBB40[12];if(t<=v){v=t;slot=3;}t=_D_002FBB40[16];if(t<=(int)v)slot=4;int *p=&_D_002FBB38[slot*4];int *o=*(int**)(p[0]+0x2c);_func_00110420(*o,p[0]);_D_002FBB44[slot*4]=0;__declspec(align(16)) char local[64];_func_0012F120(local);*(int*)(local+48)=b[0];*(int*)(local+52)=b[1];*(int*)(local+56)=b[2];_func_001105E0(p[0],local,0);_func_00110000(p[0]);_func_00110550(a,p[0],8);_D_002FBB44[slot*4]=1;_func_0011DED0(_D_002FBB3C[slot*4]);_D_002FBB40[slot*4]=_D_002FBB88;++_D_002FBB88;_func_00083650(p[0]);return p;}

