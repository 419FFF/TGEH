/* 18 functions from 0x000700B0 to 0x00070FC6, found by Ghidra. */
#include "common.h"
struct EdgeSeg { char c; char pad[3]; int a, b, d, e; };

int func_00133F30(...);
int func_001378E0(...);
int func_0011E4A0(...);
int func_000688D0(...);
int func_00103440(...);
int func_00103400(...);
int func_00136450(...);
int func_00100E50(...);
int func_001317D0(...);
int func_001167C0(...);

void _func_000700B0(int param_1)
{
  extern int D_003080F4;
  extern int D_001E3E90[];
  extern char D_001D5C94;
  extern float D_001D4EB0, D_001D41D4, D_001D333C, D_001D2C00;
  int func_0013E469(...);
  int func_00103210(...);
  void func_001031A0(int, float);
  void func_00103990(int, int);
  float fVar1;
  float local_104;
  char local_100[256];
  int iVar2;
  int idx;

  idx = D_003080F4;
  if (idx == 0) {
    idx = 1;
  }
  fVar1 = -*(float *)(param_1 + 4);
  if (D_001E3E90[idx] != 0) {
    func_0013E469(local_100, &D_001D5C94, D_001E3E90[idx]);
    iVar2 = func_00103210(local_100);
    if (iVar2 != 0) {
      if (fVar1 < D_001D4EB0) {
        local_104 = 0.2f;
      }
      else if (fVar1 > D_001D41D4) {
        local_104 = 1.0f;
      }
      else {
        local_104 = (fVar1 - D_001D4EB0) * D_001D333C + D_001D2C00;
      }
      func_001031A0(iVar2, local_104);
      func_00103990(iVar2, 0);
    }
  }
}

void func_00070180(int a0) {
    extern int D_002FA2F0;
    D_002FA2F0 = a0;
}

void func_00070190(void) { int a[22]={0}; a[11]=4;a[12]=5;a[20]=6;a[21]=2; func_00133F30(a);func_001378E0(8,3); }

void func_00070200(float *param_1, float *param_2)
{
  int func_00137870(int, int, int, int);
  void func_00137A20(void);
  void func_00137A60(int);
  extern float D_00332740, D_00332738, D_0033273C;
  int h;
  float a, b;

  h = func_00137870(((int *)param_1)[0], ((int *)param_1)[1], ((int *)param_1)[2], ((int *)param_1)[3]);
  b = param_2[1]; a = param_2[0];
  func_00137A20();
  D_00332738 = a; D_0033273C = b; D_00332740 = 1.0f;
  func_00137A60(h);
  b = param_2[1]; a = param_2[2];
  func_00137A20();
  D_00332738 = a; D_0033273C = b; D_00332740 = 1.0f;
  func_00137A60(h);
  b = param_2[3]; a = param_2[2];
  func_00137A20();
  D_00332738 = a; D_0033273C = b; D_00332740 = 1.0f;
  func_00137A60(h);
  b = param_2[3]; a = param_2[2];
  func_00137A20();
  D_00332738 = a; D_0033273C = b; D_00332740 = 1.0f;
  func_00137A60(h);
  b = param_2[3]; a = param_2[0];
  func_00137A20();
  D_00332738 = a; D_0033273C = b; D_00332740 = 1.0f;
  func_00137A60(h);
  b = param_2[1]; a = param_2[0];
  func_00137A20();
  D_00332738 = a; D_0033273C = b; D_00332740 = 1.0f;
  func_00137A60(h);
}

void func_00070370(void) {
    int func_00137AB0(...);
    func_00137AB0();
}

void func_00070380(int x,int *p) { int a[22]={0}; float b[4]={0,0,1,1}; a[11]=4;a[12]=5;a[20]=6;a[21]=2;func_00133F30(a);func_0011E4A0(p[0],p[1],p[2],p[3],a,b+2,x,1.0f);func_000688D0(); }

