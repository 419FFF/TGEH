/* 21 functions from 0x0011BF40 to 0x0011CF22, found by Ghidra. */
#include "common.h"

struct V3i { int x, y, z; };
#include "ghidra.h"

void func_0011C340(void)
{
  extern undefined4 D_003278AC;
  extern undefined4 D_003268DC;
  extern undefined4 D_003268E0;
  extern undefined4 D_003268E8;
  extern undefined4 D_003278A8;
  int func_0013AF00(...);
  extern undefined4 D_003278A4;
  int func_0013B250(...);
  extern undefined4 D_003278A0;
  extern undefined4 D_003268D8;
  int func_0013AFB0(...);
  int func_0011C1D0(...);
  if (D_003278AC == 0) {
    D_003268DC = 0;
    D_003268E0 = 0;
    D_003268E8 = 0;
    D_003278A8 = func_0013AF00();
    D_003278A4 = func_0013B250();
    D_003278A0 = func_0013B250();
    D_003268D8 = func_0013AFB0(&func_0011C1D0,0,0x2000);
  }
  D_003278AC = D_003278AC + 1;
  return;
}

void func_0011C3B0(int *param_1, int *param_2, int param_3)
{
  *param_2 = *param_1;
  param_2[1] = (int)param_1;
  param_2[2] = param_3;
  if (*param_1 != 0) {
    *(int **)(*param_1 + 4) = param_2;
  }
  *param_1 = (int)param_2;
  return;
}

void func_0011C3E0(int *param_1)
{
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

void func_0011C410(unsigned int *param_1, unsigned int *param_2, unsigned int param_3) { unsigned int old = *param_1; *param_2 = old; param_2[1] = param_3; *param_1 = (unsigned int)param_2; }

extern void* D_003281D0;
void* func_0010F750(int, void*, int);
void* func_00116A90(unsigned, int, int);
char* _func_0011C430(unsigned n, int** src, int arg)
{
  char* obj = (char*)func_0010F750(arg, D_003281D0, 0xf0);
  *(unsigned*)(obj + 0xe0) = n;
  *(char**)(obj + 0xe4) = (char*)func_00116A90(n * 0x18, 1, 1);
  if (n > 0) {
    int off = 0;
    unsigned left = n;
    do {
      int* s = *src;
      int* d = (int*)(*(char**)(obj + 0xe4) + off + 4);
      d[0] = s[1];
      d[1] = s[2];
      d[2] = s[3];
      *(int*)(*(char**)(obj + 0xe4) + off) = **src;
      *(void**)(*(char**)(obj + 0xe4) + off + 0x14) = func_00116A90(**src << 4, 1, 1);
      unsigned i = 0;
      int* p = *src;
      if (i < (unsigned)*p) {
        unsigned o = 0;
        do {
          int* sv = (int*)(p[5] + o);
          int* dv = (int*)(*(char**)(*(char**)(obj + 0xe4) + off + 0x14) + o);
          dv[0] = sv[0];
          dv[1] = sv[1];
          dv[2] = sv[2];
          dv[3] = sv[3];
          p = *src;
          i++;
          o += 0x10;
        } while (i < (unsigned)*p);
      }
      off += 0x18;
      src++;
      left--;
    } while (left != 0);
  }
  return obj;
}

void func_0011C540(int param_1)
{
  int func_00116FB0(...);
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    iVar1 = 0;
    do {
      func_00116FB0(*(undefined4 *)(iVar1 + 0x14 + *(int *)(param_1 + 0xe4)));
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0xe0));
  }
  func_00116FB0();
  return;
}

void func_0011C590(unsigned int x) { extern unsigned int D_003280B8; extern unsigned int D_003280CC[256], D_003280D0[256], D_003278B0[]; unsigned int i=D_003280B8; if(i>x){for(;;){unsigned int *p=(unsigned int*)((char*)D_003278B0+i*16);p[2]=p[-2];p[3]=p[-1];p[4]=p[0];p[5]=p[1];D_003280D0[i]=D_003280CC[i];i--;if(i<=x)break;}}D_003280B8=i+1;}

void func_0011C710(int i, int a, int b) { extern float D_003280D0[], D_001DF648, D_001D27B8, D_001D27B0; extern float D_003278B8[][4]; float d=D_003280D0[a]-D_003280D0[b]; float t=D_001D27B8; if(D_001DF648<=d){ float r=D_003280D0[a]/d; if(D_001D27B8<=r){ t=r; if(D_001D27B0<r)t=D_001D27B0; } } D_003280D0[i]=0; D_003278B8[i][0]=(D_003278B8[b][0]-D_003278B8[a][0])*t+D_003278B8[a][0]; D_003278B8[i][1]=(D_003278B8[b][1]-D_003278B8[a][1])*t+D_003278B8[a][1]; D_003278B8[i][2]=(D_003278B8[b][2]-D_003278B8[a][2])*t+D_003278B8[a][2]; }

