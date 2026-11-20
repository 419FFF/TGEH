/* 49 functions from 0x000FA6A0 to 0x000FB661, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

struct Slot_000FA750 { char *buf; int pad[3]; };
struct Arg_000FA750 { int x; Slot_000FA750 *slot; };

extern void* D_00324B68;

struct S_000FAFD0 { char pad0[0x10]; unsigned char f10_lo:3; unsigned char f10_b3:1; unsigned char f10_hi:4; unsigned char f11_lo:3; unsigned char f11_b3:1; unsigned char f11_hi:4; char pad12[3]; unsigned char f15; char pad16[0x6e]; unsigned int h84; };
struct P_000FAFD0 { S_000FAFD0 *s; };

extern void* _func_0001CC10(void* param_1);

extern int func_000F9C00(int param_1);
extern undefined1 func_00063C40(undefined4 param_1, int param_2);

void func_000FA6A0(undefined4 param_1)
{
  int func_0011C3E0(...);
  int func_00116FB0(...);
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    func_0011C3E0(puVar3);
    iVar2 = puVar3[2];
    func_00116FB0(*(undefined4 *)(iVar2 + 0x10));
    func_00116FB0(iVar2);
    puVar3 = puVar1;
  }
  func_00116FB0(param_1);
}

void _func_000FA700(undefined4 param_1, undefined4 param_2)
{
  int func_0013F2E9(...);
  
  if (D_00324B68 == 0) {
    return;
  }
  
  for( ; ; ) {
    if (D_00324B68 == 0) {
      break;
    }
    
    func_0013F2E9(*(void **)(param_1 + 8), param_2);
    param_1 = *(undefined4 *)(param_1 + 8);
  }
}

void _func_000FA740(void) { int func_000FA600(...); func_000FA600(); }

void _func_000FA8D0(void) {
 int func_00063C40(...); extern int D_003104B4; extern int D_0030C630[]; extern int D_001DD164; int func_000F9C00(...); int func_000FA750(...);
 func_00063C40();
 int i = D_003104B4;
 while ((i -= 1) >= 0) { int v = D_0030C630[i]; if (v) { int x=func_000F9C00(v,&D_001DD164); if(x)func_000FA750(x); } }
}

unsigned char func_000FA910(int a, int *p)
{
  extern int D_00324BA0, D_00324B9C, D_00324B88;
  char *s = *(char**)p[3];
  int depth, i;
  unsigned short *rec;
  if (!strcmp(s, "<")) {
    if ((double)*(float*)p[1] < *(float*)p[5]) return 1;
  } else if (!strcmp(s, "<=")) {
    if ((double)*(float*)p[1] <= *(float*)p[5]) return 1;
  } else if (!strcmp(s, "==")) {
    if ((double)*(float*)p[5] == *(float*)p[1]) return 1;
  } else if (!strcmp(s, ">=")) {
    if ((double)*(float*)p[1] >= *(float*)p[5]) return 1;
  } else if (!strcmp(s, ">")) {
    if ((double)*(float*)p[1] > *(float*)p[5]) return 1;
  }
  depth = 0;
  i = *(int*)(a + 0x18) + 1;
  if ((unsigned)i < *(unsigned short*)(*(int*)(a + 0x10) + 6)) {
    rec = (unsigned short*)(*(int*)(*(int*)(a + 0x10) + 0x28) + i * 8);
    do {
      unsigned int t = *rec;
      if (t == D_00324BA0) {
        depth++;
      } else {
        if (t == D_00324B9C && depth == 0) break;
        if (t == D_00324B88) {
          if (depth == 0) break;
          depth--;
        }
      }
      i++;
      rec += 4;
    } while ((unsigned)i < *(unsigned short*)(*(int*)(a + 0x10) + 6));
  }
  *(int*)(a + 0x18) = i;
  return 1;
}

unsigned char _func_000FAA50(int p) { extern unsigned short D_00324BA0,D_00324B88; unsigned int i=*(unsigned int*)(p+24); unsigned int n; unsigned int depth=0; unsigned short *tokens; unsigned char *ctx=*(unsigned char**)(p+16); i++; n=*(unsigned short*)(ctx+6); if(i>=n){*(unsigned int*)(p+24)=i;return 1;} tokens=(unsigned short*)(*(unsigned int*)(ctx+40)+i*8); while(i<n){ unsigned int c=tokens[0]; if(c==D_00324BA0)depth++; else if(c==D_00324B88){if(!depth)break;depth--;} i++;tokens+=4; n=*(unsigned short*)(ctx+6); } *(unsigned int*)(p+24)=i;return 1;}

unsigned char _func_000FAAC0(undefined4 a, int p) { unsigned int *dst=*(unsigned int**)(p+4); unsigned int *src=*(unsigned int**)(p+12); dst[0]=src[0]; dst[1]=src[1]; dst[2]=src[2]; dst[3]=src[3]; return 1; }

unsigned char _func_000FAAF0(undefined4 a, int p) { double x=(double)**(float**)(p+12); int op=*(char*)**(int***)(p+20); switch(op){case '+': x+=(double)**(float**)(p+28); break; case '-': x-=(double)**(float**)(p+28); break; case '/': x/=(double)**(float**)(p+28); break; case '*': x*=(double)**(float**)(p+28); break;} **(float**)(p+4)=(float)x; return 1; }

undefined4 func_000FAB60(int param_1, undefined4 *param_2)
{
  int func_000F9BB0(...);
  int func_000FA350(...);
  extern undefined4 D_00324B90;
  int func_000FA640(...);
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint local_8;
  
  iVar4 = func_000F9BB0(*param_2,param_2[1]);
  puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0x28) + *(int *)(param_1 + 0x18) * 8);
  local_8 = 0;
  if (*(short *)(*(int *)(iVar4 + 0x10) + 4) != 0) {
    param_2 = (undefined4 *)(iVar4 + 0xdc);
    iVar7 = 8;
    piVar5 = (int *)(iVar4 + 0x20);
    piVar6 = (int *)(iVar4 + 0x5c);
    do {
      *piVar5 = (int)piVar6;
      *piVar6 = (int)param_2;
      func_000FA350(param_1,*(undefined4 *)(iVar7 + -4 + *(int *)(puVar1 + 2)),
                     *(undefined4 *)(iVar7 + *(int *)(iVar4 + 0x10)),piVar5 + -1);
      iVar2 = *(int *)(iVar7 + *(int *)(iVar4 + 0x10));
      if ((((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) || (iVar2 == 3)) {
        piVar3 = (int *)*piVar5;
        *piVar6 = *piVar3;
        piVar6[1] = piVar3[1];
        piVar6[2] = piVar3[2];
        piVar6[3] = piVar3[3];
        *piVar5 = (int)piVar6;
      }
      param_2 = (undefined4 *)((int)param_2 + 0x80);
      local_8 = local_8 + 1;
      piVar5 = piVar5 + 2;
      iVar7 = iVar7 + 4;
      piVar6 = piVar6 + 4;
    } while (local_8 < *(ushort *)(*(int *)(iVar4 + 0x10) + 4));
  }
  if (*puVar1 == D_00324B90) {
    *(int *)(iVar4 + 0x4e4) = param_1;
    func_000FA640(param_1,1);
  }
  return 1;
}

unsigned char _func_000FAC80(undefined4 a, unsigned int *p) { int func_000FA5B0(...); func_000FA5B0(a,p[0],p[1]); return 1; }

extern char D_00307E08[];
extern float D_00307DB4;
extern float D_001D27B0;
extern float D_00307DBC;
unsigned char _func_000FACA0(undefined4 a, int p) { char *src=*(char**)*(int**)(p+4); char *dst=D_00307E08; char c; do { c=*src++; *dst++=c; } while(c); D_00307DBC=D_00307DB4+D_001D27B0; return 1; }

unsigned char _func_000FACD0(undefined4 param_1, undefined4 *param_2) { unsigned char func_00063C20(...); void func_00104380(...); if (!func_00063C20(param_1)) func_00104380(*param_2, *(undefined4 *)param_2[3]); return 1; }

unsigned char _func_000FAD00(undefined4 param_1, undefined4 *param_2) { unsigned char func_00063C20(...); void func_001045F0(...); if (!func_00063C20(param_1)) func_001045F0(*param_2); return 1; }

extern char D_001D29C7; unsigned char _func_000FAD30(undefined4 param_1, int param_2) { unsigned char func_00063C20(...); void func_00101240(...); int func_000AFD10(...); if (func_00063C20(param_1)) return 1; char *str=*(char**)*(int**)(param_2+4); char *end=str; volatile int len; do { end++; } while(end[-1]); len=(int)end-(int)(str+1); if(len==0) func_00101240(&D_001D29C7); else { int r=func_000AFD10(str,(int)len); if(r) func_00101240(r); } return 1; }

unsigned char _func_000FAD90(undefined4 param_1) { unsigned char func_00063C20(...); unsigned char func_00100D80(...); unsigned char func_00104600(...); void func_00104190(...); if(func_00063C20(param_1)) {func_00104190(); return 1;} if(func_00100D80() && func_00104600()) return 0; return 1; }

undefined4 func_000FADF0(undefined4 param_1, int *param_2)
{
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_2[3];
  func_000A22B0(*param_2 + 100,2,*puVar1,puVar1[1],puVar1[2],*(undefined4 *)param_2[5]);
  return 1;
}

undefined1 func_000FAE20(undefined4 param_1, int *param_2)
{
  int func_000A2230(...);
  int func_000A21A0(...);
  int func_000A1D10(...);
  extern undefined D_0000FFFF;
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = *param_2;
  iVar3 = func_000A2230(iVar1 + 100,*(undefined4 *)param_2[3]);
  if (iVar3 != 0) {
    if ((*(byte *)(iVar1 + 0x10) & 8) == 0) {
      cVar2 = func_000A21A0(iVar3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    func_000A1D10(iVar3,1,0,((undefined *)&D_0000FFFF),*(undefined4 *)param_2[5],*(undefined4 *)param_2[7]);
  }
  return 1;
}

int _func_000FAE80(int a, int b)
{
    return a + b;
}

unsigned char _func_000FAEE0(undefined4 param_1, int *param_2)
{
  extern char D_001D28F0, D_001D29C7;
  int func_0009C7A0(int, char *, int);
  int func_000A2230(int, int);
  void func_00131990(char *);
  int func_000A1BB0(int, int);
  char buf[0x40];
  char *name = *(char **)func_0009C7A0(*param_2, &D_001D28F0, 0);
  strcpy(buf, "1234567");
  strcat(buf, name);
  strcat(buf, "x");
  func_000A2230(*param_2 + 100, *(int *)param_2[3]);
  func_00131990(buf);
  short *r = (short *)func_000A1BB0(*param_2, *(int *)param_2[3]);
  if (r) {
    r[7] = 1;
    func_00131990(&D_001D29C7);
  }
  return 1;
}

undefined4 func_000FAFA0(undefined4 param_1, int *param_2)
{
    int func_000A2270(...);
    int func_000A1C00(...);
    int iVar1;
    
    iVar1 = func_000A2270(*param_2 + 100, *(undefined4 *)param_2[3]);
    if (iVar1 != 0) {
        func_000A1C00(iVar1);
    }
    return 1;
}

unsigned char _func_000FAFD0(unsigned int a, int *p)
{
    unsigned char func_00063C20(unsigned int);
    int func_000A1F50(unsigned int);
    int x = func_00063C20(a);
    if (x) return 1;
    x = *p;
    if (!*(int *)(x + 0x84)) return 1;
    if ((*(unsigned char *)(x + 0x10) & 8) == 0) {
        if (*(unsigned char *)(x + 0x15) == 10)
            *(unsigned char *)(x + 0x11) |= 8;
        if (func_000A1F50(*(unsigned int *)(*p + 0x84)) == 0) {
            *(unsigned char *)(*p + 0x11) &= 0xf7;
            return 1;
        }
    }
    return 0;
}

unsigned char func_000FB0E0(undefined4 param_1, int *param_2)
{
  int func_00110420(...);
  int func_00115410(...);
  int func_00115100(...);
  int func_00110480(...);
  int func_00115AB0(...);
  int func_0010FBA0(...);
  int func_00116E50(...);
  int func_001153F0(...);
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *param_2;
  puVar2 = *(undefined4 **)(*(int *)(iVar1 + 0x2c) + 0x2c);
  iVar3 = param_2[2];
  if (puVar2 != (undefined4 *)0x0) {
    func_00110420(*(int *)(iVar1 + 0x2c),*puVar2);
  }
  if ((*(byte *)(iVar3 + 0x10) & 8) != 0) {
    func_00115410(*(undefined4 *)(iVar3 + 0x98),0);
  }
  uVar4 = func_00115100(*(undefined4 *)(iVar3 + 0x98),*(undefined4 *)param_2[5]);
  func_00110480(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar1 + 0x2c),8);
  uVar4 = func_00115AB0(*(undefined4 *)(iVar3 + 0x98),uVar4);
  func_0010FBA0(*(undefined4 *)(iVar1 + 0x2c),uVar4);
  iVar5 = func_00116E50(*(undefined4 *)(iVar1 + 0x58),(uint)*(byte *)(iVar1 + 0x56) * 4 + 4,1,1);
  *(int *)(iVar1 + 0x58) = iVar5;
  *(undefined4 *)(iVar5 + (uint)*(byte *)(iVar1 + 0x56) * 4) = uVar4;
  *(char *)(iVar1 + 0x56) = *(char *)(iVar1 + 0x56) + '\x01';
  if ((*(byte *)(iVar3 + 0x10) & 8) != 0) {
    func_001153F0(*(undefined4 *)(iVar3 + 0x98));
  }
  return 1;
}

void func_000FB1A0(undefined4 param_1, int param_2)
{
  extern undefined4 D_001D27B8;
  if (D_001D27B8 < **(float **)(param_2 + 0xc)) {
    **(undefined2 **)(param_2 + 4) = 1;
    return;
  }
  **(undefined2 **)(param_2 + 4) = 0;
  return;
}

void func_000FB1D0(undefined4 param_1, int param_2)
{
  extern undefined4 D_001D27B8;
  if (D_001D27B8 < **(float **)(param_2 + 0xc)) {
    *(undefined1 *)(*(int *)(param_2 + 4) + 0x60) = 1;
    return;
  }
  *(undefined1 *)(*(int *)(param_2 + 4) + 0x60) = 0;
  return;
}

unsigned char _func_000FB200(undefined4 a, undefined4 *p) { int func_0001CC10(...); func_0001CC10(*p); return (unsigned char)1; }

undefined4 func_000FB220(undefined4 param_1, undefined4 *param_2)
{
  int func_00063C20(...);
  int func_00061600(...);
  int func_00061650(...);
  char cVar1;
  
  cVar1 = (char)func_00063C20(param_1);
  if (cVar1 != 0) {
    func_00061600();
    return 1;
  }
  func_00061650(param_2[1], *param_2, param_2[2], *(undefined4 *)param_2[5], 0);
  return 1;
}

unsigned char _func_000FB2D0(unsigned int a)
{
    unsigned char func_00063C20(unsigned int);
    void func_00061600(void);
    unsigned char func_00061610(void);
    if (func_00063C20(a)) {
        func_00061600();
        return 1;
    }
    return !func_00061610();
}

unsigned char _func_000FB300(int a, int *p) { int func_0005D3F0(...); func_0005D3F0(p[1]); return 1; }

undefined4 func_000FB320(undefined4 param_1, int param_2)
{
  int func_0005D400(...);
  func_0005D400(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0xc));
  return 1;
}

int _func_0005DA70(...);
unsigned char _func_000FB340(unsigned int a, unsigned int *p)
{
    _func_0005DA70(*(unsigned int *)p[1]);
    return 1;
}

unsigned char _func_000FB360(int a, int *p)
{
    float func_0009A8A0(void);
    *(float *)p[1] = func_0009A8A0() * *(float *)p[3];
    return 1;
}

unsigned char _func_000FB380(int a,int*p){int func_001313C0(unsigned int);int func_0009A8D0(int,int);extern float D_001D290C;int x=func_001313C0(*(unsigned int*)p[1]);int y=func_001313C0(*(unsigned int*)p[3]);int z=func_0009A8D0(y,x);*(float*)p[1]=(unsigned int)z;return 1;}

unsigned char _func_000FB450(int a, int *p)
{
    extern float D_001D27B8;
    void func_0009D3E0(int);
    void func_0009D280(int);
    if (*p) {
        if (*(float *)p[3] < D_001D27B8)
            func_0009D3E0(*p);
        else
            func_0009D280(*p);
    }
    return 1;
}

unsigned char _func_000FB490(int a, int *p)
{
    extern float D_001D27B8;
    if (*(float *)p[3] < D_001D27B8)
        *(unsigned char *)(*p + 0x11) |= 8;
    else
        *(unsigned char *)(*p + 0x11) &= 0xf7;
    return 1;
}

unsigned char _func_000FB4C0(int p,undefined4 *q){unsigned char func_00100D80(...);int func_00103990(...);extern float _D_001D27B8;if(func_00100D80()){float a=*(float*)q[3];if(a==_D_001D27B8){func_00103990(*q,0);return 1;}func_00103990(*q,1);}return 1;}

unsigned char _func_000FB510(int p,int q){unsigned char func_00100D80(...);int func_00103210(...);int func_00103960(...);extern float _D_001D27B8;if(func_00100D80()){if(**(float**)(q+0xc)==_D_001D27B8){int x=func_00103210(**(int**)(q+4),*(int*)(p+0xc),0);func_00103960(x);return 1;}int x=func_00103210(**(int**)(q+4),*(int*)(p+0xc),1);func_00103960(x);}return 1;}

unsigned char _func_000FB580(int p,undefined4 *q){unsigned char func_00100D80(...);int func_00102E80(...);if(func_00100D80())func_00102E80(*q);return 1;}

undefined1 func_000FB5A0(void)
{
  int func_00100D80(...);
  int func_0006FE60(...);
  char cVar1;
  
  cVar1 = func_00100D80();
  if (cVar1 != '\0') {
    func_0006FE60();
  }
  return 1;
}

char _func_000FB5C0(void) { int func_000688D0(...); func_000688D0(); return 1; }

unsigned char _func_000FB5D0(int a,int *p){int func_00110300(...);int func_00110330(...);extern float _D_001D27B8;int x=func_00110300(*(int*)(p[0]+0x2c),*(int*)p[3],0);if(*(float*)p[5]==_D_001D27B8){func_00110330(x,0);return 1;}func_00110330(x,1);return 1;}

extern int _func_00061540(int, int);
extern int _func_00061570(int, int, int);
unsigned char _func_000FB620(void *unused, int *p)
{
    _func_00061540(p[0], *(int *)p[3]);
    return 1;
}

unsigned char _func_000FB640(void *unused, int p)
{
    _func_00061570(**(int **)(p + 4), **(int **)(p + 0xc), **(int **)(p + 0x14));
    return 1;
}

extern void* D_00324B68;

struct D_00324B68_struct {
  u32 field_0;
  u32 field_4;
  u32 field_8;
  void* next;   // [0x1C = 28]
};
extern char D_00307E08[];
extern float D_00307DB4;
extern float D_001D27B0;
extern float D_00307DBC;
extern u16 D_0000FFFF;
extern int func_000A22B0(int, int, int*, int, int, int);
extern int func_000A2230(int, int*);
extern int _func_0009C7A0(int, u16, int);
extern void _func_00131990(void*);
extern int _func_000A1BB0(int*, u16);
extern u16 _D_0000FFFF;
extern u16 _D_001D28F0;
extern u16 _D_001D2E34;
extern u16 _D_001D2E38;
extern u16 _D_001D2E30;
extern u16 _D_001D29C7;
extern u16 _D_0000FFFF;
extern u16 _D_001D28F0;
extern u16 _D_001D2E34;
extern u16 _D_001D2E38;
extern u16 _D_001D2E30;
extern u16 _D_001D29C7;
extern u16 _D_001D28F0;
extern u16 _D_001D2E34;
extern u16 _D_001D2E38;
extern u16 _D_001D2E30;
extern u16 _D_001D29C7;

extern u32 _func_0009C7A0(u32, u32, u32);
extern u32 _func_000A2230(u32, u32);
extern void _func_00131990(u32*);
extern u32 _func_000A1BB0(u32, u32);
extern u16 _D_001D28F0;
extern u16 _D_001D2E34;
extern u16 _D_001D2E38;
extern u16 _D_001D2E30;
extern u16 _D_001D29C7;
extern u16 _D_002EEC00;
extern u16 _D_002EECA0;

extern int _func_0009C7A0(u16, u16, int);
extern int _func_000A2230(u16, u16);
extern int _func_00131990(u16);
extern int _func_000A1BB0(u16, u16);
extern int _func_00061600();
extern int _func_00061650(u16, u16, u16, u16, int);
extern int _func_00063C20(u16);
extern int _func_0005CCC0(int);
extern u16 _D_001D28F0;
extern u16 _D_001D2E34;
extern u16 _D_001D2E38;
extern u16 _D_001D2E30;
extern u16 _D_001D29C7;
extern u16 _D_001D28F0;
extern u16 _D_001D2E34;
extern u16 _D_001D2E38;
extern u16 _D_001D2E30;
extern u16 _D_001D29C7;
extern float _D_001D27B8;
extern float _D_00307DB4;
extern float _D_001D4F8C;
extern u16 _D_001D28F0;
extern u16 _D_001D2E34;
extern u16 _D_001D2E38;
extern u16 _D_001D2E30;
extern u16 _D_001D29C7;
extern float _D_001D27B8;
extern float _D_00307DB4;
extern float _D_001D4F8C;
extern u16 _D_001D28F0;
extern u16 _D_001D2E34;
extern u16 _D_001D2E38;
extern u16 _D_001D2E30;
extern u16 _D_001D29C7;
extern u16 _D_001D28F0;
extern u16 _D_001D2E34;
extern u16 _D_001D2E38;
extern u16 _D_001D2E30;
extern u16 _D_001D29C7;
