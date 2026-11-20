/* 13 functions from 0x000C3BE0 to 0x000C4AB2, found by Ghidra. */
#include "common.h"
struct S_000C3F00_A { unsigned char a, b, pad0[2]; float pos[3]; char pad1[0x14]; int obj; unsigned char c, pad2[3]; int obj2; int pad3; float x, y; char pad4[4]; };
struct S_000C3F00_B { float pos[3]; char pad0[0xc]; int count; int state; char pad1; unsigned char f1; unsigned char f2; char pad2; float v[3]; char pad3[0xc]; int arg[3]; char pad4[0x90 - 0x48]; };
struct S_000C4240 { int obj; char on; char pad[3]; float x, y, z; float vx, vy, vz; float pad2[3]; float lim; };
struct P_000C49A0 { float x, y, z, w; char on; char pad[3]; };
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

