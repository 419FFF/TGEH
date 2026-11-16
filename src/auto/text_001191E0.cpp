/* 19 functions from 0x001191E0 to 0x0011A18C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int _func_0013E9DB(int);
float _func_0013E9E0(int);
void _func_001191E0(int a, int *b) { if (*(int *)(a + 0xb0)) { *(float *)(*(int *)(a + 0xb0)+0x34) = _func_0013E9E0(b[0]); *(float *)(*(int *)(a + 0xb0)+0x38) = _func_0013E9E0(b[1]); *(float *)(*(int *)(a + 0xb0)+0x3c) = _func_0013E9E0(b[2]); *(float *)(*(int *)(a + 0xb0)+0x40) = _func_0013E9E0(b[3]); } }

void _func_00119A80(int a, int *b) { if (*(int *)(a+0xb0)) { unsigned int i=0x18; do { if (b[0]==0) return; if (!_func_0013E9DB(b[0])) *(unsigned int *)(*(int *)(a+0xb0)+i) |= 1; if (!_func_0013E9DB(b[1])) *(unsigned int *)(*(int *)(a+0xb0)+i) |= 2; i+=4; b+=2; } while(i<0x28); } }

void _func_00119B00(int a, int *b) { if (*(int *)(a+0xb0)) { unsigned int i=0; float *p=(float *)(a+0x8c); do { if (!b[i*2]) return; p[-1]=_func_0013E9E0(b[i*2]); p[0]=_func_0013E9E0(b[i*2+1]); ++i; p+=2; } while(i<4); } }

void _func_00119CF0(int a, int *b) { if (_func_0013E9DB(*b)) *(unsigned char *)(a + 0xb6) |= 1; }

void func_00119D10(int param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  undefined2 uVar1;
  
  uVar1 = func_0013E9DB(*param_2);
  *(undefined2 *)(param_1 + 0xb4) = uVar1;
  return;
}

void _func_00117100(void);
void _func_00117130(void);
int _func_00116A90(int, int, int);
void _func_0012EA60(float *);
void _func_00119D70(int param_1, int *param_2)
{
    int value = _func_0013E9DB(*param_2);
    _func_00117100();
    *(int *)(*(int *)param_1 + 0xc) = value;
    _func_00117130();
}

void func_00119DA0(int param_1, undefined4 *param_2)
{
  int func_0011B4F0(...);
  extern undefined D_001DCFFC;
  extern undefined D_001DF514;
  extern undefined D_001DF510;
  int iVar1;
  
  iVar1 = func_0011B4F0(*param_2,((undefined *)&D_001DCFFC));
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x4c) = 2;
    return;
  }
  iVar1 = func_0011B4F0(*param_2,((undefined *)&D_001DF514));
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x4c) = 0;
    return;
  }
  iVar1 = func_0011B4F0(*param_2,((undefined *)&D_001DF510));
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x4c) = 1;
  }
  return;
}

void func_00119E20(int param_1)
{
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  return;
}

void func_00119E30(int param_1)
{
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  return;
}

void func_0011A040(int *p, unsigned int *v)
{
 int func_00117100(...); int func_00116A90(...); int func_00117130(...); float func_0013E9E0(...);
 int x; float a;
 if (p[0x2b]==0) { func_00117100(); x=func_00116A90(*(int *)(*p+0xc)<<3,1,1); *(int *)(*p+0x1c)=x; func_00117130(); }
 a=func_0013E9E0(v[0]); *(float *)(*(int *)(*p+0x1c)+p[0x2b]*8)=a;
 a=func_0013E9E0(v[1]); *(float *)(*(int *)(*p+0x1c)+p[0x2b]*8+4)=a;
}

