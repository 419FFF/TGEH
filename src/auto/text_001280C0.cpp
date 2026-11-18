/* 30 functions from 0x001280C0 to 0x00129088, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

static inline int inl_strlen(const char *s)
{
    const char *e = s + 1;
    char c;
    do {
        c = *s++;
    } while (c != 0);
    return (int)((unsigned)s - (unsigned)e);
}

int _func_00128450(char *param_1)
{
    extern char D_001DF6F4[5];
    char func_00131A10(...);
    int func_00126120(...);
    int func_001356B0(...);
    void func_00126300(...);
    void func_00117100(...);
    int func_00126EC0(...);
    void func_00117130(...);
    void func_001280C0(...);
    int func_00135280(...);
    void func_00116FB0(...);
    char buf[256];
    char *p, *d;
    char c;
    int len, iVar7, uVar5, uVar6;
    p = param_1;
    do {
        c = *p;
        p[buf - param_1] = c;
        p++;
    } while (c != 0);
    p = buf;
    do {
        c = *p++;
    } while (c != 0);
    len = p - (buf + 1);
    buf[len - 3] = 0;
    d = buf - 1;
    do {
        c = *++d;
    } while (c != 0);
    *(int *)d = *(int *)D_001DF6F4;
    d[4] = D_001DF6F4[4];
    if (func_00131A10(buf)) {
        uVar5 = func_00126120(buf);
        uVar6 = func_001356B0(uVar5);
        func_00126300(uVar5);
        return uVar6;
    }
    func_00117100();
    iVar7 = func_00126EC0(param_1);
    if (iVar7 == 0) {
        func_00117130();
        return 0;
    }
    func_001280C0(iVar7, 1, 1, 0x20);
    func_00117130();
    uVar5 = func_00135280(iVar7);
    func_00116FB0(*(int *)(iVar7 + 0x30));
    func_00116FB0(iVar7);
    return uVar5;
}

undefined4 func_00128540(undefined4 param_1)
{
  int func_00117100(...);
  int func_0012DFD0(...);
  int func_001280C0(...);
  int func_00117130(...);
  int func_00135280(...);
  int func_00116FB0(...);
  int iVar1;
  undefined4 uVar2;
  
  func_00117100();
  iVar1 = func_0012DFD0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  func_001280C0(iVar1,1,1,0x20);
  func_00117130();
  uVar2 = func_00135280(iVar1);
  func_00116FB0(*(undefined4 *)(iVar1 + 0x30));
  func_00116FB0(iVar1);
  return uVar2;
}

void func_00128590(void)
{
  extern undefined4 D_00331AD8;
  int func_0011C340(...);
  int func_0011B5C0(...);
  extern undefined D_001DF6EC;
  int func_00128450(...);
  int func_001280B0(...);
  extern undefined D_001DF6F0;
  int func_00128540(...);
  if (D_00331AD8 == 0) {
    func_0011C340();
    func_0011B5C0(((undefined *)&D_001DF6EC),&func_00128450,&func_001280B0);
    func_0011B5C0(((undefined *)&D_001DF6F0),&func_00128540,&func_001280B0);
  }
  D_00331AD8 = D_00331AD8 + 1;
  return;
}

void func_001286B0(int a0, int a1) {
    int func_0013A000(...);
    func_0013A000(a1);
}

int func_001286C0(int p) { int func_0010F750(...),func_0011C3B0(...); extern int D_00331ADC,D_00331AE0; int x=func_0010F750(p,D_00331ADC,0x120); *(int *)(x+0xf0)=0; *(int *)(x+0x100)=0x3f800000; *(int *)(x+0x104)=-1; func_0011C3B0(&D_00331AE0,x+0xe0,x); return x; }

void func_00128710(int base,int idx,unsigned int *d) { int func_0011BF40(...),func_0011BDD0(...),func_00148AE0(...); int v=func_0011BF40(d[0],0); int p=base+idx*20; *(int *)(p+0xec)=v; *(int *)(p+0xf8)=d[2]; *(int *)(p+0xfc)=d[3]; *(int *)(p+0xf4)=d[1]; int x=func_0011BDD0(v,0); if(x) *(int *)(base+0x104)=func_00148AE0(x); --*(short *)(*(int *)(p+0xec)+0x2a); }

void func_00128780(int base,int idx,unsigned int *d) { int func_0011B820(...); int p=base+idx*20; *(int *)(p+0xec)=func_0011B820(d[0]); *(int *)(p+0xf8)=d[2]; *(int *)(p+0xfc)=d[3]; *(int *)(p+0xf4)=d[1]; *(unsigned char *)(base+0x21)|=0x40; }

void func_001287D0(int param_1, int param_2, int param_3)
{
  int func_0011BCA0(...);
  func_0011BCA0(*(int *)(param_1 + 0xec + param_2 * 0x14), param_3);
  *(unsigned char *)(param_1 + 0x21) &= 0xbf;
}

void func_00128800(int param_1, int param_2)
{
  int func_0011BB00(...);
  func_0011BB00(*(int *)(param_1 + 0xec + param_2 * 0x14));
  *(unsigned char *)(param_1 + 0x21) |= 0x40;
}

void func_00128830(int a0) {
    extern int D_00331B04;
    D_00331B04 = a0;
}

void func_00128870(int param_1, undefined4 param_2)
{
  int func_0013AC20(...);
  if (*(int *)(param_1 + 0xf0) != 0) {
    func_0013AC20(*(int *)(param_1 + 0xf0),param_2);
    *(undefined4 *)(param_1 + 0x104) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x104) = param_2;
  return;
}

void func_00128990(int param_1, char param_2)
{
  if (param_2 != '\0') {
    *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 2;
    return;
  }
  *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) & 0xfffffffd;
  return;
}

void func_00128BE0(int p) { int func_0013AAC0(...); int q=*(int *)(p+0xf0); if(q) func_0013AAC0(q); }

void func_00128C90(char *obj)
{
    int func_001100A0(...);
    extern int D_00329238;
    int func_0012E6D0(...);
    int func_0012ECA0(...);
    extern int D_001E7D28;
    int func_0012E750(...);
    int func_0013ACF0(...);
    int func_0013AD10(...);
    extern int *D_00331AF4;
    extern int D_00331AE0;
    int func_0013ACA0(...);
    int func_001289C0(...);
    int func_0013ADF0(...);
    int func_0011C3E0(...);
    int func_0011C3B0(...);
    char *self = obj;
    int *node;
    int *next;
    char *e;
    unsigned char m[12];

    func_001100A0(obj, &obj);
    if (*(int *)(self + 0xd4) == D_00329238) {
        unsigned int k = *(unsigned char *)(self + 0x23) & 1;
        func_0012E6D0(m, self - k * 0x40 + 0xb0, self + k * 0x40 + 0x70);
        func_0012ECA0(m, D_001E7D28);
    } else {
        func_0012E750(m);
    }
    func_0013ACF0(obj);
    func_0013AD10(m);
    for (node = D_00331AF4; node != 0; node = next) {
        e = (char *)node[2];
        next = (int *)node[0];
        if (*(int *)(e + 0xf0) != 0) {
            if (func_0013ACA0(*(int *)(e + 0xf0)) != 0) {
                func_001289C0(e, 0);
                continue;
            }
            func_0013ADF0(*(int *)(e + 0xf0));
            *(int *)(e + 0xf0) = 0;
        }
        func_0011C3E0(e + 0xe0);
        func_0011C3B0(&D_00331AE0, e + 0xe0, e);
    }
}

void func_00128D90(int param_1)
{
  extern int _D_00331AEC;
  int func_0013ADD0(...);
  _D_00331AEC = param_1;
  func_0013ADD0(param_1);
}

void func_00128DB0(int a0) {
    extern int D_00331B08;
    D_00331B08 = a0;
}
// Prototypes
char* _func_00131A10(char *s);
char* _func_00126120(char *s);
void __cdecl _func_00126300(char *s);
void __cdecl _func_00117100();
int _func_0012E2E0(char *param);
char* _func_00139F00(int param);
void __cdecl _func_00116FB0(void *arg);

// Global data definitions
extern undefined4 D_001DF6FC;
extern undefined4 D_001DF700;
extern char* D_00331AF0;
