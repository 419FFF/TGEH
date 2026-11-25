/* 15 functions from 0x00148220 to 0x00148CF6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_0013AF30(void *);
void _func_00131D10(void *);
void _func_00116FB0(void *);
void _func_00148540(char *obj)
{
    if (obj != 0) {
        _func_0013AF30(*(void **)(obj + 0x82C));   /* obj->res    */
        _func_00131D10(*(void **)obj);             /* obj->handle */
        _func_00116FB0(*(void **)(obj + 0x824));   /* obj->buf3   */
        _func_00116FB0(*(void **)(obj + 0x8));     /* obj->buf2   */
        _func_00116FB0(*(void **)(obj + 0x4));     /* obj->buf1   */
        _func_00116FB0(obj);                       /* the object  */
    }
}

int _func_00148590(...);
unsigned int _func_0013AF50(...);
void _func_0013AF70(...);
void* _func_00116A90(...);
int _func_00131EB0(...);
unsigned char _func_001486F0(void* a, void* b) { return _func_00148590(a,b) != 0; }

uint func_00148710(undefined4 param_1, undefined4 param_2)
{
  int func_00148590(...);
  int iVar1;
  
  iVar1 = func_00148590(param_1,param_2);
  if (iVar1 != 0) {
    return *(uint *)(iVar1 + 0xc) & 0x7fffffff;
  }
  return 0;
}

void* _func_00148740(unsigned int* p, void* q) { _func_0013AF50(p[0x20b]); int* d=(int*)_func_00148590(p,q); if(d){ int* r=(int*)_func_00116A90(20,1,1); r[0]=(int)d;r[1]=(int)p;r[3]=0; int n=d[3]; if(n<0){ n&=0x7fffffff; if(n<=0x20000)r[2]=(int)_func_00116A90(n,1,1);else r[2]=(int)_func_00116A90(0x20000,1,1);} _func_00131EB0(p[0],d[2],0);r[4]=d[2];_func_0013AF70(p[0x20b]);return r;} _func_00148590(p,q);_func_0013AF70(p[0x20b]);return 0;}

void func_001489A0(int *obj, int amount, int mode)
{
    int func_00131D60(int, void *, int);
    void func_00117100(void);
    void func_00117130(void);
    void func_001480C0(void *, int);
    int old;
    unsigned cap;
    unsigned delta;
    unsigned pos;
    volatile unsigned chunk;
    int size;
    void *buf;
    int sum;
    int hdr;

    old = obj[3];
    switch (mode) {
    case 0:
        obj[3] = amount;
        break;
    case 1:
        sum = old + amount;
        obj[3] = sum;
        cap = *(unsigned int *)(*obj + 0xc) & 0x7fffffff;
        if ((unsigned int)sum > cap)
            obj[3] = (int)cap;
        break;
    case 2:
        obj[3] = (int)((*(unsigned int *)(*obj + 0xc) & 0x7fffffff) - (unsigned int)amount);
        break;
    }
    hdr = *(int *)(*obj + 0xc);
    if (hdr < 0) {
        delta = (unsigned int)obj[3] - (unsigned int)old;
        obj[3] = old;
        if (delta != 0) {
            do {
                pos = (unsigned int)obj[3];
                if ((pos & 0x1ffff) == 0) {
                    _func_0013AF50(*(unsigned int *)(obj[1] + 0x82c));
                    _func_00131EB0(*(int *)obj[1], obj[4], 0);
                    func_00131D60(*(int *)obj[1], &size, 4);
                    func_00117100();
                    buf = _func_00116A90(size, 1, 1);
                    func_00117130();
                    func_00131D60(*(int *)obj[1], buf, size);
                    obj[4] = obj[4] + size + 4;
                    _func_0013AF70(*(unsigned int *)(obj[1] + 0x82c));
                    func_001480C0(buf, obj[2]);
                    _func_00116FB0(buf);
                }
                chunk = 0x20000u - (pos & 0x1ffffu);
                if (chunk > delta)
                    chunk = delta;
                delta -= chunk;
                obj[3] += (int)chunk;
            } while (delta > 0);
        }
    }
}

undefined4 func_00148AE0(int param_1)
{
  return *(undefined4 *)(param_1 + 0xc);
}

unsigned char _func_00148AF0(unsigned int* p) { return p[3] >= (*(unsigned int*)(p[0]+12)&0x7fffffff); }

void func_00148B10(int param_1) { int func_00116FB0(...); func_00116FB0(*(undefined4 *)(param_1+8)); func_00116FB0(param_1); }

unsigned long long _func_00148B30(unsigned int a,unsigned int b,unsigned char c) { if(c>=64)return 0; if(c>=32)return (unsigned long long)(b>>(c&31)); return ((unsigned long long)(b>>(c&31))<<32) | ((a>>(c&31)) | (b<<(32-(c&31)))); }

unsigned long long __stdcall func_00148B50(unsigned int a,unsigned int b,unsigned int c,unsigned int d)
{
 if(!d){unsigned int t=b%c; t=t; return a%c;}
 {
 unsigned int x=d,y=c,h=b,l=a;
 while(x){unsigned int bit=x&1;x>>=1;y=(y>>1)|(bit<<31);bit=h&1;h>>=1;l=(l>>1)|(bit<<31);}
 unsigned int q=((h%y)<<31)/y; q=(unsigned)(((unsigned long long)h<<32|l)/y);
 unsigned long long p=(unsigned long long)q*d; unsigned int pl=(unsigned)p,ph=(unsigned)(p>>32);
 unsigned long long t=(unsigned long long)q*c; unsigned int tl=(unsigned)t,th=(unsigned)(t>>32);
 unsigned old=th;th+=pl;
 if(th<old||th>b||(th==b&&tl>l)){unsigned borrow=tl<c;tl-=c;th-=d+borrow;}
 tl-=l;th-=h+(tl>l);
 return ((unsigned long long)(0-th)<<32)|(0-tl);
 }
}

unsigned short *func_00148BC5(unsigned short *s,unsigned short *p)
{
 unsigned short *start=s;
 if(*p==0)return s;
 while(*s){
  unsigned short *a=s; unsigned short *b=p;
  while(*a && *b && *a==*b){++a;++b;}
  if(*b==0)return s;
  ++s;
 }
 return 0;
}

int _func_00148C23(void) {
    // Logic to be filled in after analyzing the assembly/brief.
    return 0;
}

