/* 11 functions from 0x000727F0 to 0x000737EF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)

void func_000727F0(void){volatile char local[0x200]; local[0]=0;}

bool func_000730B0(void)
{
    struct Axis { char pad[0x10]; short value; char pad2[6]; };
    struct Pad { char pad[0x10]; Axis *axes; };
    extern int D_00313A94, D_00313ABC, D_00313B58, D_00313B24, D_002FA36C;
    void func_0009A1E0(void);
    Pad *func_000B06B0(void);
    void func_00133F30(int *);
    void func_0011E4A0(float, float, float, float, int *, int *, int, float);
    int scale[2];
    int pos[2];
    int state[21];
    Axis *axes;
    int i;
    pos[0] = 0;
    pos[1] = 0;
    scale[0] = 0x3f800000;
    scale[1] = 0x3f800000;
    func_0009A1E0();
    axes = func_000B06B0()->axes;
    if (axes[D_00313A94].value != 0 || axes[D_00313ABC].value != 0 ||
        axes[D_00313B58].value != 0 || axes[D_00313B24].value != 0)
        return true;
    for (i = 0; i < 21; i++)
        state[i] = 0;
    state[0] = 1;
    state[1] = 1;
    state[10] = 4;
    state[11] = 5;
    state[2] = D_002FA36C;
    state[19] = 6;
    func_00133F30(state);
    func_0011E4A0(352.0f, 0.0f, 608.0f, 256.0f, pos, scale, 0, 0.5f);
    return false;
}

void func_000731B0(void)
{
    extern int _D_001D5FD0, _D_002FA370, _D_002FA36C;
    extern int __cdecl func_0011BF40(int,int);
    extern int __cdecl func_0011BDD0(int,int);
    int v=func_0011BF40((int)&_D_001D5FD0,0);
    _D_002FA370=v;
    _D_002FA36C=func_0011BDD0(v,0);
}

void func_000731E0(void)
{
  extern undefined4 D_002FA370;
  int func_0011B990(...);
  *(short *)(D_002FA370 + 0x2a) = *(short *)(D_002FA370 + 0x2a) + -1;
  func_0011B990(D_002FA370);
  return;
}

void func_00073200(void){extern short _D_00313A78;extern float _D_001D29E0;extern int _D_001D5FEC;extern void __cdecl func_0013BA90(float);extern void __cdecl func_000ECEE0(int,int,int,int);extern bool func_000730B0(void);extern int func_000705A0(void);extern void __cdecl func_00070560(int); double x=(double)(short)_D_00313A78*(double)(float)_D_001D29E0;func_0013BA90((float)x);func_000ECEE0((int)&_D_001D5FEC,0,0,(int)func_000730B0);func_00070560(func_000705A0());func_0013BA90(1.0f);}

char func_00073250(void) {
    extern char D_002FA5B4;
    return D_002FA5B4;
}

void func_000733C0(void)
{
  extern undefined D_002FA380;
  int func_00116FB0(...);
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)((undefined *)&D_002FA380);
LAB_00002b9a:
  puVar1 = (undefined4 *)*puVar4;
  puVar3 = puVar1;
  do {
    pcVar2 = (char *)*puVar3;
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 == '-') break;
      func_00116FB0(pcVar2);
    }
    puVar3 = puVar3 + 3;
  } while( true );
  func_00116FB0(*puVar3);
  func_00116FB0(puVar1);
  puVar4 = puVar4 + 1;
  if (0x41e7 < (int)puVar4) {
    return;
  }
  goto LAB_00002b9a;
}

void __fastcall func_00073410(char *src,int *dst){extern void __cdecl func_00116FB0(int);extern char *__cdecl func_00116A90(int,int,int);int n=0;char *out; if(*dst)func_00116FB0(*dst);while(src[n])n++;out=func_00116A90(n+1,1,1);*dst=(int)out;for(;;){char c=*src++;*out++=c;if(!c)break;}}

