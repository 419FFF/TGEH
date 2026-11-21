/* 6 functions from 0x0009E450 to 0x0009F36F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct SortEnt { char pad[0x54]; short idx; };
struct ActorObj { char pad[0xe0]; int h; char pad2[0x284 - 0xe4]; char flag; };

#pragma optimize("y", off)
extern void* func_0011BDD0(void*, int); extern int D_00307D18; extern void* func_001053E0(int, int); unsigned int func_0009E450(unsigned int a, unsigned int b, char* c, int d, unsigned int e) { volatile unsigned char q[500]; unsigned int i; void* x=func_0011BDD0((void*)b,1); for(i=0;i<500;i++)q[i]=0; x=func_001053E0(d,D_00307D18); return (unsigned int)x+a+e; }

#pragma optimize("y", on)
extern unsigned D_003104B4, D_00308158, D_0030C498, D_00324AF8;
extern void* D_003104B0;
extern char D_001D74E0, D_001D29C7;
extern SortEnt* D_0030C630[];
extern SortEnt* D_00308160[];
extern ActorObj* D_00324968[];
extern "C" void* memcpy(void*, const void*, unsigned);
#pragma intrinsic(memcpy)
void func_00117100(void);
void* func_00105380(int);
void func_00117130(void);
void func_000688D0(void);
void func_001319B0(char*, int);
void func_00131990(char*);
int func_0011BF40(int, int);
void func_000EBA80(int);
unsigned int func_0009E450(unsigned int, unsigned int, char*, int, unsigned int);
void func_000EBAE0(void);
void func_0013E700(void*, unsigned, int, int (*)(const void*, const void*));
int func_0009C2E0(const void*, const void*);
void func_00110330(int, int);
void func_0009C300(void);
void func_001053A0(void*);
extern int D_00313B54; extern char D_003104D8[]; extern int D_001D74D4, D_001D32D8, D_001E39B0[]; extern float D_001D27B8;
void func_000A4260(int); void func_000A4120(int); int* func_0009C7A0(...); void func_00027C80(void*); void func_000A40A0(int, int); void func_000A40E0(int); void func_000A2D70(void);
void _func_0009EEA0(int a)
{
  char buf[128];
  D_003104B4 = 0;
  D_00308158 = 0;
  D_0030C498 = 0;
  func_00117100();
  D_003104B0 = func_00105380(0x800);
  func_00117130();
  func_000688D0();
  func_001319B0(buf, 0x80);
  func_00131990(&D_001D74E0);
  int r = func_0011BF40(a, 0);
  func_00131990(buf);
  func_000688D0();
  func_000EBA80(0x5dc);
  func_0009E450(0, r, &D_001D29C7, 0, 0);
  func_000EBAE0();
  unsigned n = 0, i;
  for (i = 0; i < D_003104B4; i++) {
    D_0030C630[n] = D_0030C630[i];
    D_0030C630[n]->idx = (short)n;
    if (D_0030C630[n] != 0) n++;
  }
  D_003104B4 = n;
  memcpy(D_00308160, D_0030C630, n * 4);
  func_0013E700(D_00308160, n, 4, func_0009C2E0);
  if (D_00324AF8 > 1) {
    for (i = 0; i < D_00324AF8; i++) {
      if (D_00324968[i]->flag == 0) func_00110330(D_00324968[i]->h, 0);
    }
  }
  func_0009C300();
  func_001053A0(D_003104B0);
}

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
