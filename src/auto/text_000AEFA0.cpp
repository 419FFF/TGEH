/* 16 functions from 0x000AEFA0 to 0x000AFE83, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int func_00133F30(int *);
int func_0011E4A0(int,int,int,int,int *,int *,int,int);
int func_000688D0(void);
extern unsigned char D_00313958;
extern unsigned char D_00313960[256];
extern int D_00313B6C;
int func_001266F0(void *);
int func_00109B91(void);
int func_0013EA50(unsigned char *,int);
int func_000B06A0(void);
void func_000AF3C0(int param_1)
{
    int local[21] = {0};
    local[10]=4; local[11]=5; local[18]=6; local[19]=2;
    func_00133F30(local);
    int vals[4] = {0,0,0x3f800000,0x3f800000};
    func_0011E4A0(0,0,0x44200000,0x43f00000,vals,&vals[2],param_1,0x3f800000);
    func_000688D0();
}

void func_000AF470(int ignored)
{
  extern undefined4 D_00313B00;
  int func_0013B380(undefined4);
  func_0013B380(D_00313B00);
}

void func_000AF480(void)
{
  extern undefined D_00313940;
  int func_0013B2B0(...);
  extern undefined4 D_00313924;
  int func_0013B140(...);
  extern undefined4 D_00313954;
  int func_00136450(...);
  extern undefined4 D_00313930;
  int func_0009CE80(...);
  extern undefined4 D_00313928;
  extern undefined4 D_00313938;
  int func_0011B990(...);
  int func_00110760(...);
  extern undefined4 D_0031394C;
  int func_0013B300(...);
  int func_001053A0(...);
  extern undefined4 D_00313944;
  int func_0010F8A0(...);
  int func_0011BE30(...);
  extern undefined4 D_003291E0;
  extern undefined4 D_00313934;
  int func_0013B380(...);
  extern undefined4 D_00313B00;
  undefined4 uVar1;
  
  D_00313940 = 1;
  func_0013B2B0(D_00313924,0xbf800000);
  func_0013B140(D_00313954);
  D_00313954 = 0;
  func_00136450();
  uVar1 = *(undefined4 *)(D_00313930 + 0x18);
  func_0009CE80(D_00313930);
  func_0009CE80(D_00313928);
  func_0009CE80(D_00313938);
  func_0011B990(uVar1);
  func_00110760(D_0031394C);
  func_0013B300(D_00313924);
  func_001053A0(D_00313944);
  func_0010F8A0();
  func_0010F8A0();
  func_0010F8A0();
  func_0011BE30();
  func_0011BE30();
  func_0011BE30();
  D_003291E0 = D_00313934;
  func_0013B380(D_00313B00);
  return;
}

void func_000AF540(void)
{
  extern undefined4 D_00313AB8;
  int func_00120E00(...);
  int func_00120EA0(...);
  int func_00120ED0(...);
  int func_00120F60(...);
  int func_00120F70(...);
  int func_00120F80(...);
  int func_00120E70(...);
  int func_00120E50(...);
  int func_000AFD10(...);
  extern undefined D_001D5768;
  int func_00121990(...);
  int func_000688D0(...);
  undefined4 uVar1;
  
  if (D_00313AB8 != 0) {
    func_00120E00(D_00313AB8);
    func_00120EA0(1,1,1,0);
    func_00120ED0(4,5);
    func_00120F60(0x3f800000);
    func_00120F70(0x3f800000);
    func_00120F80(0x40200000,0x40200000);
    func_00120E70(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    func_00120E50(0x42f00000,0x43d20000);
    uVar1 = func_000AFD10(((undefined *)&D_001D5768));
    func_00121990(uVar1);
    func_000688D0();
    return;
  }
  return;
}

void func_000AFB10(void)
{
    int value = func_00109B91();
    switch (value) {
    case 1: case 2: case 7: case 8: case 9: D_00313B6C=0; break;
    case 3: D_00313B6C=2; return;
    case 4: D_00313B6C=1; return;
    case 5: D_00313B6C=3; return;
    case 6: D_00313B6C=4; return;
    }
}

void func_000AFB80(void)
{
  int func_000AFB10(...);
  int func_00126320(...);
  func_000AFB10();
  func_00126320();
  return;
}

void func_000AFD00(void) {
    int func_001266B0(...);
    func_001266B0();
}

char *func_000AFD10(char *param_1)
{
    char *s=(char *)func_001266F0(param_1);
    if (!s) return param_1;
    if (D_00313958) {
        char *p=s;
        do { char c=*p++; if (!c) break; } while (1);
        unsigned int n=(unsigned int)(p-s-1);
        for(unsigned int i=0;i<n;i++) s[i]=(char)((-(int)(i&1))&0x1f)+0x21;
    }
    return s;
}

int func_000AFDF0(int param)
{
  extern char D_001D89C0;
  int func_001266F0(...), func_0013EA50(...);
  void __stdcall func_00109D13(char*, unsigned long long*, int, int);
  unsigned long long value;
  int obj = func_001266F0(param);

  if (obj) {
    func_00109D13(&D_001D89C0, &value, 0, 0);
    int count = 4 - (int)(value >> 14);
    if (count <= 0 || count > 4)
      count = 4;
    char *p = (char *)func_0013EA50(obj, 0x34);
    if (p)
      *p = (char)(count + 0x34);
    return obj;
  }
  return param;
}

unsigned char _func_000AFE70(void *value)
{
    int _func_001266F0(...);
    unsigned char result = _func_001266F0(value) != 0;
    return result;
}