void func_00070430(void)
{
  extern float D_00329234, D_002FA2E8, D_001D27B0, D_002FA2D4, D_001D27B8, D_002FA2FC;
  int func_00133F30(...);
  int func_0011E4A0(...);
  __int64 func_000688D0(void);
  int a[21];
  struct { int x, y, z; float w; } c;
  float r[4];
  int i;
  int *p = a;
  for (i = 0x15; i != 0; i--)
    *p++ = 0;
  a[0] = 0;
  a[1] = 0;
  a[2] = 0;
  a[6] = 0;
  a[10] = 4;
  a[11] = 5;
  a[12] = 0;
  a[18] = 6;
  a[17] = 0;
  a[19] = 2;
  func_00133F30(a);
  c.x = 0;
  c.y = 0;
  c.z = 0;
  float f = (D_001D27B0 - D_00329234) * D_002FA2D4 + D_00329234 * D_002FA2E8;
  if (D_002FA2FC > D_001D27B8) {
    c.w = D_002FA2FC * D_002FA2FC;
    if ((long double)D_001D27B8 != (long double)f)
      c.w = (D_001D27B0 - c.w) * f + c.w;
  } else {
    c.w = f;
  }
  r[0] = 0;
  r[1] = 0;
  r[2] = 1.0f;
  r[3] = 1.0f;
  func_0011E4A0(0, 0, 0x44200000, 0x43f00000, r, r + 2, &c, 0x3f800000);
  func_000688D0();
}

int func_000705A0(void) { extern int D_002FA2EC; int x=D_002FA2EC-1; if(x==0) return 2; else return 1; }

void func_000705C0(void) {
    int func_00116780(...); int func_0011FDF0(...); int func_000688D0(...); int func_00131780(...); int func_001016A0(...); int func_001033B0(...);
    extern int D_002FA2EC, D_001E3EF8, D_002FA2F4, D_002FA2E8, D_002FA304;
    extern float D_002FA2D0, D_002FA308, D_002FA2FC, D_002FA2F8;
    extern int D_002FA2E4, D_002FA300, D_002FA2D8, D_002FA2DC, D_002FA2E0, D_002FA30C;
    extern char D_001D29C7, D_001D5CC4, D_001D5CB8, D_001D5CAC, D_001D5CA0;
    func_00116780(1);
    D_002FA2D0 = 0.0;
    if (D_002FA2EC != 3) D_002FA2EC = 0;
    D_002FA2F4 = 1;
    D_002FA2E8 = 0x3f800000;
    D_002FA304 = 0x3f000000;
    func_0011FDF0(D_001E3EF8);
    D_002FA308 = 0.0;
    D_002FA2FC = 0.0;
    D_002FA2F8 = 0.0;
    func_000688D0();
    func_00131780(&D_001D5CC4, &D_001D29C7);
    func_001016A0();
    D_002FA2E4 = func_001033B0(&D_001D5CB8);
    D_002FA300 = func_001033B0(&D_001D5CAC);
    D_002FA2D8 = func_001033B0(&D_001D5CA0);
    D_002FA2DC = func_001033B0(&D_001D5CA0);
    D_002FA2E0 = func_001033B0(&D_001D5CA0);
    D_002FA30C = 1;
    func_000688D0();
}

void func_000706B0(int p) { extern int D_002FA30C,D_002FA2F8,D_002FA300,D_002FA2E4; extern int D_002FA2D8[3]; if(!D_002FA30C)return; switch(p){case 1:func_00103440(D_002FA2E4,0);break;case 2:func_00103440(D_002FA300,0);return;case 3:{int n=D_002FA2F8;func_00103440(D_002FA2D8[n],0);D_002FA2F8=n+1;if(D_002FA2F8==3){D_002FA2F8=0;return;}break;}}}

void func_00070720(void) { extern int D_002FA2EC,D_002FA2E4,D_002FA300,D_002FA2D8,D_002FA2DC,D_002FA2E0,D_002FA30C; extern int D_001E3F04; extern char D_001D29C7,D_001D5CDC; int (*callback)(void); func_00136450(); callback=*(int (**)(void))((char*)&D_001E3F04+D_002FA2EC*16); if(callback)callback();func_00103400(D_002FA2E4);func_00103400(D_002FA300);func_00103400(D_002FA2D8);func_00103400(D_002FA2DC);func_00103400(D_002FA2E0);func_00100E50();D_002FA30C=0;func_001317D0(&D_001D29C7);func_000688D0(1,&D_001D5CDC,0x19c);func_001167C0(); }

