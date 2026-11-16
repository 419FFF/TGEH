/* 18 functions from 0x000F7790 to 0x000F86DA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000F7BE0(int param_1)
{
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0x3f800000;
  return;
}

undefined4 func_000F7C10(undefined4 param_1)
{
  int func_00131C80(...);
  int func_00131D10(...);
  int iVar1;
  
  iVar1 = func_00131C80(param_1,0);
  if (iVar1 != 0) {
    func_00131D10(iVar1);
  }
  return 1;
}

void func_000F7C40(int param_1, undefined4 param_2, undefined4 param_3)
{
  int func_00028F60(...);
  func_00028F60(param_1,param_3);
  *(undefined1 *)(param_1 + 0x28e) = 1;
  return;
}

void func_000F7C60(void) {
  extern int D_001DD024, D_00324968[100], D_00324AF8, D_00324B00, D_00324B08[20], D_00324AFC;
  int func_0011B5C0(...), func_00110370(...);
  void func_000F7C10(...), func_000688D0(...), func_000F7C40(...);
  int local[4];
  func_0011B5C0(&D_001DD024,func_000F7C10,func_000688D0);
  for(int i=0;i<100;i++) D_00324968[i]=0;
  D_00324AF8=0;
  local[0]=0; local[1]=(int)func_000F7C40; local[2]=0; local[3]=(int)func_000688D0;
  D_00324B00=func_00110370(local);
  for(int i=0;i<20;i++) D_00324B08[i]=0;
  D_00324AFC=0;
}

void func_000F7D70(int param_1, int param_2, unsigned int param_3) {
  unsigned int n=*(unsigned int*)(param_1+0xe4);
  for(unsigned int i=0;i<n;i++) {
    int *p=(int*)(param_1+0xe8+i*8);
    if(p[0]==param_2) { if((unsigned int)p[1]>=param_3) return; p[1]=param_3; return; }
  }
  *(int*)(param_1+0xe8+n*8)=param_2;
  *(unsigned int*)(param_1+0xec+n*8)=param_3;
  *(unsigned int*)(param_1+0xe4)=n+1;
}

void func_000F7DE0(int p)
{
 int func_000F7D70(...), func_0011CCD0(...);
 extern unsigned int D_00324AF8, D_00324968[];
 int *node;
 func_000F7D70(p,p,0);
 node=*(int **)(*(int *)(p+0xe0)+0x30);
 while(node) {
  int obj=*node;
  if ((*(unsigned char *)(obj+0x20)&0x10)==0) {
   int id=func_0011CCD0(obj);
   unsigned int i;
   for(i=0;i<D_00324AF8;i++) {
    int q=D_00324968[i];
    if (*(int *)(q+0xe0)==id) { func_000F7D70(p,q,1); break; }
   }
  }
  node=(int *)node[3];
 }
}

void func_000F7E60(int a, int p, int mode)
{
 extern unsigned int D_00324AF8, D_00324968[];
 int func_000F7D70(...), func_0011CCD0(...);
 unsigned int i;
 for(i=0;i<D_00324AF8;i++) if (*(int *)(D_00324968[i]+0xe0)==p) break;
 if(i>=D_00324AF8) return;
 func_000F7D70(a,D_00324968[i],mode);
 if(mode==2) return;
 {
  int *node=*(int **)(p+0x30);
  while(node) {
   int obj=*node;
   if ((*(unsigned char *)(obj+0x20)&0x10)==0) {
    int id=func_0011CCD0(obj,mode+1);
    func_000F7E60(a,id,mode+1);
   }
   node=(int *)node[3];
  }
 }
}

void func_000F7EF0(int a0, int a1) {
    int func_000F7D70(...);
    func_000F7D70(a0, a1, 255);
}

char func_000F8610(int p)
{
 char func_000F8580(...);
 unsigned int i;
 int *link;
 if (!func_000F8580(*(int *)(p+0xe0))) return 0;
 for (i=0;i<6;i++) {
  for (link=*(int **)(p+0x294+i*12);link;link=(int *)*link) {
   int obj=link[2]; unsigned short flags=*(unsigned short *)(obj+0x10);
   if (!(flags&0x40) && (flags&1) && !func_000F8580(*(int *)(obj+0x2c))) return 0;
  }
 }
 return 1;
}

void func_000F8680(int param_1) {
  extern int D_003268B0, D_003080AC;
  void func_0011A5A0(...); void func_0011A5C0(...);
  if ((*(unsigned char *)(param_1+0xd0)&1)==0) {
    if (*(unsigned char *)(param_1+0x22)==D_003268B0) {
      if (D_003080AC) func_0011A5C0(param_1,3); else func_0011A5A0(param_1);
    }
    for (int p=*(int*)(param_1+0x28); p; p=*(int*)(p+0xc))
      if ((*(unsigned char *)(p+6)&8)==0) func_000F8680(*(int*)p);
  }
}

