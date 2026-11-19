/* 11 functions from 0x00135260 to 0x0013609C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern "C" void (__stdcall *_imp__RtlEnterCriticalSection)(void*);
extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void*);
#define RtlEnterCriticalSection (*_imp__RtlEnterCriticalSection)
#define RtlLeaveCriticalSection (*_imp__RtlLeaveCriticalSection)

undefined4 func_00135260(undefined4 *param_1)
{
  return *param_1;
}

undefined4 func_00135270(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

int* func_001356B0(int a)
{
    extern int D_00331DB4;
    extern int D_003326AC;
    int* func_00126240(...);
    int __stdcall func_0010C49A(int, int, int, int);
    void __stdcall func_00164A0A(int, int*, int);
    void __stdcall func_0014E060(int*, int);
    void func_00133CF0(...);
    void func_00136440(...);
    int* p;
    int x, y, z;
    int n = D_00331DB4 + 1;
    D_00331DB4 = n;
    p = func_00126240(a, 0x80);
    if (p[3] == 11) {
        x = (int)func_00126240(a, 0x80);
        y = (int)func_00126240(a, 0x80);
        RtlEnterCriticalSection(&D_003326AC);
        if (x == 0) {
            x = func_0010C49A(0x400, -1, 0x1000, 0x404);
        }
        func_00164A0A(0, p + 18, 0);
        func_0014E060(p + 18, x);
        func_00133CF0(p[0], p[1], p[2], p[3], p, y);
        func_00136440();
        RtlLeaveCriticalSection(&D_003326AC);
        return p;
    }
    z = (int)func_00126240(a, 0x80);
    RtlEnterCriticalSection(&D_003326AC);
    func_00133CF0(p[0], p[1], p[2], p[3], p, z);
    func_00136440();
    RtlLeaveCriticalSection(&D_003326AC);
    return p;
}

void func_001357C0(int a,int b,int *v,int d,int e)
{
 int func_00133F30(...);
 unsigned int local[21]={0};
 local[0]=a; local[1]=b;
 if(v) {local[2]=v[0];local[3]=v[1];local[4]=v[2];local[5]=v[3];}
 local[10]=d; local[12]=e; local[18]=(e==0);
 func_00133F30(local);
}

void func_00135990(void)
{
 extern int D_0033271C; extern int D_00332658[10];
 int __stdcall func_00109C1F(int);
 if(D_0033271C){func_00109C1F(D_0033271C);return;}
 unsigned int i=0;
 do { int f=*(int*)((char*)D_00332658+i); if(f)((void(*)(void))f)(); i+=4; } while(i<40);
}

void func_001359C0(undefined4 param_1)
{
  extern undefined D_00332658;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(((undefined *)&D_00332658) + uVar1 * 4) == 0) {
      *(undefined4 *)(((undefined *)&D_00332658) + uVar1 * 4) = param_1;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  return;
}

void func_001359E0(undefined4 *param_1, undefined4 *param_2)
{
  extern undefined4 D_0033232C;
  extern undefined4 D_0033228C;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = D_0033232C;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = D_0033228C;
  }
  return;
}

