/* 17 functions from 0x0007D780 to 0x0007E71E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0007DCE0(void) { int func_000688D0(...); int func_0007D780(...); int func_00110370(...); int func_0011BF40(...); extern int D_002FADF4; extern int D_002FADEC; extern int D_001D6694; extern int D_002FADF0; if(D_002FADF4==0){ int local[7]; local[4]=0; local[3]=(int)&func_000688D0; local[1]=(int)&func_0007D780; local[2]=0; D_002FADEC=func_00110370(local); func_000688D0(); D_002FADF0=func_0011BF40(&D_001D6694,0); func_000688D0(); } D_002FADF4++; }

void func_0007DD50(void) { extern int D_002FADF4; extern int D_002FADF0; extern int D_002FADEC; int func_0011B990(...); int func_001103C0(...); D_002FADF4--; if(D_002FADF4==0){func_0011B990(D_002FADF0);func_001103C0(D_002FADEC);} }

void func_0007DD80(int param_1, float param_2) { double value=param_2; *(float*)(param_1+0xe8)=(float)value; }

void func_0007DD90(int *p, undefined4 q){int func_0011CD40(...),func_0011CDF0(...),func_0011CE10(...),func_0011CE20(...),func_0011CE30(...),func_0011CE50(...),func_0011CF30(...),func_0011CF90(...); float func_00131760(...); float func_0012EA60(...); extern float D_001D27B0,D_001D2B60,D_001D31C8,D_001D28C0,D_001D2C00,D_001D29D8,D_001D29E0,D_001D37AC; unsigned int i; *p=func_0011CD40(0x32,0x32,4,4,1);
for(i=0;i<600;){
*(float *)(*(int *)(*p+4)+i)=func_00131760()*2-D_001D27B0;
*(int *)(*(int *)(*p+4)+i+4)=0;
*(float *)(*(int *)(*p+4)+i+8)=func_00131760()*2-D_001D27B0;
func_0012EA60((void *)(*(int *)(*p+4)+i));
*(int *)(*(int *)(*p+12)+i)=*(int *)(*(int *)(*p+4)+i);
*(int *)(*(int *)(*p+12)+i+4)=0x3e99999a;
*(int *)(*(int *)(*p+12)+i+8)=*(int *)(*(int *)(*p+4)+i+8);
*(float *)(*(int *)(*p+4)+i)=func_00131760()**(float *)(*(int *)(*p+4)+i)*D_001D2B60;
*(float *)(*(int *)(*p+4)+i+4)=(float)((long double)*(float *)(*(int *)(*p+4)+i+4)-D_001D31C8);
*(float *)(*(int *)(*p+4)+i+8)=func_00131760()**(float *)(*(int *)(*p+4)+i+8)*D_001D2B60;
*(float *)(*(int *)(*p+12)+i)=(float)((long double)*(float *)(*(int *)(*p+12)+i)*D_001D28C0);
float *a=(float *)(*(int *)(*p+12)+8+i);
float *b=(float *)(*(int *)(*p+12)+8+i);
i+=12;
*b=(float)((long double)*a*D_001D28C0);
}
i=0; do{
*(float *)(*(int *)(*p+20)+i)=func_00131760()*D_001D2C00+D_001D29D8;
*(float *)(*(int *)(*p+20)+i+4)=func_00131760()*D_001D2C00+D_001D29D8;
float f=func_00131760()*D_001D29E0+D_001D37AC;
i+=16;
*(float *)(*(int *)(*p+20)+i-8)=f;
*(int *)(*(int *)(*p+20)+i-4)=0x3f800000;
}while(i<0x40);
*(int *)(*(int *)(*p+28))=0x41b40000;
*(int *)(*(int *)(*p+28)+4)=0x41b40000;
*(int *)(*(int *)(*p+28)+8)=0x42160000;
*(int *)(*(int *)(*p+28)+12)=0x42160000;
*(int *)(*(int *)(*p+28)+16)=0x42520000;
*(int *)(*(int *)(*p+28)+20)=0x42520000;
*(int *)(*(int *)(*p+28)+24)=0x42870000;
*(int *)(*(int *)(*p+28)+28)=0x42870000;
*(int *)(*(int *)(*p+36))=0;
*(int *)(*(int *)(*p+36)+4)=0;
*(int *)(*(int *)(*p+36)+8)=0x3f800000;
*(int *)(*(int *)(*p+36)+12)=0x3f800000;
func_0011CDF0(q);func_0011CE20(q,0);func_0011CE10(q,0);func_0011CE30(q,0x442f0000,0x44a28000);func_0011CE50(q,0,0,0,0);func_0011CF30(q,0xc25c0000,0xc25c0000);func_0011CF90(q,0,0,0xc3fa0000,0);}

void func_0007DFF0(void) {
    extern int D_001D66B0;
    extern void func_0007DD90(void);
    extern void func_00083550(void);
    extern void func_00079D10(void);
    extern void func_00083590(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0007DD90, &D_001D66B0);
    func_0011D270(func_00083550, &D_001D66B0);
    func_0011D290(func_00079D10, &D_001D66B0);
    func_0011D2B0(func_00083590, &D_001D66B0);
    func_0011D2D0(func_00092810, &D_001D66B0);
    func_0011D2F0(func_00083D60, &D_001D66B0);
}

void func_0007E050(void) { extern int D_001D66B0; int func_0011D0E0(...); func_0011D0E0((int)&D_001D66B0); }

void func_0007E060(void)
{
  extern int D_001D66C4, D_001D66C8, D_001D66CC, D_001D66D0;
  extern short D_001D66D4;
  extern char D_001D66B8, D_001D66B0, D_002FADF8[], D_002FADFC[], D_002FAE00[], D_002FAE04[];
  extern int D_002FAE48;
  extern int D_0030809C;
  int func_0011E840(...);
  int func_0011DD60(...);
  int func_0011E830(...);
  int func_0011DEF0(...);
  int func_00110480(...);
  int a[61];
  unsigned int k;
  int r;
  for (k = 0; k < 0x50; k += 0x10) {
    int *p = a;
    for (r = 0x3d; r != 0; r--)
      *p++ = 0;
    a[36] = 2;
    a[37] = 2;
    a[0] = D_001D66C4;
    a[1] = D_001D66C8;
    a[2] = D_001D66CC;
    a[46] = 4;
    a[47] = 5;
    a[32] = 0;
    a[33] = 0;
    a[34] = 0;
    a[35] = 0;
    a[42] = 3;
    a[43] = 3;
    a[44] = 3;
    a[45] = 3;
    a[48] = 0;
    a[54] = 0;
    a[53] = 0;
    a[55] = 0;
    a[60] = 10;
    a[57] = 0x1e;
    a[3] = D_001D66D0;
    *(short *)&a[4] = D_001D66D4;
    a[59] = 0x58;
    r = func_0011E840(&D_001D66B8, a);
    *(int *)(D_002FADF8 + k) = r;
    r = func_0011DD60(&D_001D66B0, 0x1e, r, *(int *)(r + 0x14c));
    *(int *)(D_002FADFC + k) = r;
    func_0011E830(*(int *)(D_002FADF8 + k), r);
    func_0011DEF0(*(int *)(D_002FADFC + k));
    *(int *)(D_002FAE00 + k) = 1;
    *(int *)(D_002FAE04 + k) = 0;
    func_00110480(D_0030809C, *(int *)(D_002FADF8 + k), 8);
  }
  D_002FAE48 = 1;
}

void func_0007E1F0(void)
{
  int func_001160B0(...);
  extern undefined D_002FADFC;
  int func_00110760(...);
  extern undefined D_002FADF8;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FADFC) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FADF8) + uVar1));
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0x50);
  return;
}

void *_func_0007E220(int a,int *b){int _func_00110420(...);int _func_0012F120(...);int _func_001105E0(...);int _func_00110000(...);int _func_00110550(...);int _func_0011DED0(...);int _func_00083650(...);extern unsigned int _D_002FAE00[20],_D_002FAE48;extern int _D_002FADF8[20],_D_002FAE04[20],_D_002FADFC[20];register unsigned int v=0xffffffffu,slot=0,t=_D_002FAE00[0];if(t<=v){v=t;slot=0;}t=_D_002FAE00[4];if(t<=v){v=t;slot=1;}t=_D_002FAE00[8];if(t<=v){v=t;slot=2;}t=_D_002FAE00[12];if(t<=v){v=t;slot=3;}t=_D_002FAE00[16];if(t<=(int)v)slot=4;int *p=&_D_002FADF8[slot*4];int *o=*(int**)(p[0]+0x2c);_func_00110420(*o,p[0]);_D_002FAE04[slot*4]=0;__declspec(align(16)) char local[64];_func_0012F120(local);*(int*)(local+48)=b[0];*(int*)(local+52)=b[1];*(int*)(local+56)=b[2];_func_001105E0(p[0],local,0);_func_00110000(p[0]);_func_00110550(a,p[0],8);_D_002FAE04[slot*4]=1;_func_0011DED0(_D_002FADFC[slot*4]);_D_002FAE00[slot*4]=_D_002FAE48;++_D_002FAE48;_func_00083650(p[0]);return p;}

void _func_0007E330(int *param)
{
  extern int D_00307DF8; extern float D_001D290C, D_001D27B8, D_001D66D8, D_001D6008;
  void *_func_0007E220(int, int*);
  int t = **(int**)(*(int*)(D_00307DF8 + 0x2c) + 0x2c);
  int r = *(int*)((int)_func_0007E220(t, param) + 4);
  unsigned int i = 0;
  if (i < *(unsigned int*)(*(int*)(*(int*)(r + 0x50) + 0x2c) + 0x10)) {
    int off = 0;
    do {
      int g = *(int*)(*(int*)(r + 0x50) + 0x2c);
      float f = (float)i / (float)*(unsigned int*)(g + 0x10) * D_001D27B8 + D_001D66D8;
      *(float*)(off + *(int*)(g + 0x14)) = f;
      *(float*)(*(int*)(*(int*)(*(int*)(r + 0x50) + 0x2c) + 0x14) + 4 + off) = f;
      *(float*)(*(int*)(*(int*)(*(int*)(r + 0x50) + 0x2c) + 0x14) + 8 + off) = f;
      float *q = (float*)(*(int*)(*(int*)(*(int*)(r + 0x50) + 0x2c) + 0x14) + off);
      i++;
      *q = (float)(*q * (double)D_001D6008);
      q = (float*)(*(int*)(*(int*)(*(int*)(r + 0x50) + 0x2c) + 0x14) + 4 + off);
      *q = (float)(*q * (double)D_001D6008);
      q = (float*)(*(int*)(*(int*)(*(int*)(r + 0x50) + 0x2c) + 0x14) + 8 + off);
      *q = (float)(*q * (double)D_001D6008);
      off += 0x10;
    } while (i < *(unsigned int*)(*(int*)(*(int*)(r + 0x50) + 0x2c) + 0x10));
  }
}

void *memset(void*,int,unsigned int);
void func_0007E420(undefined4 *p,undefined4 *a,undefined4 *b,int c) { memset(p,0,0x3c); p[10]=b[0];p[11]=b[1];p[8]=a[0];p[9]=a[1];p[3]=p[4]=0x49742400;p[12]=c;*(char*)(p+14)=0; }

void func_0007E470(int p) { int func_00116A90(...); int *q; float x,y; int z; if(*(int*)(p+0x60)==0 && (*(unsigned char*)(p+0x11)&2)) { q=(int*)func_00116A90(0x3c,1,1); x=*(float*)(p+0x38);y=*(float*)(p+0x40);z=*(int*)(p+0x48); *(int**)(p+0x60)=q; memset(q,0,0x3c); q[10]=*(int*)&x;q[11]=*(int*)&y;q[8]=*(int*)&x;q[9]=z;q[3]=q[4]=0x49742400;q[12]=0x42480000;((char*)q)[0x38]=0;*(unsigned char*)(p+0x11)|=0x20; } }

void func_0007E4F0(int p,undefined4 *a) { int func_00116A90(...); extern float D_001D27B8; int *q; float x,y; if(*(int*)(p+0x60)==0) { q=(int*)func_00116A90(0x3c,1,1); *(int**)(p+0x60)=q; x=D_001D27B8;y=D_001D27B8; if(*(unsigned char*)(p+0x11)&2){x=*(float*)(p+0x40);y=*(float*)(p+0x48);} memset(q,0,0x3c); q[10]=a[0];q[11]=a[1];q[8]=*(int*)&x;q[9]=*(int*)&y;q[3]=q[4]=0x49742400;q[12]=0x42480000;((char*)q)[0x38]=0;*(unsigned char*)(p+0x11)|=0x20; } }

void func_0007E570(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x18) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x1c) != 0) {
      func_00116FB0(*(int *)(param_1 + 0x1c));
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined2 *)(param_1 + 0x16) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x49742400;
    *(undefined4 *)(param_1 + 0x10) = 0x49742400;
  }
  return;
}

void func_0007E5C0(undefined4 *p,int value,undefined4 *a) { extern int D_002FB30C; extern float D_001D27B8; extern int D_002FAE58; int n=D_002FB30C; if(n!=300 && !(*(unsigned char*)((char*)p+0x38)&1) && *(float*)((char*)p+0x28)<=D_001D27B8 && *(float*)((char*)p+0x2c)<=D_001D27B8) { *(int*)((char*)p+0x34)=value;p[0]=a[0];p[1]=a[1];p[2]=a[2];((int*)&D_002FAE58)[n]=(int)p;D_002FB30C=n+1; } }
struct S_D_0007E630_arg0 {
    int offset_27c; // Offset from param_1
    int offset_280; // Offset from param_1
};
