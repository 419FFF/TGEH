/* 3 functions from 0x0005B1E0 to 0x0005C0EB, found by Ghidra. */
#include "common.h"

extern unsigned int D_003268B0;
extern void _func_00110060(void *, void *);
extern void _func_0012F730(void *, void *, void *);
extern float _func_0012E870(void *, int);
extern void _func_00117100(void);
extern int _func_00116E50(int, int, int, int);
extern void _func_00117130(void);
void _func_0005BEF0(int param_1, int param_2, int param_3, float param_4)
{
    unsigned char local_60[16];
    unsigned char local_50[76];
    unsigned int *p;
    float radius;
    long double distance;
    if (*(unsigned char *)(param_2 + 0x22) == D_003268B0 && !(*(unsigned char *)(param_2 + 0x20) & 1)) {
        _func_00110060((void *)param_2, local_50);
        _func_0012F730(local_60, (void *)param_2, local_50);
        radius = param_4 + *(float *)(param_2 + 0xd8);
        distance = _func_0012E870(local_60, param_3);
        if (distance <= (long double)radius * (long double)radius) {
            if (!(*(unsigned char *)(param_1 + 0x10) & 0x1f)) {
                _func_00117100();
                *(int *)(param_1 + 0x14) = _func_00116E50(*(int *)(param_1 + 0x14), *(int *)(param_1 + 0x10) * 4 + 0x80, 1, 0);
                _func_00117130();
            }
            *(int *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10) * 4) = param_2;
            ++*(int *)(param_1 + 0x10);
        }
    }
    for (p = *(unsigned int **)(param_2 + 0x28); p; p = (unsigned int *)p[3]) {
        if (!(*(unsigned char *)((char *)p + 6) & 0x18))
            _func_0005BEF0(param_1, (int)p[0], param_3, param_4);
    }
}

#pragma optimize("y", on)
void __cdecl _func_0005BFE0(int param_1, int param_2, int param_3, int param_4)
{
  int _func_0005BEF0(...);
  extern int _D_00307DF8;
  int iVar1;
  int *puVar2;
  int iVar3;
  int *piVar4;
  unsigned int local_10;
  unsigned int local_c;

  local_c = 0;
  if (local_c < *(unsigned int *)(param_2 + 0xe4)) {
    piVar4 = (int *)(param_2 + 0xe8);
    do {
      if (2 < (unsigned int)piVar4[1]) {
        return;
      }
      iVar1 = *piVar4;
      if ((piVar4[1] != 2) || (*(char *)(iVar1 + 0x28e) != '\0')) {
        _func_0005BEF0(param_1,*(int *)(iVar1 + 0xe0),param_3,param_4);
        local_10 = 0;
        do {
          if (local_10 == 0) {
            puVar2 = *(int **)(iVar1 + 0x294);
          }
          else {
            puVar2 = *(int **)(iVar1 + 0x2b8);
          }
          for (; puVar2 != 0; puVar2 = (int *)*puVar2) {
            iVar3 = puVar2[2];
            if (((((*(unsigned char *)(iVar3 + 0x10) & 2) == 0) && (iVar3 != _D_00307DF8)) &&
                (*(char *)(iVar3 + 0x13) != '\f')) &&
               ((*(char *)(iVar3 + 0x13) != 'B' && (*(char *)(iVar3 + 0x14) == '\x01')))) {
              _func_0005BEF0(param_1,*(int *)(iVar3 + 0x2c),param_3,param_4);
            }
          }
          local_10 = local_10 + 1;
        } while (local_10 < 2);
      }
      local_c = local_c + 1;
      piVar4 = piVar4 + 2;
    } while (local_c < *(unsigned int *)(param_2 + 0xe4));
  }
  return;
}
#pragma optimize("", on)
