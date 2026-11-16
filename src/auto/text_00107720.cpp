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

void _func_00107F20(short *param_1) { extern int D_003251CC; extern char *D_0032519C; int *slot; if(*param_1 && !(*(unsigned char *)(*(int *)(*(int *)(param_1+2)+0x2c)+0x20)&1)){ slot=(int *)(D_0032519C+D_003251CC*36); ++D_003251CC; slot[0]=(int)param_1; slot[1]=*(int *)(param_1+2); slot[3]=0; } *param_1=0; }

void _func_00107F70(short *p){extern float _D_001D27B8;int *q=*(int **)(p+10);if(q&&(*q < _D_001D27B8)){_func_00107BF0(p,0);*p=0;}}

void _func_00107FA0(short *param_1) { extern unsigned char D_0031A9E4; extern int D_003251CC; extern char *D_0032519C; int n; int *slot; if(D_0031A9E4){ if(*param_1 && !(*(unsigned char *)(*(int *)(*(int *)(param_1+2)+0x2c)+0x20)&1)){ slot=(int *)(D_0032519C+D_003251CC*36); ++D_003251CC; slot[0]=(int)param_1; slot[1]=*(int *)(param_1+2); slot[3]=0; } *param_1=0; } }

void _func_00107FF0(short *p){extern unsigned char _D_0031A9E6;extern int _D_003251CC;extern char *_D_0032519C;int *slot;if(_D_0031A9E6){if(*p&&!(*(unsigned char *)(*(int *)(*(int *)(p+2)+0x2c)+0x20)&1)){slot=(int *)(_D_0032519C+_D_003251CC*36);++_D_003251CC;slot[0]=(int)p;slot[1]=*(int *)(p+2);slot[3]=0;}*p=0;}}

void _func_00108040(short *p){extern int _D_003080FC;extern int _D_003251CC;extern char *_D_0032519C;int *slot;if(*(int *)(p+2)==_D_003080FC){if(*p&&!(*(unsigned char *)(*(int *)(*(int *)(p+2)+0x2c)+0x20)&1)){slot=(int *)(_D_0032519C+_D_003251CC*36);++_D_003251CC;slot[0]=(int)p;slot[1]=*(int *)(p+2);slot[3]=0;}*p=0;}}

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
