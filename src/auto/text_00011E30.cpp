/* 15 functions from 0x00011E30 to 0x00012DBA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00011E30(int param_1, int *param_2, int *param_3)
{
  int func_0012F120(...);
  float func_00131230(int);
  float func_00131250(int);
  int func_0012ED20(...);
  int func_0012F730(...);
  float func_0012EA60(...);
  int func_0012F610(...);
  float v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13;
  float e[3], c[3], d[3], a[3], b[3];
  char local_10[16];

  func_0012F120(param_2);
  v1 = func_00131230(param_3[1]);
  v2 = func_00131250(param_3[2]);
  a[0] = (float)((long double)v2 * v1);
  v3 = func_00131250(param_3[1]);
  a[1] = v3;
  v4 = func_00131230(param_3[1]);
  v5 = func_00131230(param_3[2]);
  a[2] = (float)((long double)v5 * v4);
  func_0012ED20(local_10, a, *param_3);
  func_0012F730(b, local_10, param_1);
  param_2[0xc] = ((int *)b)[0];
  param_2[0xd] = ((int *)b)[1];
  param_2[0xe] = ((int *)b)[2];
  v6 = func_00131250(param_3[1]);
  v7 = func_00131230(param_3[2]);
  v8 = (float)-((long double)v7 * v6);
  v9 = func_00131230(param_3[1]);
  v10 = func_00131250(param_3[1]);
  v11 = func_00131250(param_3[2]);
  c[0] = (float)-((long double)v11 * v10);
  ((int *)c)[1] = *(int *)&v9;
  ((int *)c)[2] = *(int *)&v8;
  func_0012EA60(c);
  func_0012ED20(d, a, 0xbf800000);
  func_0012F610(d, param_1);
  func_0012EA60(d);
  v1 = func_00131230(param_3[1]);
  v2 = func_00131250(param_3[2]);
  v12 = (float)((long double)v2 * v1);
  v4 = func_00131230(param_3[1]);
  v5 = func_00131230(param_3[2]);
  e[0] = (float)-((long double)v5 * v4);
  ((int *)e)[1] = 0;
  ((int *)e)[2] = *(int *)&v12;
  func_0012EA60(e);
  func_0012F610(e, param_1);
  func_0012F610(c, param_1);
  param_2[0] = ((int *)e)[0];
  param_2[1] = ((int *)e)[1];
  param_2[2] = ((int *)e)[2];
  param_2[4] = ((int *)c)[0];
  param_2[5] = ((int *)c)[1];
  param_2[6] = ((int *)c)[2];
  param_2[8] = ((int *)d)[0];
  param_2[9] = ((int *)d)[1];
  param_2[10] = ((int *)d)[2];
}

void func_00012040(int param_1, undefined4 param_2)
{
  int func_00110420(...);
  int func_00110480(...);
  int func_000F8FA0(...);
  func_00110420(*(int *)(param_1 + 0x2c),**(undefined4 **)(*(int *)(param_1 + 0x2c) + 0x2c));
  func_00110480(param_2,*(undefined4 *)(param_1 + 0x2c),8);
  func_000F8FA0(param_1);
  return;
}

void func_000120B0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00099E70(...);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x25) = 1;
  func_00099E70(param_1 + 0x20,param_3,param_4);
  return;
}

unsigned char func_00012120(int obj, int *pos, int *arg, int transform, unsigned char c)
{
 extern int D_00307DF8, D_003251B8, D_00325200, D_00325150;
 void func_00011CB0(void *,int);
 void func_0012F7A0(int *,int);
 void func_00110060(int,void *);
 void func_0012F310(void *,void *);
 void func_0012F250(void *,void *,void *);
 unsigned char func_00112250(int *,void *,int *);
 void func_00107C40(int,int,int);
 int pv[4]; int *p=pv;
 int v[10];
 int *q=v, *r=v+7, *d=v+4;
 __declspec(align(16)) char m[64], n[64], t[64];
 r[0]=arg[0]; r[1]=arg[1]; r[2]=arg[2];
 func_00011CB0(n,transform);
 p[0]=pos[0]; p[1]=pos[1]; p[2]=pos[2];
 func_0012F7A0(p,transform);
 ((int*)n)[12]=p[0]; ((int*)n)[13]=p[1]; ((int*)n)[14]=p[2];
 func_00110060(*(int*)(D_00307DF8+0x2c),m);
 q[0]=*(int*)(D_00307DF8+0xe8); q[1]=*(int*)(D_00307DF8+0xec); q[2]=*(int*)(D_00307DF8+0xf0);
 func_0012F7A0(q,(int)m);
 ((int*)m)[12]=q[0]; ((int*)m)[13]=q[1]; ((int*)m)[14]=q[2];
 d[0]=*(int*)(D_00307DF8+0xf4); d[1]=*(int*)(D_00307DF8+0xf8); d[2]=*(int*)(D_00307DF8+0xfc);
 func_0012F310(t,m);
 func_0012F250(m,n,t);
 if(func_00112250(d,m,r)) {
 int *out=(int*)D_00307DF8;
 char flag=*((char*)out+0x175);
 out+=0x150/4;
 if(flag==0 && *(char*)((int)out+0x24)==0) {
 for(int i=0;i<11;i++)out[i]=0;
 *(char*)(D_00307DF8+0x174)=1;
 *(int*)(D_00307DF8+0x160)=obj;
 *(int*)(D_00307DF8+0x178)=*(char*)(obj+0x13)==5;
 out=(int*)(D_00307DF8+0x150);
 out[0]=p[0];out[1]=p[1];out[2]=p[2];
 *(float*)(D_00307DF8+0x168)=(float)c;
 func_00107C40(D_003251B8,D_00307DF8,obj);
 func_00107C40(D_00325200,D_00307DF8,obj);
 func_00107C40(D_00325150,D_00307DF8,obj);
 } return 1;
 } return 0;
}

unsigned char _func_00012360(int obj, int *pos, int a, int b, unsigned char c)
{
    extern int D_00307DF8, D_003251B8, D_00325200, D_00325150;
    extern void _func_0012F7A0(int *, int);
    extern void _func_00110060(int, void *);
    extern unsigned char _func_00113380(int *, int, int *, int);
    extern void _func_00107C40(int, int, int);
    int v[9];
    __declspec(align(16)) char buf[0x40];
    int *p = v + 1;
    int *q = v + 5;
    p[0] = pos[0]; p[1] = pos[1]; p[2] = pos[2];
    _func_0012F7A0(p, b);
    _func_00110060(*(int *)(D_00307DF8 + 0x2c), buf);
    q[0] = *(int *)(D_00307DF8 + 0xe8);
    q[1] = *(int *)(D_00307DF8 + 0xec);
    q[2] = *(int *)(D_00307DF8 + 0xf0);
    _func_0012F7A0(q, (int)buf);
    if (_func_00113380(p, a, q, D_00307DF8 + 0xf4)) {
        int *d = (int *)(D_00307DF8 + 0x150);
        if (*(char *)(D_00307DF8 + 0x175) == 0 && *(char *)((int)d + 0x24) == 0) {
            for (int i = 0; i < 11; i++)
                d[i] = 0;
            *(char *)(D_00307DF8 + 0x174) = 1;
            *(int *)(D_00307DF8 + 0x160) = obj;
            *(int *)(D_00307DF8 + 0x178) = *(char *)(obj + 0x13) == 5;
            d = (int *)(D_00307DF8 + 0x150);
            d[0] = p[0]; d[1] = p[1]; d[2] = p[2];
            *(float *)(D_00307DF8 + 0x168) = (float)c;
            _func_00107C40(D_003251B8, D_00307DF8, obj);
            _func_00107C40(D_00325200, D_00307DF8, obj);
            _func_00107C40(D_00325150, D_00307DF8, obj);
        }
        return 1;
    }
    return 0;
}

void func_000127A0(void)
{
  extern unsigned int D_003104B4;
  extern int *D_0030C630[];
  extern float D_001D2888;
  int func_001100A0(int, int *);
  float func_0012E870(int, int);
  void func_0009D3E0(int *);
  unsigned int i, j;
  int a, b;
  for (i = 0; i < D_003104B4; i++) {
    if (*((char *)D_0030C630[i] + 0x13) == 0x19) {
      func_001100A0(*(int *)((char *)D_0030C630[i] + 0x2c), &a);
      for (j = 0; j < D_003104B4; j++) {
        char *o = (char *)D_0030C630[j];
        if (o && o[0x13] == 0x30) {
          func_001100A0(*(int *)(o + 0x2c), &b);
          if (func_0012E870(a + 0x30, b + 0x30) < D_001D2888) {
            func_0009D3E0(D_0030C630[i]);
            o = (char *)D_0030C630[j];
            *(short *)(o + 0x144 + *(int *)(o + 0x140) * 2) = (short)i;
            *(int *)(o + 0x140) = *(int *)(o + 0x140) + 1;
            break;
          }
        }
      }
    }
  }
}

extern unsigned int _D_002EAF90[10];
extern float _D_001D286C, _D_001D2868, _D_001D2874;
extern float _D_001E461C, _D_001D27B8;
int func_00099EB0(int);
void _func_000128D0(int param_1)
{
  int i;
  if ((*(unsigned char *)(param_1 + 0x11) & 0x10) != 0) {
    for (i = 0; i < 10 && _D_002EAF90[i] != (unsigned int)param_1; ++i) {}
    if (i < 10) {
      _D_002EAF90[i] = 0;
      *(unsigned char *)(param_1 + 0x11) &= 0xef;
    }
  }
}

unsigned char func_00012900(int esi){extern int D_00307DF8;extern void* D_001E3624[];int func_00131310(...);int func_001160E0(int,int,int,int,float);int func_000120E0(...),func_000F8FA0(...);if(*(int*)(esi+0x5c)){int n=func_00131310();if(n%50==0)func_001160E0(**(int**)(esi+0x5c),1,*(int*)(esi+0x5c),5,25.0f);}if(*(unsigned char*)(esi+0x12)==1&&*(unsigned char*)(esi+0x175))func_000120E0(esi+0x150);if(D_00307DF8==esi)return 1;unsigned short flags=*(unsigned short*)(esi+0x10);if(!(flags&0x10)&&!(flags&0x800)){unsigned char state=*(unsigned char*)(esi+0x15);void(*f)(void)=(void(*)(void))D_001E3624[state*3];if(f){int old=**(int**)(*(int*)(esi+0x2c)+0x2c);f();if(**(int**)(*(int*)(esi+0x2c)+0x2c)!=old)func_000F8FA0(esi);}}return 0;}

unsigned char func_00012CF0(int self){extern float D_001D289C,D_001D2890;int func_0013F2E9(...),func_0009C7A0(...);unsigned char c=*(unsigned char*)(self+0x15);if(c==0x3d||c==0x3e){int *q=(int*)*(int*)(*(int*)(self+0x2c)+0x2c);int d=*q;int v=*(int*)(d+0x38);if(!func_0013F2E9(v,&D_001D289C))return 0;}else if(c==0x43)return 0;int *r=(int*)func_0009C7A0(self,&D_001D2890,0);if(r&&*r==0x3f800000)return 0;return (*(unsigned short*)(self+0x10)&0x100)>>8;}

void func_00012D60(int p,unsigned int next){extern int D_00307DF8;extern void* D_001E3628[];extern void* D_001E3620[];void func_000F8FA0(int);if(p==D_00307DF8&&next!=0x15)return;if(next==0){unsigned char old=*(unsigned char*)(p+0x15);void(*f)(int)=(void(*)(int))D_001E3628[old*3];if(f)f(p);}unsigned char n=(unsigned char)next;*(unsigned char*)(p+0x15)=n;void(*g)(int)=(void(*)(int))D_001E3620[n*3];if(g)g(p);func_000F8FA0(p);}