int func_000707B0(unsigned char flags)
{
    struct Axis { char pad[0x10]; short value; char pad2[6]; };
    struct Pad { char pad[0x10]; Axis *axes; };
    extern int D_002FA310;
    extern int D_00313B54, D_00313A94, D_00313ABC, D_00313B58, D_00313A6C, D_00313A80, D_00313B38, D_00313AC0;
    int func_000A6900(void);
    int n = 0;
    if (D_002FA310 == 0 || D_00313B54 == 1)
        D_002FA310 = func_000A6900();
    Pad *p = (Pad *)D_002FA310;
    if (flags & 1)
        n = p->axes[D_00313A94].value;
    if (flags & 4)
        n = p->axes[D_00313A94].value + n + p->axes[D_00313ABC].value;
    if (flags & 2)
        n += p->axes[D_00313B58].value;
    if (flags & 0x10) {
        n += p->axes[D_00313A6C].value;
        if (p->axes[1].value == 1)
            n++;
    }
    if (flags & 0x20) {
        n += p->axes[D_00313A80].value;
        if (p->axes[1].value == -1)
            n++;
    }
    if (flags & 0x40) {
        n += p->axes[D_00313B38].value;
        if (p->axes[0].value == -1)
            n++;
    }
    if (flags & 0x80) {
        n += p->axes[D_00313AC0].value;
        if (p->axes[0].value == 1)
            n++;
    }
    return n;
}

void func_000708B0(void) {
    extern int D_002FA310;
    int func_00122C10(...);
    func_00122C10(D_002FA310, 1148846080, 1050253722);
}

void func_00070D50(int a0) {
    extern int D_002FA2EC;
    D_002FA2EC = a0;
}

int func_00070D60(void) {
    extern int D_002FA2EC;
    return D_002FA2EC;
}

void func_00070D70(char c, int *p2, int *p3, int p4, int *p5, int *p6)
{
  extern int D_002FA320;
  extern char D_002FA31C;
  extern struct { char pad[0xc]; char c; int a; int b; int e; int f; } D_002FA31C_dummy;
  extern int D_00332740, D_00332738, D_0033273C;
  int func_00137A20(void);
  int func_00137A60(int);
  int func_00137A90(int, int);
  extern char D_002FA328[];
  extern int D_002FA32C[], D_002FA330[], D_002FA334[], D_002FA338[];
  if (c == '>') {
    int i = D_002FA320 * 5;
    D_002FA334[i] = p3[0];
    D_002FA338[i] = p3[1];
    D_002FA328[i * 4] = 0;
    D_002FA31C = 1;
    return;
  }
  if (D_002FA31C == 0) {
    int x, y;
    y = p2[1]; x = p2[0];
    func_00137A20();
    D_00332738 = x; D_0033273C = y; D_00332740 = 0;
    func_00137A60(p4);
    func_00137A90(p5[0], p6[0]);
    y = p2[1]; x = p3[0];
    func_00137A20();
    D_00332738 = x; D_0033273C = y; D_00332740 = 0;
    func_00137A60(p4);
    func_00137A90(p5[1], p6[0]);
    y = p3[1]; x = p3[0];
    func_00137A20();
    D_00332738 = x; D_0033273C = y; D_00332740 = 0;
    func_00137A60(p4);
    func_00137A90(p5[1], p6[1]);
    y = p3[1]; x = p3[0];
    func_00137A20();
    D_00332738 = x; D_0033273C = y; D_00332740 = 0;
    func_00137A60(p4);
    func_00137A90(p5[1], p6[1]);
    y = p3[1]; x = p2[0];
    func_00137A20();
    D_00332738 = x; D_0033273C = y; D_00332740 = 0;
    func_00137A60(p4);
    func_00137A90(p5[0], p6[1]);
    y = p2[1]; x = p2[0];
    func_00137A20();
    D_00332738 = x; D_0033273C = y; D_00332740 = 0;
    func_00137A60(p4);
    func_00137A90(p5[0], p6[0]);
  } else {
    if (c == '<') {
      D_002FA32C[D_002FA320 * 5] = p2[0];
      D_002FA330[D_002FA320 * 5] = p2[1];
      D_002FA320++;
      D_002FA31C = 0;
      return;
    }
    if (D_002FA328[D_002FA320 * 20] == 0)
      D_002FA328[D_002FA320 * 20] = c;
  }
}

