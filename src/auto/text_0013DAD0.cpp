/* 16 functions from 0x0013DAD0 to 0x0013E3F2, found by Ghidra. */
#include "common.h"

void __fastcall func_0013DAD0(int idx, int type, char *dst)
{
  extern char *D_001E8B2C[], *D_001E8B1C[], *D_001E8B4C[], *D_001E8B5C[], *D_001E8B3C[];
  char *src;
  unsigned int n;
  unsigned int i;
  switch (type) {
  case 1: src = D_001E8B2C[idx]; break;
  case 2: src = D_001E8B1C[idx]; break;
  case 3: src = D_001E8B4C[idx]; break;
  case 4: src = D_001E8B5C[idx]; break;
  case 5: src = D_001E8B3C[idx]; break;
  default: return;
  }
  n = 0;
  while (src[n]) n++;
  n++;
  dst--;
  while (dst[1]) dst++;
  for (i = 0; i < n; i++) dst[i] = src[i];
}

int func_0013DCE0(unsigned int a, unsigned int *p, unsigned int n) { if(n<p[1]) { unsigned char *s=(unsigned char*)p[n+2]; if(s) { switch(*(unsigned int*)(s+4)) { case 0: return (*s=='\0')+1; case 1: case 4: return 4; case 2: case 6: return 5; case 3: case 5: return 3; } } return 1; } return (-(unsigned int)((1u<<(n&31)&*p)!=0)&2)-1; }

void func_0013DD50(void) { int func_0013DAD0(...); int n=0; while(n<12){func_0013DAD0(); n=n+3;} }

void func_0013DD90(unsigned int flags,int unused,char *dst) { extern char *D_001E8B18,*D_001E8B0C; unsigned int k=(flags>>2)&3; char *src; unsigned int n; if(k==1)src=D_001E8B18;else if(k==2)src=D_001E8B0C;else return; n=0;while(src[n])n++; dst--;while(dst[1])dst++; for(unsigned int i=0;i<n;i++)dst[i]=src[i]; }

int _func_0013DE00(void) { return 0; }

int _func_0013DEC0(unsigned int n) { int v=func_0013DCE0(0,0,0)-1; switch(v){case 0:return 1u << (n*3+4);case 1:return 2u << (n*3+4);case 2:return 3u << (n*3+4);case 3:return 4u << (n*3+4);case 4:return 5u << (n*3+4);default:return 0u << (n*3+4);} }

unsigned short _func_0013DF30(void) { return 0; }

int __fastcall func_0013DFD0(int unused, unsigned char f)
{
  extern unsigned int D_0037A9D8[];
  int n;
  unsigned int k = 1;
  D_0037A9D8[0] = 0x20000000;
  D_0037A9D8[1] = 0x40320000;
  n = 2;
  if (f & 1) {
    D_0037A9D8[2] = 0x20000001; D_0037A9D8[3] = 0x40320001;
    D_0037A9D8[4] = 0x20000002; D_0037A9D8[5] = 0x40320005;
    D_0037A9D8[6] = 0x20000003; D_0037A9D8[7] = 0x40320006;
    n = 8; k = 4;
  }
  if (f & 2) { D_0037A9D8[n++] = k | 0x20000000; D_0037A9D8[n++] = 0x40220009; k++; }
  if (f & 4) { D_0037A9D8[n++] = k | 0x20000000; D_0037A9D8[n++] = 0x4022000a; k++; }
  if (f & 8) { D_0037A9D8[n++] = k | 0x20000000; D_0037A9D8[n++] = 0x4022000b; k++; }
  if (f & 0x10) { D_0037A9D8[n++] = k | 0x20000000; D_0037A9D8[n++] = 0x4022000c; k++; }
  if (f & 0x20) { D_0037A9D8[n++] = k | 0x20000000; D_0037A9D8[n++] = 0x40160002; k++; }
  if (f & 0x40) { D_0037A9D8[n++] = k | 0x20000000; D_0037A9D8[n++] = 0x40400003; k++; }
  if (f & 0x80) { D_0037A9D8[n++] = k | 0x20000000; D_0037A9D8[n++] = 0x4040000d; D_0037A9D8[n++] = 0x4045000e; }
  D_0037A9D8[n++] = 0xffffffff;
  return n;
}

