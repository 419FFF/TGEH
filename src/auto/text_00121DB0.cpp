/* 27 functions from 0x00121DB0 to 0x00122D6E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

unsigned short func_00121DB0(short*out,float bias,float scale,int *v){extern float D_001E7D70,D_001E7D74,D_001E7D78,D_001DF668,D_001DF664;extern int func_001313C0(...);float x=*(float*)((char*)v+0x30),y=*(float*)((char*)v+0x34),z=*(float*)((char*)v+0x38);unsigned i=0;do{long double q=(long double)x**(float*)((char*)&D_001E7D78+i)+(long double)y**(float*)((char*)&D_001E7D74+i)+(long double)z**(float*)((char*)&D_001E7D70+i);q=(q-bias)*scale;if(q>D_001DF668)return 0;if(q<D_001DF664)q=-32767.0;out[i/12]=(short)func_001313C0((float)q);i+=12;}while(i<0x138);return 1;}

unsigned short func_00121E60(short*out,float*a,float*b,float scale){extern float D_001E7D70,D_001E7D74,D_001E7D78,D_001DF668,D_001DF664;extern int func_001313C0(...);for(unsigned i=0;i<0x138;i+=12){long double x=(long double)*(float*)((char*)&D_001E7D70+i)*a[0]+(long double)*(float*)((char*)&D_001E7D74+i)*a[1]+(long double)*(float*)((char*)&D_001E7D78+i)*a[2];long double y=(long double)*(float*)((char*)&D_001E7D70+i)*b[0]+(long double)*(float*)((char*)&D_001E7D74+i)*b[1]+(long double)*(float*)((char*)&D_001E7D78+i)*b[2];if(x<y)y=x;y*=scale;if(y>D_001DF668)return 0;if(y<D_001DF664)y=-32767.0;out[i/12]=(short)func_001313C0((float)y);}return 1;}

void func_00121F20(int p,int *list){extern int D_0032B710[],D_0032F750;int n=0;D_0032B710[0]=(int)list;int count=1;for(int j=0;j<count;j++){int d=D_0032B710[j];int k=0;for(;k<0x1a;k+=2){short a=*(short*)(p+k),b=*(short*)(d+k);if(a>b)break;if(*(short*)(p+k+2)>*(short*)(d+k+2)){k++;break;}}if(k==0x1a){if(*(char*)(d+0x34))D_0032B710[n++]=d;else {D_0032B710[count++]=*(int*)(d+0x38);D_0032B710[count++]=*(int*)(d+0x38)+0x40;}}}D_0032F750=n;}

void _func_00122470(void) { extern void _func_0012EB70(void*,void*); extern void _func_0012EE00(void*,void*); }

void func_001226B0(char a0) {
    extern char D_0032F754;
    D_0032F754 = a0;
}

char func_001226C0(void) {
    extern char D_0032F754;
    return D_0032F754;
}

int _func_001226D0(void) { extern int _D_0032F75C; extern char _D_001DF66C; int func_00116A90(int,int,int); int func_0011C3B0(...); int i; int p; char c; i=func_00116A90(0x60,1,1); func_0011C3B0(&_D_0032F75C,i,i); p=(int)&_D_001DF66C; do { c=*(char*)p; *(char*)(i+0xc+(p-(int)&_D_001DF66C))=c; ++p; } while(c); *(int*)(i+0x4c)=0; return i; }

void _func_00122710(int key) { extern unsigned int D_0032F900; extern int D_0032F770[],D_0032F774[]; extern void _func_0013EB10(int*,int*,unsigned); extern void _func_0011C3E0(int); extern void _func_00116FB0(int); unsigned i; for(i=0;i<D_0032F900;i++)if(D_0032F770[i]==key){_func_0013EB10(&D_0032F770[i],&D_0032F774[i],D_0032F900-i);i--;D_0032F900--;} _func_0011C3E0(key);_func_00116FB0(key);}

void _func_00122780(void* p) { extern unsigned int D_0032F904,D_0032F768,D_0032F900; extern int D_0032F76C[],D_0032F770[]; extern int _func_0013B380(unsigned); unsigned n; if(p&&D_0032F904&&D_0032F768<=0){n=_func_0013B380(D_0032F904);if(D_0032F900>0)*(int*)((char*)D_0032F76C[D_0032F900]+0x4c)+=n;D_0032F770[D_0032F900]=(int)p;D_0032F900++;*(int*)((char*)p+0x4c)-=n;}}

void func_001227E0(unsigned int param_1) {
extern unsigned int D_0032F904, D_0032F768, D_0032F900;
extern int *D_0032F770[], *D_0032F76C[];
int func_0013B380(unsigned int);
int eax;
if (!param_1 || !D_0032F904 || D_0032F768 > 0) return;
eax=func_0013B380(D_0032F904);
D_0032F900--;
*(int*)((char*)D_0032F770[D_0032F900]+0x4c) += eax;
if (D_0032F900 > 0) *(int*)((char*)D_0032F76C[D_0032F900]+0x4c) -= eax;
}

void _func_00122940(void) { extern int _D_0032F904,_D_0032F900,_D_0032F768,_D_0032F75C,_D_0032F760,_D_0032F758; extern char _D_001DF66C; int func_0013B320(int); int func_00116A90(int,int,int); int func_0011C3B0(...); void func_00122780(int); int i; char *s; char c; _D_0032F904=func_0013B320(0x47c35000); _D_0032F900=0; _D_0032F768=0; _D_0032F75C=0; _D_0032F760=0; i=func_00116A90(0x60,1,1); func_0011C3B0(&_D_0032F75C,i,i); s=&_D_001DF66C; do { c=*s; *(char*)((char*)i+0xc+(s-&_D_001DF66C))=c; ++s; } while(c); *(int*)(i+0x4c)=0; _D_0032F758=i; func_00122780(i); }

void _func_001229B0(int a) { extern int _D_0032F908,_D_003291CC,_D_003291D0; extern float _D_001D290C,_D_001D8FB0; int func_0010F750(int,int,int,int); int *p=(int*)func_0010F750(a,_D_0032F908,0x110,0); p[0x39]=0x3f99999a; *(float*)((char*)p+0xe8)=((float)_D_003291CC*_D_001D8FB0)/(float)_D_003291D0; p[0x3b]=0x41200000;p[0x3c]=0x49742400;p[0x3f]=0;p[0x3d]=0;p[0x40]=0;p[0x3e]=0;p[0x42]=0;p[0x43]=0; }

void func_00122A50(int p,float x,int y){*(float*)(p+0xe4)=(float)(long double)x;*(int*)(p+0xe8)=y;}

void func_00122A70(void){ extern int D_0032F90C,D_0032F908; int func_00110370(...); int local[7]; if(D_0032F90C==0){local[4]=0;local[3]=0;local[1]=0;local[2]=0;D_0032F908=func_00110370(local);} ++D_0032F90C;}

void func_00122AB0(void)
{
  extern undefined4 D_0032F90C;
  int func_001103C0(...);
  extern undefined4 D_0032F908;
  D_0032F90C = D_0032F90C + -1;
  if (D_0032F90C == 0) {
    func_001103C0(D_0032F908);
  }
  return;
}

void func_00122AD0(void)
{
  extern undefined4 D_00331110;
  int func_0013CC50(...);
  if (D_00331110 == 0) {
    func_0013CC50();
  }
  D_00331110 = D_00331110 + 1;
  return;
}

long double _func_00122AF0(float a,float b) { extern float _D_001D27B8,_D_001D27B0,_D_001D2D4C; float x; if(a==_D_001D27B8) return _D_001D27B8; if(a>_D_001D27B8) x=(a-b)/(_D_001D27B0-b); else x=(a+b)/(_D_001D27B0-b); if(x==_D_001D27B8)return _D_001D27B8; if(x<_D_001D2D4C)return _D_001D2D4C; if(x>_D_001D27B0)return _D_001D27B0; return x; }

int func_00122B80(undefined4 param_1, undefined4 param_2)
{
  int func_00116A90(...);
  int func_0013CC70(...);
  int iVar1;
  
  iVar1 = func_00116A90(0x2c,1,1);
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_2;
  func_0013CC70(iVar1);
  return iVar1;
}

void func_00122BB0(int param_1,unsigned int param_2,int param_3,float param_4){ extern float D_0032923C; int func_0013D030(...); if(param_2 < *(unsigned int *)(param_1+0x14)){func_0013D030(param_1,param_2,param_3);int i=(param_2*5)*4; *(float *)(*(int *)(param_1+0x18)+i+8)=*(float *)&param_3; *(float *)(*(int *)(param_1+0x18)+i+0xc)=param_4; *(char *)(*(int *)(param_1+0x18)+i+4)=0; *(float *)(*(int *)(param_1+0x18)+i+0x10)=D_0032923C;}}

void func_00122C10(int param_1,float param_2,float param_3){ extern float D_0032923C; int func_0013D030(...); unsigned int i; int off; for(i=0,off=0;i<*(unsigned int *)(param_1+0x14);++i,off+=0x14){func_0013D030(param_1,i,*(int *)&param_2);*(float *)(*(int *)(param_1+0x18)+off+8)=param_2;*(float *)(*(int *)(param_1+0x18)+off+0xc)=param_3;*(char *)(*(int *)(param_1+0x18)+off+4)=0;*(float *)(*(int *)(param_1+0x18)+off+0x10)=D_0032923C;}}

void _func_00122D00(void* p, unsigned int arg) { extern void _func_00122C80(void*,unsigned int,unsigned int); unsigned int i; for(i=0;i<(unsigned int)((int*)p)[5];i++) _func_00122C80(p,i,arg); }

void func_0013D070(int, int);
void func_00122D30(int *param_1)
{
    unsigned int i;
    if (param_1 != 0) {
        for (i = 0; i < (unsigned int)param_1[5]; ++i) {
            func_0013D070((int)param_1, (int)i);
            *(int *)((char *)param_1[6] + i * 0x14 + 8) = 0;
        }
    }
}
extern float D_0032923C;
extern int D_0032F90C, D_0032F908;
