/* 49 functions from 0x000FA6A0 to 0x000FB661, found by Ghidra. */
#include "common.h"
#include "ghidra.h"


extern void* D_00324B68;

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

unsigned char _func_000FAA50(int p) { extern unsigned short D_00324BA0,D_00324B88; unsigned int i=*(unsigned int*)(p+24); unsigned int n; unsigned int depth=0; unsigned short *tokens; unsigned char *ctx=*(unsigned char**)(p+16); i++; n=*(unsigned short*)(ctx+6); if(i>=n){*(unsigned int*)(p+24)=i;return 1;} tokens=(unsigned short*)(*(unsigned int*)(ctx+40)+i*8); while(i<n){ unsigned int c=tokens[0]; if(c==D_00324BA0)depth++; else if(c==D_00324B88){if(!depth)break;depth--;} i++;tokens+=4; n=*(unsigned short*)(ctx+6); } *(unsigned int*)(p+24)=i;return 1;}

unsigned char _func_000FAAC0(undefined4 a, int p) { unsigned int *dst=*(unsigned int**)(p+4); unsigned int *src=*(unsigned int**)(p+12); dst[0]=src[0]; dst[1]=src[1]; dst[2]=src[2]; dst[3]=src[3]; return 1; }

unsigned char _func_000FAAF0(undefined4 a, int p) { double x=(double)**(float**)(p+12); int op=*(char*)**(int***)(p+20); switch(op){case '+': x+=(double)**(float**)(p+28); break; case '-': x-=(double)**(float**)(p+28); break; case '/': x/=(double)**(float**)(p+28); break; case '*': x*=(double)**(float**)(p+28); break;} **(float**)(p+4)=(float)x; return 1; }

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

undefined4 func_000FAFD0(undefined4 param_1, int *param_2)
{
    int func_00063C20(undefined4);
    int func_000A1F50(undefined4);
    char cVar1;
    int iVar2;
    
    cVar1 = func_00063C20(param_1);
    if (cVar1 != '\0') {
        return 1;
    }
    iVar2 = *param_2;
    if (*(int *)(iVar2 + 0x84) == 0) {
        return 1;
    }
    if ((*(byte *)(iVar2 + 0x10) & 8) == 0) {
        if (*(char *)(iVar2 + 0x15) == '\n') {
            *(byte *)(iVar2 + 0x11) = *(byte *)(iVar2 + 0x11) | 8;
        }
        iVar2 = func_000A1F50(*(undefined4 *)(*param_2 + 0x84));
        if (iVar2 == 0) {
            *(byte *)(*param_2 + 0x11) = *(byte *)(*param_2 + 0x11) & 0xf7;
            return 1;
        }
    }
    return 0;
}

unsigned char _func_000FB200(undefined4 a, undefined4 *p) { int func_0001CC10(...); func_0001CC10(*p); return (unsigned char)1; }

undefined4 func_000FB220(undefined4 param_1, undefined4 *param_2)
{
  int func_00061650(...);
  char cVar1;
  int func_00063C20(...);
  int func_00061600(...);
  
  cVar1 = func_00063C20(param_1);
  if (cVar1 != '\0') {
    func_00061600();
    return 1;
  }
  func_00061650(param_2[1],*param_2,param_2[2],*(undefined4 *)param_2[5],0);
      return 1;
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
typedef struct {
    u32 arg0;
    u32 arg1;
} S_D_000FAEE0_arg1;

extern u16 _D_001D28F0;
extern u16 _D_001D2E34;
extern u16 _D_001D2E38;
extern u16 _D_001D2E30;
extern u16 _D_001D29C7;

extern u32 _func_0009C7A0(u32, u32, u32);
extern u32 _func_000A2230(u32, u32);
extern void _func_00131990(u32*);
extern u32 _func_000A1BB0(u32, u32);
