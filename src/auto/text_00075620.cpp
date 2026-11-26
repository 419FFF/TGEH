/* 7 functions from 0x00075620 to 0x000760A7, found by Ghidra. */
#include "common.h"

struct MenuEnt75 { int a; int b; void (__cdecl *cb)(int); };

void func_00075620(char param_1)
{
  extern char D_002FA5ED;
  extern int D_002FA544;
  extern int D_002FA550;
  extern int D_002FA3E8;
  extern int D_001D27B0;
  int func_00070380(...);
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  float local_4;
  
  local_10 = 0x3f800000;
  local_c = 0x3f800000;
  local_8 = 0x3f800000;
  if (D_002FA5ED != '\0') {
    if (D_002FA544 != D_002FA550) {
      local_4 = D_002FA3E8;
    }
    else {
      local_4 = D_001D27B0 - D_002FA3E8;
    }
    local_20 = 0x41a00000;
    local_1c = 0x41a00000;
    local_18 = 0x42200000;
    local_14 = 0x41b80000;
    func_00070380(&local_10,&local_20);
    local_20 = 0x41a00000;
    local_1c = 0x41a00000;
    local_18 = 0x41b80000;
    local_14 = 0x42200000;
    func_00070380(&local_10,&local_20);
    local_20 = 0x44160000;
    local_1c = 0x41a00000;
    local_18 = 0x441b0000;
    local_14 = 0x41b80000;
    func_00070380(&local_10,&local_20);
    local_20 = 0x441a4000;
    local_1c = 0x41a00000;
    local_18 = 0x441b0000;
    local_14 = 0x42200000;
    func_00070380(&local_10,&local_20);
    local_20 = 0x41a00000;
    local_1c = 0x43e48000;
    local_18 = 0x42200000;
    local_14 = 0x43e60000;
    func_00070380(&local_10,&local_20);
    local_20 = 0x41a00000;
    local_1c = 0x43e60000;
    local_18 = 0x41b80000;
    local_14 = 0x43dc0000;
    func_00070380(&local_10,&local_20);
    local_20 = 0x44160000;
    local_1c = 0x43e48000;
    local_18 = 0x441b0000;
    local_14 = 0x43e60000;
    func_00070380(&local_10,&local_20);
    local_20 = 0x441a4000;
    local_1c = 0x43dc0000;
    local_18 = 0x441b0000;
    local_14 = 0x43e60000;
    func_00070380(&local_10,&local_20);
  }
  D_002FA5ED = param_1;
  return;
}

void func_00075810(int param_1)
{
  void func_000758EB(int);
  void func_00073B40(int);
  void func_00136F90(unsigned short, unsigned short);
  extern int D_002FA5FC, D_002FA5F8, D_002FA5F4, D_002FA5F0;
  extern signed char D_00311515, D_00311516;

  if (param_1 == -2) {
    func_000758EB(param_1);
    return;
  }
  if (param_1 == -3) return;
  if (param_1 == -1) {
    D_002FA5FC = D_00311515;
    D_002FA5F8 = D_00311516;
    D_002FA5F4 = D_002FA5FC;
    D_002FA5F0 = D_002FA5F8;
  } else if (param_1 & 0x40) {
    D_002FA5F4--;
  } else if (param_1 & 0x80) {
    D_002FA5F4++;
  } else if (param_1 & 0x10) {
    D_002FA5F0--;
  } else if (param_1 & 0x20) {
    D_002FA5F0++;
  } else if (param_1 & 4) {
    D_00311515 = D_002FA5F4;
    D_00311516 = D_002FA5F0;
    func_00073B40(4);
  } else if (param_1 & 2) {
    D_002FA5F4 = D_002FA5FC;
    D_002FA5F0 = D_002FA5F8;
    func_00073B40(4);
  }
  func_00136F90(D_002FA5F4, D_002FA5F0);
}

void func_000758F0(int param_1)
{
    char *func_000AFD10(char *);
    int func_0013E469(char *, char *, ...);
    void func_00073B40(int);
    void func_000708B0(void);
    void __fastcall func_00073410(int *, char *);
    extern unsigned short D_00311518;
    extern int D_002FA604;
    extern int D_002FA600;
    extern char D_002FA5BA;
    extern char D_001D6110;
    extern char D_001D6104;
    extern char D_001D60FC;
    extern char D_001D60F0;
    extern char D_001D60EC;
    extern char *D_002FA394;
    char buf[128];

    if (param_1 == -2) return;
    if (param_1 == -3) return;
    if (param_1 == -1) {
        D_002FA604 = *(unsigned int *)&D_00311518 & 1;
        D_002FA600 = D_002FA604;
    } else if (param_1 & 0xc0) {
        D_002FA600 ^= 1;
        D_002FA5BA = 1;
        if (D_002FA600)
            func_000708B0();
    } else if (param_1 & 4) {
        if (D_002FA600)
            D_00311518 |= 1;
        else
            D_00311518 &= (unsigned short)~1;
        func_00073B40(4);
    } else if (param_1 & 2) {
        if (D_002FA604)
            D_00311518 |= 1;
        else
            D_00311518 &= (unsigned short)~1;
        D_002FA5BA = 0;
        func_00073B40(4);
    }
    if (D_002FA600) {
        func_0013E469(buf, &D_001D60FC, func_000AFD10(&D_001D6104), func_000AFD10(&D_001D6110));
        func_00073410((int *)(D_002FA394 + 0x18), (func_0013E469(buf, &D_001D60FC, func_000AFD10(&D_001D60F0), func_000AFD10(&D_001D6110)), buf));
    } else {
        func_0013E469(buf, &D_001D60FC, func_000AFD10(&D_001D6104), func_000AFD10(&D_001D60EC));
        func_00073410((int *)(D_002FA394 + 0x18), (func_0013E469(buf, &D_001D60FC, func_000AFD10(&D_001D60F0), func_000AFD10(&D_001D60EC)), buf));
    }
}

