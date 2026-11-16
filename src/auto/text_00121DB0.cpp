/* 27 functions from 0x00121DB0 to 0x00122D6E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

unsigned short func_00121DB0(short*out,float bias,float scale,int *v){extern float D_001E7D70,D_001E7D74,D_001E7D78,D_001DF668,D_001DF664;extern int func_001313C0(...);float x=*(float*)((char*)v+0x30),y=*(float*)((char*)v+0x34),z=*(float*)((char*)v+0x38);unsigned i=0;do{long double q=(long double)x**(float*)((char*)&D_001E7D78+i)+(long double)y**(float*)((char*)&D_001E7D74+i)+(long double)z**(float*)((char*)&D_001E7D70+i);q=(q-bias)*scale;if(q>D_001DF668)return 0;if(q<D_001DF664)q=-32767.0;out[i/12]=(short)func_001313C0((float)q);i+=12;}while(i<0x138);return 1;}

unsigned short func_00121E60(short*out,float*a,float*b,float scale){extern float D_001E7D70,D_001E7D74,D_001E7D78,D_001DF668,D_001DF664;extern int func_001313C0(...);for(unsigned i=0;i<0x138;i+=12){long double x=(long double)*(float*)((char*)&D_001E7D70+i)*a[0]+(long double)*(float*)((char*)&D_001E7D74+i)*a[1]+(long double)*(float*)((char*)&D_001E7D78+i)*a[2];long double y=(long double)*(float*)((char*)&D_001E7D70+i)*b[0]+(long double)*(float*)((char*)&D_001E7D74+i)*b[1]+(long double)*(float*)((char*)&D_001E7D78+i)*b[2];if(x<y)y=x;y*=scale;if(y>D_001DF668)return 0;if(y<D_001DF664)y=-32767.0;out[i/12]=(short)func_001313C0((float)y);}return 1;}

void func_00121F20(int p,int *list){extern int D_0032B710[],D_0032F750;int n=0;D_0032B710[0]=(int)list;int count=1;for(int j=0;j<count;j++){int d=D_0032B710[j];int k=0;for(;k<0x1a;k+=2){short a=*(short*)(p+k),b=*(short*)(d+k);if(a>b)break;if(*(short*)(p+k+2)>*(short*)(d+k+2)){k++;break;}}if(k==0x1a){if(*(char*)(d+0x34))D_0032B710[n++]=d;else {D_0032B710[count++]=*(int*)(d+0x38);D_0032B710[count++]=*(int*)(d+0x38)+0x40;}}}D_0032F750=n;}

void _func_00122470(void) {}

void func_001226B0(char a0) {
    extern char D_0032F754;
    D_0032F754 = a0;
}

char func_001226C0(void) {
    extern char D_0032F754;
    return D_0032F754;
}

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

void func_00122A50(int p,float x,int y){*(float*)(p+0xe4)=(float)(long double)x;*(int*)(p+0xe8)=y;}

void func_00122A70(void){int func_00110370(...); extern int D_0032F90C,D_0032F908; int local[7]={0}; if(D_0032F90C==0)D_0032F908=func_00110370(local); ++D_0032F90C;}

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

long double _func_00122AF0(float param_1, float param_2) {
  extern float _D_001D27B8, _D_001D27B0, _D_001D2D4C;
  long double v;
  if (param_1 <= _D_001D27B8) {
    v = ((long double)param_1 + param_2) / ((long double)_D_001D27B0 - param_2);
    if (v <= _D_001D27B8) goto clamp;
  } else {
    v = ((long double)param_1 - param_2) / ((long double)_D_001D27B0 - param_2);
    if (_D_001D27B8 <= v) {
clamp:
      if (v < _D_001D2D4C) return _D_001D2D4C;
      if (_D_001D27B0 < v) v = _D_001D27B0;
      return v;
    }
  }
  return _D_001D27B8;
}

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
