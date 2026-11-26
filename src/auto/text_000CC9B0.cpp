/* 9 functions from 0x000CC9B0 to 0x000CD095, found by Ghidra. */
#include "common.h"
#include "string.h"

void _func_000CC9B0(void)
{
  extern int D_0031AC58, D_00308158, D_00318D14, D_00318D10, D_0031AC78, D_002EB020, D_0031A9CC, D_0031A9D0, D_0031A9D8, D_0031A9C8, D_00307DF8;
  extern unsigned char D_001DAA94, D_00318D1C, D_00318E30, D_0031A9B4, D_0031A9E0, D_0031AA18, D_0031AA40, D_001DAA80;
  extern float* func_0009C7A0(int, void*, int);
  extern void func_00110330(int, int);
  extern void func_00116FB0(int);
  extern void func_0005CCC0(int);
  extern void func_0002DF20(int);
  extern void func_000A2EE0(void*);
  extern void func_0009D280(int);
  extern void func_001033A0(int);
  extern void func_00100C30(int);
  extern int func_00103210(void*, int);
  extern void func_00103990(int);
  D_0031AC58 = 0;
  float* p = func_0009C7A0(D_00308158, &D_001DAA94, 0);
  if (p) {
    unsigned f = (unsigned)*p;
    if (D_00318D1C != 0) f |= 1;
    if (D_00318E30 != 0) f |= 2;
    if (D_0031A9B4 != 0) f |= 4;
    if (D_0031A9E0 != 0) f |= 8;
    *p = (float)f;
  }
  func_00110330(*(int*)(D_00318D14 + 0x2c), 1);
  func_00110330(*(int*)(D_00318D10 + 0x2c), 0);
  D_0031AC78 = D_002EB020;
  if (D_0031A9CC != 0) func_00116FB0(D_0031A9CC);
  D_0031A9CC = 0;
  D_0031A9D0 = 0;
  D_0031A9D8 = 0;
  D_0031A9C8 = 0;
  func_0005CCC0(1);
  func_0002DF20(D_00307DF8);
  func_000A2EE0(&D_0031AA18);
  func_000A2EE0(&D_0031AA40);
  func_0009D280(D_00307DF8);
  func_00110330(*(int*)(D_00307DF8 + 0x2c), 1);
  func_001033A0(0);
  func_00100C30(0x3f800000);
  func_00103990(func_00103210(&D_001DAA80, 1));
}

char _func_000CCB10(int param) { extern int D_001DAAA0; extern int func_0013F2E9(int, int*); int p; if (param != 0 && (p=*(int*)(param+0x7c)) != 0 && func_0013F2E9(*(int*)(p+0xc),&D_001DAAA0) == 0) return 0; return 1; }

void func_000CCB40(void)
{
  extern unsigned char D_00318D1D, D_00318D1C, D_00318E31, D_00318E30, D_0031A9E1, D_0031A9E0, D_0031A9B5, D_0031A9B4;
  extern int D_00318D14, D_00318D10;
  extern char D_001DAAE4, D_001DAAD8, D_001DAACC, D_001DAAC0, D_001DAAB4;
  int func_001031C0(...); int func_00103990(...); int func_00110300(...); int func_00110330(int, unsigned char);

  if ((D_00318D1D == 0 & D_00318D1C) != 0) {
    D_00318D1D = 1;
    func_00103990(func_001031C0(D_00318D14, &D_001DAAE4), 0);
  }
  if ((D_00318E31 == 0 & D_00318E30) != 0) {
    D_00318E31 = 1;
    func_00103990(func_001031C0(D_00318D14, &D_001DAAE4), 0);
  }
  if ((D_0031A9E1 == 0 & D_0031A9E0) != 0) {
    D_0031A9E1 = 1;
    func_00103990(func_001031C0(D_00318D14, &D_001DAAE4), 0);
  }
  if ((D_0031A9B5 == 0 & D_0031A9B4) != 0) {
    D_0031A9B5 = 1;
    func_00103990(func_001031C0(D_00318D14, &D_001DAAE4), 0);
  }
  func_00110330(func_00110300(*(int *)(D_00318D10 + 0x2c), &D_001DAAD8, 0), D_00318D1C);
  func_00110330(func_00110300(*(int *)(D_00318D10 + 0x2c), &D_001DAACC, 0), D_00318E30);
  func_00110330(func_00110300(*(int *)(D_00318D10 + 0x2c), &D_001DAAC0, 0), D_0031A9E0);
  func_00110330(func_00110300(*(int *)(D_00318D10 + 0x2c), &D_001DAAB4, 0), D_0031A9B4);
}

void func_000CCCE0(void) {
    extern char D_0031A9E4;
    D_0031A9E4 = 0;
}

void _func_000CCCF0(int object) { extern int func_00110060(int, void*); extern void func_0012EA60(unsigned int*); extern void func_0012F7A0(int*, void*); extern void func_00068DA0(void*, unsigned int*, int*); extern void func_001105E0(int, void*, int); extern char D_0031A9E4; extern void func_00012D60(int, int); __declspec(align(16)) unsigned char area[0x5c]; unsigned int* matrix=(unsigned int*)area; int* pos=(int*)(area+0x14); unsigned char* buffer=area+0x18; func_00110060(*(int*)(object+0x2c),buffer); matrix[0]=0x3f800000; matrix[1]=0x3f800000; matrix[2]=0; matrix[3]=0x3e19999a; func_0012EA60(matrix); pos[0]=*(int*)(object+0x40); pos[1]=*(int*)(object+0x44); pos[2]=*(int*)(object+0x48); func_0012F7A0(pos,buffer); func_00068DA0(buffer,matrix,pos); func_001105E0(*(int*)(object+0x2c),buffer,0); if (D_0031A9E4) func_00012D60(object,0); }

