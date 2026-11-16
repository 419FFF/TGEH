/* 25 functions from 0x0006E760 to 0x0006F6B2, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0006E860(void) {
    extern int D_002FA010;
    D_002FA010 = 1065353216;
}

void func_0006E870(void) {
    extern int D_002FA008;
    D_002FA008 = 1065353216;
}

char func_0006E880(void) {
    extern char D_002FA00D;
    return D_002FA00D;
}

int func_0006E890(void) { extern float D_002FA010,D_002FA008,D_001D27B8; if(D_002FA010>D_001D27B8) return 0; if(D_002FA008>D_001D27B8) return 0; return 1; }

void func_0006E8C0(void) { extern float D_002FA010,D_002FA008,D_001D27B8,D_001D2BF4; extern unsigned char D_002FA00C,D_002FA00D; D_002FA00C=0; D_002FA00D=0; if(D_002FA010>=D_001D27B8) { D_002FA010=D_002FA010-D_001D2BF4; if(D_002FA010<D_001D27B8) { D_002FA010=-1.0f; D_002FA00C=1; return; } } else if(D_002FA008>=D_001D27B8) { D_002FA008=D_002FA008-D_001D2BF4; if(D_002FA008<D_001D27B8) { D_002FA00D=1; D_002FA008=-1.0f; } } }

void func_0006E960(void) { extern float D_002FA010,D_002FA008,D_001D27B8,D_001D288C; extern unsigned char D_002FA00D; void func_0006E680(void); void func_000688D0(void); void func_0006E760(void); if(D_002FA010>D_001D27B8) { func_0006E680(); func_000688D0(); } if(D_002FA008>D_001D288C && D_002FA00D) { func_0006E760(); func_000688D0(); } }

void _func_0006E9B0(void){extern int _D_002FA008,_D_002FA010;extern unsigned char _D_002FA00C,_D_002FA00D;_D_002FA008=0xbf800000;_D_002FA010=0xbf800000;_D_002FA00C=0;_D_002FA00D=0;}

unsigned char _func_0006E9E0(unsigned int *p,unsigned int *out){unsigned int count=p[1]>>2,index=0;unsigned int *words=(unsigned int*)p[0];while(index<count){unsigned int value=*words;if(value!=0xffffffff){unsigned int bit=0;do{if(!(value&(1u<<bit))){*out=index*32+bit;return 1;}bit++;}while(bit<32);}index++;words++;}return 0;}

void func_0006EB40(undefined4 *param_1)
{
  int func_00116FB0(...);
  func_00116FB0(*param_1);
  func_00116FB0(param_1);
  return;
}

int _func_00116A90(...);
void *_func_0006EB60(unsigned int n){unsigned int b=(n+31)>>3,i;int *p=(int*)_func_00116A90(8,1,1);void*d=(void*)_func_00116A90(b,1,1);p[1]=b;p[0]=(int)d;for(i=0;i<b;i++)((unsigned char*)d)[i]=0;return p;}

void func_0006EBB0(void) { extern int D_002FA024,D_002FA014,D_002FA018,D_002FA01C; extern const char D_001D57EC,D_001D57E0; int func_0009C590(const char*); int func_0009C7A0(int,const char*,int); int p; p=func_0009C590(&D_001D57EC); D_002FA024=p; if(p) { D_002FA014=0; D_002FA018=0x3f800000; D_002FA01C=*(int*)func_0009C7A0(p,&D_001D57E0,1); } }

void func_0006EC00(int a0) {
    extern int D_0032923C;
    extern int D_002FA020;
    extern int D_002FA014;
    D_002FA020 = D_0032923C;
    D_002FA014 = a0;
}

void func_0006EC20(float x) { extern float D_002FA014; extern int D_002FA020,D_0032923C; D_002FA020=D_0032923C; D_002FA014=x*-1.0f; }

void _func_0006F3F0(void){extern int _D_001E3CD0,_D_002FA048,_D_002FA04C;_D_001E3CD0=1;_D_002FA048=0;_D_002FA04C=0;}

void func_0006F410(void) { extern int D_001E3CD0; extern float D_0032923C,D_002FA048,D_001D31C8,D_001D27B0,D_002FA04C,D_001D2868,D_001D290C,D_001D4F28,D_001D2C00; extern float D_002FA024[8]; float func_00131230(float); int i; if(D_001E3CD0) D_001E3CD0=0; else { float t=(D_0032923C-D_002FA048)*D_001D31C8; if(t <= D_001D27B0) { D_002FA04C += D_001D27B0; } } D_002FA048=D_0032923C; if(D_002FA04C > D_001D2868) D_002FA04C-=D_001D2868; for(i=0;i<8;i++) D_002FA024[i]=func_00131230((float)i*D_001D4F28+D_002FA04C)*D_001D2C00; }

void func_0006F4D0(unsigned int p) { extern int D_0032B70C; void func_0006EF70(void); void func_0006F1F0(void); void func_0006ED30(void); switch(p) { case 0: D_0032B70C=0; return; case 1: D_0032B70C=(int)func_0006EF70; return; case 2: D_0032B70C=(int)func_0006F1F0; return; case 3: D_0032B70C=(int)func_0006ED30; return; } }

void func_0006F520(void) { extern int D_002FA080; extern int D_001E3CD8; extern unsigned char D_002FA05C; D_002FA05C=0; D_001E3CD8=3; D_002FA080=0; }

void func_0006F670(void)
{
  extern undefined4 D_002FA058;
  int func_00110760(...);
  extern undefined4 D_002FA054;
  extern undefined4 D_002FA07C;
  if (D_002FA058 != 0) {
    func_00110760(D_002FA054);
    func_00110760(D_002FA07C);
  }
  D_002FA054 = 0;
  D_002FA07C = 0;
  D_002FA058 = 0;
  return;
}

