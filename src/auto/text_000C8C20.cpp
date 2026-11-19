/* 10 functions from 0x000C8C20 to 0x000C9AD9, found by Ghidra. */
#include "common.h"
extern int D_003080AC;
extern char D_00316850;
struct Unk316850 { float x0; float y0; int u8; int uc; int s; float v; char on; char pad[3]; };
extern Unk316850 D_0031683C[];
#pragma optimize("y", on)
extern const float D_001D27EC;
extern char D_001DA8BC;
extern char D_001DA8B4;
extern int D_00316258;
void func_000A2500(float);
void func_00120E70(float,float,float,float);
void func_00120E50(float,float);
void func_00121990(char*, ...);
char* func_000AFD10(char*);

extern float D_0031621C, D_00316220, D_001D3418;
extern int D_00316224, D_00316228, D_0031622C;
extern int D_00316210, D_00307DF8;
extern char D_00316244, D_00316234, D_003161D0;
void _func_000C8EF0(void)
{
  float func_000C8100(float);
  void func_0011F270(...); void func_0012F7A0(...); void func_0012F610(...);
  void func_0009D280(...); void func_00110060(...); void func_001105E0(...); void func_0009D3E0(...);
  __declspec(align(16)) float m[16];
  float f;
  D_00316220 = func_000C8100(D_0031621C);
  f = func_000C8100(D_0031621C + D_001D3418);
  func_0011F270(D_00316210 + 4, D_00316220, &D_00316224, &D_00316244);
  func_0011F270(D_00316210 + 4, f, &D_00316234, 0);
  func_0012F7A0(&D_00316224, &D_003161D0);
  func_0012F610(&D_00316244, &D_003161D0);
  func_0012F7A0(&D_00316234, &D_003161D0);
  func_0009D280(D_00307DF8);
  func_00110060(*(int*)(D_00307DF8 + 0x2c), m);
  m[12] = D_00316224;
  m[13] = D_00316228;
  m[14] = D_0031622C;
  func_001105E0(*(int*)(D_00307DF8 + 0x2c), m, 0);
  func_0009D3E0(D_00307DF8);
}

void func_000C91C0(void){int func_001031C0(...);extern int D_00316928;extern char D_001DA8A4;int func_00102E80(...);int func_000A29C0(...);int func_000A2840(...);int func_0009D280(...);extern int D_00307DF8;int func_0005CCE0(...);int func_0005F310(...);int func_0005CCC0(...);extern int D_00316930;int func_0009C590(...);extern char D_001DA894,D_001DA880;int func_00044C90(...);int x=func_001031C0(D_00316928,&D_001DA8A4);func_00102E80(x);func_000A29C0(0);func_000A2840();func_0009D280(D_00307DF8);func_0005CCE0(0);func_0005F310(0);func_0005CCC0(1);int v[3]={0,0,0x42c80000};if(D_00316930==0){x=func_0009C590(&D_001DA894);func_00044C90(x,v);return;}x=func_0009C590(&D_001DA880);func_00044C90(x,v);}

void func_000C9270(void)
{
  extern int D_00316930;
  float new_var;
  if (D_003080AC != 2)
  {
    func_000A2500(1.7f);
    char *q = &D_00316850;
    new_var = 1.0f;
    do
    {
      Unk316850 *p = (Unk316850 *) (q - 0x14);
      if (p->on != 0)
      {
        float f = D_001D27EC + (p->v * new_var);
        func_00120E70(f, f, f, f);
        func_00120E50(p->x0, p->y0);
        func_00121990(&D_001DA8BC, p->s);
      }
      q += 0x1c;
    }
    while (((int) q) < ((int) (&D_00316930)));
    func_00120E70(new_var, new_var, 1.0f, new_var);
    func_00120E50(320.0f, 70.0f);
    func_00121990(func_000AFD10(&D_001DA8B4));
    func_00120E50(320.0f, 110.0f);
    func_00121990(&D_001DA8BC, D_00316258);
  }
}

