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

void func_00101A10(int a, int b, int c) {}

extern float D_00324D08;
extern float D_00324D0C;
extern unsigned char D_001E5EC9;
extern int D_00324D34;
int func_0013E3F4(float);
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
void func_00102470(void) {
    int func_001021C0(...);
    func_001021C0();
}

void func_00102480(int a, int b) {
    int t;
    unsigned short f;
    unsigned char bit;

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

    f = *(unsigned short *)(b + 0xb6);
    bit = (unsigned char)((*(unsigned char *)(a + 0xb6) >> 4) & 1);
    if (bit)
        f = (unsigned short)(f | 0x10);
    else
        f = (unsigned short)(f & 0xffef);
    *(unsigned short *)(b + 0xb6) = f;
    bit = (unsigned char)((*(unsigned char *)(b + 0xb6) >> 4) & 1);
    if (bit)
        *(unsigned char *)(a + 0xb6) = (unsigned char)(*(unsigned char *)(a + 0xb6) | 0x10);
    else
        *(unsigned char *)(a + 0xb6) = (unsigned char)(*(unsigned char *)(a + 0xb6) & 0xef);

    f = *(unsigned short *)(b + 0xb6);
    bit = (unsigned char)(((unsigned char)f >> 5) & 1);
    if ((*(unsigned char *)(a + 0xb6) >> 5) & 1)
        f = (unsigned short)(f | 0x20);
    else
        f = (unsigned short)(f & 0xffdf);
    *(unsigned short *)(b + 0xb6) = f;
    if (bit)
        *(unsigned char *)(a + 0xb6) = (unsigned char)(*(unsigned char *)(a + 0xb6) | 0x20);
    else
        *(unsigned char *)(a + 0xb6) = (unsigned char)(*(unsigned char *)(a + 0xb6) & 0xdf);
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

