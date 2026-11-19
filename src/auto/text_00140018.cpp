/* 21 functions from 0x00140018 to 0x00140F69, found by Ghidra. */
#include "common.h"

int func_00140018(void) { return 0; }

void __cdecl func_0014001E(void) { int __cdecl func_00140040(...); long double x=0.0L; func_00140040(x,x); }

void func_00140037(void) { extern void __cdecl func_00142BE5(...); func_00142BE5(); }

extern double _D_002E8C04;
int __cdecl func_00140205(void) { return 0; }

void _func_0014022D(char *s) {
 extern int _D_002E8EE0; extern unsigned char *_D_002E8ED8; extern unsigned char _D_002E8EE4;
 extern int _func_0014169F(int); extern int _func_0014167E(int,int);
 int r;
 char ch;
 r=_func_0014169F((signed char)*s);
 if(r!=0x65) {
  do {
   ++s; ch=*s;
   if(_D_002E8EE0>1) r=_func_0014167E((signed char)ch,4);
   else r=_D_002E8ED8[(unsigned char)ch*2]&4;
  } while(r!=0);
 }
 ch=*s; *s=_D_002E8EE4;
 do { ++s; char next=*s; *s=ch; ch=next; } while(*s!='\0');
}

int _func_00140285(char *p) {
 extern unsigned char _D_002E8EE4; extern double _D_001DF1B0; char c; char *q,*r;
 for(;*p&&*p!=_D_002E8EE4;p++){}
 if(*p){do{++p;c=*p;q=p;if(c==0||c=='e')break;}while(c!='E');r=q;while(r[-1]=='0')--r;if(r[-1]==_D_002E8EE4)r-=2;do{c=*p++;*++r=c;}while(c);}
 return *((double *)p)<_D_001DF1B0;
}

void _func_001402EA(int input,int *out,unsigned int arg) {
 extern void _func_00144D4A(void *,unsigned int);
 extern void _func_00144D77(void *);
 int local[2];
 if(input) {
   _func_00144D4A(local,arg);
   out[0]=local[0]; out[1]=local[1];
 } else {
   _func_00144D77(&input);
   *out=input;
 }
}

void __fastcall _func_00140328(char* p,int n) { int _func_0013EB10(...); if(n){char* q=p; do {q++;} while(q[-1]!=0); int count=(int)(q-p); _func_0013EB10(p+n,p,count);} }

char* _func_0014034B(char* out,int precision,int exp,char mode) { int _func_00140328(...); extern char D_002E8EE4; extern char D_001E1B24[]; char* p=out; if(mode){_func_00140328(out,precision);} if(*p==45){*p++='-';} if(precision>0){p[0]=p[1];p[1]=D_002E8EE4;} int n=exp; if(n){*p++='E';} if(n<0){*p++='-';n=-n;} if(n>=100){int q=n/100;*p+=(char)q;n%=100;} if(n>=10){int q=n/10;*p+++=(char)q;n%=10;} *p+=(char)n; return out; }

int _func_001403F4(int* spec,int width,int prec,int mode) { int func_00144EDD(...); int func_00144DA4(...); int func_0014034B(...); unsigned char b[24]; int d[4]; func_00144EDD(spec[0],spec[1],d,b); int sign=d[0]==45; int greater=prec>0; int n=width+sign+greater; func_00144DA4(n,prec+1,d); func_0014034B(width,prec,mode,0); return width; }

char* __fastcall _func_00140452(int* spec,char* out,int digits,char mode) { extern char D_002E8EE4; int _func_00140328(...); int n=spec[1]; if(mode && n-1==digits){int off=(spec[0]==45)+n-1;out[off]='0';out[off+1]=0;} if(*spec==45)*out='-'; if(n<1){_func_00140328(out,0);*out='0';} if(digits>0){out[n]=D_002E8EE4;} return out; }

int _func_001404F9(int* p,int width,int prec) { int func_00144EDD(...); int func_00144DA4(...); int func_00140452(...); unsigned char temp[24]; int sign; int len; func_00144EDD(p[0],p[1],&sign,temp); int adjust=(sign==45); int pos=len+prec; func_00144DA4(adjust+width,pos,&sign); func_00140452(width,prec,0); return width; }

