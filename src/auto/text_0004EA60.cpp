/* 17 functions from 0x0004EA60 to 0x0004F9A9, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int _func_00045BC0(...);
int _func_00116A90(...);
int _func_0004FA80(...);
int _func_0013E3F4(...);
int _func_00048720(...);
int _func_00056D50(...);
int _func_000A2310(...);
int _func_000A23B0(...);
int _func_001100A0(...);
int _func_0012F7A0(...);
int _func_0012E6D0(...);
int _func_0012EA60(...);
int _func_00047510(...);
extern int _D_00307D10;
extern float _D_001D505C;
extern float _D_001D290C;
void _func_0004EBF0(int p){int *o=(int*)_func_00116A90(0x254,1,1);*(int**)(p+0x110)=o;o[0x18]=*(int*)(p+0x134);_func_0004FA80(p,o);int n=_func_0013E3F4((int)(*(float*)(p+0x138)/(*(float*)(*(int*)(p+0x130)+0x74))),p);o[0x1a]=_func_00048720(_D_00307D10,n<<1);*o=5;_func_00056D50(p,o);*(int*)(p+0x17c)=0;*(int*)(p+0x180)=0x3f800000;*(int*)(p+0x184)=0;*(int*)(p+0x188)=0;*(int*)(p+0x18c)=0;*(int*)(p+0x190)=0;*(int*)(p+0x194)=0;*(int*)(p+0x198)=0;*(int*)(p+0x19c)=0x3f800000;*(int*)(p+0x1a0)=0;*(unsigned char*)(p+0x10)|=0x80;}

void _func_0004ECA0(int a,int b){_func_00045BC0(a,*(int*)(b+0x58)?1:0);}

void _func_0004ECC0(int a,int b){unsigned short id=*(unsigned short*)(**(int**)(*(int*)(a+0x84)+0x10)+0x18);_func_000A2310(a+0x64);int*v=*(int**)(b+0x48);float f=id==*(unsigned short*)v?*(float*)(v+8):*(float*)(*(int*)(b+0x50)+8);float s=*(float*)(*(int*)(b+0x68)+0x600);if(s<_D_001D505C)s=_D_001D505C;_func_000A23B0(a+0x64,s*f);}

void _func_0004F060(int p,int q){int a[4],b[2],c[2];_func_001100A0(*(int*)(p+0x2c),a);a[0]=*(int*)(p+0xe8);a[1]=*(int*)(p+0xec);a[2]=*(int*)(p+0xf0);_func_0012F7A0(a,q);_func_0012E6D0(b,q,a);b[1]=0;(void)_func_0012EA60(b);_func_00047510(b[0],b[1]);(void)c;}

unsigned int func_0004F1D0(int p) {
 extern unsigned char D_00311512,D_002EEB9C,D_002EEB9D;
 extern int D_002EEB8C[3],D_002EEB98;
 int _func_0004F1D0(...);
 unsigned i; unsigned char c=*(unsigned char *)(p+0x15);
 if(D_00311512&8) { *(unsigned char *)(p+0x174)=1; *(int *)(p+0x178)=1; *(int *)(p+0x168)=0x437f0000; return 0; }
 for(i=0;i<3;i++)if(D_002EEB8C[i]==p)return 1;
 if((c==0x3e && D_002EEB9C)||(c==0x3d && D_002EEB9D)||D_002EEB98>=3)return 0;
 for(i=0;i<3;i++)if(!D_002EEB8C[i]){D_002EEB8C[i]=p;break;}
 ++D_002EEB98;
 if(c==0x3e)D_002EEB9C=1; else if(c==0x3d)D_002EEB9D=1;
 return 1;
}

void func_0004F290(int p) {
 extern int D_002EEB8C[3],D_002EEB98; extern unsigned char D_002EEB9C,D_002EEB9D;
 int i; unsigned char c;
 for(i=0;i<3;i++)if(D_002EEB8C[i]==p) {
   int count=D_002EEB98;
   D_002EEB8C[i]=0;
   c=*(unsigned char *)(p+0x15);
   --count; D_002EEB98=count;
   if(c==0x3e){D_002EEB9C=0;return;}
   if(c==0x3d){D_002EEB9D=0;return;}
   return;
 }
}

void func_0004F2E0(void) {
    extern int D_002EEB8C;
    extern int D_002EEB90;
    extern int D_002EEB94;
    extern int D_002EEB98;
    extern char D_002EEB9C;
    extern char D_002EEB9D;
    D_002EEB8C = 0;
    D_002EEB90 = 0;
    D_002EEB94 = 0;
    D_002EEB98 = 0;
    D_002EEB9C = 0;
    D_002EEB9D = 0;
}

void func_0004F660(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00046C10(...);
  int func_00045F80(...);
  if ((*(int **)(param_2 + 0x5c) != (int *)0x0) && (**(int **)(param_2 + 0x5c) == 0x3f800000)) {
    func_00046C10(*(undefined4 *)(param_2 + 0x68),param_4,param_3);
    return;
  }
  func_00045F80(*(undefined4 *)(param_2 + 0x68),param_4);
  return;
}

void func_0004F6A0(int a,int b,int c) {
 int _func_000A2310(...),_func_00048430(...),_func_0012EA60(...),_func_00047510(...);
 extern float D_001D290C;
 int *r; longdouble x,y; int l0,l1,l2;
 if(*(int *)(b+0x58)!=0) {
   x=(longdouble)_func_000A2310(a+100);
   r=*(int **)(b+0x58); y=(longdouble)r[0]; if(r[0]<0)y+=(longdouble)D_001D290C;
   if(y>=x)return;
   y=(longdouble)r[1]; if(r[1]<0)y+=(longdouble)D_001D290C;
   if(y<=x)return;
 }
 _func_00048430(*(int *)(b+0x60),c,b+0x138,&l0,**(int **)(b+0x4c),3);
 l1=0; _func_0012EA60(&l0);
 x=(longdouble)_func_00047510(l0,l2);
 *(float *)(b+0x158)=(float)x;
}

unsigned char func_0004F750(int a,int b) {
 int _func_000A2310(...),_func_00048AE0(...);
 extern float D_001D290C;
 int *r; longdouble x,y;
 if(*(int *)(b+0x58)!=0) {
   x=(longdouble)_func_000A2310(a+100); r=*(int **)(b+0x58);
   y=(longdouble)r[0]; if(r[0]<0)y+=(longdouble)D_001D290C;
   if(x<=y)return 0;
   y=(longdouble)r[1]; if(r[1]<0)y+=(longdouble)D_001D290C;
   if(y<=x)return 0;
 }
 return _func_00048AE0(b+0x9c,b+0x138,b+0x158)!=0;
}

