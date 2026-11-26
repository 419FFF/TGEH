/* 10 functions from 0x000F41E0 to 0x000F4C88, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct F4Owner { char pad0[0x22]; unsigned char id; char pad1[0x101]; unsigned char flags; };
struct F4Link { char pad[0x28e]; char active; };
struct F4Obj { char pad0[0x10]; unsigned char flags; char pad1[2]; char type; char pad2[0x18]; F4Owner *owner; char pad3[0xe0]; F4Link *link; int busy; };
struct F4Out { float x, y, z; char pad0[3]; char shade; char pad1[0x10]; float s0; float s1; };
struct F4Ent { F4Obj *obj; float x, y, z; int state; float t; float limit; float phase; F4Out *out; };

int func_000F42D0(void)
{
 extern int D_00324830; extern int D_00324828; extern float D_001D27B8;
 int i; float *p;
 i=0;if(0<D_00324830){p=(float *)(D_00324828+0x20);do{if(*p==D_001D27B8)return i*0x30+D_00324828;i++;p+=0xc;}while(i<D_00324830);}return 0;
}

void func_000F4320(void)
{
  extern undefined4 D_00324828;
  int func_00116FB0(...);
  extern undefined4 D_00324834;
  extern undefined4 D_0032483C;
  int func_0013C020(...);
  int func_000688D0(...);
  extern undefined4 D_0032482C;
  int func_0011B990(...);
  int iVar1;
  
  if (D_00324828 != 0) {
    func_00116FB0(D_00324828);
    D_00324828 = 0;
  }
  if (D_00324834 != 0) {
    func_00116FB0(D_00324834);
    D_00324834 = 0;
  }
  if (D_0032483C != 0) {
    func_0013C020(D_0032483C);
    D_0032483C = 0;
  }
  func_000688D0();
  iVar1 = D_0032482C;
  *(short *)(D_0032482C + 0x2a) = *(short *)(D_0032482C + 0x2a) + -1;
  func_0011B990(iVar1);
  func_000688D0();
  return;
}

void func_000F4390(undefined4 param_1, undefined4 *param_2, undefined4 param_3, float param_4){extern int D_00324838;extern int D_00324824;extern float D_001D27B0;extern int D_00324834;extern float D_001D2B64;int func_00131760(...);int n=D_00324838;undefined4*p;if(D_00324824!=n){param_4=D_001D27B0/param_4;p=(undefined4 *)(D_00324834+n*0x24);p[0]=param_1;p[1]=param_2[0];p[2]=param_2[1];p[3]=param_2[2];*(float *)(p+6)=param_4*D_001D2B64;func_00131760();*(float *)(p+5)=*(float *)(p+6);p[4]=0;p[8]=0;D_00324838=n+1;}}

void func_000F4400(int param_1){extern int D_00324838;extern int D_00324834;int i=0;int *base=(int *)D_00324834;int *p=base;if(D_00324838>0){while(*p!=param_1){i++;p+=9;if(i>=D_00324838)return;}D_00324838--;if(p[8])*(int *)(p[8]+0x20)=0;for(i=0;i<9;i++)base[i*9+i]=base[i*9+i];}}

void func_000F46A0(void){int func_000B5650(...);int func_0012F120(...);int func_001364D0(...);int func_00133F30(...);int func_0013C980(...);extern int D_00324820;extern int D_00324824;extern int D_00324828;extern int D_0032483C;char a[0x50];char b[0x50];int t[21]={0};if(!func_000B5650(5)){func_0012F120(a);func_001364D0(b);t[0]=2;t[1]=2;t[3]=D_00324820;t[7]=3;t[11]=4;t[12]=5;func_00133F30(t);if(D_00324824)func_0013C980(D_0032483C,D_00324828,0);}}

void func_000F49A0(void)
{
  int func_00110760(...);
  extern undefined4 D_0032487C;
  extern undefined4 D_00324880;
  extern undefined4 D_00324844;
  func_00110760(D_0032487C);
  func_00110760(D_00324880);
  func_00110760(D_00324844);
  return;
}
// Global data definitions (inferred from usage)
extern int D_00324828;
extern int D_00324834;
extern int D_00324824;
extern int D_0032483C;
extern undefined1 D_001D29C7;
extern undefined1 D_001DCDF8;
extern int D_0032482C;
extern int D_00324820;
extern int D_00324830;
extern int D_00324838;

// Function prototypes (assuming void return unless assembly suggests otherwise)
void func_000688D0(void);
int func_00131990(undefined1 *arg1);
int func_0011BF40(undefined1 *arg1, int arg2);
int func_0011BDD0(int arg1, int arg2);
int func_00116A90(int arg1, int arg2, int arg3);
int func_0013C000(int arg1);
