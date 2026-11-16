/* 11 functions from 0x000E2080 to 0x000E2F48, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0005CCC0(int);
void func_000B56D0(void*,void*,void*,float);
void func_0005C800(void);
void func_00110420(int,int);
int func_0009C590(void*);
void func_00110480(int,int,int);
extern int D_00313B60;
extern char D_002EED20,D_001DBD3C,D_001DBD4C,D_001DBD28;
void func_000E2BD0(void){func_0005CCC0(0x13);func_000B56D0(&D_002EED20,&D_001DBD3C,&D_001DBD4C,85.0f);func_0005C800();int *p=*(int**)(D_00313B60+0x2c);if(*p)func_00110420(*p,D_00313B60);int a=func_0009C590(&D_001DBD28);int *c=*(int**)(a+0x2c);int *d=*(int**)(c+0x2c);int v=*d;func_00110480(v,D_00313B60,8);}

void func_000E2C40(void)
{
  int func_0005F310(...);
  int func_0005CCC0(...);
  func_0005F310(0);
  func_0005CCC0(1);
  return;
}

void func_000E2D30(void)
{
  int func_0011B990(...);
  extern undefined4 D_0031FEF0;
  int func_00116FB0(...);
  extern undefined4 D_00322478;
  func_0011B990(D_0031FEF0);
  func_00116FB0(D_00322478);
  return;
}

void func_000E2D50(void) {
    extern char D_00322488;
    D_00322488 = 1;
}

void func_000E2D60(void) {
    extern char D_00322488;
    D_00322488 = 0;
}

extern float D_0032247C,D_001D333C,D_00322480;
extern char *D_00322478;
void func_000E2080(void*,int);
void func_000E2D70(void){char *p=D_00322478;D_0032247C+=D_001D333C;D_00322480+=D_001D333C;func_000E2080(p+0x1ef0,1);func_000E2080(p+0x1f38,1);func_000E2080(p+0x1f80,1);func_000E2080(p+0x1ef0,0);func_000E2080(p+0x1f38,0);func_000E2080(p+0x1f80,0);if(p[0x1f11]&&p[0x1f59]&&p[0x1fa1])*p=1;}

