/* 55 functions from 0x0013F028 to 0x0013FEB8, found by Ghidra. */
#include "common.h"

void func_0013F028(void *p) {
    extern void __stdcall RtlUnwind(void*, void*, void*, void*);
    volatile void *target = (void*)0x2018;
    RtlUnwind(p, (void*)target, 0, 0);
}

unsigned int func_0013F048(unsigned int *p, unsigned int a1, unsigned int a2, unsigned int *a3) {
    unsigned int value = *(unsigned int*)((char*)p + 4);
    unsigned int result = 1;
    if (value & 6) {
        *a3 = a1;
        result = 3;
    }
    return result;
}

void func_0013F06A(void *p) { (void)p; }

int func_0013F0D2(void) {
    return 0;
}

extern int _D_002E8BE0;
void __stdcall func_0013F0F5(int arg) {
    extern int _D_002E8BE0;
    extern void func_00143876(void);
    func_00143876();
    if (arg) _D_002E8BE0 = arg;
}

void __stdcall func_0013F0FE(int value) {
    *(volatile int*)0x002E8BE8 = value;
}

int func_0013F116(char *p, int n, int a, int b) {
    extern int func_001407E2(...);
    extern int func_0014063B(...);
    char *local = p;
    int temp = n;
    int tag = 0x42;
    char *saved = p;
    int result = func_001407E2(&local, b, &a);
    if (p) {
        temp--;
        if (temp < 0) func_0014063B(0, &local);
        else *local = 0;
    }
    return result;
}

int func_0013F32C(char *p,int n,int arg,int out) {
 extern int func_00141815(...); extern void func_0014063B(...);
 char *local=p; char *saved=p; int count=n+n; int tag=0x42;
 int result=func_00141815(&local,arg,&out);
 if (--count<0) func_0014063B(0,&local); else *local++=0;
 if (--count<0) func_0014063B(0,&local); else *local=0;
 return result;
}

unsigned long long __stdcall func_0013F3A0(unsigned int a,int b,unsigned int c,int d) { unsigned long long x=((unsigned long long)(unsigned int)b<<32)|a; unsigned long long y=((unsigned long long)(unsigned int)d<<32)|c; return x/y; }

int func_0013F47C(short *p) { short *start=p; short c; do { c=*p; p++; } while(c); return (((int)p-(int)start)>>1)-1; }

short *func_0013F492(short *dst,short *src,int n) { short *out=dst; int left=n; if(left) { do { short c=*src++; *out++=c; if(c==0) break; left--; } while(left); if(left && --left) { while(left) { *out++=0; *out++=0; left-=2; } } } return dst; }

unsigned long long __stdcall func_0013F4D0(unsigned int a,unsigned int b,unsigned int c,unsigned int d) { unsigned long long x=((unsigned long long)b<<32)|a; unsigned long long y=((unsigned long long)d<<32)|c; return x/y; }

int func_0013F538(char *p,int n,int a,int b) { extern int func_001407E2(...); extern void func_0014063B(...); char *local=p; int count=n; int tag=0x42; int result=func_001407E2(&local,a,b); if(p) { if(--count<0) func_0014063B(0,&local); else *local=0; } return result; }

void func_0013F58E(void)
{
  extern void (*D_0037B9E4)(void);
  int func_00141FD9(...);
  if (D_0037B9E4) D_0037B9E4();
  func_00141FD9(0x19);
}

void __stdcall func_0013F5A2(void *target,void *frame) { ((void (*)(void))target)(); }

void __stdcall func_0013F5CD(int a,int b) { int x; }

void func_0013F5D2(void) { int x; }

void __stdcall func_0013F5D9(void *a, int *b) { }

extern int _D_002E8F08;
extern int func_001427DE(...);
extern int func_00142880(void);
int _func_0013F661(void*a,void*b,int c){int x=*(int*)((char*)b+8);if(x!=_D_002E8F08){*(int*)((char*)a+4)|=8;return 1;}return func_001427DE(a,*(int*)((char*)b+16),c,0,*(int*)((char*)b+12),*(int*)((char*)b+20),b,0);}

int _func_0013F763(int *a, int *b, int c) {
 if (*(int*)((char*)b+8) != _D_002E8F08) { *(int*)((char*)a+4) |= 8; return 1; }
 if (*(int*)((char*)a+4)&0x66) { *(int*)((char*)b+0x24)=1; return 1; }
 func_001427DE(a,*(int*)((char*)b+0x10),c,0,*(int*)((char*)b+0xc),*(int*)((char*)b+0x14),*(int*)((char*)b+0x18),1);
 if (!*(int*)((char*)b+0x24)) { extern void __stdcall func_0013F5D9(void*,void*); func_0013F5D9(b,a); extern int func_0013F69C(...); int x; func_0013F69C(0x123,&x,0,0,0,0,0); }
 return 1;
}

