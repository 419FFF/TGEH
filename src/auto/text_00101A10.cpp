/* 12 functions from 0x00101A10 to 0x00102870, found by Ghidra. */
#include "common.h"

struct FlagBits {
    unsigned short pad:4;
    unsigned short b4:1;
    unsigned short b5:1;
};

struct SoundInfo {
    char *str;
    int one;
    int x;
    int y;
    int len;
    char buf[128];
};

struct Obj21C0 {
    char pad0[0x10];
    unsigned char flags10;
    unsigned char flags11;
    unsigned char b12;
    char pad13[0x19];
    int f2c;
    char pad30[0x48];
    int f78;
    int f7c;
    int f80;
    int f84;
    char pad88[0xc];
    int f94;
    int f98;
    char pad9c[0x14];
    int fb0;
    unsigned char fb4;
    char padb5;
    unsigned short fb6;
    int fb8;
    int fbc[4];
    char padcc[0x110 - 0xcc];
};
struct Obj21C0Copy { int d[0x44]; };
struct Bit0Byte { unsigned char b0:1; unsigned char rest:7; };
void func_00101A10(int a, int b, int c) {}

extern float D_00324D08;
extern float D_00324D0C;
extern unsigned char D_001E5EC9;
extern int D_00324D34;
int __ftol2(float);
int func_00128870(int, int);
int func_00128840(int, float);
void func_00110760(int);
void func_00102020(int param_1, int param_2, float param_3)
{
    unsigned short flags = *(unsigned short *)(*(int *)(param_1 + 0x78) + 0x32);
    if ((flags & 0x80) == 0) {
        float factor = D_00324D0C;
        if (flags & 0x100)
            factor = D_00324D08;
        param_3 = factor * param_3;
    }
    func_00128840(*(int *)(param_1 + 0xb8), param_3);
}

void func_00102090(char a0) {
    extern char D_001E6230;
    D_001E6230 = a0;
}

#pragma intrinsic(strcpy)
#pragma intrinsic(strlen)
extern "C" char *strcpy(char *, const char *);
extern "C" unsigned int strlen(const char *);
extern char D_001DE714[];
extern int D_00324EA0;
extern int D_00324EAC;
extern char D_001D29C7[];
int func_001286C0(char *);
void func_00131990(int);
void func_00128990(int, int);
void func_00128780(int, int, void *);
void func_00128710(int, int, void *);
#pragma intrinsic(strcpy)
#pragma intrinsic(strlen)
void func_001020A0(int param_1, int *param_2, char *param_3, char param_4) {
    struct SoundInfo info;
    unsigned int i;

    *param_2 = func_001286C0(D_001DE714);
    *(char *)(param_1 + 0x1a) = (char)(*(char *)(param_1 + 0x1a) + 1);
    D_00324EA0 = D_00324EA0 + 1;
    info.str = info.buf;
    strcpy(info.buf, param_3);
    i = 0;
    info.len = (int)strlen(info.str);
    if (info.len != 0) {
        do {
            char c = info.str[i];
            if (c >= 'A' && c <= 'Z')
                c = (char)(c + 0x20);
            info.str[i] = c;
            i++;
        } while (i < strlen(info.str));
    }
    func_00131990(D_00324EAC);
    info.one = 0x3f800000;
    info.y = *(int *)(param_1 + 0x38);
    info.x = *(int *)(param_1 + 0x34);
    func_00128990(*param_2, 0);
    if (param_4 != 0)
        func_00128780(*param_2, 0, &info);
    else
        func_00128710(*param_2, 0, &info);
    func_00131990((int)D_001D29C7);
}

