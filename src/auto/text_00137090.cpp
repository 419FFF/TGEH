/* 21 functions from 0x00137090 to 0x00137EE7, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

unsigned int func_001371E0(void)
{
 extern unsigned char D_0033272C; extern unsigned int D_00332728; int func_00109B91(...);
 int v;
 if(D_0033272C)return D_00332728;
 v=func_00109B91()-1;
 switch(v){case 0:return 0;case 1:return 5;case 2:return 2;case 3:return 1;case 4:return 3;case 5:return 4;case 6:return 7;case 7:return 8;case 8:return 6;default:return 0;}
}

void *func_001373A0(void)
{
 extern unsigned int D_00332298[32]; extern unsigned int D_0033231C; extern unsigned int D_001E8B70;
 int __stdcall func_00165A09(...); int func_00133CF0(...); unsigned int i;
 for(i=0;i<32;i++)D_00332298[i]=0;
 func_00165A09(&D_001E8B70,0,0,D_0033231C,0x200,0x200,0,1);
 func_00133CF0(0x200,0x200,1,1,D_00332298,D_0033231C);
 return D_00332298;
}

extern "C" void *memcpy(void *, const void *, unsigned int);
unsigned int func_00137870(float a,float b,float c,float d)
{
 extern float D_001D66D8;
 int x=(int)(a*D_001D66D8);
 int y=(int)(b*D_001D66D8);
 int z=(int)(c*D_001D66D8);
 int w=(int)(d*D_001D66D8);
 return ((x&255)<<24)|((w&255)<<16)|((y&255)<<8)|(z&255);
}

extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
void func_001378E0(int a, unsigned int b)
{
    extern int D_00332744, D_00332248, D_00332200, D_001E82E0, D_001DF790[];
    extern unsigned char D_00332734;
    void __stdcall func_0014ADB0(int, void *);
    void __stdcall func_0014CD60(int, int, int);
    void __stdcall func_0014D160(int);
    void __stdcall func_0014DD40(int);
    unsigned int v;
    int t;
    D_00332744 = a;
    D_00332734 = 1;
    if (a >= 5) {
        float m[16];
        memset(m, 0, sizeof(m));
        m[0] = 1.0f / 320.0f;
        m[5] = -1.0f / 240.0f;
        m[10] = 1.0f;
        m[12] = -1.0f;
        m[13] = 1.0f;
        m[15] = 1.0f;
        func_0014ADB0(1, m);
        memset(m, 0, sizeof(m));
        m[0] = 1.0f;
        m[5] = 1.0f;
        m[10] = 1.0f;
        m[15] = 1.0f;
        func_0014ADB0(0, m);
        func_0014ADB0(6, m);
    }
    v = (((b & 2) << 4) | (b & 1)) << 1;
    if (b & 4)
        v |= 0x100;
    else if (b & 8)
        v |= 0x200;
    t = D_001DF790[a];
    if (D_00332248 != 0 || D_00332200 != 0) {
        D_00332248 = 0;
        D_00332200 = 0;
        func_0014CD60(0, 0, 0);
    }
    if (v != D_001E82E0) {
        D_001E82E0 = v;
        func_0014D160(v);
    }
    func_0014DD40(t);
}
void func_00137A20(void){extern unsigned char D_00332734;extern int D_00332740,D_0033273C,D_00332738;void __stdcall func_0014DC90(int,int,int,int,int);if(!D_00332734)func_0014DC90(-1,D_00332738,D_0033273C,D_00332740,0x3f800000);else D_00332734=0;}

#pragma optimize("", on)
void func_00137A60(int a0) {
    int __stdcall func_0014DCF0(int, int);
    func_0014DCF0(3, a0);
}

void func_00137A70(undefined4 *param_1)
{
  int __stdcall func_0014DC90(int, int, int, int, int);
  func_0014DC90((int)(3), (int)(*param_1), (int)(param_1[1]), (int)(param_1[2]), (int)(param_1[3]));
  return;
}

void func_00137A90(int a0, int a1) {
    int __stdcall func_0014DC90(int, int, int, int, int);
    func_0014DC90(9, a0, a1, 0, 1065353216);
}

void func_00137AB0(void){extern unsigned char D_00332734;extern int D_00332740,D_0033273C,D_00332738,D_00332744,D_003323A0,D_003326D0,D_003321C0;void __stdcall func_0014DC90(int,int,int,int,int);void func_0014DD80(void);void __stdcall func_0014ADB0(int,int);if(!D_00332734)func_0014DC90(-1,D_00332738,D_0033273C,D_00332740,0x3f800000);else D_00332734=0;func_0014DD80();if(D_00332744>=5){func_0014ADB0(0,(int)&D_003323A0);func_0014ADB0(6,(int)&D_003326D0);func_0014ADB0(1,(int)&D_003321C0);}}

void _func_00137B20(int a, unsigned int n, int *p)
{
    extern unsigned char _D_00332734;
    extern int _D_00332738, _D_0033273C, _D_00332740, _D_00332744;
    extern char _D_003323A0[], _D_003326D0[], _D_003321C0[];
    extern void _func_001378E0(int, int);
    extern void __stdcall _func_0014DC90(int, int, int, int, int);
    extern void _func_0014DD80(void);
    extern void __stdcall _func_0014ADB0(int, void*);
    _func_001378E0(a, 7);
    if (n > 0) {
        int *q = p + 10;
        do {
            if (_D_00332734 == 0)
                _func_0014DC90(-1, _D_00332738, _D_0033273C, _D_00332740, 0x3f800000);
            else
                _D_00332734 = 0;
            _D_00332738 = p[0];
            _D_0033273C = q[-9];
            _D_00332740 = q[-8];
            _func_0014DC90(3, q[-2], q[-1], q[0], q[1]);
            _func_0014DC90(9, q[2], q[3], 0, 0x3f800000);
            p += 0x18;
            q += 0x18;
        } while (--n);
    }
    if (_D_00332734 == 0)
        _func_0014DC90(-1, _D_00332738, _D_0033273C, _D_00332740, 0x3f800000);
    else
        _D_00332734 = 0;
    _func_0014DD80();
    if (_D_00332744 >= 5) {
        _func_0014ADB0(0, _D_003323A0);
        _func_0014ADB0(6, _D_003326D0);
        _func_0014ADB0(1, _D_003321C0);
    }
}

undefined * func_00137C30(int param_1)
{
  extern undefined D_00332748;
  return ((undefined *)&D_00332748) + param_1 * 0x68;
}

undefined4 func_00137C40(int param_1)
{
  extern undefined D_00332A88;
  return *(undefined4 *)(((undefined *)&D_00332A88) + param_1 * 4);
}

void func_00137C50(void){void __stdcall func_0014AF00(int);void func_00088F10(...);volatile unsigned int a[16];for(int i=0;i<16;i++)a[i]=0;for(int i=0;i<8;i++)a[i]=0x3f800000;a[8]=a[9]=a[10]=0x3f000000;func_0014AF00((int)a);func_00088F10(0x66);}

extern "C" void *memcpy(void*,const void*,unsigned int);
void func_00137CF0(int *p){int func_00116A90(...);int *d=(int*)func_00116A90(0x28,1,1);memcpy(d,p,36);d[9]=-1;}

void *memcpy(void *, const void *, unsigned int);
void __movsd(unsigned int *, const unsigned int *, unsigned int);
void func_00137D20(unsigned int *dst, const unsigned int *src) { memcpy(dst,src,36); }

extern float D_001D6008;
extern float D_001D27B0;
extern float D_001D27B8;
void func_00137D40(float *param_1)
{
  extern int D_00332AAC, D_00332AB0, D_00332AB4, D_00332AB8;
  *param_1 = *(float *)&D_00332AAC * D_001D6008;
  param_1[1] = *(float *)&D_00332AB0 * D_001D6008;
  param_1[2] = *(float *)&D_00332AB4 * D_001D6008;
  param_1[3] = *(float *)&D_00332AB8 * D_001D6008;
  if (*param_1 > D_001D27B0) {
    *param_1 = 1.0f;
  } else if (*param_1 < D_001D27B8) {
    *param_1 = 0.0f;
  }
  if (param_1[1] > D_001D27B0) {
    param_1[1] = 1.0f;
  }
  if (param_1[1] < D_001D27B8) {
    param_1[1] = 0.0f;
  }
  if (param_1[2] > D_001D27B0) {
    param_1[2] = 1.0f;
  }
  if (param_1[2] < D_001D27B8) {
    param_1[2] = 0.0f;
  }
  if (param_1[3] > D_001D27B0) {
    param_1[3] = 1.0f;
  }
  if (param_1[3] < D_001D27B8) {
    param_1[3] = 0.0f;
  }
}

extern int D_00332AAC, D_00332AB0, D_00332AB4, D_00332AB8, D_003326AC;
extern int func_00131460(...);
extern void func_00088F10(int);
extern void __stdcall RtlEnterCriticalSection(int *);
extern void __stdcall RtlLeaveCriticalSection(int *);
void func_00137E30(void) {
 int a,b,c,d;
 a=func_00131460(D_00332AAC); b=func_00131460(D_00332AB0);
 c=func_00131460(D_00332AB4); d=func_00131460(D_00332AB8);
 if((unsigned)a>255)a=255; if((unsigned)b>255)b=255;
 if((unsigned)c>255)c=255; if((unsigned)d>255)d=255;
 RtlEnterCriticalSection(&D_003326AC);
 func_00088F10((a&255)<<24 | (d&255)<<16 | (b&255)<<8 | (c&255));
 RtlLeaveCriticalSection(&D_003326AC);
}

