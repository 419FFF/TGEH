/* 19 functions from 0x00104380 to 0x00105375, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "string.h"

void func_00104380(int a, char *name)
{
 extern int D_00324F70,D_00313B6C,D_00324EB8;
 extern char D_001DE74C,D_001DE754,D_001DE75C,D_00324F30,D_00324EC0;
 void func_00104190(void);
 void func_00104200(int);
 int func_0011B810(int),func_0011BF40(char *,int);
 char func_00131A10(char *);
 char prefix[4], path[256];
 char *language;
 if(D_00324F70)func_00104190();
 switch(D_00313B6C) {
 case 1: language=&D_001DE74C;break;
 case 2: language=&D_001DE754;break;
 default: language=&D_001DE75C;break;
 }
 strcpy(&D_00324F30,name);
 func_0011B810(1);
 if(a)func_00104200(a);
 prefix[0]=language[0];prefix[1]=language[1];prefix[2]=language[2];prefix[3]=0;
 strcpy(&D_00324EC0,"speech/");
 strcat(&D_00324EC0,language);
 strcat(&D_00324EC0,prefix);
 strcat(&D_00324EC0,name);
 strcat(&D_00324EC0,".wav");
 strcpy(path,"speech/");
 strcat(path,language);
 strcat(path,prefix);
 strcat(path,name);
 strcat(path,".bwav");
 if(!func_00131A10(path) && !func_00131A10(&D_00324EC0))D_00324EB8=0;
 else D_00324EB8=func_0011BF40(&D_00324EC0,1);
 func_0011B810(0);
 D_00324F70=1;
}

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

void func_00104770(void)
{
    extern int _D_00324F70, _D_00324F2C, _D_00324F1C, _D_00324EB8, _D_00324F20[3], _D_00313B60;
    extern char _D_001DE7CC, _D_00324EC0, _D_0000FFFF;
    extern float _D_00324D08;
    int func_0011BDD0(...);
    int func_00139570(...);
    char func_00124F50(...);
    int func_001286C0(...);
    int func_0012F120(...);
    int func_001105E0(...);
    int func_00128710(...);
    int func_00110550(...);
    void func_00128A80(int, int, float);
    void func_00128840(int, float);
    int func_00139B80(...);
    void func_00115EB0(int, int, int, void *, float, int);
    int func_00128C50(...);
    int func_001163C0(...);
    void func_00104610(void);
    void func_00104190(void);
    unsigned int i;
    int info[4];
    __declspec(align(16)) float mat[15];

    switch (_D_00324F70) {
    case 2:
        func_00104610();
        if (_D_00324F2C != 0) {
            if (func_00139570(_D_00324F2C) != 1)
                return;
        } else if (_D_00324F1C != 0) {
            if (func_00128C50(_D_00324F1C) == 2)
                return;
        } else if (_D_00324F20[0] != 0) {
            if (func_001163C0(_D_00324F20[0]) != 0)
                return;
        }
        func_00104190();
        return;
    case 1:
        break;
    default:
        return;
    }
    if (_D_00324EB8 != 0) {
        if (func_0011BDD0(_D_00324EB8, 0) == 0)
            return;
        *(short *)(_D_00324EB8 + 0x2a) -= 1;
    }
    if (_D_00324F2C != 0 && func_00139570(_D_00324F2C) == 4)
        return;
    for (i = 0; i < 3; i++) {
        if (_D_00324F20[i] != 0 && func_00124F50(_D_00324F20[i]) == 0)
            break;
    }
    if (i < 3)
        return;
    if (_D_00324EB8 != 0) {
        _D_00324F1C = func_001286C0(&_D_001DE7CC);
        func_0012F120(mat);
        mat[12] = 0;
        mat[13] = 0;
        mat[14] = 100.0f;
        func_001105E0(_D_00324F1C, mat, 0);
        info[0] = 0; info[1] = 0; info[2] = 0; info[3] = 0;
        info[0] = (int)&_D_00324EC0;
        info[1] = 0x3f800000;
        info[3] = 0x49742400;
        info[2] = 0x49742400;
        func_00128710(_D_00324F1C, 0, info);
        func_00128840(_D_00324F1C, _D_00324D08);
        func_00110550(_D_00313B60, _D_00324F1C, 8);
        func_00128A80(_D_00324F1C, 0, 1.0f);
    }
    if (_D_00324F2C != 0)
        func_00139B80(_D_00324F2C);
    for (i = 0; i < 0xc; i += 4) {
        if (*(int *)((char *)_D_00324F20 + i) != 0)
            func_00115EB0(*(int *)((char *)_D_00324F20 + i), 1, 0, &_D_0000FFFF, 24.0f, 0);
    }
    _D_00324F70 = 2;
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

void *func_00104B70(void *src)
{
 int func_00116A90(...),func_0010F750(...); float *func_0009C7A0(...); void func_0011C410(...);
 extern int D_00326110,D_00324F80; extern char D_001DE834,D_001DE828,D_001DE81C,D_001DE810,D_001DE804,D_001DE7F8,D_001DE7EC,D_001DE7E0,D_001DE7D4,D_001DE600,D_001DE5F0,D_001DCFF4,D_001DE5BC,D_00324F78;
 char *p=(char*)func_00116A90(0x150,1,1);
 int *d=(int*)p,*q=(int*)src;
 memcpy(p,src,0x110);
 p[0x12]=9; p[0x138]=0; p[0x139]=0;
 *(int*)(p+0x2c)=func_0010F750(&D_001DE834,D_00326110,0xe0);
 p[0x130]=(unsigned char)(long double)*func_0009C7A0(p,&D_001DE828,0);
 p[0x131]=(unsigned char)(long double)*func_0009C7A0(p,&D_001DE81C,0);
 p[0x132]=(unsigned char)(long double)*func_0009C7A0(p,&D_001DE810,0);
 p[0x133]=(unsigned char)(long double)*func_0009C7A0(p,&D_001DE804,0);
 p[0x134]=(unsigned char)(long double)*func_0009C7A0(p,&D_001DE7F8,0);
 p[0x135]=(unsigned char)(long double)*func_0009C7A0(p,&D_001DE7EC,0);
 p[0x136]=(unsigned char)(long double)*func_0009C7A0(p,&D_001DE7E0,0);
 p[0x137]=(unsigned char)(long double)*func_0009C7A0(p,&D_001DE7D4,0);
 *(int*)(p+0x144)=*(int*)func_0009C7A0(p,&D_001DE600,0);
 *(int*)(p+0x140)=*(int*)func_0009C7A0(p,&D_001DE5F0,0);
 *(int*)(p+0x128)=*(int*)func_0009C7A0(p,&D_001DCFF4,0);
 *(int*)(p+0x13c)=(int)(long double)*func_0009C7A0(p,&D_001DE5BC,0);
 func_0011C410(&D_00324F78,p+0x114,p);
 D_00324F80++;
 return p;
}

void _func_001051F0(void)
{
    extern int D_00313B54, D_00324F80, D_00324F78;
    extern unsigned char D_001E6231, D_001E6232, D_001E6233, D_001E6234;
    int x = D_00313B54;
    char c;
    D_00324F80 = 0;
    D_00324F78 = 0;
    if (x == 3 || x == 4) {
        D_001E6231 = 0;
        D_001E6232 = 1;
        D_001E6233 = 2;
        D_001E6234 = 3;
    } else if (x == 5) {
        c = (char)x;
        c |= (char)-1;
        D_001E6231 = c;
        D_001E6232 = c;
        D_001E6233 = c;
        D_001E6234 = c;
    } else {
        D_001E6231 = 10;
        D_001E6232 = 11;
        D_001E6233 = 12;
        D_001E6234 = 13;
    }
}
#pragma optimize("", on)
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

