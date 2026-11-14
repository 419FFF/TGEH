/* 10 functions from 0x000D8500 to 0x000D9430, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000D8E30(undefined4 *param_1, undefined4 param_2)
{
  int func_000D72B0(...);
  int func_000D88D0(...);
  extern undefined D_001DB268;
  int func_000D7FE0(...);
  int func_000D79D0(...);
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 local_10 [4];
  
  puVar2 = param_1;
  puVar1 = param_1 + 1;
  local_10[0] = 3;
  local_10[1] = 2;
  local_10[2] = 0;
  local_10[3] = 1;
  piVar4 = (int *)func_000D72B0(puVar1,&param_1,0,0);
  if (*piVar4 == 3) {
    func_000D88D0(((undefined *)&D_001DB268));
  }
  cVar3 = func_000D7FE0(param_2);
  if (cVar3 != '\0') {
    func_000D79D0(puVar2,puVar1,2);
    *puVar2 = *puVar1;
    return;
  }
  puVar2[3] = local_10[puVar2[3]];
  return;
}
