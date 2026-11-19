/* 12 functions from 0x0004CB90 to 0x0004DB80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

#pragma optimize("y", on)
void func_0004CB90(int param_1)
{
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000A1C00(*(undefined4 *)(iVar1 + 0x30));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x38));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x34));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x3c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x40));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x44));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x48));
  func_00116FB0(iVar1);
  return;
}

void func_0004CBF0(int param_1)
{
  *(int *)(param_1 + 0x110) = 2;
}

void _func_0004CDF0(int p) { extern float D_001D2808,D_001D29F4; extern float _func_00131760(void); float x=_func_00131760()*D_001D2808; *(int*)(p+0x114)=2; *(float*)(p+0x110)=x+D_001D29F4; }

void _func_0004CF70(int p) { extern float _func_00131760(void); float v=_func_00131760(); *(float*)(p+0x110)=v; int q=*(int*)(p+0x2c); *(unsigned char*)(q+0x20)&=0xfb; }

void _func_0004CF90(int p) { extern float D_001D333C,D_001D27B0,D_001D27AC,D_001D27EC; extern void _func_001100A0(int,void*); extern void _func_0012F120(void*); extern float _func_00131230(float); extern void _func_001105E0(int,void*,int); float x=*(float*)(p+0x110)+D_001D333C; *(float*)(p+0x110)=x; if(x>D_001D27B0) *(float*)(p+0x110)=x-D_001D27B0; int local[16]; _func_001100A0(*(int*)(p+0x2c),local); _func_0012F120(&local[1]); local[1]=0x3f800000; float a=_func_00131230(*(float*)(p+0x110)*D_001D27AC); local[5]=0x3f800000; *(float*)&local[4]=a*D_001D27EC+D_001D27B0; local[8]=*(int*)(local[0]+0x30); local[9]=*(int*)(local[0]+0x34); local[10]=*(int*)(local[0]+0x38); _func_001105E0(*(int*)(p+0x2c),&local[1],0); }

extern int _func_00045CC0(int, int);
extern int _func_00045D00(int, int);
extern int _func_00045C20(int, int, int);
extern int D_00307DF8;
extern void _func_001100A0(int, void *);
extern void _func_0012F7A0(void *, int);
extern int _func_00046900(int, int, void *, int);
extern int _func_00045F80(int, void *);
unsigned char _func_0004D210(int unused, int obj) {
    int *at40 = (int *)(obj + 0x40);
    _func_00045CC0(*(int *)(obj + 0x3c), (int)at40);
    _func_00045D00(*(int *)(obj + 0x3c), (int)at40);
    _func_00045C20(*(int *)(obj + 0x3c), 1, 0);
    int matrix;
    _func_001100A0(*(int *)(D_00307DF8 + 0x2c), &matrix);
    int vec1[4];
    vec1[0] = *(int *)(D_00307DF8 + 0xe8);
    vec1[1] = *(int *)(D_00307DF8 + 0xec);
    vec1[2] = *(int *)(D_00307DF8 + 0xf0);
    _func_0012F7A0(vec1, matrix);
    if (_func_00046900(*(int *)(obj + 0x3c), (int)at40, vec1, 0x43fa0000) == 0) {
        int matrix2;
        _func_001100A0(*(int *)(D_00307DF8 + 0x2c), &matrix2);
        int vec2[4];
        vec2[0] = *(int *)(D_00307DF8 + 0xe8);
        vec2[1] = *(int *)(D_00307DF8 + 0xec);
        vec2[2] = *(int *)(D_00307DF8 + 0xf0);
        _func_0012F7A0(vec2, matrix2);
        if (*(int *)(*(int *)(obj + 0x3c) + 0x5c8) <= 2) {
            *(int *)obj = 5;
            return 1;
        }
    }
    unsigned char r = _func_00045F80(*(int *)(obj + 0x3c), vec1) == 0;
    return r;
}

void __cdecl _func_0004D320(void *obj) { volatile int local[29]; volatile int a=1,b=0,c=0; local[0]=a; local[1]=b; local[2]=c; }

