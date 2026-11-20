/* 15 functions from 0x000E2F50 to 0x000E3EBC, found by Ghidra. */
#include "common.h"

struct V3 { int x, y, z; };
#include <xmmintrin.h>
struct M4 { __m128 b[3]; };

void func_000E2F50(void)
{
  extern float D_00322484, D_001E461C, D_001D2A14, D_001D2808, D_001E5594;
  extern char *D_00322478;
  extern char D_002EED20, D_001DBD3C, D_001DBD4C, D_001DBD74;
  extern int D_003251BC, D_00308158;
  float func_00131230(float);
  int func_0005CCC0(...);
  int func_000B56D0(...);
  int func_00103210(...);
  int func_00103990(...);
  int func_00110330(...);
  int func_000E2E10(...);
  int func_00107C40(...);
  char *s;

  D_00322484 = D_001E461C + D_00322484;
  s = D_00322478;
  D_001E5594 = func_00131230(D_00322484 * D_001D2A14) * D_001D2808 + D_001D2A14;
  if (s[1] == 0) {
    func_0005CCC0(0x13);
    func_000B56D0(&D_002EED20, &D_001DBD3C, &D_001DBD4C, 0x42aa0000);
  }
  if (s[0x1f11] != 0 && s[0x1f12] == 0) {
    s[0x1f12] = 1;
    func_00103990(func_00103210(&D_001DBD74), 0);
    func_00110330(*(int *)(s + 0x1f14), 1);
  }
  if (s[0x1f59] != 0 && s[0x1f5a] == 0) {
    s[0x1f5a] = 1;
    func_00103990(func_00103210(&D_001DBD74), 0);
    func_00110330(*(int *)(s + 0x1f5c), 1);
  }
  if (s[0x1fa1] != 0 && s[0x1fa2] == 0) {
    s[0x1fa2] = 1;
    func_00103990(func_00103210(&D_001DBD74), 0);
    func_00110330(*(int *)(s + 0x1fa4), 1);
  }
  func_000E2E10();
  if (*s != 0) {
    s = D_00322478;
    if (s[1] == 0) {
      func_00107C40(D_003251BC, D_00308158, D_00308158);
      s[1] = 1;
    }
  }
}

void func_000E30B0(int param_1, unsigned int param_2)
{
    int func_00110330(...);
    unsigned int *node = *(unsigned int **)(param_1 + 0x28);
    while (node != 0) {
        func_000E30B0(*node, param_2);
        node = (unsigned int *)node[3];
    }
    func_00110330(param_1, param_2);
}

void func_000E31C0(int param_1)
{
  int func_00110060(...);
  extern int D_00307DF8;
  int func_0012F7A0(...);
  int func_0012F420(...);
  int func_0012F250(...);
  char func_00112250(...);
  int iVar1;
  int iVar2;
  int a[3], b[3], c[3], d[3];
  char m1[0x30], m2[0x30], m3[0x4c];

  iVar1 = *(int *)(param_1 + 0x110);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xba8) + 0x2c);
  if ((*(unsigned char *)(iVar2 + 0x20) & 1) == 0) {
    func_00110060(iVar2, m1);
    func_00110060(*(int *)(D_00307DF8 + 0x2c), m2);
    iVar2 = *(int *)(iVar1 + 0xba8);
    a[0] = *(int *)(iVar2 + 0xe8);
    a[1] = *(int *)(iVar2 + 0xec);
    a[2] = *(int *)(iVar2 + 0xf0);
    func_0012F7A0(a, m1);
    b[0] = a[0]; b[1] = a[1]; b[2] = a[2];
    c[0] = *(int *)(D_00307DF8 + 0xe8);
    c[1] = *(int *)(D_00307DF8 + 0xec);
    c[2] = *(int *)(D_00307DF8 + 0xf0);
    func_0012F7A0(c, m2);
    d[0] = c[0]; d[1] = c[1]; d[2] = c[2];
    func_0012F420(m2);
    func_0012F250(m3, m1, m2);
    if (func_00112250(*(int *)(iVar1 + 0xba8) + 0xf4, m3, D_00307DF8 + 0xf4) != 0
        && *(char *)(D_00307DF8 + 0x175) == 0) {
      iVar2 = D_00307DF8;
      *(int *)(iVar2 + 0x160) = *(int *)(iVar1 + 0xba8);
      *(char *)(iVar2 + 0x174) = 1;
      *(int *)(iVar2 + 0x178) = 0;
      *(int *)(iVar2 + 0x16c) = 0x3f800000;
    }
  }
}

void func_000E3430(void)
{
    extern int D_00322498;
    extern float D_003224A0[];
    extern float D_001D288C, D_001E461C, D_001D27B8;
    extern int D_0032249C[];
    int i;
    for (i = 0; i < D_00322498; ++i) {
        float v = D_003224A0[i * 2];
        if (v > D_001D288C) {
            v -= D_001E461C;
            D_003224A0[i * 2] = v;
            if (v < D_001D27B8) {
                D_003224A0[i * 2] = -1.0f;
                *(unsigned char *)(D_0032249C[i * 2] + 0x14) = 1;
            }
        }
    }
}

