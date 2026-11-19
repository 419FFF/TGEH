/* 10 functions from 0x000C2DA0 to 0x000C3BD1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000C2DA0(void)
{
    extern int D_003080AC;
    extern int D_00314EF4;
    extern unsigned char D_00314ED8;
    extern char D_001D9BA0;
    extern char D_001D9B98;
    extern char D_001D9B8C;
    extern char D_001D9B88;
    extern char D_001D9B80;
    extern char D_001D9B74;
    int func_000A2500(int);
    int func_00120E50(int, int);
    int func_000AFD10(char *);
    int func_0013E469(char *, char *, ...);
    int func_00121990(char *);
    char buf[64];

    if (D_003080AC != 2) {
        func_000A2500(0x3fd9999a);
        switch (D_00314EF4) {
        case 18:
            func_00120E50(0x43a00000, 0x43700000);
            func_0013E469(buf, &D_001D9B98, func_000AFD10(&D_001D9BA0), D_00314ED8 + 1);
            func_00121990(buf);
            return;
        case 13:
            func_00120E50(0x43a00000, 0x43700000);
            func_0013E469(buf, &D_001D9B88, func_000AFD10(&D_001D9B8C));
            func_00121990(buf);
            return;
        case 11:
            if (D_00314ED8 < 2)
                break;
            func_00120E50(0x43a00000, 0x43700000);
            func_0013E469(buf, &D_001D9B88, func_000AFD10(&D_001D9B80));
            func_00121990(buf);
            return;
        case 20:
            func_00120E50(0x43a00000, 0x43700000);
            func_0013E469(buf, &D_001D9B88, func_000AFD10(&D_001D9B74));
            func_00121990(buf);
            return;
        }
    }
}

void func_000C2F00(void)
{
  int func_0009C590(...);
  extern undefined D_001D9AAC;
  int func_000B5650(...);
  int func_000B6600(...);
  int func_00116FB0(...);
  char cVar1;
  int iVar2;
  
  iVar2 = func_0009C590(((undefined *)&D_001D9AAC));
  cVar1 = func_000B5650(4);
  if (cVar1 != '\0') {
    func_000B6600(4);
  }
  func_00116FB0(*(undefined4 *)(iVar2 + 0x110));
  return;
}

void func_000C2F40(void)
{
  int func_000F49D0(...);
  extern undefined D_001D42F0;
  int func_00012040(...);
  extern undefined4 D_00307DF8;
  extern undefined4 D_00314E7C;
  int func_000B6510(...);
  func_000F49D0(((undefined *)&D_001D42F0),1);
  func_00012040(D_00307DF8,**(undefined4 **)(*(int *)(D_00314E7C + 0x2c) + 0x2c));
  func_000B6510(4,0);
  return;
}

void func_000C3760(char param_1)
{
  extern int D_00316058[];
  extern const float D_001D6C2C, D_001D504C, D_001D2B98, D_001D66D8, D_001D9C24, D_001D9C20, D_001D27FC, D_001D35FC;
  int *piVar3 = D_00316058;
  do {
    int i = 0;
    float *pf = (float*)(*(int*)(*piVar3 + 0x14c) + 0x24);
    do {
      float k = (float)i * D_001D6C2C;
      if (param_1 != 0) {
        float f = D_001D2B98 - D_001D504C * k;
        pf[-1] = f;
        pf[0] = f;
        *((unsigned char*)pf - 0x18) = (unsigned char)(0xff - (char)(D_001D66D8 * k));
        *((unsigned char*)pf - 0x17) = (unsigned char)(0x7a - (char)(D_001D9C24 * k));
        *((unsigned char*)pf - 0x16) = (unsigned char)(0x5e - (char)(D_001D9C20 * k));
      } else {
        float f = D_001D35FC - k * D_001D27FC;
        *((unsigned char*)pf - 0x18) = 0;
        *((unsigned char*)pf - 0x17) = 0x80;
        *((unsigned char*)pf - 0x16) = 0xff;
        pf[-1] = f;
        pf[0] = f;
      }
      i++;
      *((unsigned char*)pf - 0x15) = 0xff;
      pf += 12;
    } while (i < 12);
    piVar3++;
  } while ((int)piVar3 < (int)&D_00316058[0] + 0x40);
}

void func_000C3830(void)
{
  extern undefined D_00316098;
  extern undefined D_00316058;
  int func_00110420(...);
  int func_00110760(...);
  int iVar1;
  int *piVar2;
  
  if (D_00316098 != '\0') {
    piVar2 = (int *)((undefined *)&D_00316058);
    do {
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x2c) != 0) {
        func_00110420(iVar1,**(undefined4 **)(iVar1 + 0x2c));
      }
      func_00110760(*piVar2);
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x3ff8);
  }
  D_00316098 = 0;
  return;
}

