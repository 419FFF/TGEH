/* 17 functions from 0x0009D520 to 0x0009E449, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

struct B9E { unsigned int v[68]; };
extern int _D_003104B4;
extern int _D_0030C630[];
struct Flags9D520 { char pad[0x10]; unsigned char lo : 6; unsigned char dirty : 1; unsigned char hi : 1; };
int _func_0011B530(char *, char *, int);
int _func_0013E600(char *, const char *);

void _func_0009D520(int);
void _func_0009D520(int p)
{
    char buf[256];
    unsigned int i;
    char *q;
    int n;
    strcpy(buf, *(char **)(p + 0xc));
    strcat(buf, ".");
    for (i = *(unsigned short *)(p + 0x54) + 1; i < (unsigned int)_D_003104B4; i++) {
        q = (char *)_D_0030C630[i];
        if (q != 0) {
            n = strlen(buf);
            if (_func_0011B530(*(char **)(q + 0xc), buf, n) == 0 &&
                _func_0013E600(*(char **)(q + 0xc) + n, ".") == 0) {
                _func_0009D520(_D_0030C630[i]);
                *(char *)(_D_0030C630[i] + 0x10) &= ~0x40;
            } else if (_func_0011B530(*(char **)(_D_0030C630[i] + 0xc), buf, strlen(buf)) != 0) {
                return;
            }
        }
    }
}

void _func_0009D620(int p)
{
    unsigned char *flags=(unsigned char *)(p+0x10);
    if (*flags & 0x40) {
        _func_0009D520(p);
        *flags = *flags & 0xbf;
    }
}

undefined4 func_0009DAC0(int param_1)
{
  undefined4 *puVar1;
  
  if ((*(char *)(param_1 + 0x13) != '\x04') && (*(char *)(param_1 + 0x13) != '4')) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 0x2c);
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    return *puVar1;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x110) + 0xe0);
}

int _func_00116A90(...);
void _func_0009DAF0(int);
int _func_0010F750(...);
int _func_000F9440(...);
int _func_0009C7A0(...);
void _func_0006E2C0(int);
extern int _D_00326110, _D_003104B4;
extern char _D_001D5814, _D_001D740C;
int *_func_0009DD00(int *p)
{
    struct S { int v[68]; };
    struct S *q = (struct S *)_func_00116A90(0x110,1,1);
    *(struct S *)q = *(struct S *)p;
    *(char *)((char *)q+0x12)=0;
    _func_0009DAF0((int)q);
    if (!q->v[0xb]) q->v[0xb]=_func_0010F750(&_D_001D5814,_D_00326110,0xe0);
    if (!_D_003104B4) _func_000F9440(q->v[0xb]);
    if (_func_0009C7A0((int)q,&_D_001D740C,0)) _func_0006E2C0((int)q);
    return (int *)q;
}

void _func_000F4390(...);
extern char _D_001D7474, _D_001D7424, _D_001D7468;
void _func_0009DF20(int p, int a)
{
    int x[4];
    int y[4];
    int z;
    int *q=(int*)_func_0009C7A0(p,&_D_001D7474,0);
    x[0]=q[0]; x[1]=q[1]; x[2]=q[2]; x[3]=q[3];
    q=(int*)_func_0009C7A0(p,&_D_001D7424,0);
    y[0]=q[0]; y[1]=q[1]; y[2]=q[2]; y[3]=q[3];
    q=(int*)_func_0009C7A0(p,&_D_001D7468,0);
    z=q[0];
    _func_000F4390(a,x,y,z);
}

void _func_00080A70(...);
extern char _D_001D7474, _D_001D7484, _D_001D7424;
void _func_0009DFB0(int p)
{
    int c[4];
    int b[4];
    int a[4];
    int *x=(int*)_func_0009C7A0(p,&_D_001D7474,0);
    c[0]=x[0]; c[1]=x[1]; c[2]=x[2]; c[3]=x[3];
    int *y=(int*)_func_0009C7A0(p,&_D_001D7484,0);
    b[0]=y[0]; b[1]=y[1]; b[2]=y[2]; b[3]=y[3];
    int *z=(int*)_func_0009C7A0(p,&_D_001D7424,0);
    a[0]=z[0]; a[1]=z[1]; a[2]=z[2]; a[3]=z[3];
    _func_00080A70(a,b,c);
}

int _func_0009DD00(...);
int _func_00081A90(...);
extern char _D_001D7474;
int _func_0009E050(int p, int a)
{
    int values[4];
    int *x=(int*)_func_0009C7A0(p,&_D_001D7474,0);
    values[0]=x[0];
    x=(int*)_func_0009C7A0(p,&_D_001D7474,0);
    values[1]=x[1];
    x=(int*)_func_0009C7A0(p,&_D_001D7474,0);
    values[2]=x[2];
    values[3]=0;
    int *q=(int*)_func_0009DD00(p);
    int *other=*(int**)(*(int*)(p+0x2c)+0x2c);
    _func_00081A90(p,*(int*)((char*)q+0x2c),*(int*)(a+0x2c),values);
    return (int)q;
}

B9E *func_0009E0D0(B9E *p)
{
  int func_00116A90(...);
  int func_00088220(...);
  int func_0009C7A0(...);
  void func_0009DAF0(...);
  int func_0010F750(...);
  void func_00012D60(...);
  extern char D_001D28F0, D_001D748C;
  extern int D_00326110;
  B9E *b = (B9E *)func_00116A90(0x110, 1, 1);
  *b = *p;
  *((char *)b + 0x12) = 0;
  *(int *)((char *)b + 0x2c) = func_00088220(b);
  if (func_0009C7A0(b, &D_001D28F0, 0)) func_0009DAF0(b);
  if (*(int *)((char *)b + 0x2c) == 0)
    *(int *)((char *)b + 0x2c) = func_0010F750(&D_001D748C, D_00326110, 0xe0);
  switch (*((unsigned char *)b + 0x13)) {
  case 0xe: func_00012D60(b, 5); break;
  case 0x10: func_00012D60(b, 6); break;
  case 0x3c: func_00012D60(b, 0x21); break;
  }
  return b;
}

B9E *func_0009E190(B9E *p)
{
  int func_00116A90(...);
  int func_00088220(...);
  int func_0009C7A0(...);
  void func_0009DAF0(...);
  int func_0010F750(...);
  void func_00012D60(...);
  extern char D_001D28F0, D_001D748C;
  extern int D_00326110;
  B9E *b = (B9E *)func_00116A90(0x1b0, 1, 1);
  *b = *p;
  *((char *)b + 0x12) = 1;
  *(int *)((char *)b + 0x2c) = func_00088220(b);
  if (func_0009C7A0(b, &D_001D28F0, 0)) func_0009DAF0(b);
  if (*(int *)((char *)b + 0x2c) == 0)
    *(int *)((char *)b + 0x2c) = func_0010F750(&D_001D748C, D_00326110, 0xe0);
  switch (*((unsigned char *)b + 0x13)) {
  case 0xe: func_00012D60(b, 5); break;
  case 0x10: func_00012D60(b, 6); break;
  case 0x3c: func_00012D60(b, 0x21); break;
  }
  return b;
}

B9E *func_0009E3B0(B9E *p)
{
  int func_00116A90(...);
  void func_0009DAF0(...);
  int func_00110300(int, void *, int);
  void func_00100270(int, int, void *, float, int);
  void func_00110330(int, int);
  extern char D_001D460C, D_001D7494;
  float local[4];
  B9E *b = (B9E *)func_00116A90(0x110, 1, 1);
  *b = *p;
  *((char *)b + 0x12) = 0;
  func_0009DAF0(b);
  local[0] = 0; local[1] = 0; local[2] = 0;
  func_00100270(func_00110300(*(int *)((char *)b + 0x2c), &D_001D460C, 0x18), 0, local, 1000.0f, 1);
  func_00110330(func_00110300(*(int *)((char *)b + 0x2c), &D_001D7494, 0x18), 0);
  return b;
}

