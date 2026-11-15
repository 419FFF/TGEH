/* 49 functions from 0x000FA6A0 to 0x000FB661, found by Ghidra. */
#include "common.h"
#include "ghidra.h"


extern void* D_00324B68;

extern void* _func_0001CC10(void* param_1);

extern int func_000F9C00(int param_1);
extern undefined1 func_00063C40(undefined4 param_1, int param_2);

void func_000FA6A0(undefined4 param_1)
{
  int func_0011C3E0(...);
  int func_00116FB0(...);
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    func_0011C3E0(puVar3);
    iVar2 = puVar3[2];
    func_00116FB0(*(undefined4 *)(iVar2 + 0x10));
    func_00116FB0(iVar2);
    puVar3 = puVar1;
  }
  func_00116FB0(param_1);
}

void _func_000FA700(undefined4 param_1, undefined4 param_2)
{
  int func_0013F2E9(...);
  
  if (D_00324B68 == 0) {
    return;
  }
  
  for( ; ; ) {
    if (D_00324B68 == 0) {
      break;
    }
    
    func_0013F2E9(*(void **)(param_1 + 8), param_2);
    param_1 = *(undefined4 *)(param_1 + 8);
  }
}

void _func_000FA740(void) { int func_000FA600(...); func_000FA600(); }

void _func_000FA8D0(void)
{
  int func_00063C40(...);
  extern undefined4 D_003104B4;
  extern undefined D_0030C630;
  int func_000F9C00(...);
  extern undefined D_001DD164;
  int func_000FA750(...);
  int iVar1;
  int iVar2;
  
  func_00063C40();
  iVar1 = D_003104B4;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(((undefined *)&D_0030C630) + iVar1 * 4) != 0) &&
       (iVar2 = func_000F9C00(*(int *)(((undefined *)&D_0030C630) + iVar1 * 4),((undefined *)&D_001DD164)), iVar2 != 0)) {
      func_000FA750(iVar2);
    }
  }
  return;
}

undefined4 func_000FACD0(undefined4 param_1, undefined4 *param_2)
{
  int func_00063C20(...);
  int func_00104380(...);
  register char cVar1;
  
  cVar1 = func_00063C20(param_1);
  if (cVar1 == '\0') {
    func_00104380(*param_2,*(undefined4 *)param_2[3]);
  }
  return 1;
}

undefined1 func_000FAE20(undefined4 param_1, int *param_2)
{
  int func_000A2230(...);
  int func_000A21A0(...);
  int func_000A1D10(...);
  extern undefined D_0000FFFF;
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = *param_2;
  iVar3 = func_000A2230(iVar1 + 100,*(undefined4 *)param_2[3]);
  if (iVar3 != 0) {
    if ((*(byte *)(iVar1 + 0x10) & 8) == 0) {
      cVar2 = func_000A21A0(iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    func_000A1D10(iVar3,1,0,((undefined *)&D_0000FFFF),*(undefined4 *)param_2[5],*(undefined4 *)param_2[7]);
  }
  return 1;
}

undefined4 _func_000FB200(undefined4 param_1, undefined4 *param_2)
{
  int func_0001CC10(...);
  func_0001CC10(*param_2);
  return 1;
}

undefined4 func_000FB220(undefined4 param_1, undefined4 *param_2)
{
  int func_00061650(...);
  char cVar1;
  int func_00063C20(...);
  int func_00061600(...);
  
  cVar1 = func_00063C20(param_1);
  if (cVar1 != '\0') {
    func_00061600();
    return 1;
  }
  func_00061650(param_2[1],*param_2,param_2[2],*(undefined4 *)param_2[5],0);
      return 1;
}

unsigned char _func_000FB300(int a, int *p) { int func_0005D3F0(...); func_0005D3F0(p[1]); return 1; }

int _func_0005DA70(...);
unsigned char _func_000FB340(unsigned int a, unsigned int *p)
{
    _func_0005DA70(*(unsigned int *)p[1]);
    return 1;
}

undefined1 func_000FB5A0(void)
{
  int func_00100D80(...);
  int func_0006FE60(...);
  char cVar1;
  
  cVar1 = func_00100D80();
  if (cVar1 != '\0') {
    func_0006FE60();
  }
  return 1;
}

char _func_000FB5C0(void) { int func_000688D0(...); func_000688D0(); return 1; }
extern void* D_00324B68;

struct D_00324B68_struct {
  u32 field_0;
  u32 field_4;
  u32 field_8;
  void* next;   // [0x1C = 28]
};
