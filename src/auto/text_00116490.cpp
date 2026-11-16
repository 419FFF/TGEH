/* 25 functions from 0x00116490 to 0x0011745B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern float _func_001161D0(void *, int);
extern void _func_00115FC0(void *, float);
void _func_00116590(void *p, unsigned int value)
{
    float f = _func_001161D0(p, 0);
    *(unsigned int *)((char *)p + 0x1c) = value;
    _func_00115FC0(p, f);
}

void func_001165C0(int param_1)
{
  int func_001161D0(...);
  func_001161D0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),0);
  return;
}

void _func_001165E0(void *p)
{
    if (*(int *)((char *)p + 0x10) != 0) {
        *(float *)((char *)p + 0x20) = _func_001161D0(p, 0);
        *(int *)((char *)p + 0x10) = 0;
    }
}

void _func_00116610(void *p)
{
    void *q = *(void **)((char *)*(void **)((char *)p + 4) + 8);
    if (*(int *)((char *)q + 0x10) != 0) {
        *(float *)((char *)q + 0x20) = _func_001161D0(q, 0);
        *(int *)((char *)q + 0x10) = 0;
    }
}

void _func_00116640(int x){extern int _func_00116A90(int,int,int); int* s=(int*)x; unsigned int v=s[2]; int n=5000; if(v<(unsigned)n)n=v; int old=s[0xdc/4];old+=n;s[0xdc/4]=old;int* p=(int*)_func_00116A90(n*20,1,1);int i=n-1, b=0; if(i>0){int* q=p;b=i;do{--i; q[0]=(int)(q+5);q+=5;}while(i);}p[b*5]=0;int* node=(int*)s[0xb4/4];while(*node)node=(int*)*node;*node=(int)p;int k=s[3];s[5+k]=n;s[25+k]=(int)p;s[3]=k+1;}

void _func_001166D0(int* param_1, int* param_2, int param_3) {
  if (param_3 == 0) {
    param_2[1] = param_1[0xbc/4];
    param_2[0] = 0;
    if (param_1[0xbc/4] != 0) {
      *(int*)param_1[0xbc/4] = (int)param_2;
      param_1[0xbc/4] = (int)param_2;
      return;
    }
    param_1[0xb8/4] = (int)param_2;
    param_1[0xbc/4] = (int)param_2;
    return;
  }
  param_2[0] = param_3;
  param_2[1] = *(int*)(param_3+4);
  if (*(int*)(param_3+4) != 0) {
    *(int*)*(int*)(param_3+4) = (int)param_2;
    *(int*)(param_3+4) = (int)param_2;
    return;
  }
  param_1[0xb8/4] = (int)param_2;
  *(int*)(param_3+4) = (int)param_2;
}

void _func_00116740(int* param_1, int* param_2) {
  if (param_2[1] != 0) *(int*)param_2[1] = param_2[0];
  else param_1[0xb8/4] = param_2[0];
  if (param_2[0] != 0) *(int*)(param_2[0]+4) = param_2[1];
  else param_1[0xbc/4] = param_2[1];
}

void func_00116780(unsigned char p){extern int D_00326814,D_00326810; extern unsigned char D_00326818[],D_0032687C; void func_0013AF50(int); void func_0013AF70(int); int i; unsigned char c; func_0013AF50(D_00326814); i=D_00326810; c=p; i++; D_00326818[i]=c; D_0032687C=c; {int x=D_00326814; D_00326810=i; func_0013AF70(x);}}

void func_001167C0(void){extern int D_00326814,D_00326810; extern unsigned char D_00326817[],D_0032687C; void func_0013AF50(int); void func_0013AF70(int); func_0013AF50(D_00326814); D_0032687C=D_00326817[D_00326810]; D_00326810--; func_0013AF70(D_00326814);}

void _func_00116800(int value) {
  extern int __cdecl _func_0013B1E0(void);
  int* p = (int*)_func_0013B1E0();
  int index = p[0x84 / 4] + 1;
  p[0x84 / 4] = index;
  p[index + 0x88 / 4] = value;
}

void func_00116820(void)
{
  int func_0013B1E0(...);
  int iVar1;
  
  iVar1 = func_0013B1E0();
  *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
  return;
}

int _func_00116960(int *piVar1, undefined4 D_00326814, undefined D_00326790, int func_0013AF50, int func_0013AF70)
{
  // Implementation for this function
  return 0;
}

void func_00116FB0(int p){extern int D_00326814,D_00326790[]; void func_0013AF50(int); void func_0013AF70(int); void func_00116CC0(int,int); if(p){int q=*(int*)(p-4); func_0013AF50(D_00326814); func_00116CC0(D_00326790[*(unsigned char*)(q+0x13)],q); *(int*)(p-4)=0; func_0013AF70(D_00326814);}}

void func_001170B0(void)
{
  int func_0013AF50(...);
  extern undefined4 D_00326814;
  extern undefined D_00326790;
  int func_0013AF70(...);
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  func_0013AF50(D_00326814);
  uVar3 = 0;
  do {
    if ((*(int *)(((undefined *)&D_00326790) + uVar3) != 0) &&
       (piVar1 = *(int **)(*(int *)(((undefined *)&D_00326790) + uVar3) + 0xb8), piVar1 != (int *)0x0)) {
      piVar2 = (int *)*piVar1;
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)*piVar1;
        piVar2 = piVar1;
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x80);
  func_0013AF70(D_00326814);
  return;
}

extern int _D_00326814;
extern int _D_00326880;
extern int _D_00326790;
extern int _D_00326794;
extern int _D_00326798;
extern int _D_0032679C;
int _func_0013AF50(...);
int _func_0013B1E0(...);
void _func_0013AF70(...);
int _func_00136B30(...);
void _func_00117100(void)
{
    _func_0013AF50(_D_00326814);
    int p = _func_0013B1E0();
    int v = *(int *)(p + 0x80);
    *(int *)(p + 0x80) = v + 1;
    _func_0013AF70(_D_00326814);
}

void _func_00117130(void)
{
    _func_0013AF50(_D_00326814);
    int p = _func_0013B1E0();
    int v = *(int *)(p + 0x80);
    *(int *)(p + 0x80) = v - 1;
    _func_0013AF70(_D_00326814);
}

void func_00117340(int p){extern int D_00326880; extern int D_00326790[]; void func_00116FB0(int); void func_00136B20(void); D_00326790[*(int*)(p+0xe8)]=0; if(p==D_00326880) func_00136B20(); else func_00116FB0(p);}

