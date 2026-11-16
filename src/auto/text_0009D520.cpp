/* 17 functions from 0x0009D520 to 0x0009E449, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_0009D520(int);
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
    int spare;
    int x[4];
    int y[4];
    int *q=(int*)_func_0009C7A0(p,&_D_001D7474,0);
    x[0]=q[0]; x[1]=q[1]; x[2]=q[2]; x[3]=q[3];
    q=(int*)_func_0009C7A0(p,&_D_001D7424,0);
    y[0]=q[0]; y[1]=q[1]; y[2]=q[2]; y[3]=q[3];
    q=(int*)_func_0009C7A0(p,&_D_001D7468,0);
    _func_000F4390(a,x,y,q[0]);
}

void _func_00080A70(...);
extern char _D_001D7474, _D_001D7484, _D_001D7424;
void _func_0009DFB0(int p)
{
    int a[4];
    int b[4];
    int c[4];
    int *x=(int*)_func_0009C7A0(p,&_D_001D7474,0);
    a[0]=x[0]; a[1]=x[1]; a[2]=x[2]; a[3]=x[3];
    int *y=(int*)_func_0009C7A0(p,&_D_001D7484,0);
    b[0]=y[0]; b[1]=y[1]; b[2]=y[2]; b[3]=y[3];
    int *z=(int*)_func_0009C7A0(p,&_D_001D7424,0);
    c[0]=z[0]; c[1]=z[1]; c[2]=z[2]; c[3]=z[3];
    _func_00080A70(c,b,a);
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

