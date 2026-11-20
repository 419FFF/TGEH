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

#pragma optimize("y", on)
void func_000C65F0(void)
{
  extern char D_00315714, D_00315994, D_00315716, D_00315715;
  extern int D_00315718, D_00314F80, D_0031571C, D_00314F84, D_0031572C, D_00315720;
  extern int D_00315710, D_00315734, D_00315738, D_00315740, D_00315744, D_00315CD0;
  extern float D_00314F88, D_001D341C, D_00315728, D_001D2A2C;
  extern float D_00315724, D_001D27B0, D_001D28E0, D_001D27EC, D_001D2D4C;
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
  (&D_00315716)[i] = 1;
  (&D_00315714)[i] = 1;
  (&D_00315715)[i] = 1;
  *(int *)((char *)&D_00315718 + i) = D_00314F80;
  *(int *)((char *)&D_0031571C + i) = D_00314F84;
  *(float *)((char *)&D_00315720 + i) = (float)((double)D_00314F88 + (double)D_001D341C);
  *(float *)((char *)&D_00315728 + i) = (float)(func_00131760() * (double)D_001D2A2C);
  *(float *)((char *)&D_00315724 + i) = (float)((func_00131760() + (double)D_001D27B0) * (double)D_001D28E0);
  if (!(func_00131760() <= (double)D_001D27EC)) {
    *(float *)((char *)&D_00315724 + i) = (float)((double)*(float *)((char *)&D_00315724 + i) * (double)D_001D2D4C);
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

