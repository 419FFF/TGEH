/* 41 functions from 0x00100A60 to 0x00101A0D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00100A60(int a0) {
    extern int D_001E5ED0;
    D_001E5ED0 = a0;
}

int func_00100A70(void) {
    extern int D_001E5ED0;
    return D_001E5ED0;
}

void _func_00100B90(void) { extern unsigned char D_001E5EC8; int _func_0013ACC0(...); int _func_000688D0(...); int _func_00128830(...); if(D_001E5EC8){ _func_0013ACC0(0x3c23d70a); _func_000688D0(3,0x3e4ccccd,0x40,0x40); _func_00128830(0x19); } }

void _func_00100BC0(float v) { extern unsigned char D_001E5EC8; extern volatile float D_001D3330,D_00324D04; if(D_001E5EC8) D_00324D04=v*D_001D3330; }

void _func_00100BE0(float v) { extern unsigned char D_001E5EC8; extern volatile float D_001D3330,D_00324D10; extern unsigned int D_00324D0C; if(D_001E5EC8){ D_00324D0C=*(unsigned int*)&v; D_00324D10=v*D_001D3330; } }

void func_00100C10(unsigned int param_1) {
    extern unsigned char D_001E5EC8;
    extern unsigned int D_00324D08;
    if (D_001E5EC8 != 0) {
        D_00324D08 = param_1;
    }
}

void _func_00100C30(float value) { extern unsigned char D_001E5EC8; extern volatile float D_001D27B8,D_001D27B0,D_00324D14; if(D_001E5EC8){ if(value<=D_001D27B8){D_00324D14=D_001D27B8;return;} if(value>D_001D27B0)D_00324D14=D_001D27B0; } }

float _func_00100C80(void) {
    extern unsigned char D_001E5EC8;
    extern volatile float D_001D27B8;
    extern volatile float D_00324D14;
    if (D_001E5EC8 == 0) goto other;
    return D_001D27B8;
other:
    return D_00324D14;
}

float _func_00100CF0(void) {
    extern unsigned char D_001E5EC8;
    extern volatile float D_001D27B8;
    extern volatile float D_00324D18;
    if (D_001E5EC8 == 0) goto other;
    return D_001D27B8;
other:
    return D_00324D18;
}

float _func_00100D60(void) {
    extern unsigned char D_001E5EC8;
    extern volatile float D_001D27B8;
    extern volatile float D_00324D20;
    if (D_001E5EC8 == 0) goto other;
    return D_001D27B8;
other:
    return D_00324D20;
}

char func_00100D80(void) {
    extern char D_001E5EC8;
    return D_001E5EC8;
}

char func_00100D90(void) {
    extern char D_001E5EC9;
    return D_001E5EC9;
}

void _func_00100DA0(void) { extern int D_00324BD4,D_001DE340,D_001DE330,D_001DE31C; int _func_000688D0(...); int _func_00128C90(...); int _func_0013AE30(...); if(D_00324BD4){_func_000688D0(0xe,&D_001DE340);_func_00128C90(D_00324BD4);_func_000688D0(0xe);} _func_000688D0(0xb,&D_001DE330); _func_0013AE30(); _func_000688D0(0xb); _func_000688D0(0xc,&D_001DE31C); _func_000688D0(); _func_000688D0(0xc); }

void _func_00100E00(unsigned int v) { extern unsigned char D_001E5EC8,D_00324D45; extern int D_00324BE8; int _func_00102E40(...); int _func_00105280(...); int _func_001052A0(...); void _func_00100DA0(...); if(D_001E5EC8){ D_00324D45=(unsigned char)v; _func_00102E40(v); if(D_00324BE8){ if((unsigned char)v)_func_00105280();else _func_001052A0(); } _func_00100DA0(); } }

void func_00100E50(void)
{
  int func_00068450(...);
  int func_00104B30(...);
  int func_00100880(...);
  int func_001395C0(...);
  func_00068450();
  func_00104B30();
  func_00100880();
  func_001395C0();
  return;
}

void func_00100E70(void) {
    extern char D_00324D64;
    D_00324D64 = 1;
}

void _func_00101080(void) { extern int D_003080AC; void _func_001007D0(int); void _func_00102470(void); _func_001007D0(D_003080AC != 0); _func_00102470(); }

void func_001010A0(void) {
    int func_00104B70(...);
    func_00104B70();
}

void func_00101240(void) {
    int func_00105D10(...);
    func_00105D10();
}

void func_00101250(void) {
    extern int D_00307DB4;
    int func_00105D40(...);
    func_00105D40(D_00307DB4, 0);
}

void _func_00101360(void) { extern int D_00307CFC,D_00324D78,D_00324D74,D_00324D7C; extern char D_001DE4E4,D_001DE4D8,D_001DE4CC,D_001DE4C0,D_001DE4B4,D_001DE4A8,D_001DE49C; int _func_001031C0(int,const char*); void _func_00102E80(int); D_00324D78=0; D_00324D74=0; if(D_00307CFC){ _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4E4)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4D8)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4CC)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4C0)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4B4)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4A8)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE49C)); } D_00324D7C=0; }

void func_001015F0(undefined4 param_1)
{
  int func_00100E00(...);
  int func_001049F0(...);
  int func_000688B0(...);
  func_00100E00(param_1);
  func_001049F0(param_1);
  func_000688B0(param_1);
  return;
}

void func_00101610(void)
{
  int func_00103210(...);
  extern undefined D_001DE51C;
  int func_00102E80(...);
  extern undefined D_001DE504;
  extern undefined D_001DE4F0;
  undefined4 uVar1;
  
  uVar1 = func_00103210(((undefined *)&D_001DE51C));
  func_00102E80(uVar1);
  uVar1 = func_00103210(((undefined *)&D_001DE504));
  func_00102E80(uVar1);
  uVar1 = func_00103210(((undefined *)&D_001DE4F0));
  func_00102E80(uVar1);
  return;
}

void func_00101680(int a0) {
    extern int D_001E5ED8;
    D_001E5ED8 = a0;
}

void func_00101690(int a0) {
    extern int D_00324D6C;
    D_00324D6C = a0;
}

void func_00101970(int param_1)
{
  extern undefined4 D_00324D78;
  int func_00101360(...);
  D_00324D78 = param_1;
  if (param_1 == 0) {
    func_00101360();
    return;
  }
  return;
}

void func_00101990(int param_1, ushort param_2, char param_3)
{
  if (param_3 != '\0') {
    *(ushort *)(param_1 + 0xb6) = *(ushort *)(param_1 + 0xb6) | param_2;
    return;
  }
  *(ushort *)(param_1 + 0xb6) = *(ushort *)(param_1 + 0xb6) & ~param_2;
  return;
}

void func_001019C0(int a0) {
    extern int D_00324EAC;
    D_00324EAC = a0;
}

void func_001019D0(int param_1)
{
  int func_001100A0(...);
  extern undefined4 D_00324BD4;
  int func_0012E6D0(...);
  int func_0012E940(...);
  int local_14;
  undefined1 local_10 [16];
  
  func_001100A0(D_00324BD4,&local_14);
  func_0012E6D0(local_10,param_1 + 0xe4,local_14 + 0x30);
  func_0012E940(local_10);
  return;
}

