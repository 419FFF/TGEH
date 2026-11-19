/* 25 functions from 0x00067B40 to 0x00068AB3, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00067CD0(void){extern int D_00308158,D_001D573C,D_002F77B4,D_002F77B8,*D_002F77B0; int func_0009C7A0(int,void*,int); int func_0013E3F4(void); int func_00116A90(int,int,int); void func_00067B40(int); D_002F77B4=0;D_002F77B8=0;D_002F77B0=0; int x=func_0009C7A0(D_00308158,&D_001D573C,0); if(x){D_002F77B8=func_0013E3F4();} int n=D_002F77B8; if((unsigned)n>0)D_002F77B0=(int*)func_00116A90(n*12,1,1); func_00067B40(D_00308158);}

void func_00067D50(void)
{
  extern undefined4 D_002F77B0;
  int func_00116FB0(...);
  extern undefined4 D_002F77B4;
  extern undefined4 D_002F77B8;
  if (D_002F77B0 != 0) {
    func_00116FB0(D_002F77B0);
  }
  D_002F77B0 = 0;
  D_002F77B4 = 0;
  D_002F77B8 = 0;
  return;
}

void func_00067D90(void){extern int D_00313B60,D_002F77B4,*D_002F77B0; int func_001100A0(int,int*); unsigned char func_000679D0(int,int); int local=0; if(D_00313B60){func_001100A0(D_00313B60,&local); if((unsigned)D_002F77B4>0){int *base=D_002F77B0; unsigned i=0; do{int *entry=(int*)((char*)base+i*12); if(entry[2]==1&&func_000679D0(entry[1],local+0x30))*(unsigned char*)(entry[0]+6)|=0x10;i++;}while(i<(unsigned)D_002F77B4);}}}

void func_00067E00(void){extern int D_002F77B4; extern int *D_002F77B0; int n=D_002F77B4; if(n<=0)return; int *p=D_002F77B0; do {int c=p[2]; c--; if(c==0)*(unsigned char*)(p[0]+6)&=0xef;p+=3;}while(--n);}

int func_00067E30(void){extern int D_002F7EF0; extern unsigned char D_002F7E50[]; for(int i=0;i<D_002F7EF0;i++)if(!D_002F7E50[i]){D_002F7E50[i]=1;return i;}return 0;}

void func_00067E60(int p,int i){extern unsigned char D_001E5ECA,D_002F7EF8;extern float D_00324D04,D_00324D14,D_00324D30,D_001D27B0;extern int func_00139460(...);extern long double func_00139440(...);if(!D_001E5ECA)return;if(!*(int*)(p+0x14+i*4))return;if(D_002F7EF8){if(i==0){long double v=D_00324D04;v=v**(float*)(p+4);v=v*D_00324D14;v=v*D_00324D30;*(float*)(p+0x1c)=(float)v;}else{long double v=D_001D27B0;v=v-D_00324D30;v=v**(float*)(p+4);v=v*D_00324D04;*(float*)(p+0x1c+i*4)=(float)v;}}else{long double v=D_00324D04;v=v**(float*)(p+4);v=v*D_00324D14;*(float*)(p+0x1c+i*4)=(float)v;}func_00139460(*(int*)(p+0x14+i*4),*(int*)(p+0x1c+i*4));*(float*)(p+0x24+i*4)=(float)func_00139440(*(int*)(p+0x14+i*4));}

void func_00067EF0(int p,int i){extern unsigned char D_001E5ECA;extern int D_002F7EEC;extern char D_002F7E50;extern void func_00139B10(...);if(!D_001E5ECA||!p)return;int x=*(int*)(p+0x14+i*4);if(!x)return;func_00139B10(x);int n=*(int*)(p+0x40+i*4);*(int*)(p+0x14+i*4)=0;(&D_002F7E50)[n]=0;D_002F7EEC--;*(volatile int*)(p+0x40+i*4)=-1;}

void func_00068050(int p,int i){extern unsigned char D_001E5ECA;extern void func_00067E60(...),func_00139B80(...);if(!D_001E5ECA)return;if(*(int*)(p+0x14+i*4)){func_00067E60(p,i);func_00139B80(*(int*)(p+0x14+i*4));}}

undefined4 func_00068090(int param_1, int param_2)
{
  if ((*(int *)(param_1 + 0x14 + param_2 * 4) != 0) && (*(int *)(param_1 + 0x38 + param_2 * 4) != 3)
     ) {
    return 0;
  }
  return 1;
}

unsigned char func_000680B0(int p){extern unsigned char D_002F7EF8;int func_00139570(...);int on=D_002F7EF8;if(on)*(int*)(p+0x3c)=1;*(int*)(p+0x38)=1;int a=*(int*)(p+0x14);if(a)*(int*)(p+0x38)=func_00139570(a);if(D_002F7EF8){int b=*(int*)(p+0x18);if(b)*(int*)(p+0x3c)=func_00139570(b);}return 1;}

void func_00068450(void){extern int D_002F7E6C,D_002F7EFC,D_002F7EF0,D_002F7EEC,D_002F7B04;extern unsigned char D_002F7EF8,D_002F7E50[];int func_00139B10(...),func_000688D0(...);int *p=&D_002F7E6C;do{int a=p[0];p[6]=0;if(a)func_00139B10(a);p[11]=-1;p[0]=0;if(D_002F7EF8){int b=p[1];p[7]=0;if(b)func_00139B10(b);p[12]=-1;p[1]=0;}p[-3]=0;p+=0x12;}while((int)p<(int)&D_002F7EFC);int n=D_002F7EF0;D_002F7EEC=0;int i=0;if(n>0){do{func_000688D0(((int*)&D_002F7B04)[i]);D_002F7E50[i]=0;((int*)&D_002F7B04)[i]=0;i++;}while(i<n);}}

void func_00068740(void){extern unsigned char D_001E5ECA,D_002F7F01,D_002F7EF8;extern int D_002F7B10,D_002F7B00;int func_000684F0(...),func_00068100(...),func_00067EF0(...);if(D_001E5ECA){if(D_002F7F01){func_00067EF0(D_002F7B10,0);func_00067EF0(D_002F7B00,0);if(D_002F7EF8){func_00067EF0(D_002F7B10,1);func_00067EF0(D_002F7B00,1);}}else{func_000684F0();func_00068100(D_002F7B10);func_00068100(D_002F7B00);}}}

void func_000687C0(int p){extern int D_002F7E30,D_002F7E34,D_002F7EE8;extern unsigned char D_002F7E3C,D_002F7F00;D_002F7E30=p;D_002F7E34=(p-p);D_002F7E3C=1;D_002F7F00=1;D_002F7EE8=(p-p);}

void func_000687F0(void) {
    extern char D_002F7F00;
    D_002F7F00 = 0;
}

void func_00068800(char a){extern unsigned char D_002F7F01,D_002F7EF9,D_002F7EF8;extern int D_002F7B10,D_002F7B00,D_002F7EE8,D_002F7EFC,D_002F77D0,D_001E3CC8;int func_00067EF0(...);D_002F7F01=a;D_002F7EF9=a;if(a){func_00067EF0(D_002F7B10,0);func_00067EF0(D_002F7B00,0);if(D_002F7EF8){func_00067EF0(D_002F7B10,1);func_00067EF0(D_002F7B00,1);}D_002F7EE8=D_002F7EFC=D_002F77D0;int p=D_002F7B10;if(p){*(int*)(p+0x2c)=D_001E3CC8;*(int*)(p+0x30)=D_001E3CC8;}p=D_002F7B00;if(p){*(int*)(p+0x2c)=D_001E3CC8;*(int*)(p+0x30)=D_001E3CC8;}}}

void func_000688B0(undefined1 param_1)
{
  extern undefined D_001E5ECA;
  extern undefined D_002F7EF9;
  int func_00068740(...);
  if (D_001E5ECA != '\0') {
    D_002F7EF9 = param_1;
    func_00068740();
    return;
  }
  return;
}

void func_000688D0(void) {
}

undefined4 func_000688E0(int param_1)
{
  undefined *new_var2;
  extern int D_002F82F0;
  extern undefined D_002F7F08;
  int iVar1;
  undefined *new_var;
  new_var2 = &D_002F7F08;
  new_var = new_var2;
  iVar1 = 0;
  if (0 < D_002F82F0)
  {
    do
    {
      if (((*((int **) (((undefined *) new_var) + (iVar1 * 4)))) != ((int *) 0x0)) && ((*(*((int **) (((undefined *) new_var2) + (iVar1 * 4))))) == param_1))
      {
        return *((undefined4 *) (((undefined *) new_var2) + (iVar1 * 4)));
      }
      iVar1 = iVar1 + 1;
    }
    while (iVar1 < D_002F82F0);
  }
  return 0;
}

void _func_00068A40(int param_1) { extern int D_002F82F0; extern int D_002F7F08[256]; extern int D_002F7F04[256]; void _func_00116FB0(int); int i; if(D_002F82F0) { i=0; if(D_002F82F0>0) { while(*(int*)D_002F7F08[i]!=param_1) { ++i; if(D_002F82F0<=i)return; } if(*(int*)(D_002F7F08[i]+4)) _func_00116FB0(*(int*)(D_002F7F08[i]+4)); _func_00116FB0(D_002F7F08[i]); D_002F7F08[i]=D_002F7F04[D_002F82F0]; D_002F7F04[D_002F82F0]=0; --D_002F82F0; } } }
// Struct definition derived from guess_struct
typedef struct {
    void* p_func;     // +0x0 pointer (1 function)
    float f32_1;      // +0x4 f32 (4)
    short s32_1;      // +0x8 s32 (2)
    char s8_1[2];     // +0xC s8 (2)
    void* p_ptr_1;    // +0x14 pointer (6)
    short s32_2;      // +0x18 pointer (2)
    float f32_2;      // +0x1C f32 (1)
    float f32_3;      // +0x24 f32 (2)
    // ... 7 more fields to be determined
} S_D_002F7E58;

// Global constants and data areas
extern void _func_00131990(const char*);
extern void _func_00067E30();
extern int _func_00131A10(char buffer[128]);
extern void _func_001392E0(char buffer[128], const void* ptr, int type, int v1, int v2);
extern void _func_00067E60(void* obj, int param2);

// Global data addresses (assuming they are defined elsewhere or need extern declaration)
extern unsigned int D_001D578C;
extern unsigned int D_001D5784;
extern unsigned int D_001D5788;
extern unsigned int D_001D29C7;
