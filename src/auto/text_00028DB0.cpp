/* 12 functions from 0x00028DB0 to 0x00029D48, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00028DB0(int param_1, int param_2)
{
  extern int D_0032924C;
  int func_0011BDD0(...); int func_0011F980(...); int func_0011FCC0(...);
  int func_00136F80(...); int func_00133F30(...); int func_00133860(...);
  int iVar3, iVar6, uVar4;
  int *piVar8;
  unsigned int local_30, uVar7;
  int off;
  char local_24[36];

  iVar3 = func_0011BDD0(*(int *)(param_1 + 0xe0), 0);
  if (iVar3 != 0) {
    D_0032924C = D_0032924C + 1;
    uVar4 = func_0011F980(param_1, param_2, *(int *)(param_1 + 0x124), local_24);
    func_0011FCC0(local_24, uVar4);
    uVar4 = func_00136F80(param_1, *(int *)(param_1 + 0xd8), param_2);
    local_30 = 0;
    if (local_30 < *(unsigned short *)(iVar3 + 4)) {
      off = 0;
      do {
        iVar6 = *(int *)(iVar3 + 8) + off;
        if (*(int *)(param_1 + 0x128) != 0) {
          piVar8 = *(int **)(param_1 + 300);
        } else {
          piVar8 = *(int **)(iVar6 + 0x28);
        }
        uVar7 = 0;
        do {
          if (piVar8[uVar7] != 0) {
            piVar8[uVar7 + 6] = func_0011BDD0(piVar8[uVar7], 1);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 2);
        func_00133F30(piVar8 + 4);
        if (*piVar8 != 0) {
          *(short *)(*piVar8 + 0x2a) -= 1;
        }
        if (piVar8[1] != 0) {
          *(short *)(piVar8[1] + 0x2a) -= 1;
        }
        func_00133860(*(int *)(iVar6 + 0x2c), uVar4);
        local_30 = local_30 + 1;
        off = off + 0x30;
      } while (local_30 < *(unsigned short *)(iVar3 + 4));
    }
    *(short *)(*(int *)(param_1 + 0xe0) + 0x2a) -= 1;
  }
}

void func_00028EF0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  extern undefined4 D_003268B0;
  int func_00028DB0(...);
  extern undefined D_00325314;
  undefined4 *puVar1;
  
  if (*(byte *)(param_1 + 0x22) == D_003268B0) {
    if ((char)param_3 != '\0') {
      func_00028DB0(param_1,param_2,param_4);
    }
  }
  else if (*(code **)(((undefined *)&D_00325314) + (uint)*(byte *)(param_1 + 0x22) * 0x1c) != (code *)0x0) {
    (**(code **)(((undefined *)&D_00325314) + (uint)*(byte *)(param_1 + 0x22) * 0x1c))(param_1,param_2,0);
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x28); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[3]) {
    func_00028EF0(*puVar1,param_2,param_3,param_4);
  }
  return;
}

undefined4 func_000291F0(int param_1)
{
  return *(undefined4 *)(param_1 + 0x110);
}

float __cdecl _func_000293B0(int p, int q)
{
  float func_0004EF90(int); float func_00012070(float, float);
  int func_0012F120(...); int func_00115170(...); int func_0012F2E0(...);
  int func_00068DA0(...); int func_001105E0(...);
  extern float D_001D27B8, D_001D386C;
  float f = func_0004EF90(p);
  float d = func_00012070(f, *(float*)(q + 0x7c));
  float r;
  __declspec(align(16)) int w[16]; int b[3]; int t[19];
  int *m = &w[1];
  if (d > D_001D27B8) {
    d = d - D_001D386C;
    if (d > D_001D27B8) { *(float*)(q + 0x7c) = *(float*)(q + 0x7c) - D_001D386C; r = d; }
    else { *(float*)(q + 0x7c) = f; r = 0.0f; }
  } else {
    d = d + D_001D386C;
    if (d < D_001D27B8) { *(float*)(q + 0x7c) = *(float*)(q + 0x7c) + D_001D386C; r = d; }
    else { *(float*)(q + 0x7c) = f; r = 0.0f; }
  }
  func_0012F120(m);
  w[13] = *(int*)(q + 0x50); w[14] = *(int*)(q + 0x54); w[15] = *(int*)(q + 0x58);
  w[0] = *(int*)(q + 0x7c);
  b[0] = 0; b[1] = 0x3f800000; b[2] = 0;
  func_00115170(*(int*)(p + 0x98), *(int*)(q + 0x80), t);
  func_0012F2E0(t, m);
  func_00068DA0(m, b, 0);
  func_001105E0(*(int*)(p + 0x2c), m, 0);
  return r;
}

void func_000294F0(int param_1) {
int func_0007E470(...); int func_000A1D10(...); int func_0009C7A0(...); int func_00115100(...); int func_00091110(...); int func_00047960(...); int func_000912B0(...); int func_000A1F50(...);
extern volatile unsigned char D_002EAF80; extern char D_001D387C,D_001D3870;
int *p=(int *)(param_1+0x110);
if (*(int *)(param_1+0x60)==0) func_0007E470(param_1);
switch(*p) {case 4: { int ret=func_00047960(param_1,(char*)p+0x60,0,0,0x30,0); if(ret&2){func_000A1D10(p[7],1,0x1d,0x27,0x41c00000,0x3dcccccd); *p=4; func_000912B0(param_1); if(func_000A1F50(p[7])) break;} break;} case 0: func_000A1D10(p[7],1,9,0x1c,0x41400000,0); if(p[0x20]==-1) {int x=func_0009C7A0(param_1,&D_001D387C,1);p[0x20]=func_00115100(*(int*)x,*(int *)(param_1+0x98));} if(p[0x21]==-1)p[0x21]=func_00115100(&D_001D3870,*(int *)(param_1+0x98)); *p=1; int val=0; if (!*((unsigned char*)p+0x88)) val=0x42a00000; func_00091110(param_1,p[0x21],val);break;} if(D_002EAF80){} }

void func_00029B40(int param_1)
{
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000A1C00(*(undefined4 *)(iVar1 + 0x1c));
  func_00116FB0(iVar1);
  return;
}

void __cdecl _func_00029B60(int *object)
{
  extern void __cdecl _func_00107BF0(int, int);
  int state = *(int *)((char *)object + 4);
  if (*(unsigned char *)(state + 0x13) == 5) {
    int *data = *(int **)(state + 0x110);
    if (*(unsigned char *)((char *)data + 0x84) != 0 &&
        *(float *)((char *)object + 0x20) == (float)data[2]) {
      _func_00107BF0((int)object, 0);
    }
  }
}

void func_00029BA0(int param_1)
{
  int func_0009C7A0(...);
  extern undefined D_001D38A8;
  extern undefined D_001D3898;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0009C7A0(param_1,((undefined *)&D_001D38A8),0);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x11c) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  uVar2 = func_0009C7A0(param_1,((undefined *)&D_001D3898),0);
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  return;
}

void __cdecl _func_00029BF0(int *object)
{
  extern float _D_001E461C;
  extern int _D_003080FC;
  extern unsigned char _D_00307CF8;
  extern void __cdecl _func_00110330(int, int);
  extern void __cdecl _func_000120B0(void *, unsigned int, int, int);
  int state = *(int *)((char *)object + 0x110);
  switch (state) {
  case 0:
    if (_D_003080FC == (int)object &&
        ((*(unsigned char *)((char *)object + 0x11c) & 1) == 0 || _D_00307CF8)) {
      *(int *)((char *)object + 0x110) = 1;
      *(int *)((char *)object + 0x118) = 0;
    }
    break;
  case 1: {
    float time = _D_001E461C + *(float *)((char *)object + 0x118);
    *(float *)((char *)object + 0x118) = time;
    if (time > **(float **)((char *)object + 0x114)) {
      _func_000120B0((char *)object + 0x150, 0x3f000000, 1, 1);
      *(int *)((char *)object + 0x110) = 2;
    }
    break;
  }
  case 2:
    if (*(unsigned char *)((char *)object + 0x175) == 0) {
      _func_00110330(*(int *)((char *)object + 0x2c), 0);
      *(int *)((char *)object + 0x110) = 3;
    }
    break;
  }
}

void __cdecl _func_00029CB0(int *object)
{
  extern void __cdecl _func_00110420(int, int);
  extern void __cdecl _func_00110330(int, int);
  extern void __cdecl _func_00088A50(int, unsigned int, int);
  int *state = *(int **)((char *)object + 0x110);
  int index = *(int *)((char *)state + 0xd0);
  if (index != 0xff) {
    int *base = (int *)((char *)state + 0xc8);
    char *entry = (char *)base + (index << 6);
    int *target = *(int **)(entry + 0x30);
    int *ref = *(int **)((char *)target + 0x2c);
    if (ref) _func_00110420((int)target, *ref);
    target = *(int **)(entry + 0x30);
    _func_00110330((int)target, 0);
    target = *(int **)(entry + 0x30);
    _func_00088A50((int)target, 0x3f800000, 1);
    *(int *)(entry + 0x6c) = 0;
    int next = *(int *)((char *)state + 0xd4);
    *(int *)((char *)state + 0xd0) = 0xff;
    if (next) {
      *(int *)((char *)object + 0x2c) = next;
      *(int *)((char *)state + 0xd4) = 0;
    }
    *(int *)((char *)state + 0x14) = 3;
    int *other = *(int **)((char *)object + 0x60);
    if (other) *((unsigned char *)other + 0x38) &= 0xfe;
  }
}