void *memcpy(void *, const void *, unsigned int);
int func_0013E140(unsigned int param_1, unsigned char param_2)
{
  int func_0013DFD0(...);
  int func_00116A90(...);
  extern char D_0037A9D8[];
  extern char D_003351D8[];
  extern int D_003781D8[];
  extern int D_0037A5D8[];
  extern int D_003381D8[];
  extern int D_0037B9D8;
  int func_0013DE00(...);
  int __stdcall func_0015CBDC(int);
  int __stdcall func_0014C9F0(int, int, int, int);
  int uVar1;
  unsigned int n;
  int *buf;
  int *ent;
  unsigned int h;
  int idx;

  h = (unsigned char)((unsigned char)(param_1 >> 8) ^ (unsigned char)param_1 ^ param_2);
  for (ent = (int *)D_003781D8[h]; ent != 0; ent = (int *)*ent) {
    if (*(short *)(ent + 1) == (short)param_1 && *(unsigned char *)((int)ent + 6) == param_2)
      return ent[2];
  }
  if (D_0037A5D8[param_2] == 0) {
    n = func_0013DFD0();
    buf = (int *)func_00116A90(n * 4, 1, 0);
    memcpy(buf, D_0037A9D8, n * 4);
    D_0037A5D8[param_2] = (int)buf;
  }
  uVar1 = D_0037A5D8[param_2];
  idx = D_0037B9D8 * 12;
  ent = (int *)D_003781D8[h];
  D_0037B9D8++;
  *(short *)(D_003351D8 + idx + 4) = (short)param_1;
  *(unsigned char *)(D_003351D8 + idx + 6) = param_2;
  *(int *)(D_003351D8 + idx) = (int)ent;
  D_003781D8[h] = (int)(D_003351D8 + idx);
  if ((param_1 & 3) != 0) {
    unsigned int k = param_1 & 0xffff;
    if (D_003381D8[k] == 0)
      D_003381D8[k] = func_0013DE00(param_1);
    if (D_003381D8[k] != 0) {
      int fl = 0;
      if (param_2 & 0x40) fl = 0x400;
      func_0014C9F0(uVar1, func_0015CBDC(D_003381D8[k]), (int)(D_003351D8 + idx + 8), fl);
      return *(int *)(D_003351D8 + idx + 8);
    }
  }
  func_0014C9F0(uVar1, 0, (int)(D_003351D8 + idx + 8), 0);
  return *(int *)(D_003351D8 + idx + 8);
}

unsigned char func_0013E270(unsigned int *a0) { return ((*a0 & 0x60000) == 0); }

void func_0013E290(unsigned int *param_1)
{
  int func_0013DF30(...);
  int func_0013E140(...);
  unsigned int flags;
  unsigned char result;

  func_0013DF30();
  flags = *param_1;
  result = 0;
  if ((flags & 0x40000) != 0) {
    result = 1;
    if ((flags & 1) != 0) result |= 2;
    if ((flags & 2) != 0) result |= 4;
    if ((flags & 4) != 0) result |= 8;
    if ((flags & 8) != 0) result |= 0x10;
    if ((flags & 0x10) != 0) result |= 0x20;
    if ((flags & 0x100000) != 0) result |= 0x40;
    if ((flags & 0x20000) != 0) result |= 0x80;
  }
  func_0013E140(result);
}

void func_0013E310(void)
{
  extern unsigned int D_003781D8[256], D_0037B9D8, D_0037A5D8[256], D_003381D8[256];
  int func_00116FB0(...); void __stdcall func_0014D050(unsigned int); void __stdcall func_0016072D(unsigned int);
  unsigned int i; unsigned int *node;
  for(i=0;i<256;i++) D_003781D8[i]=0;
  D_0037B9D8=0;
  for(i=0;i<256;i++) { if(D_0037A5D8[i]) func_00116FB0(D_0037A5D8[i]); D_0037A5D8[i]=0; }
  for(i=0;i<256;i++) for(node=(unsigned int*)D_003781D8[i];node;node=(unsigned int*)node[0]) func_0014D050(node[2]);
  for(i=0;i<256;i++) { if(D_003381D8[i]) func_0016072D(D_003381D8[i]); D_003381D8[i]=0; }
}

void func_0013E3A5(void) {
}

 void _func_0013E3A6(void){}

void func_0013E3A6(void);
void func_00140629(void);
void func_0013E3DE(int x) { func_0013E3A6(); if (!x) return; func_00140629(); }
extern unsigned int D_002E8C10, D_002E8C14, D_002E8C18, D_002E8C1C, D_002E8C20, D_002E8C24;
extern unsigned int D_001E8AA8, D_001E8B14;
extern char D_003785D8[], D_001E1A98[];
extern int func_001405D8();
extern int func_0013DCE0();
extern int func_00138480();
extern void func_0013DBF0();
extern void func_0013DD50(char *);
extern void func_0013DD90();
extern int __stdcall func_00164770(char *, char *, int, int, int, void *, int, int, int, int, int);
