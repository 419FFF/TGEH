/* 6 functions from 0x0003EA60 to 0x0003F98C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_0003EA60(int unused, int object) { extern int func_000A1F50(int); extern void func_00110330(int, int); extern void func_000A1D10(int, int, int, int, int, int); switch (*(int*)(object + 0x310)) { case 0: if (func_000A1F50(*(int*)(object + 0x25c)) == 0) { func_00110330(*(int*)(object + 0x210), 1); int* p = *(int**)(object + 0x300); func_000A1D10(*(int*)(object + 0x25c), 1, p[0], p[1], p[2], 0); *(int*)(object + 0x310) = 1; } break; case 1: if (func_000A1F50(*(int*)(object + 0x25c)) == 0) { *(int*)object = 2; *(unsigned char*)(object + 0x1ac) = 1; } break; } }

void func_0003EAF0(undefined4 param_1, int param_2)
{
  int func_000A1D10(...);
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x304);
  func_000A1D10(*(undefined4 *)(param_2 + 0x260),1,*puVar1,puVar1[1],puVar1[2],0);
  *(undefined4 *)(param_2 + 0x314) = 0;
  *(undefined1 *)(param_2 + 0x1ac) = 0;
  return;
}

void _func_0003EB30(int unused, int object) { extern int func_000A1F50(int); extern void func_00110330(int, int); extern void func_000A1D10(int, int, int, int, int, int); switch (*(int*)(object + 0x314)) { case 0: if (func_000A1F50(*(int*)(object + 0x260)) == 0) { func_00110330(*(int*)(object + 0x210), 0); int* p = *(int**)(object + 0x308); func_000A1D10(*(int*)(object + 0x260), 1, p[0], p[1], p[2], 0); *(int*)(object + 0x314) = 1; } break; case 1: if (func_000A1F50(*(int*)(object + 0x260)) == 0) *(int*)object = *(int*)(object + 0x318); break; } }

void _func_0003EBB0(int unused, int object) { extern int D_0000FFFF; extern unsigned char D_002EF4DD; extern void func_000A1D10(int, int, int, void*, int, int); func_000A1D10(*(int*)(object + 0x2b4), 1, 0, &D_0000FFFF, 0x41c00000, 0x3e4ccccd); *(int*)(object + 0x310) = 0; *(int*)(object + 0x314) = 0; *(int*)(object + 0x318) = 0; D_002EF4DD = 0; }

#pragma optimize("y", off)
extern int _D_00311548;
extern float _D_001D31CC;
extern float __cdecl func_000A1EE0(int);
extern int __cdecl func_000A1F50(int);
extern void __cdecl func_00110330(int,int);
extern void __cdecl func_000860B0(void);
#pragma optimize("y", off)
extern int _D_00307DF8;
extern char _D_001D486C;
extern char _D_001D4858;
extern int __cdecl func_001031C0(int,const void*);
extern int __cdecl func_00103130(int);
extern int __cdecl func_00102E80(int);
extern int __cdecl func_00103990(int,int);
#pragma optimize("y", off)
void func_0003EC00(unsigned char *a, unsigned char *p) { volatile char local[0x214]; int state=*(int*)(p+0x310); if(state==0){if(a[0x174]){_D_00311548=0;func_000860B0();}} if(state==1){int x=*(int*)(p+0x214);if((*(unsigned char*)(x+0x20)&1)==0&&func_000A1EE0(*(int*)(p+0x2b8))<_D_001D31CC){func_00110330(x,0);func_00110330(*(int*)(p+0x218),0);}if(a[0x174]){_D_00311548=0;func_000860B0();func_00110330(x,0);func_00110330(*(int*)(p+0x218),0);int q=func_001031C0(_D_00307DF8,&_D_001D486C);if(!func_00103130(q)){func_00102E80(q);q=func_001031C0(_D_00307DF8,&_D_001D4858);if(q)func_00103990(q,0);}}}if(state==2&&!func_000A1F50(*(int*)(p+0x2b8)))*(int*)p=2;local[29]=0;}
#pragma optimize("", on)
