/* 9 functions from 0x00036370 to 0x00037216, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern int D_00307DF8, D_003080B0, D_00307D00;
extern char D_001D29C7;
struct S10 { char c[10]; };
struct S6 { char c[6]; };
struct S8 { char c[8]; };
extern S10 D_001D42F8;
extern S6 D_001D42F0;
extern S8 D_001D2E34;
int _func_00131990(...);
int _func_00131310(...);
int _func_0013E469(...);
int _func_000A1BB0(...);
int _func_0009C7A0(...);
void __cdecl _func_00036820(int a, int b)
{
  char name[0x40];
  char buf[0x80];
  int *p = (int *)b;
  int n;
  if (D_00307DF8 == D_003080B0) { strcpy(name, "testyakko"); p[0xc5] = 0; }
  else if (D_00307DF8 == D_00307D00) { strcpy(name, "wakko"); p[0xc5] = 0; }
  else { strcpy(name, "dot"); p[0xc5] = 0; }
  strcpy(buf, "models/");
  strcat(buf, name);
  strcat(buf, "/");
  _func_00131990(buf);
  n = (_func_00131310() & 3) + 1;
  _func_0013E469(buf, "idle%d", n);
  p[0xc4] = _func_000A1BB0(a, buf);
  _func_0013E469(buf, "AnimationFramesIdle%d", n);
  p[0xc6] = _func_0009C7A0(a, buf, 0);
  _func_00131990(&D_001D29C7);
}

void func_00036970(int param_1, int param_2)
{
  int func_000A1C00(...);
  int func_0009C7A0(...);
  extern undefined D_001D2968;
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  func_000A1C00(*(undefined4 *)(param_2 + 0x310));
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D2968),0);
  func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0);
  return;
}

void __cdecl _func_000369B0(int a, int *p)
{
  char name[0x40];
  char buf[0x80];
  int x = D_00307DF8;
  int y = D_003080B0;
  int *q = p + 0xc4;
  if (x == y) *(S10 *)name = D_001D42F8;
  else if (x == D_00307D00) *(S6 *)name = D_001D42F0;
  else *(int *)name = 0x746f64;
  q[1] = 0;
  *(S8 *)buf = D_001D2E34;
  strcat(buf, name);
  strcat(buf, "/");
  _func_00131990(buf);
  unsigned n = _func_00131310();
  _func_0013E469(buf, "idle%d", (n & 3) + 1);
  q[0] = _func_000A1BB0(a, buf);
  _func_0013E469(buf, "AnimationFramesIdle%d", (n & 3) + 1);
  q[2] = _func_0009C7A0(a, buf, 0);
  _func_00131990(&D_001D29C7);
}

void func_00036B00(int param_1, int param_2)
{
  int func_000A1C00(...);
  int func_0009C7A0(...);
  extern undefined D_001D3CD4;
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  func_000A1C00(*(undefined4 *)(param_2 + 0x310));
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D3CD4),0);
  func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0);
  return;
}

void func_00036CA0(int param_1, int param_2)
{
  extern char D_001D4344, D_001D4330, D_001D3CC4;
  extern float D_001D432C;
  int func_0009C7A0(...);
  int func_0009CC90(...);
  int func_000A22B0(...);
  unsigned int *piVar3;
  int *v;
  int iVar4;
  int uVar2;

  *(int *)(param_2 + 0x318) = (int)(*(float *)func_0009C7A0(param_1, &D_001D4344, 0) * 1.0L);
  piVar3 = (unsigned int *)func_0009C7A0(param_1, &D_001D4330, 0);
  *(unsigned int **)(param_2 + 0x314) = piVar3;
  func_000A22B0(param_1 + 100, 1, *piVar3, *(int *)(param_2 + 0x318), piVar3[2], 0x3e4ccccd);
  *(int *)(param_2 + 0x310) = 0;
  *(int *)(param_2 + 0x334) = *(int *)(param_1 + 0xf4);
  *(int *)(param_2 + 0x338) = *(int *)(param_1 + 0xf8);
  *(int *)(param_2 + 0x33c) = *(int *)(param_1 + 0xfc);
  iVar4 = func_0009CC90(param_1, &D_001D3CC4);
  v = (int *)(iVar4 + 0x54);
  uVar2 = iVar4 = *(int *)(iVar4 + 0x54);
  *(int *)(param_2 + 0x31c) = uVar2;
  *(int *)(param_2 + 800) = v[1];
  *(int *)(param_2 + 0x324) = v[2];
  *(int *)(param_2 + 0x328) = uVar2;
  *(int *)(param_2 + 0x32c) = *(int *)(param_2 + 800);
  *(int *)(param_2 + 0x330) = *(int *)(param_2 + 0x324);
  *(float *)(param_2 + 800) = (long double)*(float *)(param_2 + 800) * D_001D432C;
  *(float *)(param_2 + 0x340) = (long double)piVar3[0];
  *(float *)(param_2 + 0x344) = (long double)piVar3[1];
  *(int *)(param_2 + 0x348) = *(int *)(param_1 + 0xec);
}

unsigned char func_00037190(int param_1) {
 int func_0013F2E9(...);
 extern char D_001D3C58,D_001D3C40,D_001D3C28;
 unsigned char c;
 int p=*(int *)(param_1+8);
 if(p) {
   c=*(unsigned char *)(p+0x13);
   if(c=='E') {
     int t=func_0013F2E9(*(int *)(*(int *)(param_1+4)+0x38),&D_001D3C58);
     if(t && (t=func_0013F2E9(*(int *)(*(int *)(param_1+4)+0x38),&D_001D3C40),t) &&
        (t=func_0013F2E9(*(int *)(*(int *)(param_1+4)+0x38),&D_001D3C28),t)) return 0;
     return 1;
   }
   if(c==0x19 || c==0x17 || *(unsigned char *)(p+0x12)==11 || c==0x4f || (c==4 && *(int *)(p+0x118)==0x15)) return 1;
 }
 return 0;
}