void func_000CCDA0(void) {
    int func_000B6510(...);
    func_000B6510(7, 0);
}

#pragma optimize("y", on)
void func_000CCDB0()
{
 int func_0009C590(...),func_0012F120(...),func_001105E0(...),func_00110000(...),func_000CB7B0(...),func_000CC190(...),func_000CAC40(...),func_000CAB50(...),func_000CB540(...);
 float* func_0009C7A0(int,void*,int);
 void func_00116130(int,float);
 extern char D_001DAB0C,D_001DAAF8;extern unsigned char D_001DAA94;
 extern int D_00318D10,D_00318D14,D_001E4A3C,D_0031A950,D_0031765C,D_00317644,D_0031A9BC,D_0031AC54,D_0031AC4C,D_00308158,D_0031A9EC;
 extern char D_00318D1D,D_00318E31,D_0031A9E1,D_0031A9B5,D_0031AC48,D_0031AC49,D_0031AC4A,D_0031AC4B,D_001E4F18,D_001E4B50;
 extern float D_0031AA08,D_0031AC68,D_0031AC58,D_0031A9D8,D_001D27F4,D_001D27B8,D_001D27B0,D_001D27FC;
 extern int D_001E4ADC,D_001E4AC8,D_001E4AC0,D_001E4AE8,D_001E4AC4,D_001E4AE0,D_001E4AD4,D_001E4AE4,D_001E4ACC,D_001E4AF4,D_001E4AD0,D_001E4AEC,D_001E4AF0,D_001E4AD8,D_001E4AA4,D_001E4A90,D_001E4A88,D_001E4AB0,D_001E4A8C,D_001E4AA8,D_001E4A9C,D_001E4AAC,D_001E4A94,D_001E4ABC,D_001E4A98,D_001E4AB4,D_001E4AB8,D_001E4AA0;
 __declspec(align(16)) int matrix[16];
 memset(&D_00318D10,0,0x1d60);
 D_00318D10=func_0009C590(&D_001DAB0C);D_00318D14=func_0009C590(&D_001DAAF8);
 D_0031AA08=0;D_0031AC68=1.0f;D_001E4A3C=4;D_0031AC58=1.0f;D_0031A950=1;
 D_0031765C=0;D_00317644=0;
 func_0012F120(matrix);func_001105E0(*(int*)(D_00318D10+44),matrix,1);func_00110000(*(int*)(D_00318D10+44));
 D_001E4ADC=D_001E4AA4;
D_001E4AC8=D_001E4A90;
D_001E4AC0=D_001E4A88;
D_001E4AE8=D_001E4AB0;
D_001E4AC4=D_001E4A8C;
D_001E4AE0=D_001E4AA8;
D_001E4AD4=D_001E4A9C;
D_001E4AE4=D_001E4AAC;
D_001E4ACC=D_001E4A94;
D_001E4AF4=D_001E4ABC;
D_001E4AD0=D_001E4A98;

 D_00318D1D=0;D_00318E31=0;D_0031A9E1=0;D_0031A9B5=0;
 D_001E4AEC=D_001E4AB4;D_001E4AF0=D_001E4AB8;D_001E4AD8=D_001E4AA0;
 memcpy(&D_001E4B50,&D_001E4F18,0x3c8);
 D_0031A9BC=-1;D_0031AC54=0;D_0031AC4C=0;D_0031AC48=0;D_0031AC49=0;D_0031AC4A=0;D_0031AC4B=0;
 func_000CB7B0();func_000CC190();func_000CAC40();func_000CAB50();
 float* p=func_0009C7A0(D_00308158,&D_001DAA94,0);
 if(p){
  unsigned int flags=(unsigned int)*p;
  unsigned char third=(flags>>3)&1;
  unsigned char second=(flags>>1)&1;
  if(second)func_000CB540();
  if(third)D_0031A9D8=0.99f;
  float raw=D_001D27F4-D_0031A9D8;
  double v;
  if(raw<D_001D27B8)v=D_001D27B8;
  else if(raw>D_001D27B0)v=D_001D27B0;
  else v=raw;
  func_00116130(D_0031A9EC,v*D_001D27FC);
 }
}
#pragma optimize("", on)

void func_000CD000(void) {
    extern int D_0031A9EC;
    int func_001160B0(...);
    func_001160B0(D_0031A9EC);
    D_0031A9EC = 0;
}

long double _func_000CD020(int unused, float x, float y) { extern int D_00317264; extern float D_00317668; extern float D_00316D60[]; extern long double func_00131220(long double); int best=-1, i=0; long double closest=1e7; if (D_00317264 > 0) { float* p=&D_00317668; do { long double dx=(long double)p[-1]-(long double)x; long double dy=(long double)*p-(long double)y; long double dist=func_00131220(dx*dx+dy*dy); if (dist < closest) { closest=dist; best=i; } ++i; p+=3; } while(i<D_00317264); } return D_00316D60[best]; }

