/* 19 functions from 0x00127310 to 0x001280BC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

int _func_00116FB0(...);
int _func_0013AB30(...);
int _func_0013ADF0(...);
int _func_0011B4F0(...);
int _func_00116070(...);
int _func_00116A90(...);
extern int _D_00331AD0;

int _func_00127460(int p){int i;int *q;if(!p)return 0;for(i=0;i<(unsigned short)*(short*)(p+0x18);i++){int *r=(int*)(*(int*)(p+8)+i*0xc8);if(r[0x2f]){_func_0013AB30(r[0x2f]);_func_0013ADF0(r[0x2f]);r[0x2f]=0;}}q=(int*)(p+0x164);for(i=0;i<32;i++,q++){if(*q){_func_0013AB30(*q);_func_0013ADF0(*q);*q=0;}}*(short*)(p+0x1a)=0;return 1;}

int _func_00127A10(unsigned int n,void *src){int b=_func_00116070(_D_00331AD0,0x54);*(unsigned int*)(b+0x4c)=n;void *d=(void*)_func_00116A90(n,1,1);*(void**)(b+0x50)=d;memcpy(d,src,n);return b;}

void _func_00127A60(int *p){_func_00116FB0(p[20]);}

unsigned char func_00127A80(int param1, int param2)
{
  float func_001165C0(...);
  int func_00131460(float);
  unsigned int index = func_00131460(func_001165C0(param1));
  unsigned int count = *(unsigned int *)(param1 + 0x4c);
  if (index >= count) index = count - 1;
  *(unsigned short *)(param2 + 0xfc) = *(unsigned char *)(*(int *)(param1 + 0x50) + index);
  return 1;
}

void func_00127AC0(void)
{
  extern int D_00331AD4, D_00331AD0;
  int func_00127A80(...), func_00127A60(...), func_00115D60(...);
  if (D_00331AD4 == 0) {
    int local[6];
    local[1] = 0; local[3] = 0; local[4] = 0;
    local[2] = (int)func_00127A80;
    local[3] = 0x127a70;
    local[5] = (int)func_00127A60;
    D_00331AD0 = func_00115D60(local);
  }
  ++D_00331AD4;
}

unsigned int func_00127B10(unsigned char flags, unsigned int a2, int a3, unsigned int a4, int a5, unsigned int a6, int a7, unsigned int a8)
{
  unsigned int value;
  if (flags & 0x20) return 1;
  if (flags & 0x40) return 0;
  value = a2 | a4 | a6 | a8;
  if (value & 0xffff0000) return 4;
  return ((-(unsigned int)((value & 0xff00) != 0) & 8) + 8) >> 3;
}

unsigned int *func_00127B70(unsigned int a1, unsigned int a2, unsigned char flags, unsigned int a4, int a5, unsigned int a6, int a7, unsigned int a8, int a9, unsigned int a10)
{
  int func_00116A90(...);
  unsigned int *obj = (unsigned int *)func_00116A90(0x3c, 1, 1);
  unsigned int *src = (unsigned int *)&flags;
  for (int i=0; i<9; ++i) obj[i] = src[i];
  obj[11] = 1;
  obj[9] = a1;
  obj[10] = a2;
  unsigned int size;
  if (flags & 0x20) size = 8;
  else if (flags & 0x40) size = 4;
  else {
    unsigned int value = a4 | a6 | a8 | a10;
    size = (value & 0xffff0000) ? 0x20 : ((-(unsigned int)((value & 0xff00)!=0) & 8) + 8);
  }
  size *= a1;
  size *= a2;
  size >>= 3;
  if (obj[0] & 1) size >>= 3;
  if ((signed char)obj[0] < 0) size >>= 1;
  obj[12] = func_00116A90(size, 1, 1);
  return obj;
}

void func_00127C30(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x30) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x30));
  }
  func_00116FB0(param_1);
  return;
}

int _func_00127C50(unsigned int *p){unsigned int a,b,n;int r;if(!(*p&0x10000)){p[0xb]=1;return p[10]*p[9];}a=p[9];b=p[10];n=p[0xb];r=0;while(n){r+=a*b;a>>=1;b>>=1;--n;}return r;}

unsigned int _func_00127CA0(unsigned int *p){unsigned int flags=*p,a,b,n;unsigned int val;unsigned int t[9];int i; if(!(flags&0x10000)){val=p[10]*p[9];p[0xb]=1;}else{a=p[9];b=p[10];n=p[0xb];val=0;while(n){val+=a*b;a>>=1;b>>=1;--n;}}for(i=0;i<9;i++)t[i]=p[i];if(t[0]&0x20)i=8;else if(t[0]&0x40)i=4;else{unsigned int x=t[1]|t[3]|t[5]|t[6];if(x&0xffff0000)i=32;else i=((x&0xff00)?0:8)+8;}val*=i;val>>=3;if(flags&1)return val>>3;if((signed char)flags<0)return val>>1;return val;}

void _func_00127FF0(unsigned short *p)
{
 int i;
 for(i=0;i<4;i++) {
  unsigned int value=*(unsigned int *)(p+4);
  p[4]=0;
  if(value&1) continue;
  while(value && !(value&1)) { ++p[4]; value >>=1; }
  p[5]=8;
  if(value) {
   unsigned int x=value;
   unsigned short n=8;
   while(x) { x>>=1; n+=0x3e38; }
   p[5]=n;
  }
  p+=4;
 }
}

void _func_00128050(int *out, int a, int b, int c, int d, int e)
{
 int _func_00127FF0(...);
 int local[9];
 local[0]=a; local[1]=b; local[2]=c; local[3]=d; local[4]=e;
 _func_00127FF0(local);
 for(int i=0;i<9;i++) out[i]=local[i];
}

void func_001280B0(int a0, int a1) {
    int func_00133BB0(...);
    func_00133BB0(a1);
}
