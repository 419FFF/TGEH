/* 23 functions from 0x000F96A0 to 0x000FA693, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000F96A0(int param_1)
{
  int func_000F9610(...);
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  func_000F9610(*(undefined4 *)(param_1 + 0xe0));
  puVar4 = (undefined4 *)(param_1 + 0x294);
  iVar3 = 6;
  do {
    for (puVar2 = (undefined4 *)*puVar4; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      uVar1 = *(ushort *)(puVar2[2] + 0x10);
      if (((uVar1 & 0x40) == 0) && ((uVar1 & 1) != 0)) {
        func_000F9610(*(undefined4 *)(puVar2[2] + 0x2c));
      }
    }
    puVar4 = puVar4 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

void func_000F9700(void){extern unsigned int D_00324AF8;extern int D_00324968[];int func_000F80F0(...);int func_00110170(...);register unsigned int i=0;if(D_00324AF8<=0)return;do{if(*(unsigned char*)(D_00324968[i]+0x284)){func_000F96A0(D_00324968[i]);func_000F80F0(1);func_00110170(*(int*)(D_00324968[i]+0xe0));func_000F80F0(0);}i++;}while(i<D_00324AF8);}

int func_000F9760(void)
{
  extern undefined4 D_00324B80;
  int func_00116E50(...);
  extern undefined4 D_00324B84;
  D_00324B80 = func_00116E50(D_00324B80,(D_00324B84 * 9 + 9) * 8,1,1);
  D_00324B84 = D_00324B84 + 1;
  return D_00324B80 + -0x48 + D_00324B84 * 0x48;
}

int func_000F9BB0(int a,int b){extern int D_00324B74,D_00324B68;int func_0011C3E0(...);int func_0011C3B0(...);int p=D_00324B74;func_0011C3E0(p);for(int i=0;i<0x13a;i++)((int*)p)[i]=0;*(int*)(p+0xc)=a;*(int*)(p+0x18)=0;*(char*)(p+0x15)=0;*(int*)(p+0x10)=b;func_0011C3B0(&D_00324B68,p,p);return p;}

int func_000F9C00(int a,int b){extern int D_00324B74,D_00324B68;int func_0009C510(...);int func_0009C590(...);int func_0009CAA0(...);int func_0011C3E0(...);int func_0011C3B0(...);char x[128],y[128];func_0009C510(b,x,y);if(!a)a=func_0009C590(x);int z=func_0009CAA0(a,y);if(z){int p=D_00324B74;func_0011C3E0(p);for(int i=0;i<0x13a;i++)((int*)p)[i]=0;*(int*)(p+0xc)=a;*(int*)(p+0x18)=0;*(char*)(p+0x15)=0;*(int*)(p+0x10)=z;func_0011C3B0(&D_00324B68,p,p);return p;}return 0;}

unsigned int func_000F9CA0(int a,int value){extern int D_00324B84,D_00324B80;int func_0011B4F0(...);unsigned int i=0;for(;i<(unsigned int)D_00324B84;i++){if(!func_0011B4F0(D_00324B80+i*0x48,a)){*(int *)(D_00324B80+0x20+i*0x48)=value;return i;}}return 0xffffffff;}

unsigned short func_000F9D00(int a){extern int D_00324B84,D_00324B80;int func_0011B4F0(...);unsigned int i=0;for(;i<(unsigned int)D_00324B84;i++){if(!func_0011B4F0(D_00324B80+i*0x48,a))return (unsigned short)i;}return 0xffff;}

void func_000F9E50(int *a,void *b,int *out){char func_000F9D50(int *, void *, char *);int func_0009C510(...),func_0009C6A0(...),func_0009C590(...),func_0009C7A0(...);char x[128],y[128],z[128];int v;if(func_000F9D50(a,b,z)){func_0009C510(b,x,y);v=func_0009C6A0(a[3],x);out[0]=v;out[1]=func_0009C7A0(v,b,0);}else{func_0009C510(z,x,y);v=func_0009C590(x);out[0]=v;out[1]=func_0009C7A0(v,y,0);}}

void func_000F9F10(int *param_1, void *param_2, int *param_3)
{
  extern char func_000F9D50(...);
  extern int func_0009C510(...);
  extern int func_0009C6A0(...);
  extern int func_0009C590(...);
  extern int func_0009CBF0(...);
  extern int func_0011B4F0(...);
  extern char D_001D29C7;
  extern char D_001D574C;
  char local_80[0x80];
  char local_100[0x80];
  char local_180[0x80];
  int value;
  if (func_0011B4F0(param_2, &D_001D29C7) && func_0011B4F0(param_2, &D_001D574C)) {
    if (func_000F9D50(param_1, param_2, local_80)) {
      func_0009C510(param_2, local_180, local_100);
      value = func_0009C6A0(param_1[3], local_180);
      param_3[0] = value;
      param_3[1] = func_0009CBF0(value, param_2);
    } else {
      func_0009C510(local_80, local_180, local_100);
      value = func_0009C590(local_180);
      param_3[0] = value;
      param_3[1] = func_0009CBF0(value, local_100);
    }
  }
}

void func_000FA000(int *param_1, void *param_2, int *param_3)
{
  extern char func_000F9D50(...);
  extern int func_0009C510(...);
  extern int func_0009C6A0(...);
  extern int func_0009C590(...);
  extern int func_0009CB40(...);
  char local_80[0x80];
  char local_100[0x80];
  char local_180[0x80];
  int value;
  if (func_000F9D50(param_1, param_2, local_80)) {
    func_0009C510(param_2, local_180, local_100);
    value = func_0009C6A0(param_1[3], local_180);
    param_3[0] = value;
    param_3[1] = func_0009CB40(value, param_2);
  } else {
    func_0009C510(local_80, local_180, local_100);
    value = func_0009C590(local_180);
    param_3[0] = value;
    param_3[1] = func_0009CB40(value, local_100);
  }
}

void func_000FA0C0(int *param_1, void *param_2, int *param_3)
{
  extern char func_000F9D50(...);
  extern int func_0009C510(...);
  extern int func_0009C6A0(...);
  extern int func_0009C590(...);
  extern int func_0009CAA0(...);
  char local_80[0x80];
  char local_100[0x80];
  char local_180[0x80];
  int value;
  if (func_000F9D50(param_1, param_2, local_80)) {
    func_0009C510(param_2, local_180, local_100);
    value = func_0009C6A0(param_1[3], local_180);
    param_3[0] = value;
    param_3[1] = func_0009CAA0(value, param_2);
  } else {
    func_0009C510(local_80, local_180, local_100);
    value = func_0009C590(local_180);
    param_3[0] = value;
    param_3[1] = func_0009CAA0(value, local_100);
  }
}

void func_000FA180(int *param_1, void *param_2, int *param_3)
{
  extern char func_000F9D50(...);
  extern int func_0009C510(...);
  extern int func_0009C6A0(...);
  extern int func_0009C590(...);
  extern int func_0009CC90(...);
  extern int func_0011B4F0(...);
  extern char D_001D29C7;
  extern char D_001D574C;
  char local_80[0x80];
  char local_100[0x80];
  char local_180[0x80];
  int value;
  if (func_0011B4F0(param_2, &D_001D29C7) && func_0011B4F0(param_2, &D_001D574C)) {
    if (func_000F9D50(param_1, param_2, local_80)) {
      func_0009C510(param_2, local_180, local_100);
      value = func_0009C6A0(param_1[3], local_180);
      param_3[0] = value;
      param_3[1] = func_0009CC90(value, param_2);
    } else {
      func_0009C510(local_80, local_180, local_100);
      value = func_0009C590(local_180);
      param_3[0] = value;
      param_3[1] = func_0009CC90(value, local_100);
    }
  }
}

void func_000FA270(int param_1, undefined4 param_2, undefined4 *param_3)
{
  int func_000F9D50(...);
  extern undefined4 D_00308158;
  int func_0009C6A0(...);
  int func_0009C590(...);
  char cVar1;
  undefined4 uVar2;
  undefined1 local_80 [128];
  
  cVar1 = func_000F9D50(param_1,param_2,local_80);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xc) != D_00308158)) {
    uVar2 = func_0009C6A0(*(int *)(param_1 + 0xc),param_2);
    *param_3 = uVar2;
    return;
  }
  uVar2 = func_0009C590(local_80);
  *param_3 = uVar2;
  return;
}

void func_000FA2E0(int param_1, undefined4 param_2, undefined4 *param_3)
{
  int func_000F9D50(...);
  extern undefined4 D_00308158;
  int func_001031C0(...);
  int func_00103210(...);
  char cVar1;
  undefined4 uVar2;
  undefined1 local_80 [128];
  
  cVar1 = func_000F9D50(param_1,param_2,local_80);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xc) != D_00308158)) {
    uVar2 = func_001031C0(*(int *)(param_1 + 0xc),param_2);
    *param_3 = uVar2;
    return;
  }
  uVar2 = func_00103210(local_80);
  *param_3 = uVar2;
  return;
}

unsigned char func_000FA580(void){extern int D_00324B68;unsigned char r=0;int p=D_00324B68;while(p){int d=*(int*)(p+8);p=*(int*)p;if(*(unsigned int*)(d+0x18)<*(unsigned short*)(*(int*)(d+0x10)+6))r|=*(unsigned char*)(d+0x15);}return r;}

void func_000FA5B0(int param_1,int param_2,int param_3) { extern int D_00324B68; int p=D_00324B68;while(p){int node=*(int*)(p+8);p=*(int*)p;if(node!=param_1&&*(int*)(node+0xc)==param_2&&*(int*)(node+0x10)==param_3)*(unsigned int*)(node+0x18)=*(unsigned short*)(*(int*)(node+0x10)+6);}}

void func_000FA640(int param_1, char param_2)
{
  if (param_2 != '\0') {
    *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + '\x01';
    return;
  }
  *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + -1;
  return;
}

void func_000FA660(int param_1,char param_2) { extern int D_00324B68; int p=D_00324B68;while(p!=0){int node=*(int*)(p+8);int next=*(int*)p;if(node!=param_1){char *field=(char*)(node+0x14);if(param_2)*field=*field+1;else *field=*field-1;}p=next;}}

