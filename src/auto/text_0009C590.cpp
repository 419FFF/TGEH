/* 21 functions from 0x0009C590 to 0x0009D51A, found by Ghidra. */
#include "common.h"

int func_0009CAA0(int p,int q) { int func_0009C510(...),func_0009C590(...),func_0011B4F0(...); char x[512]; int *s; int i; func_0009C510(q,x,x+256); if(!p)p=func_0009C590(x); s=*(int **)(p+28); i=0; if((unsigned)s[3]>0) { do { if(!func_0011B4F0(*(int *)((char *)s[4]+i*52),x+268)) return (int)((char *)s[4]+i*52); ++i; } while((unsigned)i<(unsigned)s[3]); } return 0; }

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
  unsigned int offset = 0, i = 0;
  if (count > 0) {
    do {
      int name = *(int *)(*(int *)(object + 0x28) + offset + 0x40);
      if (func_0011B4F0(name, local2) == 0)
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

int func_0009CE20(char *param_1, int param_2) { int func_0011B530(...); int func_0013E600(...); extern char D_001D73E4; char *pc=param_1; int n; do { n=*pc++; } while(n); n=(int)pc-(int)(param_1+1); if(!param_2) return 0; if(func_0011B530(*(int *)(param_2+12),param_1,n)) return 0; return func_0013E600(*(int *)(param_2+12)+n,&D_001D73E4)==0; }

void func_0009D080(void){extern int D_00308158,D_003104B4,D_0030BFE0,D_0030C498;extern int D_0030C630[],D_0030BFE8[];extern int func_0009CE80(...),func_0011B990(...),func_00116FB0(...);int i;int *obj=(int*)D_00308158;for(i=D_003104B4-1;i>=0;i--)if(D_0030C630[i])func_0009CE80(D_0030C630[i]);func_0011B990(obj[6]);if(D_0030BFE0){func_00116FB0(D_0030BFE0);D_0030BFE0=0;}for(i=0;i<D_0030C498;i++)func_00116FB0(D_0030BFE8[i]);D_0030C498=0;D_003104B4=0;}

unsigned char func_0009D110(int a,int p){extern int func_0012F120(...),func_0009C7A0(...),func_0012FE20(...);extern float D_001D2BC0;extern char D_001D2BC4,D_001D2BD8;func_0012F120(p);float *v=(float*)func_0009C7A0(a,&D_001D2BC4,0);if(!v)return 0;func_0012FE20(p,v[0]*D_001D2BC0,v[1]*D_001D2BC0,v[2]*D_001D2BC0);int *w=(int*)func_0009C7A0(a,&D_001D2BD8,0);if(!w)return 0;*(int*)(p+0x30)=w[0];*(int*)(p+0x34)=w[1];*(int*)(p+0x38)=w[2];return 1;}

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

