/* 29 functions from 0x001154A0 to 0x00116490, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001154A0(int param_1,int param_2,int param_3) { int func_00115E10(...); int func_0011BF40(...); int func_0011B820(...); int s=func_00115E10(param_1,0x40); switch(param_3){case 3:*(int*)(s+0x30)=func_0011B820(param_2);*(int*)(s+0x14)|=1;break;case 2:*(int*)(s+0x30)=func_0011BF40(param_2,1);break;case 1:*(int*)(s+0x30)=func_0011BF40(param_2,0);break;} }

int func_00115510(int param_1) { int func_0011BDD0(...); extern int D_0000FFFF; int ebx=param_1; int edi=func_0011BDD0(*(int*)(ebx+0x30),0); int result=(int)&D_0000FFFF; if(edi){unsigned short n=*(unsigned short*)(edi+2);if(n){int *p=*(int**)(edi+0xc);unsigned int i=0;if(n){do{if(*p)break;i++;p++;}while(i<n);}if(i==n){short *s=(short*)(*(int*)(ebx+0x30)+0x2a);--*s;return result;}result=*(unsigned short*)(edi+6)-1;}short *s=(short*)(*(int*)(ebx+0x30)+0x2a);--*s;}return result;}

void func_00115570(int param_1) { int func_0013AF50(...);int func_0013AF70(...);int func_0011C3E0(...);int func_0011BAE0(...);int func_0011B990(...);extern int _D_0032615C;func_0013AF50(_D_0032615C);int edi=param_1;int eax=*(int*)(edi+0x34);if(eax){int esi;do{esi=*(int*)(eax+8);int x=*(int*)(esi+0x28);if(x){func_0011C3E0((char*)esi+0x1c);*(int*)(esi+0x28)=0;}eax=*(int*)(edi+0x34);}while(eax);func_0013AF70(_D_0032615C);}if(*(unsigned char*)(edi+0x14)&1)func_0011BAE0(*(int*)(edi+0x30));else func_0011B990(*(int*)(edi+0x30));}

void func_001156D0(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x20) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

void func_00115AB0(undefined4 param_1, undefined4 param_2)
{
  int func_00115DE0(...);
  extern undefined4 D_0032616C;
  int iVar1;
  
  iVar1 = func_00115DE0(D_0032616C,0x24);
  *(undefined4 *)(iVar1 + 0x1c) = param_1;
  *(undefined4 *)(iVar1 + 0x20) = param_2;
  return;
}

static int D_0032678A;
static int D_0032678B;
void _func_00115AD0(void) {
    D_0032678A = 0;
}

void _func_00115D60(void) {
    D_0032678B = 0;
}

void func_00115DD0(int param_1)
{
  extern undefined D_00326188;
  (((undefined *)&D_00326188))[param_1 * 0x18] = 0;
  return;
}

void func_00115DE0(undefined2 param_1, undefined4 param_2)
{
  int func_00116A90(...);
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)func_00116A90(param_2,1,1);
  *puVar1 = param_1;
  *(undefined2 **)(puVar1 + 2) = puVar1 + 8;
  *(undefined2 **)(puVar1 + 10) = puVar1 + 2;
  return;
}

void _func_00115E10(int param_1, unsigned int param_2, void *param_3, unsigned int param_4) {
    extern void func_00116A90(...);
    extern void func_0011C3B0(...);
    
    *(unsigned int *)(param_1 + 0x10) = param_2;
    func_00116A90(param_3, param_4);
}

int __stdcall _func_00115E40(int a1) { return a1; }

unsigned char __cdecl _func_00115E70(unsigned short *arg)
{
  extern unsigned char D_00326190[];
  unsigned short index = *arg;
  unsigned char (__cdecl *callback)(unsigned short *) = *(unsigned char (__cdecl **)(unsigned short *))(D_00326190 + (unsigned int)index * 24);
  if (callback != 0) return callback(arg);
  return 0;
}

unsigned char __cdecl _func_00115E90(unsigned short *arg)
{
  extern unsigned char D_0032618C[];
  unsigned short index = *arg;
  unsigned char (__cdecl *callback)(unsigned short *) = *(unsigned char (__cdecl **)(unsigned short *))(D_0032618C + (unsigned int)index * 24);
  if (callback != 0) return callback(arg);
  return 0;
}

void func_00115EB0(int param_1, undefined4 param_2, undefined *param_3, undefined *param_4, undefined4 param_5, undefined4 param_6)
{
  extern undefined D_0000FFFF;
  extern undefined D_00326194;
  extern undefined4 D_0032923C;
  int func_0011C3E0(...);
  int func_0011C3B0(...);
  undefined2 uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(short *)(param_1 + 0x18) = (short)param_3;
  if ((param_3 == ((undefined *)&D_0000FFFF)) &&
     (*(code **)(((undefined *)&D_00326194) + (uint)**(ushort **)(param_1 + 0xc) * 0x18) != (code *)0x0)) {
    uVar1 = (**(code **)(((undefined *)&D_00326194) + (uint)**(ushort **)(param_1 + 0xc) * 0x18))(param_1);
    *(undefined2 *)(param_1 + 0x18) = uVar1;
  }
  *(short *)(param_1 + 0x1a) = (short)param_4;
  if ((param_4 == ((undefined *)&D_0000FFFF)) &&
     (*(code **)(((undefined *)&D_00326194) + (uint)**(ushort **)(param_1 + 0xc) * 0x18) != (code *)0x0)) {
    uVar1 = (**(code **)(((undefined *)&D_00326194) + (uint)**(ushort **)(param_1 + 0xc) * 0x18))(param_1);
    *(undefined2 *)(param_1 + 0x1a) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 0x20) = D_0032923C;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = D_0032923C;
  *(undefined4 *)(param_1 + 0x2c) = param_6;
  func_0011C3E0(param_1);
  func_0011C3B0(*(int *)(param_1 + 0xc) + 4,param_1,param_1);
  return;
}

int __stdcall _func_00115F60(int a1) { return a1; }

extern "C" void func_00116FB0(void*);
extern "C" void func_0011C3E0(void*);
extern "C" void func_0011C3B0(void*, void*, void*);
extern "C" void* func_00116A90(unsigned int, int, int);
extern void* _D_0032619C[];
extern void* _D_00326198[];
extern float _D_001D27B8;
extern float _D_001D27B0;
extern float _D_0032923C;
extern void* _D_0032619C[]; void _func_001160B0(unsigned short* p) { void (*f)(void*)=(void(*)(void*))_D_0032619C[p[0]*6]; if(f) f(p); func_00116FB0(p); }

void func_001160E0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  int func_00115EB0(...);
  func_00115EB0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),param_2,param_3,param_4,param_5,0);
  return;
}

void _func_00116110(void *obj, int flag) { int _func_00115F60(...); _func_00115F60(*(void **)(*(char **) ((char *)obj + 4) + 8), flag); }

void _func_00116130(void *obj) { 
    int func_00115FC0(...);
    int a = *(int *)((char*)obj + 4);
    int b = *(int *)(a + 8);
    *(int *)obj = b;
    func_00115FC0(obj);
}

void func_00116150(void) {
    extern int D_00326788;
    D_00326788 = 0;
}

void _func_00116160(unsigned short* p) { unsigned char* b=(unsigned char*)p; unsigned char* e=b+0x10; unsigned char* it=*(unsigned char**)(b+4); while(it!=e){void* x=*(void**)(it+8); unsigned short* y=*(unsigned short**)((char*)x+0xc); void(*f)(void*)=(void(*)(void*))_D_00326198[y[0]*3]; if(f)f(x); func_0011C3E0(x);func_00116FB0(x);it=*(unsigned char**)(b+4);} void(*f)(void*)=(void(*)(void*))_D_0032619C[p[0]*3];if(f)f(p);func_00116FB0(p); }

void func_00116480(int a0) {
    int func_001161D0(...);
    func_001161D0(a0, 0);
}
extern int D_0032615C;
extern int D_00326198;
extern float D_001D27B8;
extern float D_0032923C;
extern int D_0000FFFF;
