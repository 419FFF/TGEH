/* 13 functions from 0x000A81E0 to 0x000A90E1, found by Ghidra. */
#include "common.h"
struct A8AC0Vector { float x, y, z; };
union A8AC0Work {
 struct { float time; float up[3]; float cross[3]; float tangent[4]; float position[4]; } basis;
 int pointer;
};
#include "ghidra.h"

void func_000A81E0(void)
{
  int func_000F93A0(...);
  int func_000F91D0(...);
  int func_000F7EF0(...);
  extern undefined D_001D7928;
  extern undefined D_001D7A54;
  extern undefined D_001D7A44;
  extern undefined D_001D72DC;
  extern undefined D_001D7990;
  extern undefined D_001D79EC;
  extern undefined D_001D7A3C;
  extern undefined D_001D7A34;
  extern undefined D_001D7A28;
  extern undefined D_001D7A1C;
  extern undefined D_001D7A10;
  extern undefined D_001D7A04;
  extern undefined D_001D7960;
  extern undefined D_001D7968;
  extern undefined D_001D79C8;

  func_000F93A0(((undefined *)&D_001D7A54), ((undefined *)&D_001D7928));
  func_000F93A0(((undefined *)&D_001D7A54), ((undefined *)&D_001D7A44));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A54)), func_000F91D0(((undefined *)&D_001D72DC)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A54)), func_000F91D0(((undefined *)&D_001D7990)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A54)), func_000F91D0(((undefined *)&D_001D79EC)));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7A3C));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7A28));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7A1C));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7A10));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7A04));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7960));
  func_000F93A0(((undefined *)&D_001D7A34), ((undefined *)&D_001D7990));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A34)), func_000F91D0(((undefined *)&D_001D7968)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A34)), func_000F91D0(((undefined *)&D_001D79C8)));
  func_000F7EF0(func_000F91D0(((undefined *)&D_001D7A34)), func_000F91D0(((undefined *)&D_001D79EC)));
}

void func_000A8340(void)
{
  int func_000F93A0(...), func_000F91D0(...), func_000F7EF0(...);
  extern undefined D_001D7A64;
  extern undefined D_001D7A70;
  extern undefined D_001D7A5C;
  extern undefined D_001D7940;
  extern undefined D_001D79C8;
  extern undefined D_001D79EC;
  extern undefined D_001D7A1C;
  extern undefined D_001D7958;
  extern undefined D_001D7A10;
  func_000F93A0(&D_001D7A64,&D_001D7A70);
  func_000F93A0(&D_001D7A64,&D_001D7A5C);
  func_000F7EF0(func_000F91D0(&D_001D7A64),func_000F91D0(&D_001D7940));
  func_000F7EF0(func_000F91D0(&D_001D7A64),func_000F91D0(&D_001D79C8));
  func_000F7EF0(func_000F91D0(&D_001D7A64),func_000F91D0(&D_001D79EC));
  func_000F7EF0(func_000F91D0(&D_001D7A1C),func_000F91D0(&D_001D7940));
  func_000F7EF0(func_000F91D0(&D_001D7A1C),func_000F91D0(&D_001D79C8));
  func_000F7EF0(func_000F91D0(&D_001D7A1C),func_000F91D0(&D_001D79EC));
  func_000F7EF0(func_000F91D0(&D_001D7A1C),func_000F91D0(&D_001D7958));
  func_000F7EF0(func_000F91D0(&D_001D7A10),func_000F91D0(&D_001D7940));
  func_000F7EF0(func_000F91D0(&D_001D7A10),func_000F91D0(&D_001D79C8));
  func_000F7EF0(func_000F91D0(&D_001D7A10),func_000F91D0(&D_001D79EC));
  func_000F7EF0(func_000F91D0(&D_001D7A10),func_000F91D0(&D_001D7958));
}