Obj21C0 *__cdecl _func_001021C0(char *param_1, Obj21C0 *param_2, unsigned int param_3)
{
  extern unsigned int D_00308158;
  extern int D_00324E98, D_00326110, D_00324D00, D_001E5ED0;
  extern unsigned char D_001E6230;
  extern char D_00324BCC[], D_001D5814[], D_001DE724[], D_001DE71C[];
  extern float D_001D27B8;
  int func_000F91D0(...);
  Obj21C0 *func_00116A90(...);
  void func_0011C410(...);
  int func_0010F750(...);
  float *func_0009C7A0(...);
  void func_001020A0(...);
  int local_4;
  Obj21C0 *p;
  float *pf;
  int i;
  int iVar7;

  local_4 = 0;
  if (*param_1 != 0) {
    local_4 = func_000F91D0(param_1);
  }
  if (param_3 == D_00308158 && (*(unsigned short *)&param_2->flags10 & 1) != 0 && local_4 == 0) {
    *(unsigned short *)&param_2->flags10 &= 0xfffe;
  }
  p = func_00116A90(0x110, 1, 1);
  *(Obj21C0Copy *)p = *(Obj21C0Copy *)param_2;
  *(unsigned short *)&p->flags10 |= 0x4000;
  p->b12 = 9;
  func_0011C410(D_00324BCC, (char *)p + 0x68, p);
  D_00324E98 = D_00324E98 + 1;
  p->fb6 &= 0xffdf;
  p->f7c = param_3;
  if ((p->flags10 & 1) != 0) {
    p->fb6 = p->fb6 | 0x10;
  } else {
    p->fb6 = p->fb6 & 0xffef;
  }
  p->f80 = 0;
  if (D_001E5EC9 == 0) {
    p->fb8 = 0;
    p->f2c = func_0010F750(D_001D5814, D_00326110, 0xe0);
    return p;
  }
  if (D_001E6230 == 0xff) {
    p->fb4 = 1;
  } else {
    pf = func_0009C7A0(p, D_001DE724, 0);
    if (pf == 0) {
      p->fb4 = 0xff;
    } else {
      p->fb4 = (unsigned char)(int)*pf;
    }
    p->fb4 = p->fb4 & D_001E6230;
  }
  pf = func_0009C7A0(p, D_001DE71C, 0);
  if (*pf != D_001D27B8 && *pf != (float)D_001E5ED0) {
    p->fb4 = 0;
  }
  if (p->fb4 != 0) {
    int a;
    func_00101A10((int)param_2, (int)p, param_3);
    a = p->f78;
    if (((*(unsigned char *)(a + 0x32) >> 4) & 1) == 0) {
      p->fb6 = p->fb6 & 0xfff7;
    } else {
      p->fb6 = p->fb6 | 8;
    }
    p->f94 = *(int *)(a + 0x3c);
    p->fb0 = 0;
    p->f98 = 0x3f800000;
    if (*(unsigned char *)(a + 0x1b) != 0 && (unsigned short)*(unsigned char *)(a + 0x1b) < *(unsigned short *)(a + 0x18)) {
      p->fb8 = 0;
      p->f2c = D_00324D00;
      return p;
    }
    p->f2c = D_00324D00;
    if (p->f7c == D_00308158) {
      p->f84 = local_4;
    }
    *(unsigned char *)&param_3 = p->flags10 & 1;
    func_001020A0(a, &p->fb8, *(int *)(a + 0x28), param_3, 0);
    i = 0;
    do {
      p->fbc[i] = 0;
      iVar7 = p->f78;
      if ((unsigned char)(i + 1) < *(unsigned char *)(iVar7 + 0x30)) {
        func_001020A0(iVar7, &p->fbc[i], *(int *)(iVar7 + 0x40 + i * 4), param_3, i + 1);
      }
      i = i + 1;
    } while (i < 4);
    return p;
  }
  p->fb8 = func_0010F750(D_001D5814, D_00326110, 0xe0);
  p->f2c = D_00324D00;
  return p;
}

void func_00102470(void) {
    int func_001021C0(...);
    func_001021C0();
}

