/* 12 functions from 0x000D58C0 to 0x000D65C4, found by Ghidra. */
#include "common.h"

void _func_000D58C0(unsigned char *p,register char count,register char enable){extern unsigned char D_0031BCA0,D_0031BCB0[];extern unsigned int func_0009A880(void),func_00131310(void);register int i;register unsigned int v;if(p==&D_0031BCA0&&enable){count--;if(count<0)return;i=count;do{v=func_0009A880();p[i]=(unsigned char)(v%10u);while(p[i]==D_0031BCB0[i]){v=func_00131310();p[i]=(unsigned char)(v%10u);}--i;--count;}while(count);return;}count--;if(count<0)return;i=count;do{v=func_00131310();p[i]=(unsigned char)(v%10u);--i;--count;}while(count);}

int func_000D5C00(char a) {
 extern float D_001D27B8,D_0031E4C4,D_0031E4C8,D_0031E4CC,D_0031E4C0,D_00307DB4,D_0031E4E8,D_001D27F8;
 float v=a?D_0031E4C4:D_001D27B8;
 D_0031E4C8=v+D_0031E4C8;
 D_0031E4CC=((D_0031E4C0-((D_00307DB4-D_0031E4E8)+D_0031E4C8))/D_0031E4C0)*D_001D27F8;
 if(D_0031E4CC<=D_001D27B8) D_0031E4CC=D_001D27B8;
 return D_0031E4CC==D_001D27B8;
}

void func_000D6490(int a,int b,int c) {
 extern int D_0031B9D4,D_0031B870,D_0031BB30;
 int func_00110060(...),func_0012FE20(...),func_0012F5B0(...),func_0012E5F0(...);
 __declspec(align(16)) char local[0x40]; char small[12];
 func_00110060(D_0031B9D4,local);
 func_0012FE20(&D_0031B870,0,c,0);
 func_0012F5B0(small,b,&D_0031B870);
 func_0012E5F0(a,&D_0031BB30,small);
}

void func_000D64F0(void) {
 extern int D_0031BAB0,D_0031B9D4,D_001D35FC,D_00313B60;
 int func_0012F120(...),func_00011CB0(...),func_0012E760(...),func_0012F7A0(...),func_00011E30(...),func_001105E0(...);
 char buf[0x4c], obj[0x30];
 int xyz[3]; float ang[3];
 func_0012F120(buf);
 func_00011CB0(obj,&D_0031BAB0);
 func_0012E760(xyz);
 xyz[1]=0xc1200000;
 func_0012F7A0(xyz,obj);
 ang[0]=*(float *)(D_0031B9D4+0x18)+D_001D35FC;
 ang[1]=1.3089969f; ang[2]=1.5707964f;
 func_00011E30(obj,buf,ang);
 func_001105E0(D_00313B60,buf,1);
}

void func_000D65B0(void) {
    extern int D_00308158;
    extern int D_001DAE6C;
    int func_000F9C00(...);
    func_000F9C00(D_00308158, (int)&D_001DAE6C);
}
