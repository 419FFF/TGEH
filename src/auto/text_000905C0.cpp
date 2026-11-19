/* 21 functions from 0x000905C0 to 0x0009150A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
static int D_0030414C;

void func_00090850(int param_1, float param_2[3]) { float func_00131760(void); extern float D_001D27EC,D_001D2C00,D_001D2B64; int func_0011CFC0(...); int root=*(int*)(*(int*)(param_1+0x50)+0x2c); float x=param_2[0],y=param_2[2]; int i=0; do {float v=func_00131760();*(float*)(*(int*)(root+0xc)+i)=((v-D_001D27EC)*D_001D2C00+x)*D_001D2B64;v=func_00131760();*(float*)(*(int*)(root+0xc)+i+4)=v+v;v=func_00131760();i+=0xc;*(float*)(*(int*)(root+0xc)+i-4)=((v-D_001D27EC)*D_001D2C00+y)*D_001D2B64;}while(i<0x3c);func_0011CFC0(param_1+0x54,0x42700000); }

void func_000908F0(void)
{
  extern int D_001D6FB0;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_000903F0(...); int func_00078730(...); int func_00085E20(...); int func_000905C0(...); int func_00090850(...);
  func_0011D000(&D_001D6FB0,func_000903F0);
  func_0011D270(&D_001D6FB0,func_00078730);
  func_0011D290(&D_001D6FB0,func_00085E20);
  func_0011D2B0(&D_001D6FB0,func_000905C0);
  func_0011D2D0(&D_001D6FB0,func_00090850);
}

void func_00090940(void) {
    extern int D_001D6FB0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6FB0);
}

extern "C" void *memset(void *, int, unsigned int);
void func_00090950(void)
{
    extern int D_001D6FCC, D_001D6FD0, D_001D6FD4, D_001D6FD8, D_001D6FDC;
    extern int D_001D6FBC, D_001D6FB0;
    extern int D_0030414C, D_00304150, D_0030809C;
    int func_0011E840(...);
    int func_0011DD60(...);
    int func_0011E830(...);
    int func_0011DEF0(...);
    int func_00110480(...);
    __declspec(align(8)) int s[0x3d];
    int w;
    memset(s, 0, sizeof(s));
    s[0x24] = 2;
    s[0x25] = 2;
    s[0x36] = 0;
    s[0x37] = 0;
    s[0] = D_001D6FCC;
    s[1] = D_001D6FD0;
    s[2] = D_001D6FD4;
    s[0x2e] = 4;
    s[0x2f] = 5;
    s[0x2a] = 3;
    s[0x3c] = 10;
    s[0x39] = 0x14;
    s[3] = D_001D6FD8;
    s[4] = D_001D6FDC;
    s[0x3b] = 0x58;
    w = func_0011E840(&D_001D6FBC, s);
    D_00304150 = func_0011DD60(&D_001D6FB0, 0x14, D_0030414C = w, *(int *)(w + 0x14c));
    func_0011E830(D_0030414C, D_00304150);
    func_0011DEF0(D_00304150);
    func_00110480(D_0030809C, D_0030414C, 8);
}

void func_00090A70(void)
{
  int func_001160B0(...);
  extern undefined4 D_00304150;
  int func_00110760(...);
  extern int D_0030414C;
  func_001160B0(D_00304150);
  func_00110760(D_0030414C);
}

void func_00090A90(int param_1,int param_2) { extern int D_0030414C,D_00304150,D_00304154; int func_0012F120(...),func_00110420(...),func_001105E0(...),func_00110000(...),func_000F8F40(...),func_00110480(...),func_0011E3A0(...),func_0011DED0(...); __declspec(align(16)) char local[0x4c]; func_0012F120(local+0xc); int root=D_0030414C; int q=*(int*)(root+0x2c); if(q)func_00110420(root,*(int*)q);func_001105E0(root,local+0xc,0);func_00110000(root); int r=func_000F8F40(*(int*)(param_1+0x2c));func_00110480(*(int*)(r+0xe0),D_0030414C,8);D_00304154=param_1;func_0011E3A0(D_00304150,param_2);func_0011DED0(D_00304150);}

void _func_00090ED0(void)
{
  extern int D_001D6FE0;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00090B30(...);
  int _func_00078730(...);
  int _func_00085E20(...);
  int _func_00090D00(...);
  _func_0011D000(&D_001D6FE0, _func_00090B30);
  _func_0011D270(&D_001D6FE0, _func_00078730);
  _func_0011D290(&D_001D6FE0, _func_00085E20);
  _func_0011D2B0(&D_001D6FE0, _func_00090D00);
}

void func_00090F10(void) {
    extern int D_001D6FE0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6FE0);
}

void func_00091050(void) { extern int D_00304158,D_003041BC; int func_001160B0(...),func_00110760(...); int *p=&D_00304158; do {func_001160B0(p[1]);func_00110760(p[0]);p+=5;}while((int)p<(int)&D_003041BC); }

void func_00091080(void) { extern int D_003041E0,D_003041E4; extern int D_003041BC; extern float D_001D4210,D_001D27AC,D_001D2B64,D_001D27D4; int func_00131230(...),func_001313C0(...),func_0013E3F4(...); if(D_003041E0){for(int i=0;i<8;i++){float x=(float)*(int*)((char*)&D_003041BC+i*4)*D_001D4210*D_001D27AC;float y=(float)func_00131230(x)*D_001D2B64;func_001313C0(y);D_003041E4=(D_003041E4&~(0xff<<(i*8)))|(func_0013E3F4()<<(i*8));int *p=(int*)&D_003041BC;p[i]++;if(p[i]>0x28)p[i]=0;}}D_003041E0=0;}

void func_000912B0(int param_1) { extern int D_00304168,D_003041CC; int func_0011CFC0(...); int *p=&D_00304168; do { if(p[-2]==param_1){*p=1;func_0011CFC0(p[-3]+0x54,0x3a83126f);}p+=5;}while((int)p<(int)&D_003041CC); }

void func_000912F0(void)
{
  extern undefined4 D_003041F0;
  int func_001103C0(...);
  extern undefined4 D_003041EC;
  D_003041F0 = D_003041F0 + -1;
  if (D_003041F0 == 0) {
    func_001103C0(D_003041EC);
  }
  return;
}

void func_00091310(int a0) {
    extern int D_003041EC;
    int func_0010F750(...);
    func_0010F750(a0, D_003041EC, 224);
}

void func_00091330(void){extern int D_003041F0,D_003041EC;int func_000FC730(...),func_000688D0(...),func_00110370(...);int local[7];if(!D_003041F0){func_000688D0();local[4]=0;local[3]=(int)func_000FC730;local[2]=(int)func_000688D0;local[1]=0;D_003041EC=func_00110370(local);}D_003041F0++;}

void func_00091380(undefined4 *param_1)
{
  int func_0011CD40(...);
  undefined4 uVar1;
  
  uVar1 = func_0011CD40(1,0x32,10,10,1);
  *param_1 = uVar1;
  return;
}

