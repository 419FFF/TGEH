/* 11 functions from 0x00029D50 to 0x0002A50F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strcpy, strcat, strlen)

struct __declspec(align(16)) M50 { char b[64]; };
struct L29F00 { int a, b, c; int *p; char flag, z; short pad; };

void func_00029D50(int param_1)
{
  int func_00110060(...);
  int func_00110330(...);
  extern unsigned int D_003268B0;
  float func_000A2310(...);
  int func_00029CB0(...);
  int func_0009C1F0(...);
  int func_001105E0(...);
  int func_00110000(...);
  int func_00110480(...);
  int func_000A22B0(...);
  int iVar2;
  int iVar5;
  int uVar6;
  int iVar7;
  int local_64;
  int local_60;
  float local_5c;
  M50 local_50;
  int uVar3;

  iVar2 = *(int *)(param_1 + 0x110);
  iVar7 = *(int *)(iVar2 + 200);
  uVar3 = **(int **)(*(int *)(param_1 + 0x2c) + 0x2c);
  func_00110060(*(int *)(param_1 + 0x2c), &local_50);
  uVar6 = 0;
  func_00110330(*(int *)(param_1 + 0x2c), uVar6);
  iVar5 = *(int *)(param_1 + 0x2c);
  if (*(unsigned char *)(iVar5 + 0x22) == D_003268B0) {
    local_60 = *(int *)(iVar5 + 0x124);
  }
  else {
    int p = *(int *)(iVar5 + 0x28);
    local_60 = uVar6;
    while (p != uVar6) {
      if (*(unsigned char *)(*(int *)p + 0x22) == D_003268B0) {
        local_60 = *(int *)(*(int *)p + 0x124);
        break;
      }
      p = *(int *)(p + 12);
    }
  }
  local_64 = 0xff;
  local_5c = -1.0f;
  if ((unsigned)uVar6 < *(unsigned short *)(iVar7 + 0x2e)) {
    iVar5 = iVar7 + 0x34;
    do {
      if (*(int *)(iVar5 + 0x38) == 0) break;
      float f = func_000A2310(iVar5);
      if (f > local_5c) {
        local_5c = f;
        local_64 = uVar6;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x40;
    } while ((unsigned)uVar6 < *(unsigned short *)(iVar7 + 0x2e));
  }
  if ((unsigned)uVar6 >= *(unsigned short *)(iVar7 + 0x2e)) {
    func_00029CB0(*(int *)(local_64 * 0x40 + 0x6c + iVar7));
    uVar6 = local_64;
  }
  iVar7 = iVar7 + uVar6 * 0x40;
  *(int *)(iVar7 + 0x6c) = param_1;
  *(unsigned int *)(iVar2 + 0xd0) = uVar6;
  func_0009C1F0(*(int *)(iVar7 + 0x30), local_60);
  func_00110330(*(int *)(iVar7 + 0x30), 1);
  func_001105E0(*(int *)(iVar7 + 0x30), &local_50, 0);
  func_00110000(*(int *)(iVar7 + 0x30));
  func_00110480(uVar3, *(int *)(iVar7 + 0x30), 8);
  func_000A22B0(iVar7 + 0x34, 1, 1, 0x18, 0x41c00000, 0);
  *(int *)(iVar2 + 0xd4) = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = *(int *)(iVar7 + 0x30);
  if (*(int *)(param_1 + 0x60) != 0) {
    unsigned char *pb = (unsigned char *)(*(int *)(param_1 + 0x60) + 0x38);
    *pb = *pb | 1;
  }
}

extern int *D_002ED3EC;
int func_0011B4F0(...);
extern int D_001D2E38;
extern int D_001D2E34;
extern short D_001D2E30;
extern int D_001D2E28;
extern char D_001D2E2C;
int func_00116A90(...);
int func_00131990(...);
extern char D_001D29C7;
int func_0011C3B0(...);
int func_00029F00(char *name, unsigned short count)
{
  extern int *D_002ED3EC;
  extern char D_001D29C7;
  int func_00116A90(...);
  int func_00131990(...);
  int func_000EBB10(...);
  int func_00110170(...);
  int func_00110330(...);
  int func_0011C3B0(...);
  int func_0011B4F0(...);
  int *node;
  int obj;
  char buf[0x80];
  int loc[5];
  unsigned int i;
  int *p;

  for (node = D_002ED3EC; node != 0; node = (int *)*node) {
    obj = node[2];
    if (func_0011B4F0(name, obj + 0xc) == 0) {
      *(short *)(obj + 0x2c) = *(short *)(obj + 0x2c) + 1;
      return obj;
    }
  }
  obj = func_00116A90(0xf0, 1, 1);
  strcpy((char *)(obj + 0xc), name);
  *(short *)(obj + 0x2c) = 1;
  *(unsigned short *)(obj + 0x2e) = count;
  strcpy(buf, "models/");
  strcat(buf, name);
  strcat(buf, "/");
  func_00131990(buf);
  strcpy(buf + 4, name);
  strcat(buf, ".mdl");
  for (i = 0, p = (int *)(obj + 0x30); i < *(unsigned short *)(obj + 0x2e); i++, p += 0x10) {
    loc[0] = 0; loc[1] = 0; loc[2] = 0;
    loc[3] = (int)(p + 1);
    *(short *)&loc[4] = 1;
    func_000EBB10(buf + 4, loc);
    *p = loc[0];
    func_00110170(loc[0]);
    func_00110330(*p, 0);
  }
  func_00131990(&D_001D29C7);
  func_0011C3B0(&D_002ED3EC, obj, obj);
  return obj;
}

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

