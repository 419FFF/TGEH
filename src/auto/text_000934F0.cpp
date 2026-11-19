/* 17 functions from 0x000934F0 to 0x0009437C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct S_00306E68_row { int a; int b; int c; };
struct S_00306E68_in { int pad0[3]; unsigned int count; int pad1; S_00306E68_row *rows; };
struct S_00306E68 {
    char pad0[0xf8];
    S_00306E68_in *in;
    char pad1[0xc];
    float tbl[256 + 2];
    float scale;
    short *out1;
    short *out2;
    int pad3;
    int flag;
};

void _func_000934F0(void){extern int _D_00306E60,_D_00306E64; int _func_0011B990(...); _D_00306E60--; if(!_D_00306E60){*(int*)((char*)&_D_00306E60+4)=_D_00306E64; goto target;} return; target:;}

void _func_00093510(void){extern int _D_00306E5C,_D_00306E54,_D_00306E58;int _func_000688D0(...);int _func_000934F0(...);int _func_00110370(...);int local[7];if(!_D_00306E5C){_func_000688D0();local[4]=0;local[3]=(int)_func_000934F0;local[1]=(int)_func_000688D0;local[2]=0;_D_00306E54=_func_00110370(local);_D_00306E58=_func_00110370(&local[0]);}_D_00306E5C++;}

void func_00093570(void)
{
  extern undefined4 D_00306E5C;
  int func_000688D0(...);
  int func_001103C0(...);
  extern undefined4 D_00306E58;
  extern undefined4 D_00306E54;
  D_00306E5C = D_00306E5C + -1;
  if (D_00306E5C == 0) {
    func_000688D0();
    func_001103C0(D_00306E58);
    func_001103C0(D_00306E54);
  }
  return;
}

void _func_00093940(void)
{
  extern int D_001D7174;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000935A0(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D7174, _func_000935A0);
  _func_0011D270(&D_001D7174, _func_0007FC90);
  _func_0011D290(&D_001D7174, _func_00085E20);
  _func_0011D2B0(&D_001D7174, _func_000688D0);
}

void func_00093980(void) {
    extern int D_001D7174;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D7174);
}

void func_00093990(void)
{
  extern char *D_00306E68;
  extern float D_001D7180;
  float func_00131230(float);
  float func_00131210(int);
  int func_00131370(int);
  float func_00131760(void);
  extern float D_001D557C;
  int func_00116A90(int, int, int);
  short func_0013E3F4(float);
  unsigned int i, off;
  unsigned int n;
  int row;
  long double v;
  *(float *)(D_00306E68 + 0x510) = 0.15f;
  off = 0x108;
  i = 0;
  do {
    v = func_00131230((float)i * D_001D7180);
    *(float *)(off + D_00306E68) = (float)v;
    off += 4;
    i++;
    *(float *)(off + D_00306E68 - 4) = (float)(v * *(float *)(D_00306E68 + 0x510));
  } while (off < 0x508);
  *(int *)(D_00306E68 + 0x514) = func_00116A90(*(int *)(*(int *)(D_00306E68 + 0xf8) + 0xc) << 1, 1, 0);
  *(int *)(D_00306E68 + 0x518) = func_00116A90(*(int *)(*(int *)(D_00306E68 + 0xf8) + 0xc) << 1, 1, 0);
  i = 0;
  if (*(unsigned int *)(*(int *)(D_00306E68 + 0xf8) + 0xc) != 0) {
    row = 0;
    do {
      func_00131210(*(int *)(*(int *)(*(int *)(D_00306E68 + 0xf8) + 0x14) + row));
      func_00131210(*(int *)(*(int *)(*(int *)(D_00306E68 + 0xf8) + 0x14) + row + 8));
      func_00131370(*(int *)(*(int *)(*(int *)(D_00306E68 + 0xf8) + 0x14) + row + 8) + *(int *)(*(int *)(*(int *)(D_00306E68 + 0xf8) + 0x14) + row));
      *(short *)(*(int *)(D_00306E68 + 0x514) + i * 2) = func_0013E3F4(func_00131760() * D_001D557C);
      *(short *)(*(int *)(D_00306E68 + 0x518) + i * 2) = func_0013E3F4(func_00131760() * D_001D557C);
      i++;
      row += 12;
    } while (i < *(unsigned int *)(*(int *)(D_00306E68 + 0xf8) + 0xc));
  }
  *(int *)(D_00306E68 + 0x520) = 0;
}

void _func_00093B10(int p){extern int _D_00306E68;int _func_00116FB0(...);int _func_000968D0(...);int _func_0011B990(...);int x=*(int*)(p+0x104);_D_00306E68=p;if(x){_func_00116FB0(x);p=_D_00306E68;*(int*)(p+0x104)=0;}_func_000968D0(*(int*)(p+0xf8));_func_00116FB0(*(int*)(_D_00306E68+0x514));_func_00116FB0(*(int*)(_D_00306E68+0x518));p=_D_00306E68;if(*(int*)(p+0x508)){--*(short*)(*(int*)(p+0x508)+0x2a);_func_0011B990(*(int*)(p+0x508));*(int*)(p+0x508)=0;}}

void func_00093BA0(void)
{
  extern undefined4 D_00306E70;
  int func_001103C0(...);
  extern undefined4 D_00306E6C;
  D_00306E70 = D_00306E70 + -1;
  if (D_00306E70 == 0) {
    func_001103C0(D_00306E6C);
  }
  return;
}

void _func_00093BC0(void){extern int _D_00306E68;extern float _D_001D333C;int _func_00116A90(...);int _func_00093990(...);int *piVar1=(int*)(_D_00306E68+0x104);int iVar4=_func_00116A90(*(int*)(*(int*)(_D_00306E68+0xf8)+0xc)<<3,1,0);int iVar3=_D_00306E68;int iVar6=*(int*)(_D_00306E68+0xf8);*piVar1=iVar4;unsigned int uVar5=0;if(*(int*)(iVar6+0xc)){iVar6=0;do{float *pfVar2=(float*)(*(int*)(*(int*)(iVar3+0xf8)+0x14)+iVar6);uVar5++;iVar6+=0xc;*(float*)(*piVar1-8+uVar5*8)=*pfVar2*_D_001D333C;*(float*)(*piVar1-4+uVar5*8)=*(float*)(*(int*)(*(int*)(iVar3+0xf8)+0x14)-4+iVar6)*_D_001D333C;}while(uVar5<(unsigned int)*(int*)(*(int*)(iVar3+0xf8)+0xc));}_func_00093990();}

void func_00093C50(undefined4 param_1, int param_2)
{
  int func_0010F750(...);
  extern undefined4 D_00306E6C;
  int iVar1;
  
  iVar1 = func_0010F750(*(undefined4 *)(param_2 + 0xc),D_00306E6C,0x530);
  *(undefined4 *)(iVar1 + 0xe0) = 1;
  *(undefined4 *)(iVar1 + 0xe4) = 1;
  *(int *)(iVar1 + 0xf4) = param_2;
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
  return;
}

void _func_00093D80(void){extern volatile float _D_001E45FC,_D_001D27B8,_D_0032923C,_D_001D27D4,_D_00306E74,_D_001D557C;extern int _D_00306E78;int _func_001313C0(...);if(_D_001E45FC>=_D_001D27B8){float x=_D_0032923C-_D_001E45FC;_D_001E45FC=_D_0032923C;_D_00306E74=x*_D_001D27D4+_D_00306E74;if(_D_00306E74>=_D_001D557C)_D_00306E74-=_D_001D557C;}else _D_001E45FC=_D_0032923C;_D_00306E78=_func_001313C0(_D_00306E74);}

void _func_000942D0(void){extern int _D_00306E70,_D_00306E68,_D_00306E6C; int _func_00093B10(...); int _func_00093E00(...); int _func_00110370(...); int _func_00096E30(...); int local[7]; _D_00306E68=0; if(!_D_00306E70){local[4]=0;local[3]=(int)_func_00093B10;local[1]=(int)_func_00093E00;local[2]=0;_D_00306E6C=_func_00110370(local);_func_00096E30(0);} _D_00306E70++;}

void _func_00094330(void)
{
  extern int D_001D71A4;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_000947E0(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&D_001D71A4, _func_000947E0);
  _func_0011D270(&D_001D71A4, _func_0007FC90);
  _func_0011D290(&D_001D71A4, _func_00085E20);
  _func_0011D2B0(&D_001D71A4, _func_000688D0);
}

void func_00094370(void) {
    extern int D_001D71A4;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D71A4);
}
// Struct definition for arg0
struct S_D_00086B70_arg0 {
    // Assuming 4 fields based on the pointer arithmetic in the draft (e.g., +0x2C)
    // The exact layout is unknown, but we must declare it to satisfy the compiler.
    void* field1; // Placeholder for offset 0x00
    void* field2; // Placeholder for offset 0x04
    void* field3; // Placeholder for offset 0x08
    void* field4; // Placeholder for offset 0x0C (The pointer used in the call)
};

// Global/External declarations from the brief
extern undefined4 D_00306E68;
extern undefined4 D_001D27B0;
extern undefined D_001D6BFC;
extern undefined D_001D29C7;
extern undefined D_001D7184;

// Function prototypes (assuming they return int based on the draft)
int func_00096230(undefined4);
int func_00096E40(void*);
int func_00093BC0();
int func_0009C7A0(void*, undefined*, int);
int func_00131990(int);
int func_0011BF40(int, int);
int func_0011BDD0(int, int);
