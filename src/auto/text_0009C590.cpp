/* 21 functions from 0x0009C590 to 0x0009D51A, found by Ghidra. */
#include "common.h"

int func_0009CAA0(int p,int q) { int func_0009C510(...),func_0009C590(...),func_0011B4F0(...); char x[512]; int *s; int i,c; func_0009C510(q,x,x+256); if(!p)p=func_0009C590(x); s=*(int **)(p+28); c=s[3]; i=0; if(c) do {if(!func_0011B4F0(*(int *)((char *)s[4]+i*52),x+268))return (int)((char *)s[4]+i*52); ++i;}while(i<(unsigned)c); return 0; }

int func_0009CB40(int a,int b) { int func_0009C510(...),func_0009C590(...),func_0011B4F0(...); char buf[512]; int p=a,i; int *t; func_0009C510(b,buf+16,buf+272); if(!p)p=func_0009C590(buf+16); t=*(int **)(p+28); for(i=0;i<t[5];i++) if(func_0011B4F0(*(int *)((char *)t[6]+i*52),buf+272)==0) return *(int *)(p+40)+i*64; return 0; }

void func_0009CBE0(void) {
    int func_0009C590(...);
    func_0009C590();
}

int func_0009CBF0(int p,int q) { int func_0009C510(...),func_0009C590(...),func_0011B4F0(...); char x[512]; int *s; int i,c; func_0009C510(q,x,x+256); if(!p)p=func_0009C590(x); s=*(int **)(p+28); c=s[7]; i=0; if(c) do {if(!func_0011B4F0(*(int *)((char *)s[8]+i*16),x+268))return (int)((char *)s[8]+i*16); ++i;}while(i<(unsigned)c); return 0; }

int func_0009CC90(int param1, int param2)
{
  extern int D_00308158;
  int func_0009C510(...), func_0009C590(...), func_0011B4F0(...);
  char local[0x100];
  char local2[0x100];
  func_0009C510(param2, local, local2);
  if (param1 == 0 || (param1 == D_00308158 && local[0] != 0))
    param1 = func_0009C590(local);
  int object = *(int *)(param1 + 0x1c);
  unsigned int count = *(unsigned int *)(object + 0x24);
  unsigned int offset = 0;
  unsigned int i = 0;
  if (count == 0) return 0;
  do {
    int name = *(int *)(*(int *)(object + 0x28) + offset + 0x40);
    if (func_0011B4F0(name, local2) == 0)
      return i * 0x70 + *(int *)(object + 0x28);
    ++i;
    offset += 0x70;
    count = *(unsigned int *)(object + 0x24);
  } while (i < count);
  return 0;
}

int func_0009CD40(int param1, int param2)
{
  int func_0009C510(...), func_0009C590(...), func_0011B4F0(...);
  char local[0x100];
  char local2[0x100];
  func_0009C510(param2, local, local2);
  if (param1 == 0) param1 = func_0009C590(local);
  int object = *(int *)(param1 + 0x1c);
  int count = *(int *)(object + 0x24);
  int i = 0, offset = 0;
  while (i < count) {
    int name = *(int *)(*(int *)(object + 0x28) + offset + 0x40);
    if (func_0011B4F0(name, local2) == 0)
      return i * 0x70 + *(int *)(object + 0x28);
    ++i;
    offset += 0x70;
  }
  return 0;
}

void func_0009CDE0(int self)
{
  int func_00110760(...);
  int node = *(int *)(self + 0x28);
  while (node != 0) {
    if ((*(unsigned char *)(node + 6) & 8) == 0) {
      func_0009CDE0(*(int *)node);
      break;
    }
    node = *(int *)(node + 0xc);
  }
  func_00110760(self);
}

void func_0009D280(unsigned char *p){extern void func_0009D1A0(...); unsigned short v=*(unsigned short*)(p+0x10); if(v&2){v&=0xfffd;*(unsigned short*)(p+0x10)=v;if(!(v&4))func_0009D1A0(p);}}

void func_0009D3E0(int p)
{
  int func_0009D2B0(...);
  unsigned short flags = *(unsigned short *)(p + 0x10);
  if ((flags & 2) == 0) {
    flags |= 2;
    *(unsigned short *)(p + 0x10) = flags;
    func_0009D2B0(p);
  }
}

void func_0009D500(int p) { int func_0009D400(...); if (!(*(unsigned char *)(p+16)&64)) { func_0009D400(p); *(unsigned char *)(p+16)=(unsigned char)(*(unsigned char *)(p+16)|64); } }