void func_00075A70(int n)
{
  void func_00070190(void);
  void func_00070200(float *, float *);
  void func_00070370(void);
  extern float D_001D6114, D_001D37D0, D_001D386C, D_002FA404, D_001D4270, D_002FA508;
  extern float D_001D29D8, D_001D3330, D_001D3E00, D_001D2C00;
  float s;
  int i, y;
  float r[4];
  float c[4];
  int *is = (int *)&s;
  int *ir = (int *)r;
  int *ic = (int *)c;
  long double t;
  ic[0] = 0x3f000000; ic[1] = 0x3e19999a; ic[2] = 0x3f800000; ic[3] = 0x3f800000;
  ir[0] = 0x43480000; ir[1] = 0x43700000; ir[2] = 0x43480000; ir[3] = 0x43820000;
  *is = 0x3f800000;
  func_00070190();
  i = 0;
  y = 0;
  do {
    if (n < 10 && i >= n) {
      ic[3] = 0x3f4ccccd;
      *is = 0x3f000000;
    }
    ic[2] = *is;
    t = (long double)i;
    t = t * D_001D6114;
    t = t * D_001D37D0;
    t = t + D_001D386C;
    t = t * s;
    c[1] = (float)t;
    t = (long double)y;
    t = t + D_002FA404;
    r[0] = (float)t;
    t = t + D_001D4270;
    r[2] = (float)t;
    if ((long double)r[0] < (long double)D_002FA508) ir[0] = *(int *)&D_002FA508;
    if ((long double)r[2] < (long double)D_002FA508) ir[2] = *(int *)&D_002FA508;
    ic[0] = *is;
    ir[1] = 0x43700000;
    ir[3] = 0x43710000;
    func_00070200(c, r);
    c[0] = (float)((long double)s * D_001D29D8);
    ir[1] = 0x43720000;
    ir[3] = 0x43740000;
    func_00070200(c, r);
    c[0] = (float)((long double)s * D_001D3330);
    ir[1] = 0x43750000;
    ir[3] = 0x43780000;
    func_00070200(c, r);
    c[0] = (float)((long double)s * D_001D3E00);
    ir[1] = 0x43790000;
    ir[3] = 0x437d0000;
    func_00070200(c, r);
    c[0] = (float)((long double)s * D_001D2C00);
    ir[1] = 0x437e0000;
    ir[3] = 0x43818000;
    func_00070200(c, r);
    y += 25;
    i += 1;
  } while (y < 250);
  func_00070370();
}

void func_00075C60(int param_1)
{
  void func_00075A70(void);
  void func_00073B40(int);
  void func_00100BC0(float);
  void func_00104050(float);
  extern int D_002FA60C, D_002FA608;
  extern short D_00313A78;
  extern char D_002FA5B8, D_0031151A;
  extern float D_001D29E0;
  long double a;

  if (param_1 != -2) {
    if (param_1 == -3) return;
    if (param_1 == -1) {
      D_002FA60C = D_00313A78;
      D_002FA608 = D_002FA60C;
    } else if (param_1 & 0x40) {
      D_002FA608--;
      D_002FA5B8 = 1;
    } else if (param_1 & 0x80) {
      D_002FA608++;
      D_002FA5B8 = 1;
    } else if (param_1 & 4) {
      D_00313A78 = D_002FA608;
      D_0031151A = D_002FA608;
      func_00073B40(4);
    } else if (param_1 & 2) {
      func_00073B40(4);
      a = D_002FA60C;
      func_00100BC0((float)(a * D_001D29E0));
      a = D_002FA60C;
      func_00104050((float)(a * D_001D29E0));
      D_002FA5B8 = 0;
      return;
    }
    if (D_002FA608 < 0) {
      D_002FA608 = 0;
    } else if (D_002FA608 > 10) {
      D_002FA608 = 10;
    }
    a = D_002FA608;
    func_00100BC0((float)(a * D_001D29E0));
    a = D_002FA608;
    func_00104050((float)(a * D_001D29E0));
    return;
  }
  func_00075A70();
}

void func_00075D70(int param_1)
{
  void func_00075A70(void);
  void func_00073B40(int);
  void func_00100BE0(float);
  extern int D_002FA614, D_002FA610;
  extern short D_00313A7A;
  extern char D_002FA5B9, D_0031151B;

  if (param_1 == -2) {
    func_00075A70();
    return;
  }
  if (param_1 == -3) return;
  if (param_1 == -1) {
    D_002FA614 = D_00313A7A;
    D_002FA610 = D_002FA614;
  } else if (param_1 & 0x40) {
    D_002FA610--;
    D_002FA5B9 = 1;
  } else if (param_1 & 0x80) {
    D_002FA610++;
    D_002FA5B9 = 1;
  } else if (param_1 & 4) {
    D_00313A7A = D_002FA610;
    D_0031151B = D_002FA610;
    func_00073B40(4);
  } else if (param_1 & 2) {
    func_00073B40(4);
    func_00100BE0((float)((long double)D_002FA614 * 0.0));
    D_002FA5B9 = 0;
    return;
  }
  if (D_002FA610 < 0) {
    D_002FA610 = 0;
  } else if (D_002FA610 > 10) {
    D_002FA610 = 10;
  }
  func_00100BE0((float)D_002FA610 * 1.0f);
}