void func_0014054B(unsigned int *p,int a,int b,unsigned int d){int func_00144EDD(...);int func_00144DA4(...);int func_0014034B(...);int func_00140452(...);char buf[24];int n;int q;func_00144EDD(p[0],p[1],&n,buf);int i=n-1;int *marker=(int*)buf;char *s=(char*)((n==45)+a);func_00144DA4(s,b,&n);int t=n-1;if(t>=-4&&t<b){if(i<t){char *z=s;while(*z++){}z[-2]=0;}func_00140452(a,b,1);}else func_0014034B(a,b,d,1);}

void func_001405D8(int a,int b,volatile int c,int d,int e){int func_001403F4(...);int func_001404F9(...);int func_0014054B(...);if(c==0x65||c==0x45){func_0014054B(a,b,d,e);return;}if(c==0x66){func_001404F9(a,b,d);return;}func_001403F4(a,b,d,e);}

void _func_00140629(void) { extern int _D_00010000; extern int _func_0014509D(int,int); _func_0014509D((int)&_D_00010000,196608); }

#pragma optimize("s", on)
int _func_0014063B(int ch, int *str) {
    extern int _D_002E8C78;
    extern int _D_002E8C98;
    extern int _D_002E92A0;
    extern int *_D_0037C300[];
    int _func_001454AF(int);
    void _func_0014546B(int *);
    int _func_001453C0(int, void *, int);
    int _func_00145125(int, int, int);
    int *stream;
    int fh;
    int flag;
    int written;
    int charcount;
    char *base;
    char *p;

    stream = str;
    fh = stream[4];
    flag = stream[3];
    if (!(flag & 0x82) || (flag & 0x40)) {
        stream[3] = flag | 0x20;
        return -1;
    }
    if (flag & 1) {
        stream[1] = 0;
        if (!(flag & 0x10)) {
            stream[3] = flag | 0x20;
            return -1;
        }
        stream[0] = stream[2];
        stream[3] = flag & ~1;
    }
    flag = stream[3];
    stream[1] = 0;
    written = 0;
    flag = (flag & ~0x10) | 2;
    stream[3] = flag;
    if (!(flag & 0x10c) && ((stream != (int *)&_D_002E8C78 && stream != (int *)&_D_002E8C98) || !_func_001454AF(fh)))
        _func_0014546B(stream);
    if (stream[3] & 0x108) {
        base = (char *)stream[2];
        charcount = (char *)stream[0] - base;
        stream[0] = (int)(base + 1);
        stream[1] = stream[6] - 1;
        if (charcount > 0) {
            written = _func_001453C0(fh, base, charcount);
        } else {
            if (fh != -1)
                p = (char *)_D_0037C300[fh >> 5] + (fh & 0x1f) * 40;
            else
                p = (char *)&_D_002E92A0;
            if (p[4] & 0x20)
                _func_00145125(fh, 0, 2);
        }
        *(unsigned char *)stream[2] = (unsigned char)ch;
    } else {
        charcount = 1;
        written = _func_001453C0(fh, &ch, charcount);
    }
    if (written != charcount) {
        stream[3] |= 0x20;
        return -1;
    }
    return ch & 0xff;
}
#pragma optimize("", on)

int __fastcall func_00140754(int value,void *p){extern int func_0014063B(...);int *x=(int*)p;extern int *g; if((*(unsigned char*)((char*)p+12)&0x40)&&x[2]==0){(*g)++;return 0;}x[1]--;int a;if(x[1]<0)a=func_0014063B((signed char)value,p);else{*(unsigned char*)x[0]=value;x[0]++;a=(unsigned char)value;}if(a==-1){*g=-1;return -1;}(*g)++;return a;}

int func_00140754(...);
void func_00140787(int *p, int a, int n){do{if(n<=0)return;n--;func_00140754();}while(*p!=-1);}

void func_001407AB(void){extern unsigned char func_00140754(int); extern int D_001407AB_context; (void)D_001407AB_context; }

int func_001407E2(void* a,const char* b,void* c){ volatile char buffer[0x250]; int i=0; while(b[i] && i<601){buffer[i]=b[i];i++;} return i;}

