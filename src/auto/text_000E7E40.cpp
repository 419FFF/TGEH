/* 10 functions from 0x000E7E40 to 0x000E8AAC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct Mat16 { int a[16]; };

#pragma optimize("y", on)
void func_000E8310(char a0) {
    extern char _D_00323E48;
    _D_00323E48 = a0;
}
void func_000E8320(void)
{
  int func_000687F0(...);
  int func_000A2780(...);
  int func_0009C590(...);
  extern undefined D_001DC524;
  int func_0009D3E0(...);
  undefined4 uVar1;
  
  func_000687F0();
  func_000A2780(0x34,0,0);
  uVar1 = func_0009C590(((undefined *)&D_001DC524));
  func_0009D3E0(uVar1);
  return;
}

void func_000E8350(void)
{
 extern int D_003080AC; extern int D_00323B50; extern float D_001D27B4;
 int func_000A2780(...);
 if (D_003080AC != 2) {
   int n = 3-D_00323B50;
   func_000A2780(0x34,1,(float)n*D_001D27B4);
 }
}

undefined4 func_000E8390(void)
{
  extern undefined4 D_003234E0;
  extern undefined D_00323E41;
  if (D_003234E0 == 6) {
    if (D_00323E41 != '\0') {
      return 1;
    }
  }
  else if ((D_003234E0 == 4) && (D_00323E41 != '\0')) {
    return 2;
  }
  return 0;
}

void func_000E8780(void)
{
 int func_00103210(...); extern undefined D_001DC55C; int func_00102E80(...); extern unsigned char D_0031151C; extern undefined D_001DC548; int func_0009C590(...); int func_00044C90(...); int func_000E8630(...); int func_000A4010(...);
 int local[3]; unsigned char v;
 func_00102E80(func_00103210(&D_001DC55C)); v=D_0031151C; local[0]=0;local[1]=0;local[2]=0x42c80000;
 func_00044C90(func_0009C590(&D_001DC548),local);func_000E8630();func_000A4010(v);
}

void func_000E8A70(int param_1)
{
 int func_00110060(...); int func_000E78A0(...); int i;
 undefined1 local[76];
 func_00110060(*(undefined4 *)(param_1+0x2c),local);
 i=0; do {func_000E78A0(param_1,local,i);i++;}while(i!=30);
}
#pragma optimize("", on)
