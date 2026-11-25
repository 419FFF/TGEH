/* 17 functions from 0x00120E20 to 0x00121DAD, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00120E20(int a0, int a1, int a2, int a3) {
    extern int D_0032B6E4;
    extern int D_0032B6E8;
    extern int D_001E7D38;
    extern int D_001E7D3C;
    D_0032B6E4 = a0;
    D_0032B6E8 = a1;
    D_001E7D38 = a2;
    D_001E7D3C = a3;
}

void func_00120E50(int a0, int a1) {
    extern int D_0032B6EC;
    extern int D_0032B6F0;
    D_0032B6EC = a0;
    D_0032B6F0 = a1;
}

void func_00120E70(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  extern undefined4 D_003293DC;
  int func_00137870(...);
  D_003293DC = func_00137870(param_1,param_2,param_3,param_4);
  return;
}

void func_00120EA0(int a0, int a1, char a2, char a3) {
    extern int D_0032B6F8;
    extern int D_0032B6FC;
    extern char D_001E7D40;
    extern char D_0032B700;
    D_0032B6F8 = a0;
    D_0032B6FC = a1;
    D_001E7D40 = a2;
    D_0032B700 = a3;
}

void _func_00120ED0(int a0,int a1) {
 extern unsigned int _D_00329388;
 extern int *_D_0032B6F4;
 extern unsigned int _D_0032938C,_D_003293B8,_D_003293CC,_D_003293D4,
        _D_00329390,_D_003293A0,_D_003293D0,_D_003293B0,_D_003293B4;
 extern void *memset(void *,int,unsigned int);
 memset(&_D_00329388,0,0x54);
 _D_00329388=2; _D_0032938C=2; _D_003293B8=0; _D_003293CC=0;
 _D_003293D4=2; _D_00329390=*(unsigned int *)((char *)_D_0032B6F4+0x2594);
 _D_003293A0=3; _D_003293D0=6; _D_003293B0=a0; _D_003293B4=a1;
}

void _func_00120F40(int a0) { extern int _D_001E7D2C,_D_001E7D30; volatile int copy=a0; _D_001E7D2C=a0; _D_001E7D30=copy; }

void func_00120F60(int a0) {
    extern int D_001E7D2C;
    D_001E7D2C = a0;
}

void func_00120F70(int a0) {
    extern int D_001E7D30;
    D_001E7D30 = a0;
}

void func_00120F80(int a0, int a1) {
    extern int D_0032B704;
    extern int D_0032B708;
    D_0032B704 = a0;
    D_0032B708 = a1;
}

void _func_00121990(int a0) {
 extern void _func_0013EE4D(void *,int,void *);
 extern void _func_001215E0(int,void *);
 unsigned char buffer[0x400];
 _func_0013EE4D(buffer,a0,(char *)&a0+4);
 _func_001215E0(0,buffer);
}

float _func_001219C0(int a0) {
 extern void _func_0013EE4D(void *,int,void *); extern void *_func_00120FA0(void *,void *,float *);
 union { unsigned int bits; float f; } maximum; float current; unsigned char buffer[0x800]; void *next;
 _func_0013EE4D(buffer,a0,(char *)&a0+4); maximum.bits=0; next=buffer;
 do { next=_func_00120FA0(next,buffer+0x400,&current); if(maximum.f<current) maximum.f=current; if(!next) break; } while(1);
 return maximum.f;
}

void _func_00121AD0(unsigned int p1,unsigned int p2,unsigned int p3,unsigned int p4){extern unsigned char D_0032F720,D_0032F730;extern unsigned int D_0032F714,D_0032F718,D_0032F710,D_0032F71C,D_0032F724;void _func_0012F730(...);if(D_0032F720){if(D_0032F714==D_0032F718)return;unsigned int base=D_0032F710+D_0032F71C*D_0032F714;D_0032F714++;_func_0012F730(base,p1,(unsigned int)&D_0032F730);_func_0012F730(base+0x10,p2,(unsigned int)&D_0032F730);_func_0012F730(base+0x20,p3,(unsigned int)&D_0032F730);*(unsigned int*)(base+0x3c)=p4;if(D_0032F714!=D_0032F724)return;}D_0032F730=1;}

extern int D_001E7D2C;
extern int D_001E7D30;
extern unsigned char *D_0032B6F4;
extern char D_0032B700;
extern char D_001E7D40;
extern int D_001E7D38;
int func_0013FF19(...);
