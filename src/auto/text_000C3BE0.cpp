/* 13 functions from 0x000C3BE0 to 0x000C4AB2, found by Ghidra. */
#include "common.h"
struct S_000C3F00_A { unsigned char a, b, pad0[2]; float pos[3]; char pad1[0x14]; int obj; unsigned char c, pad2[3]; int obj2; int pad3; float x, y; char pad4[4]; };
struct S_000C3F00_B { float pos[3]; char pad0[0xc]; int count; int state; char pad1; unsigned char f1; unsigned char f2; char pad2; float v[3]; char pad3[0xc]; int arg[3]; char pad4[0x90 - 0x48]; };
struct S_000C4240 { int obj; char on; char pad[3]; float x, y, z; float vx, vy, vz; float pad2[2]; float lim; };
extern "C" double fabs(double);
#pragma intrinsic(fabs)
struct P_000C49A0 { float x, y, z, w; char on; char pad[3]; };
struct S_000C44A0 { int obj; char on; char pad[3]; float x, y, z, vx, vy; int w; float h; };
struct Q_000C44A0 { float x, y, z, w; };
struct P_000C48B0 { float w; char on; char pad[3]; float x, y, z; };

void func_000C3E40(void) {
 extern unsigned char D_00315718;extern float D_00314F60,D_001D2B98,D_00314F64,D_00314F68,D_001D4EB0,D_0031601C;extern int D_00315CC8,D_00315998,D_00315F88;float fabsf(float);int func_00103990(...),func_00110330(...);float *p=(float *)&D_00315718;
 do{if(*((char *)p-4)&&!*((char *)p-3)&&fabsf(p[0]-D_00314F60)<D_001D2B98&&fabsf(p[1]-D_00314F64)<D_001D2B98&&fabsf(p[2]-D_00314F68)<D_001D4EB0){func_00103990(D_00315CC8,0);*((char *)p-4)=0;++D_00315998;D_0031601C=(float)D_00315998/(float)D_00315F88;func_00110330(*(int *)(*(int *)((char *)p-8)+0x2c),0);}p+=16;}while(p<(float *)&D_00315998);
}

void func_000C3F00(void)
{
  extern int D_003159A4, D_00315CC0, D_00315CA0, D_00315C98, D_00314F14;
  extern S_000C3F00_A D_00315714[10];
  extern S_000C3F00_B D_003159B4[5];
  extern char D_001D7108;
  int func_00103990(...), func_0007F4C0(...), func_00110330(...), func_00091510(...);
  int i;
  if (D_003159A4 != -1) {
    D_003159A4++;
    if (D_003159A4 == 5) {
      D_003159A4 = -1;
      return;
    }
    if (D_003159A4 == 2) {
      for (i = 0; i < 10; i++) {
        S_000C3F00_A *p = &D_00315714[i];
        if (p->a != 0 && p->b != 0 && p->c != 0) {
          func_00103990(D_00315CC0, 0);
          func_0007F4C0(0x43fa0000, p->pos);
          p->b = 0;
          func_00110330(p->obj2, 0);
          func_00110330(*(int *)(p->obj + 0x2c), 1);
          p->x = 0;
          *(int *)&p->y = 0x43fa0000;
        }
      }
      for (i = 0; i < 5; i++) {
        S_000C3F00_B *q = &D_003159B4[i];
        if (q->count != 0 && q->f1 != 0) {
          func_00103990(D_00315CA0, 0);
          q->count--;
          q->state = 3;
          if (q->count == 0) {
            q->f2 = 1;
            q->v[0] = q->pos[0];
            q->v[1] = q->pos[1];
            q->v[2] = q->pos[2];
            func_00103990(D_00315C98, 0);
            func_0007F4C0(0x447a0000, q->pos);
            func_00091510(&D_001D7108, D_00314F14, q->arg, 1, 0);
          }
        }
      }
    }
  }
}

