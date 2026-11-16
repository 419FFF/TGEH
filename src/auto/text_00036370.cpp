/* 9 functions from 0x00036370 to 0x00037216, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00036970(int param_1, int param_2)
{
  int func_000A1C00(...);
  int func_0009C7A0(...);
  extern undefined D_001D2968;
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  func_000A1C00(*(undefined4 *)(param_2 + 0x310));
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D2968),0);
  func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0);
  return;
}

void func_00036B00(int param_1, int param_2)
{
  int func_000A1C00(...);
  int func_0009C7A0(...);
  extern undefined D_001D3CD4;
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  func_000A1C00(*(undefined4 *)(param_2 + 0x310));
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D3CD4),0);
  func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0);
  return;
}

unsigned char func_00037190(int param_1) {
 int func_0013F2E9(...);
 extern char D_001D3C58,D_001D3C40,D_001D3C28;
 unsigned char c;
 int p=*(int *)(param_1+8);
 if(p) {
   c=*(unsigned char *)(p+0x13);
   if(c=='E') {
     int t=func_0013F2E9(*(int *)(*(int *)(param_1+4)+0x38),&D_001D3C58);
     if(t && (t=func_0013F2E9(*(int *)(*(int *)(param_1+4)+0x38),&D_001D3C40),t) &&
        (t=func_0013F2E9(*(int *)(*(int *)(param_1+4)+0x38),&D_001D3C28),t)) return 0;
     return 1;
   }
   if(c==0x19 || c==0x17 || *(unsigned char *)(p+0x12)==11 || c==0x4f || (c==4 && *(int *)(p+0x118)==0x15)) return 1;
 }
 return 0;
}

