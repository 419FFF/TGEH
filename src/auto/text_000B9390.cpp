/* 5 functions from 0x000B9390 to 0x000BA1F7, found by Ghidra. */
#include "common.h"

extern int D_001D904C; extern int D_003142A0; extern int D_001D9040; extern int D_00313F30; extern int D_001D9034; extern int D_00314130; extern int D_001D9014; extern int D_00313F90; extern int D_001D9004; extern int D_00314180; extern int D_001D9024; extern int func_0009CBE0(int); extern int func_001105E0(int,int,int); extern int func_0009D280(int); extern int func_0001B3F0(int); extern int func_0013E469(int*,int,int); void func_000B9690(void){ volatile char buffer[0x234]; for(int i=0;i<0x234;i++)buffer[i]=0; int x=func_0009CBE0(D_001D904C); func_001105E0(*(int*)((char*)x+0x2c),D_003142A0,0); x=func_0009CBE0(D_001D9040); func_001105E0(*(int*)((char*)x+0x2c),D_00313F30,0); x=func_0009CBE0(D_001D9034); func_001105E0(*(int*)((char*)x+0x2c),D_00314130,0); int*a=(int*)buffer; for(int i=0;i<3;i++){ func_0013E469(a,D_001D9024,1); x=func_0009CBE0((int)&a[2]); func_001105E0(*(int*)((char*)x+0x2c),D_003142A0,0); func_0009D280(x); func_0001B3F0(x); func_0013E469(a,D_001D9014,1); x=func_0009CBE0((int)&a[2]); func_001105E0(*(int*)((char*)x+0x2c),D_00313F90,0); func_0009D280(x); func_0001B3F0(x); func_0013E469(a,D_001D9004,1); x=func_0009CBE0((int)&a[2]); func_001105E0(*(int*)((char*)x+0x2c),D_00314180,0); func_0009D280(x); func_0001B3F0(x);} if(i==10) buffer[0]=10; }
extern int D_00314240;
extern int D_003142E4;
extern char D_003142FC;
extern int D_00308158;
extern int D_00325144;
extern int D_002EEAB0;
extern int D_002EEAB4;
extern void func_000B7480(void);
extern void func_000B8D50(void);
extern void func_000B9390(void);
extern void func_000B8080(void);
extern void func_000B81B0(void);
extern void func_000B8570(void);
extern void func_000B75C0(void);
extern void func_000B7680(void);
extern char func_000D5120(void);
extern void func_000B88B0(void);
extern void func_00107C40(int,int,int);
extern void func_000B6BE0(void);
extern char func_000400D0(void);
extern void func_000B6C80(void);