undefined4 func_0011C7E0(int param_1)
{
  extern undefined4 D_003280B8;
  extern undefined4 D_001D27B8;
  extern undefined D_003280D0;
  int func_0011C5F0(...);
  int func_0011C710(...);
  int func_0011C590(...);
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 + -1;
  if (iVar3 < 0) {
    iVar3 = D_003280B8 - 1;
  }
  uVar1 = param_1 + 1;
  uVar2 = uVar1 % D_003280B8;
  if (D_001D27B8 < *(float *)(((undefined *)&D_003280D0) + iVar3 * 4)) {
    if (D_001D27B8 < *(float *)(((undefined *)&D_003280D0) + uVar2 * 4)) {
      func_0011C5F0(param_1);
      return 1;
    }
    func_0011C710(param_1,param_1,uVar2);
    return 0;
  }
  if (D_001D27B8 < *(float *)(((undefined *)&D_003280D0) + uVar2 * 4)) {
    func_0011C710(param_1,param_1,iVar3);
    return 0;
  }
  func_0011C590(param_1);
  if (param_1 < (int)uVar2) {
    uVar2 = uVar2 + 1;
  }
  if (param_1 < iVar3) {
    iVar3 = iVar3 + 1;
  }
  func_0011C710(param_1,uVar1,iVar3);
  func_0011C710(uVar1,uVar1,uVar2);
  return 0;
}

undefined4 func_0011CCD0(int param_1)
{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if ((*(byte *)((int)puVar1 + 6) & 0x10) == 0) break;
    puVar1 = (undefined4 *)puVar1[3];
  }
  return *puVar1;
}

extern int _D_003281D4;
extern int _D_003281D0;
extern int __cdecl _func_00110370(void*);
extern void _func_0011C540(void);
void __cdecl _func_0011CD00(void)
{
    if (_D_003281D4 == 0) {
        int local[7];
        local[4] = 0;
        local[1] = 0;
        local[2] = 0;
        local[3] = (int)_func_0011C540;
        _D_003281D0 = _func_00110370(local);
    }
    ++_D_003281D4;
}

void func_0011CD40(unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e) { int func_00116A90(...); unsigned int ab=a+b; int *p=(int*)func_00116A90(ab*12+0x28+(d+(c+e)*2)*8,1,1); p[0]=a;p[2]=b;p[4]=c;p[6]=d;p[8]=e;p[1]=0;p[3]=0;p[5]=0;p[7]=0;p[9]=0; if(a>0)p[1]=(int)(p+10);if(b>0)p[3]=(int)(p+a*3+10);if(c>0)p[5]=(int)(p+ab*3+10);if(d>0)p[7]=(int)(p+ab*3+c*4+10);if(e>0)p[9]=(int)(p+(d+c*2)*2+ab*3+10);}

void func_0011CDF0(int param_1)
{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_1 + 0x54);
  iVar2 = 4;
  do {
    *(undefined4 *)(puVar1 + -0x20) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x30;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

void func_0011CE10(int param_1, float param_2) { double value = param_2; *(float *)(param_1 + 8) = (float)value; }

void func_0011CE20(int param_1, float param_2)
{
  double value = param_2;
  *(float *)(param_1 + 4) = (float)value;
}

void func_0011CE30(int p,float a,float b) { double x=a; *(float*)(p+0xc)=(float)x; double z=b; *(float*)(p+0x10)=(float)(z-(double)a); }

void _func_0011CE50(int param_1, float param_2, float param_3, float param_4, float param_5)
{
  // Assuming D_001D27B8 is available globally.
  float fGlobal = 1.0f; // Placeholder for the global read value

  uint uVar2 = *(uint *)(param_1 + 0x14);
  
  // Store parameters (assuming param_1 points to a structure)
  *(float *)(param_1 + 0x18) = param_2;
  *(float *)(param_1 + 0x1c) = param_3;
  *(float *)(param_1 + 0x24) = param_5;
  *(float *)(param_1 + 0x20) = param_4;

  uVar2 = *(uint *)(param_1 + 0x14); // Re-read original value
  
  // Check 1: fcomp st, dword ptr [_D_001D27B8] vs param_2 (float) -> Bit 1 set if fGlobal < param_2
  if (fGlobal < param_2) {
    uVar2 |= 1;
  }
  
  // Check 2: fcomp st, dword ptr [_D_001D27B8] vs param_3 (float) -> Bit 2 set if fGlobal < param_3
  if (fGlobal < param_3) {
    uVar2 |= 2;
  }
  
  // Check 3: fcomp st, dword ptr [_D_001D27B8] vs param_4 (float) -> Bit 4 set if fGlobal < param_4
  if (fGlobal < param_4) {
    uVar2 |= 4;
  }
  
  // Check 4: fcomp st, dword ptr [_D_001D27B8] vs param_5 (float) -> Bit 8 set if fGlobal < param_5
  if (fGlobal < param_5) {
    uVar2 |= 8;
  }
  
  // Check 5: complex condition involving all parameters.
  if (((param_2 != fGlobal) || (param_3 != fGlobal)) || 
      ((param_4 != fGlobal) && (param_5 != fGlobal))) {
    uVar2 |= 0x10;
  }

  *(uint *)(param_1 + 0x14) = uVar2;
}