void func_000A84D0(void) {
int func_000F93A0(...); int func_000F91D0(...); int func_000F7EF0(...);
extern char D_001D7928;
extern char D_001D7960;
extern char D_001D72DC;
extern char D_001D7988;
extern char D_001D79EC;
extern char D_001D7A98;
extern char D_001D7A8C;
extern char D_001D7968;
extern char D_001D7958;
extern char D_001D79C8;
extern char D_001D7A80;
extern char D_001D7940;
func_000F93A0(&D_001D7960,&D_001D7928);
func_000F7EF0(func_000F91D0(&D_001D7960), func_000F91D0(&D_001D72DC));
func_000F7EF0(func_000F91D0(&D_001D7960), func_000F91D0(&D_001D7988));
func_000F7EF0(func_000F91D0(&D_001D7960), func_000F91D0(&D_001D79EC));
func_000F93A0(&D_001D7A8C,&D_001D7A98);
func_000F7EF0(func_000F91D0(&D_001D7A8C), func_000F91D0(&D_001D7968));
func_000F7EF0(func_000F91D0(&D_001D7A8C), func_000F91D0(&D_001D7958));
func_000F7EF0(func_000F91D0(&D_001D7A8C), func_000F91D0(&D_001D79C8));
func_000F7EF0(func_000F91D0(&D_001D7A8C), func_000F91D0(&D_001D72DC));
func_000F7EF0(func_000F91D0(&D_001D7A8C), func_000F91D0(&D_001D79EC));
func_000F93A0(&D_001D7A80,&D_001D7A98);
func_000F7EF0(func_000F91D0(&D_001D7A80), func_000F91D0(&D_001D7940));
func_000F7EF0(func_000F91D0(&D_001D7A80), func_000F91D0(&D_001D7968));
func_000F7EF0(func_000F91D0(&D_001D7A80), func_000F91D0(&D_001D7958));
func_000F7EF0(func_000F91D0(&D_001D7A80), func_000F91D0(&D_001D79C8));
func_000F7EF0(func_000F91D0(&D_001D7A80), func_000F91D0(&D_001D72DC));
func_000F7EF0(func_000F91D0(&D_001D7A80), func_000F91D0(&D_001D79EC));
}

void _func_000A86D0(void)
{
  extern char D_001D7918, D_001D7AC8, D_001D7AB8, D_001D7AAC, D_001D7AA4, D_001D7318;
  extern int D_00312DA8, D_00312DAC, D_00308158, D_00312D8C;
  extern float D_001D27B8;
  int func_0009C590(char *, ...);
  int func_0009C7A0(int, char *, int);
  void func_0009D3E0(int);
  int func_00100540(char *);
  void func_000A7D80(void);
  void func_000A7E60(void);
  void func_000A7FB0(void);
  void func_000A81E0(void);
  void func_000A8340(void);
  void func_000A84D0(void);
  int func_001100A0(int);
  void func_0011A600(int);
  float *pfVar1;
  int iVar3;
  int local_4;

  func_0009C590(&D_001D7918);
  D_00312DA8 = -1;
  D_00312DAC = func_0009C7A0(D_00308158, &D_001D7AC8, 0);
  pfVar1 = (float *)func_0009C7A0(D_00308158, &D_001D7AB8, 0);
  if (*pfVar1 != D_001D27B8) {
    func_0009D3E0(func_0009C590(&D_001D7AAC));
  }
  D_00312D8C = func_00100540(&D_001D7AA4);
  func_000A7D80();
  func_000A7E60();
  func_000A7FB0();
  func_000A81E0();
  func_000A8340();
  func_000A84D0();
  iVar3 = func_0009C590(&D_001D7318, &local_4);
  func_001100A0(*(int *)(iVar3 + 0x2c));
  func_0011A600(local_4);
}

void func_000A8790(void) {
    extern int D_00312D8C;
    int func_00100730(...);
    func_00100730(D_00312D8C);
}