void func_000C4020(void) {
 extern int D_00315F9C,D_003159A4,D_00313A88,D_00307D08,D_00315CA4;extern unsigned char D_00315C90;extern float D_001D27B8;int func_00103990(...);
 register int count=D_00315F9C;if(count){--count;D_00315F9C=count;}if(!D_00315C90)return;
 int state=D_003159A4;if(state!=-1&&state!=4)return;
 int *table=*(int **)(D_00307D08+0x10);int i=D_00313A88;float *entry=(float *)((char *)table+i*24);
 if(*(short *)((char *)entry+0x10)!=0)return;
 if(D_001D27B8==*entry||count!=0)return;
 func_00103990(D_00315CA4,(int)0);D_003159A4=0;D_00315F9C=10;
}

void func_000C40A0(void) {
 extern int D_003159A0,D_00315CA8,D_00314F60,D_00314FB4,D_00314FB8,D_00314FC4,D_00314FC8,D_00315CAC,D_00314F00,D_00314F04;extern unsigned char D_0031151C,D_00315C90;extern float D_001E4908[8],D_00315FA4;
 int func_00103990(...),func_0007F4C0(...),func_00131310(...),func_000A4010(...);
 if(D_003159A0||!D_0031151C)return;func_00103990(D_00315CA8,0);func_0007F4C0(0x43fa0000,&D_00314F60);D_00315C90=0;
 unsigned int v=func_00131310();D_00315FA4=D_001E4908[v&7];func_000A4010(D_0031151C-1);
 if((unsigned char)D_0031151C>0){D_003159A0=0x4b;D_00314FC4=D_00314FB4;D_00314FC8=D_00314FB8;return;}
 func_00103990(D_00315CAC,0);D_00314F00=11;D_00314F04=0;D_00315C90=0;
}

void func_000C4240(void)
{
  extern S_000C4240 D_00315450[16];
  extern char D_00315720;
  extern float D_001E461C, D_00314F68, D_00314F60, D_00314F64, D_001D4EB0;
  extern int D_00315CBC;
  int func_0012F120(...), func_0012FE20(...), func_0012F910(...), func_001105E0(...), func_00103990(...), func_0007F4C0(...), func_00110330(...);
  __declspec(align(16)) float m[16];
  S_000C4240 *p = D_00315450;
  do {
    if (p->on) {
      p->x = D_001E461C * p->vx + p->x;
      p->y = D_001E461C * p->vy + p->y;
      p->z = D_001E461C * p->vz + p->z;
      func_0012F120(m);
      func_0012FE20(m, 0, 0x40490fdb, 0);
      func_0012F910(m, 0x3fc00000);
      m[12] = p->x;
      m[13] = p->y;
      m[14] = p->z;
      func_001105E0(*(int *)(p->obj + 0x2c), m, 0);
      if (p->z < D_00314F68 + p->lim) {
        func_00103990(D_00315CBC, 0);
        func_0007F4C0(0x447a0000, &p->x);
        p->on = 0;
        func_00110330(*(int *)(p->obj + 0x2c), 0);
        if ((float)fabs(p->x - D_00314F60) < D_001D4EB0 && (float)fabs(p->y - D_00314F64) < D_001D4EB0)
          func_000C40A0();
      }
    }
    p++;
  } while ((int)p < (int)&D_00315720 - 0x10 + 0x10 - 0x10 + 0x10 - 0x10 + 0x10 - 0x10 + 0x10 - 0x10 + 0x10 - 0x10 + 0x10 - 0x10 + 0x10 - 0x10 + 0x10);
}

