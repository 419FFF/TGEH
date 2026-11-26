/* 15 functions from 0x0001AF40 to 0x0001BE54, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "string.h"

struct S_0001B0D0_node { S_0001B0D0_node *next; int unk4; char *data; };
struct S_0001B0D0_st { int a, b, c; void *p; char flag; char z; };

#pragma intrinsic(strcpy, strcat)

void func_0001BB90(int p) {
unsigned char func_0001BB10(int,int,int,int,int);
int func_001100A0(...);
longdouble func_0012E870(...);
int func_00100230(...);
int func_00107C40(...);
extern int D_00307DF8,D_00313B60,D_0032518C,D_00325194;
extern float D_001D27B8;
int c,b,a;
int next=*(int*)(p+0x12c);
func_001100A0(*(int*)(p+0x2c),&a);
func_001100A0(*(int*)(D_00307DF8+0x2c),&b);
if(*(int*)(p+0x12c)==0 || *(int*)(p+0x12c)==2) {
 float radius=*(float*)(p+0x110);
 if(func_0012E870(a+0x30,b+0x30)<(double)radius*radius) next=1;
}
if(*(int*)(p+0x12c)==1 || *(int*)(p+0x12c)==2) {
 func_001100A0(D_00313B60,&c);
 double z=(double)*(float*)(a+0x38)-*(float*)(b+0x38);
 double x=(double)*(float*)(a+0x30)-*(float*)(b+0x30);
 float r2=(double)*(float*)(p+0x110)**(float*)(p+0x110);
 if(x*x+z*z<r2 ||
 (z=(double)*(float*)(a+0x38)-*(float*)(c+0x38),
 x=(double)*(float*)(a+0x30)-*(float*)(c+0x30),
 x*x+z*z<r2)) next=1;
 else if(*(int*)(p+0x11c)) next=(func_0001BB10(**(int**)(*(int*)(D_00307DF8+0x2c)+0x2c),**(int**)(D_00313B60+0x2c),*(int*)(p+0x124),*(int*)(p+0x128),0)!=0)+1;
 else next=2;
}
if(*(int*)(p+0x12c)==2) {
 int q=func_00100230(*(int*)(p+0x114));
 if(q && (double)*(float*)(q+0x74)==D_001D27B8 && (double)*(float*)(q+0x78)==D_001D27B8 && (double)*(float*)(q+0x7c)==D_001D27B8 && (double)*(float*)(q+0x50)==D_001D27B8 && (double)*(float*)(q+0x54)==D_001D27B8 && (double)*(float*)(q+0x58)==D_001D27B8) next=0;
}
if(next!=*(int*)(p+0x12c)) {
 *(int*)(p+0x12c)=next;
 switch(next) {
 case 0:
 if(*(int*)(p+0x11c)) {*(unsigned char*)(*(int*)(p+0x124)+0x20)|=1; *(unsigned char*)(*(int*)(p+0x128)+0x20)|=1;} break;
 case 1:
 if(*(int*)(p+0x11c)) {*(unsigned short*)(*(int*)(p+0x124)+0x20)&=0xfffe; *(unsigned short*)(*(int*)(p+0x128)+0x20)&=0xfffe;}
 func_00107C40(D_0032518C,p,p); return;
 case 2: func_00107C40(D_00325194,p,p); return;
 }
}
}

void __fastcall func_0001BE10(unsigned int *p){p[0x17c/4]=0;p[0x180/4]=0x3f800000;p[0x184/4]=0x3f800000;p[0x188/4]=0x3f800000;p[0x18c/4]=0x3f800000;p[0x190/4]=0x3f800000;p[0x194/4]=0x3f800000;p[0x198/4]=0x3f800000;p[0x19c/4]=0;p[0x1a0/4]=0;}

