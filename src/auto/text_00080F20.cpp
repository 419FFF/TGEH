/* 19 functions from 0x00080F20 to 0x00081DB9, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct PEOut { float p[3]; float pad[5]; float s0, s1; float pad2[2]; };
struct PEMgr { unsigned n; int a[64]; int b[64]; float c[64][3]; float d[64]; int unk[23]; int h; PEOut o[64]; int e[64]; int f[64]; };
struct Emitter { int u0; float *pos; int u8; float *vel; int u10; float *col; int u18; float *size; int u20; float *tex; };

void func_00081220(void) {
    extern int D_001D2F40;
    extern void func_00080D20(void);
    extern void func_00080ED0(void);
    extern void func_00079D10(void);
    extern void func_00080F20(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_00080D20, &D_001D2F40);
    func_0011D270(func_00080ED0, &D_001D2F40);
    func_0011D290(func_00079D10, &D_001D2F40);
    func_0011D2B0(func_00080F20, &D_001D2F40);
    func_0011D2D0(func_00092810, &D_001D2F40);
    func_0011D2F0(func_00083D60, &D_001D2F40);
}

void func_00081280(void) {
    extern int D_001D2F40;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D2F40);
}

char func_00081290(void) {
    extern char D_002FBAFD;
    return D_002FBAFD;
}

void func_000812A0(int *param_1, int param_2)
{
  int func_0011CD40(...);
  float func_00131760(void);
  extern float D_001D411C;
  extern float D_001D3E00;
  extern float D_001D2C00;
  extern float D_001D27B0;
  extern float D_001D28C0;
  extern float D_001D2A14;
  int func_0011CDF0(...);
  int func_0011CE10(...);
  int func_0011CE20(...);
  int func_0011CE30(...);
  int func_0011CE50(...);
  int func_0011CF30(...);
  int func_0011CFC0(...);
  int func_0011CF90(...);
  int *puVar1;
  int iVar2;
  unsigned int uVar3;
  double lVar4;

  iVar2 = func_0011CD40(10,0x19,1,4,1);
  *param_1 = iVar2;
  uVar3 = 0;
  do {
    *(int *)(uVar3 + *(int *)(*param_1 + 4)) = 0;
    lVar4 = func_00131760();
    *(float *)(*(int *)(*param_1 + 4) + 4 + uVar3) = (float)(lVar4 * D_001D411C);
    *(int *)(*(int *)(*param_1 + 4) + 8 + uVar3) = 0;
    uVar3 = uVar3 + 0xc;
  } while (uVar3 < 0x78);
  uVar3 = 0;
  do {
    lVar4 = func_00131760();
    *(float *)(uVar3 + *(int *)(*param_1 + 0xc)) = (float)(lVar4 * D_001D3E00 - D_001D2C00);
    *(int *)(*(int *)(*param_1 + 0xc) + 4 + uVar3) = 0x3f800000;
    lVar4 = func_00131760();
    uVar3 = uVar3 + 0xc;
    *(float *)(*(int *)(*param_1 + 0xc) + -4 + uVar3) = (float)(lVar4 * D_001D3E00 - D_001D2C00);
  } while (uVar3 < 300);
  **(float **)(*param_1 + 0x14) = D_001D27B0 - func_00131760() * D_001D28C0;
  *(float *)(*(int *)(*param_1 + 0x14) + 4) = D_001D27B0 - func_00131760() * D_001D2C00;
  *(int *)(*(int *)(*param_1 + 0x14) + 8) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x14) + 0xc) = 0x3f000000;
  uVar3 = 0;
  do {
    *(float *)(uVar3 + *(int *)(*param_1 + 0x1c)) = (func_00131760() + D_001D27B0) * D_001D2A14;
    puVar1 = (int *)(*(int *)(*param_1 + 0x1c) + uVar3);
    iVar2 = *(int *)(*param_1 + 0x1c) + uVar3;
    uVar3 = uVar3 + 8;
    *(int *)(iVar2 + 4) = *puVar1;
  } while (uVar3 < 0x20);
  **(int **)(*param_1 + 0x24) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 8) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x24) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE10(param_2,0);
  func_0011CE20(param_2,0);
  func_0011CE30(param_2,0x43e10000,0x43fa0000);
  func_0011CE50(param_2,0,0,0,0xbeb33333);
  func_0011CF30(param_2,0x42480000,0x42480000);
  func_0011CFC0(param_2,0x42700000);
  func_0011CF90(param_2,0,0,0xc4bb8000,0);
}

void func_00081460(undefined4 param_1, int param_2)
{
  int func_0011DED0(...);
  *(undefined4 *)(param_2 + 0x11c) = 4;
  *(undefined4 *)(param_2 + 0x120) = 5;
  func_0011DED0(param_1);
  return;
}

void _func_00081490(void)
{
  extern int D_001D67A0;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000812A0(...);
  int _func_00081460(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D67A0, _func_000812A0);
  _func_0011D270(&D_001D67A0, _func_00081460);
  _func_0011D290(&D_001D67A0, _func_00085E20);
  _func_0011D2B0(&D_001D67A0, _func_000688D0);
}

void func_000814D0(void) {
    extern int D_001D67A0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D67A0);
}

void _func_000814E0(Emitter **param_1, int param_2)
{
    int func_0011CD40(...);
    float func_00131760(void);
    float func_0012EA60(...);
    extern float D_001D27EC, D_001D2B64, D_001D3330, D_001D67AC, D_001D3E00, D_001D2808;
    int func_0011CDF0(...);
    int func_0011CE10(...);
    int func_0011CE20(...);
    int func_0011CE30(...);
    int func_0011CE50(...);
    int func_0011CF30(...);
    int func_0011CFC0(...);
    unsigned int i;
    float r;

    *param_1 = (Emitter *)func_0011CD40(10, 10, 1, 4, 1);
    i = 0;
    do {
        *(float *)(i + (int)(*param_1)->pos) = func_00131760() - D_001D27EC;
        *(float *)((int)(*param_1)->pos + i + 4) = func_00131760() - D_001D27EC;
        *(float *)((int)(*param_1)->pos + i + 8) = func_00131760() - D_001D27EC;
        func_0012EA60((int)(*param_1)->pos + i);
        int b = (int)(*param_1)->pos;
        float *p = (float *)(b + i);
        *p = func_00131760() * *p * D_001D2B64;
        float *q = (float *)((int)(*param_1)->pos + i + 4);
        *q = func_00131760() * *q * D_001D2B64;
        float *s = (float *)((int)(*param_1)->pos + i + 8);
        *s = func_00131760() * *s * D_001D2B64;
        i += 0xc;
    } while (i < 0x78);
    i = 0;
    do {
        *(float *)(i + (int)(*param_1)->vel) = D_001D67AC - func_00131760() * D_001D3330;
        *(float *)((int)(*param_1)->vel + i + 4) = func_00131760() * D_001D3330 + D_001D3E00;
        r = D_001D67AC - func_00131760() * D_001D3330;
        i += 0xc;
        *(float *)((int)(*param_1)->vel + i - 4) = r;
    } while (i < 0x78);
    *(int *)((*param_1)->col) = 0x3f800000;
    *(int *)((*param_1)->col + 1) = 0x3e4ccccd;
    *(int *)((*param_1)->col + 2) = 0x3f800000;
    *(int *)((*param_1)->col + 3) = 0x3f000000;
    i = 0;
    do {
        r = func_00131760();
        *(float *)(i + (int)(*param_1)->size) = r + r + D_001D2808;
        r = func_00131760();
        i += 8;
        *(float *)((int)(*param_1)->size + i - 4) = r + r + D_001D2808;
    } while (i < 0x20);
    *(int *)((*param_1)->tex) = 0;
    *(int *)((*param_1)->tex + 1) = 0;
    *(int *)((*param_1)->tex + 2) = 0x3f800000;
    *(int *)((*param_1)->tex + 3) = 0x3f800000;
    func_0011CDF0(param_2);
    func_0011CE10(param_2, 0);
    func_0011CE20(param_2, 0);
    func_0011CE30(param_2, 0x41200000, 0x41a00000);
    func_0011CE50(param_2, 0, 0, 0, 0xbe800000);
    func_0011CF30(param_2, 0x3fc00000, 0x40200000);
    func_0011CFC0(param_2, 0x41200000);
}

void _func_000816E0(void)
{
  extern int D_001D67B0;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000814E0(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D67B0, _func_000814E0);
  _func_0011D270(&D_001D67B0, _func_00086E60);
  _func_0011D290(&D_001D67B0, _func_00085E20);
  _func_0011D2B0(&D_001D67B0, _func_000688D0);
}

void func_00081720(void) {
    extern int D_001D67B0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D67B0);
}

int func_0011CD40(...);
float func_00131760(void);
extern float D_001D67AC;
extern float D_001D3330;
extern float D_001D3E00;
extern float D_001D27B0;
extern float D_001D31C8;
int func_0011CDF0(...);
int func_0011CE10(...);
int func_0011CE20(...);
int func_0011CE30(...);
int func_0011CE50(...);
int func_0011CF30(...);
int func_0011CFC0(...);
void func_00081730(int *param_1, int param_2)
{
  int iVar1;
  unsigned int uVar2;

  iVar1 = func_0011CD40(1,1,1,4,1);
  *param_1 = iVar1;
  **(int **)(iVar1 + 4) = 0;
  *(int *)(*(int *)(*param_1 + 4) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 4) + 8) = 0;
  **(float **)(*param_1 + 0xc) = D_001D67AC - func_00131760() * D_001D3330;
  *(float *)(*(int *)(*param_1 + 0xc) + 4) = func_00131760() * D_001D3330 + D_001D3E00;
  *(float *)(*(int *)(*param_1 + 0xc) + 8) = D_001D67AC - D_001D3330 * func_00131760();
  uVar2 = 0;
  **(int **)(*param_1 + 0x14) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x14) + 4) = 0x3e4ccccd;
  *(int *)(*(int *)(*param_1 + 0x14) + 8) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x14) + 0xc) = 0x3f000000;
  do {
    *(float *)(uVar2 + *(int *)(*param_1 + 0x1c)) = (func_00131760() + D_001D27B0) * D_001D31C8;
    *(float *)(*(int *)(*param_1 + 0x1c) + 4 + uVar2) = (func_00131760() + D_001D27B0) * D_001D31C8;
    uVar2 += 8;
  } while (uVar2 < 0x20);
  **(int **)(*param_1 + 0x24) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 8) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x24) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE10(param_2,0);
  func_0011CE20(param_2,0);
  func_0011CE30(param_2,0x41200000,0x41a00000);
  func_0011CE50(param_2,0,0,0,0xbe800000);
  func_0011CF30(param_2,0x3fc00000,0x40200000);
  func_0011CFC0(param_2,0x41200000);
}

void _func_000818B0(void)
{
  extern int D_001D67B4;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00081730(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_0007FCC0(...);
  _func_0011D000(&D_001D67B4, _func_00081730);
  _func_0011D270(&D_001D67B4, _func_00086E60);
  _func_0011D290(&D_001D67B4, _func_00085E20);
  _func_0011D2B0(&D_001D67B4, _func_0007FCC0);
}

void func_000818F0(void) {
    extern int D_001D67B4;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D67B4);
}

void func_00081900(void)
{
  int func_00116A90(...); int func_000688D0(...); int func_00131990(...);
  int func_0011BF40(...); int func_0011BDD0(...); int func_0013C000(...);
  extern int D_00313B54, D_002FBB00;
  extern char D_001D29C7, D_001D67C0;
  int *p, *q, i;
  D_002FBB00 = 0;
  if (D_00313B54 == 5 || D_00313B54 == 3) {
    D_002FBB00 = func_00116A90(0x1464, 1, 1);
    func_000688D0();
    func_00131990(&D_001D29C7);
    ((int *)D_002FBB00)[0x196] = func_0011BF40(&D_001D67C0, 0);
    func_00131990(&D_001D29C7);
    ((int *)D_002FBB00)[0x197] = func_0011BDD0(((int *)D_002FBB00)[0x196], 0);
    func_000688D0();
    p = (int *)D_002FBB00;
    q = p + 0x181;
    for (i = 0; i < 0x15; i++) q[i] = 0;
    p[0x18b] = 1;
    p[0x18c] = 1;
    *q = 2;
    p[0x182] = 2;
    p[0x183] = p[0x197];
    p[0x187] = 3;
    p[0x193] = 0;
    p[0x192] = 0;
    p[0x194] = 0;
    p[0x198] = func_0013C000(0x40);
    p = (int *)D_002FBB00;
    q = p + 0x19b;
    for (i = 0x40; i != 0; i--) {
      q[-2] = 0;
      q[-1] = 0;
      q[0] = 0;
      *(char *)(q + 1) = 100;
      *((char *)q + 5) = 100;
      *((char *)q + 6) = 0x28;
      *((char *)q + 7) = (char)0xff;
      q[4] = 0x3f800000;
      q[5] = 0x3f800000;
      q[6] = 0;
      q[7] = 0;
      q += 12;
    }
    *p = 0;
  }
}

void func_00081A40(void) { extern int D_002FBB00; int func_0013C020(...); int func_0011B990(...); int func_00116FB0(...); int *p; if(D_002FBB00){func_0013C020(*(int*)(D_002FBB00+0x660)); p=(int*)D_002FBB00; --*(short*)(p[0x658/4]+0x2a); func_0011B990(p[0x658/4]); func_00116FB0(D_002FBB00); D_002FBB00=0;} }

void *func_00081B80(unsigned int key) { extern int D_002FBB00; int *p=(int*)D_002FBB00; if(!p) return 0; unsigned n=p[0]; if(!n) return 0; for(unsigned i=0;i<n;i++) if(p[i+1]==(int)key) return (char*)p+i*48+0x670; return 0; }

void func_00081BD0(void)
{
  extern int D_002FBB00;
  int func_000688D0(...);
  int func_000F8F40(...);
  int func_001100A0(...);
  extern float D_00329320;
  extern float D_00329324;
  extern float D_00329328;
  float func_0012EA60(...);
  extern float D_001D541C;
  int func_00133F30(...);
  int func_0013C980(...);
  float *pfVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int uVar9;
  int local_18;
  unsigned int local_14;
  int local_10;
  float local_c;
  float local_8;
  float local_4;

  if (D_002FBB00 != 0) {
    func_000688D0();
    iVar8 = 0;
    local_14 = 0;
    local_10 = 0;
    uVar9 = 0x1364;
    puVar7 = (unsigned int *)D_002FBB00;
    do {
      pfVar1 = (float *)(local_10 + 0x664 + (int)puVar7);
      if (local_14 < *puVar7) {
        iVar6 = *(int *)((uVar9 - 0x1260) + (int)puVar7);
        piVar4 = *(int **)(iVar6 + 0x2c);
        iVar5 = iVar6;
        while ((piVar4 != (int *)0x0 && ((*(unsigned char *)(iVar5 + 0x20) & 8) == 0))) {
          iVar5 = *piVar4;
          piVar4 = *(int **)(iVar5 + 0x2c);
        }
        if (iVar5 == *(int *)((uVar9 - 0x100) + (int)puVar7)) {
          cVar3 = *(char *)(*(int *)(uVar9 + (int)puVar7) + 0x284);
        }
        else {
          *(int *)((uVar9 - 0x100) + (int)puVar7) = iVar5;
          iVar6 = func_000F8F40(iVar6);
          puVar7 = (unsigned int *)D_002FBB00;
          *(int *)(uVar9 + (int)D_002FBB00) = iVar6;
          cVar3 = *(char *)(iVar6 + 0x284);
        }
        if ((cVar3 == '\0') ||
           ((*(unsigned char *)(*(int *)((uVar9 - 0x1260) + (int)puVar7) + 0x20) & 1) != 0)) {
          pfVar1[8] = 0.0f;
          pfVar1[9] = 0.0f;
        }
        else {
          func_001100A0(*(int *)((uVar9 - 0x1360) + (int)puVar7),&local_18);
          puVar7 = (unsigned int *)D_002FBB00;
          *pfVar1 = *(float *)(iVar8 + 0x204 + (int)D_002FBB00) + *(float *)(local_18 + 0x30);
          pfVar1[1] = *(float *)(iVar8 + 0x208 + (int)puVar7) + *(float *)(local_18 + 0x34);
          pfVar1[2] = *(float *)(iVar8 + 0x20c + (int)puVar7) + *(float *)(local_18 + 0x38);
          local_c = -(D_00329320 - *pfVar1);
          local_8 = -(D_00329324 - pfVar1[1]);
          local_4 = -(D_00329328 - pfVar1[2]);
          func_0012EA60(&local_c);
          puVar7 = (unsigned int *)D_002FBB00;
          *pfVar1 = *pfVar1 - local_c * D_001D541C;
          pfVar1[1] = pfVar1[1] - local_8 * D_001D541C;
          pfVar1[2] = pfVar1[2] - local_4 * D_001D541C;
          fVar2 = *(float *)((uVar9 - 0xe60) + (int)puVar7);
          pfVar1[8] = fVar2;
          pfVar1[9] = fVar2;
        }
      }
      else {
        pfVar1[8] = 0.0f;
        pfVar1[9] = 0.0f;
      }
      local_14 = local_14 + 1;
      local_10 = local_10 + 0x30;
      uVar9 = uVar9 + 4;
      iVar8 = iVar8 + 0xc;
    } while (uVar9 < 0x1464);
    func_00133F30(puVar7 + 0x181);
    func_0013C980(((unsigned int *)D_002FBB00)[0x198],(unsigned int *)D_002FBB00 + 0x199,8);
  }
}

