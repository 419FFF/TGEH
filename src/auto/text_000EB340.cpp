/* 12 functions from 0x000EB340 to 0x000EC2BE, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern char _D_0032458C;
extern char _D_001DC7EC;
extern int _D_00324588;
extern int _D_00324578;
int _func_0011B610(...);
int _func_001053A0(...);
int _func_00116FB0(...);
extern char _D_001D73E4[];
extern int _D_00307D18;
extern int _D_00326110;
extern char _D_001D748C[];
extern int _D_001D753C;
extern char _D_001D7540;
int _func_00117100(void);
int _func_00117130(void);
int _func_0011BF40(const char*,int);
int _func_0011BDD0(int,int);
int _func_00116A90(int,int,int);
int _func_0013E600(char*,const char*);
int _func_001053E0(int,char*);
int _func_0010F750(const char*,int,int);
void __cdecl _func_000EBB10(char *name,int *out) { int *p; int t; int n; int i; char b[0x1e4]; _D_0032458C=0; if(out[3]) { _D_0032458C=1; _func_00117100(); t=_func_0011BF40(name,0); p=(int*)_func_0011BDD0(t,0); _func_00117130(); n=p[4]; out[1]=n; if((unsigned)n>0) out[2]=_func_00116A90(n<<2,1,1); for(i=0;(b[i]=name[i])!=0;++i){} if((i=_func_0013E600(b,_D_001D73E4))) *(char*)i=0; if(out[3]) *(int*)(out[3]+12)=_func_001053E0(_D_00307D18,b); if(out[0]==0) { if(n<2 && !*(char*)(p[1]+0xa4)) return; out[0]=_func_0010F750(n<2?name:_D_001D748C,_D_00326110,0xe0); } } else { out[0]=out[1]=0; } }

void func_000EC260(int param_1, undefined4 *param_2)
{
  int func_001053E0(...);
  extern undefined4 D_00324588;
  undefined4 uVar1;
  
  uVar1 = func_001053E0(D_00324588,*param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

void func_000EC280(int param_1, undefined4 *param_2)
{
  int func_001053E0(...);
  extern undefined4 D_00324588;
  *(undefined4 *)(param_1 + 8) = func_001053E0(D_00324588, *param_2);
}

