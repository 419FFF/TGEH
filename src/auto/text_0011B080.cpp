/* 19 functions from 0x0011B080 to 0x0011BF32, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011B610(undefined4 param_1)
{
  int func_0011B580(...);
  int func_0011C3E0(...);
  int func_00116FB0(...);
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  iVar2 = func_0011B580(param_1);
  piVar3 = (int *)(iVar2 + 0x1c);
  local_4 = 0x100;
  do {
    iVar1 = *piVar3;
    while (iVar1 != 0) {
      (**(code **)(iVar2 + 0x14))(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x24));
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) - *(int *)(iVar1 + 0x34);
      *(undefined4 *)(iVar1 + 0x34) = 0;
      func_0011C3E0(*piVar3);
      func_00116FB0(iVar1);
      iVar1 = *piVar3;
    }
    piVar3 = piVar3 + 3;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  func_0011C3E0(iVar2);
  func_00116FB0(iVar2);
  return;
}

int _func_0011B690(char *s)
{
    int _func_0011B4F0(...);
    extern int *_D_003268DC;
    int len = 0;
    while (s[len]) ++len;
    int n = len;
    char *end = s + len - 1;
    while (n != 0 && *end != 0 && *end != '.') { --n; --end; }
    for (int *node = _D_003268DC; node; node = (int *)*node) {
        int result = node[2];
        if (_func_0011B4F0(*(int *)(result + 0xc), end + 1) == 0)
            return result;
    }
    return 0;
}

int func_0011B700(int param_1, undefined4 param_2)
{
  int func_0012B1A0(...);
  int func_0011B4F0(...);
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = func_0012B1A0(param_2);
  puVar1 = *(undefined4 **)
            (param_1 + 0x1c +
            ((uVar3 >> 8) + (uVar3 >> 0x10) + uVar3 + (uVar3 >> 0x18) & 0xff) * 0xc);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = puVar1[2];
    iVar4 = func_0011B4F0(*(undefined4 *)(iVar2 + 0x1c),param_2);
    if (iVar4 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return iVar2;
}

int _func_0011B760(int *object, int p)
{
    int _func_00117100(...);
    int _func_00116800(...);
    int _func_00117000(...);
    int _func_00117130(...);
    int _func_00116820(...);
    extern int *_D_003268DC;
    if (*(char *)(p + 0x1a)) _func_00117100();
    if (*(int *)(p + 0x30)) _func_00116800(*(int *)(p + 0x30));
    int base = _func_00117000(1);
    for (int *node = _D_003268DC; node; node = (int *)*node)
        base -= *(int *)(node[2] + 0x18);
    int result = ((int (*)(int))object[4])(*(int *)(p + 0x1c));
    int now = _func_00117000(1);
    for (int *node = _D_003268DC; node; node = (int *)*node)
        now -= *(int *)(node[2] + 0x18);
    int delta = now - base;
    *(int *)(p + 0x34) = delta;
    object[6] += delta;
    if (*(char *)(p + 0x1a)) _func_00117130();
    if (*(int *)(p + 0x30)) _func_00116820();
    return result;
}

void func_0011B810(char a0) {
    extern char D_003268EC;
    D_003268EC = a0;
}

void func_0011BAE0(int param_1)
{
  int func_0011B990(...);
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) - 1;
  func_0011B990(param_1);
}

int _func_0011BDD0(int p, char flag)
{
    int _func_0013B2B0(...);
    int _func_0013B280(...);
    extern int _D_003278A0;
    if (flag) {
        while (*(char *)(p + 0x18) == 1)
            _func_0013B2B0(_D_003278A0, -1.0f);
        _func_0013B280(_D_003278A0, 1);
    }
    if (*(char *)(p + 0x18) == 2) {
        ++*(short *)(p + 0x2a);
        return *(int *)(p + 0x24);
    }
    return 0;
}

void func_0011BED0(void)
{
  int func_0013AF50(...);
  extern undefined4 D_003278A8;
  extern undefined4 D_003268E8;
  int func_0013AF70(...);
  int func_0013B2B0(...);
  extern undefined4 D_003278A0;
  func_0013AF50(D_003278A8);
  while (D_003268E8 != 0) {
    func_0013AF70(D_003278A8);
    func_0013B2B0(D_003278A0,0xbf800000);
    func_0013AF50(D_003278A8);
  }
  func_0013AF70(D_003278A8);
  return;
}

