/* 17 functions from 0x000452F0 to 0x000461C1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_000454B0(int p){extern int _D_00307DF8,_D_0000FFFF,_D_002EDDE8;extern float _D_001E461C,_D_001D2BE8;int _func_000A1D10(...),_func_0006D7A0(...);int s=*(int*)(_D_00307DF8+0x110);_func_000A1D10(*(int*)(s+0x2b0),1,0,(int)&_D_0000FFFF,0x41c00000,0x3dcccccd);*(int*)s=0x56;double f=(double)_D_001E461C*(double)_D_001D2BE8;int a[0x58]={0};a[0]=9;*(int*)((char*)a+0x20)=0x41f00000;*(int*)((char*)a+0x160)=_D_002EDDE8;*(float*)((char*)a+0x14)=(float)f;_func_0006D7A0(p,s+0x10,a);}

void func_00045550(undefined4 param_1, undefined4 *param_2)
{
  int func_000A1F50(...);
  int func_00130590(...);
  int func_0012E750(...);
  int iVar1;
  
  iVar1 = func_000A1F50(param_2[0xac]);
  if (iVar1 == 0) {
    func_00130590(param_2 + 4);
    *param_2 = 2;
    param_2[0x6e] = 0xffffffff;
    func_0012E750(param_2 + 0x26);
  }
  return;
}

void func_000459A0(int param_1, undefined1 param_2)
{
  *(undefined1 *)(*(int *)(param_1 + 0x110) + 0x18) = param_2;
  return;
}

void __fastcall _func_000459C0(int *p, int *q){int _func_0012E6D0(...),_func_0012EE00(...),_func_0012EA60(...);char x[12],y[12];_func_0012E6D0(x,p+4,p);_func_0012E6D0(y,p+8,p);_func_0012EE00(x,y,q);_func_0012EA60(q);}

unsigned char _func_00045A10(int s,int* b){int _func_00106070(...);int a=b[0];if(a&&a!=*(int*)(s+0x68)-1){int c=b[1];if(c&&c!=*(int*)(s+0x6c)-1){int x=_func_00106070(*(int*)(s+0x68),b);unsigned char v=*(unsigned char*)(x+*(int*)(s+0xc4));return (v>>2)&1;}}return 1;}

extern unsigned int _D_001D2E34, _D_001D2E38;
extern unsigned short _D_001D2E30;
extern float _D_001D27B8, _D_001D290C;
void _func_00131990(char *);
void _func_000A2310(void *);
void _func_000A22B0(void *, int, int, int, int, int, int);
void _func_000A2350(void *, float);
void _func_000A22D0(void *);
extern unsigned int _D_001D2E34;
extern unsigned int _D_001D2E38;
void _func_00045A60(void *p) { char s[128]; unsigned int i=0; char *src=*(char **)((char*)p+0x70); *(unsigned int*)s=_D_001D2E34; *(unsigned int*)(s+4)=_D_001D2E38; while(i<120) s[8+i++]=0; { char *d=s+8; while(*d)d++; while(*src)*d++=*src++; } { char *d=s+8; while(*d)d++; *(unsigned short*)d=_D_001D2E30; } _func_00131990(s); }

int func_000A2310(int);
int func_000A22B0(int,int,int,int,int,int);
int func_000A2350(int,float);
int func_000A22D0(int);
void func_00045BC0(int p,char mode) { if(mode) { int q=p+0x64; float t=((float (__cdecl *)(int))func_000A2310)(q); int z=**(int **)(*(int *)(p+0x84)+0x10); func_000A22B0(q,1,*(unsigned short *)(z+0x18),*(unsigned short *)(z+0x1a),*(int *)(z+0x1c),0); func_000A2350(q,t); } else func_000A22D0(p+0x64); }

int _func_001068B0(int,int,int,int,int);
int _func_00106AC0(int,int,int *);
int _func_00106070(int,int *);
int _func_00026990(int,int,int);
void _func_00045C20(unsigned char *p,int a,int b) { int r0,r1; _func_001068B0((int)(p+4),(int)(p+0x110),(int)(p+0x108),a,b); _func_00106AC0((int)(p+4),(int)(p+0xfc),&r0); p[0]=0; if(r0>=0 && r0<*(int *)(p+0xc) && r1>=0 && r1<*(int *)(p+0xc)) { int x=_func_00106070(*(int *)(p+0xc),&r0); if (*(unsigned char *)(*(int *)(*(int *)(p+0x28)+4)+x*4+2)&0x10) { _func_00026990(*(int *)(p+0x28),r0,r1); p[0]=1; } } }

void _func_00045CC0(int a,int* b){int _func_00106410(...);*(int*)(a+0xf0)=b[0];*(int*)(a+0xf4)=b[1];*(int*)(a+0xf8)=b[2];_func_00106410(*(int*)(a+8),b,a+0x110);}

int _func_00106410(int,int,int);
int _func_000A2310(int);
int _func_000A22B0(int,int,int,int,int,int);
int _func_000A2350(int,float);
int _func_000A22D0(int);
extern unsigned int D_001D2E34, D_001D2E38;
extern unsigned short D_001D2E30;
extern float D_001D27B8, D_001D290C;
void _func_00045D00(int a, unsigned int *b) { int *out=(int *)a; int x; x=out[2]; out[0x3f]=b[0]; out[0x40]=b[1]; out[0x41]=b[2]; _func_00106410(x,(int)b,(int)(out+0x42)); }

void _func_00045D40(int a, int b, int *c, int *d, float f0, float f1, int v, float *state, int flag){extern float _D_001D27B8;int _func_0012EA60(...),_func_00058890(...);int x[7];if(!flag){x[0]=c[0];x[1]=c[2];x[2]=d[0];x[3]=d[2];if(state[1]!=_D_001D27B8){state[1]=0;_func_0012EA60(state);}x[5]=*(int*)state;x[6]=((int*)state)[2];x[4]=v;_func_00058890(a,x);*(char*)(a+0x78)=1;}*(int*)(a+0x7c)=0;*(int*)(a+0x84)=*(int*)&f0;*(int*)(a+0x80)=v;*(float*)(a+0x88)=f1/f0;}

