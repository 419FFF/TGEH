/* 16 functions from 0x0013DAD0 to 0x0013E3F2, found by Ghidra. */
#include "common.h"

int func_0013DCE0(unsigned int a, unsigned int *p, unsigned int n) { if(n<p[1]) { unsigned char *s=(unsigned char*)p[n+2]; if(s) { switch(*(unsigned int*)(s+4)) { case 0: return (*s=='\0')+1; case 1: case 4: return 4; case 2: case 6: return 5; case 3: case 5: return 3; } } return 1; } return (-(unsigned int)((1u<<(n&31)&*p)!=0)&2)-1; }

void func_0013DD50(void) { int func_0013DAD0(...); int n=0; while(n<12){func_0013DAD0(); n=n+3;} }

void func_0013DD90(unsigned int flags,int unused,char *dst) { extern char *D_001E8B18,*D_001E8B0C; unsigned int k=(flags>>2)&3; char *src; unsigned int n; if(k==1)src=D_001E8B18;else if(k==2)src=D_001E8B0C;else return; n=0;while(src[n])n++; dst--;while(dst[1])dst++; for(unsigned int i=0;i<n;i++)dst[i]=src[i]; }

unsigned char func_0013E270(unsigned int *a0) { return ((*a0 & 0x60000) == 0); }

void func_0013E3A5(void) {
}

void func_0013E3A6(void);
void func_00140629(void);
void func_0013E3DE(int x) { func_0013E3A6(); if (!x) return; func_00140629(); }
extern unsigned int D_002E8C10, D_002E8C14, D_002E8C18, D_002E8C1C, D_002E8C20, D_002E8C24;
extern unsigned int D_001E8AA8, D_001E8B14;
extern char D_003785D8[], D_001E1A98[];
extern int func_001405D8();
extern int func_0013DCE0();
extern int func_00138480();
extern void func_0013DBF0();
extern void func_0013DD50(char *);
extern void func_0013DD90();
extern int __stdcall func_00164770(char *, char *, int, int, int, void *, int, int, int, int, int);
