/* 63 functions from 0x000FB670 to 0x000FC655, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int _D_0032511C;
extern float _D_001D27B0;

#pragma optimize("y", off)
unsigned char func_000FB670(unsigned int a,int *p){extern unsigned int D_00307DF8,D_00307DB4,D_001E3A48;int func_0009DAC0(...),func_000F8F40(...),func_00110060(...),func_001105E0(...),func_00110000(...),func_00110420(...),func_00110480(...),func_000F8FA0(...);int *o=p;int obj=o[0],child=*(int*)((char*)o+8),node=*(int*)(obj+0x2c),r;unsigned char local[68];if(obj==D_00307DF8)D_001E3A48=D_00307DB4;r=func_000F8F40(func_0009DAC0(child));func_00110060(*(int*)(child+0x2c),local);func_001105E0(node,local,0);func_00110000(node);if(*(int*)(node+0x2c))func_00110420(node,**(int**)(node+0x2c));if(r)func_00110480(*(int*)(r+0xe0),node,8);func_000F8FA0(obj);return 1;}
#pragma optimize("", on)
unsigned char func_000FB720(unsigned int param_1, int p) { int func_000F91D0(...); int i=func_000F91D0(**(int**)(p+4)); if(*(char*)(i+0x284)) **(unsigned int**)(p+12)=0x3f800000; else **(unsigned int**)(p+12)=0; return 1; }

unsigned char func_000FB760(unsigned int param_1,int *p) { int func_00124BE0(...); int a=*p,b=*(int*)(a+0x60); if(b)func_00124BE0(b,*(int*)p[3]); return 1; }

unsigned char func_000FB780(unsigned int param_1,int *p){int func_001313C0(...),func_00124BB0(...);int v=func_001313C0(*(int*)p[3]);if(v==0){func_00124BB0(*(int*)(*p+0x60),0);return 1;}func_00124BB0(*(int*)(*p+0x60),1);return 1;}

unsigned char func_000FB8F0(unsigned int a,int *p){extern float D_001D27B8;int func_0008F840(...);int obj=*p;if(*(int*)(obj+0x60)){float x=*(float*)p[3];func_0008F840(*(int*)(obj+0x2c),x!=D_001D27B8);}return 1;}

undefined4 func_000FB940(undefined4 param_1, int *param_2)
{
  int func_0007E4F0(...);
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(*param_2 + 0x60) == 0) {
    local_4 = *(undefined4 *)param_2[3];
    local_8 = *(undefined4 *)param_2[3];
    func_0007E4F0(*param_2,&local_8);
  }
  return 1;
}

undefined4 func_000FB980(undefined4 param_1, int *param_2)
{
  int func_0007E4F0(...);
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(*param_2 + 0x60) == 0) {
    local_4 = *(undefined4 *)param_2[5];
    local_8 = *(undefined4 *)param_2[3];
    func_0007E4F0(*param_2,&local_8);
  }
  return 1;
}

unsigned char func_000FB9C0(unsigned int a,int *p){int o=*p;if(*(unsigned char*)(o+0x11)&0x20){int *q=(int*)p[3];*(int*)(*(int*)(o+0x60)+0x30)=*q;}return 1;}

unsigned char func_000FB9E0(unsigned int a,int p){extern float D_001D6008;int func_00123170(...);func_00123170(**(float**)(p+0x14)*D_001D6008,**(float**)(p+0xc)*D_001D6008,**(float**)(p+4)*D_001D6008);return 1;}

unsigned char func_000FBA20(unsigned int a,int *p){int func_0013E3F4(float);int func_000ACFB0(...);int n=func_0013E3F4(*(float*)((char*)p+4));switch(n){case 0:func_000ACFB0(3,1);break;case 1:func_000ACFB0(4,1);break;case 2:func_000ACFB0(5,1);break;case 3:func_000ACFB0(6,1);break;case 4:func_000ACFB0(7,1);break;case 5:func_000ACFB0(8,1);}return 1;}

void func_000FBC20(int a0, int a1) {
    int func_000FBAB0(...);
    func_000FBAB0(a0, a1, 1);
}

void func_000FBC40(int a0, int a1) {
    int func_000FBAB0(...);
    func_000FBAB0(a0, a1, 0);
}

unsigned char func_000FBC60(unsigned int a,int p){extern float D_001D2BC0;int func_000F9280(...),func_00100340(...);float x=**(float**)(p+0xc)*D_001D2BC0,y=**(float**)(p+0x14)*D_001D2BC0,z=**(float**)(p+0x1c)*D_001D2BC0,w=**(float**)(p+0x24)*D_001D2BC0;int q=func_000F9280(**(int**)(p+4));func_00100340(*(int*)q,q,&x,w,1);return 1;}

unsigned char func_000FBCD0(unsigned int a,unsigned int *p){int func_00012D60(...);func_00012D60(*p,10);return 1;}

unsigned char func_000FBCF0(unsigned int a,unsigned int *p){int func_00012D60(...);func_00012D60(*p,11);return 1;}

unsigned char func_000FBD10(unsigned int a,int *p){int func_00012D60(...);*(int*)(*p+0x130)=p[3]+4;func_00012D60(*p,12);return 1;}

unsigned char func_000FBD40(unsigned int a,int *p){int func_00012D60(...);*(int*)(*p+0x130)=p[3]+4;func_00012D60(*p,0x48);return 1;}

unsigned char func_000FBD70(unsigned int a,int *p){int func_001060A0(...),func_00012D60(...);int *base=(int*)*p;int y=func_001060A0(*(int*)(p[3]+0x40));base[0x134/4]=y;base[0x138/4]=*(int*)p[5];func_00012D60(*p,13);return 1;}

unsigned char func_000FBDB0(unsigned int a,int *p){int func_001060A0(...),func_00012D60(...);int *base=(int*)*p;int y=func_001060A0(*(int*)(p[3]+0x40));base[0x134/4]=y;base[0x138/4]=*(int*)p[5];func_00012D60(*p,0x2b);return 1;}

unsigned char func_000FBDF0(unsigned int a,int *p){int func_001060A0(...),func_00012D60(...);int *base=(int*)*p;int y=func_001060A0(*(int*)(p[3]+0x40));base[0x134/4]=y;base[0x138/4]=*(int*)p[5];func_00012D60(*p,0x2c);return 1;}

unsigned char func_000FBE30(unsigned int a,int *p){int func_001060A0(...),func_00012D60(...);int *base=(int*)*p;int y=func_001060A0(*(int*)(p[3]+0x40));base[0x134/4]=y;base[0x138/4]=*(int*)p[5];func_00012D60(*p,14);return 1;}

unsigned char func_000FBE70(unsigned int a,int *p){int func_001060A0(...),func_00012D60(...);int *base=(int*)(*p+0x130);base[0]=p[3]+4;int x=func_001060A0(*(int*)(p[5]+0x40));base[1]=x;base[2]=*(int*)p[7];func_00012D60(*p,15);return 1;}

unsigned char func_000FBEB0(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[0]=p[3]+4;out[1]=func_001060A0(*(int*)(p[5]+0x40));out[2]=*(int*)p[7];func_00012D60(*p,0x10);return 1;}

unsigned char func_000FBEF0(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[1]=func_001060A0(*(int*)(p[3]+0x40));func_00012D60(*p,0x11);return 1;}

unsigned char func_000FBF20(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[1]=func_001060A0(*(int*)(p[3]+0x40));func_00012D60(*p,0x12);return 1;}

unsigned char func_000FBF50(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[1]=func_001060A0(*(int*)(p[3]+0x40));out[2]=*(int*)p[5];func_00012D60(*p,0x3b);return 1;}

unsigned char func_000FBF90(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[0]=func_001060A0(*(int*)(p[3]+0x40));out[1]=*(int*)p[5];func_00012D60(*p,0x33);return 1;}

unsigned char func_000FBFD0(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[0]=p[3]+4;out[1]=func_001060A0(*(int*)(p[5]+0x40));out[2]=*(int*)p[7];func_00012D60(*p,0x35);return 1;}

unsigned char func_000FC010(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[0]=p[3]+4;out[1]=func_001060A0(*(int*)(p[5]+0x40));out[2]=*(int*)p[7];func_00012D60(*p,0x36);return 1;}

unsigned char func_000FC050(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[0]=p[3]+4;out[1]=func_001060A0(*(int*)(p[5]+0x40));out[2]=*(int*)p[7];func_00012D60(*p,0x37);return 1;}

unsigned char func_000FC090(unsigned int a,unsigned int *p){int func_00012D60(...);func_00012D60(*p,0x38);return 1;}

unsigned char func_000FC0B0(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[0]=p[3]+4;out[1]=func_001060A0(*(int*)(p[5]+0x40));out[2]=*(int*)p[7];func_00012D60(*p,0x39);return 1;}

unsigned char func_000FC0F0(unsigned int a,unsigned int *p){int func_00012D60(...);func_00012D60(*p,0x47);return 1;}

unsigned char func_000FC110(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[0]=p[3]+4;out[1]=func_001060A0(*(int*)(p[5]+0x40));out[2]=*(int*)p[7];func_00012D60(*p,0x3a);return 1;}

unsigned char func_000FC150(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[1]=func_001060A0(*(int*)(p[3]+0x40));out[2]=*(int*)p[5];func_00012D60(*p,0x3c);return 1;}

unsigned char func_000FC190(unsigned int a,unsigned int *p){int func_00012D60(...);func_00012D60(*p,0x41);return 1;}

unsigned char func_000FC1B0(unsigned int a,unsigned int *p){int func_00012D60(...);func_00012D60(*p,0x42);return 1;}

unsigned char func_000FC1D0(unsigned int a,int *p){int func_00012D60(...);*(int*)(*p+0x130)=p[3]+4;func_00012D60(*p,0x43);return 1;}

unsigned char func_000FC200(unsigned int a,unsigned int *p){int func_00012D60(...);func_00012D60(*p,0x44);return 1;}

unsigned char func_000FC220(unsigned int a,int *p){int func_001060A0(...);int func_00012D60(...);int *out=(int*)(*p+0x130);out[0]=func_001060A0(*(int*)(p[3]+0x40));out[1]=*(int*)p[5];func_00012D60(*p,0x45);return 1;}

char func_000FC260(void *param_1, int *param_2)
{
  int func_001313C0(int);
  int func_000A8FD0(int);
  func_000A8FD0(func_001313C0(*(int *)*(int **)((char *)param_2 + 4)));
  return 1;
}

undefined1 func_000FC280(void)
{
  extern undefined4 D_00312DDC;
  D_00312DDC = D_00312DDC + 1;
  return 1;
}

undefined1 func_000FC290(void)
{
  extern undefined4 D_00312DDC;
  D_00312DDC = D_00312DDC + -1;
  return 1;
}

unsigned char func_000FC2A0(unsigned int a,int *p){int func_00012D60(...);int *out=(int*)(*p+0x130);out[0]=p[3]+4;out[1]=*(int*)p[5];out[2]=*(int*)p[7];func_00012D60(*p,0x13);return 1;}

extern int D_001D27B8;
unsigned char func_000FC2E0(unsigned int param_1, unsigned int *param_2) { int func_000459A0(...); func_000459A0(*param_2,1); return 1; }

unsigned char func_000FC300(unsigned int param_1, unsigned int *param_2)
{
  int func_000459A0(...);
  func_000459A0(*param_2, 0);
  return 1;
}

unsigned char func_000FC400(void *a,int *p){int func_00099E10(...);int func_00099E30(...);int *q=(int*)((char*)p+0xc);int x=**(int**)q;int y=**(int**)((char*)p+4);func_00099E10(y,x);func_00099E30(x);return 1;}

char func_000FC430(void) {
    int func_00099E50(...);
    func_00099E50();
    return 1;
}

unsigned char func_000FC440(void *a,int *p){int func_00105F80(...);int func_00106B00(...);func_00105F80();func_00106B00(**(int **)((char*)p+4),&_D_0032511C);return 1;}

extern int _D_0032511C;
extern float _D_001D27B0;
unsigned char func_000FC460(void *a,int *p){int func_00012D60(...);int *out=(int*)(*p+0x130);out[0]=p[3]+4;out[1]=*(int*)p[5];if(*(float*)p[7]==_D_001D27B0)out[2]=1;else out[2]=0;func_00012D60(*p,0x16);return 1;}

unsigned char func_000FC4C0(unsigned int a,int *p){int obj=*p;if(*(int*)(obj+0x11c)!=2){*(unsigned char*)(obj+0x10)|=0x80;return 0;}*(unsigned char*)(obj+0x10)&=0x7f;return 1;}

unsigned char func_000FC4E0(unsigned int a,int *p){int obj=*p;int *q=*(int**)(obj+0x110);if(q[0]==4&&q[0x26]!=0x10){*(unsigned char*)(obj+0x10)|=0x80;return 0;}*(unsigned char*)(obj+0x10)&=0x7f;return 1;}

unsigned char func_000FC510(unsigned int a,unsigned int *p){int func_00103180(...);func_00103180(*p,p[3]);return 1;}

unsigned char func_000FC530(unsigned int a,int *p){int func_001060A0(...);int func_0013E3F4(float);int func_00106150(...);int x=func_001060A0(**(int**)((char*)p+4));int z=func_0013E3F4(*(float*)((char*)p+0x14));func_00106150(x,*(int*)((char*)p+8),z);return 1;}

unsigned char func_000FC560(unsigned int a,int *p){int func_000F8F40(...);**(unsigned int**)((char*)p+4)=0x40400000;int *q=*(int**)((char*)p+0xc);func_000F8F40(q[0xb]);*(unsigned char*)((char*)q+0x308)=1;return 1;}

unsigned char func_000FC590(int *p){extern unsigned int _D_00324840;int func_0009A0D0(...);_D_00324840=*(unsigned int*)((char*)p+0xc);func_0009A0D0(3);return 1;}

unsigned char func_000FC640(unsigned int a, unsigned int *p)
{
    int func_00101680(int);
    func_00101680(*(unsigned int *)(*(unsigned int *)p + 4));
    return 1;
}

