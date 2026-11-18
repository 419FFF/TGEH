/* 18 functions from 0x0011CF30 to 0x0011DEFC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011CF80(int param_1, float param_2)
{
  double value = param_2;
  *(float *)(param_1 + 0x30) = (float)value;
}

void func_0011CF90(int param_1, int param_2, int param_3, int param_4, int param_5)
{
  int iVar1 = param_1 + (param_2 * 0x30);
  *((int *) ((param_1 + (param_2 * 0x30)) + 0x38)) = param_3;
  *((int *) ((param_1 + (param_2 * 0x30)) + 0x34)) = 1;
  *((int *) (iVar1 + 0x3c)) = param_4;
  *((int *) (iVar1 + 0x40)) = param_5;
}

int func_0011D1E0(int);
extern float D_001D27B8;
extern float D_001D27B0;
void func_0011CFC0(int param_1, float param_2) { *(float *)(param_1 + 0xf4) = param_2; if (!(param_2 <= D_001D27B8)) { *(float *)(param_1 + 0xf8) = D_001D27B0 / param_2; return; } *(unsigned int *)(param_1 + 0xf8) = 0; }

void func_0011D000(char *param_1, undefined4 param_2)
{
  extern undefined4 D_003281E0;
  extern undefined4 D_003281D8;
  int func_00116A90(...);
  int func_00116E50(...);
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  do {
    uVar5 = 0;
    if (D_003281E0 != 0) {
      do {
        // Check if slot is empty. Using the pattern from the target assembly's comparison logic.
        if (*(int *)(D_003281D8 + uVar5 * 4) == 0) {
          if (uVar5 != 0xffffffff) {
            // Allocate space for the string using func_00116A90.
            pcVar4 = (char *)func_00116A90(0x14c, 1, 1);
            iVar3 = D_003281D8;
            *(char **)(D_003281D8 + uVar5 * 4) = pcVar4;

            // Copy string from param_1 to allocated buffer (pcVar4).
            do {
              cVar2 = *param_1;
              param_1++;
              *pcVar4++ = cVar2;
            } while (cVar2 != '\0');

            // Calculate length and sum.
            pcVar4 = *(char **)(iVar3 + uVar5 * 4);
            iVar6 = 0;
            cVar2 = *pcVar4;
            while (cVar2 != '\0') {
              iVar6 += cVar2; // Sum of characters
              pcVar1 = pcVar4 + 1;
              pcVar4++;
              cVar2 = *pcVar1;
            }

            // Write results back to the structure, using explicit offsets.
            *(int *)(*(int *)(iVar3 + uVar5 * 4) + 0x20) = iVar6;
            *(undefined4 *)(*(int *)(iVar3 + uVar5 * 4) + 0x24) = param_2;
            *(undefined4 *)(*(int *)(iVar3 + uVar5 * 4) + 0x138) = 0;
            *(undefined4 *)(*(int *)(iVar3 + uVar5 * 4) + 0x13c) = 0;
            *(undefined4 *)(*(int *)(iVar3 + uVar5 * 4) + 0x140) = 0;
            *(undefined4 *)(*(int *)(iVar3 + uVar5 * 4) + 0x144) = 0;
            *(undefined4 *)(*(int *)(iVar3 + uVar5 * 4) + 0x148) = 0;
            *(undefined4 *)(*(int *)(iVar3 + uVar5 * 4) + 0x28) = 0;
            return;
          }
          // If slot is not empty, we break (as per original logic).
          break;
        }
        uVar5++;
      } while (uVar5 < D_003281E0);
    }
    // Update global pointers/counters.
    D_003281D8 = func_00116E50(D_003281D8, D_003281E0 * 4 + 0x28, 1, 1);
    D_003281E0 += 10;
  } while (true);
}

int func_0011D1E0(char *s) { extern unsigned int D_003281E0; extern char **D_003281D8; int sum=0; char *p=s; while(*p){sum+=(signed char)*p; p++;} unsigned int i=0; while(i<D_003281E0){char *entry=D_003281D8[i];if(entry&&sum==*(int*)(entry+0x20)){char *x=entry;char *y=s;while(*x==*y&&*x){if(x[1]!=y[1])break;x+=2;y+=2;}if(*x==*y&&!*x)return (int)entry;}i++;}return 0;}

void func_0011D270(undefined4 param_1, undefined4 param_2)
{
  int func_0011D1E0(...);
  int iVar1;
  
  iVar1 = func_0011D1E0(param_1);
  *(undefined4 *)(iVar1 + 0x138) = param_2;
  return;
}

void func_0011D290(int param_1, int param_2) { int iVar1 = func_0011D1E0(param_1); *(int *)(iVar1 + 0x13c) = param_2; }

void func_0011D2B0(void *a,int b) { int func_0011D1E0(...); int p=func_0011D1E0(a); *(int*)(p+0x140)=b; }

void func_0011D2D0(void *a,int b) { int func_0011D1E0(...); int p=func_0011D1E0(a); *(int*)(p+0x144)=b; }

void func_0011D2F0(void *a,int b) { int func_0011D1E0(...); int p=func_0011D1E0(a); *(int*)(p+0x148)=b; }

#pragma optimize("y", off)
undefined4 func_0011D450(float *p, int count, float dt, int *desc, undefined4 arg5)
{
  int i;
  float x = 0.0f, y = 0.0f, z = 0.0f;
  int n1 = 0, n2 = 0;
  float work[37];
  int func_00110060(...);
  if (count != 0 && desc != 0) {
    for (i = 0; i < 4; ++i) {
      int *d = (int *)((char *)desc + 0x38 + i * 0x30);
      switch (d[-1]) {
      case 1: x += dt * *(float *)d; y += dt * ((float *)d)[1]; z += dt * ((float *)d)[2]; break;
      case 2: case 3: ++n1; break;
      case 4: case 5: case 6: case 7: ++n2; break;
      }
    }
    if (*((char *)desc + 0xfc)) func_00110060(arg5, work);
    while (count-- > 0) p += 42;
  }
  return 0;
}
#pragma optimize("", on)
void func_0011DED0(int param_1)
{
  *(undefined4 *)(param_1 + 0x4c) = 2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  return;
}

void func_0011DEF0(int param_1)
{
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}
extern float D_001D27B8;
extern float D_001D27B0;
extern undefined4 D_003281E0;
extern undefined4 D_003281D8;
int func_00116FB0(undefined4);
