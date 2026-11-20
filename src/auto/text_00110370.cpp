/* 17 functions from 0x00110370 to 0x00110DF4, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct S_1105E0 { unsigned char pad0[0x23]; unsigned char f23; int f24; int *f28; int *f2c; unsigned char pad30[0xd4-0x30]; int fd4; };

void func_00110370(unsigned int *src)
{
 extern unsigned int D_00326114; extern char D_00325310;
 unsigned int i=0;
 if(D_00326114) { char *p=&D_00325310; do {if(*p==0){if(i<D_00326114)goto found;break;} i++;p+=0x1c;} while(i<D_00326114);}
 i=D_00326114;D_00326114++;
 found: {unsigned int *d=(unsigned int *)(&D_00325310+i*0x1c); int n=7; do{*d++=*src++;}while(--n);} ((char *)&D_00325310)[i*0x1c]=1;
}

void func_001103C0(int param_1)
{
  extern undefined D_00325310;
  (((undefined *)&D_00325310))[param_1 * 0x1c] = 0;
  return;
}

void func_001103D0(void)
{
 extern int D_00326134,D_00326114,D_00326110,D_00326128,D_0032612C; int func_00110370(...);
 unsigned char local[28];
 if(D_00326134==0){D_00326114=0;*(int *)(local+0x18)=0;*(int *)(local+0x14)=0;*(int *)(local+0xc)=0;*(int *)(local+0x10)=0;D_00326110=func_00110370((int *)local);D_00326128=0;D_0032612C=0;}
 D_00326134++;
}

void func_00110420(int param_1, int param_2)
{
  int func_0010FC60(...);
  int func_0010F7F0(...);
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_4;
  
  func_0010FC60(param_1);
  func_0010FC60(param_2);
  puVar3 = (undefined4 *)(param_1 + 0x28);
  local_4 = 4;
  do {
    piVar1 = (int *)*puVar3;
    while (piVar2 = piVar1, piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[3];
      if (*piVar2 == param_2) {
        func_0010F7F0(param_1,piVar2);
      }
    }
    puVar3 = puVar3 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

void *memcpy(void *dst,const void *src,unsigned int n);
typedef struct { unsigned char pad[0x20]; unsigned char bit0:1; unsigned char bit1:1; } S_00110480_flags;
void func_00110480(int a,int b,int c){int func_0010FC60(...);int func_0012F4C0(...);extern int D_00329238;int func_0010F970(...);int func_0010F930(...);__declspec(align(16)) unsigned char local[0x40];__declspec(align(16)) unsigned char local2[0x40];unsigned char pad[4];func_0010FC60(b);func_0010FC60(a);unsigned x=*(unsigned char *)(a+0x23),y=*(unsigned char *)(b+0x23);func_0012F4C0(local2,(y+1)*64+b,(x+1)*64+a);if(*(int *)(b+0xd4)==D_00329238)y=1-y;if(*(int *)(a+0xd4)==D_00329238)x=1-x;func_0012F4C0(local,(y+1)*64+b,(x+1)*64+a);func_0010F970(a,b,0,c,1,c,local2,local);S_00110480_flags *f=(S_00110480_flags *)(b+0x20);f->bit1=1;func_0010F930(b);}

void func_001105E0(int param_1, unsigned int *param_2, char param_3)
{
    extern int D_003291C0, D_00329238;
    int func_0010FC60(...); int func_0010FDA0(...); int func_00110420(...); int func_00110480(...);
    int func_0010FBA0(...); int func_0012F4C0(...); int func_0010F930(...);
    unsigned int *d;
    int *q, *n;
    int iVar2;
    int *p;
    int iVar5;
    if (param_1 != 0) {
        if (param_3 != 0) {
            func_0010FC60(param_1);
            iVar5 = 0;
            do {
                p = *(int **)(param_1 + 0x2c);
                *(int *)(param_1 + 0x24) = D_003291C0;
                while (p != 0) {
                    if ((*((unsigned char *)p + 6) & 0x10) == 0) {
                        iVar5 = func_0010FDA0(param_1, *p, param_2);
                        if (iVar5 != 0) {
                            iVar2 = p[4];
                            func_00110420(*p, param_1);
                            n = *(int **)(iVar5 + 0x2c);
                            while (n != 0 && (*(unsigned char *)(iVar5 + 0x20) & 8) == 0) {
                                iVar5 = *n;
                                n = *(int **)(iVar5 + 0x2c);
                            }
                            func_00110420(iVar5, param_1);
                            func_00110480(iVar5, param_1, 8);
                            if (iVar2 != 0) func_0010FBA0(param_1, iVar2);
                            break;
                        }
                    }
                    p = (int *)p[3];
                }
                D_003291C0++;
            } while (iVar5 != 0);
        }
        q = *(int **)(param_1 + 0x2c);
        if (q != 0) {
            func_0010FC60(*q);
            if (q[5] != D_00329238) q[6] ^= 1;
            q[5] = D_00329238;
            func_0012F4C0(q + q[6] * 16 + 8, param_2, *q + (*(unsigned char *)(*q + 0x23) + 1) * 64);
            *((unsigned char *)q + 6) &= 0xfe;
        }
        if (*(int *)(param_1 + 0xd4) != D_00329238) *(unsigned char *)(param_1 + 0x23) ^= 1;
        *(int *)(param_1 + 0xd4) = D_00329238;
        d = (unsigned int *)(param_1 + (*(unsigned char *)(param_1 + 0x23) + 1) * 64);
        for (int i = 0; i < 16; i++) d[i] = param_2[i];
        q = *(int **)(param_1 + 0x28);
        while (q != 0) {
            if ((*(unsigned char *)(*q + 0x20) & 2) == 0) {
                *(unsigned short *)(*q + 0x20) |= 2;
                func_0010F930(*q);
            }
            q = (int *)q[3];
        }
    }
}

#pragma optimize("", on)
void func_00110760(int param_1)
{
  int func_00110420(...);
  extern undefined D_0032531C;
  int func_00116FB0(...);
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x28);
  iVar2 = 4;
  do {
    puVar1 = (undefined4 *)*puVar3;
    while (puVar1 != (undefined4 *)0x0) {
      func_00110420(param_1,*puVar1);
      puVar1 = (undefined4 *)*puVar3;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(code **)(((undefined *)&D_0032531C) + (uint)*(byte *)(param_1 + 0x22) * 0x1c) != (code *)0x0) {
    (**(code **)(((undefined *)&D_0032531C) + (uint)*(byte *)(param_1 + 0x22) * 0x1c))(param_1);
  }
  func_00116FB0(param_1);
  return;
}

extern float D_001D333C;
extern int D_00329238;
int func_0010FC60(int);
void func_00011CB0(void *,void *);
int func_0010F970(...);
int func_0010F930(int);
int func_0013E9DB(int);
void __fastcall func_001107C0(float *min,float *max,int initial,float a,float b,float c)
{
    *min=(float)initial; *max=(float)initial;
    if(a<*max)*max=a;
    if(*min<a)*min=a;
    if(b<*max)*max=b;
    if(*min<b)*min=b;
}

extern float D_001D27B8;
float func_0012E8C0(float *a, float *b);
unsigned char __fastcall func_00110820(float *b, int unused, float *a, float r)
{
    float lo[3], hi[3];
    for (int i = 0; i < 3; i++) {
        if (a[i] > D_001D27B8) { lo[i] = -b[i]; hi[i] = b[i]; }
        else { lo[i] = b[i]; hi[i] = -b[i]; }
    }
    if (func_0012E8C0(a, lo) + r > D_001D27B8 && func_0012E8C0(a, hi) + r >= D_001D27B8) return 1;
    return 0;
}

void func_001108F0(int a0, int a1, int a2, int a3, int a4, int a5) {
    extern int D_001E7CE0;
    int func_00121FC0(...);
    func_00121FC0(a0, a1, a2, a3, a4, a5, (int)&D_001E7CE0);
}

void func_00110920(void) {
    int func_001222C0(...);
    func_001222C0();
}

void func_00110930(void) {
    int func_001224D0(...);
    func_001224D0();
}

unsigned char func_00110A20(float a,float b,float c,float d,float *out)
{
    float x=b-D_001D333C;
    float y=d-D_001D333C;
    if (x<c && y<a) {
        if(c<b) {*out=b-c;return 1;}
        *out=d-a;return 1;
    }
    return 0;
}

char _func_00110CD0(int param_1, int param_2, int param_3, float param_4, int param_5)
{
  float func_0012E7B0(...);
  float func_0012E8C0(...);
  float func_00131220(float);
  int func_0012E6D0(...), func_0012ED20(...), func_0012E590(...);
  extern float D_001D2A2C, D_001D27B8, D_001D2D4C, D_001D27B0;
  float d[3], m[3];
  float a, b, b2, c, disc, t;

  if (func_0012E7B0(param_1, param_3) > param_4) {
    func_0012E6D0(d, param_2, param_1);
    func_0012E6D0(m, param_1, param_3);
    a = func_0012E8C0(d, d);
    b = func_0012E8C0(d, m);
    b2 = b + b;
    c = func_0012E8C0(m, m);
    disc = (b + b) * b2 - (c - param_4 * param_4) * a * D_001D2A2C;
    if (disc > D_001D27B8) {
      b2 = b2 * D_001D2D4C;
      t = (b2 - func_00131220(disc)) / (a + a);
      if (t > D_001D27B8 && t < D_001D27B0) {
        if (param_5 != 0) {
          func_0012ED20(param_5, d, t);
          func_0012E590(param_5, param_1);
        }
        return 1;
      }
    }
  }
  return 0;
}

typedef struct { unsigned int words[7]; } CopyBlock_00110370;
extern undefined4 D_00326150;
extern undefined4 D_00326138;
extern undefined4 D_0032613C;
extern undefined4 D_00326140;
extern undefined4 D_00326144;
extern undefined4 D_00326148;
extern undefined4 D_0032614C;
