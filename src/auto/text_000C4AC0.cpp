/* 4 functions from 0x000C4AC0 to 0x000C5622, found by Ghidra. */
#include "common.h"

extern float D_00314F0C, D_001E461C, D_001D29F4, D_001D27B0, D_001D27EC, D_001D2D4C, D_00314FCC, D_001D27B8, D_00314FD0, D_00315990, D_00315994, D_00315F98, D_00314FD4, D_001D39B4;
extern int D_00314F08;
extern float func_00131760(void);
void func_000C4600(void);
void func_000C5040(void)
{
    float a, b;
    D_00314F0C = (float)((double)D_00314F0C + (double)D_001E461C);
    if ((double)D_001D29F4 < (double)D_00314F0C) {
        a = (float)(((double)func_00131760() + (double)D_001D27B0) * (double)D_001D27EC);
        b = (float)(((double)func_00131760() + (double)D_001D27B0) * (double)D_001D27EC);
        if ((double)func_00131760() < (double)D_001D27EC) a = (float)((double)a * (double)D_001D2D4C);
        if ((double)func_00131760() < (double)D_001D27EC) b = (float)((double)b * (double)D_001D2D4C);
        if ((double)D_001D27B8 < (double)D_00314FCC * (double)a && (double)D_001D27B8 < (double)D_00314FD0 * (double)b) {
            a = (float)((double)a * (double)D_001D2D4C);
            b = (float)((double)b * (double)D_001D2D4C);
        }
        D_00314F0C = 0.0f;
        D_00315990 = (float)(((double)a - (double)D_00314FCC) * (double)D_001D27EC);
        D_00315994 = (float)(((double)b - (double)D_00314FD0) * (double)D_001D27EC);
    }
    D_00314FCC = (float)((double)D_00315990 * (double)D_001E461C + (double)D_00314FCC);
    D_00314FD0 = (float)((double)D_00315994 * (double)D_001E461C + (double)D_00314FD0);
    if (D_00314F08 % (int)((double)D_00315F98 / (double)D_001E461C) == 0 && (double)D_00314FD4 == (double)D_001D39B4)
        func_000C4600();
}

void func_000C54B0(void)
{
  int func_00110330(int, bool);
  extern int D_003159A0, D_00314FF8, D_003159D0, D_00315A60, D_00315AF0, D_00315B80, D_00315C10, D_00315730, D_00315770, D_003157B0, D_003157F0, D_00315830, D_00315870, D_003158B0, D_003158F0, D_00315930, D_00315970;
  extern int D_00315030[]; extern char D_003159D4, D_00315CA4;
  int *e; char *s;
  if (D_003159A0 > 0) {
    if (D_003159A0 & 2) func_00110330(*(int*)(D_00314FF8 + 0x2c), 0);
    else func_00110330(*(int*)(D_00314FF8 + 0x2c), 1);
  }
  e = D_00315030; s = &D_003159D4;
  do {
    func_00110330(e[-5], *(int*)(s - 4) == 0 && *s != 0);
    func_00110330(e[0], *(int*)(s - 4) != 0 && *s != 0);
    s += 0x90; e++;
  } while ((int)s < (int)&D_00315CA4);
  if (D_003159D0) D_003159D0--;
  if (D_00315A60) D_00315A60--;
  if (D_00315AF0) D_00315AF0--;
  if (D_00315B80) D_00315B80--;
  if (D_00315C10) D_00315C10--;
  if (D_00315730) D_00315730--;
  if (D_00315770) D_00315770--;
  if (D_003157B0) D_003157B0--;
  if (D_003157F0) D_003157F0--;
  if (D_00315830) D_00315830--;
  if (D_00315870) D_00315870--;
  if (D_003158B0) D_003158B0--;
  if (D_003158F0) D_003158F0--;
  if (D_00315930) D_00315930--;
  if (D_00315970) D_00315970--;
}

