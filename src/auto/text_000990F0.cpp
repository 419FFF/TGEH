/* 16 functions from 0x000990F0 to 0x0009A0C8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00099410(void){extern int D_00307CB0,D_00307CAC;int func_0011B990(int),func_0013C020(int),func_00116FB0(int);int x=D_00307CB0;if(x){int a=*(int*)(x+0x1414);--*(short*)(a+0x2a);func_0011B990(*(int*)(x+0x1414));func_0013C020(*(int*)(D_00307CB0+0x141c));func_00116FB0(D_00307CB0);}D_00307CAC=0;D_00307CB0=0;}

#pragma float_control(precise, on)
int _func_00099470(void){
 extern int D_00307CB0; extern float D_001E461C, D_001D27B4;
 float step = D_001E461C * D_001D27B4;
 int changed = 0;
 float *p = (float *)(D_00307CB0 + 4);
 for (int i = 0; i < 4; i++, p += 4) {
  for (int j = 0; j < 4; j++) {
   float *c = &p[j], *t = &p[j + 20];
   if (*c < *t) { *c += step; if (*c > *t) *c = *t; changed = 1; }
   else if (*c > *t) { *c -= step; if (*c < *t) *c = *t; changed = 1; }
  }
 }
 return changed;
}
void _func_000995E0(void){
 extern int D_00307CB0; extern float D_001D27B8; int p=D_00307CB0;
 float *a=(float *)(p+0x94),*b=(float *)(p+0x9c);
 if(*a!=*b){double delta=(double)*b-(double)*a;if(delta<=D_001D27B8){if(*a<*b)*a=*b;}else if(*b<*a)*a=*b;}
 float *c=(float *)(p+0x98),*d=(float *)(p+0xa0);
 if(*c!=*d){double delta=(double)*d-(double)*c;if(delta<=D_001D27B8){if(*c<*d)*c=*d;}else if(*d<*c)*c=*d;}
}
void __cdecl _func_000996B0(void) { volatile int local; local = 0; }

void func_00099D40(int a,int b,int c,int d){extern int D_00307CB0;register int x=D_00307CB0;if(x){*(int*)(x+0x54)=a;*(int*)(x+0x58)=b;*(int*)(x+0x5c)=c;*(int*)(x+0x60)=d;}}

void func_00099D70(int a,int b,int c,int d){extern int D_00307CB0;register int x=D_00307CB0;if(x){*(int*)(x+0x64)=a;*(int*)(x+0x68)=b;*(int*)(x+0x6c)=c;*(int*)(x+0x70)=d;}}

void func_00099DA0(int a,int b,int c,int d)
{
 extern int D_00307CB0;
 register int x=D_00307CB0;
 if(x){*(int*)(x+0x74)=a;*(int*)(x+0x78)=b;*(int*)(x+0x7c)=c;*(int*)(x+0x80)=d;}
}

void func_00099DD0(int a,int b,int c,int d)
{
 extern int D_00307CB0;
 register int x=D_00307CB0;
 if(x){*(int*)(x+0x84)=a;*(int*)(x+0x88)=b;*(int*)(x+0x8c)=c;*(int*)(x+0x90)=d;}
}

void func_00099E10(undefined4 param_1)
{
  extern undefined4 D_00307CB0;
  if (D_00307CB0 != 0) {
    *(undefined4 *)(D_00307CB0 + 0x9c) = param_1;
  }
  return;
}

void func_00099E30(int x){extern int D_00307CB0;if(D_00307CB0)*(int*)(D_00307CB0+0xa0)=x;}

void _func_00099E50(void)
{
  extern int _D_00307CB0;
  extern int _D_00307CAC;
  void _func_000990F0(void);
  if (_D_00307CB0 == 0) {
    _D_00307CAC = 1;
    _func_000990F0();
  }
}

void func_00099E70(char *param_1, int param_2, int param_3)
{
  if ((param_2 != 0) && (param_3 != 0)) {
    param_1[3] = '\x03';
    *param_1 = (char)param_2 << 2;
    param_1[1] = (char)param_3 << 2;
    param_1[2] = '\0';
    return;
  }
  param_1[3] = param_1[3] | 5;
  return;
}

void func_00099EB0(int param_1)
{
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 5;
  return;
}

void func_00099EC0(void)
{
  extern int D_00324AFC;
  int func_00088A50(...);
  unsigned char bVar1, bVar2, bVar4;
  unsigned char *pbVar6;
  int iVar5;
  int local_4;
  int *node;
  char *local_8;

  local_4 = 0;
  if (*(int *)(D_00324AFC + 0xe4) != 0) {
    local_8 = (char *)0xe8;
    do {
      for (node = *(int **)(*(int *)(local_8 + D_00324AFC) + 0x294); node != 0; node = (int *)*node) {
        iVar5 = node[2];
        pbVar6 = 0;
        if (*(char *)(iVar5 + 0x12) == 1) {
          pbVar6 = (unsigned char *)(iVar5 + 0x170);
        } else if (*(char *)(iVar5 + 0x12) == 0xb) {
          pbVar6 = (unsigned char *)(iVar5 + 0x120);
        }
        if (*(char *)(iVar5 + 0x13) == 0x34) {
          pbVar6 = *(unsigned char **)(iVar5 + 0x15c);
        }
        if (pbVar6 != 0) {
          if ((pbVar6[3] & 4) != 0) {
            func_00088A50(*(int *)(iVar5 + 0x2c), 0x3f800000, 1);
            pbVar6[3] = pbVar6[3] & 0xfa;
          } else {
            bVar4 = pbVar6[3] & 0xf7;
            pbVar6[3] = bVar4;
            if ((*(unsigned char *)(*(int *)(iVar5 + 0x2c) + 0x20) & 1) != 0) {
              pbVar6[3] = bVar4 | 8;
            }
            bVar4 = pbVar6[3];
            if (((bVar4 & 1) != 0) && ((bVar4 & 8) == 0)) {
              bVar1 = pbVar6[2];
              bVar2 = *pbVar6;
              if (bVar1 < bVar2) {
                bVar4 = bVar4 | 2;
                pbVar6[3] = bVar4;
              } else if ((int)bVar1 < (int)pbVar6[1] + (int)bVar2) {
                bVar4 = bVar4 & 0xfd;
                pbVar6[3] = bVar4;
              }
              pbVar6[2] = bVar1 + 1;
              if ((unsigned int)(unsigned char)(bVar1 + 1) == (unsigned int)pbVar6[1] + (unsigned int)bVar2) {
                pbVar6[2] = 0;
              }
              if ((pbVar6[3] & 2) == 0) {
                func_00088A50(*(int *)(iVar5 + 0x2c), 0x3e4ccccd, 1);
              } else {
                func_00088A50(*(int *)(iVar5 + 0x2c), 0x3f4ccccd, 1);
              }
            }
          }
        }
      }
      local_4 = local_4 + 1;
      local_8 = local_8 + 8;
    } while (local_4 != *(int *)(D_00324AFC + 0xe4));
  }
}

extern int D_00324AFC;
int func_00110330(int,int);
void func_0009A030(void)
{
 extern int D_00324AFC;
 int base=D_00324AFC;
 int count=*(int *)(base+0xe4);
 int i=0,off=0xe8;
 if(count) {
  do {
   int *c=*(int **)(base+off);
   int *n=*(int **)((char *)c+0x294);
   while(n) {
    int o=*(int *)(n+2);
    char t=*(char *)(o+0x12);
    int p=0;
    if(t==1)p=o+0x170;
    else if(t==11)p=o+0x120;
    if(*(char *)(o+0x13)==0x34)p=*(int *)(o+0x15c);
    if(p && ((*(char *)(p+3)&1)!=0) && ((*(char *)(p+3)&8)==0))
      func_00110330(*(int *)(o+0x2c),1);
    n=*(int **)n;
   }
   base=D_00324AFC; count=*(int *)(base+0xe4); i++; off+=8;
  } while(i!=count);
 }
}

