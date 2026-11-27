/* 25 functions from 0x0013E4C4 to 0x0013F025, found by Ghidra. */
#include "common.h"
static __inline void qs_swap(char *a, char *b, unsigned width)
{
    char t;
    if (a != b)
        while (width--) { t = *a; *a++ = *b; *b++ = t; }
}

void __fastcall func_0013E4C4(int x) {
    extern int D_002E8B84;
    extern void __fastcall func_00140FE7(int, int*);
    func_00140FE7(x, &D_002E8B84);
}

void __fastcall func_0013E4CE(int x) {
    extern int D_002E8B84;
    extern void __fastcall func_00140F6C(int, int*);
    func_00140F6C(x, &D_002E8B84);
}

long double _func_0013E4D8(long double a, long double b) { return a - (long long)(a / b) * b; }

void _func_0013E4F0(unsigned int n)
{
    volatile char *p = (volatile char *)((char *)&n - n);
    while (n >= 0x1000) { p -= 0x1000; n -= 0x1000; *p = *p; }
    *p = *p;
}

void _func_0013E531(void)
{
 extern int D_001E1AA8, D_002E8C78;
 int func_0013EEE4(...),func_001414A2(...),func_00141517(...),func_001407E2(...),func_0014159F(...),func_0013E58C(...),func_0013EF1F(...);
 int a,b;
 func_0013EEE4(0x10,&D_001E1AA8);
 func_001414A2(1,&D_002E8C78);
 a=func_00141517(&D_002E8C78);
 b=func_001407E2(&D_002E8C78, *(int *)((char *)&b+0x2c), (char *)&b+0x30);
 func_0014159F(a,&D_002E8C78);
 func_0013E58C();
 func_0013EF1F(b);
}

void __fastcall func_0013E587(int a,int b) { extern int D_002E8C78; int x=D_002E8C78; (void)a;(void)b;(void)x; }

void func_0013E58C(void) { extern int _D_002E8C78; void func_001414F4(int); func_001414F4(_D_002E8C78); }

unsigned __int64 __fastcall _func_0013E5A0(unsigned int a,unsigned int b,unsigned int c){if(c>=0x40)return 0;if(c<0x20)return (((unsigned __int64)((b<<c)|(a>>(32-c)))<<32)|(unsigned int)(a<<c));return (unsigned __int64)(a<<(c&31))<<32;}

unsigned int _func_0013E5C0(char *a,char *b,int n){if(n==0)return 0;int limit=0;while(limit<n&&a[limit]!=0)limit++;if(limit<n)limit++;int i=0;while(i<limit&&a[i]==b[i])i++;if(i==limit||a[i]==b[i])return 0;if((unsigned char)b[i]>(unsigned char)a[i])return 1;return 0;}

char *_func_0013E600(char *hay,char *needle){extern int _func_0013EA56(char);char *start;if(!needle[0])return hay;if(!needle[1])return (char*)_func_0013EA56(needle[0]);for(start=hay;*start;start++){char *h=start,*n=needle;while(*n&&*h==*n){n++;h++;}if(!*n)return start;}return 0;}

void _func_0013E690(unsigned char *end,unsigned char *first,int width,int (__cdecl *cmp)(void *,void *)) { unsigned char *best; unsigned char *next; unsigned char tmp; int result; for (; first<end; end-=width) { best=first; next=first; for (;;) { next+=width; if (next>end) break; result=cmp(next,best); if (result>0) best=next; } if (best!=end && width!=0) { next=end; do { tmp=next[(int)best-(int)end]; next[(int)best-(int)end]=*next; *next=tmp; next++; width--; } while(width!=0); } } }

int _func_001415C9(int); int _func_0013E983(unsigned char *p) { int sign,c; do { ++p; c=*p; } while(_func_001415C9(c)); sign=c; ++p; c=*p++; int value=0; if(c==45)c=*p++; else if(c==43)c=*p++; for(;;){ int digit=(c<48||c>57)?-1:c-48; if(digit==-1)break; value=value*10+digit; c=*p++; } return sign==45?-value:value; }

void func_0013E9DB(void) {
    int func_0013E983(...);
    func_0013E983();
}

int __fastcall _func_0013EA40(int a,int b){int x=a;return b-1+(x-x);}

char *_func_0013EA50(char *p, char ch) { unsigned int word, mask, t, s; char *q; while (((unsigned)p & 3)!=0) { if(*p==ch)return p; if(!*p)return 0; ++p; } mask=(unsigned char)ch; mask|=mask<<8; mask|=mask<<16; for(;;) { word=*(unsigned int *)p; t=word^mask; s=word^0xffffffff; if ((((t+0x7efefeff)^t^0xffffffff)&0x81010100)!=0) { if((char)word==ch)return p; if(!(char)word)return 0; if((char)(word>>8)==ch)return p+1; if(!(char)(word>>8))return 0; if((char)(word>>16)==ch)return p+2; if(!(char)(word>>16))return 0; if((char)(word>>24)==ch)return p+3; if(!(char)(word>>24))return 0; } else { t=word+0x7efefeff; if(((s^t)&0x81010100)&&((s^t)&0x1010100))return 0; } p+=4; } }

void func_0013EDF8(void *dst, const void *src, unsigned n) { while(n--) ((char*)dst)[n]=((char*)src)[n]; }

int func_0013EE4D(char *a, int b, int c) {
 int func_001407E2(...); int func_0014063B(...); int n=0x7fffffff; char *q=a; int tag=0x42; int r;
 r=func_001407E2(&q,b,c); if(a) { --n; if(n<0) func_0014063B(0,&q); else *q=0; } return r;
}

unsigned long long __stdcall func_0013EEB0(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
 unsigned int lo=a*c; unsigned int hi=(unsigned int)(((unsigned long long)a*c)>>32)+b*c+a*d;
 if (!(b|d)) return ((unsigned long long)hi<<32)|lo;
 return ((unsigned long long)hi<<32)|lo;
}

void __stdcall func_0013EEE4(int param_1, int param_2) {
  /* SEH frame with exception handler at 0x13ef38 */
}

int _func_001415C9(int);
int _func_0014167E(int,int);
void *_func_001415F9(void *,char *,int,int,int);
extern unsigned short _D_002E8ED8[];
extern int _D_002E8EE0;
void _func_0013EF1F(void) { }

void __stdcall func_0013F00A(int param_1) {
  int func_0013F06A(...);
  func_0013F06A(*(int*)(param_1 + 0x18), *(int*)(param_1 + 0x1c));
}

struct Wrapper_0013E4C4 { void func_0013E4C4(void); };
