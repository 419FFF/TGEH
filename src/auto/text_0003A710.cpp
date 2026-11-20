/* 4 functions from 0x0003A710 to 0x0003AEA3, found by Ghidra. */
#include "common.h"

struct V3_0003AD10 { int x, y, z; };
#pragma optimize("y", on)
void _func_0003ABB0(int *param)
{
  int _func_0013E469(...); int _func_0009C590(...); int _func_0009D280(...);
  extern int _D_001D4564, _D_001D4550, _D_001D453C, _D_001D4528;
  char local[128];
  _func_0013E469(local, &_D_001D4564, param[3]); _func_0009D280(_func_0009C590(local));
  _func_0013E469(local, &_D_001D4550, param[3]); _func_0009D280(_func_0009C590(local));
  _func_0013E469(local, &_D_001D453C, param[3]); _func_0009D280(_func_0009C590(local));
  _func_0013E469(local, &_D_001D4528, param[3]); _func_0009D280(_func_0009C590(local));
}

#pragma optimize("y", on)
void _func_0003AC60(int *param)
{
  int _func_0013E469(...); int _func_0009C590(...); int _func_0009D3E0(...);
  extern int _D_001D4564, _D_001D4550, _D_001D453C, _D_001D4528;
  char local[128];
  _func_0013E469(local, &_D_001D4564, param[3]); _func_0009D3E0(_func_0009C590(local));
  _func_0013E469(local, &_D_001D4550, param[3]); _func_0009D3E0(_func_0009C590(local));
  _func_0013E469(local, &_D_001D453C, param[3]); _func_0009D3E0(_func_0009C590(local));
  _func_0013E469(local, &_D_001D4528, param[3]); _func_0009D3E0(_func_0009C590(local));
}

void _func_0003AD10(int param_1, int param_2)
{
  int func_00011CB0(...);
  int *func_0009C7A0(...);
  extern char D_001D3D50, D_001D4578;
  int func_00115170(...);
  int func_000A22B0(...);
  int func_0012E6D0(...);
  void _func_0003ABB0(int);
  int *puVar2;
  __declspec(align(16)) struct { char A[64]; char B[48]; char C[16]; } L;
  func_00011CB0(param_2 + 0x10, param_2 + 0x410);
  func_00011CB0(param_2 + 0x320, param_2 + 0x410);
  if (*(char *)(param_2 + 0x1a6) != 0) {
    *(char *)(param_2 + 0x1a6) = 0;
    *(char *)(param_2 + 0x37c) = 1;
  } else {
    *(char *)(param_2 + 0x37c) = 0;
  }
  if (*(char *)(param_2 + 0x37c) != 0) {
    int *p;
    *(int *)(param_2 + 0x310) = 1;
    p = func_0009C7A0(param_1, &D_001D4578, 0);
    func_000A22B0(param_1 + 100, 1, p[1], p[1], 0x3f800000, 0x3e4ccccd);
  } else {
    *(int *)(param_2 + 0x310) = 0;
    puVar2 = func_0009C7A0(param_1, &D_001D3D50, 0);
    func_00115170(*(int *)(param_1 + 0x98), 0, L.A);
    *(int *)(param_2 + 0x378) = *(int *)(L.A + 0x38);
    *(int *)(param_2 + 0x370) = *(int *)(L.A + 0x30);
    *(int *)(param_2 + 0x374) = *(int *)(L.A + 0x34);
    func_000A22B0(param_1 + 100, 1, *puVar2, *puVar2, 0, 0);
    func_00115170(*(int *)(param_1 + 0x98), 0, L.A);
    func_000A22B0(param_1 + 100, 1, puVar2[1], puVar2[1], 0, 0);
    func_00115170(*(int *)(param_1 + 0x98), 0, L.B);
    func_0012E6D0(param_2 + 0x360, L.C, L.A + 0x30);
    func_000A22B0(param_1 + 100, 1, puVar2[0], puVar2[1], puVar2[2], 0);
  }
  *(int *)(param_2 + 0x360) = 0;
  *(int *)(param_2 + 0x364) = 0;
  *(int *)(param_2 + 0x368) = 0;
  *(char *)(param_2 + 0x36c) = 0x75;
  _func_0003ABB0(param_1);
}

#pragma optimize("", on)

#pragma optimize("", on)
