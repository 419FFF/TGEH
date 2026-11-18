/* 13 functions from 0x00080180 to 0x00080F1F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00080540(void *p){void func_00110760(...); void func_00116FB0(...); func_00110760(*(int*)((char*)p+0x100)); func_00116FB0(*(int*)((char*)p+0xfc));}

void func_000809C0(void)
{
  extern undefined4 D_002FBA84;
  int func_001103C0(...);
  extern undefined4 D_002FBA80;
  D_002FBA84 = D_002FBA84 + -1;
  if (D_002FBA84 == 0) {
    func_001103C0(D_002FBA80);
  }
  return;
}

void func_000809E0(void)
{
  extern undefined D_002FBA00;
  int func_00110760(...);
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(((undefined *)&D_002FBA00) + uVar1) != 0) {
      func_00110760(*(int *)(((undefined *)&D_002FBA00) + uVar1));
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x80);
  return;
}

void func_00080A10(void) {
    extern int D_002FBA90;
    extern int D_002FBAF0;
    extern int D_002FBA94;
    extern int D_002FBAF8;
    D_002FBA90 = 0;
    D_002FBAF0 = 0;
    D_002FBA94 = 0;
    D_002FBAF8 = 1;
}

void func_00080A30(void){extern int D_002FBA90,D_002FBA94,D_002FBAF4; void func_00116FB0(...);void func_0013C020(...);void func_0011B990(...); int x; x=D_002FBA90;if(x)func_00116FB0(x); x=D_002FBA94;if(x){func_0013C020(x); *(short*)(D_002FBAF4+0x2a)-=1; func_0011B990(D_002FBAF4);}}

extern int _D_002FBAF0, _D_002FBA94, _D_002FBAF4, _D_002FBAEC, _D_002FBAF8;
extern int _D_002FBA98[21];
extern char _D_001D29C7[], _D_001D6788[];
int _func_0013C000(...);
int _func_000688D0(...);
int _func_00131990(...);
int _func_0011BF40(...);
int _func_0011BDD0(...);
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
void _func_00080BE0(void)
{
    if (_D_002FBAF0 != 0 && _D_002FBA94 == 0) {
        _D_002FBA94 = _func_0013C000(_D_002FBAF0);
        _func_000688D0();
        _func_00131990(_D_001D29C7);
        _D_002FBAF4 = _func_0011BF40(_D_001D6788, 0);
        _func_00131990(_D_001D29C7);
        _D_002FBAEC = _func_0011BDD0(_D_002FBAF4, 0);
        _func_000688D0();
        memset(_D_002FBA98, 0, 0x54);
        _D_002FBA98[10] = 4;
        _D_002FBA98[11] = 5;
        _D_002FBA98[0] = 2;
        _D_002FBA98[1] = 2;
        _D_002FBA98[2] = _D_002FBAEC;
        _D_002FBA98[6] = 3;
        _D_002FBA98[18] = 0;
        _D_002FBA98[17] = 0;
        _D_002FBA98[19] = 0;
        _D_002FBAF8 = 0;
    }
}
void func_00080CB0(void){extern int D_002FBAF0,D_00313B60,D_002FBA90,D_002FBA94; extern char D_002FBA98; void func_0011FED0(...);void func_00136480(...);void func_0012F120(...);void func_001364D0(...);void func_00133F30(...);void func_0013C980(...); char a[0x80]; if(D_002FBAF0){func_0011FED0(D_00313B60,a);func_00136480(D_00313B60,a+8);func_0012F120(a+0x50);func_001364D0(a+0x54);func_00133F30(&D_002FBA98);func_0013C980(D_002FBA94,D_002FBA90,0);}}

void func_00080ED0(int param_1, int param_2)
{
  int func_0011DED0(...);
  int func_00116A90(...);
  undefined4 *puVar1;
  
  func_0011DED0(param_1);
  puVar1 = (undefined4 *)func_00116A90(0x10,1,0);
  *(undefined4 **)(param_1 + 0x17c) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) & 0xfffffffd;
  return;
}

