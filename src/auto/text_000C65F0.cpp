/* 5 functions from 0x000C65F0 to 0x000C6D65, found by Ghidra. */
#include "common.h"
extern int D_003159A0;
extern unsigned char D_0031519C[];
extern float D_00314F60;
extern float D_00314F64;
extern float D_00314F68;
extern float D_001D2B98;
extern float D_001D4EB0;
extern unsigned char D_0031545C[];
int func_00110330(int, int);
void func_000C40A0(void);
struct Part65F0 { char a, b, c, d; int pad; int x, y; float z; float vy, vx; int w; char rest[0x10]; };
struct Ent6810 {
  int a;
  char b[8];
  float c;
  char d[0x14];
  char e0, pad0, e1;
  char f[0x19];
  char g[0x40];
  int h;
  char tail[0xc];
};
struct Vec65F0 { int x, y; float z; };
struct Buf65F0 { char pad[0x30]; int x; int y; float z; };

#pragma optimize("y", on)
void func_000C65F0(void)
{
  extern char D_00315714, D_00315994, D_00315716, D_00315715;
  extern volatile int D_00315718, D_0031571C;
  extern int D_0031572C, D_00315720;
  extern volatile int D_00314F80, D_00314F84;
  extern volatile float D_00314F88;
  extern int D_00315710, D_00315734, D_00315738, D_00315740, D_00315744, D_00315CD0;
  extern float D_00315728, D_001D2A2C, D_001D341C;
  extern float D_00315724, D_001D27B0, D_001D28E0;
  extern const float D_001D27EC;
  double func_00131760(void);
  int func_0012F120(void *);
  int func_0012FE20(void *, int, int, int);
  int func_00110330(int, int);
  int func_00088A50(int, float, int);
  int func_00103990(int, int);
  int func_001105E0(int, void *, int);
  int func_00110000(int);
  __declspec(align(16)) struct {
    char pad[0x30];
    int x;
    int y;
    int z;
  } buf;
  int i = 0;
  char *p = &D_00315714;

  do {
    if (*p == 0) goto found;
    p += 0x40;
    ++i;
  } while ((int)p < (int)&D_00315994);
  return;
found:
  i *= 0x40;
  ((volatile char *)&D_00315716)[i] = 1;
  ((volatile char *)&D_00315714)[i] = 1;
  ((volatile char *)&D_00315715)[i] = 1;
  *(volatile int *)((char *)&D_00315718 + i) = D_00314F80;
  *(volatile int *)((char *)&D_0031571C + i) = D_00314F84;
  *(float *)((char *)&D_00315720 + i) = D_00314F88 + D_001D341C;
  *(float *)((char *)&D_00315728 + i) = func_00131760() * D_001D2A2C;
  *(float *)((char *)&D_00315724 + i) = (func_00131760() + D_001D27B0) * D_001D28E0;
  if ((float)func_00131760() > D_001D27EC) {
    *(float *)((char *)&D_00315724 + i) *= -1.0f;
  }
  *(int *)((char *)&D_0031572C + i) = 0;
  func_0012F120(&buf);
  func_0012FE20(&buf, 0, 0, 0);
  buf.x = *(int *)((char *)&D_00315718 + i);
  buf.y = *(int *)((char *)&D_0031571C + i);
  buf.z = *(int *)((char *)&D_00315720 + i);
  func_00110330(*(int *)(*(int *)((char *)&D_00315710 + i) + 0x2c), 1);
  func_00110330(*(int *)(*(int *)((char *)&D_00315734 + i) + 0x2c), 1);
  func_00088A50(*(int *)(*(int *)((char *)&D_00315734 + i) + 0x2c), 1.0f, 1);
  func_00110330(*(int *)(*(int *)((char *)&D_00315738 + i) + 0x2c), 0);
  func_00110330(*(int *)((char *)&D_00315740 + i), 1);
  func_00110330(*(int *)((char *)&D_00315744 + i), 1);
  func_00103990(D_00315CD0, 0);
  func_001105E0(*(int *)(*(int *)((char *)&D_00315710 + i) + 0x2c), &buf, 0);
  func_00110000(*(int *)(*(int *)((char *)&D_00315710 + i) + 0x2c));
  func_00110000(*(int *)(*(int *)((char *)&D_00315738 + i) + 0x2c));
  func_00110000(*(int *)(*(int *)((char *)&D_00315734 + i) + 0x2c));
  func_00110000(*(int *)((char *)&D_00315740 + i));
  func_00110000(*(int *)((char *)&D_00315744 + i));
}
#pragma optimize("y", on)
void func_000C67C0(float *p, float target, float step)
{
  if (*p > target) {
    *p -= step;
    if (*p < target) *p = target;
  } else if (*p < target) {
    *p += step;
    if (*p > target) *p = target;
  }
}

