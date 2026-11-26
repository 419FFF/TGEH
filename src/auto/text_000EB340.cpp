/* 12 functions from 0x000EB340 to 0x000EC2BE, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct List_000EB340 { int count; char *data; };
extern char _D_0032458C;
extern char _D_001DC7EC;
extern int _D_00324588;
extern int _D_00324578;
int _func_0011B610(...);
int _func_001053A0(...);
int _func_00116FB0(...);
extern char _D_001D73E4[];
extern int _D_00307D18;
extern int _D_00326110;
extern char _D_001D748C[];
extern int _D_001D753C;
extern char _D_001D7540;
int _func_00117100(void);
int _func_00117130(void);
int _func_0011BF40(const char*,int);
int _func_0011BDD0(int,int);
int _func_00116A90(int,int,int);
int _func_0013E600(char*,const char*);
int _func_001053E0(int,char*);
int _func_0010F750(const char*,int,int);
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern char _D_001DC788[];
char _func_00131A10(char *);
char __cdecl _func_000EB560(char *a, char *b) {
  char buf[128];
  char buf2[128];
  if (_D_0032458C) {
    strcpy(buf, a);
    char *p = (char *)_func_0013E600(buf, _D_001D73E4);
    if (p) *p = 0;
    strcpy(buf2, buf);
    char *e = buf - 1;
    while (*++e);
    *(short *)e = *(short *)_D_001D73E4;
    strcat(buf, b);
    char *f = buf2 - 1;
    while (*++f);
    short w = *(short *)_D_001DC788;
    char c = _D_001DC788[2];
    *(short *)f = w;
    f[2] = c;
    strcat(buf2, b);
    if (_func_00131A10(buf2) || _func_00131A10(buf)) return 1;
  }
  return 0;
}

void func_000EBA20(int a, int *p) {
 int func_00116FB0(int);
 unsigned int i;
 if (p[3]) {
   for (i=0; i<(unsigned)p[2]; ++i) func_00116FB0(*(int *)(p[3]+i*0x80+0x78));
   func_00116FB0(p[3]);
 }
 func_00116FB0((int)p);
}

void func_000EBA80(int n) {
 extern int D_00324580, D_00324588, D_00324578, D_0032457C;
 extern char D_001DC7EC;
 void func_00117100(void);
 int func_00105380(int);
 void func_0011B5C0(void *, void *, void *);
 void *func_00116A90(int, int, int);
 void func_000EB6A0(void);
 void func_000EBA20(int, int *);
 void func_00117130(void);
 D_00324580=n; func_00117100(); D_00324588=func_00105380(0x800);
 func_0011B5C0(&D_001DC7EC,func_000EB6A0,func_000EBA20);
 D_00324578=(int)func_00116A90(n*0xb0,1,1); D_0032457C=0; func_00117130();
}

void func_000EBAE0(void) {
  _func_0011B610(&_D_001DC7EC);
  _func_001053A0(_D_00324588);
  _func_00116FB0(_D_00324578);
}

void __cdecl _func_000EBB10(char *name,int *out) { int *p; int t; int n; int i; char b[0x1e4]; _D_0032458C=0; if(out[3]) { _D_0032458C=1; _func_00117100(); t=_func_0011BF40(name,0); p=(int*)_func_0011BDD0(t,0); _func_00117130(); n=p[4]; out[1]=n; if((unsigned)n>0) out[2]=_func_00116A90(n<<2,1,1); for(i=0;(b[i]=name[i])!=0;++i){} if((i=_func_0013E600(b,_D_001D73E4))) *(char*)i=0; if(out[3]) *(int*)(out[3]+12)=_func_001053E0(_D_00307D18,b); if(out[0]==0) { if(n<2 && !*(char*)(p[1]+0xa4)) return; out[0]=_func_0010F750(n<2?name:_D_001D748C,_D_00326110,0xe0); } } else { out[0]=out[1]=0; } }

void func_000EC1F0(int *p) { extern int D_0032457C,D_00324578; int *q=(int *)(char *)p; *q=0; *(int *)((char *)q+4)=0; *(int *)((char *)q+8)=0; *(int *)((char *)q+12)=0; *(int *)((char *)q+16)=0; *(int *)((char *)q+20)=0; p[1]=D_0032457C*0xb0+D_00324578; }

undefined4* func_000EC230(int* p) {
  unsigned int* result = (unsigned int*)(p[0] * 0xb0 + p[1]);
  for (int i=0;i<0x2c;i++) result[i]=0;
  *((unsigned char*)result+0x9d) |= 1;
  result[0x28]=(unsigned int)p;
  ++p[0];
  return (undefined4*)result;
}

void func_000EC260(int param_1, undefined4 *param_2)
{
  int func_001053E0(...);
  extern undefined4 D_00324588;
  undefined4 uVar1;
  
  uVar1 = func_001053E0(D_00324588,*param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

void func_000EC280(int param_1, undefined4 *param_2)
{
  int func_001053E0(...);
  extern undefined4 D_00324588;
  *(undefined4 *)(param_1 + 8) = func_001053E0(D_00324588, *param_2);
}

void func_000EC2A0(int *p, int *q) { extern int D_00324588; int func_001053E0(int,int); p[4]=func_001053E0(D_00324588,*q); }

