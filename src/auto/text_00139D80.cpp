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

int _func_0013A0A0(int param_1,int param_2){extern int _func_00116A90(int,int,int);extern void _func_0012E760(void*);extern void _func_0011C3B0(void*,void*,void*);extern int _D_00334C8C;int* p=(int*)_func_00116A90(0x8c,1,1);p[6]=param_2;p[8]=param_1;*((char*)p+0x1c)=1;_func_0012E760(p+10);_func_0012E760(p+14);_func_0012E760(p+18);p[22]=0;p[23]=0;p[24]=0;p[25]=0;p[26]=*(int*)(param_1+0xc);p[27]=0x3f800000;p[28]=0;p[5]=0;_func_0011C3B0(&_D_00334C8C,p,p);*((char*)p+0x1e)=0;return (int)p;}

void _func_0013A470(int param_1){extern int _D_00334C98,_D_001E8878,_D_00334CA4;extern void _func_0013AF50(int);extern void __stdcall _func_001AF9A1(int);extern void __stdcall _func_001AEB37(int);extern void _func_00139C70(void);extern void _func_0013AF70(int);int* edi=(int*)param_1;int zero=0;if(*((char*)edi+0x1d)==0||edi[5]==0)return;_func_0013AF50(_D_00334C98);_func_001AF9A1(edi[34]);if(*((char*)edi+0x1c)!=0&&_D_001E8878==8){int keep=edi[34];_func_00139C70();}else{_func_001AEB37(edi[34]);--_D_00334CA4;}int global=_D_00334C98;edi[34]=zero;edi[5]=zero;*((char*)edi+0x1d)=zero;_func_0013AF70(global);}

int __stdcall func_001AF97D(int,int,int,int);
int __stdcall func_001AF9A1(int);
int func_0013AF50(int);
int func_0013A960(int);
int func_0011C3E0(int);
int func_0011C3B0(int,int,int);
int func_0013AF70(int);
int func_0013A470(int);
extern int D_00334C98;
extern int D_00332B00;
extern int D_00334C8C;
void func_0013AA30(int p, int arg) { if (*(int *)(p+0x14)!=0) { if (*(char *)(p+0x1d) && *(int *)(p+0x88)) { int x=*(int *)(p+0x24); func_001AF97D(*(int *)(p+0x88),0,0,(x==1)|2); } } else { func_0013AF50(D_00334C98); *(int *)(p+0x24)=arg; *(int *)(p+0x14)=2; *(int *)(p+0x10)=-1; func_0013A960(p); func_0011C3E0(p); func_0011C3B0((int)&D_00332B00,p,p); *(char *)(p+0x1e)=1; func_0013AF70(D_00334C98); } }

void func_0013AAC0(int p, char arg) { int state=*(int *)(p+0x14); if(state==2 && arg && *(char *)(p+0x1d)) { func_001AF9A1(*(int *)(p+0x88)); *(int *)(p+0x14)=1; } else if(state==1 && !arg && *(char *)(p+0x1d)) { func_001AF97D(*(int *)(p+0x88),0,0,*(int *)(p+0x24)==1); *(int *)(p+0x14)=2; } }

void func_0013AB30(int p) { if (*(int *)(p+0x14)) { func_0013AF50(D_00334C98); func_0013A470(p); func_0011C3E0(p); func_0011C3B0((int)&D_00334C8C,p,p); int x=D_00334C98; *(char *)(p+0x1e)=0; *(int *)(p+0x14)=0; func_0013AF70(x); } }

void _func_0013AB80(int p,undefined4 *q){int *d=(int*)p;d[14]=q[0];d[15]=q[1];d[16]=q[2];d[4]=d[4]|2;}

void _func_0013ABA0(int p,undefined4 *q){int *d=(int*)p;d[10]=q[0];d[11]=q[1];d[12]=q[2];d[4]=d[4]|1;}

void _func_0013ABC0(int p,undefined4 *q){int *d=(int*)p;d[18]=q[0];d[19]=q[1];d[20]=q[2];d[4]=d[4]|4;}

void _func_0013ABE0(int param_1, float param_2, int param_3)
{
  *(float *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x5c) = param_3;
  *(unsigned int *)(param_1 + 0x10) |= 8;
}

void _func_0013AC00(void* p,float v){float* f=(float*)((char*)p+0x6c);*f=v;if(*(unsigned char*)((char*)p+0x1c)==0)*(int*)((char*)p+0x10)|=0x40;}

void func_0013AC20(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  return;
}

void func_0013AC30(int p, unsigned int bits) { *(unsigned int *)(p+0x70)=bits; if (*(char *)(p+0x1c)==0) *(unsigned int *)(p+0x10)|=0x80; }

void _func_0013AC50(char *param_1, float param_2)
{
  double value = param_2;
  *(float *)(param_1 + 0x74) = (float)value;
}

void _func_0013AC60(int param_1, char param_2)
{
  extern int _D_001E8878;
  extern char _D_001E88F0;
  extern char _D_001E88B8;
  int __stdcall _func_001B0362(int, const char *);
  int value;
  char flag = param_2;
  int mode = _D_001E8878;
  *(char *)(param_1 + 0x1f) = flag;
  if (mode == 8 && (value = *(int *)(param_1 + 0x88)) != 0) {
    if (flag) _func_001B0362(value, &_D_001E88F0);
    else _func_001B0362(value, &_D_001E88B8);
  }
}

int _func_0013ACA0(int p){int x=*(int*)(p+0x14);if(x==1)return 1;int y=*(char*)(p+0x1e);return (y<<31)>>30;}

void _func_0013ACC0(unsigned int p){extern unsigned int D_001E8878,D_00332B18,D_00332B10;if(D_001E8878==8){D_00332B18=p;return;}unsigned int x=D_00332B10;x|=0x100;D_00332B18=p;D_00332B10=x;}

void func_0013ACF0(undefined4 param_1)
{
  int func_00011CB0(...);
  extern undefined D_00332B30;
  extern undefined4 D_00332B10;
  func_00011CB0(((undefined *)&D_00332B30),param_1);
  D_00332B10 = D_00332B10 | 1;
  return;
}

void _func_0013AD10(unsigned int *p){extern unsigned int D_00332B70,D_00332B74,D_00332B78,D_00332B10;D_00332B70=p[0];D_00332B74=p[1];D_00332B78=p[2];D_00332B10|=4;}

