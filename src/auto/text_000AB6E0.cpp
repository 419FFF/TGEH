/* 10 functions from 0x000AB6E0 to 0x000AC229, found by Ghidra. */
#include "common.h"

void func_000ABAC0(void) {
    extern int D_003137C8;
    int func_00100730(...);
    func_00100730(D_003137C8);
}

void __cdecl _func_000ABAD0(void)
{
  extern int _D_00313B60, _D_003137F4;
  extern float _D_001D286C;
  extern void __cdecl _func_001100A0(int, void *);
  extern float __cdecl _func_00131610(float, float);
  extern void __cdecl _func_0012F120(void *);
  extern void __cdecl _func_0012FE20(void *, int, float, int);
  extern void __cdecl _func_0012E650(void *, int);
  extern void __cdecl _func_0012F2E0(void *, void *);
  extern void __cdecl _func_0012E590(void *, int);
  extern void __cdecl _func_001105E0(int, void *, int);
  int *context;
  unsigned char frame[0x80];
  _func_001100A0(_D_00313B60, &context);
  float value = _func_00131610(*(float *)((char *)context + 0x20), *(float *)((char *)context + 0x28)) + _D_001D286C;
  _func_0012F120(frame + 0x60);
  _func_0012FE20(frame + 0x6c, 0, value, 0);
  _func_0012F120(frame + 0x34);
  _func_0012E650(frame + 0x6c, _D_003137F4);
  _func_0012F2E0(frame + 0x80, frame + 0x44);
  _func_0012E590(frame + 0x7c, _D_003137F4);
  _func_001105E0(_D_003137F4, frame + 0x14, 0);
}

void __cdecl _func_000ABB80(void)
{
  extern int _D_00313B60, _D_00313460[];
  extern float _D_001D286C;
  extern void __cdecl _func_001100A0(int, void *);
  extern float __cdecl _func_00131610(float, float);
  extern void __cdecl _func_0012F120(void *);
  extern void __cdecl _func_0012FE20(void *, int, float, int);
  extern void __cdecl _func_0012E650(void *, int);
  extern void __cdecl _func_0012F2E0(void *, void *);
  extern void __cdecl _func_0012E590(void *, int);
  extern void __cdecl _func_001105E0(int, void *, int);
  int *context;
  unsigned char frame[0x80];
  _func_001100A0(_D_00313B60, &context);
  float value = _func_00131610(*(float *)((char *)context + 0x20), *(float *)((char *)context + 0x28)) + _D_001D286C;
  _func_0012F120(frame + 0x60);
  _func_0012FE20(frame + 0x6c, 0, value, 0);
  for (int i = 0; i < 0x38; i += 4) {
    _func_0012F120(frame + 0x10);
    _func_0012E650(frame + 0x48, _D_00313460[i / 4]);
    _func_0012F2E0(frame + 0x5c, frame + 0x20);
    _func_0012E590(frame + 0x58, _D_00313460[i / 4]);
    _func_001105E0(_D_00313460[i / 4], frame + 0x30, 0);
  }
}

int __cdecl _func_000ABE30(int param_1)
{
  extern unsigned char _D_003137D0;
  extern float _D_00307DB4, _D_001D27B0, _D_00313498;
  extern int _D_003137C4, _D_003135C0, _D_003135A0;
  extern void __cdecl _func_00110060(int, void *);
  extern int __cdecl _func_0012F730(void *, int, void *);
  float values[4];
  unsigned int i;
  int *obj;
  char *buffer;
  int result;
  if (_D_003137D0 != 0xff) return 0;
  _D_00313498 = _D_00307DB4 + _D_001D27B0;
  _D_003137D0 = (unsigned char)param_1;
  for (i = 0; i < 8; i++) {
    obj = *(int **)((char *)&_D_003135A0 + i * 4);
    buffer = (char *)&_D_003135C0 + i * 0x40;
    _func_00110060(*obj, buffer);
    result = _func_0012F730(values, *obj, buffer);
    if (values[_D_003137D0] > *(float *)((char *)*obj + 0xc0 + _D_003137D0 * 4)) {
      if (param_1 == 2) *((unsigned char *)&_D_003137C4 + i) = (unsigned char)i;
    } else if (param_1 != 0 && param_1 != 1) {
      *((unsigned char *)&_D_003137C4 + i) = (unsigned char)i;
    }
  }
  return 1;
}

void __cdecl _func_000AC0A0(void)
{
  extern int _D_003137C8;
  extern void __cdecl _func_001006C0(int);
  extern void __cdecl _func_000ABAD0(void);
  extern void __cdecl _func_000ABC40(void);
  extern void __cdecl _func_000ABB80(void);
  extern void __cdecl _func_000ABEF0(void);
  _func_001006C0(_D_003137C8);
  _func_000ABAD0();
  _func_000ABC40();
  _func_000ABB80();
  _func_000ABEF0();
}

void __cdecl _func_000AC0D0(unsigned char a, unsigned char b, unsigned char c, unsigned char d, unsigned char e) { extern int _D_003135A0, _D_003135C0, _D_003137C0; extern unsigned char _D_003137D0, _D_003137F8; extern int _D_003137C4, _D_003137C5, _D_003137C6, _D_003137C7; extern void __cdecl _func_00110060(int,void*); extern void __cdecl _func_000ABC40(void); int **src=(int **)&_D_003135A0; char *dst=(char *)&_D_003135C0; do { _func_00110060(**src,dst); dst+=0x40; ++src; } while ((int)dst<(int)&_D_003137C0); _D_003137D0=a; *(unsigned char *)&_D_003137C4=b; *(unsigned char *)&_D_003137C5=c; *(unsigned char *)&_D_003137C6=d; *(unsigned char *)&_D_003137C7=e; _D_003137F8=1; _func_000ABC40(); _D_003137F8=0; }

