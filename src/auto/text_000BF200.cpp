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

void _func_000BF730(int *p){
 extern int D_00314D90; extern int D_00307DF8; extern float D_00314E50; extern float D_001D27B0; extern float D_001D322C; extern int D_00314E5C;
 int func_00110060(...);
 float m1[14]; float m2[14];
 if(p[0x3f]<6){
  func_00110060(*(int*)(D_00314D90+0x2c),m1);
  func_00110060(*(int*)(D_00307DF8+0x2c),m2);
  int s=*p;
  if(s!=0xc&&s!=0xb&&s!=0x17&&s!=0&&s!=1&&s!=0xe&&s!=0x13&&s!=0xd&&s!=0x11&&(s!=0x12||D_00314E50>=D_001D27B0)){
   float dx=m2[10]-m1[12]; float dz=m2[12]-m1[14];
   if(dx*dx+dz*dz<D_001D322C){
    *p=0x16;
    char *q=(char*)D_00307DF8+0x150;
    char c=q[0x25];
    D_00314E5C=0;
    if(c==0){
     *(int*)(q+0x10)=D_00314D90; q[0x24]=1; *(int*)(q+0x28)=0; *(int*)(q+0x1c)=0x3f800000;
    }
   }
  }
 }
}

#pragma optimize("y", on)
void func_000BFB40(char param_1)
{
  int func_0009C590(...);
  extern char D_001D9794;
  int func_00110060(...);
  int func_0012E6D0(...);
  double func_0012EA60(...);
  int func_0012EE00(...);
  extern unsigned int *D_00314E54;
  extern int D_00314D90, D_00307DF8;
  extern float D_001D541C;
  int func_00103210(...);
  extern char D_001D9904;
  int func_00102E80(...);
  unsigned int *puVar1;
  unsigned int uVar2;
  __declspec(align(16)) float m2[16];
  __declspec(align(16)) float m1[16];
  float c[3];
  unsigned int a[3];
  unsigned int b[3];
  double d, e;

  func_0009C590(&D_001D9794);
  puVar1 = *(unsigned int **)(D_00314D90 + 0x110);
  func_00110060(*(int *)(D_00314D90 + 0x2c), m1);
  func_00110060(*(int *)(D_00307DF8 + 0x2c), m2);
  if (param_1 != 0) {
    func_0012E6D0(a, &m2[12], &m1[12]);
    a[1] = 0;
    func_0012EA60(a);
    b[0] = 0;
    b[1] = 0x3f800000;
    b[2] = 0;
    func_0012EE00(c, b, a);
    func_0012EA60(c);
    func_0012EE00(b, a, c);
    func_0012EA60(b);
    puVar1 = D_00314E54;
    d = c[0];
    *(float *)&D_00314E54[0x368] = (float)d;
    puVar1[0x369] = ((unsigned int *)c)[1];
    puVar1[0x36a] = ((unsigned int *)c)[2];
    puVar1[0x36c] = b[0];
    puVar1[0x36d] = b[1];
    puVar1[0x36e] = b[2];
    puVar1[0x370] = a[0];
    puVar1[0x371] = a[1];
    puVar1[0x372] = a[2];
    puVar1[0x374] = ((unsigned int *)m1)[12];
    e = m1[13];
    e = e + D_001D541C;
    *(float *)&puVar1[0x375] = (float)e;
    puVar1[0x376] = ((unsigned int *)m1)[14];
    *puVar1 = 0x3f800000;
    return;
  }
  uVar2 = func_00103210(&D_001D9904);
  func_00102E80(uVar2);
  *puVar1 = 0x11;
}
#pragma optimize("", on)
