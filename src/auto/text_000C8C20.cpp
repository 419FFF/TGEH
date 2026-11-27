/* 10 functions from 0x000C8C20 to 0x000C9AD9, found by Ghidra. */
#include "common.h"
extern char D_00316D00, D_001DA990;
extern int D_00316B90, D_00316BE0, D_00316BE4, D_00316C70, D_00316C74, D_00316B94, D_00316D4C, D_00316D48;
extern int D_00316948[];
extern float D_00316D04, D_00316D18, D_00316D1C, D_00316D20, D_00316D24, D_00316D28, D_00316D2C, D_00316D3C, D_00316D40, D_00316D44;
extern float D_00316C20, D_00316C24, D_00316C28, D_00316C60, D_00316C64, D_00316C68, D_00316CB0, D_00316CB4, D_00316CB8, D_00316CF0, D_00316CF4, D_00316CF8;
extern unsigned D_00316BF0, D_00316C30, D_00316C80, D_00316CC0, D_00316D30;

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
extern float D_001DA86C;
extern int D_00316238;
extern int D_0031623C;
extern int D_00316180;
void _func_000C8C20(void)
{
    extern float D_00316920, D_001D27B8, D_001D314C, D_001E461C, D_001D27F4, D_001D4508, D_001DA868, D_001D28E4, D_001D2808;
    extern int D_0031691C;
    extern char D_00316924;
    extern char D_001DA85C;
    float func_00131760(...);
    int func_001031C0(...);
    int func_00103990(...);
    void func_0012F7A0(...);
    void func_0012F120(...);
    void func_0012FCF0(...);
    void func_0012F250(...);
    void func_001105E0(...);
    void func_0009D280(...);
    void func_00110000(...);
    void func_00088A50(...);
    void func_0009D3E0(...);
    struct M { int m[16]; };
    float pos[3];
    __declspec(align(16)) M mat;
    M rot, res;

    if ((double)D_00316920 == (double)D_001D27B8) {
        if ((double)func_00131760() < (double)D_001D314C) {
            *(int *)&D_00316920 = 0x3a83126f;
            D_00316924 = 1;
            int x = func_001031C0(D_0031691C, &D_001DA85C, 0);
            func_00103990(x);
        }
    } else {
        D_00316920 = (float)((double)D_001E461C + (double)D_00316920);
        mat = *(M *)&D_00316180;
        *(int *)&pos[1] = 0x41c80000;
        *(int *)&pos[2] = 0x432f0000;
        double t = ((double)D_00316920 - (double)D_001D27F4) * (double)D_001D4508;
        t = t * (double)D_001DA868;
        t = t * (double)D_001D28E4;
        pos[0] = (float)t;
        func_0012F7A0(pos, &mat);
        func_0012F120(&rot);
        func_0012FCF0(&rot, 0x3fc90fdb);
        func_0012F250(&res, &rot, &mat);
        res.m[12] = *(int *)&pos[0];
        res.m[13] = *(int *)&pos[1];
        res.m[14] = *(int *)&pos[2];
        func_001105E0(*(int *)(D_0031691C + 0x2c), &res, 0);
        if (D_00316924) {
            func_0009D280(D_0031691C);
            func_00110000(*(int *)(D_0031691C + 0x2c));
            func_00088A50(*(int *)(D_0031691C + 0x2c), 0x3f800000, 1);
            D_00316924 = 0;
        }
        if ((double)D_00316920 > (double)D_001D2808) {
            *(int *)&D_00316920 = 0;
            func_0009D3E0(D_0031691C);
        }
    }
}