void func_000C4370(float param_1, float param_2, float param_3)
{
  extern char D_00315194, D_00315190, D_00315454;
  extern float D_00314F80, D_00314F84, D_00314F88;
  extern char D_00315198, D_0031519C, D_003151A0, D_003151A4, D_003151A8, D_003151AC;
  extern int D_00315C9C;
  int func_0012F120(...);
  int func_0012FE20(...);
  int func_001105E0(...);
  int func_00110330(...);
  int func_00110000(...);
  int func_00103990(...);
  char *pc = &D_00315194;
  int i = 0;
  float fv;
  __declspec(align(16)) float m[15];
  do {
    if (*pc == 0) {
      i = i * 0x2c;
      param_3 = 1.0f / param_3;
      *(float *)(&D_00315198 + i) = D_00314F80;
      *(float *)(&D_0031519C + i) = D_00314F84;
      *(float *)(&D_003151A0 + i) = D_00314F88;
      *(float *)(&D_003151A4 + i) = (param_1 * 1600.0f - D_00314F80) * param_3;
      *(float *)(&D_003151A8 + i) = ((param_2 * 1200.0f + 5000.0f) - D_00314F84) * param_3;
      fv = 50000.0f - D_00314F88;
      (&D_00315194)[i] = 1;
      *(float *)(&D_003151AC + i) = fv * param_3;
      func_0012F120(m);
      func_0012FE20(m, 0, 0, 0);
      m[12] = *(float *)(&D_00315198 + i);
      m[13] = *(float *)(&D_0031519C + i);
      m[14] = *(float *)(&D_003151A0 + i);
      func_001105E0(*(int *)(*(int *)(&D_00315190 + i) + 0x2c), m, 0);
      func_00110330(*(int *)(*(int *)(&D_00315190 + i) + 0x2c), 1);
      func_00110000(*(int *)(*(int *)(&D_00315190 + i) + 0x2c));
      func_00103990(D_00315C9C, 0);
      return;
    }
    pc += 0x2c;
    i++;
  } while ((int)pc < (int)&D_00315454);
}

void func_000C44A0(float a, float b, int n)
{
  extern char D_00315194, D_00315454;
  extern float D_001D35FC, D_001D41D4, D_00314F64, D_00314F68, D_00314F60, D_001D27B0, D_001D9CC8, D_001D9CCC;
  extern int D_00315CC4, D_00315190, D_00315198, D_003151A0, D_003151A4, D_003151A8, D_003151AC, D_003151B0, D_00315718, D_00315720;
  extern float D_0031519C, D_0031571C;
  int func_0012F120(void *), func_0012FE20(void *, int, int, int), func_001105E0(int, void *, int), func_00110330(int, int), func_00110000(int), func_00103990(int, int);
  __declspec(align(16)) struct { char pad[0x30]; int x, y, z; } buf;
  int i = 0;
  char *p = &D_00315194;
  do {
    if (*p == 0) goto found;
    p += 0x2c;
    ++i;
  } while ((int)p < (int)&D_00315454);
  return;
found:
  i *= 0x2c;
  n *= 0x40;
  *(int *)((char *)&D_00315198 + i) = *(int *)((char *)&D_00315718 + n);
  *(float *)((char *)&D_0031519C + i) = *(float *)((char *)&D_0031571C + n) - D_001D35FC;
  *(int *)((char *)&D_003151A0 + i) = *(int *)((char *)&D_00315720 + n);
  b = b * D_001D41D4;
  *(int *)((char *)&D_003151B0 + i) = 0x3f000000;
  b = b + D_00314F64;
  float c = *(float *)((char *)&D_0031571C + n);
  float d = D_001D27B0 / (D_00314F68 - *(float *)((char *)&D_00315720 + n));
  float e = a * D_001D9CC8 + D_00314F60;
  float f = *(float *)((char *)&D_00315718 + n);
  *(int *)((char *)&D_003151AC + i) = 0xc59c4000;
  *((char *)&D_00315194 + i) = 1;
  *(float *)((char *)&D_003151A4 + i) = (e - f) * d * D_001D9CCC;
  *(float *)((char *)&D_003151A8 + i) = d * (b - c) * D_001D9CCC;
  func_0012F120(&buf);
  func_0012FE20(&buf, 0, 0, 0);
  buf.x = *(int *)((char *)&D_00315198 + i);
  buf.y = *(int *)((char *)&D_0031519C + i);
  buf.z = *(int *)((char *)&D_003151A0 + i);
  func_001105E0(*(int *)(*(int *)((char *)&D_00315190 + i) + 0x2c), &buf, 0);
  func_00110330(*(int *)(*(int *)((char *)&D_00315190 + i) + 0x2c), 1);
  func_00110000(*(int *)(*(int *)((char *)&D_00315190 + i) + 0x2c));
  func_00103990(D_00315CC4, 0);
}

