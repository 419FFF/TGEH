/* 91 functions from 0x000FD600 to 0x000FE408, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

char func_000FD6C0(void) {
    int func_000A8A90(...);
    func_000A8A90();
    return 1;
}

unsigned char func_000FD760(unsigned int a,unsigned int*p){int func_0002A140(...);func_0002A140(*p,1);return 1;}

unsigned char func_000FD780(unsigned int param_1, unsigned int *param_2) { int func_0002A140(...); func_0002A140(*param_2, 0); return 1; }

unsigned char func_000FD7A0(unsigned int param_1, unsigned int *param_2) { int func_0002A170(...); func_0002A170(*param_2, 1); return 1; }

unsigned char func_000FD7C0(unsigned int param_1, unsigned int *param_2) { int func_0002A170(...); func_0002A170(*param_2, 0); return 1; }

unsigned char func_000FD7E0(unsigned int param_1, unsigned int *param_2)
{
  int func_0002A1A0(...);
  func_0002A1A0(*param_2, 1);
  return 1;
}

unsigned char func_000FD800(unsigned int param_1, unsigned int *param_2)
{
  int func_0002A1A0(...);
  func_0002A1A0(*param_2, 0);
  return 1;
}

unsigned char func_000FD820(unsigned int param_1, unsigned int *param_2)
{
  int func_0002A1D0(...);
  func_0002A1D0(*param_2, 1);
  return 1;
}

unsigned char func_000FD840(unsigned int param_1, unsigned int *param_2)
{
  int func_0002A1D0(...);
  func_0002A1D0(*param_2, 0);
  return 1;
}

unsigned char _func_000FD860(unsigned int a, unsigned int *p) { int _func_0002A280(unsigned int); _func_0002A280(*p); return 1; }

unsigned char _func_000FD880(int a, int *p) { int func_0002A2C0(...); func_0002A2C0(*p); return 1; }

unsigned char _func_000FD8A0(unsigned int a, unsigned int *p) { int _func_0002A1F0(unsigned int); _func_0002A1F0(*p); return 1; }

unsigned char _func_000FD8C0(unsigned int a, unsigned int *p) { int _func_0002A260(unsigned int); _func_0002A260(*p); return 1; }

unsigned char _func_000FD8E0(unsigned int a, unsigned int *p) { int _func_00021410(unsigned int); _func_00021410(*p); return 1; }

undefined4 func_000FD900(undefined4 param_1, undefined4 *param_2)
{
  int func_00044C90(...);
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  func_00044C90(*param_2,&local_c);
  return 1;
}

char func_000FD940(void) { int func_00044E50(...); func_00044E50(); return 1; }

unsigned char _func_000FD950(int *p, int *q) { extern int D_003248E8, D_003248EC, D_003248F0; int func_0009C590(...); int func_0009A0D0(...); D_003248E8=p[3]; D_003248EC=func_0009C590(**(int **)(q+1)); D_003248F0=func_0009C590(**(int **)(q+3)); func_0009A0D0(4); return 1; }

unsigned char _func_000FDA60(int *p, int *q) { extern int D_00307DF8, D_00308158; int *x=*(int **)(D_00307DF8+0x110); if (*x != 0x25 && *x != 0x26) { *x=0x25; x[0x104]=**(int **)(q+1); x[0x105]=(((p[3] == D_00308158)-1) & p[3]); } return 1; }

unsigned char _func_000FDAB0(void *a) { extern float _D_001D27B8; int _func_0013E3F4(float); int _func_000A3130(int,int); int b = **(float **)((char *)a + 4) != _D_001D27B8; int v = _func_0013E3F4(**(float **)((char *)a + 12)); _func_000A3130(b,v); return 1; }

unsigned char _func_000FDAF0(void *unused, void *a) { int _func_0013E3F4(float); int _func_000A2BF0(int,int); int v = _func_0013E3F4(*(float *)((char *)a + 4)); _func_000A2BF0(0,v); return 1; }

unsigned char _func_000FDB10(void *u, void *a) { int _func_0013E3F4(float); int _func_000A2BF0(int,int); int v=_func_0013E3F4(*(float *)((char *)a+4)); _func_000A2BF0(1,v); return 1; }

unsigned char _func_000FDB30(void *u, void *a) { int _func_0013E3F4(float); int _func_000A2BF0(int,int); int v=_func_0013E3F4(*(float *)((char *)a+4)); _func_000A2BF0(2,v); return 1; }

unsigned char _func_000FDB50(void *u, void *a) { int _func_0013E3F4(float); int _func_000A2BF0(int,int); int v=_func_0013E3F4(*(float *)((char *)a+4)); _func_000A2BF0(3,v); return 1; }

unsigned char _func_000FDB70(void *u, void *a) { int _func_0013E3F4(float); int _func_000A2BF0(int,int); int v=_func_0013E3F4(*(float *)((char *)a+4)); _func_000A2BF0(4,v); return 1; }

unsigned char _func_000FDB90(void *unused, void *a) { int _func_0013E3F4(float); int _func_000A2BF0(int,int); int v=_func_0013E3F4(*(float *)((char *)a+4)); _func_000A2BF0(5,v); return 1; }

unsigned char _func_000FDBB0(void *u, void *a) { int _func_0013E3F4(float); int _func_000A2BF0(int,int); int v=_func_0013E3F4(**(float **)((char *)a+4)); _func_000A2BF0(6,v); return 1; }

unsigned char _func_000FDBD0(void *u, void *a) { int _func_00063F60(int,int,int); _func_00063F60(0, **(int **)((char *)a+4), **(int **)((char *)a+0xc)); return 1; }

unsigned char _func_000FDBF0(void *u, void *a) { int _func_0013E3F4(float); int _func_0006E100(int,const char *,const char *); char first[512]; char second[512]; int key=_func_0013E3F4(**(float **)((char *)a+4)); char *p=**(char ***)((char *)a+0xc); char *q=first; do {*q=*p++;} while(*q++); p=**(char ***)((char *)a+0x14); q=second; do {*q=*p++;} while(*q++); _func_0006E100(key,first,second); return 1; }

unsigned char _func_000FDC60(void *u, void *a) { int _func_0013E3F4(float); int _func_0006E180(int,const char *); char buf[512]; int key=_func_0013E3F4(**(float **)((char *)a+4)); char *p=**(char ***)((char *)a+0xc); char *q=buf; do {*q=*p++;} while(*q++); _func_0006E180(key,buf); return 1; }

unsigned char _func_000FDCB0(void *a, void *b) { extern float _D_001D27B8; float v=**(float **)((char *)b+4); if(v != _D_001D27B8) *((unsigned char *)(*(char **)((char *)a+0xc)+0x124))=1; else *((unsigned char *)(*(char **)((char *)a+0xc)+0x124))=0; return 1; }

char func_000FDCF0(void) {
    int func_00100990(...);
    func_00100990(1);
    return 1;
}

char func_000FDD00(void) {
    int func_00100990(...);
    func_00100990(0);
    return 1;
}

char func_000FDD10(void) {
    int func_00100E70(...);
    func_00100E70();
    return 1;
}

char func_000FDD20(void) {
    int func_0009A920(...);
    func_0009A920(1);
    return 1;
}

char func_000FDD30(void) {
    int func_0009A920(...);
    func_0009A920(2);
    return 1;
}

char func_000FDD40(void) {
    int func_0009A920(...);
    func_0009A920(3);
    return 1;
}

unsigned char _func_000FDD50(void*u,int*a){int _func_000978B0(...);_func_000978B0(*a,**(int**)((char*)a+0xc),**(int**)((char*)a+0x14));return 1;}

char func_000FDD70(void) {
    int func_000B6510(...);
    func_000B6510(14, 0);
    return 1;
}

char func_000FDD80(void) {
    int func_000B6510(...);
    func_000B6510(12, 0);
    return 1;
}

char func_000FDD90(void) {
    int func_000B6510(...);
    func_000B6510(2, 0);
    return 1;
}

char func_000FDDA0(void) {
    int func_000B6510(...);
    func_000B6510(4, 0);
    return 1;
}

char func_000FDDB0(void) {
    int func_000B6510(...);
    func_000B6510(7, 0);
    return 1;
}

char func_000FDDC0(void) {
    int func_000B6510(...);
    func_000B6510(3, 0);
    return 1;
}

char func_000FDDD0(void) {
    int func_000B6510(...);
    func_000B6510(13, 0);
    return 1;
}

char func_000FDDE0(void) {
    int func_000B6510(...);
    func_000B6510(6, 0);
    return 1;
}

char func_000FDDF0(void) {
    int func_000B6510(...);
    func_000B6510(1, 0);
    return 1;
}

char func_000FDE00(void) {
    int func_000B6510(...);
    func_000B6510(10, 0);
    return 1;
}

char func_000FDE10(void) {
    int func_000B6510(...);
    func_000B6510(9, 0);
    return 1;
}

unsigned char _func_000FDE20(void*u,int*a){int _func_0013E3F4(void);int _func_000B6510(...);volatile float value=*(float*)a[1];int v=_func_0013E3F4();_func_000B6510(0xf,v);return 1;}

unsigned char _func_000FDE40(void){extern char D_001DD1B8;int _func_0009C590(...);int _func_00044C90(...);int _func_000B6510(...);int local[3]={0,0,0x42c80000};int v=_func_0009C590(&D_001DD1B8);_func_00044C90(v,local);_func_000B6510(8,0);return 1;}

unsigned char _func_000FDE80(void){extern char _D_001DD1B8;int _func_0009C590(void*);int _func_00044C90(int,int*);int _func_000B6510(int,int);int v[3]={0,0,0x42c80000};int p=_func_0009C590(&_D_001DD1B8);_func_00044C90(p,v);_func_000B6510(8,1);return 1;}

char func_000FDEC0(void) {
    int func_000B6510(...);
    func_000B6510(11, 0);
    return 1;
}

unsigned char _func_000FDED0(void){unsigned char _func_000B5650(int);int _func_000B6510(int,int);if(_func_000B5650(0x11))return 1;_func_000B6510(0x11,0);return 1;}

undefined1 func_000FDEF0(void)
{
  int func_000B5650(...);
  int func_000B6600(...);
  char cVar1;
  
  cVar1 = func_000B5650(0x11);
  if (cVar1 != '\0') {
    func_000B6600(0x11);
  }
  return 1;
}

char func_000FDF10(void) {
    int func_000E2D50(...);
    func_000E2D50();
    return 1;
}

char func_000FDF20(void) {
    int func_000E2D60(...);
    func_000E2D60();
    return 1;
}

char func_000FDF30(void) {
    int func_000B6510(...);
    func_000B6510(16, 0);
    return 1;
}

unsigned char _func_000FDF40(void){extern char _D_001D7248;int _func_0009C590(void*);int _func_000688D0(int);int p=_func_0009C590(&_D_001D7248);_func_000688D0(*(int*)(p+0x2c));return 1;}

unsigned char _func_000FDF60(void* a,int* p){extern int func_0009CBE0(...);extern int func_00110060(...);extern int func_000B6510(...);extern int _D_001D7BE0;int* base=(int*)func_0009CBE0(&_D_001D7BE0);int* obj=(int*)*p;int* slot=(int*)base[0x110/4];int value=**(int**)(obj[0xb/4]+0x2c);slot[0xd90/4]=value;func_00110060(*(int*)(obj[0x2c/4]),(int)((char*)slot+0xd50));func_000B6510(5,0);return 1;}

void func_000FDFB0(void) {
    int func_000C1370(...);
    func_000C1370();
}

extern void _func_000BC460(int);
extern void __cdecl _func_000BC460(int);
void _func_000FDFC0(int param_1,int param_2){int _func_000BC460(...);_func_000BC460(*(int*)(param_2+4));}

unsigned char _func_000FDFE0(unsigned int a,int* p){extern int func_001060A0(...);extern int func_00012D60(...);int* out=(int*)(*p+0x130);out[0]=func_001060A0(*(int*)(p[3]+0x40));out[1]=*(int*)p[5];func_00012D60(*p,0x3d);return 1;}

unsigned char _func_000FE020(unsigned int a,int* p){extern int func_001060A0(...);extern int func_00012D60(...);int* out=(int*)(*p+0x130);out[0]=func_001060A0(*(int*)(p[3]+0x40));out[1]=*(int*)p[5];func_00012D60(*p,0x3e);return 1;}

unsigned char func_000FE060(unsigned int a,int *p){int func_001060A0(...);int _func_00012D60(...);int *out=(int*)(*p+0x130);out[0]=p[3]+4;out[1]=func_001060A0(*(int*)(p[5]+0x40));out[2]=*(int*)p[7];_func_00012D60(*p,0x3f);return 1;}

unsigned char _func_000FE0A0(unsigned int a,unsigned int*p){int _func_00012D60(unsigned int,unsigned int);_func_00012D60(*p,0x40);return 1;}

unsigned char func_000FE0C0(unsigned int a,unsigned int *p){extern float _D_001D27B8;int _func_00012890(...);int _func_000128D0(...);if(*(float*)p[3]!=_D_001D27B8)_func_00012890(*p);else _func_000128D0(*p);return 1;}

unsigned char func_000FE100(unsigned int a, unsigned int *p)
{
    int func_0006EC00(...);
    func_0006EC00(*(unsigned int *)p[1]);
    return 1;
}

unsigned char func_000FE120(unsigned int a, unsigned int *p)
{
    int func_0006EC20(...);
    func_0006EC20(*(unsigned int *)p[1]);
    return 1;
}

unsigned char func_000FE140(unsigned int a,int p){extern float _D_001D27B8;int _func_000FA660(...);if(**(float**)(p+4)==_D_001D27B8)_func_000FA660(a,0);else _func_000FA660(a,1);return 1;}

unsigned char func_000FE180(void *ignored, int *p) { int func_000667A0(int,int,int,int,int); int func_0005CCC0(int); func_000667A0(p[1], **(int **)((char*)p+0xc), **(int **)((char*)p+0x14), **(int **)((char*)p+0x1c), **(int **)((char*)p+0x24)); func_0005CCC0(0x18); return 1; }

undefined1 func_000FE1C0(void)
{
  int func_0005F310(...);
  int func_0005CCC0(...);
  func_0005F310(0);
  func_0005CCC0(1);
  return 1;
}

unsigned char func_000FE1E0(void *ignored, int *p) { int func_00115100(int,int); int func_00091110(int,int,int); int v=func_00115100(*(int *)(*p+0x98), **(int **)((char*)p+0xc)); func_00091110(*p,v,0); return 1; }

unsigned char _func_000FE210(unsigned int a, unsigned int *p) { int _func_000912B0(unsigned int); _func_000912B0(*p); return 1; }

unsigned char _func_000FE230(unsigned int a,unsigned int* p){extern int func_00012D60(...);func_00012D60(*p,0x46);return 1;}

unsigned char func_000FE250(unsigned int a,int *p){int _func_00012D60(...);_func_00012D60(*(int*)((char*)p+0xc),0x46);return 1;}

unsigned char func_000FE270(void) { extern int *D_00307DF8; int func_00110060(int,void*); int func_0012ECA0(void*,int); int func_001105E0(int,void*,int); int func_00110000(int); __declspec(align(16)) char a[0x40]; __declspec(align(16)) char b[0x40]; int v=D_00307DF8[0x2c/4]; func_00110060(v,a); func_0012ECA0(a,0xbf800000); func_0012ECA0(b,0xbf800000); func_001105E0(v,a,0); func_00110000(v); return 1; }

unsigned char _func_000FE2E0(int p,int q){int func_0002D9B0(...);extern int D_00307DF8;func_0002D9B0(D_00307DF8,*(int*)(q+4)+4);return 1;}

unsigned char func_000FE300(int param_1)
{
  ++*(int *)(param_1 + 0x4e0);
  return 1;
}

unsigned char func_000FE310(int p) { int func_00063C40(...); int *v=(int *)(p+0x4e0); --*v; if (*v==0) func_00063C40(); return 1; }

unsigned char _func_000FE330(int p,int q){int func_00109670(...);func_00109670(**(int**)(q+4),**(int**)(q+0xc));return 1;}

char func_000FE380(void) {
    int func_000B7080(...);
    func_000B7080(21);
    return 1;
}

char func_000FE390(void) {
    int func_00101360(...);
    func_00101360();
    return 1;
}

char func_000FE3A0(void) {
    int func_000B7080(...);
    func_000B7080(20);
    return 1;
}

char func_000FE3B0(void) {
    int func_000B7080(...);
    func_000B7080(19);
    return 1;
}

char func_000FE3C0(void) {
    int func_000B7080(...);
    func_000B7080(18);
    return 1;
}

