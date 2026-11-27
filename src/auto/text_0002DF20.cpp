/* 8 functions from 0x0002DF20 to 0x0002ED28, found by Ghidra. */
#include "common.h"

struct V3_2E070 { float x, y, z; };
struct Blk2DF20 { int d[0x118]; };
extern Blk2DF20 _D_002ED780;
extern char _D_002EDBF4, _D_002EDBF5, _D_00307D6C;
extern int _D_002EDBE0, _D_002EDBE4, _D_002EDBE8, _D_002EDBF0;

#pragma optimize("y", on)
extern void __cdecl _func_0009C1F0(int, int);
extern void __cdecl _func_00110330(int, int);
extern void __cdecl _func_00099EB0(int);
extern void __cdecl _func_00088A50(int, float, int);
extern void __cdecl _func_000A22B0(int, int, int, int, int, int);
extern void __cdecl _func_000A2350(int, int);
void __cdecl _func_0002DF20(int param_1)
{
  int *piVar1 = *(int **)(param_1 + 0x110);
  if (*(char *)(param_1 + 0x15) == 0x15 && *piVar1 == 0x43) {
    Blk2DF20 *dst;
    _func_0009C1F0(*(int *)(param_1 + 0x2c), piVar1[0xc5]);
    _func_00110330(*(int *)(param_1 + 0x2c), 1);
    *(char *)(param_1 + 0x175) = 0;
    *(char *)(param_1 + 0x14) = 2;
    _func_00099EB0(param_1 + 0x170);
    _func_00088A50(*(int *)(param_1 + 0x2c), 1.0f, 1);
    dst = *(Blk2DF20 **)(param_1 + 0x110);
    *dst = _D_002ED780;
    if (_D_002EDBF4 != 0)
      _func_000A22B0(param_1 + 100, 2, _D_002EDBE0, _D_002EDBE4, _D_002EDBE8, 0);
    else
      _func_000A22B0(param_1 + 100, 1, _D_002EDBE0, _D_002EDBE4, _D_002EDBE8, 0);
    _func_000A2350(param_1 + 100, _D_002EDBF0);
    _D_00307D6C = 0;
    if (_D_002EDBF5 != 0) {
      *piVar1 = 0x4e;
    }
  }
}

void func_0002E000(int p, int *a, int *b, int q, char flag) { *(int *)(p+0x1e4)=q; *(int *)(p+0x1e0)=0; *(int *)(p+0x134)=a[0]; *(int *)(p+0x138)=a[1]; *(int *)(p+0x13c)=a[2]; *(int *)(p+0x140)=b[0]; *(int *)(p+0x144)=b[1]; *(int *)(p+0x148)=b[2]; *(char *)(p+0x1ae)=flag; if(flag) *(char *)(p+0x1ad)=1; }

void __cdecl _func_0002E300(int param_1) { volatile int local; local = 11; }

void func_0002E990(int param_1, char param_2)
{
  extern char D_002EEABC;
  extern int D_002EEAB8;
  extern char D_001D3C00;
  extern int D_00307DF8;
  extern unsigned int D_003268B0;
  int func_0011F890(...), func_0011FD30(...), func_00088840(...), func_0010FB70(...);
  int func_0009C1F0(...), func_00088900(...), func_00110420(...);
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  struct { float a, b, c, d, e, f, g, h, i; } loc;

  if (param_2 != D_002EEABC) {
    if (D_002EEAB8 == 0) {
      loc.a = 0.0f;
      loc.b = 1.0f;
      loc.c = 1.0f;
      loc.d = 1.0f;
      loc.e = 1.0f;
      loc.g = 0.4f;
      D_002EEAB8 = func_0011F890(&D_001D3C00, &loc);
      func_0011FD30(D_002EEAB8, 8);
    }
    if (param_2 != 0) {
      for (piVar1 = *(int **)(*(int *)(D_00307DF8 + 0x2c) + 0x28); piVar1 != 0; piVar1 = (int *)piVar1[3]) {
        iVar2 = *piVar1;
        if (*(unsigned char *)(iVar2 + 0x22) == D_003268B0) {
          func_00088840(iVar2);
          if (*(int *)(iVar2 + 0x128) != 0) {
            uVar3 = 0;
            if (uVar3 < *(unsigned int *)(iVar2 + 0x128)) {
              iVar4 = 0;
              do {
                *(int *)(*(int *)(iVar2 + 300) + 0x10 + iVar4) = 3;
                uVar3 = uVar3 + 1;
                iVar4 = iVar4 + 100;
              } while (uVar3 < *(unsigned int *)(iVar2 + 0x128));
            }
          }
        }
      }
      func_0010FB70(*(int *)(D_00307DF8 + 0x2c), D_002EEAB8, 3);
      func_0009C1F0(*(int *)(D_00307DF8 + 0x2c), -9);
    } else {
      for (piVar1 = *(int **)(*(int *)(D_00307DF8 + 0x2c) + 0x28); piVar1 != 0; piVar1 = (int *)piVar1[3]) {
        if (*(unsigned char *)(*piVar1 + 0x22) == D_003268B0) {
          func_00088900(*piVar1);
        }
      }
      func_00110420(*(int *)(D_00307DF8 + 0x2c), D_002EEAB8);
      func_0009C1F0(*(int *)(D_00307DF8 + 0x2c), 0);
    }
    D_002EEABC = param_2;
  }
}

typedef unsigned int u32;
extern int func_00110060(...),func_0012F7A0(...),func_0012F4C0(...),func_00112250(...);
bool func_0002EB20(int a,int b,int *p) { extern int func_00110060(...),func_0012F7A0(...),func_0012F4C0(...),func_00112250(...); __declspec(align(16)) char local_90[0x30]; unsigned int v[3]; char local_50[0x4c]; char pad[0x10]; func_00110060(p[11],local_90); v[0]=p[16];v[1]=p[17];v[2]=p[18];func_0012F7A0(v,local_90); func_0012F4C0(local_50,a,local_90); return (bool)func_00112250(p+12,local_50,b); }

bool func_0002EBB0(int a,int b,int *p) { extern int func_00110060(...),func_0012F7A0(...),func_0012F4C0(...),func_00112250(...); __declspec(align(16)) char local_90[0x30]; char local_50[0x4c]; unsigned int v[3]; func_00110060(p,local_90);v[0]=p[0];v[1]=p[1];v[2]=p[2];func_0012F7A0(v,local_90);func_0012F4C0(local_50,a,local_90);return (bool)func_00112250(p+4,local_50,b); }

