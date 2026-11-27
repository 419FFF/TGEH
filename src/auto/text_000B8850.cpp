/* 10 functions from 0x000B8570 to 0x000B9388, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

#pragma optimize("y", on)

unsigned char func_000B8850(void) { extern int D_00314240,D_00313F28; extern unsigned int func_0009A880(void); unsigned char indices[4]; signed char n=0; signed char i=0; D_00313F28=0xbf800000; for(;i<4;i++) if(*(unsigned char *)(D_00314240+0x16b4+i*0xa0)) indices[n++]=i; if(n>0) return indices[func_0009A880()%n]; return 0xff; }

#pragma optimize("y", on)
void func_000B88B0(void)
{
  extern char *D_00314240;
  int func_00110060(...);
  int func_0009C590(...);
  extern char D_001D8FF4;
  extern char D_001D7064;
  extern float D_001D27FC;
  int func_00091F00(...);
  int func_00091510(...);
  extern float D_001D5050;
  int func_001105E0(...);
  int func_00110000(...);
  extern int D_00314058;
  char *iVar1;
  char *iVar2;
  char cVar4;
  unsigned int uVar5;
  char *puVar6;
  int order[3];
  __declspec(align(16)) float m1[16];
  __declspec(align(16)) float m2[16];
  double t;

  iVar2 = D_00314240;
  iVar1 = iVar2 + *(int *)(iVar2 + 0x27b0) * 0x160 + 0x10;
  *(int *)(iVar1 + 0x144) = 3;
  order[0] = 0;
  order[1] = 1;
  order[2] = 2;
  if (*(int *)(iVar2 + 0x27b0) < 2) {
    cVar4 = (char)order[*(int *)(iVar2 + 0x27b0) + 1];
    *(int *)(iVar2 + 0x27b0) = order[*(int *)(iVar2 + 0x27b0) + 1];
    if (cVar4 < 3) {
      puVar6 = iVar2 + cVar4 * 0x160 - 0x14c;
      uVar5 = (unsigned char)(3 - cVar4);
      do {
        *(int *)(puVar6 + 0x2a0) = 4;
        func_00110060(*(int *)puVar6, m1);
        *(int *)(puVar6 + 0x298) = ((int *)m1)[13];
        *(int *)(iVar2 + 0x1594) = *(int *)(iVar2 + 0x1580);
        *(int *)(iVar2 + 0x15d0) = *(int *)(iVar2 + 0x15bc);
        *(int *)(iVar2 + 0x160c) = *(int *)(iVar2 + 0x15f8);
        puVar6 += 0x160;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  func_00110060(*(int *)(func_0009C590(&D_001D8FF4) + 0x2c), m2);
  func_00091F00((t = m2[13], m2[13] = (float)(t + D_001D27FC), t = m2[12], m2[12] = (float)(t - D_001D27FC), m2));
  func_00091510(&D_001D7064, *(int *)(iVar2 + 0x18a0), m2, 0, 0);
  func_00110060(*(int *)(iVar1 + 4), m1);
  func_001105E0(*(int *)(iVar1 + 4), (t = m1[13], m1[13] = (float)(t - D_001D5050), m1), 0);
  func_00110000(*(int *)(iVar1 + 4));
  *(char *)(iVar1 + 0x154) = 0;
  D_00314058 = 0;
}
#pragma optimize("", on)

#pragma optimize("y", off)
int _func_000B8A40(int param){extern char *_D_00314240;extern float _D_001D27B8;int _func_00110060(int,void*);int _func_0012FE20(void*,int,int,int);int _func_001105E0(int,void*,int);char local[76];char *p=_D_00314240+0x18a0;float current=*(float*)(p+0x90),limit=*(float*)(p+0x94);if(current==limit)return 1;float velocity=*(float*)(p+0x98);*(float*)(p+0x9c)=velocity+*(float*)(p+0x9c);*(float*)(p+0x90)=*(float*)(p+0x9c)+current;if(velocity<=_D_001D27B8){if(velocity<_D_001D27B8&&*(float*)(p+0x90)<limit)*(int*)(p+0x90)=*(int*)(p+0x94);}else if(limit<*(float*)(p+0x90))*(int*)(p+0x90)=*(int*)(p+0x94);_func_00110060(*(int*)p,local);_func_0012FE20(local,0,0,*(int*)(p+0x90));int result=_func_001105E0(*(int*)p,local,0);return result&0xffffff00;}
#pragma optimize("y", on)
void func_000B8B30(void)
{
  int func_0009CBE0(...); int func_00110060(...); int func_0013E469(...);
  extern int D_001D904C,D_003142A0,D_001D9040,D_00313F30,D_001D9034,D_00314130,D_001D9024,D_001D9014,D_00313F90,D_001D9004,D_00314180;
  int iVar1,iVar2,iVar3,iVar4; undefined1 local_100[256];
  iVar1=func_0009CBE0(&D_001D904C);func_00110060(*(undefined4*)(iVar1+0x2c),&D_003142A0);
  iVar1=func_0009CBE0(&D_001D9040);func_00110060(*(undefined4*)(iVar1+0x2c),&D_00313F30);
  iVar1=func_0009CBE0(&D_001D9034);func_00110060(*(undefined4*)(iVar1+0x2c),&D_00314130);
  iVar3=1;iVar4=0;iVar1=3;
  do {
    func_0013E469(local_100,&D_001D9024,iVar3);iVar2=func_0009CBE0(local_100);func_00110060(*(undefined4*)(iVar2+0x2c),iVar4+0x3f80);
    func_0013E469(local_100,&D_001D9014,iVar3);iVar2=func_0009CBE0(local_100);func_00110060(*(undefined4*)(iVar2+0x2c),((undefined*)&D_00313F90)+iVar4);
    func_0013E469(local_100,&D_001D9004,iVar3);iVar2=func_0009CBE0(local_100);func_00110060(*(undefined4*)(iVar2+0x2c),((undefined*)&D_00314180)+iVar4);
    iVar3++;iVar4+=0x40;iVar1--;
  } while(iVar1);
}
#pragma optimize("", on)
void func_000B8C30(void) {
    extern int D_00308158;
    extern int D_001D9058;
    int func_000F9C00(...);
    func_000F9C00(D_00308158, (int)&D_001D9058);
}

void func_000B8C50(void)
{
  int func_000451B0(...);
  int func_000B8C30(...);
  int func_000451C0(...);
  func_000451B0(&func_000B8C30);
  func_000451C0();
  return;
}

#pragma optimize("y", on)
void func_000B8C70(int p) { extern int D_00307DB4,D_00313F28; *(int *)(p+0x140)=0; *(int *)(p+0x130)=0; *(int *)(p+0x12c)=0; *(int *)(p+0x128)=0; *(int *)(p+0x144)=0; *(int *)(p+0x150)=D_00307DB4; *(int *)(p+0x148)=D_00307DB4; D_00313F28=0xbf800000; }
extern int D_00307DB4, D_00313F28;
extern int D_001D8F64,D_001D8F58,D_001D8FB8,D_001D8FD4,D_00314240,D_003142E0;
extern int func_0009C590(...),func_000F9C00(...),func_00110330(...),func_00102E80(...),func_000400C0(...),func_000687F0(...),func_00116FB0(...),func_001007B0(...);
void func_000B8CC0(void) {
extern int D_001D8F64,D_001D8F58,D_001D8FB8,D_001D8FD4,D_00314240,D_003142E0;
extern int func_0009C590(...),func_000F9C00(...),func_00110330(...),func_00102E80(...),func_000400C0(...),func_000687F0(...),func_00116FB0(...),func_001007B0(...);
int v;
v=func_0009C590(&D_001D8F64); func_000F9C00(v,&D_001D8F58);
v=func_0009C590(&D_001D8FB8); func_000F9C00(v,&D_001D8F58);
v=func_0009C590(&D_001D8FD4); func_000F9C00(v,&D_001D8F58);
int p=D_00314240; *(char *)(p+0x1a81)=0;
func_00110330(*(int *)(p+0x19f4),0); func_00102E80(D_003142E0); func_000400C0(0); func_000687F0(); func_00116FB0(D_00314240); func_001007B0(0);
}

void func_000B8D50(void) { volatile int marker=10; }