int _func_0013F8B7(int param_1) {
    extern int func_00142880(void);
    int *node = *(int **)((char*)func_00142880() + 0x84);
    while (node != 0) {
        if (*node == param_1) return 0;
        node = (int*)node[1];
    }
    return 1;
}

void _func_0013F8D8(void *node) { extern int func_00142880(void); extern void func_00142ACC(void); void *head=(void*)(*(int*)((char*)func_00142880()+0x84)); void *p; if(node==head){*(int*)((char*)func_00142880()+0x84)=*(int*)((char*)node+4);return;} p=head; while(p){if(*(void**)((char*)p+4)==node){*(int*)((char*)p+4)=*(int*)((char*)node+4);return;} p=*(void**)((char*)p+4);} func_00142ACC();}

int _func_0013F924(int a, int b, int c, int d, int e) {
    extern int _D_002E8F08;
    extern int _func_0013F661(void*,void*,int);
    return _func_0013F661((void*)a,(void*)c,d);
}

int _func_0013F980(void) { return 0; }

void _func_0013F9A0(void) { int _func_00142C28(...); int _func_0013F9BD(...); _func_00142C28(); _func_0013F9BD(); }

void _func_0013F9B4(float a0) {
    extern void __fastcall func_00142BE5(float*, float*);
    func_00142BE5(&a0, &a0);
}

void _func_0013F9BD(void) { }

int func_0013FC97(int param_1) { int func_0013FC5F(...); return func_0013FC5F(param_1); }

int func_0013FCA9(int param_1) { extern int D_002E8EE0; int func_0014167E(...); extern int D_002E8ED8; return 0; }

int func_0013FCD7(int param_1) { extern int D_002E8EE0; int func_0014167E(...); extern int D_002E8ED8; return 0; }

int func_0013FD00(int param_1) { extern int D_002E8EE0; int func_0014167E(...); extern int D_002E8ED8; return 0; }

unsigned int _func_0013FA6B(unsigned int a, unsigned long b) { volatile unsigned short *v=(volatile unsigned short*)((char*)&b+2); unsigned short x=*v; return (x & 0x7ff0) != 0x7ff0; }

int _func_0013FA80(int a, unsigned long long b) { return 1; }

void __fastcall func_0013FB1C(int a,int b) { extern int func_0013EEE4(...); extern int func_00143691(...); extern int func_001436BF(...); extern void func_0013FB59(void); extern void func_0013EF1F(void); extern int D_001E1AB8; extern int D_001E1AB4; int *p=(int*)func_0013EEE4(8,&D_001E1AB8); *p=D_001E1AB4; func_00143691(14); p=(int*)p[1]; if(p) func_001436BF(p); func_0013FB59(); func_0013EF1F(); }

void func_0013FB59(void) {
    int func_001435DF(...);
    func_001435DF(14);
}

void* __fastcall func_0013FB62(void* self,int edx,int flags) { extern void __fastcall func_0013FB1C(void*,int); extern void func_00143717(void*); func_0013FB1C(self,edx); if(flags&1) { func_00143717(self); } return self; }

void __stdcall func_0013FB7E(int a,int b) { extern int D_001E1AC4[8]; extern void __stdcall func_0010B8A0(int,int,int,int); int local[8]; for(int i=0;i<8;i++) local[i]=D_001E1AC4[i]; local[5]=a; local[6]=b; func_0010B8A0(local[0],local[1],local[4],(int)&local[3]); }

void func_0013FBB7(void) { extern unsigned int D_0037C404,D_0037C400; extern int func_0014394F(...),func_00143780(...); unsigned int n=func_0014394F(D_0037C404); if(n < D_0037C400+4-D_0037C404) { unsigned int sz=n<0x800?n:0x800; int p=func_00143780(D_0037C404,sz+n); if(!p) { p=func_00143780(D_0037C404,n+0x10); if(!p)return; } D_0037C400=p+((D_0037C400-D_0037C404)>>2)*4; D_0037C404=p; } *(int*)D_0037C400=0; D_0037C400+=4; }

int func_0013FC37(void) { extern int D_0037C404,D_0037C400; extern int func_001439FB(...); int p=func_001439FB(0x80); D_0037C404=p; if(!p) return 0x18; *(int*)p=0; D_0037C400=p; return 0; }

#pragma optimize("y", off)
void _func_0013FC5F(int arg) { extern int _D_001E1AE8; extern void _func_0013EEE4(...); extern void _func_0014386D(void); extern int _func_0013FBB7(void); extern void _func_0013FC91(void); extern void _func_0013EF1F(int); volatile int result; _func_0013EEE4(&_D_001E1AE8,0xc); _func_0014386D(); result=_func_0013FBB7(); _func_0013FC91(); _func_0013EF1F(result); }
#pragma optimize("", on)
void func_0013FC91(void) { extern void (__cdecl *volatile f)(void); f=0; }
#pragma optimize("t", on)
