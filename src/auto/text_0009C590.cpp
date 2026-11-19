/* 21 functions from 0x0009C590 to 0x0009D51A, found by Ghidra. */
#include "common.h"
#include <string.h>

extern char D_0030C178[];
int _func_0009C590(char *name)
{
  extern int D_00307DF8;
  extern unsigned int D_003104B4;
  extern int D_00308160[];
  extern char D_001D73F0[], D_001D73E8[];
  int func_0011B4F0(...), func_0011B530(...), func_0013F2E9(...);
  char buf[256];
  char *key = name;
  int n;
  unsigned int idx;
  int r;
  if (func_0011B4F0(name, D_001D73F0) == 0) return D_00307DF8;
  if (func_0011B530(name, D_001D73E8, 7) == 0) {
    strcpy(buf, *(char **)(D_00307DF8 + 0xc));
    strcat(buf, name + 6);
    key = buf;
  }
  n = 0x800;
  if (D_003104B4 > 0x1000) n = 0x1000;
  idx = n - 1;
  while (n > 0) {
    if (idx >= D_003104B4) r = -1;
    else {
      r = func_0013F2E9(key, *(int *)(D_00308160[idx] + 0xc));
      if (r == 0) return D_00308160[idx];
    }
    n >>= 1;
    if (r < 0) idx -= n; else idx += n;
  }
  return 0;
}

char *_func_0009C7A0(int p, int q)
{
  int func_0009C510(...), func_0009C590(...), func_0011B4F0(...);
  char x[512];
  int *s;
  int n;
  unsigned int i;
  int off;
  func_0009C510(q, x, x + 256);
  if (!p) p = func_0009C590(x);
  s = *(int **)(p + 0x1c);
  n = 0;
  i = 0;
  if (i < *(unsigned short *)((char *)s + 4)) {
    off = 0;
    do {
      if (!func_0011B4F0(*(int *)(((char *)s[2]) + off), x + 256)) {
        short t = *(short *)(((char *)s[2]) + off + 4);
        if (t == 2) return (char *)(n * 0x10 + *(int *)(p + 0x24));
        if (t == 1) return (char *)(s[2] + 8 + i * 0x18);
        if (t == 3) return D_0030C178 + i * 0x10;
      }
      if (*(short *)(((char *)s[2]) + off + 4) == 2) n++;
      i++;
      off += 0x18;
    } while (i < *(unsigned short *)((char *)s + 4));
  }
  return 0;
}

int func_0009CAA0(int p,int q) { int func_0009C510(...),func_0009C590(...),func_0011B4F0(...); char x[512]; int *s; int i; func_0009C510(q,x,x+256); if(!p)p=func_0009C590(x); s=*(int **)(p+28); i=0; if((unsigned)s[3]>0) { do { if(!func_0011B4F0(*(int *)((char *)s[4]+i*52),x+256)) return (int)((char *)s[4]+i*52); ++i; } while((unsigned)i<(unsigned)s[3]); } return 0; }

int func_0009CB40(int a,int b) { int func_0009C510(...),func_0009C590(...),func_0011B4F0(...); char buf[512]; int p=a,i; int *t; func_0009C510(b,buf+16,buf+272); if(!p)p=func_0009C590(buf+16); t=*(int **)(p+28); for(i=0;i<t[5];i++) if(func_0011B4F0(*(int *)((char *)t[6]+i*52),buf+272)==0) return *(int *)(p+40)+i*64; return 0; }

void func_0009CBE0(void) {
    int func_0009C590(...);
    func_0009C590();
}

int func_0009CBF0(int p,int q) { int func_0009C510(...),func_0009C590(...),func_0011B4F0(...); char x[512]; int *s; int i; func_0009C510(q,x,x+256); if(!p)p=func_0009C590(x); s=*(int **)(p+28); i=0; if((unsigned)s[7]>0) { do {if(!func_0011B4F0(*(int *)((char *)s[8]+i*16),x+256))return (int)((char *)s[8]+i*16); ++i;}while((unsigned)i<(unsigned)s[7]); } return 0; }

int func_0009CC90(int param1, int param2)
{
  extern int D_00308158;
  int func_0009C510(...), func_0009C590(...), func_0011B4F0(...);
  char local[0x100], local2[0x100];
  func_0009C510(param2, local, local2);
  if (param1 == 0 || (param1 == D_00308158 && local[0] != 0))
    param1 = func_0009C590(local);
  int object = *(int *)(param1 + 0x1c);
  unsigned int count = *(unsigned int *)(object + 0x24);
  unsigned int offset;
  unsigned int i;
  i = 0;
  if (count > 0) {
    offset = 0;
    do {
      if (func_0011B4F0(*(int *)(*(int *)(object + 0x28) + offset + 0x40), local2) == 0)
        return i * 0x70 + *(int *)(object + 0x28);
      ++i;
      offset += 0x70;
      count = *(unsigned int *)(object + 0x24);
    } while (i < count);
  }
  return 0;
}