void func_000A87A0(void)
{
  extern int D_00312D8C, D_00312DAC, D_00312DA8, D_00312DA4, D_00312D90;
  extern float D_00312DB0, D_001D27EC;
  extern char D_001D7AEC, D_001D7AD8;
  int func_000B57F0(...);
  void func_00110330(int, int);
  void func_001006C0(int);
  int func_0009CBE0(...);
  void func_0009D280(...);
  void func_0009D3E0(...);
  int func_0013E469(char *, char *, ...);
  void func_00110060(int, void *);
  void func_0012F120(void *);
  void func_0012FE20(void *, int, int, int);
  void func_0012E760(void *);
  void func_0012E680(void *, int);
  void func_0012F7A0(void *, void *);
  void func_0012E590(void *, int);
  void func_0012F2E0(void *, void *);
  void func_001105E0(int, void *, int);
  __declspec(align(16)) char other[0x40];
  __declspec(align(16)) char buf[0x40];
  __declspec(align(16)) char matrix[0x40];
  __declspec(align(16)) int vec[4];
  int n;
  int p;

  if (func_000B57F0() == 0) {
    func_00110330(D_00312D8C, 1);
    func_001006C0(D_00312D8C);
  } else {
    func_00110330(D_00312D8C, 0);
  }
  n = (int)(long double)*(float *)D_00312DAC;
  if (D_00312DA8 != n) {
    D_00312DA8 = n;
    if (n != 0) {
      func_0009D280(func_0009CBE0(&D_001D7AEC));
      n = 0;
      do {
        func_0013E469(buf, &D_001D7AD8, n + 1);
        func_0009D3E0(func_0009CBE0(buf));
        n = n + 1;
      } while (n != 4);
    }
  }
  D_00312DB0 = D_00312DB0 + (float)(long double)D_001D27EC;
  func_00110060(D_00312DA4, other);
  p = (int)&D_00312D90;
  do {
    func_0012F120(matrix);
    func_0012FE20(matrix, 0, 0, *(int *)&D_00312DB0);
    func_0012E760(vec);
    func_0012E680(vec, *(int *)p + 0xc0);
    func_0012F7A0(vec, matrix);
    *(int *)(matrix + 0x30) = vec[0];
    *(int *)(matrix + 0x34) = vec[1];
    *(int *)(matrix + 0x38) = vec[2];
    func_0012E590(matrix + 0x30, *(int *)p + 0xc0);
    func_0012F2E0(matrix, other);
    func_001105E0(*(int *)p, matrix, 0);
    p = p + 4;
  } while (p < (int)&D_00312DA4);
}

void func_000A8930(void)
{
  extern undefined4 D_00312DB4;
  int func_00110300(...);
  extern undefined4 D_00308158;
  extern undefined D_001D7B50;
  extern undefined4 D_00312DB8;
  extern undefined D_001D7B3C;
  extern undefined4 D_00312DBC;
  extern undefined D_001D7B28;
  extern undefined4 D_00312DC0;
  extern undefined D_001D7B14;
  extern undefined4 D_00312DC4;
  extern undefined D_001D7B00;
  D_00312DB4 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B50),0x18);
  D_00312DB8 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B3C),0x18);
  D_00312DBC = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B28),0x18);
  D_00312DC0 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B14),0x18);
  D_00312DC4 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7B00),0x18);
  return;
}

void func_000A89C0(void)
{
  extern int D_00313B60, D_00312DB4[];
  extern float D_001D286C;
  int func_001100A0(...); float func_00131610(...); void func_0012F120(...); void func_0012FE20(...);
  void func_0012E650(...); void func_0012F2E0(...); void func_0012E590(...); void func_001105E0(...);
  __declspec(align(16)) char c[0x40];
  __declspec(align(16)) char a[0x30];
  char b[16];
  float f;
  int p;
  func_001100A0(D_00313B60, &p);
  f = func_00131610(*(int*)(p + 0x20), *(int*)(p + 0x28)) + D_001D286C;
  func_0012F120(c);
  func_0012FE20(c, 0, *(int*)&f, 0);
  for (unsigned int i = 0; i < 0x18; i += 4) {
    if (*(int*)((char*)D_00312DB4 + i) != 0) {
      func_0012F120(a);
      func_0012E650(b, *(int*)((char*)D_00312DB4 + i));
      func_0012F2E0(a, c);
      func_0012E590(b, *(int*)((char*)D_00312DB4 + i));
      func_001105E0(*(int*)((char*)D_00312DB4 + i), a, 0);
    }
  }
}

void func_000A8A90(void)
{
  extern undefined D_00313040;
  extern undefined4 D_00313044;
  int func_00103990(...);
  extern undefined4 D_00312DE0;
  int func_001031A0(...);
  D_00313040 = 1;
  D_00313044 = 0;
  func_00103990(D_00312DE0,1);
  func_001031A0(D_00312DE0,0);
  return;
}

