/* 21 functions from 0x00107720 to 0x001085C8, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00107BB0(void)
{
  extern undefined4 D_0032519C;
  int func_00116FB0(...);
  extern undefined4 D_00325218;
  if (D_0032519C != 0) {
    func_00116FB0(D_0032519C);
    D_0032519C = 0;
  }
  if (D_00325218 != 0) {
    func_00116FB0(D_00325218);
    D_00325218 = 0;
  }
  return;
}

void _func_00107BF0(short *param_1, int param_2) { extern int D_003251CC; extern char *D_0032519C; int *slot; if(*param_1 && !(*(unsigned char *)(*(int *)(*(int *)(param_1+2)+0x2c)+0x20)&1)){ slot=(int *)(D_0032519C+D_003251CC*36); ++D_003251CC; slot[0]=(int)param_1; slot[1]=*(int *)(param_1+2); slot[3]=param_2; } }

void _func_00107F20(short *param_1) { extern int D_003251CC; extern char *D_0032519C; int count; char *base; char *entry; if(*param_1!=0 && ((*((unsigned char *)(*(int *)(*(int *)(param_1+2)+0x2c)+0x20)))&1)==0){ count=D_003251CC; base=D_0032519C; entry=base+count*36; ++count; D_003251CC=count; *(short **)entry=param_1; *(int *)(entry+4)=*(int *)(param_1+2); *(int *)(entry+0xc)=0; } *param_1=0; }

void _func_00107FA0(short *param_1) { extern unsigned char D_0031A9E4; extern int D_003251CC; extern char *D_0032519C; int n; int *slot; if(D_0031A9E4){ if(*param_1 && !(*(unsigned char *)(*(int *)(*(int *)(param_1+2)+0x2c)+0x20)&1)){ slot=(int *)(D_0032519C+D_003251CC*36); ++D_003251CC; slot[0]=(int)param_1; slot[1]=*(int *)(param_1+2); slot[3]=0; } *param_1=0; } }

void func_00108500(undefined4 param_1)
{
  extern undefined D_00307CF8;
  int func_001074C0(...);
  extern undefined4 D_00307DF8;
  int func_00107BF0(...);
  char cVar1;
  
  if ((D_00307CF8 != '\0') && (cVar1 = func_001074C0(D_00307DF8,param_1), cVar1 != '\0')) {
    func_00107BF0(param_1,0);
  }
  return;
}
