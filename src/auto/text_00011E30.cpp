/* 15 functions from 0x00011E30 to 0x00012DBA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00012040(int param_1, undefined4 param_2)
{
  int func_00110420(...);
  int func_00110480(...);
  int func_000F8FA0(...);
  func_00110420(*(int *)(param_1 + 0x2c),**(undefined4 **)(*(int *)(param_1 + 0x2c) + 0x2c));
  func_00110480(param_2,*(undefined4 *)(param_1 + 0x2c),8);
  func_000F8FA0(param_1);
  return;
}

void func_000120B0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00099E70(...);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x25) = 1;
  func_00099E70(param_1 + 0x20,param_3,param_4);
  return;
}

void func_000127A0(void)
{
  extern unsigned int D_003104B4;
  extern int *D_0030C630[];
  extern float D_001D2888;
  int func_001100A0(int, int *);
  float func_0012E870(int, int);
  void func_0009D3E0(int *);
  unsigned int i, j;
  int a, b;
  for (i = 0; i < D_003104B4; i++) {
    if (*((char *)D_0030C630[i] + 0x13) == 0x19) {
      func_001100A0(*(int *)((char *)D_0030C630[i] + 0x2c), &a);
      for (j = 0; j < D_003104B4; j++) {
        char *o = (char *)D_0030C630[j];
        if (o && o[0x13] == 0x30) {
          func_001100A0(*(int *)(o + 0x2c), &b);
          if (func_0012E870(a + 0x30, b + 0x30) < D_001D2888) {
            func_0009D3E0(D_0030C630[i]);
            o = (char *)D_0030C630[j];
            *(short *)(o + 0x144 + *(int *)(o + 0x140) * 2) = (short)i;
            *(int *)(o + 0x140) = *(int *)(o + 0x140) + 1;
            break;
          }
        }
      }
    }
  }
}

extern unsigned int _D_002EAF90[10];
extern float _D_001D286C, _D_001D2868, _D_001D2874;
extern float _D_001E461C, _D_001D27B8;
int func_00099EB0(int);
void _func_000128D0(int param_1)
{
  int i;
  if ((*(unsigned char *)(param_1 + 0x11) & 0x10) != 0) {
    for (i = 0; i < 10 && _D_002EAF90[i] != (unsigned int)param_1; ++i) {}
    if (i < 10) {
      _D_002EAF90[i] = 0;
      *(unsigned char *)(param_1 + 0x11) &= 0xef;
    }
  }
}

unsigned char func_00012900(int esi){extern int D_00307DF8;extern void* D_001E3624[];int func_00131310(...);int func_001160E0(int,int,int,int,float);int func_000120E0(...),func_000F8FA0(...);if(*(int*)(esi+0x5c)){int n=func_00131310();if(n%50==0)func_001160E0(**(int**)(esi+0x5c),1,*(int*)(esi+0x5c),5,25.0f);}if(*(unsigned char*)(esi+0x12)==1&&*(unsigned char*)(esi+0x175))func_000120E0(esi+0x150);if(D_00307DF8==esi)return 1;unsigned short flags=*(unsigned short*)(esi+0x10);if(!(flags&0x10)&&!(flags&0x800)){unsigned char state=*(unsigned char*)(esi+0x15);void(*f)(void)=(void(*)(void))D_001E3624[state*3];if(f){int old=**(int**)(*(int*)(esi+0x2c)+0x2c);f();if(**(int**)(*(int*)(esi+0x2c)+0x2c)!=old)func_000F8FA0(esi);}}return 0;}

unsigned char func_00012CF0(int self){extern float D_001D289C,D_001D2890;int func_0013F2E9(...),func_0009C7A0(...);unsigned char c=*(unsigned char*)(self+0x15);if(c==0x3d||c==0x3e){int *q=(int*)*(int*)(*(int*)(self+0x2c)+0x2c);int d=*q;int v=*(int*)(d+0x38);if(!func_0013F2E9(v,&D_001D289C))return 0;}else if(c==0x43)return 0;int *r=(int*)func_0009C7A0(self,&D_001D2890,0);if(r&&*r==0x3f800000)return 0;return (*(unsigned short*)(self+0x10)&0x100)>>8;}

void func_00012D60(int p,unsigned int next){extern int D_00307DF8;extern void* D_001E3628[];extern void* D_001E3620[];void func_000F8FA0(int);if(p==D_00307DF8&&next!=0x15)return;if(next==0){unsigned char old=*(unsigned char*)(p+0x15);void(*f)(int)=(void(*)(int))D_001E3628[old*3];if(f)f(p);}unsigned char n=(unsigned char)next;*(unsigned char*)(p+0x15)=n;void(*g)(int)=(void(*)(int))D_001E3620[n*3];if(g)g(p);func_000F8FA0(p);}

