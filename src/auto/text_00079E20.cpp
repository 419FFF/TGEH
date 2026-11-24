/* 19 functions from 0x00079E20 to 0x0007ADBD, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
struct E5C0 { int a; unsigned char *b; int c; int d; };
extern E5C0 _D_002FA688[4];

void _func_0007A040(void)
{
  extern int D_001D6548;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00079E20(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D6548, _func_00079E20);
  _func_0011D270(&D_001D6548, _func_00086E60);
  _func_0011D290(&D_001D6548, _func_00085E20);
  _func_0011D2B0(&D_001D6548, _func_000688D0);
}

void func_0007A080(void) {
    extern int D_001D6548;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6548);
}

void _func_0007A090(int *p, void *q){int func_0011CD40(...),func_0011CDF0(...),func_0011CE10(...),func_0011CE20(...),func_0011CE30(...),func_0011CE50(...),func_0011CF30(...),func_0011CFC0(...);float func_00131760(...),func_0012EA60(...);extern float _D_001D27B0,_D_001D2B64;unsigned int i;*p=func_0011CD40(10,4,1,1,1);for(i=0;i<0x78;i+=12){*(float*)(*(int*)(*p+4)+i)=func_00131760()*2-_D_001D27B0;*(int*)(*(int*)(*p+4)+i+4)=0;*(float*)(*(int*)(*p+4)+i+8)=func_00131760()*2-_D_001D27B0;func_0012EA60((void*)(*(int*)(*p+4)+i));*(float*)(*(int*)(*p+4)+i)=(func_00131760()*(*(float*)(*(int*)(*p+4)+i)))*_D_001D2B64;*(float*)(*(int*)(*p+4)+i+8)=(func_00131760()*(*(float*)(*(int*)(*p+4)+i+8)))*_D_001D2B64;}for(i=0;i<0x30;i+=12){*(float*)(*(int*)(*p+12)+i)=func_00131760();*(float*)(*(int*)(*p+12)+i+4)=func_00131760();*(float*)(*(int*)(*p+12)+i+8)=func_00131760();}*(unsigned int*)(*(int*)(*p+20))=0x3f19999a;*(unsigned int*)(*(int*)(*p+20)+4)=0x3f000000;*(unsigned int*)(*(int*)(*p+20)+8)=0x3e99999a;*(unsigned int*)(*(int*)(*p+20)+12)=0x3f000000;*(unsigned int*)(*(int*)(*p+28))=0x42400000;*(unsigned int*)(*(int*)(*p+28)+4)=0x42400000;*(unsigned int*)(*(int*)(*p+36))=0;*(unsigned int*)(*(int*)(*p+36)+4)=0;*(unsigned int*)(*(int*)(*p+36)+8)=0x3f800000;*(unsigned int*)(*(int*)(*p+36)+12)=0x3f800000;func_0011CDF0(q);func_0011CE10(q,0);func_0011CE20(q,0);func_0011CE30(q,0x40400000,0x40800000);func_0011CE50(q,0,0,0,0xbf000000);func_0011CF30(q,0x42a00000,0x42a00000);func_0011CFC0(q,0x41f00000);}

void func_0007A240(int p,undefined4 q,int v) { void func_0011E3D0(...); float func_0012E7B0(...); extern float D_001D2B64,D_001D411C; void func_0011CFC0(...); void func_0011CE50(...); int i; float d; func_0011E3D0(p);i=*(int *)(p+0x17c);d=func_0012E7B0((float *)(i+4),(float *)(v+0x30));p+=0x54;if(d<=D_001D2B64){func_0011CFC0(p,0);}else if(d<=D_001D411C){func_0011CFC0(p,0x40a00000);func_0011CE50(p,0,0,0,0xbf333333);}else{func_0011CFC0(p,0x41f00000);func_0011CE50(p,0,0,0,0xbf000000);}*(undefined4 *)(i+4)=*(undefined4 *)(v+0x30);*(undefined4 *)(i+8)=*(undefined4 *)(v+0x34);*(undefined4 *)(i+12)=*(undefined4 *)(v+0x38);}

void func_0007A2E0(void) {
    extern int D_001D6554;
    extern void func_0007A090(void);
    extern void func_00083D00(void);
    extern void func_00079D10(void);
    extern void func_0007A240(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_0007A090, &D_001D6554);
    func_0011D270(func_00083D00, &D_001D6554);
    func_0011D290(func_00079D10, &D_001D6554);
    func_0011D2B0(func_0007A240, &D_001D6554);
    func_0011D2D0(func_00092810, &D_001D6554);
    func_0011D2F0(func_00083D60, &D_001D6554);
}

void func_0007A340(void) {
    extern int D_001D6554;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6554);
}

void *memset(void *, int, unsigned int);
char *strcpy(char *, const char *);
void _func_0007A350(void)
{
    extern char D_001D6570, D_001D6560;
    extern int D_0030809C;
    int func_0011E840(...);
    int func_0011DD60(...);
    int func_0011E830(...);
    int func_0011DEF0(...);
    int func_00110480(...);
    unsigned int off;
    int z;
    __declspec(align(8)) int s[0x3d];

    z = 0;
    off = 0;
    do {
        E5C0 *e = (E5C0 *)((char *)_D_002FA688 + off);
        memset(s, 0, sizeof(s));
        s[0x2e] = 1;
        s[0x2f] = 1;
        s[0x24] = 2;
        s[0x25] = 2;
        s[0x2a] = 3;
        s[0x2b] = 3;
        s[0x2c] = 3;
        s[0x2d] = 3;
        s[0x20] = z;
        s[0x21] = z;
        s[0x22] = z;
        s[0x23] = z;
        s[0x30] = z;
        s[0x36] = z;
        s[0x35] = z;
        s[0x37] = z;
        s[0x3c] = 10;
        s[0x39] = 0x64;
        strcpy((char *)s, "sprites/trail_grey.tga");
        s[0x3b] = 0x58;
        e->a = func_0011E840(&D_001D6570, s);
        e->b = (unsigned char *)func_0011DD60(&D_001D6560, 0x64, e->a, *(int *)(e->a + 0x14c));
        func_0011E830(e->a, e->b);
        func_0011DEF0(e->b);
        e->c = z;
        func_00110480(D_0030809C, e->a, 8);
        off += 0x10;
    } while (off < 0x40);
}

void func_0007A4A0(void)
{
  int func_001160B0(...);
  extern undefined D_002FA68C;
  int func_00110760(...);
  extern undefined D_002FA688;
  uint uVar1;
  
  uVar1 = 0;
  do {
    func_001160B0(*(undefined4 *)(((undefined *)&D_002FA68C) + uVar1));
    func_00110760(*(undefined4 *)(((undefined *)&D_002FA688) + uVar1));
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0x40);
  return;
}

int *_func_0007A4D0(int param_1, int param_2)
{
    extern int D_002FA688[], D_002FA68C[], D_002FA690[], D_002FA694[], D_0030809C, D_001D6598;
    int func_00103210(...);
    void func_00103480(...);
    void func_00103960(...);
    void func_00110060(...);
    void func_00110420(...);
    void func_001105E0(...);
    void func_00110000(...);
    int func_000F8F40(...);
    void func_00110480(...);
    void func_0011E3A0(...);
    void func_0011DED0(...);
    __declspec(align(16)) char local[64];
    unsigned int i;
    int iVar = func_00103210(&D_001D6598);
    if (iVar != 0) {
        func_00103480(iVar, 1);
        func_00103960(iVar, param_1, 0);
    }
    i = 0;
    int *piVar = D_002FA690;
    do {
        if (*piVar == 0) {
            func_00110060(*(int *)(param_1 + 0x2c), local);
            int off = i * 0x10;
            int *p = (int *)((char *)D_002FA688 + off);
            func_00110420(D_0030809C, *(int *)((char *)D_002FA688 + off));
            func_001105E0(*p, local, 0);
            func_00110000(*p);
            iVar = func_000F8F40(*(int *)(param_1 + 0x2c));
            func_00110480(*(int *)(iVar + 0xe0), *p, 8);
            func_0011E3A0(*(int *)((char *)D_002FA68C + off), param_1);
            func_0011DED0(*(int *)((char *)D_002FA68C + off));
            *(int *)((char *)D_002FA694 + off) = param_2;
            *(int *)((char *)D_002FA690 + off) = 1;
            return p;
        }
        i++;
        piVar += 4;
    } while (i < 4);
    return 0;
}

int _func_000F8F40(...);
int _func_00110420(...);
int _func_00110480(...);
int _func_0011DEF0(...);
int _func_0011D310(...);
extern int _D_0030809C;
void _func_0007A5C0(int p1, int p2)
{
    unsigned int i;
    for (i = 0; i < 4; i++) {
        if (_D_002FA688[i].d == p2) {
            int r = _func_000F8F40(p1);
            _func_00110420(*(int *)(r + 0xe0), _D_002FA688[i].a);
            _func_00110480(_D_0030809C, _D_002FA688[i].a, 8);
            _func_0011DEF0(_D_002FA688[i].b);
            unsigned char *e = _D_002FA688[i].b;
            unsigned int j;
            for (j = 0; j < *(unsigned int *)(e + 0x15c); j++) {
                _func_0011D310(*(int *)(e + 0x160) + j * 0x58, *(int *)(*(int *)(e + 0x50) + 0x2c), e + 0x54);
                *(int *)(*(int *)(e + 0x160) + j * 0x58 + 0x20) = 0;
            }
            _D_002FA688[i].c = 0;
            _D_002FA688[i].d = 0;
            return;
        }
    }
}

void func_0007A850(int param_1)
{
  int func_00131310(...); float func_00131760(...);
  extern float D_001D541C; extern float D_001D5420; extern float D_001D35FC; extern float D_001D31C8;
  uint uVar1; int iVar2; int iVar3;
  iVar2=0xf;
  do { uVar1=func_00131310(); iVar3=(uVar1 % *(uint *)(param_1+0x15c))*0x58;
    *(float *)(*(int *)(param_1+0x160)+0x30+iVar3)=func_00131760()*D_001D541C-D_001D5420;
    *(float *)(*(int *)(param_1+0x160)+0x34+iVar3)=func_00131760()*D_001D35FC-D_001D31C8;
    iVar2--; *(float *)(*(int *)(param_1+0x160)+0x38+iVar3)=func_00131760()*D_001D541C-D_001D5420;
  } while(iVar2!=0);
}

void _func_0007A8D0(int param_1, int param_2)
{
    int func_0011BDD0(int, int);
    int func_001152B0(int, void *);
    int *obj;
    int *res;
    int count;
    int i;
    int n4;
    int *src;
    int *dst;
    __declspec(align(16)) char buf[0x1000];

    obj = *(int **)(param_2 + 0x98);
    res = (int *)func_0011BDD0(obj[0x1c / 4], 1);
    count = res[1];
    (*(short *)(obj[0x1c / 4] + 0x2a))--;
    func_001152B0(*(int *)(param_2 + 0x98), buf);
    i = 0;
    if (count > 3) {
        n4 = ((count - 4) >> 2) + 1;
        src = (int *)(buf + 8);
        do {
            dst = *(int **)(*(int *)(*(int *)(param_1 + 0x50) + 0x2c) + 4);
            dst[i * 12 / 4] = src[-2];
            dst[i * 12 / 4 + 1] = src[-1];
            dst[i * 12 / 4 + 2] = src[0];
            dst = *(int **)(*(int *)(*(int *)(param_1 + 0x50) + 0x2c) + 4);
            dst[i * 12 / 4 + 3] = src[0xe];
            dst[i * 12 / 4 + 4] = src[0xf];
            dst[i * 12 / 4 + 5] = src[0x10];
            dst = *(int **)(*(int *)(*(int *)(param_1 + 0x50) + 0x2c) + 4);
            dst[i * 12 / 4 + 6] = src[0x1e];
            dst[i * 12 / 4 + 7] = src[0x1f];
            dst[i * 12 / 4 + 8] = src[0x20];
            dst = *(int **)(*(int *)(*(int *)(param_1 + 0x50) + 0x2c) + 4);
            dst[i * 12 / 4 + 9] = src[0x2e];
            dst[i * 12 / 4 + 10] = src[0x2f];
            dst[i * 12 / 4 + 11] = src[0x30];
            i += 4;
            src += 0x40;
            n4--;
        } while (n4 != 0);
    }
    while (i < count) {
        dst = *(int **)(*(int *)(*(int *)(param_1 + 0x50) + 0x2c) + 4);
        src = (int *)(buf + 8 + i * 0x40);
        dst[i * 3] = src[-2];
        dst[i * 3 + 1] = src[-1];
        dst[i * 3 + 2] = src[0];
        i++;
    }
    **(int **)(*(int *)(param_1 + 0x50) + 0x2c) = count;
}

void func_0007AA40(void)
{
  extern int D_001D6560;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_0007A690(...); int func_000688D0(...); int func_00085E20(...); int func_0007A850(...); int func_0007A8D0(...);
  func_0011D000(&D_001D6560,func_0007A690);
  func_0011D270(&D_001D6560,func_000688D0);
  func_0011D290(&D_001D6560,func_00085E20);
  func_0011D2B0(&D_001D6560,func_0007A850);
  func_0011D2D0(&D_001D6560,func_0007A8D0);
}

void func_0007AA90(void) {
    extern int D_001D6560;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6560);
}

void func_0007AAA0(int *param_1, int param_2)
{
  int func_0011CD40(...);
  float func_00131760(void);
  extern float D_001D27EC;
  extern float D_001D2808;
  extern float D_001D27B0;
  extern float D_001D31C8;
  extern float D_001D2B64;
  int func_0011CDF0(...);
  int func_0011CE20(...);
  int func_0011CE10(...);
  int func_0011CE30(...);
  int func_0011CE50(...);
  int func_0011CF30(...);
  int func_0011CFC0(...);
  int iVar2;
  unsigned int uVar4;

  iVar2 = func_0011CD40(1, 5, 1, 5, 1);
  *param_1 = iVar2;
  **(int **)(iVar2 + 4) = 0;
  *(int *)(*(int *)(*param_1 + 4) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 4) + 8) = 0;
  for (uVar4 = 0; uVar4 < 0x3c; uVar4 += 0xc) {
    *(float *)(uVar4 + *(int *)(*param_1 + 0xc)) = (func_00131760() - D_001D27EC) * D_001D2808;
    *(float *)(*(int *)(*param_1 + 0xc) + 4 + uVar4) = (func_00131760() + D_001D27B0) * 2.0f;
    *(float *)(*(int *)(*param_1 + 0xc) + 8 + uVar4) = (func_00131760() - D_001D27EC) * D_001D2808;
  }
  **(int **)(*param_1 + 0x14) = 0x3f018182;
  *(int *)(*(int *)(*param_1 + 0x14) + 4) = 0x3e949495;
  *(int *)(*(int *)(*param_1 + 0x14) + 8) = 0x3d109091;
  *(int *)(*(int *)(*param_1 + 0x14) + 0xc) = 0x3e19999a;
  uVar4 = 0;
  do {
    *(float *)(*(int *)(*param_1 + 0x1c) + 4 + uVar4) = func_00131760() * D_001D31C8 + D_001D2B64;
    *(int *)(*(int *)(*param_1 + 0x1c) + uVar4) = *(int *)(*(int *)(*param_1 + 0x1c) + 4 + uVar4);
    uVar4 = uVar4 + 8;
  } while (uVar4 < 0x28);
  **(int **)(*param_1 + 0x24) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 4) = 0;
  *(int *)(*(int *)(*param_1 + 0x24) + 8) = 0x3f800000;
  *(int *)(*(int *)(*param_1 + 0x24) + 0xc) = 0x3f800000;
  func_0011CDF0(param_2);
  func_0011CE20(param_2, 0x3f19999a);
  func_0011CE10(param_2, 0);
  func_0011CE30(param_2, 0x42200000, 0x42200000);
  func_0011CE50(param_2, 0, 0, 0, 0xbe19999a);
  func_0011CF30(param_2, 0x42200000, 0x42200000);
  func_0011CFC0(param_2, 0x46435000);
}

extern float D_001D27B8;
extern int D_002FA6D8;
extern int D_0030809C;
extern int _func_000F8F40(int);
extern void _func_00110420(int, int);
extern void _func_00110480(int, int, int);
#pragma optimize("p", on)
void _func_0007AC20(int obj, int arg1, int arg2) {
    if (*(int *)(obj + 0x4c) == 0) {
        int n = *(int *)(obj + 0x15c);
        int i;
        for (i = 0; i < n; i++) {
            if (D_001D27B8 != *(float *)(*(int *)(obj + 0x160) + i * 0x58 + 0x20)) {
                break;
            }
        }
        if (i == n) {
            int r = _func_000F8F40(arg1);
            _func_00110420(*(int *)(r + 0xe0), D_002FA6D8);
            _func_00110480(D_0030809C, D_002FA6D8, 8);
        }
    }
}
#pragma optimize("", on)
void func_0007AD30(int p) { int func_00110060(...); extern undefined4 D_002FA6E0; float func_00131760(...); extern float D_001D27EC,D_001D3E00,D_001D27B0; int a,b; longdouble x; unsigned char buf[68];float t30,t38;a=*(int *)(*(int *)(p+0x50)+0x2c);func_00110060(*(undefined4 *)(((undefined *)&D_002FA6E0)+0x2c),buf);for(b=0;b<0x3c;b+=0xc){x=((longdouble)func_00131760()-D_001D27EC)*D_001D3E00+t30;*(float *)(*(int *)(a+0xc)+b)=(float)(x+x);x=(longdouble)func_00131760()+D_001D27B0;*(float *)(*(int *)(a+0xc)+b+4)=(float)(x+x);x=((longdouble)func_00131760()-D_001D27EC)*D_001D3E00+t38;*(float *)(*(int *)(a+0xc)+b+8)=(float)(x+x);}}
#pragma optimize("", on)