void func_00102480(int a, int b) {
    int t;
    unsigned short fa, fb, saved;
    unsigned char ba, bb;

    t = *(int *)(a + 0xb8);
    *(int *)(a + 0xb8) = *(int *)(b + 0xb8);
    *(int *)(b + 0xb8) = t;
    t = *(int *)(a + 0xbc);
    *(int *)(a + 0xbc) = *(int *)(b + 0xbc);
    *(int *)(b + 0xbc) = t;
    t = *(int *)(a + 0xc0);
    *(int *)(a + 0xc0) = *(int *)(b + 0xc0);
    *(int *)(b + 0xc0) = t;
    t = *(int *)(a + 0xc4);
    *(int *)(a + 0xc4) = *(int *)(b + 0xc4);
    *(int *)(b + 0xc4) = t;
    t = *(int *)(a + 0xc8);
    *(int *)(a + 0xc8) = *(int *)(b + 0xc8);
    *(int *)(b + 0xc8) = t;
    fa = *(unsigned short *)(b + 0xb6);
    fb = *(unsigned short *)(a + 0xb6);
    saved = fb;
    ba = (unsigned char)(fa >> 4);
    bb = (unsigned char)(((unsigned char)fb >> 4) & 1);
    if (ba & 1)
        saved = (unsigned short)(saved | 0x10);
    else
        saved = (unsigned short)(saved & 0xffef);
    *(unsigned short *)(a + 0xb6) = saved;
    if (bb)
        *(unsigned char *)(b + 0xb6) |= 0x10;
    else
        *(unsigned char *)(b + 0xb6) &= 0xef;
    fb = *(unsigned short *)(a + 0xb6);
    fa = *(unsigned short *)(b + 0xb6);
    saved = fb;
    ba = (unsigned char)(fa >> 5);
    bb = (unsigned char)(((unsigned char)fb >> 5) & 1);
    if (ba & 1)
        saved = (unsigned short)(saved | 0x20);
    else
        saved = (unsigned short)(saved & 0xffdf);
    *(unsigned short *)(a + 0xb6) = saved;
    if (bb)
        *(unsigned char *)(b + 0xb6) |= 0x20;
    else
        *(unsigned char *)(b + 0xb6) &= 0xdf;
}

void func_001026A0(int param_1)
{
  extern unsigned char D_00324D44, D_00324D24;
  int func_00102480(...);
  int func_001287D0(int, int, unsigned char);
  int func_0011BED0(...);
  struct Fl { unsigned short pad:4, b4:1, b5:1; };
  int iVar2;
  int *puVar3;

  if (D_001E5EC9 != 0 && *(char *)(param_1 + 0xb4) != 0 &&
      ((Fl *)(param_1 + 0xb6))->b5 == 0 &&
      ((Fl *)(param_1 + 0xb6))->b4 != 0) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      for (puVar3 = *(int **)(*(int *)(param_1 + 0x78) + 8); puVar3 != 0; puVar3 = (int *)*puVar3) {
        iVar2 = puVar3[1];
        if (((Fl *)(iVar2 + 0xb6))->b4 != 0 && (*(int *)(iVar2 + 0xb8) != 0)) {
          func_00102480(param_1, iVar2);
        }
      }
    }
    if (*(int *)(param_1 + 0xb8) == 0) {
      ((Fl *)(param_1 + 0xb6))->b5 = 0;
    } else {
      func_001287D0(*(int *)(param_1 + 0xb8), 0, D_00324D44);
      iVar2 = 0;
      puVar3 = (int *)(param_1 + 0xbc);
      do {
        if (*(unsigned char *)(*(int *)(param_1 + 0x78) + 0x30) > (unsigned char)(iVar2 + 1)) {
          func_001287D0(*puVar3, 0, D_00324D44);
        }
        iVar2++;
        puVar3++;
      } while (iVar2 < 4);
      ((Fl *)(param_1 + 0xb6))->b5 = 1;
    }
    ((Fl *)(param_1 + 0xb6))->b4 = 0;
    if (D_00324D24 != 0) {
      func_0011BED0();
      return;
    }
  }
}

void func_001027B0(int param_1)
{
    if (D_001E5EC9 == 0) {
        func_00110760(*(int *)(param_1 + 0x2c));
        return;
    }
    int *p = (int *)param_1;
    int value = *(int *)((char *)p + 0xb8);
    if (value)
        func_00110760(value);
    p = (int *)((char *)p + 0xbc);
    int count = 4;
    do {
        if (*p)
            func_00110760(*p);
        ++p;
    } while (--count);
}

unsigned char func_00102810(int param_1)
{
    int obj = *(int *)(param_1 + 0x78);
    if (((*(unsigned char *)(obj + 0x32) >> 3) & 1) != 0)
        return 1;
    int id = *(int *)(param_1 + 0x84);
    if (!id)
        return 1;
    int table = D_00324D34;
    if (!table)
        return 1;
    unsigned int count = *(unsigned int *)(table + 0xe4);
    unsigned int index = 0;
    while (index < count) {
        int entry = table + 0xe8 + index * 8;
        if (*(unsigned int *)(entry + 4) < *(unsigned char *)(obj + 0x31))
            return 0;
        if (id == *(int *)entry)
            return 1;
        ++index;
    }
    return 0;
}

