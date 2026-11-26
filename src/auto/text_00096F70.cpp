/* 12 functions from 0x00096F70 to 0x000978F6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern "C" void (__stdcall *__imp__RtlEnterCriticalSection)(void *);
extern "C" void (__stdcall *__imp__RtlLeaveCriticalSection)(void *);
struct MeshEntry { int pad0[8]; unsigned short *indices; unsigned int count; int pad1[2]; };
struct MeshData { MeshEntry *entries; int pad0; unsigned int entryCount; unsigned int vertCount; int pad1; int *verts; };

void _func_00096F70(int param_1)
{
  int func_00096230(int);
  void func_00096E40(int);
  int __stdcall func_0014E3D0(int);
  int *__stdcall func_0014E420(int, int);
  int *__stdcall func_0014E390(int);
  int **func_0009C7A0(int, void *, int);
  void func_00131990(void *);
  int func_0011BF40(int, int);
  int func_0011BDD0(int, int);
  void func_00110060(int, void *);
  extern char D_003326AC, D_001D6BFC, D_001D29C7;
  int s = *(int *)(param_1 + 0x2c);
  unsigned int i, j, k;
  int *v;
  int **q;
  int h;
  unsigned short *dst;
  __declspec(align(16)) int buf[15];

  *(int *)(s + 0xf4) = func_00096230(s);
  func_00096E40(param_1);
  __imp__RtlEnterCriticalSection(&D_003326AC);
  h = func_0014E3D0((*(MeshData **)(s + 0xf4))->vertCount << 4);
  *(int *)(s + 0xf8) = h;
  v = func_0014E420(h, 0);
  for (i = 0; i < (*(MeshData **)(s + 0xf4))->vertCount; i++) {
    v[0] = (*(MeshData **)(s + 0xf4))->verts[i * 3];
    v[1] = (*(MeshData **)(s + 0xf4))->verts[i * 3 + 1];
    v[2] = (*(MeshData **)(s + 0xf4))->verts[i * 3 + 2];
    v[3] = -1;
    v += 4;
  }
  for (k = 0; k < (*(MeshData **)(s + 0xf4))->entryCount; k++) {
    *(int *)(s + 0x108) += (*(MeshData **)(s + 0xf4))->entries[k].count;
  }
  *(int **)(s + 0xfc) = func_0014E390(*(int *)(s + 0x108) << 1);
  *(int *)(s + 0x108) = 0;
  for (j = 0; j < (*(MeshData **)(s + 0xf4))->entryCount; j++) {
    dst = (unsigned short *)(*(int *)(*(int *)(s + 0xfc) + 4) + *(int *)(s + 0x108) * 2);
    for (i = 0; i < (*(MeshData **)(s + 0xf4))->entries[j].count; i++) {
      *dst = (*(MeshData **)(s + 0xf4))->entries[j].indices[i];
      dst++;
    }
    *(int *)(s + 0x108) += (*(MeshData **)(s + 0xf4))->entries[j].count;
  }
  q = func_0009C7A0(param_1, &D_001D6BFC, 0);
  if (q == 0)
    for (;;) ;
  func_00131990(&D_001D29C7);
  *(int *)(s + 0x100) = func_0011BF40((int)*q, 0);
  *(int *)(s + 0x104) = func_0011BDD0(*(int *)(s + 0x100), 0);
  func_00131990(&D_001D29C7);
  __imp__RtlLeaveCriticalSection(&D_003326AC);
  func_00110060(*(int *)(param_1 + 0x2c), buf);
  *(int *)(s + 0x118) = buf[14];
}

float func_00097180(void) {
    extern float D_001D27B8;
    return D_001D27B8;
}

void func_00097240(undefined4 param_1)
{
  extern undefined4 D_00307C78;
  extern undefined D_00307C18;
  if (D_00307C78 < 0xf) {
    *(undefined4 *)(((undefined *)&D_00307C18) + D_00307C78 * 4) = param_1;
    D_00307C78 = D_00307C78 + 1;
  }
  return;
}

void func_00097260(int param_1)
{
  int __stdcall func_0014CD60(int, int, int);
  int __stdcall func_0014D160(int);
  int __stdcall func_0014BD70(int, int);
  int __stdcall func_0014D9F0(int, int, int);
  extern undefined4 D_00159EE4;
  func_0014CD60((int)(0), (int)(*(undefined4 *)(param_1 + 0xf8)), (int)(0x10));
  func_0014D160((int)(0x42));
  func_0014BD70((int)(*(undefined4 *)(param_1 + 0xfc)), (int)(0));
  func_0014D9F0((int)(5), (int)((*(int *)(param_1 + 0x108) / 3) * 3), (int)(D_00159EE4));
  return;
}

void __stdcall func_000972C0(int start,int step,int count,void (*fn)(void)){int i=count-1;if(i>=0){int p=start;do{fn();p+=step;i--;}while(i>=0);}}

extern float D_00307C98,D_001D7230,D_001D27B0,D_00307C9C,D_001D333C,D_00307CA0,D_001D27B8,D_0032923C,D_00307CA4;
void __stdcall func_0014D2D0(int,int);
extern char D_00307C90;
extern char D_00307C84;
void func_00097690(void){unsigned int local[0x3c]={0};local[0x30]=0xc00;local[0x8]=0xc00;local[0x38]=0x842;local[0x3a]=0xffffff20;local[0x3b]=0xfffffff1;local[0x37]=0x11002;local[0x26]=0x1080209;local[0x31]=0xd00;local[0x27]=0x10a0d20;local[0x35]=0x2080;func_0014D2D0((int)local,(int)&D_00307C84);}

void func_00097740(void)
{
    extern int D_00307C94;
    extern int D_00307C58;
    extern int D_00307C78;
    extern char D_00307C5C;
    extern int D_00307C60;
    extern int *D_00307C7C;
    extern void *D_00307C8C;
    extern int D_00307C80;
    extern int D_00307C88;
    extern int D_00307C70;
    void func_00096EB0(void);
    int func_00110370(void *);
    void func_00096E30(int);
    void __fastcall func_000972F0(int);
    void func_00097600(void);
    int __stdcall func_0014E270(int, int, int, int, int, int, int);
    int __stdcall func_001649C8(int, int, int, int, int, int, void *, int, int);
    struct { int a; void *c; int d; void *e; int f; int g; int h; } s;
    if (D_00307C94 == 0) {
        s.f = 0;
        s.e = (void *)func_00096EB0;
        s.c = (void *)func_00097240;
        s.d = 0;
        D_00307C58 = func_00110370(&s);
        func_00096E30(0);
        D_00307C78 = 0;
        func_000972F0(0x100);
        func_00097600();
        func_00097690();
        D_00307C7C = (int *)func_0014E270(0x100, 0x100, 1, 1, 1, 6, 3);
        func_001649C8(0x100, 0x100, 1, 0, 0x3a, 0, &D_00307C5C, 0, 0);
        D_00307C60 = D_00307C7C[1];
        D_00307C8C = &D_00307C5C;
        D_00307C80 = 0;
        D_00307C88 = func_0014E270(0x100, 0x100, 1, 1, 1, 6, 3);
        D_00307C70 = func_0014E270(0x100, 0x100, 1, 1, 1, 6, 3);
    }
    D_00307C94++;
}

void func_00097840(void)
{
  extern undefined4 D_00307C94;
  int __stdcall func_0014DF80(int);
  extern undefined4 D_00307C88;
  extern undefined4 D_00307C70;
  extern undefined4 D_00307C80;
  extern undefined4 D_00307C8C;
  extern undefined4 D_00307C7C;
  extern undefined4 D_00307C74;
  int func_001103C0(...);
  extern undefined4 D_00307C58;
  D_00307C94 = D_00307C94 + -1;
  if (D_00307C94 == 0) {
    func_0014DF80((int)(D_00307C88));
    D_00307C88 = 0;
    func_0014DF80((int)(D_00307C70));
    D_00307C70 = 0;
    D_00307C80 = 0;
    D_00307C8C = 0;
    func_0014DF80((int)(D_00307C7C));
    D_00307C7C = 0;
    func_0014DF80((int)(D_00307C74));
    D_00307C74 = 0;
    func_001103C0(D_00307C58);
  }
  return;
}

void func_000978B0(void *a,float b,float c){extern float D_001D27B8;float *p=*(float**)((char*)a+0x2c);float x=b-p[70];if(c>D_001D27B8){p[68]=x;p[69]=(x-p[67])/c;return;}p[67]=x;p[68]=x;}

