/* 20 functions from 0x0008A190 to 0x0008B15A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void *_func_0008A190(unsigned int p1,unsigned int p2){extern int D_002FDF78,D_002FDF70,D_002FDF74,D_002FDF7C;extern int D_0030809C;int _func_0012F120(...);int _func_00110420(...);int _func_001105E0(...);int _func_00110000(...);int _func_00110550(...);int _func_0011DED0(...);int local[19];int i=0;while(i<10&&*(int*)((char*)&D_002FDF78+i*16)!=0)i++;if(i==10)return 0;_func_0012F120(&local[4]);int off=i*16;int *slot=(int*)((char*)&D_002FDF70+off);_func_00110420(D_0030809C,*slot);_func_001105E0(*slot,&local[4],0);_func_00110000(*slot);_func_00110550(p1,*slot,8);_func_0011DED0(*(int*)((char*)&D_002FDF74+off));*(int*)((char*)&D_002FDF7C+off)=p2;*(int*)((char*)&D_002FDF78+off)=1;return (void*)slot;}

void func_0008A230(undefined4 param_1, int param_2)
{
  extern undefined D_002FDF7C;
  int func_0011DEF0(...);
  extern undefined D_002FDF74;
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((undefined *)&D_002FDF7C);
  do {
    if (*piVar2 == param_2) {
      func_0011DEF0(*(undefined4 *)(((undefined *)&D_002FDF74) + uVar1 * 0x10));
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 10);
  return;
}

void _func_0008A270(unsigned int p1,int p2){extern int D_002FDF70,D_002FDF74,D_002FDF78,D_002FDF7C,D_0030809C;int _func_00110420(...);int _func_00110480(...);int _func_0011DEF0(...);int _func_0011D310(...);int i;for(i=0;i<10;i++)if(*(int*)((char*)&D_002FDF7C+i*16)==p2)break;if(i==10)return;int off=i*16;int *slot=(int*)((char*)&D_002FDF70+off);_func_00110420(p1,*slot);_func_00110480(D_0030809C,*slot,8);int s=*(int*)((char*)&D_002FDF74+off);_func_0011DEF0(s);for(int j=0;j<*(int*)(s+0x15c);j++){_func_0011D310(*(int*)(s+0x160)+j*0x58,*(int*)(*(int*)(s+0x50)+0x2c),s+0x54);*(int*)(*(int*)(s+0x160)+j*0x58+0x20)=0;}*(int*)((char*)&D_002FDF78+off)=0;*(int*)((char*)&D_002FDF7C+off)=0;}

void _func_0008A4F0(int param_1) { extern int D_001E4618; extern float D_001D290C, D_001D27B0, D_001D6E18; int i = 0, offset = 0; if (*(int*)(param_1 + 0x15c) <= 0) return; do { float amount = (float)D_001E4618; float* value = (float*)(*(int*)(param_1 + 0x160) + 0x34 + offset); if (D_001E4618 < 0) amount = amount + D_001D290C; *value -= (D_001D27B0 / amount) * D_001D6E18; i++; offset += 0x58; } while (i < *(int*)(param_1 + 0x15c)); }

void _func_0008A560(void)
{
  extern int _D_001D6E1C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0008A330(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_0008A4F0(...);
  _func_0011D000(&_D_001D6E1C, _func_0008A330);
  _func_0011D270(&_D_001D6E1C, _func_0007FC90);
  _func_0011D290(&_D_001D6E1C, _func_00085E20);
  _func_0011D2B0(&_D_001D6E1C, _func_0008A4F0);
}

void func_0008A5A0(void) {
    extern int D_001D6E1C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E1C);
}

void _func_0008A9B0(void)
{
  extern int _D_001D6E2C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0008A5B0(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&_D_001D6E2C, _func_0008A5B0);
  _func_0011D270(&_D_001D6E2C, _func_0007FC90);
  _func_0011D290(&_D_001D6E2C, _func_00085E20);
  _func_0011D2B0(&_D_001D6E2C, _func_000688D0);
}

void func_0008A9F0(void) {
    extern int D_001D6E2C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E2C);
}

void _func_0008AC70(void)
{
  extern int D_001D6E38;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_0008AA00(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_0008AC00(...);
  _func_0011D000(&D_001D6E38, _func_0008AA00);
  _func_0011D270(&D_001D6E38, _func_0007FC90);
  _func_0011D290(&D_001D6E38, _func_00085E20);
  _func_0011D2B0(&D_001D6E38, _func_0008AC00);
}

void func_0008ACB0(void) {
    extern int D_001D6E38;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E38);
}

void _func_0008ACC0(int *p, undefined4 q){int func_0011CD40(...),func_0011CDF0(...),func_0011CE10(...),func_0011CE20(...),func_0011CE30(...),func_0011CE50(...),func_0011CF30(...),func_0011CFC0(...); float func_00131760(...); float func_0012EA60(...); extern float _D_001D27B0; unsigned int i; *p=func_0011CD40(10,4,1,1,1); for(i=0;i<120;i+=12){*(float *)(*(int *)(*p+4)+i)=func_00131760()*2-_D_001D27B0;*(int *)(*(int *)(*p+4)+i+4)=0;*(float *)(*(int *)(*p+4)+i+8)=func_00131760()*2-_D_001D27B0;func_0012EA60((void *)(*(int *)(*p+4)+i));*(float *)(*(int *)(*p+4)+i)=func_00131760()**(float *)(*(int *)(*p+4)+i)*2;*(float *)(*(int *)(*p+4)+i+8)=func_00131760()**(float *)(*(int *)(*p+4)+i+8)*2;} for(i=0;i<48;i+=12){*(float *)(*(int *)(*p+12)+i)=func_00131760();*(float *)(*(int *)(*p+12)+i+4)=func_00131760();*(float *)(*(int *)(*p+12)+i+8)=func_00131760();} *(unsigned int *)(*(int *)(*p+20))=0x3f19999a;*(unsigned int *)(*(int *)(*p+20)+4)=0x3f000000;*(unsigned int *)(*(int *)(*p+20)+8)=0x3e99999a;*(unsigned int *)(*(int *)(*p+20)+12)=0x3ecccccd;*(unsigned int *)(*(int *)(*p+28))=0x41a00000;*(unsigned int *)(*(int *)(*p+28)+4)=0x41a00000;*(unsigned int *)(*(int *)(*p+36))=0;*(unsigned int *)(*(int *)(*p+36)+4)=0;*(unsigned int *)(*(int *)(*p+36)+8)=0x3f800000;*(unsigned int *)(*(int *)(*p+36)+12)=0x3f800000;func_0011CDF0(q);func_0011CE10(q,0);func_0011CE20(q,0);func_0011CE30(q,0x40400000,0x40800000);func_0011CE50(q,0,0,0,0xbf000000);func_0011CF30(q,0x41a00000,0x41a00000);func_0011CFC0(q,0x41f00000);}

void _func_0008AE70(int p1,int p2,int p3){int _func_0011E3D0(...);int _func_0012E7B0(...);int _func_0011CFC0(...);extern float D_001D27B8,D_001D4270;_func_0011E3D0(p1);int s=*(int*)(p1+0x17c);float v=_func_0012E7B0((void*)(s+4),(void*)(p3+0x30));if(v<=D_001D27B8||v>=D_001D4270)v=0;_func_0011CFC0(p1+0x54,v);*(int*)(s+4)=*(int*)(p3+0x30);*(int*)(s+8)=*(int*)(p3+0x34);*(int*)(s+0xc)=*(int*)(p3+0x38);}

void func_0008AEF0(void) {
    extern int D_001D6E48;
    extern void func_0008ACC0(void);
    extern void func_0008B120(void);
    extern void func_00079D10(void);
    extern void func_0008AE70(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0008ACC0, &D_001D6E48);
    func_0011D270(func_0008B120, &D_001D6E48);
    func_0011D290(func_00079D10, &D_001D6E48);
    func_0011D2B0(func_0008AE70, &D_001D6E48);
    func_0011D2D0(func_00092810, &D_001D6E48);
    func_0011D2F0(func_00083D60, &D_001D6E48);
}

void func_0008AF50(void) {
    extern int D_001D6E48;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6E48);
}

void _func_0008B120(int param_1){int _func_00116A90(...);void _func_0011DED0(int);int *p=(int*)_func_00116A90(0x10,1,0);*(int**)(param_1+0x17c)=p;p[0]=0;p[1]=0;p[2]=0;p[3]=0;_func_0011DED0(param_1);}

