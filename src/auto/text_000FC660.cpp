
/* 47 functions from 0x000FC660 to 0x000FD5F2, found by Ghidra. */
#include "common.h"

void func_000F33B0(int);
void func_000F3250(int);
void func_0009A0D0(int);
static __declspec(noinline) void func_000FC890(int n)
{
  func_000F33B0(n);
  func_000F3250(n);
  func_0009A0D0(2);
}

// _func_000FC880 - simple function returning 1 after calling another
unsigned char func_000FC730(void)
{
  return 1;
}

char _func_000FC880(void) {
    int func_000493C0(...);
    func_000493C0();
    return 1;
}

unsigned char _func_000FC8B0(int unused, int *msg)
{
  extern char D_001D42F0, D_001D7348, D_001DD194, D_001D3B84, D_001DD18C, D_001D3B8C, D_001DD180, D_001D6B04;
  int func_0011B4F0(...);
  void func_0009F840(int);
  if (func_0011B4F0(**(int **)(msg + 1), &D_001D42F0) == 0) { func_0009F840(0x10); return 1; }
  if (func_0011B4F0(**(int **)(msg + 1), &D_001D7348) == 0) { func_0009F840(0x20); return 1; }
  if (func_0011B4F0(**(int **)(msg + 1), &D_001DD194) == 0) { func_0009F840(0x40); func_000F33B0(0xb); func_000F3250(0xb); func_0009A0D0(2); return 1; }
  if (func_0011B4F0(**(int **)(msg + 1), &D_001D3B84) == 0) { func_0009F840(0x80); func_000F33B0(0xa); func_000F3250(0xa); func_0009A0D0(2); return 1; }
  if (func_0011B4F0(**(int **)(msg + 1), &D_001DD18C) == 0) { func_0009F840(0x100); func_000FC890(0x13); return 1; }
  if (func_0011B4F0(**(int **)(msg + 1), &D_001D3B8C) == 0) { func_0009F840(0x200); func_000FC890(0xc); return 1; }
  if (func_0011B4F0(**(int **)(msg + 1), &D_001DD180) == 0) { func_0009F840(0x400); return 1; }
  if (func_0011B4F0(**(int **)(msg + 1), &D_001D6B04) == 0) { func_0009F840(0x800); }
  return 1;
}

unsigned char _func_000FCA30(int unused, int *msg)
{
    extern char _D_001D42F0, _D_001D7348, _D_001DD194, _D_001D3B84, _D_001DD18C, _D_001D3B8C, _D_001DD1A8, _D_001D3B34, _D_001D2B20, _D_001DD1A0, _D_001D6B04;
    int _func_0011B4F0(...);
    int _func_0009F820(...);
    **(int **)(msg + 3) = 0;
    if (_func_0011B4F0(**(int **)(msg + 1), &_D_001D42F0) == 0) {
        if (_func_0009F820() & 0x10) **(int **)(msg + 3) = 0x3f800000;
    } else if (_func_0011B4F0(**(int **)(msg + 1), &_D_001D7348) == 0) {
        if (_func_0009F820() & 0x20) **(int **)(msg + 3) = 0x3f800000;
    } else if (_func_0011B4F0(**(int **)(msg + 1), &_D_001DD194) == 0) {
        if (_func_0009F820() & 0x40) **(int **)(msg + 3) = 0x3f800000;
    } else if (_func_0011B4F0(**(int **)(msg + 1), &_D_001D3B84) == 0) {
        if (_func_0009F820() & 0x80) **(int **)(msg + 3) = 0x3f800000;
    } else if (_func_0011B4F0(**(int **)(msg + 1), &_D_001DD18C) == 0) {
        if (_func_0009F820() & 0x100) **(int **)(msg + 3) = 0x3f800000;
    } else if (_func_0011B4F0(**(int **)(msg + 1), &_D_001D3B8C) == 0) {
        if (_func_0009F820() & 0x200) **(int **)(msg + 3) = 0x3f800000;
    } else if (_func_0011B4F0(**(int **)(msg + 1), &_D_001DD1A8) == 0) {
        if (_func_0009F820() & 8) **(int **)(msg + 3) = 0x3f800000;
    } else if (_func_0011B4F0(**(int **)(msg + 1), &_D_001D3B34) == 0) {
        if (_func_0009F820() & 2) **(int **)(msg + 3) = 0x3f800000;
    } else if (_func_0011B4F0(**(int **)(msg + 1), &_D_001D2B20) == 0) {
        if (_func_0009F820() & 1) **(int **)(msg + 3) = 0x3f800000;
    } else if (_func_0011B4F0(**(int **)(msg + 1), &_D_001DD1A0) == 0) {
        if (_func_0009F820() & 4) **(int **)(msg + 3) = 0x3f800000;
    } else if (_func_0011B4F0(**(int **)(msg + 1), &_D_001D6B04) == 0) {
        if (_func_0009F820() & 0x800) **(int **)(msg + 3) = 0x3f800000;
    }
    return 1;
}