void _func_000E34A0(int param_1, float *param_2)
{
  int func_0012F120(...);
  int func_0012ECD0(...);
  extern float D_001E461C, D_001DC030, D_001D27B8;
  double func_00131230(float);
  int func_0012F7A0(...);
  int func_00068DA0(...);
  int func_001105E0(...);
  float mat[16];
  float v2[4];
  float v1[4];
  float pos[3];
  float rot[4];
  float *obj;
  float t;

  func_0012F120(mat);
  pos[0] = param_2[5];
  pos[1] = param_2[6];
  pos[2] = param_2[7];
  func_0012ECD0(v1, 0xbf800000);
  func_0012ECD0(v2, 0xbf800000);
  *param_2 = D_001E461C + *param_2;
  t = (float)(func_00131230((*param_2 / param_2[2]) * D_001DC030) * param_2[1]);
  t = param_2[0xb] / *(float *)(param_1 + 0xb7c) * t;
  obj = *(float **)&param_2[4];
  rot[0] = 0;
  rot[1] = 0;
  rot[2] = 1.0f;
  rot[3] = 0;
  v1[0] = obj[0x10];
  v1[1] = obj[0x11];
  v1[2] = obj[0x12];
  v1[1] = v1[1] - obj[0xd];
  if (t > D_001D27B8) {
    v1[0] = v1[0] - obj[0xc];
  } else {
    v1[0] = v1[0] + obj[0xc];
  }
  rot[3] = t;
  func_0012F7A0(v1, rot);
  func_00068DA0(mat, rot, v1);
  func_001105E0(*(int *)((char *)*(float **)&param_2[4] + 0x2c), mat, 0);
}

void func_000E3690(int param_1, int param_2, float param_3)
{
  extern int D_00307DF8, D_003080FC;
  extern char D_001DC034;
  extern float D_001D27B8;
  int func_000E35C0(...);
  int func_0012F120(...);
  int func_0009C6A0(...);
  int func_00110060(...);
  int func_0012E650(...);
  int func_001105E0(...);
  int func_00110000(...);
  int func_000120B0(...);
  int iVar2;
  int in[3];
  int out[3];
  __declspec(align(16)) int mb[16];
  __declspec(align(16)) int ma[16];

  if (param_2 == param_1 + 0xb08) {
    param_2 = param_1 + 0xa94;
  }
  func_000E35C0(param_1, param_2);
  func_0012F120(ma);
  iVar2 = func_0009C6A0(*(int *)(param_2 + 0x10), &D_001DC034);
  func_00110060(*(int *)(iVar2 + 0x2c), mb);
  in[0] = *(int *)(D_00307DF8 + 0xe8);
  in[1] = *(int *)(D_00307DF8 + 0xec);
  in[2] = *(int *)(D_00307DF8 + 0xf0);
  in[1] = 0;
  func_0012E650(out, in);
  ma[12] = out[0];
  ma[13] = out[1];
  ma[14] = out[2];
  func_001105E0(*(int *)(D_00307DF8 + 0x2c), ma, 0);
  func_00110000(*(int *)(D_00307DF8 + 0x2c));
  **(int **)(D_00307DF8 + 0x110) = 2;
  D_003080FC = *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0xb88) = param_2;
  if (param_3 != D_001D27B8) {
    func_000120B0(D_00307DF8 + 0x150, param_3, 1, 1);
  }
}

int func_000E37C0(unsigned int param_1)
{
 int func_0009C6A0(...); int func_0009D3E0(...); int func_00110330(...); int func_00131760(...); int func_0009D280(...);
 extern char D_001DC054,D_001DC04C,D_001DC044,D_001DC03C; extern float D_003234B8,D_001D2C00;
 int a[4]; a[0]=func_0009C6A0(param_1,&D_001DC054); a[1]=func_0009C6A0(param_1,&D_001DC04C); a[2]=func_0009C6A0(param_1,&D_001DC044); a[3]=func_0009C6A0(param_1,&D_001DC03C);
 int result=0, bit=1; int i=0;
 do { int p=a[i]; if(p) { func_0009D3E0(p); func_00110330(*(int *)(p+0x2c),0); if((float)func_00131760() < D_003234B8*D_001D2C00) { result+=bit; func_00110330(*(int *)(p+0x2c),1); func_0009D280(p); } } bit+=bit; ++i; } while(i!=4);
 return result;
}

int func_000E3BB0(int param_1,int param_2)
{
 int i=0; int *p=(int *)(param_1+0x2f0); int result;
 while(i!=0x13) { int q=*p;
   if(param_2==q) { result=i*0x74+param_1+0x2e0; return result; }
   if(param_2!=0 && **(int **)(*(int *)(param_2+0x2c)+0x2c)==*(int *)(q+0x2c)) { result=i*0x74+param_1+0x2e0; return result; }
   ++i; p=(int *)((char *)p+0x74);
 }
 return 0;
}
struct S_D_000E34A0_arg0 {
    int s32_aa0;
    void *ptr_aa4;
    float f32_ab0;
    int s32_ac0;
    void *ptr_b18;
    float f32_b24;
    float f32_b7c;
    int s32_b80;
};
// Prototypes
int func_000E34A0(int param_1, undefined4 *param_2);
int func_00110000(undefined4 *param_1);
extern unsigned int D_00322820;
extern unsigned int D_00307DF8;
extern float D_001D35F8; // Used in comparison (ABS(float - float) < float)
extern unsigned int D_0032280C;
