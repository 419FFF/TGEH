/* 13 functions from 0x0008C970 to 0x0008D866, found by Ghidra. */
#include "common.h"
struct S_002FE120 { int active; float t; float limit; float k0; float k1; char pad[0x40c]; struct { unsigned char pad; unsigned char c; unsigned short age; } p[100]; char pad2[0x50]; };
#include "ghidra.h"

extern float _D_001D27B0, _D_00329234, _D_001D27B8, _D_001D6F38;
extern float _D_00332738, _D_0033273C, _D_00332740;
void _func_0012EA60(float *);
void _func_00137A20(void);
void _func_00137A60(int);
void _func_00137A90(float, float);
#pragma optimize("", off)
void __fastcall _func_0008C970(void *self, float rate, float threshold, char mode) {
  struct R { char pad[8]; float x,y,z; char p[8]; void *node; };
  struct N { char pad[4]; int type; float x,y,z,w; char p[8]; void *next; };
  struct R *r=(struct R*)self; struct N *n=(struct N*)r->node;
  float z=r->z, y=r->y, x=r->x;
  float t=rate;
  if(threshold>_D_001D27B8) {
    float dz=r->z-n->z, dy=r->y-n->y, dx=r->x-n->x;
    float d[3]={dx,dy,dz};
    if(d[0]!=_D_001D27B8||d[1]!=_D_001D27B8||d[2]!=_D_001D27B8) _func_0012EA60(d);
    t=0.265625f;
    x=d[0]*threshold+x; y=d[1]*threshold+y; z=d[2]*threshold+z;
    _func_00137A20(); _D_00332738=x;_D_0033273C=y;_D_00332740=z; _func_00137A60(n->type); _func_00137A90(0,0);
    _func_00137A20(); _D_00332738=x;_D_0033273C=y;_D_00332740=z; _func_00137A60(n->type); _func_00137A90(1,0);
    _func_00137A20(); _D_00332738=x;_D_0033273C=y;_D_00332740=z; _func_00137A60(n->type); _func_00137A90(0,1);
    _func_00137A20(); _D_00332738=x;_D_0033273C=y;_D_00332740=z; _func_00137A60(n->type); _func_00137A90(1,1);
  } else {
    _func_00137A20(); _D_00332738=x;_D_0033273C=y;_D_00332740=z; _func_00137A60(n->type); _func_00137A90(0,0);
    _func_00137A20(); _D_00332738=x;_D_0033273C=y;_D_00332740=z; _func_00137A60(n->type); _func_00137A90(1,0);
    _func_00137A20(); _D_00332738=x;_D_0033273C=y;_D_00332740=z; _func_00137A60(n->type); _func_00137A90(0,1);
    _func_00137A20(); _D_00332738=x;_D_0033273C=y;_D_00332740=z; _func_00137A60(n->type); _func_00137A90(1,1);
  }
  t += rate;
  while(n) {
    float z1=n->z-r->z,y1=n->y-r->y,x1=n->x-r->x;
    _func_00137A20(); _D_00332738=x1;_D_0033273C=y1;_D_00332740=z1; _func_00137A60(n->type); _func_00137A90(0,t);
    _func_00137A20(); _D_00332738=x1;_D_0033273C=y1;_D_00332740=z1; _func_00137A60(n->type); _func_00137A90(1,t);
    t+=rate; n=(struct N*)n->next;
  }
}

#pragma optimize("", on)
void func_0008D540(void)
{
  extern char D_002FE120[];
  extern float D_00307DB4, D_001D5444, D_001D6138;
  extern int D_002EED14;
  int func_00131310(void);
  unsigned int off;
  int j;
  for (off = 0; off < 0x4800; off += 0x600) {
    S_002FE120 *e = (S_002FE120 *)(D_002FE120 + off);
    if (e->active) {
      unsigned int v = (unsigned int)((D_00307DB4 - e->t) * D_001D5444);
      e->t = (float)v * D_001D6138 + e->t;
      if (D_002EED14) v = 1;
      for (j = 0; j < 100; j++) {
        e->p[j].age += (unsigned short)v;
        if (e->limit < ((float)e->p[j].c * e->k1 + e->k0) * (float)e->p[j].age * D_001D6138) {
          int c;
          e->p[j].age = 0;
          c = func_00131310() & 0xff;
          if (c == 0) c = 1;
          e->p[j].c = (unsigned char)c;
        }
      }
    }
  }
}
void func_0008D740(int param_1)
{
  extern undefined D_002FE120;
  *(undefined4 *)(((undefined *)&D_002FE120) + param_1 * 0x600) = 0;
  return;
}

extern int D_002FE0D0;
extern int D_002FE0C4;
extern int D_002FE120;
extern int D_00302920;
extern int D_001D29C7;
extern int D_001D6F3C;
extern int D_003028D0;
extern int D_003028D4;
int func_00011CB0(int);
char func_0008C740(int);
void func_0008C120(int);
void func_00116FB0(int);
int func_00131990(int);
int func_0011BF40(int,int);
int func_0011BDD0(int,int);
int func_0011B990(int);
void func_0008D760(int param_1)
{
    int value = param_1;
    value += value * 2;
    value <<= 9;
    value += (int)&D_002FE0D0;
    func_00011CB0(value);
}

void func_0008D780(int index,int *values) { float func_00131290(...); extern float D_002FE110,D_002FE114,D_002FE118,D_002FE11C; if(!values)return; int off=index*0x600; *(float *)((char *)&D_002FE110+off)=func_00131290(values[0],0,0x3f800000); *(float *)((char *)&D_002FE114+off)=func_00131290(values[1],0,0x3f800000); *(float *)((char *)&D_002FE118+off)=func_00131290(values[2],0,0x3f800000); *(float *)((char *)&D_002FE11C+off)=func_00131290(values[3],0,0x3f800000); }

void func_0008D800(int param_1)
{
  extern undefined D_002FE134;
  *(undefined4 *)(((undefined *)&D_002FE134) + param_1 * 0x600) = 0;
  return;
}

void func_0008D820(int index,float a,float b) { extern int D_002FE134; extern float D_002FE140,D_002FE144; int off=index*0x600; unsigned n=*(unsigned *)((char *)&D_002FE134+off); if(n>=0x80)return; int slot=index*0xc0+n; *(float *)((char *)&D_002FE140+slot*8)=a; *(float *)((char *)&D_002FE144+slot*8)=b; *(unsigned *)((char *)&D_002FE134+off)=n+1; }

