/* 11 functions from 0x00029D50 to 0x0002A50F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0002A0C0(int param_1)
{
  int func_00029CB0(...);
  int func_00088940(...);
  int func_0009CDE0(...);
  int func_000A1CB0(...);
  int func_0011C3E0(...);
  int func_00116FB0(...);
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x110) + 200);
  if (iVar1 != 0) {
    func_00029CB0(param_1);
    *(short *)(iVar1 + 0x2c) = *(short *)(iVar1 + 0x2c) + -1;
    if (*(short *)(iVar1 + 0x2c) == 0) {
      uVar2 = 0;
      if (*(short *)(iVar1 + 0x2e) != 0) {
        puVar3 = (undefined4 *)(iVar1 + 0x30);
        do {
          func_00088940(*puVar3,1);
          func_0009CDE0(*puVar3);
          func_000A1CB0(puVar3 + 1);
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 0x10;
        } while (uVar2 < *(ushort *)(iVar1 + 0x2e));
      }
      func_0011C3E0(iVar1);
      func_00116FB0(iVar1);
    }
  }
  return;
}

void func_0002A140(int param_1, char param_2)
{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x110);
  *puVar1 = (uint)(param_2 == '\0');
  if (param_2 == '\0') {
    puVar1[7] = puVar1[7] | 1;
    return;
  }
  puVar1[7] = puVar1[7] & 0xfffffffe;
  return;
}

void func_0002A170(int param_1, char param_2)
{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  *(uint *)(iVar1 + 4) = (uint)(param_2 == '\0');
  if (param_2 == '\0') {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 2;
    return;
  }
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd;
  return;
}

void func_0002A1A0(int param_1, char param_2)
{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  *(uint *)(iVar1 + 0x10) = (uint)(param_2 == '\0');
  if (param_2 == '\0') {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x10;
    return;
  }
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xffffffef;
  return;
}

void func_0002A1D0(int param_1, char param_2)
{
  *(uint *)(*(int *)(param_1 + 0x110) + 0x18) = (uint)(param_2 != '\0');
  return;
}

void func_00048640(void*,void*,void*,void*,int,int);
extern float D_001D290C;
void func_0002A1F0(int p){int *s=*(int**)(p+0x110);int n=*(int*)s[0x15]-1;float f=(float)n;if(n<0)f+=D_001D290C;*(float*)(s+0x14)=f;char local_c[12];func_00048640(s+0x15,s+0x14,s+8,local_c,0,3);if(!*(char*)(s+0x16)&&!*(char*)(s[0x15]+2))*s=0;}

void func_0002A260(int param_1)
{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  *(undefined4 *)(iVar1 + 8) = 3;
  *(float *)(iVar1 + 0x80) = -*(float *)(iVar1 + 0x98);
  return;
}

void func_0009D3E0(int);
void func_00029D50(int);
void func_0002A280(int p){int *q=*(int**)(p+0x110);if(*(unsigned char*)(p+0x10)&8){func_0009D3E0(p);return;}q[5]=1;q[0]=0;q[1]=0;q[2]=0;q[4]=0;*(char*)(p+0x14)=0;func_00029D50(p);}

