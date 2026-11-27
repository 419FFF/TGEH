/* 11 functions from 0x0003F990 to 0x0004098B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0003F990(int param_1)
{
  extern int D_00307CFC,D_00307D00,D_003080B0,D_00307DF8;
  extern char D_001D3BCC,D_001D3BE4;
  int func_0002DF20(...);
  int func_000A1C00(...);
  int func_00089320(...);
  int func_0013E469(...);
  int func_00103210(...);
  int func_00102E80(...);
  extern undefined4 D_00313B54;
  int func_001160B0(...);
  int func_00110760(...);
  int func_00036970(...);
  int func_00036B00(...);
  int func_00116FB0(...);
  int *piVar1;
  int iVar2;
  undefined1 local_100 [256];
  
  piVar1 = *(int **)(param_1 + 0x110);
  if (*piVar1 == 0x43) {
    func_0002DF20(param_1);
  }
  func_000A1C00(piVar1[0x8e]);
  func_000A1C00(piVar1[0x8f]);
  func_000A1C00(piVar1[0x90]);
  if (param_1 == D_00307CFC) {
    func_000A1C00(piVar1[0x91]);
    func_000A1C00(piVar1[0x94]);
    func_000A1C00(piVar1[0x95]);
    func_000A1C00(piVar1[0x96]);
    func_000A1C00(piVar1[0x93]);
    func_000A1C00(piVar1[0x92]);
  }
  func_000A1C00(piVar1[0x97]);
  func_000A1C00(piVar1[0x98]);
  func_000A1C00(piVar1[0x99]);
  func_000A1C00(piVar1[0x9a]);
  func_000A1C00(piVar1[0xac]);
  func_000A1C00(piVar1[0xad]);
  func_000A1C00(piVar1[0xae]);
  func_000A1C00(piVar1[0xaf]);
  func_000A1C00(piVar1[0xb0]);
  func_000A1C00(piVar1[0xb1]);
  func_000A1C00(piVar1[0xb2]);
  func_000A1C00(piVar1[0xb3]);
  func_000A1C00(piVar1[0xb4]);
  func_000A1C00(piVar1[0xb5]);
  func_000A1C00(piVar1[0xb6]);
  func_000A1C00(piVar1[0xb7]);
  func_000A1C00(piVar1[0x9d]);
  func_000A1C00(piVar1[0x9e]);
  func_000A1C00(piVar1[0x9f]);
  func_000A1C00(piVar1[0xa0]);
  func_000A1C00(piVar1[0xa1]);
  func_000A1C00(piVar1[0xa2]);
  func_000A1C00(piVar1[0xa3]);
  func_000A1C00(piVar1[0xa4]);
  if (param_1 == D_00307CFC) {
    func_000A1C00(piVar1[0xa5]);
  }
  if (param_1 == D_00307D00) {
    func_000A1C00(piVar1[0xa6]);
    func_000A1C00(piVar1[0xb8]);
  }
  if (param_1 == D_003080B0) {
    func_000A1C00(piVar1[0xa8]);
    func_000A1C00(piVar1[0xa9]);
    func_000A1C00(piVar1[0xaa]);
    func_000A1C00(piVar1[0xab]);
  }
  func_00089320(0,1);
  func_0013E469(local_100,&D_001D3BCC,*(undefined4 *)(D_00307DF8 + 0xc),&D_001D3BE4);
  iVar2 = func_00103210(local_100);
  if (iVar2 != 0) {
    func_00102E80(iVar2);
  }
  if ((D_00313B54 == 5) || (D_00313B54 == 9)) {
    iVar2 = *(int *)(param_1 + 0x110);
    func_001160B0(*(undefined4 *)(iVar2 + 0x208));
    func_00110760(*(undefined4 *)(iVar2 + 0x20c));
  }
  piVar1 = *(int **)(param_1 + 0x110);
  if (piVar1 != (int *)0x0) {
    switch(*piVar1) { case 0x15: func_00036970(param_1,piVar1);break; case 0x17:func_00036B00(param_1,piVar1);break; }
    func_00116FB0(*(undefined4 *)(param_1 + 0x110));
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return;
}

void _func_00040000(int key, char *self) { extern int D_00307D00, D_003080B0; extern char D_001D461C, D_001D48B4, D_001D48A8, D_001D489C, D_001D488C, D_001D4880, D_001D29C7; extern int _func_000A1BB0(int, const char *); extern void _func_00131990(const char *); if (key == D_00307D00) { int a = _func_000A1BB0(key,&D_001D461C); *(int *)(self+0x298)=a; int b = _func_000A1BB0(key,&D_001D48B4); *(int *)(self+0x2e0)=b; } if (key == D_003080B0) { int a = _func_000A1BB0(key,&D_001D48A8); *(int *)(self+0x2a0)=a; int b = _func_000A1BB0(key,&D_001D489C); *(int *)(self+0x2a4)=b; int c = _func_000A1BB0(key,&D_001D488C); *(int *)(self+0x2a8)=c; int d = _func_000A1BB0(key,&D_001D4880); *(int *)(self+0x2ac)=d; } _func_00131990(&D_001D29C7); }

void func_000400A0(char a0) {
    extern char D_002EEAA2;
    D_002EEAA2 = a0;
}

void func_000400B0(char a0) {
    extern char D_002EEAA3;
    D_002EEAA3 = a0;
}

void func_000400C0(char a0) {
    extern char D_002EEAA4;
    D_002EEAA4 = a0;
}

bool func_000400D0(void)
{
  extern undefined4 D_00307DF8;
  return **(int **)(D_00307DF8 + 0x110) == 0x20;
}

bool _func_000400F0(void) { extern undefined4 D_00307DF8; return **(int **)(D_00307DF8 + 0x110) == 0x19; }

bool _func_00040110(void) { extern undefined4 D_00307DF8; extern float D_001D28C0; extern float D_001D3E00; int p = *(int *)(D_00307DF8 + 0x110); if (*(int *)(p + 0x320) != 2) return false; float f = *(float *)(p + 0x324); if (!(f >= D_001D28C0)) return false; return f < D_001D3E00; }

int __fastcall func_00040150(int param_1, int param_2, int *self, int target)
{
  extern int D_00313AF4, D_00307D08, D_00307D00, D_00324AFC, D_003080B0, D_00307CFC;
  extern char D_001D37C0, D_001D460C, D_001D46D8;
  extern float D_001D4A8C;
  unsigned int func_0009F820(void);
  int func_001100A0(...);
  int func_0012E870(...);
  int func_0009C7A0(...);
  int func_0009C590(...);
  int func_00110060(...);
  int func_00110300(...);
  int func_00100270(...);
  int func_00110330(...);
  char func_0003C260(...);
  int local_18, local_14[5];
  int *puVar3;
  int iVar4, iVar6;

  if (param_1 == 0 && *(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313AF4 * 0x18) != 0) {
    if (target == D_00307D00 && (func_0009F820() & 2) != 0) {
      func_001100A0(*(int *)(target + 0x2c), &local_18);
      for (puVar3 = *(int **)(D_00324AFC + 0x2ac); puVar3 != 0; puVar3 = (int *)*puVar3) {
        iVar6 = puVar3[2];
        if (*(char *)(iVar6 + 0x13) == '-') {
          func_001100A0(*(int *)(iVar6 + 0x2c), local_14);
          if (func_0012E870(local_14[0] + 0x30, local_18 + 0x30) < D_001D4A8C) {
            self[0x114] = iVar6;
            puVar3 = (int *)func_0009C7A0(iVar6, &D_001D37C0, 0);
            iVar4 = func_0009C590(*puVar3);
            func_00110060(*(int *)(iVar4 + 0x2c), self + 0x104);
            self[0x115] = **(int **)(*(int *)(target + 0x2c) + 0x2c);
            if (*(char *)(iVar4 + 0x13) != 4) self[0x116] = **(int **)(*(int *)(iVar4 + 0x2c) + 0x2c);
            *self = 0x32;
            local_14[1] = 0; local_14[2] = 0xc2700000; local_14[3] = 0;
            func_00100270(func_00110300(*(int *)(iVar6 + 0x2c), &D_001D460C, 0x18, 0, local_14 + 1, 0x3f4ccccd, 0));
            func_00110330(self[0x84], 0);
            return 1;
          }
        } else {
          *self = 0x34;
          func_00110330(self[0x84], 0);
        }
      }
    }
    if (target == D_003080B0 && (func_0009F820() & 1) != 0) {
      iVar6 = func_0009C590(&D_001D46D8);
      if ((*(unsigned char *)(*(int *)(iVar6 + 0x2c) + 0x20) & 1) != 0 && func_0003C260(target, self, iVar6) != 0) {
        *self = 0x39;
        func_00110330(self[0x84], 0);
        *(char *)(self + 0x6b) = 0;
      }
    }
  }
  if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313AF4 * 0x18) != 0 && (func_0009F820() & 4) != 0 && target == D_00307CFC) {
    *self = 0x40;
    func_00110330(self[0x84], 0);
    *(char *)(self + 0x6b) = 0;
  }
  return 0;
}

void func_00040390(int p) {}