void func_000C6810(void)
{
  extern float D_00314F90, D_001E461C, D_001D715C, D_001D27B0, D_001D27B8, D_00315C94, D_001D515C, D_001D341C, D_00314F68;
  extern int D_0031501C[];
  extern int D_00315A30[];
  extern char D_00315C80[], D_00314F80[];
  int func_00110060(...);
  int func_001031A0(...);
  float func_0012E7B0(...);
  int func_0012E5F0(...);
  int func_001100D0(...);
  int func_00022780(...);
  int func_0010FF70(...);
  float vec[3];
  __declspec(align(16)) struct { char pad[0x30]; float a, b, c; } buf;
  char tmp[8];
  int *piVar2, *piVar3;
  float f;

  D_00314F90 = D_00314F90 + D_001E461C;
  vec[0] = 0; vec[1] = 0; vec[2] = 1.0f;
  piVar3 = D_0031501C;
  piVar2 = D_00315A30;
  do {
    if (*piVar2 != 0) {
      func_00110060(*(int *)(*piVar2 + 0x2c), piVar2 - 0x10);
    }
    if (*((char *)piVar2 - 0x5c) == 0) {
      func_001031A0(piVar3[0x32f], 0);
    } else {
      func_00110060(*piVar3, &buf);
      f = (D_001D27B0 - func_0012E7B0(tmp, D_00315C80) * D_001D715C);
      if (f < D_001D27B8) f = D_001D27B8;
      else if (f > D_001D27B0) f = D_001D27B0;
      func_001031A0(piVar3[0x32f], D_00315C94 * f * D_001D515C);
      if (*((char *)piVar2 - 0x5a) == 0) {
        func_0012E5F0(piVar2 - 0x1f, piVar2 - 0x1c, D_00314F80);
        func_001100D0(*piVar3, &buf);
        func_00022780(&buf, *piVar3 + 0xc0, vec, piVar2[-0x20]);
        func_0010FF70(*piVar3, &buf);
        func_0010FF70(piVar3[5], &buf);
      } else {
        func_001100D0(*piVar3, &buf);
        func_00022780(&buf, *piVar3 + 0xc0, vec, piVar2[-0x20]);
        buf.c = buf.c - D_001E461C * D_001D341C;
        ((float *)piVar2)[-0x1d] = ((float *)piVar2)[-0x1d] - D_001E461C * D_001D341C;
        func_0010FF70(*piVar3, &buf);
        func_0010FF70(piVar3[5], &buf);
        if (((float *)piVar2)[-0x1d] < D_00314F68) *((char *)piVar2 - 0x5c) = 0;
      }
    }
    piVar2 += 0x24;
    piVar3 += 1;
  } while ((int)piVar2 < 0x315D00);
}

#pragma optimize("", on)
void func_000C6CE0(void) {
    unsigned char *p = D_0031519C;
    if (D_003159A0 != 0) return;
    do {
        if (p[-8] && *(float *)(p-4) == D_00314F60 &&
            *(float *)p == D_00314F64 && *(float *)(p+4) == D_00314F68) {
            p[-8] = 0;
            func_00110330(*(int *)(*(int *)(p-12)+0x2c),0);
            func_000C40A0();
        }
        p += 0x2c;
    } while (p < D_0031545C);
}

