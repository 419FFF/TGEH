/* 10 functions from 0x0013BB90 to 0x0013CB5D, found by Ghidra. */
#include "common.h"
extern "C" void (__stdcall * __imp__RtlEnterCriticalSection)(void*);
extern "C" void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);
#include "ghidra.h"

void _func_0013BF80(void) { extern unsigned char _D_00334F50; extern int _D_003326AC,_D_003324C8,_D_003324AC,_D_00159EE8,_D_00159F44; extern void (__stdcall * __imp__RtlEnterCriticalSection)(void*); extern void (__stdcall * __imp__RtlLeaveCriticalSection)(void*); extern void __stdcall _func_00149F20(int,int); unsigned int offset; int index; if(!_D_00334F50)return; __imp__RtlEnterCriticalSection(&_D_003326AC); for(offset=0,index=0;offset<0x200;offset+=0x80,index++){int *p=(int*)((char*)&_D_003324C8+offset);if(*p!=index){_func_00149F20(0,0);*p=index;} if(*(int*)((char*)&_D_003324AC+offset)){_D_00159EE8|=0x400;*(int*)((char*)&_D_00159F44+offset)=0;*(int*)((char*)&_D_003324AC+offset)=0;}} __imp__RtlLeaveCriticalSection(&_D_003326AC);_D_00334F50=0;}

void func_0013C000(undefined4 param_1)
{
  int func_00116A90(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00116A90(8,1,0);
  *puVar1 = param_1;
  puVar1[1] = 0;
  return;
}

void func_0013C020(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 4) != 0) {
    func_00116FB0(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  func_00116FB0(param_1);
  return;
}

#pragma optimize("y", off)
void _func_0013C050(void)
{
    extern int _D_003326AC, _D_001E82E0;
    extern void (__stdcall * __imp__RtlEnterCriticalSection)(void*);
    extern void __stdcall _func_0012F120(void*);
    extern void __stdcall _func_0014ADB0(int,int);
    extern void __stdcall _func_00138440(int);
    extern void __stdcall _func_00138490(int);
    extern void __stdcall _func_0014D160(int);
    int x[16];
    __imp__RtlEnterCriticalSection(&_D_003326AC);
    _func_0012F120(x);
    _func_0014ADB0(6,(int)x);
    _func_0014ADB0(0,(int)x);
    _func_00138440(0); _func_00138490(0);
    if (_D_001E82E0 != 0x142) { _D_001E82E0=0x142; _func_0014D160(0x142); }
}
#pragma optimize("", on)
void _func_0013C0C0(void)
{
    extern int _D_003326D0;
    extern int _D_003323A0;
    extern int _D_003326AC;
    extern void __stdcall _func_0014ADB0(int,int);
    extern void (__stdcall * __imp__RtlLeaveCriticalSection)(void*);
    _func_0014ADB0(6, (int)&_D_003326D0);
    _func_0014ADB0(0, (int)&_D_003323A0);
    __imp__RtlLeaveCriticalSection(&_D_003326AC);
}

void func_0013C0F0(void* self,int a,int b) {(void)self;(void)a;(void)b;}

void func_0013C980(int a0, int a1, int a2) {
    int func_0013C0F0(...);
    func_0013C0F0(a0, a1, a2, 48);
}

int _func_0013C9A0(void){return 0;}