void func_000A8AC0(){
 extern int D_003080AC,D_00312E18,D_00312DE4,D_00312DE0,D_00308158,D_00313B60;
 extern unsigned char D_00313040;extern float D_00313044,D_001E461C,D_001D27F4,D_001D27B8,D_001D27B0,D_001D4508;extern unsigned int *D_00313048;
 extern char D_001D7B64;
 int func_00110330(...),func_00103990(...),func_00048430(...),func_0012F120(...),func_0012ECA0(...),func_0012EE00(...),func_00110000(...),func_00110060(...),func_001105E0(...),func_00102E80(...),func_0009CB40(...),func_001100A0(...);
 float func_0012EA60(...);int func_001031A0(int,float);
 A8AC0Work work;
 __declspec(align(16)) float matrix[16];
 if(D_003080AC==2)return;
 switch(D_00313040){
 case 0:return;
 case 1:
  D_00313044=D_001E461C+D_00313044;
  if(D_00313044>D_001D27F4){
   D_00313044=0;D_00313040=2;
   func_00110330(*(int*)(D_00312E18+0x2c),1);func_00103990(D_00312DE4,0);
   work.basis.time=0;func_00048430(D_00313048,&work.basis.time,work.basis.position,work.basis.tangent,0,1);func_0012F120(matrix);
   *(int*)&matrix[8]=*(int*)&work.basis.tangent[0];*(int*)&matrix[9]=*(int*)&work.basis.tangent[1];*(int*)&matrix[10]=*(int*)&work.basis.tangent[2];
   func_0012ECA0(&matrix[8],0xbf800000);
   *(int*)&work.basis.up[0]=0;*(int*)&work.basis.up[1]=0x3f800000;*(int*)&work.basis.up[2]=0;
   func_0012EE00(work.basis.cross,work.basis.up,&matrix[8]);func_0012EA60(work.basis.cross);
   func_0012EE00(&matrix[4],&matrix[8],work.basis.cross);func_0012EA60(&matrix[4]);
   func_0012EE00(matrix,&matrix[4],&matrix[8]);func_0012EA60(matrix);
   *(int*)&matrix[12]=*(int*)&work.basis.position[0];*(int*)&matrix[13]=*(int*)&work.basis.position[1];*(int*)&matrix[14]=*(int*)&work.basis.position[2];
   func_001105E0(*(int*)(D_00312E18+0x2c),matrix,0);func_00110000(*(int*)(D_00312E18+0x2c));func_001031A0(D_00312DE0,1.0f);
   goto moving;
  }
  func_001031A0(D_00312DE0,D_001D27B0-(D_001D27F4-D_00313044)*D_001D4508);break;
 case 2:
moving:
  if((float)*D_00313048<D_00313044){
   func_00110330(*(int*)(D_00312E18+0x2c),0);D_00313040=3;D_00313044=D_001D27B8;goto ending;
  }
  func_00110060(*(int*)(D_00312E18+0x2c),matrix);
  func_00048430(D_00313048,&D_00313044,&matrix[12],0,0x44960000,1);
  func_001105E0(*(int*)(D_00312E18+0x2c),matrix,0);break;
 case 3:
ending:
  D_00313044+=D_001E461C;
  if(D_00313044>D_001D27F4){
   func_00102E80(D_00312DE0);*(short*)func_0009CB40(D_00308158,&D_001D7B64)=1;
  }else func_001031A0(D_00312DE0,(D_001D27F4-D_00313044)*D_001D4508);
 }
 if(D_00313040>0){func_001100A0(D_00313B60,&work.pointer);func_001105E0(*(int*)(D_00312DE0+0x2c),work.pointer,0);func_001105E0(*(int*)(D_00312DE4+0x2c),work.pointer,0);}
}

void __cdecl _func_000A8E00(void)
{
    extern int _D_00312E0C;
    extern int _D_00312E10;
    extern int _D_00312E14;
    extern int _D_00312E08;
    extern int __cdecl _func_001160B0(int);
    extern int __cdecl _func_00100730(int);
    _func_001160B0(_D_00312E0C);
    _func_001160B0(_D_00312E10);
    _func_001160B0(_D_00312E14);
    _func_00100730(_D_00312E08);
}