void func_000C47A0(void)
{
    extern unsigned char D_00315C90;
    extern float D_00316020, D_00314FA8, D_00316024, D_00314FAC, D_001E461C, D_001D2808, D_001D27B0, D_001D2D4C;
    extern volatile float D_001D9CD4;
    extern int D_00313B34, D_00313AD0;
    extern char* D_00307D08;
    if (D_00315C90) {
        D_00316020 = D_00314FA8;
        D_00316024 = D_00314FAC;
        D_00314FA8 += D_001E461C * *(float*)(*(char**)(D_00307D08 + 0x10) + D_00313B34 * 0x18) * D_001D2808;
        D_00314FAC += D_001E461C * *(float*)(*(char**)(D_00307D08 + 0x10) + D_00313AD0 * 0x18) * D_001D2808;
        D_00314FA8 *= D_001D9CD4;
        D_00314FAC *= D_001D9CD4;
        if (D_00314FA8 > D_001D27B0)
            D_00314FA8 = 1.0f;
        else if (D_00314FA8 < D_001D2D4C)
            D_00314FA8 = -1.0f;
        if (D_00314FAC > D_001D27B0)
            D_00314FAC = 1.0f;
        else if (D_00314FAC < D_001D2D4C)
            D_00314FAC = -1.0f;
    }
}

void func_000C48B0(void)
{
  extern P_000C48B0 D_00315CE8[34];
  extern char *D_002FBA90;
  extern float D_001D27B0, D_001D5050, D_00315C80, D_001D2A1C, D_00315C84, D_001D9CD8, D_00315C88, D_001D341C, D_001D27F8, D_001D2C00;
  float func_00131760(void);
  int i;
  for (i = 0; i < 32; i++) {
    P_000C48B0 *p = &D_00315CE8[i + 1];
    char *q;
    p->x = (func_00131760() * 2 - D_001D27B0) * D_001D5050 + D_00315C80;
    p->y = (func_00131760() * 2 - D_001D27B0) * D_001D2A1C + D_00315C84;
    p->z = func_00131760() * D_001D9CD8 + D_00315C88;
    *(float *)(D_002FBA90 + i * 0x30) = p->x;
    *(float *)(D_002FBA90 + i * 0x30 + 8) = p->z;
    *(float *)(D_002FBA90 + i * 0x30 + 4) = p->y;
    p[1].on = 1;
    p[1].w = func_00131760() * D_001D341C + D_001D2A1C;
    *(float *)(D_002FBA90 + i * 0x30 + 0x20) = (func_00131760() + D_001D27B0) * D_001D27F8;
    q = D_002FBA90 + i * 0x30;
    *(float *)(q + 0x24) = *(float *)(q + 0x20) * ((func_00131760() + D_001D27B0) * D_001D2C00);
  }
}

void func_000C49A0(void)
{
  extern P_000C48B0 D_00315CE8[34];
  extern char *D_002FBA90;
  extern float D_001D27B0, D_001D5050, D_00315C80, D_001D2A1C, D_00315C84, D_001D9CD8, D_00315C88, D_001D341C, D_001D27F8, D_001D2C00, D_001E461C;
  float func_00131760(void);
  int i;
  float f;
  for (i = 0; i < 32; i++) {
    P_000C48B0 *p = &D_00315CE8[i];
    if (p[1].on == 0) {
      p->x = (func_00131760() * 2 - D_001D27B0) * D_001D5050 + D_00315C80;
      p->y = (func_00131760() * 2 - D_001D27B0) * D_001D2A1C + D_00315C84;
      f = D_00315C88;
      p[1].on = 1;
      p->z = D_001D9CD8 + f;
      p[1].w = func_00131760() * D_001D341C + D_001D2A1C;
      *(float *)(D_002FBA90 + i * 0x30 + 0x20) = (func_00131760() + D_001D27B0) * D_001D27F8;
      char *q = D_002FBA90 + i * 0x30;
      *(float *)(q + 0x24) = *(float *)(q + 0x20) * ((func_00131760() + D_001D27B0) * D_001D2C00);
    } else {
      p->z = p->z - D_001E461C * p[1].w;
      *(float *)(D_002FBA90 + i * 0x30) = p->x;
      *(float *)(D_002FBA90 + i * 0x30 + 8) = p->z;
      *(float *)(D_002FBA90 + i * 0x30 + 4) = p->y;
      if (p->z < D_00315C88) p[1].on = 0;
    }
  }
}

