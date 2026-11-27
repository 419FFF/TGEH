/* 17 functions from 0x0009D520 to 0x0009E449, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

struct B9E { unsigned int v[68]; };
extern int _D_003104B4;
extern int _D_0030C630[];
struct Flags9D520 { char pad[0x10]; unsigned int lo : 6; unsigned int dirty : 1; unsigned int hi : 25; };
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
                *(unsigned short *)(_D_0030C630[i] + 0x10) &= ~0x40;
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

int _func_00088940(int, int);
int _func_000F8680(int);
int _func_000A23D0(int);
int _func_001025A0(int);
void _func_0009D640(int p)
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
                _func_0009D640(_D_0030C630[i]);
            } else if (_func_0011B530(*(char **)(_D_0030C630[i] + 0xc), buf, strlen(buf)) != 0) {
                break;
            }
        }
    }
    if (!(*(unsigned char *)(p + 0x10) & 8)) {
        _func_00088940(*(int *)(p + 0x2c), 1);
        _func_000F8680(*(int *)(p + 0x2c));
        if (!(*(unsigned char *)(p + 0x11) & 0x40)) {
            _func_000A23D0(p + 0x64);
        }
        if (*(char *)(p + 0x13) == 8) {
            _func_001025A0(p);
        }
        *(unsigned short *)(p + 0x10) |= 8;
    }
}

extern int _D_003080AC;
void _func_000A2410(int, int);
void _func_000F8810(int);
void _func_001026A0(int);
void _func_0009D780(int p)
{
    char buf[256];
    unsigned int i;
    char *q;
    int n;
    unsigned short flags;
    strcpy(buf, *(char **)(p + 0xc));
    strcat(buf, ".");
    for (i = *(unsigned short *)(p + 0x54) + 1; i < (unsigned int)_D_003104B4; i++) {
        q = (char *)_D_0030C630[i];
        if (q != 0) {
            n = strlen(buf);
            if (_func_0011B530(*(char **)(q + 0xc), buf, n) == 0 &&
                _func_0013E600(*(char **)(q + 0xc) + n, ".") == 0) {
                _func_0009D780(_D_0030C630[i]);
            } else if (_func_0011B530(*(char **)(_D_0030C630[i] + 0xc), buf, strlen(buf)) != 0) {
                break;
            }
        }
    }
    flags = *(unsigned short *)(p + 0x10);
    if (flags & 8) {
        if (!(flags & 0x4000)) {
            if (!_D_003080AC)
                _func_000A2410(p + 0x64, 0);
            else
                _func_000A2410(p + 0x64, 1);
        }
        _func_000F8810(*(int *)(p + 0x2c));
        if (*(char *)(p + 0x13) == 8)
            _func_001026A0(p);
        *(unsigned short *)(p + 0x10) &= ~0x8;
    }
}

void _func_0009D8D0(int p)
{
    int _func_000F9610(...);
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
                _func_0009D8D0(_D_0030C630[i]);
            } else if (_func_0011B530(*(char **)(_D_0030C630[i] + 0xc), buf, strlen(buf)) != 0) {
                break;
            }
        }
    }
    _func_000F9610(*(int *)(p + 0x2c));
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

void _func_0009DAF0(int param_1)
{
 extern int D_001D28F0,D_001D2E34,D_001D2E38,D_001D2E30,D_001D2E28,D_003104B4,D_001D73F8;
 extern char D_001D2E2C;
 extern float D_001D27EC;
 int _func_0009C7A0(...),_func_001319B0(...),_func_00131990(...),_func_000EBB10(...),_func_00110170(...),__ftol2(...),_func_0009C1F0(...);
 unsigned char local_114[0x114];
 unsigned char *p=local_114;
 int *puVar2;
 char *pcVar3,*pcVar8,*pcVar9,*pcVar10;
 int iVar4,uVar5;
 unsigned uVar7;
 float *pfVar6;
 unsigned char bVar13=0;
 puVar2=(int*)_func_0009C7A0(param_1,&D_001D28F0,0);
 if(puVar2){
 *(int*)(p)=*(int*)(param_1+0x2c); *(int*)(p+4)=0; *(int*)(p+8)=0; *(int*)(p+12)=0;
 *(p+16)=0;
 if((*(unsigned char*)(param_1+0x10)&1)!=0) *(p+16)=1;
 if(*(char*)(param_1+0x14)==1 || (*(p+16)=1,*(char*)(param_1+0x14)==3)) *(p+16)=0;
 *(int*)(p+20)=D_001D2E34; *(int*)(p+24)=D_001D2E38;
 pcVar8=(char*)*puVar2; pcVar3=pcVar8; do {char c=*pcVar3++;}while(pcVar3[-1]);
 pcVar10=(char*)(p+19); do {pcVar9=pcVar10+1;pcVar10++;}while(*pcVar9);
 pcVar9=pcVar8;
 for(uVar7=(unsigned)(pcVar3-pcVar8)>>2;uVar7;uVar7--){*(int*)pcVar10=*(int*)pcVar9;pcVar9+=4;pcVar10+=4;}
 for(uVar7=(unsigned)(pcVar3-pcVar8)&3;uVar7;uVar7--){*pcVar10++=*pcVar9++;}
 {unsigned short *q=(unsigned short*)(p+19); do{pcVar8=(char*)q+1;q=(unsigned short*)((char*)q+1);}while(*pcVar8);*q=(unsigned short)D_001D2E30;}
 _func_001319B0(p+0x94,0x80); _func_00131990(p+20);
 pcVar3=(char*)*puVar2;pcVar8=(char*)(p+20);do{*pcVar8++=*pcVar3;}while(*pcVar3++);
 {int *q=(int*)(p+19); do{puVar2=q;q=(int*)((char*)q+1);}while(*(char*)((char*)puVar2+1));*(int*)((char*)puVar2+1)=D_001D2E28;*(char*)((char*)puVar2+5)=D_001D2E2C;}
 if(D_003104B4==0) *(int*)(p+12)=0; else {*(int*)(p+12)=param_1+100;*(char*)(param_1+0x94)=*(char*)(param_1+0x13)=='=';}
 _func_000EBB10(p+20,p);
 *(int*)(param_1+0x5c)=*(int*)(p+8); *(char*)(param_1+0x57)=*(char*)(p+4); *(int*)(param_1+0x2c)=*(int*)p;
 _func_00110170(*(int*)p); _func_00131990(p+0x94);
 iVar4=_func_0009C7A0(param_1,&D_001D73F8,0);
 if(iVar4){uVar5=__ftol2();_func_0009C1F0(*(int*)(param_1+0x2c),uVar5);}
 if(*(char*)(p+17)==0)_func_00110170(*(int*)(param_1+0x2c));
 pfVar6=(float*)_func_0009C7A0(param_1,&D_001D73F8,0);
 if(pfVar6){if(*pfVar6<D_001D27EC){_func_0009C1F0(*(int*)(param_1+0x2c),-1);return;}uVar5=__ftol2();_func_0009C1F0(*(int*)(param_1+0x2c),uVar5);}
 }
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

B9E *func_0009DD90(B9E *src)
{
  extern int D_001D745C, D_001D7450, D_001D7444, D_001D7438, D_001D742C, D_001D7424, D_001D68E4, D_001D7418;
  int func_00116A90(...);
  int *func_0009C7A0(void *, void *, void *);
  int func_0012ED20(...);
  int func_0011F890(...);
  int func_0011FD30(...);
  B9E *obj;
  int *p;
  int s[9];

  obj = (B9E *)func_00116A90(0x110, 1, 1);
  *obj = *src;
  ((char *)obj)[0x12] = 8;
  s[0] = 0; s[1] = 0; s[2] = 0; s[3] = 0; s[4] = 0; s[5] = 0; s[6] = 0; s[7] = 0;
  s[8] = 0;
  switch ((int)*(float *)func_0009C7A0(obj, &D_001D745C, 0)) {
  case 0: s[0] = 0; break;
  case 1: s[0] = 1; break;
  case 2: s[0] = 2; break;
  case 3: s[0] = 3; break;
  case 4: s[0] = 4; break;
  }
  p = func_0009C7A0(obj, &D_001D7450, 0);
  if (p) s[5] = (int)*(float *)p;
  p = func_0009C7A0(obj, &D_001D7444, 0);
  if (p) s[6] = *p;
  p = func_0009C7A0(obj, &D_001D7438, 0);
  if (p) s[7] = *p;
  p = func_0009C7A0(obj, &D_001D742C, 0);
  if (p) s[8] = *p;
  p = func_0009C7A0(obj, &D_001D7424, 0);
  if (p) func_0012ED20(&s[1], p, 0x3b808081);
  obj->v[11] = func_0011F890(&D_001D68E4, s);
  p = func_0009C7A0(obj, &D_001D7418, 0);
  if (p) func_0011FD30(obj->v[11], (int)*(float *)p);
  return obj;
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

int *_func_00116A90(int, int, int);
int _func_00088220(int *);
int _func_0009C7A0(int *, void *, int);
void _func_0009DAF0(int *);
int _func_0010F750(void *, int, int);
void _func_00012D60(int *, int);
extern char _D_001D28F0;
extern int _D_00326110;
extern char _D_001D748C;
#pragma code_seg(push, ".text$9E250")
int *_func_0009E250(int *src)
{
    int *obj = _func_00116A90(0x1b0, 1, 1);
    unsigned char kind;
    memcpy(obj, src, 0x110);
    *((unsigned char *)obj + 0x12) = 1;
    obj[0xb] = _func_00088220(obj);
    if (_func_0009C7A0(obj, &_D_001D28F0, 0))
        _func_0009DAF0(obj);
    if (obj[0xb] == 0)
        obj[0xb] = _func_0010F750(&_D_001D748C, _D_00326110, 0xe0);
    kind = *((unsigned char *)obj + 0x13);
    switch (kind) {
    case 0xe:
        _func_00012D60(obj, 5);
        return obj;
    case 0x10:
        _func_00012D60(obj, 6);
        return obj;
    case 0x3c:
        _func_00012D60(obj, 0x21);
        return obj;
    case 5:
        _func_00012D60(obj, 3);
        return obj;
    case 0x5e:
        _func_00012D60(obj, 0x32);
        return obj;
    default:
        _func_00012D60(obj, 1);
        return obj;
    }
}
#pragma code_seg(pop)
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