int func_0009CD40(int param1, int param2)
{
  int func_0009C510(...), func_0009C590(...), func_0011B4F0(...);
  char local[0x100], local2[0x100];
  func_0009C510(param2, local, local2);
  if (param1 == 0) param1 = func_0009C590(local);
  int object = *(int *)(param1 + 0x1c);
  unsigned int count = *(unsigned int *)(object + 0x24);
  unsigned int offset;
  unsigned int i;
  i = 0;
  if (count > 0) {
    offset = 0;
    do {
      if (func_0011B4F0(*(int *)(*(int *)(object + 0x28) + offset + 0x40), local2) == 0)
        return i * 0x70 + *(int *)(object + 0x28);
      ++i;
      offset += 0x70;
      count = *(unsigned int *)(object + 0x24);
    } while (i < count);
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

int func_0009CE20(char *str, int obj)
{
  // Function body based on previous best attempt structure
  int func_0011B530(...), func_0013E600(...); 
  extern char D_001D73E4; // Assuming this is correctly declared globally
  char *p = str;
  char *start = p + 1;
  char c = '\0';
  int n = 0;

  // Calculate string length 'n'
  do {
    c = *p;
    ++p;
  } while (c != '\0');
  n = (int)p - (int)start;

  if (obj != 0) { // Check for non-zero object pointer, matching the assembly test edi, edi
    // Call func_0011B530
    if (!func_0011B530(*(int *)(obj + 0xc), str, n)) {
      // Return result of func_0013E600 if the first call failed
      return (func_0013E600(*(int *)(obj + 0xc) + n, &D_001D73E4) == 0);
    }
  }
  return 0;
}

void func_0009D080(void){extern int D_00308158,D_003104B4,D_0030BFE0,D_0030C498;extern int D_0030C630[],D_0030BFE8[];extern int func_0009CE80(...),func_0011B990(...),func_00116FB0(...);int i;int base=D_00308158;int obj=*(int*)(base+0x18);i=D_003104B4;--i;if(i<0)goto done1;do{int x=D_0030C630[i];if(x)func_0009CE80(x);}while(--i>=0);done1:func_0011B990(obj);if(D_0030BFE0){func_00116FB0(D_0030BFE0);D_0030BFE0=0;}unsigned i2=0;if((unsigned)D_0030C498>0)do{func_00116FB0(D_0030BFE8[i2]);}while(++i2<(unsigned)D_0030C498);D_0030C498=0;D_003104B4=0;}

unsigned char func_0009D110(int a,int p){extern int func_0012F120(...),func_0009C7A0(...);extern void func_0012FE20(int,float,float,float);extern float D_001D2BC0;extern char D_001D2BC4,D_001D2BD8;func_0012F120(p);float*v=(float*)func_0009C7A0(a,&D_001D2BC4,0);if(!v)return 0;float z=(float)((long double)v[2]*(long double)D_001D2BC0);float y=(float)((long double)v[1]*(long double)D_001D2BC0);float x=(float)((long double)v[0]*(long double)D_001D2BC0);func_0012FE20(p,x,y,z);int*w=(int*)func_0009C7A0(a,&D_001D2BD8,0);if(!w)return 0;*(int*)(p+0x30)=w[0];*(int*)(p+0x34)=w[1];*(int*)(p+0x38)=w[2];return 1;}

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

extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);
void func_0009D400(int p)
{
  extern unsigned int D_003104B4;
  extern int D_0030C630[];
  int func_0011B530(...), func_0013E600(...);
  char buf[256];
  unsigned int i;
  strcpy(buf, *(char **)(p + 0xc));
  strcat(buf, ".");
  for (i = *(unsigned short *)(p + 0x54) + 1; i < D_003104B4; i++) {
    int e = D_0030C630[i];
    if (e) {
      int n = strlen(buf);
      if (!func_0011B530(*(int *)(e + 0xc), buf, n) && !func_0013E600(*(int *)(e + 0xc) + n, ".")) {
        func_0009D400(D_0030C630[i]);
        *(unsigned short *)(D_0030C630[i] + 0x10) |= 0x40;
      } else if (func_0011B530(*(int *)(D_0030C630[i] + 0xc), buf, strlen(buf))) {
        return;
      }
    }
  }
}

void func_0009D500(int p) { int func_0009D400(...); if (!(*(unsigned char *)(p+16)&64)) { func_0009D400(p); *(unsigned char *)(p+16)=(unsigned char)(*(unsigned char *)(p+16)|64); } }

