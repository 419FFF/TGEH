/* 16 functions from 0x000990F0 to 0x0009A0C8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00099410(void){extern int D_00307CB0,D_00307CAC;int func_0011B990(int),func_0013C020(int),func_00116FB0(int);int x=D_00307CB0;if(x){int a=*(int*)(x+0x1414);--*(short*)(a+0x2a);func_0011B990(*(int*)(x+0x1414));func_0013C020(*(int*)(D_00307CB0+0x141c));func_00116FB0(D_00307CB0);}D_00307CAC=0;D_00307CB0=0;}

void __cdecl _func_000996B0(void) { volatile int local; local = 0; }

void func_00099D40(int a,int b,int c,int d){extern int D_00307CB0;register int x=D_00307CB0;if(x){*(int*)(x+0x54)=a;*(int*)(x+0x58)=b;*(int*)(x+0x5c)=c;*(int*)(x+0x60)=d;}}

void func_00099D70(int a,int b,int c,int d){extern int D_00307CB0;register int x=D_00307CB0;if(x){*(int*)(x+0x64)=a;*(int*)(x+0x68)=b;*(int*)(x+0x6c)=c;*(int*)(x+0x70)=d;}}

void func_00099DA0(int a,int b,int c,int d)
{
 extern int D_00307CB0;
 register int x=D_00307CB0;
 if(x){*(int*)(x+0x74)=a;*(int*)(x+0x78)=b;*(int*)(x+0x7c)=c;*(int*)(x+0x80)=d;}
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

extern int D_00324AFC;
int func_00110330(int,int);
void func_0009A030(void)
{
    int base=D_00324AFC;
    int count=*(int *)(base+0xe4);
    int index=0;
    int offset=0xe8;
    if(count) {
        do {
            int *node=*(int **)(base+offset);
            while(node) {
                int obj=*(int *)(node+2);
                char kind=*(char *)(obj+0x12);
                int check=0;
                if(kind==1) check=obj+0x170;
                else if(kind==11) check=obj+0x120;
                if(*(char *)(obj+0x13)=='4') check=*(int *)(obj+0x15c);
                if(check && ((*(unsigned char *)(check+3)&1)!=0) && ((*(unsigned char *)(check+3)&8)==0))
                    func_00110330(*(int *)(obj+0x2c),1);
                node=*(int **)node;
            }
            base=D_00324AFC;
            count=*(int *)(base+0xe4);
            ++index;
            offset+=8;
        } while(index!=count);
    }
}

