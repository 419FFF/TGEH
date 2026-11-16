/* 9 functions from 0x00057760 to 0x00058603, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern void func_0007E470(void*);
void func_00057760(void *p) {
    int *data=*(int **)((char*)p+0x110);
    if (*(int*)((char*)p+0x60)==0) func_0007E470(p);
    switch(data[0]) {
    case 0: data[0]=1; break;
    case 1: data[0]=2; break;
    case 2: data[0]=3; break;
    case 3: data[0]=4; break;
    case 4: data[0]=5; break;
    case 5: data[0]=6; break;
    case 6: data[0]=7; break;
    case 7: data[0]=8; break;
    case 8: data[0]=9; break;
    case 9: data[0]=10; break;
    case 10: data[0]=11; break;
    case 11: data[0]=0; break;
    default: break;
    }
}

void func_00057E80(int param_1)
{
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000A1C00(*(undefined4 *)(iVar1 + 0x18));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x14));
  func_00116FB0(iVar1);
  return;
}

void func_00057EB0(int p) {
 extern int D_00307D04,D_00307D10; extern char D_001D51C4,D_001D51BC,D_001D2AF8;
 int func_00116800(...),func_00116A90(...),func_001060A0(...),func_0013E531(...),func_0004FA80(...),func_00048720(...),func_00110060(...),func_0009C7A0(...),func_00116820(...);
 int s;
 func_00116800(D_00307D04);
 s=func_00116A90(0x2b0,1,1);
 *(int*)(p+0x110)=s;
 int b=func_001060A0(&D_001D51C4);
 func_0013E531(&D_001D51BC,0x2b0);
 func_0004FA80(p,s);
 int h=func_00048720(D_00307D10,0x32,b,p);
 *(int*)(s+0x68)=h; *(int*)(s+0x254)=0;
 func_00110060(*(int*)(p+0x2c),s+0x260);
 int x=func_0009C7A0(p,&D_001D2AF8,0);
 *(int*)(s+0x2a0)=x; func_00116820();
}

int func_0012E750(...);
int func_00056D50(...);
int func_0009CC90(...);
float func_0012E7B0(...);
int func_000A2370(...);
int func_00056C00(...);
void _func_00057F50(int p){extern char D_001D2C3C;int s=*(int*)(p+0x110);switch(*(int*)(s+0x254)){case 0:*(int*)s=2;func_0012E750(s+0x6c);func_00056D50(p,s);*(int*)(s+0x254)=1;case 1:if(*(char*)(p+0x174)){*(int*)(s+0x254)=2;*(char*)(p+0x174)=0;}break;case 2:{*(int*)(s+0x254)=3;int a=func_0009CC90(p,&D_001D2C3C)+0x54;*(int*)(s+0x6c)=*(int*)a;*(int*)(s+0x70)=*(int*)(a+4);*(int*)(s+0x74)=*(int*)(a+8);}case 3:(void)func_0012E7B0(s+0x138,s+0x290);break;case 4:{int a=func_000A2370(p+0x64);if(!a)*(int*)*(int*)(s+0x2a0)=0;}}if(*(int*)(s+0x254)!=4)func_00056C00(p,s);}

void func_00058040(int p) {
 extern int D_00307D10; int func_000487A0(...); int func_00116FB0(...);
 int q=*(int*)(p+0x110); func_000487A0(D_00307D10,*(int*)(q+0x68)); func_00116FB0(q); *(int*)(p+0x110)=0;
}

void func_000584D0(int p) {
 int func_000A1C00(...),func_00116FB0(...);
 int s=*(int*)(p+0x110);
 func_000A1C00(*(int*)(s+0x14)); func_000A1C00(*(int*)(s+0x10));
 func_000A1C00(*(int*)(s+8)); func_000A1C00(*(int*)(s+0xc));
 func_00116FB0(s);
}

