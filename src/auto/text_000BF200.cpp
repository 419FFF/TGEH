/* 6 functions from 0x000BF200 to 0x000BFCCA, found by Ghidra. */
#include "common.h"
struct Mtx { __declspec(align(16)) float f[12]; };

void _func_000BF200(void){
 extern int D_00314D90;
 int *p=(int *)(*(int *)(D_00314D90+0x110)+8);
 int n=3;
 do{
  int *q=p-1;
  int a=*q; unsigned char f=*(unsigned char *)(*(int *)(a+0x2c)+0x20); *(int *)(a+0x110)=((f&1)?0:10);
  a=p[0]; f=*(unsigned char *)(*(int *)(a+0x2c)+0x20); *(int *)(a+0x110)=((f&1)?0:10);
  a=p[1]; f=*(unsigned char *)(*(int *)(a+0x2c)+0x20); *(int *)(a+0x110)=((f&1)?0:10);
  a=p[2]; f=*(unsigned char *)(*(int *)(a+0x2c)+0x20); *(int *)(a+0x110)=((f&1)?0:10);
  a=p[3]; f=*(unsigned char *)(*(int *)(a+0x2c)+0x20); *(int *)(a+0x110)=((f&1)?0:10);
  p+=5; --n;
 }while(n);
}
