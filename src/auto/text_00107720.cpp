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

void func_00107DC0(int param_1)
{
  extern undefined4 D_003251D0;
  code *pcVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) != 0) {
    iVar4 = 0;
    do {
      psVar2 = (short *)(*(int *)(param_1 + 0x28) + iVar4);
      if (((*psVar2 != 0) && ((*(byte *)(*(int *)(*(int *)(psVar2 + 2) + 0x2c) + 0x20) & 1) == 0))
         && (pcVar1 = *(code **)((uint)(ushort)psVar2[1] * 0x30 + 0x2c + D_003251D0),
            pcVar1 != (code *)0x0)) {
        (*pcVar1)(psVar2);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x40;
    } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x14));
  }
  return;
}

void _func_00107F20(short *param_1) { extern int D_003251CC; extern char *D_0032519C; int *slot; if(*param_1 && !(*(unsigned char *)(*(int *)(*(int *)(param_1+2)+0x2c)+0x20)&1)){ slot=(int *)(D_0032519C+D_003251CC*36); ++D_003251CC; slot[0]=(int)param_1; slot[1]=*(int *)(param_1+2); slot[3]=0; } *param_1=0; }

void _func_00107F70(short *p){extern float _D_001D27B8;float *q=*(float **)(p+10);if(q){double a=*q,b=_D_001D27B8;if(a<b){_func_00107BF0(p,0);*p=0;}}}

void _func_00107FA0(short *param_1) { extern unsigned char D_0031A9E4; extern int D_003251CC; extern char *D_0032519C; int n; int *slot; if(D_0031A9E4){ if(*param_1 && !(*(unsigned char *)(*(int *)(*(int *)(param_1+2)+0x2c)+0x20)&1)){ slot=(int *)(D_0032519C+D_003251CC*36); ++D_003251CC; slot[0]=(int)param_1; slot[1]=*(int *)(param_1+2); slot[3]=0; } *param_1=0; } }

void _func_00107FF0(short *p){extern unsigned char _D_0031A9E6;extern int _D_003251CC;extern char *_D_0032519C;int *slot;if(_D_0031A9E6){if(*p&&!(*(unsigned char *)(*(int *)(*(int *)(p+2)+0x2c)+0x20)&1)){slot=(int *)(_D_0032519C+_D_003251CC*36);++_D_003251CC;slot[0]=(int)p;slot[1]=*(int *)(p+2);slot[3]=0;}*p=0;}}

void _func_00108040(short *p){extern int _D_003080FC;extern int _D_003251CC;extern char *_D_0032519C;int *slot;if(*(int *)(p+2)==_D_003080FC){if(*p&&!(*(unsigned char *)(*(int *)(*(int *)(p+2)+0x2c)+0x20)&1)){slot=(int *)(_D_0032519C+_D_003251CC*36);++_D_003251CC;slot[0]=(int)p;slot[1]=*(int *)(p+2);slot[3]=0;}*p=0;}}

void _func_00108090(char *p) { extern float _D_00307DB4; extern int _D_00307DF8; int _func_001100A0(...); int _func_0012E870(...); void _func_00107BF0(...); int a,b; float d; if (*(float *)(p+0x14) < _D_00307DB4) { _func_001100A0(*(int *)(_D_00307DF8+0x2c),&a); _func_001100A0(*(int *)(*(int *)(p+4)+0x2c),&b); d=*(float *)(p+0x20); if (_func_0012E870(a+0x30,b+0x30) > d*d) _func_00107BF0(p,_D_00307DF8); *(float *)(p+0x14)=_D_00307DB4+*(float *)(p+0x30); } }

void _func_00108120(char *p) { extern float _D_00307DB4; extern int _D_00307DF8; void _func_001100A0(...); int _func_0012E870(...); void _func_00107BF0(...); int a,b; float d; if (*(float *)(p+0x14) < _D_00307DB4) { _func_001100A0(*(int *)(_D_00307DF8+0x2c),&a); _func_001100A0(*(int *)(*(int *)(p+4)+0x2c),&b); d=*(float *)(p+0x20); if (_func_0012E870(a+0x30,b+0x30) <= d*d) _func_00107BF0(p,_D_00307DF8); *(float *)(p+0x14)=_D_00307DB4+*(float *)(p+0x30); } }

void _func_001081B0(char *p){extern float _D_00307DB4;extern int _D_00307DF8,_D_003251CC;extern char *_D_0032519C;int *slot;if(*(float *)(p+0x14)<_D_00307DB4){if(*(short *)p&&!(*(unsigned char *)(*(int *)(*(int *)(p+4)+0x2c)+0x20)&1)){slot=(int *)(_D_0032519C+_D_003251CC*36);++_D_003251CC;slot[0]=(int)p;slot[1]=*(int *)(p+4);slot[3]=_D_00307DF8;}*(float *)(p+0x14)=_D_00307DB4+*(float *)(p+0x20);}}

int _func_001074C0(...);
void _func_00108440(char *p) { extern float _D_00307DB4; char _func_001074C0(int,char *); void _func_00107BF0(...); long double a=*(float *)(p+0x1c), b=_D_00307DB4; if (a < b) { if (_func_001074C0(*(int *)(p+4),p)) _func_00107BF0(p,0); *(float *)(p+0x1c)=(float)((long double)*(float *)(p+0x30)+(long double)_D_00307DB4); } }

void _func_00108480(char *p) { char _func_001074C0(int,char *); void _func_00107BF0(...); unsigned char now; now=_func_001074C0(*(int *)(p+4),p); if (!*(unsigned char *)(p+0x18) && now) _func_00107BF0(p,0); *(unsigned char *)(p+0x18)=now; }

void _func_001084C0(char *p) { char _func_001074C0(int,char *); void _func_00107BF0(...); unsigned char now; now=_func_001074C0(*(int *)(p+4),p); if (*(unsigned char *)(p+0x18) && !now) _func_00107BF0(p,0); *(unsigned char *)(p+0x18)=now; }

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

void _func_00108530(void *p) { extern int _D_00307DF8; char _func_001074C0(int,void *); void _func_00107BF0(...); int *q=*(int **)(_D_00307DF8+0x110); if (*q!=0x40 && *q!=0x3f && _func_001074C0(_D_00307DF8,p)) _func_00107BF0(p,0); }

void func_00108570(short *p) { extern int D_00307DF0,D_003251CC; extern char *D_0032519C; int *slot; int obj=*(int*)((char*)p+4); if(D_00307DF0!=obj) return; if(*p && !(*(unsigned char*)(*(int*)(obj+0x2c)+0x20)&1)){slot=(int*)(D_0032519C+D_003251CC*36);++D_003251CC;slot[0]=(int)p;slot[1]=*(int*)((char*)p+4);slot[3]=0;} *p=0; D_00307DF0=0; }

