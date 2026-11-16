/* 28 functions from 0x00139D80 to 0x0013AD35, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int _func_00139F00(...);
int _func_00126180(...);
int _func_00116A90(...);
int _func_0012E760(...);
int _func_0011C3B0(...);
int _func_00116FB0(...);
extern int _D_00334C98;
extern int _D_00334C8C;
int *_func_00139F00(unsigned char *p)
{
    int _func_0013AF50(...); void _func_0013AF70(...); int _func_00116A90(...);
    _func_0013AF50(_D_00334C98);
    unsigned int size=*(unsigned int *)(p+0x20);
    int *out=(int *)_func_00116A90(size+0x40,0x20,1);
    out[2]=size; out[0]=(int)(out+0x10); out[3]=*(int *)(p+8); out[0xc]=0;
    unsigned char *dst=(unsigned char *)(out+0x10); unsigned char *src=*(unsigned char **)(p+0x24);
    for(unsigned int i=0;i<size;i++) dst[i]=src[i];
    if ((*p&2)!=0) { *(unsigned char *)(out+1)=1; out[0xe]=*(int *)(p+0x14); out[0xf]=*(int *)(p+0x18); }
    else { *(unsigned char *)(out+1)=0; if (*(int *)(p+0x18)==0) { out[0xe]=0; out[0xf]=(size+1)&~1; } else { out[0xe]=(*(int *)(p+0x14)* *(int *)(p+0x10)* *(int *)(p+4))>>3; out[0xf]=(*(int *)(p+0x18)* *(int *)(p+0x10)* *(int *)(p+4))>>3; } }
    _func_0013AF70(_D_00334C98); return out;
}

int _func_00139FC0(int param_1)
{
  int _func_00126180(...);
  int _func_00139F00(...);
  int _func_00116FB0(...);
  int a = _func_00126180(param_1);
  int b = _func_00126180(param_1);
  *(int *)(a + 0x24) = b;
  int result = _func_00139F00(a);
  _func_00116FB0(*(int *)(a + 0x24));
  _func_00116FB0(a);
  return result;
}

void func_0013A000(void)
{
  int func_0013AF50(...);
  extern undefined4 D_00334C98;
  int func_0013AF70(...);
  int func_00116FB0(...);
  func_0013AF50(D_00334C98);
  func_0013AF70(D_00334C98);
  func_00116FB0();
  return;
}

void _func_0013A470(int p){extern int _D_00334C98,_D_001E8878,_D_00334CA4;extern void _func_0013AF50(int);extern void __stdcall _func_001AF9A1(int);extern void __stdcall _func_001AEB37(int);extern void _func_00139C70(int);extern void _func_0013AF70(int);unsigned char* q=(unsigned char*)p;if(q[0x1d]&&*(int*)(q+0x14)){_func_0013AF50(_D_00334C98);_func_001AF9A1(*(int*)(q+0x88));if(q[0x1c]&&_D_001E8878==8)_func_00139C70(*(int*)(q+0x88));else{_func_001AEB37(*(int*)(q+0x88));--_D_00334CA4;}*(int*)(q+0x88)=0;*(int*)(q+0x14)=0;q[0x1d]=0;_func_0013AF70(_D_00334C98);}}

void _func_0013AB80(int p,undefined4 *q){*(undefined4*)(p+0x38)=q[0];*(undefined4*)(p+0x3c)=q[1];*(undefined4*)(p+0x40)=q[2];*(unsigned int*)(p+0x10)|=2;}

void _func_0013ABA0(int p,undefined4 *q){*(undefined4*)(p+0x28)=q[0];*(undefined4*)(p+0x2c)=q[1];*(undefined4*)(p+0x30)=q[2];*(unsigned int*)(p+0x10)|=1;}

void _func_0013ABC0(int p,undefined4 *q){*(undefined4*)(p+0x48)=q[0];*(undefined4*)(p+0x4c)=q[1];*(undefined4*)(p+0x50)=q[2];*(unsigned int*)(p+0x10)|=4;}

void _func_0013ABE0(int param_1, float param_2, int param_3)
{
  *(float *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x5c) = param_3;
  *(unsigned int *)(param_1 + 0x10) |= 8;
}

void func_0013AC20(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  return;
}

void _func_0013AC50(char *param_1, float param_2)
{
  double value = param_2;
  *(float *)(param_1 + 0x74) = (float)value;
}

int _func_0013ACA0(int p){if(*(int*)(p+0x14)==1)return 1;return -(*(unsigned char*)(p+0x1e)!=0)&2;}

void func_0013ACF0(undefined4 param_1)
{
  int func_00011CB0(...);
  extern undefined D_00332B30;
  extern undefined4 D_00332B10;
  func_00011CB0(((undefined *)&D_00332B30),param_1);
  D_00332B10 = D_00332B10 | 1;
  return;
}

