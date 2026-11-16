/* 7 functions from 0x000F5DE0 to 0x000F63E5, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000F6170(void)
{
  extern undefined4 D_00324930;
  extern undefined4 D_00324934;
  extern undefined4 D_00324938;
  int func_00110760(...);
  extern undefined4 D_0032491C;
  extern undefined4 D_00324920;
  extern undefined4 D_00324928;
  D_00324930 = 0;
  D_00324934 = 0;
  D_00324938 = 0;
  func_00110760(D_0032491C);
  func_00110760(D_00324920);
  func_00110760(D_00324928);
  return;
}

void func_000F61B0(int param_1)
{
  undefined4 *puVar1;
  
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 1;
  for (puVar1 = *(undefined4 **)(param_1 + 0x28); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[3]) {
    func_000F61B0(*puVar1);
  }
  return;
}

void __cdecl _func_000F61E0(int p) { extern void _func_000F6170(int); *(volatile unsigned char *)(p+0xd0)=(*(volatile unsigned char *)(p+0xd0)&0xfe); int *n=*(int **)(p+0x28); if(n) do { _func_000F6170(*n); n=(int *)n[3]; } while(n); }

void __cdecl _func_000F6360(void) { extern int _D_00324924,_D_003248C4; extern int __cdecl _func_0011BDD0(int,int); extern void __cdecl _func_00110330(int,int); int *p; int r; unsigned int i; int j; if(!_D_00324924||!_D_003248C4)goto done; p=(int *)(_D_003248C4+0xe0); r=_func_0011BDD0(*p,0); if(r){ *(unsigned short *)(r+6)=0; for(i=0;i<*(unsigned short *)(r+4);i++){ j=*(int *)(*(int *)(r+8)+0x28+i*0x30); if(j)*(int *)(j+0x54)=1; } } *(short *)(*p+0x2a)-=1; _func_00110330(_D_00324924,1); done:_D_00324924=0;_D_003248C4=0; }

