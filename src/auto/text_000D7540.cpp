/* 20 functions from 0x000D7540 to 0x000D84FA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_001E54E8;
extern int D_0031E508;
extern unsigned char D_001E53A8[];
void func_000D7870(signed char *p){if(p){int i=(((p[1]+p[0]*6)*0x10+p[2])*0xc+p[3])*0xc;*(int*)(D_0031E508+i+4)=0;*(int*)(p+8)=1;}}

int func_000D79D0(signed char *p,signed char *q,int val){int i=(((p[1]+p[0]*6)*0x10+p[2])*0xc+p[3])*0xc;int *table=(int*)D_0031E508;if(table[i/4+1]==val)table[i/4+1]=0;if(q[0]==1&&q[1]==5&&q[3]==11&&q[2]>=9&&q[2]<=10){*table=1;return 1;}i=(((q[1]+q[0]*6)*0x10+q[2])*0xc+q[3])*0xc;*(int*)(D_0031E508+i+4)=val;return 0;}

void func_000D7C70(void){extern void func_000688D0(...); extern void func_000D7540(...); int *s=(int*)D_0031E508; char b=D_001E53A8[(signed char)s[0xd805/4]*4+(signed char)s[0xd804/4]]; int a[4]={0x44200000,0x43f00000,0x43a00000,0x43700000};func_000688D0();func_000D7540((char*)s+0xdaa4+b*0x14,&a[2],a,1,0,0);}

void func_000D7DE0(void)
{
 extern int D_0031E508;
 int func_000688D0(...),func_000D7540(...);
 int p=D_0031E508;
 float a=32.0f,b=30.0f,c=320.0f,d=0.0f;
 func_000688D0(&a);
 if(*(unsigned char *)(p+0xd805)==0) {
  d=52.5f;
  func_000D7540(p+0xdcc0,&c,&a,4,5,0);
 }
}

void func_000D7E40(void)
{
 extern int D_0031E508;
 extern float D_001D313C;
 int func_000688D0(...),func_000D7540(...);
 int p=D_0031E508;
 float vals[4];
 int i=0;
 vals[0]=40.0f;
 vals[1]=56.0f;
 vals[2]=*(float *)(p+0xefe4)*D_001D313C;
 vals[3]=*(float *)(p+0xefe8)*D_001D313C;
 func_000688D0(&vals);
 while(i<*(int *)(p+0xdaa0)) {
  func_000D7540(p+0xd80c,vals,vals+2,4,5,0);
  vals[0]+=D_001D313C;
  ++i;
 }
}

unsigned char func_000D7FE0(int *p,int *q){int *x=&D_001E54E8;if(q[1]!=20){while(*x!=-1){if(*x++==q[1])goto done;}if(*p==0)return 1;}done:return 0;}

void func_000D8370(void)
{
  int func_000B5650(...);
  int func_000D7C70(...);
  int func_000D7B60(...);
  int func_000D7790(...);
  int func_000D7CF0(...);
  int func_000D78C0(...);
  int func_000D7A80(...);
  int func_000D7EE0(...);
  int func_000D7DE0(...);
  int func_000688D0(...);
  char cVar1;
  
  cVar1 = func_000B5650(6);
  if (cVar1 != '\0') {
    func_000D7C70();
    func_000D7B60();
    func_000D7790();
    func_000D7CF0();
    func_000D78C0();
    func_000D7A80();
    func_000D7EE0();
    func_000D7DE0();
    func_000688D0();
    return;
  }
  return;
}

void func_000D83B0(void)
{
  extern undefined4 D_003080AC;
  int func_000D7E40(...);
  if (D_003080AC != 2) {
    func_000D7E40();
    return;
  }
  return;
}

void func_000D83C0(unsigned int *p)
{
 int func_000D72B0(...),func_000D79D0(...);
 if(p[2]==4) func_000D72B0(p,p+1,0xffffffff,0);
 else if(p[2]==5) func_000D72B0(p,p+1,1,0);
 func_000D79D0(p,p+1,1);
 p[0]=p[1];
 p[2]=2;
}