void _func_000A8E40(void)
{
  extern int D_00312E1C;
  extern char D_00312E20[];
  extern char D_00312DE8[], D_00313020[], D_001E4680[], D_00312E28[];
  extern float D_001D5414, D_001D2868;
  int func_00110060(...);
  int func_0012F120(...);
  int func_0012FE20(...);
  int func_0012E650(...);
  int func_0012F2E0(...);
  int func_0012E590(...);
  int func_001105E0(...);
  float fVar1;
  int iVar2;
  int iVar3;
  char *puVar4;
  char *puVar5;
  __declspec(align(16)) int m[16];
  char local_50[64];

  if (D_00312E1C == 0) {
    puVar5 = D_00312E20;
    iVar3 = 0;
    iVar2 = 8;
    do {
      *(int *)(D_00313020 + iVar3) = 0;
      func_00110060(*(int *)(D_00312DE8 + iVar3), puVar5);
      puVar5 += 0x40;
      iVar3 += 4;
      iVar2--;
    } while (iVar2 != 0);
    D_00312E1C = 1;
  }
  puVar4 = D_00312E28;
  iVar3 = 0;
  iVar2 = 8;
  do {
    fVar1 = *(float *)(D_001E4680 + iVar3);
    fVar1 = fVar1 * D_001D5414;
    fVar1 = fVar1 + *(float *)(D_00313020 + iVar3);
    *(float *)(D_00313020 + iVar3) = fVar1;
    if (fVar1 > D_001D2868) {
      *(float *)(D_00313020 + iVar3) = fVar1 - D_001D2868;
    }
    func_0012F120(local_50);
    func_0012FE20(local_50, 0, *(int *)(D_00313020 + iVar3), 0);
    m[0] = *(int *)(puVar4 - 8);
    m[1] = *(int *)(puVar4 - 4);
    m[2] = *(int *)(puVar4);
    m[3] = *(int *)(puVar4 + 4);
    m[4] = *(int *)(puVar4 + 8);
    m[5] = *(int *)(puVar4 + 12);
    m[6] = *(int *)(puVar4 + 16);
    m[7] = *(int *)(puVar4 + 20);
    m[8] = *(int *)(puVar4 + 24);
    m[9] = *(int *)(puVar4 + 28);
    m[10] = *(int *)(puVar4 + 32);
    m[11] = *(int *)(puVar4 + 36);
    m[12] = *(int *)(puVar4 + 40);
    m[13] = *(int *)(puVar4 + 44);
    m[14] = *(int *)(puVar4 + 48);
    m[15] = *(int *)(puVar4 + 52);
    func_0012E650(&m[4], *(int *)(D_00312DE8 + iVar3));
    func_0012F2E0(m, local_50);
    func_0012E590(&m[4], *(int *)(D_00312DE8 + iVar3));
    func_001105E0(*(int *)(D_00312DE8 + iVar3), m, 0);
    puVar4 += 0x40;
    iVar3 += 4;
    iVar2--;
  } while (iVar2 != 0);
}

void __cdecl _func_000A8FD0(unsigned int v)
{
    extern unsigned int _D_00312DDC;
    extern float _D_001D29E0, _D_001D28C0;
    extern const float _D_001D27FC;
    extern int _D_00312E0C, _D_00312E10, _D_00312E14;
    extern int __cdecl _func_00116610(int);
    extern int __cdecl _func_00116130(int, float);
    float f[3];
    _D_00312DDC = v;
    f[0] = (float)((v / 100) % 10) * _D_001D29E0 - _D_001D28C0;
    f[1] = (float)((v / 10) % 10) * _D_001D29E0;
    f[2] = (float)(v % 10) * _D_001D29E0;
    _func_00116610(_D_00312E0C);
    _func_00116610(_D_00312E10);
    _func_00116610(_D_00312E14);
    _func_00116130(_D_00312E0C, f[0] * _D_001D27FC);
    _func_00116130(_D_00312E10, f[1] * _D_001D27FC);
    _func_00116130(_D_00312E14, f[2] * _D_001D27FC);
}

