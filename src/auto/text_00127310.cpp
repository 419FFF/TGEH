/* 19 functions from 0x00127310 to 0x001280BC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

struct S127310 { int *p0; char *p4; int p8; int pc; int u10; int u14; short s18; short s1a; int u1c; int n20; short s24; unsigned char b26; };
union PixelWord127D60 { unsigned value; unsigned char bytes[4]; };
struct PixelFormat127D60 {
 unsigned flags, r, rs, g, gs, b, bs, a, as;
 __forceinline unsigned Bytes() const {
  unsigned bits;
  if(flags&0x20)bits=8;else if(flags&0x40)bits=4;else {
   unsigned value=b|g|r|a;
   if(value&0xffff0000)bits=32;else bits=(value&0xff00)?16:8;
  }
  return bits>>3;
 }
};
static __forceinline unsigned PixelBytes127D60(PixelFormat127D60 format) { return format.Bytes(); }
struct E38 { char pad[0x18]; int f18; char pad2[0x1c]; };
struct E130 { char pad[0x18]; int n; E38 *a; char pad2[0x110]; };
int _func_00116FB0(...);
int _func_0013AB30(...);
int _func_0013ADF0(...);
int _func_0011B4F0(...);
int _func_00116070(...);
int _func_00116A90(...);
extern int _D_00331AD0;

char func_00127310(S127310 *p)
{
  int func_0013A000(...);
  int func_00116FB0(...);
  int i, j;
  int v;

  if (p == 0) return 0;
  for (i = 0; i < p->s24; i++) {
    E130 *e = (E130 *)(p->p4 + i * 0x130);
    for (j = 0; j < e->n; j++) {
      v = e->a[j].f18;
      if (v != 0) func_0013A000(v);
    }
  }
  if ((p->b26 & 2) == 0) {
    if (p->p4 != 0) {
      for (i = 0; i < p->s24; i++)
        func_00116FB0(*(int *)(p->p4 + i * 0x130 + 0x1c));
      func_00116FB0(p->p4);
    }
    if (p->p0 != 0) {
      for (i = 0; i < p->n20; i++) {
        if (p->p0[i * 2 + 1] != 0) {
          for (j = 0; j < p->s18; j++) {
            v = *(int *)(p->p0[i * 2 + 1] + 4 + j * 8);
            if (v != 0) func_00116FB0(v);
          }
          func_00116FB0(p->p0[i * 2 + 1]);
        }
      }
      if (p->p0 != 0) func_00116FB0(p->p0);
    }
  }
  if (p->p8 != 0) func_00116FB0(p->p8);
  func_00116FB0(p);
  return 1;
}

int _func_00127460(int p){int i;int *q;if(!p)return 0;for(i=0;i<(unsigned short)*(short*)(p+0x18);i++){int *r=(int*)(*(int*)(p+8)+i*0xc8);if(r[0x2f]){_func_0013AB30(r[0x2f]);_func_0013ADF0(r[0x2f]);r[0x2f]=0;}}q=(int*)(p+0x164);for(i=0;i<32;i++,q++){if(*q){_func_0013AB30(*q);_func_0013ADF0(*q);*q=0;}}*(short*)(p+0x1a)=0;return 1;}

void func_00127500(int param_1, int param_2)
{
  extern float D_001D27FC;
  int func_0013AB30(...); int func_0013ADF0(...); int func_0013AC00(...);
  int ptr = *(int*)(param_2 + 0xbc);
  if (ptr != 0) {
    unsigned int i = 0;
    unsigned int best = param_2;
    float min = D_001D27FC;
    float *t = (float*)(param_1 + 0x1e4);
    do {
      if (t[-0x20] == 0) {
        *(int*)(param_1 + 0x164 + i * 4) = ptr;
        *(int*)(param_1 + 0x1e4 + i * 4) = *(int*)(param_2 + 0xc0);
        if (i < 0x20) goto done;
        break;
      }
      if (*t < min) {
        min = *t;
        best = i;
      }
      i++;
      t++;
    } while (i < 0x20);
    func_0013AB30(*(int*)(param_1 + 0x164 + best * 4));
    func_0013ADF0(*(int*)(param_1 + 0x164 + best * 4));
    *(int*)(param_1 + 0x164 + best * 4) = *(int*)(param_2 + 0xbc);
    *(int*)(param_1 + 0x1e4 + best * 4) = *(int*)(param_2 + 0xc0);
done:
    func_0013AC00(*(int*)(param_2 + 0xbc), *(int*)(param_2 + 0xc0));
    *(int*)(param_2 + 0xbc) = 0;
  }
}

void func_001278C0(int param_1, undefined4 param_2, undefined1 param_3)
{
  int func_0011B4F0(...);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_4;
  
  iVar4 = 0;
  local_4 = 0;
  if (*(short *)(param_1 + 0x24) != 0) {
    do {
      iVar3 = *(int *)(param_1 + 4) + iVar4;
      iVar1 = func_0011B4F0(iVar3,param_2);
      if ((iVar1 == 0) && (*(int *)(iVar3 + 0x18) != 0)) {
        iVar1 = 0;
        uVar2 = 0;
        do {
          *(undefined1 *)(iVar1 + 0x30 + *(int *)(iVar3 + 0x1c)) = param_3;
          uVar2 = uVar2 + 1;
          iVar1 = iVar1 + 0x38;
        } while (uVar2 < *(uint *)(iVar3 + 0x18));
      }
      local_4 = local_4 + 1;
      iVar4 = iVar4 + 0x130;
    } while (local_4 < (uint)(int)*(short *)(param_1 + 0x24));
  }
  return;
}

undefined4 func_00127930(int param_1)
{
  int func_00127460(...);
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    func_00127460(param_1);
  }
  *(int *)(param_1 + 0x13c) = (int)*(short *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x130) = (uint)*(byte *)(param_1 + 300);
  *(int *)(param_1 + 0x140) = (int)*(short *)(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x264) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  puVar4 = *(undefined4 **)(param_1 + 8);
  for (uVar2 = (uint)(*(short *)(param_1 + 0x18) * 200) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar5 * -2 + 1);
  }
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x18)) {
    iVar1 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0xc4 + iVar1) = 0x3f800000;
      *(undefined2 *)(*(int *)(param_1 + 8) + 0xb2 + iVar1) = 0;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 200;
    } while (iVar3 < *(short *)(param_1 + 0x18));
  }
  *(undefined2 *)(param_1 + 0x1a) = 1;
  return 1;
}

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
  unsigned int result;
  if (flags & 0x20) { result = 8; goto done; }
  if (flags & 0x40) { result = 4; goto done; }
  value = a6 | a4 | a2 | a8;
  if (value & 0xffff0000) { result = 0x20; goto done; }
  result = (-(unsigned int)((value & 0xff00) != 0) & 8) + 8;
done:
  return result >> 3;
}

unsigned int *func_00127B70(unsigned int a1, unsigned int a2, unsigned char flags, unsigned int a4, int a5, unsigned int a6, int a7, unsigned int a8, int a9, unsigned int a10)
{
  int func_00116A90(...);
  unsigned int *obj = (unsigned int *)func_00116A90(0x3c,1,1);
  memcpy(obj, &flags, 0x24);
  obj[11] = 1;
  obj[9] = a1;
  obj[10] = a2;
  unsigned int size;
  if (flags & 0x20) size = 8;
  else if (flags & 0x40) size = 4;
  else {
    unsigned int value = a6 | a4 | a2 | a8;
    if (value & 0xffff0000) size = 0x20;
    else size = (-(unsigned int)((value & 0xff00)!=0) & 8) + 8;
  }
  size *= a1;
  size *= a2;
  size >>= 3;
  unsigned int bits = *obj;
  if (bits & 1) size >>= 3;
  if ((signed char)bits < 0) size >>= 1;
  obj[12] = func_00116A90(size,1,1);
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

int _func_00127C50(unsigned int *p){unsigned int n,a,b;int sum;if(!(*p&0x10000)){p[0xb]=1;return p[10]*p[9];}n=p[0xb];a=p[9];b=p[10];sum=0;while(n>0){sum+=a*b;a>>=1;b>>=1;n--;}return sum;}

unsigned int _func_00127CA0(unsigned int *p){unsigned int flags=*p,a,b,n,prod;unsigned int tmp[9];int i; if(!(flags&0x10000)){prod=p[10]*p[9];p[0xb]=1;}else{a=p[9];b=p[10];n=p[0xb];prod=0;while(n){prod+=a*b;a>>=1;b>>=1;--n;}}memcpy(tmp,p,0x24);if(tmp[0]&0x20)i=8;else if(tmp[0]&0x40)i=4;else{unsigned int x=tmp[1]|tmp[3]|tmp[5]|tmp[6];if(x&0xffff0000)i=32;else i=((x&0xff00)?0:8)+8;}prod*=i;prod>>=3;if(flags&1)return prod>>3;if((signed char)flags<0)return prod>>1;return prod;}

#pragma optimize("", on)
void func_00127D60(unsigned *p,PixelFormat127D60 format) {
 unsigned func_00127C50(unsigned *);void *func_00116A90(unsigned,int,int);void func_00116FB0(void *);
 if(p[7]==*(volatile unsigned *)&format.a && p[1]==*(volatile unsigned *)&format.r && p[3]==*(volatile unsigned *)&format.g && p[5]==*(volatile unsigned *)&format.b && p[0]==*(volatile unsigned *)&format.flags)return;
 unsigned old[9];memcpy(old,p,36);unsigned char *oldData=(unsigned char *)p[12];
 unsigned count=func_00127C50(p),size,oldSize,bits;
 size=format.Bytes();
 oldSize=((PixelFormat127D60 *)old)->Bytes();
 p[12]=(unsigned)func_00116A90(size*count,1,1);unsigned char *dst=(unsigned char *)p[12];
 if(count>0){unsigned char *src=oldData;unsigned pixel;
 do {
 if(oldSize==1)pixel=src[0];
 else if(oldSize==2){pixel=src[0]|((unsigned)src[1]<<8);}
 else if(oldSize==4)pixel=(((unsigned)src[3]<<8|src[2])<<8|src[1])<<8|src[0];
 pixel=(((((pixel&old[1])>>*(unsigned short *)&old[2])<<*((unsigned short *)&old[2]+1))>>*((unsigned short *)&format.rs+1))<<*(unsigned short *)&format.rs)
 |(((((pixel&old[3])>>*(unsigned short *)&old[4])<<*((unsigned short *)&old[4]+1))>>*((unsigned short *)&format.gs+1))<<*(unsigned short *)&format.gs)
 |(((((pixel&old[5])>>*(unsigned short *)&old[6])<<*((unsigned short *)&old[6]+1))>>*((unsigned short *)&format.bs+1))<<*(unsigned short *)&format.bs)
 |(((((pixel&old[7])>>*(unsigned short *)&old[8])<<*((unsigned short *)&old[8]+1))>>*((unsigned short *)&format.as+1))<<*(unsigned short *)&format.as);
 if(size==1)dst[0]=(unsigned char)pixel;
 else if(size==2){dst[1]=(unsigned char)(pixel>>8);dst[0]=(unsigned char)pixel;}
 else if(size==4){dst[1]=(unsigned char)(pixel>>8);dst[2]=(unsigned char)(pixel>>16);dst[3]=(unsigned char)(pixel>>24);dst[0]=(unsigned char)pixel;}
 src+=oldSize;dst+=size;
 }while(--count);
 }
 memcpy(p,&format,36);func_00116FB0(oldData);
}
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
 int _func_00127FF0(...); void *memcpy(void *, const void *, unsigned int);
 int local[9];
 local[7]=a; local[1]=b; local[3]=c; local[8]=d; local[2]=e;
 _func_00127FF0(&local[1]);
 memcpy(out,&local[2],36);
}

void func_001280B0(int a0, int a1) {
    int func_00133BB0(...);
    func_00133BB0(a1);
}