char func_000FCED0(void *param_1, int *param_2)
{
  int func_000F91D0(int);
  int func_000F8870(int);
  func_000F8870(func_000F91D0(*(int *)*(int **)((char *)param_2 + 4)));
  return 1;
}

char func_000FCEF0(void *param_1, int *param_2)
{
  int func_000F91D0(int);
  int func_000F86E0(int);
  func_000F86E0(func_000F91D0(*(int *)*(int **)((char *)param_2 + 4)));
  return 1;
}

unsigned char func_000FCF30(void)
{
  int func_000F8B60(...);
  func_000F8B60(1, 0);
  return 1;
}

// _func_000FD040 - complex pointer dereference with conditions
s32 _func_000FD040(s32 param_1, s32 *param_2) {
    extern u16 D_003281F0;
    extern u16 D_003281E4;
    s32 func_0011DEF0(...);
    
    if (*(u8 *)(*(s32 *)(*param_2 + 0x2c) + 0x22) == D_003281F0) {
        u16 *puVar1 = *(u16 **)(*(s32 *)(*param_2 + 0x2c) + 0x158);
        if (*puVar1 == D_003281E4) {
            func_0011DEF0(puVar1);
            return 1;
        } else {
            puVar1[0x26] = 0;
        }
    }
    return 1;
}

// _func_000FD080 - similar to FD040 but different conditions and helper call
s32 _func_000FD080(s32 param_1, s32 *param_2) {
    extern u16 D_003281F0;
    extern u16 D_003281E4;
    s32 func_0011DED0(...);
    
    if (*(u8 *)(*(s32 *)(*param_2 + 0x2c) + 0x22) == D_003281F0) {
        u16 *puVar1 = *(u16 **)(*(s32 *)(*param_2 + 0x2c) + 0x158);
        if (*puVar1 == D_003281E4) {
            func_0011DED0(puVar1);
            return 1;
        } else {
            puVar1[0x26] = 1;
        }
    }
    return 1;
}

// _func_000FD140 - calls func_0002D030(D_00307DF8) then func_0007CED0(), returns 1
s32 _func_000FD140(void) {
    extern u16 D_00307DF8;
    s32 func_0002D030(...);
    s32 func_0007CED0(...);
    func_0002D030(D_00307DF8);
    func_0007CED0();
    return 1;
}

// _func_000FD160 - calls func_0007CF70(), returns 1
unsigned char func_000FD160(void)
{
  int func_0007CF70(...);
  func_0007CF70();
  return 1;
}

// _func_000FD170 - conditional pointer traversal based on D_003080AC
s32 _func_000FD170(int param_1, undefined4 *param_2) {
    s32 func_000ECF20(...);
    extern u16 D_003080AC;
    if (D_003080AC != 1) {
        char cVar1;
        do {
            cVar1 = *param_2;
            param_2++;
        } while (cVar1 != '\0');
    } else {
        char cVar1;
        do {
            cVar1 = *param_2;
            param_2++;
        } while (cVar1 != '\0');
    }
    return 1;
}

// _func_000FD1B0 - complex function with pointer arithmetic and multiple calls
s32 _func_000FD1B0(unsigned int param_1, undefined4 *param_2) {
    s32 func_001060A0(...);
    s32 func_00012D60(...);
    int iVar1 = *(int *)param_2;
    int *out = (int *)(*(undefined4 *)(param_2 + 0x130));
    out[0] = func_001060A0(*(undefined4 *)(param_2 + 0x40));
    out[1] = *(undefined4 *)param_2[5];
    func_00012D60(*param_2, 0x27);
    return 1;
}

unsigned char func_000FD500(void)
{
  int func_0005F310(...);
  func_0005F310(0);
  return 1;
}

    


extern undefined4 D_001D27B8;
extern undefined4 D_001D290C;

