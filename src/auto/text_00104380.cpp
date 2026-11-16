/* 19 functions from 0x00104380 to 0x00105375, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001045F0(void) {
    int func_00104200(...);
    func_00104200();
}

extern int _D_00324F70; unsigned char _func_00104600(void) { return (unsigned char)(_D_00324F70 != 0); }

void func_00104B30(void)
{
  extern undefined4 D_00324F70;
  int func_00104190(...);
  int func_000688D0(...);
  extern undefined4 D_00324F74;
  int func_00116160(...);
  extern undefined4 D_00324F10;
  extern undefined4 D_00324F14;
  extern undefined4 D_00324F18;
  if (D_00324F70 != 0) {
    func_00104190();
  }
  func_000688D0(D_00324F74);
  func_00116160(D_00324F10);
  func_00116160(D_00324F14);
  func_00116160(D_00324F18);
  return;
}

void _func_001051F0(void) {
 extern int D_00313B54, D_00324F80, D_00324F78;
 extern unsigned char D_001E6231,D_001E6232,D_001E6233,D_001E6234;
 int x=D_00313B54;
 D_00324F80=0; D_00324F78=0;
 if(x==3 || x==4) { D_001E6231=0; D_001E6232=1; D_001E6233=2; D_001E6234=3; return; }
 if(x==5) { D_001E6231=255; D_001E6232=255; D_001E6233=255; D_001E6234=255; return; }
 D_001E6231=10; D_001E6232=11; D_001E6233=12; D_001E6234=13;
}

void func_00105270(void) {
    extern int D_00324F80;
    D_00324F80 = 0;
}

void func_00105280(void)
{
  extern undefined D_001E5ECB;
  int func_00127460(...);
  extern undefined4 D_00324BE8;
  if (D_001E5ECB != '\0') {
    func_00127460(D_00324BE8);
  }
  return;
}

void func_001052A0(void)
{
  extern undefined D_001E5ECB;
  int func_00127930(...);
  extern undefined4 D_00324BE8;
  if (D_001E5ECB != '\0') {
    func_00127930(D_00324BE8);
  }
  return;
}

void _func_001052C0(void) {
 extern unsigned char D_001E5ECB;
 extern int D_00324BE8;
 int func_00127310(...);
 if(D_001E5ECB) { func_00127310(D_00324BE8); D_00324BE8=0; }
}

void _func_00105340(int a, int b) {
 extern int D_00324BE8;
 int func_001278C0(...);
 func_001278C0(D_00324BE8,a,b);
}

extern int D_00324F70;
extern int D_00324F1C;
extern int D_00324F2C;
extern int D_00324F20;
extern int D_00324EB8;
extern int D_00324F0C;
extern int D_00324EBC;
extern int D_00324F00;
extern int D_00324F04;
extern int D_00324F08;
extern int D_00324F10;
extern int D_00324F14;
extern int D_00324F18;
extern int D_00324F74;
void func_00110760(...);
void func_00128BE0(...);
void func_001393E0(...);
void func_00115F60(...);
int func_00124F00(...);
int func_00136F80(...);
void func_00104980(char);
void func_00105360(int param_1){ int value=*(int*)(param_1+0x2c); if(value) func_00110760(value); }

