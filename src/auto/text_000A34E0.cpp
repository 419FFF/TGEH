/* 9 functions from 0x000A34E0 to 0x000A42D3, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000A34E0(void) { volatile unsigned char a=0,b=0,c=0,d=0; (void)a;(void)b;(void)c;(void)d; }

void func_000A3F00(void)
{
  extern undefined4 D_00312754;
  int func_0011B990(...);
  extern undefined4 D_0031277C;
  *(short *)(D_00312754 + 0x2a) = *(short *)(D_00312754 + 0x2a) + -1;
  func_0011B990(D_00312754);
  *(short *)(D_0031277C + 0x2a) = *(short *)(D_0031277C + 0x2a) + -1;
  func_0011B990(D_0031277C);
  return;
}

void _func_000A3F30(void){
 extern unsigned char _D_002EB02E; extern int _D_00312694,_D_003128A8,_D_00312690;
 int func_00084090(...); unsigned char func_000B5650(int);
 if(_D_002EB02E){
   if(_D_00312694!=1)_D_00312694=2;
   if(_D_003128A8==0){
     func_00084090(_D_00312690,0,0,0,0);
     _D_003128A8=_D_003128A8+1;
   }else if(_D_003128A8==0x14){
     func_00084090(_D_00312690,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
     _D_003128A8=_D_003128A8+1;
   }else{
     if(_D_003128A8==0x1e)_D_003128A8=-1;
     _D_003128A8=_D_003128A8+1;
   }
 }else{
   if(_D_003128A8>0x13||_D_003128A8==0){
     func_00084090(_D_00312690,0,0,0,0);
     _D_003128A8=1;
   }
 }
 if(func_000B5650(4)!=0){
   if(_D_00312694!=0)_D_00312694=3;
 }
}

void func_000A4010(unsigned int a) { extern unsigned char D_0031151D,D_0031151C; extern int D_00312480,D_00312488; if(a>=128)a=0; unsigned int b=D_0031151D; if(a<=b){}else a=b; if(D_0031151C!=a){D_0031151C=(unsigned char)a;if(D_0031151C!=255){if(D_00312480!=1){D_00312480=2;return;}D_00312488=0x41200000;}}}

void func_000A4060(int param_1, int param_2)
{
  extern undefined D_003119DC;
  extern undefined4 D_00311A30;
  extern undefined4 D_00311A38;
  if ((*(int *)(((undefined *)&D_003119DC) + param_1 * 4) != param_2) &&
     (*(int *)(((undefined *)&D_003119DC) + param_1 * 4) = param_2, param_2 != -1)) {
    if (D_00311A30 != 1) {
      D_00311A30 = 2;
      return;
    }
    D_00311A38 = 0x41200000;
  }
  return;
}

void func_000A40A0(int param_1, int param_2)
{
  extern undefined D_00311B30;
  extern undefined4 D_00311D10;
  extern undefined4 D_00311D18;
  if ((*(int *)(((undefined *)&D_00311B30) + param_1 * 4) != param_2) &&
     (*(int *)(((undefined *)&D_00311B30) + param_1 * 4) = param_2, param_2 != -1)) {
    if (D_00311D10 != 1) {
      D_00311D10 = 2;
      return;
    }
    D_00311D18 = 0x41200000;
  }
  return;
}

void func_000A40E0(int param_1)
{
  extern undefined4 D_00312610;
  extern undefined4 D_00312694;
  extern undefined4 D_0031269C;
  if ((D_00312610 != param_1) && (D_00312610 = param_1, param_1 != -1)) {
    if (D_00312694 != 1) {
      D_00312694 = 2;
      return;
    }
    D_0031269C = 0x40a00000;
  }
  return;
}

extern int D_00308158, D_00313B54, D_00311D30, D_00311DB4, D_00311DBC;
extern unsigned int D_00310778, D_00310A2C, D_00310CE0, D_00310F94, D_00311248, D_003114FC;
extern char D_001D3770[];
float* func_0009C7A0(int, char*, int);
void func_000A4120(void)
{
    int v = (int)*func_0009C7A0(D_00308158, D_001D3770, 0);
    switch (D_00313B54) {
    case 3:
        if (v != 0 && (D_00310778 & 2) == 0) D_00310778 |= 2;
        break;
    case 4:
        if (v != 0 && (D_00310A2C & 2) == 0) D_00310A2C |= 2;
        break;
    case 5:
        if (v != 0 && (D_00310CE0 & 2) == 0) D_00310CE0 |= 2;
        break;
    case 6:
        if (v != 0 && (D_00310F94 & 2) == 0) D_00310F94 |= 2;
        break;
    case 7:
        if (v != 0 && (D_00311248 & 2) == 0) D_00311248 |= 2;
        break;
    case 8:
        if (v != 0 && (D_003114FC & 2) == 0) D_003114FC |= 2;
        break;
    }
    D_00311D30 = ((D_003114FC >> 1) & 1) + ((D_00311248 >> 1) & 1) + ((D_00310F94 >> 1) & 1) + ((D_00310CE0 >> 1) & 1) + ((D_00310A2C >> 1) & 1) + ((D_00310778 >> 1) & 1);
    if (D_00311D30 != -1) {
        if (D_00311DB4 != 1) {
            D_00311DB4 = 2;
            return;
        }
        D_00311DBC = 0x41200000;
    }
}