void _func_000C8DD0(void)
{
    void func_0012F120(unsigned *);
    void func_0012E6D0(unsigned *, float *, float *);
    float func_0012EA60(unsigned *);
    void func_0012EE00(unsigned *, unsigned *, unsigned *);
    struct M { int m[16]; };
    int p[4];
    int up[4];
    int b[4];
    __declspec(align(16)) M mat;

    *(float *)&p[1] = (float)((double)*(float *)&D_00316228 + (double)D_001DA86C);
    p[2] = D_0031622C;
    p[0] = D_00316224;
    b[0] = *(int *)&D_00316234;
    *(float *)&b[1] = (float)((double)*(float *)&D_00316238 + (double)D_001DA86C);
    b[2] = D_0031623C;
    up[0] = 0;
    up[1] = 0x3f800000;
    up[2] = 0;
    up[3] = 0;

    func_0012F120((unsigned *)mat.m);
    func_0012E6D0((unsigned *)&mat.m[8], (float *)b, (float *)p);
    func_0012EA60((unsigned *)&mat.m[8]);
    func_0012EE00((unsigned *)&mat.m[0], (unsigned *)up, (unsigned *)&mat.m[8]);
    func_0012EA60((unsigned *)&mat.m[0]);
    func_0012EE00((unsigned *)&mat.m[4], (unsigned *)&mat.m[8], (unsigned *)&mat.m[0]);
    func_0012EA60((unsigned *)&mat.m[4]);
    mat.m[12] = p[0];
    mat.m[13] = p[1];
    mat.m[14] = p[2];
    *(M *)&D_00316180 = mat;
}

void _func_000C8EF0(void)
{
  float func_000C8100(float);
  void func_0011F270(int, float, void *, void *); void func_0012F7A0(...); void func_0012F610(...);
  void func_0009D280(...); void func_00110060(...); void func_001105E0(...); void func_0009D3E0(...);
  __declspec(align(16)) int m[16];
  D_00316220 = func_000C8100(D_0031621C);
  float f = func_000C8100((float)((double)D_0031621C + (double)D_001D3418));
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

void _func_000C9000(void)
{
    extern float D_003161C4, D_001E461C, D_001D5420, D_003161C8, D_001D429C, D_001D27FC;
    extern int D_003161C0;
    extern float D_00316254, D_001D3418, D_001D27F8, D_0031621C, D_001D27B8, D_001D314C;
    extern int D_00316258, D_00316930, D_00308158, D_003251C0, D_0032517C, D_00316928;
    extern char D_001DA870;
    void func_000A27E0(float);
    void func_000B55C0(int);
    void func_00107C40(...);
    void func_000B6BE0(...);
    void func_000B6C80(...);
    void func_000C8EF0(...);
    void func_000C8DD0(...);
    void func_000C8AA0(...);
    void func_000C8B60(...);
    void func_000C85E0(...);
    void func_000C84C0(...);
    void func_000C8C20(...);
    float func_00131760(...);
    int func_001031C0(...);
    void func_00102E80(...);

    D_003161C4 = (float)((double)D_003161C4 + (double)D_001E461C);
    func_000A27E0((float)(((double)D_001D5420 - (double)D_003161C8) * (double)D_001D429C * (double)D_001D27FC));
    func_000B55C0(*(int *)&D_003161C8);
    switch (D_003161C0) {
    case 0:
        D_003161C0 = 1;
        break;
    case 1:
        D_003161C8 = (float)((double)D_003161C8 - (double)D_001E461C);
        D_00316254 = (float)((double)D_001E461C * (double)D_001D3418 + (double)D_00316254);
        if ((double)D_00316254 > (double)D_001D27F8) {
            *(int *)&D_00316254 = 0x447a0000;
        }
        D_0031621C = (float)((double)D_00316254 * (double)D_001E461C + (double)D_0031621C);
        if ((double)D_003161C8 < (double)D_001D27B8) {
            *(int *)&D_003161C8 = 0;
            D_003161C0 = 2;
            *(int *)&D_003161C4 = 0;
        }
        break;
    case 2:
        *(int *)&D_00316254 = 0;
        if (D_00316258 >= 500) {
            if (D_00316930 == 0) {
                func_00107C40(D_003251C0, D_00308158, D_00308158);
            }
            if (D_00316930 == 1) {
                func_00107C40(D_0032517C, D_00308158, D_00308158);
            }
            func_000B6BE0();
            D_003161C0 = 3;
            return;
        }
        func_000B6C80();
        D_003161C0 = 3;
        return;
    }
    func_000C8EF0();
    func_000C8DD0();
    func_000C8AA0();
    func_000C8B60();
    if (D_003161C0 != 0) {
        func_000C85E0();
        func_000C84C0();
        func_000C8C20();
    }
    if ((double)func_00131760() < (double)D_001D314C) {
        int x = func_001031C0(D_00316928, &D_001DA870);
        func_00102E80(x);
    }
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

