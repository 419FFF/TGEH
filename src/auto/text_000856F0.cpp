/* 19 functions from 0x000856F0 to 0x000863DB, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
static undefined4 D_002FDDA0;
extern int D_002FDDB0,D_002FDDB4,D_002FDD9C,D_002FDD98,D_002FDDAC,D_0030809C;
extern unsigned int D_001E4618;
extern float D_001D27B8,D_001D290C,D_001D27B0,D_001D65B0,D_001D27EC,D_001D2808,D_001D27D4;
struct S856F0 { int unk0; float *a; int unk8; int *b; int unk10; int *c; int unk18; int *d; int unk20; int *e; };

void func_000856F0(struct S856F0 **pp, int h)
{
  extern float D_001D27B0, D_001D2B64;
  S856F0 *func_0011CD40(int,int,int,int,int);
  float func_00131760(void);
  float func_0012EA60(float *);
  int func_0011CDF0(int);
  int func_0011CE10(int,int);
  int func_0011CE20(int,int);
  int func_0011CE30(int,int,int);
  int func_0011CE50(int,int,int,int,int);
  int func_0011CF30(int,int,int);
  int func_0011CFC0(int,int);
  unsigned int i;
  float *v;
  *pp = func_0011CD40(10, 1, 1, 1, 1);
  for (i = 0; i < 10; i++) {
    (*pp)->a[i * 3] = func_00131760() * 2 - D_001D27B0;
    ((int*)(*pp)->a)[i * 3 + 1] = 0;
    (*pp)->a[i * 3 + 2] = func_00131760() * 2 - D_001D27B0;
    v = &(*pp)->a[i * 3];
    func_0012EA60(v);
    v = &(*pp)->a[i * 3];
    *v = func_00131760() * *v * D_001D2B64;
    v = &(*pp)->a[i * 3 + 2];
    *v = func_00131760() * *v * D_001D2B64;
  }
  (*pp)->b[0] = 0;
  (*pp)->b[1] = 0x3f800000;
  (*pp)->b[2] = 0;
  (*pp)->c[0] = 0x3e4ccccd;
  (*pp)->c[1] = 0x3e4ccccd;
  (*pp)->c[2] = 0x3e4ccccd;
  (*pp)->c[3] = 0x3f800000;
  (*pp)->d[0] = 0x3f000000;
  (*pp)->d[1] = 0x3f000000;
  (*pp)->e[0] = 0;
  (*pp)->e[1] = 0;
  (*pp)->e[2] = 0x3f800000;
  (*pp)->e[3] = 0x3f800000;
  func_0011CDF0(h);
  func_0011CE10(h, 0);
  func_0011CE20(h, 0);
  func_0011CE30(h, 0x41700000, 0x41c80000);
  func_0011CE50(h, 0xbd4ccccd, 0xbd4ccccd, 0xbd4ccccd, 0xbf000000);
  func_0011CF30(h, 0x40600000, 0x40c00000);
  func_0011CFC0(h, 0x41200000);
}

void func_00085870(undefined4 param_1, int param_2)
{
  int func_0011DED0(...);
  *(undefined4 *)(param_2 + 0x11c) = 4;
  *(undefined4 *)(param_2 + 0x120) = 5;
  *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) & 0xfffffffd;
  func_0011DED0(param_1);
  return;
}

void _func_000858B0(void)
{
  extern int D_001D6B9C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000856F0(...);
  int _func_00085870(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6B9C, _func_000856F0);
  _func_0011D270(&D_001D6B9C, _func_00085870);
  _func_0011D290(&D_001D6B9C, _func_00085E20);
  _func_0011D2B0(&D_001D6B9C, _func_000688D0);
}

void func_000858F0(void) {
    extern int D_001D6B9C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6B9C);
}

void func_00085E20(void) {
    int func_0011DEF0(...);
    func_0011DEF0();
}

void _func_00085E30(void)
{
  extern int _D_001D6BA8;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00085900(...);
  int _func_00078730(...);
  int _func_00085E20(...);
  int _func_00085BF0(...);
  _func_0011D000(&_D_001D6BA8, _func_00085900);
  _func_0011D270(&_D_001D6BA8, _func_00078730);
  _func_0011D290(&_D_001D6BA8, _func_00085E20);
  _func_0011D2B0(&_D_001D6BA8, _func_00085BF0);
}

void func_00085E70(void) {
    extern int D_001D6BA8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6BA8);
}

extern "C" char *strcpy(char *, const char *);
extern "C" void *memset(void *, int, unsigned int);
void func_00085E80(void)
{
    extern char D_001D6BB4;
    extern int D_001D6BA8;
    extern int D_002FDDA4, D_002FDD9C, D_002FDD98, D_0030809C;
    int func_0011E840(...);
    int func_0011DD60(...);
    int func_0011E830(...);
    int func_0011DEF0(...);
    int func_00110480(...);
    __declspec(align(8)) int s[0x3d];
    memset(s, 0, sizeof(s));
    s[0x2e] = 1;
    s[0x2f] = 1;
    s[0x24] = 2;
    s[0x25] = 0;
    s[0x2a] = 3;
    s[0x36] = 0;
    s[0x37] = 0;
    s[0x3c] = 10;
    s[0x39] = 0x1e;
    strcpy((char *)s, "sprites/trail_grey.tga");
    s[0x3b] = 0x58;
    D_002FDDA0 = func_0011E840(&D_001D6BB4, s);
    D_002FDDA4 = func_0011DD60(&D_001D6BA8, 0x1e, D_002FDDA0, *(int *)(D_002FDDA0 + 0x14c));
    func_0011E830(D_002FDDA0, D_002FDDA4);
    func_0011DEF0(D_002FDDA4);
    func_00110480(D_0030809C, D_002FDDA0, 8);
    D_002FDD9C = 0;
    D_002FDD98 = 0;
}

void func_00085F80(void)
{
  int func_001160B0(...);
  extern undefined4 D_002FDDA4;
  int func_00110760(...);
  extern undefined4 D_002FDDA0;
  func_001160B0(D_002FDDA4);
  func_00110760(D_002FDDA0);
  return;
}

void func_00085FA0(int param_1, int param_2, int param_3)
{
  int func_0012F120(...);
  int func_00110420(...);
  int func_001105E0(...);
  int func_00110000(...);
  int func_000F8F40(...);
  int func_00110480(...);
  int func_0011CFC0(...);
  int func_0011DED0(...);
  extern int D_002FDDA8, D_002FDDAC, D_002FDDB0, D_002FDDB4, D_002FDDA4, D_002FDD9C, D_002FDD98;
  int iVar1;
  int iVar2;
  __declspec(align(16)) char local[64];
  iVar1 = D_002FDDA4;
  if (D_002FDD98 != 0) {
    if (D_002FDD9C != 0) {
      func_0011CFC0(D_002FDDA4 + 0x54, 0x42480000);
      D_002FDD9C = 0;
      *(int *)(iVar1 + 0x178) = 0;
      return;
    }
    return;
  }
  func_0012F120(local);
  if (*(int **)(D_002FDDA0 + 0x2c) != 0) {
    func_00110420(D_002FDDA0, **(int **)(D_002FDDA0 + 0x2c));
  }
  func_001105E0(D_002FDDA0, local, 0);
  func_00110000(D_002FDDA0);
  iVar2 = func_000F8F40(*(int *)(param_1 + 0x2c));
  func_00110480(*(int *)(iVar2 + 0xe0), D_002FDDA0, 8);
  D_002FDDA8 = param_1;
  D_002FDDAC = iVar2;
  D_002FDDB0 = param_2;
  D_002FDDB4 = param_3;
  func_0011CFC0(iVar1 + 0x54, 0x42480000);
  D_002FDD9C = 0;
  func_0011DED0(D_002FDDA4);
  D_002FDD98 = 1;
}

void func_000860B0(void) { extern int D_002FDD9C,D_002FDD98,D_002FDDA4; int func_0011CFC0(...); if(D_002FDD9C==0 && D_002FDD98!=0){ D_002FDD9C=10; func_0011CFC0(D_002FDDA4+0x54,0x3a83126f); } }

void func_000860F0(int p) { extern int D_002FDDBC; int func_00116FB0(...),func_000968D0(...),func_0011B990(...); int x=*(int*)(p+0x108); D_002FDDBC=p; if(x){func_00116FB0(x);p=D_002FDDBC;*(int*)(p+0x108)=0;} x=*(int*)(p+0x10c); if(x){func_00116FB0(x);p=D_002FDDBC;*(int*)(p+0x10c)=0;} func_000968D0(*(int*)(p+0xf8)); int base=D_002FDDBC; x=*(int*)(base+0x110); if(x){*(short*)(x+0x2a)=*(short*)(x+0x2a)-1; x=*(int*)(base+0x110); func_0011B990(x); *(int*)(D_002FDDBC+0x110)=0;} }

void func_00086180(void)
{
  extern undefined4 D_002FDDC0;
  int func_001103C0(...);
  extern undefined4 D_002FDDB8;
  D_002FDDC0 = D_002FDDC0 + -1;
  if (D_002FDDC0 == 0) {
    func_001103C0(D_002FDDB8);
  }
  return;
}

void func_000861A0(void) { extern int D_002FDDBC; extern float D_001D333C; int func_00116A90(...); int ecx=D_002FDDBC; int *esi=(int*)(ecx+0x10c); int eax=*(int*)(ecx+0xf8); int count=*(int*)(eax+0xc); *esi=func_00116A90(count<<3,1,0); ecx=D_002FDDBC; int edx=*(int*)(ecx+0xf8); int edi=*(int*)(edx+0xc); int eax2=0; if(edi>0){ int off=0; do { edx=*(int*)(ecx+0xf8); float *src=(float*)(*(int*)(edx+0x14)+off); float *dst=(float*)*esi; dst[eax2*2]=src[0]*D_001D333C; eax2++; off+=0xc; edx=*(int*)(ecx+0xf8); src=(float*)(*(int*)(edx+0x14)+off-4); dst=(float*)*esi; dst[eax2*2-1]=*src*D_001D333C; } while(eax2<*(int*)(*(int*)(ecx+0xf8)+0xc)); } }

void func_00086230(int a,int p) { extern int D_002FDDB8; int func_0010F750(...); int r=func_0010F750(*(int*)(p+0xc),D_002FDDB8,0x120); *(int*)(r+0xf4)=p; *(int*)(r+0xe0)=1; *(int*)(r+0xe4)=0; *(int*)(r+0xe8)=1; *(int*)(r+0xec)=0; *(int*)(r+0xf0)=0; }

void func_00086280(int a,int p) { extern int D_002FDDB8; int func_0010F750(...); int r=func_0010F750(*(int*)(p+0xc),D_002FDDB8,0x120); *(int*)(r+0xf4)=p; *(int*)(r+0xe0)=1; *(int*)(r+0xe4)=0; *(int*)(r+0xe8)=0; *(int*)(r+0xec)=1; *(int*)(r+0xf0)=0; }

void func_000862D0(void)
{
  extern float D_001E3F94, D_001D27B8, D_0032923C, D_002FDDC4, D_001D31C8, D_001D54D4, D_002FDDC8, D_001D29E0, D_001D27B0, D_001D2868, D_002FDDD0, D_001D2BB4, D_002FDDD4;
  extern int D_002FDDCC;
  int func_001313C0(float);
  long double func_00131230(float);
  long double func_00131250(float);
  float fVar2;
  if (D_001E3F94 < (long double)D_001D27B8) {
    fVar2 = 0.0f;
  } else {
    fVar2 = (long double)D_0032923C - D_001E3F94;
    D_002FDDC4 = (long double)fVar2 * D_001D31C8 + D_002FDDC4;
    if (D_001D54D4 <= (long double)D_002FDDC4) {
      D_002FDDC4 = (long double)D_002FDDC4 - D_001D54D4;
    }
  }
  D_001E3F94 = D_0032923C;
  D_002FDDCC = func_001313C0(D_002FDDC4);
  D_002FDDC8 = (long double)fVar2 * D_001D29E0 + D_002FDDC8;
  if (D_001D27B0 < (long double)D_002FDDC8) {
    D_002FDDC8 = (long double)D_002FDDC8 - D_001D27B0;
  }
  fVar2 = D_002FDDC8;
  D_002FDDD0 = func_00131230((long double)D_002FDDC8 * D_001D2868) * D_001D2BB4;
  D_002FDDD4 = func_00131250((long double)fVar2 * D_001D2868) * D_001D2BB4;
}

