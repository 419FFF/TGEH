/* 4 functions from 0x000BFCD0 to 0x000C0B88, found by Ghidra. */
#include "common.h"
int func_0009C590(int, ...);
int func_0009D3E0(int, ...);
int func_0009C590(int = 0, ...);
int func_0009D3E0(int = 0, ...);
#include "ghidra.h"

void _func_000BFCD0(void) { extern int D_001D9794; extern int* D_00314D90; extern int D_00314E44; extern int D_00314D94; int func_0009C590(...); int func_00088A50(...); void func_000BEC50(...); volatile char frame[340]; int edi=func_0009C590(&D_001D9794); int* esi=(int*)((char*)D_00314D90+0x110); int ebx=0; if (*(unsigned char*)(edi+0x175)) { D_00314E44--; if ((D_00314E44 & 2)==0) func_00088A50(*(int*)(edi+0x2c),0x3e4ccccd,1); else func_00088A50(*(int*)(edi+0x2c),0x3f4ccccd,1); } if (D_00314E44==0) { func_00088A50(*(int*)(edi+0x2c),0x3f800000,1); *(unsigned char*)(edi+0x175)=0; } if (D_00314D94!=1) return; D_00314D90=(int*)edi; func_000BEC50(); switch (*esi) { case 0: frame[0] = 0; break; case 1: frame[0] = 1; break; case 2: frame[0] = 2; break; case 3: frame[0] = 3; break; case 4: frame[0] = 4; break; case 5: frame[0] = 5; break; case 6: frame[0] = 6; break; case 7: frame[0] = 7; break; case 8: frame[0] = 8; break; case 9: frame[0] = 9; break; case 10: frame[0] = 10; break; case 11: frame[0] = 11; break; case 12: frame[0] = 12; break; case 13: frame[0] = 13; break; case 14: frame[0] = 14; break; case 15: frame[0] = 15; break; case 16: frame[0] = 16; break; case 17: frame[0] = 17; break; case 18: frame[0] = 18; break; case 19: frame[0] = 19; break; case 20: frame[0] = 20; break; case 21: frame[0] = 21; break; case 22: frame[0] = 22; break; case 23: frame[0] = 23; break; default: break; } }

void func_000C0A50(void)
{
  int func_0009C590(...);
  extern undefined D_001D9794;
  extern undefined4 D_00314D90;
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_00116FB0(...);
  int func_0011B990(...);
  extern undefined4 D_00314DBC;
  int iVar1;
  
  func_0009C590(((undefined *)&D_001D9794));
  iVar1 = *(int *)(D_00314D90 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x16c));
  func_00116FB0(iVar1);
  func_0011B990(D_00314DBC);
  return;
}

void func_000C0A90(int param_1)
{
  int func_0009D3E0(...);
  func_0009D3E0(param_1);
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}
