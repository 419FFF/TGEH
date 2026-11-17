/* 8 functions from 0x00118240 to 0x001191D1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct Ent118 { int obj; int flags; char pad[0xb0]; };
extern int D_001DF278;
extern char D_001DF27C;
extern int func_00131A10(char*);
extern void func_00117100(void);
extern int func_00126120(char*);
extern int func_00126180(int);
#pragma optimize("y", off)
char* func_00118240(char *arg) {
    char local[267];
    char *d=local;
    char *s=arg;
    while ((*d++=*s++) != 0) {}
    return arg;
}
#pragma optimize("", on)
undefined4 func_00118B70(undefined4 *param_1)
{
  int func_00117100(...);
  int func_00116A90(...);
  int func_00117130(...);
  undefined4 uVar1;
  
  func_00117100();
  uVar1 = func_00116A90(0x38,1,1);
  func_00117130();
  *param_1 = uVar1;
  return uVar1;
}

extern unsigned int __cdecl _func_0013E9DB(unsigned int);
extern void __cdecl _func_00117100(void);
extern void __cdecl _func_00117130(void);
extern int __cdecl _func_00116A90(int, int, int);
void __cdecl _func_00118CB0(int *param_1, unsigned int *param_2)
{
  unsigned int n = _func_0013E9DB(*param_2);
  int off = 0;
  *(short *)((char *)param_1 + 6) = 0;
  *param_1 = n;
  _func_00117100();
  param_1[4] = _func_00116A90(n * 0xb8, 1, 1);
  for (; n > 0; n--) {
    *(int *)(off + param_1[4]) = _func_00116A90(0x4c, 1, 1);
    *(int *)(off + 4 + param_1[4]) = 0x11;
    off += 0xb8;
  }
  _func_00117130();
}

void func_00118D90(int param_1) {
 unsigned short *idx=(unsigned short *)(param_1+6);
 unsigned short n=*idx;
 int entry=*(int *)(param_1+0x10)+(unsigned int)n*0xb8;
 *idx=n+1;
 int *slot=(int *)entry;
 int *object=(int *)*slot;
 object[2]=3;
}

void func_001191B0(int param_1, unsigned char *param_2) {
 int p=*(int *)(param_1+0xb0);
 if (p) {
  int v=*param_2;
  *(float *)(p+0x50)=(float)(volatile int)v;
 }
}

