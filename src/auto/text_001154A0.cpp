/* 29 functions from 0x001154A0 to 0x00116490, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001156D0(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x20) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

void func_00115AB0(undefined4 param_1, undefined4 param_2)
{
  int func_00115DE0(...);
  extern undefined4 D_0032616C;
  int iVar1;
  
  iVar1 = func_00115DE0(D_0032616C,0x24);
  *(undefined4 *)(iVar1 + 0x1c) = param_1;
  *(undefined4 *)(iVar1 + 0x20) = param_2;
  return;
}

void func_00115DD0(int param_1)
{
  extern undefined D_00326188;
  (((undefined *)&D_00326188))[param_1 * 0x18] = 0;
  return;
}

void func_00115DE0(undefined2 param_1, undefined4 param_2)
{
  int func_00116A90(...);
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)func_00116A90(param_2,1,1);
  *puVar1 = param_1;
  *(undefined2 **)(puVar1 + 2) = puVar1 + 8;
  *(undefined2 **)(puVar1 + 10) = puVar1 + 2;
  return;
}

unsigned char __cdecl _func_00115E70(unsigned short *arg)
{
  extern unsigned char D_00326190[];
  unsigned short index = *arg;
  unsigned char (__cdecl *callback)(unsigned short *) = *(unsigned char (__cdecl **)(unsigned short *))(D_00326190 + (unsigned int)index * 24);
  if (callback != 0) return callback(arg);
  return 0;
}

unsigned char __cdecl _func_00115E90(unsigned short *arg)
{
  extern unsigned char D_0032618C[];
  unsigned short index = *arg;
  unsigned char (__cdecl *callback)(unsigned short *) = *(unsigned char (__cdecl **)(unsigned short *))(D_0032618C + (unsigned int)index * 24);
  if (callback != 0) return callback(arg);
  return 0;
}

void func_00115EB0(int param_1, undefined4 param_2, undefined *param_3, undefined *param_4, undefined4 param_5, undefined4 param_6)
{
  extern undefined D_0000FFFF;
  extern undefined D_00326194;
  extern undefined4 D_0032923C;
  int func_0011C3E0(...);
  int func_0011C3B0(...);
  undefined2 uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(short *)(param_1 + 0x18) = (short)param_3;
  if ((param_3 == ((undefined *)&D_0000FFFF)) &&
     (*(code **)(((undefined *)&D_00326194) + (uint)**(ushort **)(param_1 + 0xc) * 0x18) != (code *)0x0)) {
    uVar1 = (**(code **)(((undefined *)&D_00326194) + (uint)**(ushort **)(param_1 + 0xc) * 0x18))(param_1);
    *(undefined2 *)(param_1 + 0x18) = uVar1;
  }
  *(short *)(param_1 + 0x1a) = (short)param_4;
  if ((param_4 == ((undefined *)&D_0000FFFF)) &&
     (*(code **)(((undefined *)&D_00326194) + (uint)**(ushort **)(param_1 + 0xc) * 0x18) != (code *)0x0)) {
    uVar1 = (**(code **)(((undefined *)&D_00326194) + (uint)**(ushort **)(param_1 + 0xc) * 0x18))(param_1);
    *(undefined2 *)(param_1 + 0x1a) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 0x20) = D_0032923C;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = D_0032923C;
  *(undefined4 *)(param_1 + 0x2c) = param_6;
  func_0011C3E0(param_1);
  func_0011C3B0(*(int *)(param_1 + 0xc) + 4,param_1,param_1);
  return;
}

void func_001160E0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  int func_00115EB0(...);
  func_00115EB0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),param_2,param_3,param_4,param_5,0);
  return;
}

void func_00116150(void) {
    extern int D_00326788;
    D_00326788 = 0;
}

void func_00116480(int a0) {
    int func_001161D0(...);
    func_001161D0(a0, 0);
}

