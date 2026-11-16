/* 32 functions from 0x0011A190 to 0x0011B077, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011A190(int *p, unsigned int *v)
{
 int func_00117100(...); int func_00116A90(...); int func_00117130(...); float func_0013E9E0(...);
 int x; float a;
 if (p[0x2b]==0) { func_00117100(); x=func_00116A90(*(int *)(*p+0xc)<<3,1,1); *(int *)(*p+0x28)=x; func_00117130(); }
 a=func_0013E9E0(v[0]); *(float *)(*(int *)(*p+0x28)+p[0x2b]*8)=a;
 a=func_0013E9E0(v[1]); *(float *)(*(int *)(*p+0x28)+p[0x2b]*8+4)=a;
}

void func_0011A200(int *p, int *v)
{
 int func_00117100(...); int func_00116A90(...); int func_00117130(...); float func_0013E9E0(...);
 int x; unsigned int i; float a;
 if (p[0x2b]==0) { func_00117100(); x=func_00116A90(*(int *)(*p+0x2c)* *(int *)(*p+0xc)*4,1,1); *(int *)(*p+0x30)=x; func_00117130(); }
 for(i=0;i<(unsigned int)*(int *)(*p+0x2c);i++) { if (!v[i]) return; a=func_0013E9E0(v[i]); *(float *)(*(int *)(*p+0x30)+(*(int *)(*p+0x2c)*p[0x2b]+i)*4)=a; }
}

void func_0011A290(int *param_1)
{
  *(undefined4 *)(*param_1 + 0x34) = 0;
  return;
}

void func_0011A2A0(int *p, unsigned int *v) { int func_0013E9DB(...); int a,b,c; unsigned short x; a=*v; x=(unsigned short)func_0013E9DB(a); b=*p; *(unsigned short *)(*(int *)(b+0x38)+*(int *)(b+0x34)*2)=x; a=v[1]; x=(unsigned short)func_0013E9DB(a); b=*p; *(unsigned short *)(*(int *)(b+0x38)+*(int *)(b+0x34)*2+2)=x; a=v[2]; x=(unsigned short)func_0013E9DB(a); b=*p; *(unsigned short *)(*(int *)(b+0x38)+*(int *)(b+0x34)*2+4)=x; c=*p; *(int *)(c+0x34)=*(int *)(c+0x34)+3; }

void func_0011A300(undefined4 param_1, undefined4 *param_2)
{
  int func_00131A10(...);
  int func_00125E80(...);
  char cVar1;
  
  cVar1 = func_00131A10(*param_2);
  if (cVar1 != '\0') {
    func_00125E80(*param_2,param_1);
  }
  return;
}

void func_0011A330(int param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  int iVar1;
  
  iVar1 = func_0013E9DB(*param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
  }
  return;
}

int func_0013E9DB(int);
float func_0013E9E0(int);
int func_0010F750(int, int, int);
int func_0011B820(int);
int func_0011BF40(int, int);
extern int D_003268B0;
void func_0011A350(int a, int *b) { if (func_0013E9DB(*b)) *(unsigned int *)(a + 0x14) |= 4; }

void func_0011A450(int param_1)
{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

int func_0011A470(int p) { int index=*(int *)(p+0xc)+1; int *array=*(int **)(p+0x10); *(int *)(p+0xc)=index; int item=*(int *)((char *)array+index*0xb8-0xb8); int field=*(int *)(p+8); return *(int *)(*(int *)(item+0x48)+field*4-4); }

void func_0011A4A0(int a, int *b) { int n=func_0013E9DB(*b); float *p=(float *)(a+n*12); p[0]=func_0013E9E0(b[1]); p[1]=func_0013E9E0(b[2]); p[2]=func_0013E9E0(b[3]); }

int func_0011A4F0(int a, int b, int c) { int p=func_0010F750(a,D_003268B0,0x140); switch(c) { case 3: *(int *)(p+0xe0)=func_0011B820(b); *(unsigned char *)(p+0x21)|=0x40; break; case 2: *(int *)(p+0xe0)=func_0011BF40(b,1); break; case 1: *(int *)(p+0xe0)=func_0011BF40(b,0); } return p; }

void _func_0011A570(int p) { int _func_0011BAE0(...); int _func_0011B990(...); if (*(unsigned char *)(p+0x21)&0x40) _func_0011BAE0(*(int *)(p+0xe0)); else _func_0011B990(*(int *)(p+0xe0)); }

void func_0011A5A0(int *p) { int func_0011BB00(...); func_0011BB00(*(int *)((char *)p+0xe0)); *(volatile unsigned char *)((char *)p+0x21) |= 0x40; }

void _func_0011A5C0(int p, undefined4 a) { int _func_0011BC10(...); _func_0011BC10(*(undefined4 *)(p+0xe0),a); *(volatile unsigned char *)(p+0x21) |= 0x40; }

void _func_0011A5E0(int p, undefined4 a) { int _func_0011BCA0(...); _func_0011BCA0(*(undefined4 *)(p+0xe0),a); *(unsigned char *)(p+0x21) &= 0xbf; }

void func_0011A6A0(char on) { extern unsigned char D_003268C4; extern float D_0032923C; extern float D_003268CC; extern float D_003268C8; if(on) { if(D_003268C4==0) { D_003268C4=1; D_003268CC=D_0032923C; D_003268C8=0; return; } } else if(D_003268C4==1) { D_003268C4=0; D_003268C8=D_0032923C-D_003268CC; D_003268CC=0; } }

void func_0011AF30(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  return;
}

void func_0011AF40(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return;
}

void func_0011AF50(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xec) = param_2;
  return;
}

void func_0011AF60(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0xf0) = param_2;
  return;
}

void func_0011AF70(int param_1, undefined4 param_2)
{
  *(undefined4 *)(param_1 + 0x124) = param_2;
  return;
}

extern int _func_0011BDD0(void *, int);
extern unsigned char _func_00110930(unsigned int, unsigned int, void *, unsigned int);
unsigned char _func_0011AFD0(void *p, unsigned int a, unsigned int b, unsigned int c)
{
    unsigned char result = 0;
    void *state = (void *)_func_0011BDD0(*(void **)((char *)p + 0xe0), 0);
    if (state != 0) {
        void *data = *(void **)((char *)state + 0xc);
        if (data != 0)
            result = _func_00110930(a, b, data, c);
        --*(short *)((char *)*(void **)((char *)p + 0xe0) + 0x2a);
    }
    return result;
}

