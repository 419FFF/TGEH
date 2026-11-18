/* 13 functions from 0x001144B0 to 0x00115495, found by Ghidra. */

    #include "common.h"
    void func_001144B0(void* self){volatile int x=1;(void)x;}

unsigned int func_00115100(int a,int b){int func_0011BDD0(int,int);int func_0011B4F0(int,int);int r=func_0011BDD0(*(int*)(a+0x1c),1);unsigned int i=0;if(r){for(;i<*(unsigned int*)(r+4);i++)if(!func_0011B4F0(*(int*)(r+8)+i*0xf0,b))break;--*(short*)(*(int*)(a+0x1c)+0x2a);if(i<*(unsigned int*)(r+4))return i;}return 0xffffffff;}

void func_00115170(int a,int b,int c){int func_0013E4F0(...);int func_0011BDD0(int,int);int func_00114E80(...);int func_0012F250(...);int func_0012F120(int);char x[0x60];func_0013E4F0();int r=func_0011BDD0(*(int*)(a+0x1c),0);if(r){func_00114E80(a,r,x,b);func_0012F250(c,*(int*)(r+8)+b*0xf0+0x30,x+b*0x40);--*(short*)(*(int*)(a+0x1c)+0x2a);}else func_0012F120(c);}

void func_001153F0(int p){int func_0011BB00(...);func_0011BB00(*(int*)(p+0x1c));*(volatile char*)(p+2)=*(volatile char*)(p+2)|1;}

void func_00115410(int p,int q){int func_0011BCA0(...);char *x=(char*)p;func_0011BCA0(*(int*)(p+0x1c),q);x[2]&=(char)0xfe;}

unsigned char func_00115430(int p){int func_0011BDD0(...);int x=func_0011BDD0(*(int*)(p+0x1c),0);if(x){(*(short*)(*(int*)(p+0x1c)+0x2a))--;return 1;}return 0;}

void func_00115460(int p){int func_00116FB0(...);void func_0011BAE0(int),func_0011B990(int);if(*(int*)(p+0x20))func_00116FB0(*(int*)(p+0x20));if(*(unsigned char*)(p+2)&1)return func_0011BAE0(*(int*)(p+0x1c));return func_0011B990(*(int*)(p+0x1c));}

