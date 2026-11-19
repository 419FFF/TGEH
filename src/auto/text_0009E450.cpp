/* 6 functions from 0x0009E450 to 0x0009F36F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct SortEnt { char pad[0x54]; short idx; };
struct ActorObj { char pad[0xe0]; int h; char pad2[0x284 - 0xe4]; char flag; };

#pragma optimize("y", off)
extern void* func_0011BDD0(void*, int); extern int D_00307D18; extern void* func_001053E0(int, int); unsigned int func_0009E450(unsigned int a, unsigned int b, char* c, int d, unsigned int e) { volatile unsigned char q[500]; unsigned int i; void* x=func_0011BDD0((void*)b,1); for(i=0;i<500;i++)q[i]=0; x=func_001053E0(d,D_00307D18); return (unsigned int)x+a+e; }

void _func_0009F010(void){extern unsigned int D_003104B8,D_00311520;extern unsigned short D_00310774,D_00310A28,D_00310CDC,D_00310F90,D_00311244,D_003114F8,D_00311518;extern unsigned char D_0031151D,D_0031151C,D_00311513,D_00311514,D_0031151A,D_0031151B,D_00311515,D_00311516;extern unsigned short D_00313A78,D_00313A7A;unsigned int *p=&D_003104B8;for(int i=0;i<0x41b;i++)p[i]=0;D_00310774=3;D_00310A28=3;D_00310CDC=3;D_00310F90=3;D_00311244=3;D_003114F8=3;D_0031151D=9;D_0031151C=9;D_00311513=0;D_00311514=0;D_00311520=7;D_0031151A=(char)D_00313A78;D_0031151B=(char)D_00313A7A;D_00311515=0;D_00311516=0;}

void _func_0009F0C0(unsigned int *p){extern unsigned int D_00313BAC,D_003104B8;extern unsigned char D_0031151A,D_0031151B,D_00311515,D_00311516,D_00311512,D_0031151D,D_0031151C;extern unsigned short D_00311518,D_00313A78,D_00313A7A;extern int func_00136F90(...);unsigned int *d=&D_003104B8;for(int i=0;i<0x41b;i++)d[i]=p[i];unsigned int a=D_00313BAC;D_0031151A=*(char*)(a+0x1062);D_0031151B=*(char*)(a+0x1063);D_00311518=*(short*)(a+0x1060);D_00311515=*(char*)(a+0x105d);D_00311516=*(char*)(a+0x105e);D_00311512=0;func_00136F90((short)D_00311515,(short)D_00311516);D_0031151C=D_0031151D;D_00313A78=(short)(char)D_0031151A;D_00313A7A=(short)(char)D_0031151B;}

#pragma optimize("", on)
void func_0009F160(void)
{
  extern undefined4 D_00313BAC;
  extern undefined D_00313A78;
  extern undefined D_00313A7A;
  extern undefined4 D_00311518;
  extern undefined D_00311515;
  extern undefined D_00311516;
  *(undefined1 *)(D_00313BAC + 0x1062) = D_00313A78;
  *(undefined1 *)(D_00313BAC + 0x1063) = D_00313A7A;
  *(undefined2 *)(D_00313BAC + 0x1060) = D_00311518;
  *(undefined1 *)(D_00313BAC + 0x105d) = D_00311515;
  *(undefined1 *)(D_00313BAC + 0x105e) = D_00311516;
  return;
}
