/* 19 functions from 0x00104380 to 0x00105375, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001045F0(void) {
    int func_00104200(...);
    func_00104200();
}

extern int _D_00324F70; unsigned char _func_00104600(void) { return (unsigned char)(_D_00324F70 != 0); }

void func_00104610(void)
{
    extern int D_00313B54, D_00308158, D_00313B60, D_00324F1C;
    extern char D_001DE7B0, D_001DE7A4, D_001DE79C, D_001DE78C, D_001DE768, D_00324F30;
    extern float D_001D27FC, D_001D3AE4, D_001DE788, D_001D27B0, D_00324D08, D_001D27B8;
    char func_000FA6A0(char *);
    int *func_0009C7A0(int, char *, int);
    int func_0013E600(char *, char *);
    int func_0009C590(char *);
    void func_00110060(int, void *);
    float func_0012E7B0(float *, float *);
    void func_00128840(int, float);
    void func_000FA700(char *);
    void func_000F9C00(int, char *);
    __declspec(align(16)) char mat1[64];
    __declspec(align(16)) char mat2[64];
    float x;
    int obj;
    double scaled;

    if (D_00313B54 != 4)
        return;
    if (!func_000FA6A0(&D_001DE7B0))
        return;
    if (*func_0009C7A0(D_00308158, &D_001DE7A4, 0) != 0x3f800000)
        return;
    if (!func_0013E600(&D_00324F30, &D_001DE79C))
        return;
    obj = func_0009C590(&D_001DE78C);
    func_00110060(*(int *)(obj + 0x2c), mat2);
    func_00110060(D_00313B60, mat1);
    x = func_0012E7B0((float *)(mat2 + 0x30), (float *)(mat1 + 0x30));
    if ((double)x < (double)D_001D27FC)
        *(int *)&x = 0x3f800000;
    else if ((double)x > (double)D_001D3AE4)
        *(int *)&x = 0;
    else {
        scaled = ((double)x - (double)D_001D27FC) * (double)D_001DE788;
        x = (float)((double)D_001D27B0 - scaled);
    }
    if (D_00324F1C != 0)
        func_00128840(D_00324F1C, (float)((double)D_00324D08 * (double)x));
    if ((double)x == (double)D_001D27B8) {
        func_000FA700(&D_001DE7B0);
        func_000F9C00(D_00308158, &D_001DE768);
    }
}

void func_00104980(char flag)
{
    extern int D_00324F70, D_00324F1C, D_00324F2C;
    int func_00128BE0(...);
    int func_001393E0(...);
    int value;
    switch (D_00324F70) {
    case 2:
        if (flag) {
            value = D_00324F1C;
            if (value)
                func_00128BE0(value, 1);
            value = D_00324F2C;
            if (value)
                func_001393E0(value, 1);
        }
        break;
    case 3:
        if (!flag) {
            value = D_00324F1C;
            if (value)
                func_00128BE0(value, 0);
            value = D_00324F2C;
            if (value)
                func_001393E0(value, 0);
        }
        break;
    }
}

void func_001049F0(unsigned char flag)
{
    extern int D_00324F70, D_00324F20;
    void func_00104980(unsigned char);
    int func_00115F60(...);
    unsigned int i;
    int value;
    func_00104980(flag);
    switch (D_00324F70) {
    case 2:
        if (flag) {
            i = 0;
            do {
                value = *(int *)((char *)&D_00324F20 + i);
                if (value)
                    func_00115F60(value, 1);
                i += 4;
            } while (i < 12);
            D_00324F70 = 3;
        }
        break;
    case 3:
        if (!flag) {
            i = 0;
            do {
                value = *(int *)((char *)&D_00324F20 + i);
                if (value)
                    func_00115F60(value, 0);
                i += 4;
            } while (i < 12);
            D_00324F70 = 2;
        }
        break;
    case 1:
        if (flag)
            D_00324F70 = 4;
        break;
    case 4:
        if (!flag)
            D_00324F70 = 1;
        break;
    }
}

void func_00104AB0(void){ extern int D_00324F1C; extern int D_00324F70; extern int D_00324EB8; extern int D_00324F2C; extern int D_00324F0C; extern int D_00324EBC; extern int D_00324F00; extern int D_00324F04; extern int D_00324F08; extern int D_00324F10; extern int D_00324F14; extern int D_00324F18; extern int D_00324F20; extern int D_00324F74; int func_00124F00(...); int func_00136F80(...); D_00324F1C=0;D_00324F70=0;D_00324EB8=0;D_00324F2C=0;D_00324F0C=0;D_00324EBC=-1;D_00324F00=0;D_00324F04=0;D_00324F08=0;D_00324F10=func_00124F00();D_00324F14=func_00124F00();D_00324F18=func_00124F00();D_00324F20=0;D_00324F2C=0;D_00324F74=func_00136F80();}

void func_00104B30(void)
{
  extern undefined4 D_00324F70;
  int func_00104190(...);
  int func_000688D0(...);
  extern undefined4 D_00324F74;
  int func_00116160(...);
  extern undefined4 D_00324F10;
  extern undefined4 D_00324F14;
  extern undefined4 D_00324F18;
  if (D_00324F70 != 0) {
    func_00104190();
  }
  func_000688D0(D_00324F74);
  func_00116160(D_00324F10);
  func_00116160(D_00324F14);
  func_00116160(D_00324F18);
  return;
}

void _func_001051F0(void)
{
    extern int D_00313B54, D_00324F80, D_00324F78;
    extern unsigned char D_001E6231, D_001E6232, D_001E6233, D_001E6234;
    int x = D_00313B54;
    unsigned char c;
    D_00324F80 = 0;
    D_00324F78 = 0;
    if (x == 3 || x == 4) {
        D_001E6231 = 0;
        D_001E6232 = 1;
        D_001E6233 = 2;
        D_001E6234 = 3;
        return;
    }
    if (x == 5) {
        c = (unsigned char)x;
        c |= 0xFF;
        D_001E6231 = c;
        D_001E6232 = c;
        D_001E6233 = c;
        D_001E6234 = c;
        return;
    }
    D_001E6231 = 10;
    D_001E6232 = 11;
    D_001E6233 = 12;
    D_001E6234 = 13;
}

void func_00105270(void) {
    extern int D_00324F80;
    D_00324F80 = 0;
}

void func_00105280(void)
{
  extern undefined D_001E5ECB;
  int func_00127460(...);
  extern undefined4 D_00324BE8;
  if (D_001E5ECB != '\0') {
    func_00127460(D_00324BE8);
  }
  return;
}

void func_001052A0(void)
{
  extern undefined D_001E5ECB;
  int func_00127930(...);
  extern undefined4 D_00324BE8;
  if (D_001E5ECB != '\0') {
    func_00127930(D_00324BE8);
  }
  return;
}

void _func_001052C0(void) {
 extern unsigned char D_001E5ECB;
 extern int D_00324BE8;
 int func_00127310(...);
 if(D_001E5ECB) { func_00127310(D_00324BE8); D_00324BE8=0; }
}

void _func_001052F0(int a) {
 int func_00128DB0(...),func_00131990(...),func_00127200(...);
 extern int D_001E46C0,D_00324BE8; extern float D_00324D20,D_00324D10; extern char D_001D29C7;
 func_00128DB0(1);func_00131990(D_001E46C0);D_00324BE8=func_00127200(a);
 *(float *)(D_00324BE8+0x15c)=(float)((double)D_00324D20*(double)D_00324D10);
 func_00131990(&D_001D29C7);func_00128DB0(0);
}

void _func_00105340(int a, int b) {
 extern int D_00324BE8;
 int func_001278C0(...);
 func_001278C0(D_00324BE8,a,b);
}

void func_00105360(int param_1){ void func_00110760(...); int value=*(int*)(param_1+0x2c); if(value) func_00110760(value); }

