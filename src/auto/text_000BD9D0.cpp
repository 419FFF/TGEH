/* 7 functions from 0x000BD9D0 to 0x000BE258, found by Ghidra. */
#include "common.h"

extern int D_00314C74;
extern int D_00308158;
extern int D_001D9578;
extern int D_003080AC;
extern unsigned char D_00314C78;
extern int D_003250F8;
extern int D_001D9678;
extern int D_001D967C;
extern float D_001D27B8;
int func_0009C7A0(...);
int func_0005F310(...);
int func_0005CCC0(...);
int func_000B54A0(...);
int func_000B54B0(...);
int func_000A3150(...);
int func_000A2500(...);
int func_001054C0(...);
int func_001054B0(...);
int func_00105990(...);
int func_00120E50(...);
int func_000AFD10(...);
int func_00121990(...);
int func_0013E3F4(...);
void func_000BDCA0(void) {
 float f=(float)(volatile int)D_00314C74;
 int *p=(int *)func_0009C7A0(D_00308158,&D_001D9578,0);
 *p=*(int *)&f;
 func_0005F310(0); func_0005CCC0(1); func_000B54A0(0); func_000B54B0(0);
}

void func_000BDCF0(void) {
 int a[4];
 if (D_003080AC==2) return;
 func_000A3150(1,D_00314C74); func_000A2500(0x40400000);
 if (!D_00314C78) return;
 D_003250F8=1;
 a[0]=0x43988000;a[1]=0x42e00000;a[2]=0x43a78000;a[3]=0x430a0000;
 func_001054C0(0,a,0x61,-1); func_001054B0(0); func_00105990();
 func_00120E50(0x43a00000,0x42a00000);
 func_00121990(func_000AFD10(&D_001D9678));
}

void func_000BDD90(void) {
 func_000A3150(0,0);
 float *p=(float *)func_0009C7A0(D_00308158,&D_001D967C,0);
 if(*p!=D_001D27B8) {
  int *q=(int *)func_0009C7A0(D_00308158,&D_001D9578,0);
  if(*q!=0x40400000) {
   float *v=(float *)func_0009C7A0(D_00308158,&D_001D9578,0);
   if(func_0013E3F4(*v)) func_000A3150(1,func_0013E3F4(*v));
  }
 }
}

