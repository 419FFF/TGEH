/* 10 functions from 0x000B8570 to 0x000B9388, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000B8C30(void) {
    extern int D_00308158;
    extern int D_001D9058;
    int func_000F9C00(...);
    func_000F9C00(D_00308158, (int)&D_001D9058);
}

void func_000B8C50(void)
{
  int func_000451B0(...);
  int func_000B8C30(...);
  int func_000451C0(...);
  func_000451B0(&func_000B8C30);
  func_000451C0();
  return;
}

#pragma optimize("y", on)
void func_000B8C70(int p) { extern int D_00307DB4,D_00313F28; *(int *)(p+0x140)=0; *(int *)(p+0x130)=0; *(int *)(p+0x12c)=0; *(int *)(p+0x128)=0; *(int *)(p+0x144)=0; *(int *)(p+0x150)=D_00307DB4; *(int *)(p+0x148)=D_00307DB4; D_00313F28=0xbf800000; }
extern int D_00307DB4, D_00313F28;
extern int D_001D8F64,D_001D8F58,D_001D8FB8,D_001D8FD4,D_00314240,D_003142E0;
extern int func_0009C590(...),func_000F9C00(...),func_00110330(...),func_00102E80(...),func_000400C0(...),func_000687F0(...),func_00116FB0(...),func_001007B0(...);
void func_000B8CC0(void) { int v; v=func_0009C590(&D_001D8F64); func_000F9C00(&D_001D8F58,v); v=func_0009C590(&D_001D8FB8); func_000F9C00(&D_001D8F58,v); v=func_0009C590(&D_001D8FD4); func_000F9C00(&D_001D8F58,v); int p=D_00314240; *(char *)(p+0x1a81)=0; func_00110330(*(int *)(p+0x19f4),0); func_00102E80(D_003142E0); func_000400C0(0); func_000687F0(); func_00116FB0(D_00314240); func_001007B0(0); }

void func_000B8D50(void) { volatile int marker=10; }

