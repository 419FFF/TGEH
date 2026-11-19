/* 13 functions from 0x00080180 to 0x00080F1F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C80A70 { float x, y, z, w; };
struct S80A70 { int p[3]; char r, g, b, a; int u[2]; int v[2]; int t[2]; int pad[2]; };

void func_00080540(void *p){void func_00110760(...); void func_00116FB0(...); func_00110760(*(int*)((char*)p+0x100)); func_00116FB0(*(int*)((char*)p+0xfc));}

void __cdecl _func_00080860(void)
{
    extern int D_002FBA84, D_002FBA80;
    extern float D_001D31C8, D_001D2B64;
    extern char D_002FB984[];
    extern int D_002FBA00, D_002FBA04, D_002FBA08, D_002FBA0C, D_002FBA10, D_002FBA14, D_002FBA18, D_002FBA1C;
    extern int D_002FBA20, D_002FBA24, D_002FBA28, D_002FBA2C, D_002FBA30, D_002FBA34, D_002FBA38, D_002FBA3C;
    extern int D_002FBA40, D_002FBA44, D_002FBA48, D_002FBA4C, D_002FBA50, D_002FBA54, D_002FBA58, D_002FBA5C;
    extern int D_002FBA60, D_002FBA64, D_002FBA68, D_002FBA6C, D_002FBA70, D_002FBA74, D_002FBA78, D_002FBA7C;
    int func_00110370(...);
    float func_00131760(void);
    void func_00080540(void);
    void func_00080570(void);
    if (D_002FBA84 == 0) {
        int s[7];
        unsigned int i;
        s[1] = (int)func_00080570;
        s[2] = 0;
        s[3] = (int)func_00080540;
        s[4] = 0;
        D_002FBA80 = func_00110370(s);
        i = 0;
        do {
            *(float *)(D_002FB984 + 4 + i) = (float)((double)func_00131760() * D_001D31C8 - D_001D2B64);
            *(float *)(D_002FB984 + 8 + i) = (float)((double)func_00131760() * D_001D31C8 - D_001D2B64);
            *(float *)(D_002FB984 + 12 + i) = (float)((double)func_00131760() * D_001D31C8 - D_001D2B64);
            i += 0xc;
        } while (i < 0x78);
        {
        int z = 0;
        D_002FBA00 = z; D_002FBA04 = z; D_002FBA08 = z; D_002FBA0C = z;
        D_002FBA10 = z; D_002FBA14 = z; D_002FBA18 = z; D_002FBA1C = z;
        D_002FBA20 = z; D_002FBA24 = z; D_002FBA28 = z; D_002FBA2C = z;
        D_002FBA30 = z; D_002FBA34 = z; D_002FBA38 = z; D_002FBA3C = z;
        D_002FBA40 = z; D_002FBA44 = z; D_002FBA48 = z; D_002FBA4C = z;
        D_002FBA50 = z; D_002FBA54 = z; D_002FBA58 = z; D_002FBA5C = z;
        D_002FBA60 = z; D_002FBA64 = z; D_002FBA68 = z; D_002FBA6C = z;
        D_002FBA70 = z; D_002FBA74 = z; D_002FBA78 = z; D_002FBA7C = z;
        }
    }
    D_002FBA84 = D_002FBA84 + 1;
}

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

void _func_00080A70(int *a, int *b, float *c)
{
 extern int D_002FBAF8, D_002FBAF0, D_002FBA90;
 extern float D_001D66D8;
 void *func_00116A90(int, int, int);
 void *func_00116E50(int, int, int, int);
 char func_001313C0(float);
 if (D_002FBAF8 == 1) {
  if (D_002FBA90 == 0) D_002FBA90 = (int)func_00116A90(0x30, 1, 1);
  else D_002FBA90 = (int)func_00116E50(D_002FBA90, (D_002FBAF0 * 3 + 3) * 16, 1, 1);
  int o = D_002FBAF0 * 0x30;
  *(int *)(D_002FBA90 + o) = a[0];
  *(int *)(D_002FBA90 + o + 4) = a[1];
  *(int *)(D_002FBA90 + o + 8) = a[2];
  *(int *)(D_002FBA90 + o + 0x20) = b[0];
  *(int *)(D_002FBA90 + o + 0x24) = b[1];
  *(char *)(D_002FBA90 + D_002FBAF0 * 0x30 + 0xc) = func_001313C0(D_001D66D8 * c[2]);
  *(char *)(D_002FBA90 + D_002FBAF0 * 0x30 + 0xd) = func_001313C0(D_001D66D8 * c[1]);
  *(char *)(D_002FBA90 + D_002FBAF0 * 0x30 + 0xe) = func_001313C0(D_001D66D8 * c[0]);
  int p = D_002FBAF0 * 0x30;
  *(char *)(D_002FBA90 + p + 0xf) = func_001313C0(D_001D66D8 * c[3]);
  *(int *)(D_002FBA90 + p + 0x10) = 0;
  *(int *)(D_002FBA90 + p + 0x14) = 0;
  *(int *)(D_002FBA90 + p + 0x18) = 0x3f800000;
  *(int *)(D_002FBA90 + p + 0x1c) = 0x3f800000;
  D_002FBAF0 = D_002FBAF0 + 1;
 }
}

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

