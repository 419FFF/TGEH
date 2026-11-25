/* 15 functions from 0x0001AF40 to 0x0001BE54, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct S_0001B0D0_node { S_0001B0D0_node *next; int unk4; char *data; };
struct S_0001B0D0_st { int a, b, c; void *p; char flag; char z; };

void func_0001AF40(int param_1)
{
  int func_00110060(...);
  int func_00110330(...);
  extern int D_003268B0;
  float func_000A2310(...);
  int func_0001AED0(...);
  int func_0009C1F0(...);
  int func_001105E0(...);
  int func_00110000(...);
  int func_00110480(...);
  int func_000A22B0(...);
  extern char D_0000FFFF;
  int uVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int local_64;
  int local_60;
  float local_5c;
  double f;
  __declspec(align(16)) char local_50[64];

  uVar1 = **(int **)(*(int *)(param_1 + 0x2c) + 0x2c);
  iVar5 = *(int *)(param_1 + 0x114);
  func_00110060(*(int *)(param_1 + 0x2c), local_50);
  uVar4 = 0;
  func_00110330(*(int *)(param_1 + 0x2c), 0);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (*(unsigned char *)(iVar2 + 0x22) == D_003268B0) {
    local_60 = *(int *)(iVar2 + 0x124);
  } else {
    piVar3 = *(int **)(iVar2 + 0x28);
    local_60 = uVar4;
    for (; piVar3 != (int *)uVar4; piVar3 = (int *)piVar3[3]) {
      if (*(unsigned char *)(*piVar3 + 0x22) == D_003268B0) {
        local_60 = *(int *)(*piVar3 + 0x124);
        break;
      }
    }
  }
  local_64 = 0xff;
  *(int *)&local_5c = 0xbf800000;
  if (uVar4 < *(unsigned short *)(iVar5 + 0x2e)) {
    piVar3 = (int *)(iVar5 + 0x6c);
    do {
      if (*piVar3 == 0) break;
      if (*(int *)(*piVar3 + 0x140) == 0) {
        if ((f = func_000A2310(piVar3 - 0xe)) > local_5c) {
          local_5c = (float)f;
          local_64 = uVar4;
        }
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 0x10;
    } while (uVar4 < *(unsigned short *)(iVar5 + 0x2e));
  }
  if (!(uVar4 < *(unsigned short *)(iVar5 + 0x2e))) {
    func_0001AED0(*(int *)(local_64 * 0x40 + 0x6c + iVar5));
    uVar4 = local_64;
  }
  iVar5 = iVar5 + uVar4 * 0x40;
  *(int *)(iVar5 + 0x6c) = param_1;
  *(unsigned int *)(param_1 + 0x118) = uVar4;
  func_0009C1F0(*(int *)(iVar5 + 0x30), local_60);
  func_00110330(*(int *)(iVar5 + 0x30), 1);
  func_001105E0(*(int *)(iVar5 + 0x30), local_50, 0);
  func_00110000(*(int *)(iVar5 + 0x30));
  func_00110480(uVar1, *(int *)(iVar5 + 0x30), 8);
  func_000A22B0(iVar5 + 0x34, 1, 1, &D_0000FFFF, 0x41c00000, 0);
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = *(int *)(iVar5 + 0x30);
}

short func_0001B280(int p)
{
    int func_0001AED0(int);
    int func_00088940(int, int);
    int func_0009CDE0(int);
    int func_000A1CB0(int);
    int func_0011C3E0(int);
    short func_00116FB0(int);
    char *b = *(char **)(p + 0x114);
    func_0001AED0(p);
    if (--*(short *)(b + 0x2c) == 0) {
        unsigned int i;
        for (i = 0; i < *(unsigned short *)(b + 0x2e); ++i) {
            char *slot = b + 0x30 + i * 0x40;
            func_00088940(*(int *)slot, 1);
            func_0009CDE0(*(int *)slot);
            func_000A1CB0((int)(slot + 4));
        }
        func_0011C3E0((int)b);
        return func_00116FB0((int)b);
    }
    return *(short *)(b + 0x2c);
}

unsigned int *func_0001B2F0(unsigned int *p)
{
    struct S { unsigned int v[68]; };
    void *func_00116A90(int,int,int); int func_0009DAF0(void*); int *func_0009C7A0(void*,void*,int);
    int func_0001B0D0(int,int); int func_00012D60(void*,int);
    extern char D_001D2E58, D_001D2E4C, D_001D2E3C;
    unsigned int *b = (unsigned int*)func_00116A90(0x150,1,1);
    int mode; int *r;
    *(struct S*)b = *(struct S*)p;
    *(unsigned char*)((char*)b + 0x12) = 0xb;
    *(unsigned short*)((char*)b + 0x112) = 0;
    func_0009DAF0(b);
    mode = 3;
    r = func_0009C7A0(b, &D_001D2E58, 0);
    if (r && *r == 0x3f800000) { *(unsigned char*)((char*)b + 0x112) |= 1; mode = 1; }
    r = func_0009C7A0(b, &D_001D2E4C, 0);
    if (r && *r == 0x40000000) mode = 1;
    r = func_0009C7A0(b, &D_001D2E3C, 0);
    b[0x45] = func_0001B0D0(*r, mode);
    b[0x46] = 0xff;
    b[0x4f] = b[0x4e] = b[0x4d] = b[0x4c] = b[0x4b] = -1;
    func_00012D60(b, 0x19);
    return b;
}

void func_0001B3E0(void) {
    int func_0001B280(...);
    func_0001B280();
}

void func_0001B3F0(int param_1)
{
  *(undefined2 *)(param_1 + 0x110) = 0;
  return;
}

void func_0001B400(int param_1)
{
  int func_000A2370(...);
  extern undefined4 D_00307DB4;
  extern undefined4 D_001D27B0;
  int func_00088A50(...);
  int func_0001AED0(...);
  int func_0009D3E0(...);
  short sVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  
  sVar1 = *(short *)(param_1 + 0x110);
  if (sVar1 == 1) {
    iVar2 = func_000A2370(*(int *)(param_1 + 0x118) * 0x40 + 0x34 + *(int *)(param_1 + 0x114));
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 0x110) = 2;
      *(float *)(param_1 + 0x11c) = D_00307DB4 + D_001D27B0;
      if (*(int *)(param_1 + 0x140) != 0) {
        psVar4 = (short *)(param_1 + 0x144);
        uVar3 = 0;
        do {
          if ((*psVar4 != -1) &&
             (iVar2 = *(int *)(*psVar4 * 4 + 0x4000), *(char *)(iVar2 + 0x175) == '\0')) {
            *(undefined1 *)(iVar2 + 0x14) = 2;
          }
          uVar3 = uVar3 + 1;
          psVar4 = psVar4 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x140));
      }
    }
  }
  else {
    if (sVar1 == 2) {
      if (*(float *)(param_1 + 0x11c) < D_00307DB4) {
        func_00088A50(*(undefined4 *)(param_1 + 0x2c),0x3f800000,1);
        func_0001AED0(param_1);
        return;
      }
      func_00088A50(*(undefined4 *)(param_1 + 0x2c),*(float *)(param_1 + 0x11c) - D_00307DB4,1);
      return;
    }
    if (sVar1 == 3) {
      func_0009D3E0(param_1);
      return;
    }
  }
  return;
}

void func_0001B4F0(int p)
{
    int func_000A22F0(int);
    unsigned int n = *(unsigned short *)(p + 0x110);
    if (--n == 0) {
        func_000A22F0(*(int *)(p + 0x114) + (*(int *)(p + 0x118) << 6) + 0x34);
    }
}

void func_0001B7F0(void)
{
  int func_000B5650(...);
  int func_0001B520(...);
  char cVar1;
  
  cVar1 = func_000B5650(0xe);
  if (cVar1 == '\0') {
    cVar1 = func_000B5650(0xc);
    if (cVar1 == '\0') {
      func_0001B520();
      return;
    }
  }
  return;
}

void *func_0001B820(void *p)
{
 void *func_00116A90(int,int,int); void *func_0010F750(void*,int,int); int func_00012D60(void*,int);
 unsigned int *b=(unsigned int*)func_00116A90(0x130,1,1); unsigned int *q=(unsigned int*)p;
 int i; for(i=0;i<68;i++) b[i]=q[i];
 *(unsigned char*)((char*)b+0x12)=3;
 b[11]=(unsigned int)func_0010F750((void*)0x001D2E74,*(int*)0x00326110,0xe0);
 func_00012D60(b,20);return b;
}

void _func_0001B870(int param_1)
{
  int func_0009C7A0(...);
  extern undefined D_001D2EB8, D_001D2EB0, D_001D2EA8, D_001D2E98, D_001D2E8C, D_001D2E84, D_001D2E7C;
  extern int D_00308158;
  int func_00110300(...);
  int func_0013E469(...);
  int func_0013F2E9(...);
  int func_000F8810(...);
  int func_000F9610(...);
  int func_00110420(...);
  int func_00110480(...);
  unsigned short one = 1;
  int *puVar2;
  int uVar3;
  int iVar4;
  char local_80[128];

  *(int *)(param_1 + 300) = 0;
  puVar2 = (int *)func_0009C7A0(param_1, &D_001D2EB8, 0);
  *(int *)(param_1 + 0x110) = *puVar2;
  puVar2 = (int *)func_0009C7A0(param_1, &D_001D2EB0, 0);
  uVar3 = func_00110300(*(int *)(D_00308158 + 0x2c), *puVar2, 0x18);
  *(int *)(param_1 + 0x11c) = uVar3;
  puVar2 = (int *)func_0009C7A0(param_1, &D_001D2EA8, 0);
  iVar4 = func_00110300(*(int *)(D_00308158 + 0x2c), *puVar2, 0x18);
  *(int *)(param_1 + 0x120) = iVar4;
  if ((*(int *)(param_1 + 0x11c) == 0) || (iVar4 == 0)) {
    *(int *)(param_1 + 0x11c) = 0;
  } else {
    func_0013E469(local_80, &D_001D2E98, *(int *)(*(int *)(param_1 + 0x11c) + 0x38), *(int *)(iVar4 + 0x38));
    uVar3 = func_00110300(*(int *)(D_00308158 + 0x2c), local_80, 0x18);
    *(int *)(param_1 + 0x124) = uVar3;
    func_0013E469(local_80, &D_001D2E98, *(int *)(*(int *)(param_1 + 0x120) + 0x38), *(int *)(*(int *)(param_1 + 0x11c) + 0x38));
    uVar3 = func_00110300(*(int *)(D_00308158 + 0x2c), local_80, 0x18);
    *(int *)(param_1 + 0x128) = uVar3;
    iVar4 = func_0013F2E9(*(int *)(param_1 + 0xc), &D_001D2E8C);
    if (iVar4 != 0) {
      *(unsigned short *)(*(int *)(param_1 + 0x124) + 0x20) |= one;
      *(unsigned short *)(*(int *)(param_1 + 0x128) + 0x20) |= one;
    }
  }
  puVar2 = (int *)func_0009C7A0(param_1, &D_001D2E84, 0);
  if (*(char *)*puVar2 != '\0') {
    uVar3 = func_00110300(*(int *)(D_00308158 + 0x2c), (char *)*puVar2, 0x18);
    *(int *)(param_1 + 0x114) = uVar3;
    if (*(int *)(param_1 + 0x11c) != 0) {
      func_000F8810(uVar3);
      func_000F9610(*(int *)(param_1 + 0x114));
      func_00110420(*(int *)(param_1 + 0x114), **(int **)(*(int *)(param_1 + 0x114) + 0x2c));
      *(unsigned short *)(*(int *)(param_1 + 0x114) + 0xd0) |= one;
      func_00110480(*(int *)(param_1 + 0x11c), *(int *)(param_1 + 0x114), 0);
      func_00110480(*(int *)(param_1 + 0x120), *(int *)(param_1 + 0x114), 0);
    }
  } else {
    *(int *)(param_1 + 0x114) = 0;
  }
  puVar2 = (int *)func_0009C7A0(param_1, &D_001D2E7C, 0);
  if (*(char *)*puVar2 != '\0') {
    uVar3 = func_00110300(*(int *)(D_00308158 + 0x2c), (char *)*puVar2, 0x18);
    *(int *)(param_1 + 0x118) = uVar3;
    if (*(int *)(param_1 + 0x11c) != 0) {
      func_000F8810(uVar3);
      func_000F9610(*(int *)(param_1 + 0x118));
      func_00110420(*(int *)(param_1 + 0x118), **(int **)(*(int *)(param_1 + 0x118) + 0x2c));
      *(unsigned short *)(*(int *)(param_1 + 0x118) + 0xd0) |= one;
      func_00110480(*(int *)(param_1 + 0x11c), *(int *)(param_1 + 0x118), 0);
      func_00110480(*(int *)(param_1 + 0x120), *(int *)(param_1 + 0x118), 0);
    }
  } else {
    *(int *)(param_1 + 0x118) = 0;
  }
}

unsigned char func_0001BB10(int a,int b,int c,int d,int depth)
{
 int func_0011CCD0(int,int,int,int,int); int *n; int obj;
 if(depth==2)return 0;
 if(a==b)return 1;
 for(n=*(int**)(a+0x30);n;n=(int*)n[3]) {obj=*n;
 if((*(unsigned char*)(obj+0x20)&0x10)==0&&obj!=c&&obj!=d) {
 int res=func_0011CCD0(obj,b,c,d,depth+1);
 if(res!=0)return 1;}}
 return 0;
}

void __fastcall func_0001BE10(unsigned int *p){p[0x17c/4]=0;p[0x180/4]=0x3f800000;p[0x184/4]=0x3f800000;p[0x188/4]=0x3f800000;p[0x18c/4]=0x3f800000;p[0x190/4]=0x3f800000;p[0x194/4]=0x3f800000;p[0x198/4]=0x3f800000;p[0x19c/4]=0;p[0x1a0/4]=0;}

