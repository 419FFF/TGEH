/* 14 functions from 0x0002CF30 to 0x0002DF20, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct S_0002D170_hit { int d[16]; };

void func_0002CF30(undefined4 param_1)
{
  int func_0009C6A0(...);
  int func_0009D3E0(...);
  extern undefined D_001D3B8C;
  extern undefined D_001D2B20;
  extern undefined D_001D3B84;
  extern undefined D_001D3B74;
  extern undefined D_001D3B64;
  extern undefined D_001D3B54;
  extern undefined D_001D3B44;
  extern undefined D_001D3B3C;
  extern undefined D_001D3B34;
  int func_000B5860(...);
  int iVar1;
  
  iVar1 = func_0009C6A0(param_1,((undefined *)&D_001D3B8C));
  if (iVar1 != 0) {
    func_0009D3E0(iVar1);
  }
  iVar1 = func_0009C6A0(param_1,((undefined *)&D_001D2B20));
  if (iVar1 != 0) {
    func_0009D3E0(iVar1);
  }
  iVar1 = func_0009C6A0(param_1,((undefined *)&D_001D3B84));
  if (iVar1 != 0) {
    func_0009D3E0(iVar1);
  }
  iVar1 = func_0009C6A0(param_1,((undefined *)&D_001D3B74));
  if (iVar1 != 0) {
    func_0009D3E0(iVar1);
  }
  iVar1 = func_0009C6A0(param_1,((undefined *)&D_001D3B64));
  if (iVar1 != 0) {
    func_0009D3E0(iVar1);
  }
  iVar1 = func_0009C6A0(param_1,((undefined *)&D_001D3B54));
  if (iVar1 != 0) {
    func_0009D3E0(iVar1);
  }
  iVar1 = func_0009C6A0(param_1,((undefined *)&D_001D3B44));
  if (iVar1 != 0) {
    func_0009D3E0(iVar1);
  }
  iVar1 = func_0009C6A0(param_1,((undefined *)&D_001D3B3C));
  if (iVar1 != 0) {
    func_0009D3E0(iVar1);
  }
  iVar1 = func_0009C6A0(param_1,((undefined *)&D_001D3B34));
  if (iVar1 != 0) {
    func_0009D3E0(iVar1);
  }
  func_000B5860();
  return;
}

void func_0002D030(int *param_1) { int func_00110300(...); int func_00110330(...); extern char D_001D3BC4,D_001D3BBC,D_001D3BB0,D_001D3BA4,D_001D3B94; int r; r=func_00110300(param_1[11],&D_001D3BC4,0); if(r)func_00110330(r,0); r=func_00110300(param_1[11],&D_001D3BBC,0); if(r)func_00110330(r,0); r=func_00110300(param_1[11],&D_001D3BB0,0); if(r)func_00110330(r,0); r=func_00110300(param_1[11],&D_001D3BA4,0); if(r)func_00110330(r,0); r=func_00110300(param_1[11],&D_001D3B94,0); if(r)func_00110330(r,0); }

unsigned char func_0002D0F0(int a,int b,int c,float radius) { float func_0012E870(...); float d[3]; d[0]=func_0012E870(a,b); d[1]=func_0012E870(b,c); d[2]=func_0012E870(c,a); int ecx=1; do { if (!(d[0] <= d[ecx])) d[0]=d[ecx]; ++ecx; } while(ecx != 3); radius*=radius; return d[0] < radius; }

void func_0002D3E0(int param_1) { extern int D_00307DF8; int func_001031C0(...); int func_00103990(...); int r=func_001031C0(D_00307DF8,param_1); if(r) func_00103990(r); }

void func_0002D410(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00103210(...);
  int func_001031A0(...);
  int func_00103960(...);
  int iVar1;
  
  iVar1 = func_00103210(param_1);
  if (iVar1 != 0) {
    func_001031A0(iVar1,param_4);
    func_00103960(iVar1,param_2,param_3);
  }
  return;
}

void func_0002D450(int param_1) { extern int D_00307DF8; extern char D_001D3BCC; int func_0013E469(...); int func_00103210(...); int func_00102E80(...); char buf[256]; func_0013E469(buf,&D_001D3BCC,*(int *)((char *)D_00307DF8+0xc),param_1); int r=func_00103210(buf); if(r)func_00102E80(r); }

void func_0002D4A0(void)
{
  extern undefined4 D_002EEAA8;
  int func_0009A8D0(...);
  int func_0013E469(...);
  extern undefined D_001D3BD4;
  int func_001031C0(...);
  extern undefined4 D_00307DF8;
  int func_00103990(...);
  undefined4 uVar1;
  undefined1 local_100 [256];
  
  D_002EEAA8 = func_0009A8D0(6,D_002EEAA8);
  func_0013E469(local_100,((undefined *)&D_001D3BD4),D_002EEAA8 + 1);
  uVar1 = func_001031C0(D_00307DF8,local_100);
  func_00103990(uVar1,0);
  return;
}

unsigned char __fastcall func_0002D4F0(int *param_1)
{
  extern int D_00307D08;
  extern int D_00313B20;
  extern int D_00313AEC;
  extern int D_00313B5C;
  extern int D_003080FC;
  extern int D_00307DF8;
  extern char D_001D3BE4;
  char func_000B5850(void);
  unsigned int func_0009F820(void);
  char func_00089430(void);
  void func_00089320(char, char);
  void func_0002D450(int);
  void func_00110330(int, unsigned char);
  char *p;

  if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313B20 * 0x18) != 0 &&
      func_000B5850() != 0 && (func_0009F820() & 0x200) != 0) {
    if (func_00089430() != 0) {
      *param_1 = 0x50;
      param_1[0xc6] = 2;
      return 1;
    }
    if (*(char *)((char *)param_1 + 0x1ac) != 0) {
      *param_1 = 0x54;
      param_1[0xc6] = 0x4e;
      return 1;
    }
    *param_1 = 0x4e;
    return 1;
  }
  if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313AEC * 0x18) != 0 &&
      func_000B5850() != 0 && (func_0009F820() & 8) != 0) {
    if (*(char *)((char *)param_1 + 0x1ac) != 0) {
      *param_1 = 0x54;
      param_1[0xc6] = 2;
      return 1;
    }
    if (func_00089430() != 0) {
      *param_1 = 0x50;
      param_1[0xc6] = 0x52;
      return 1;
    }
    *param_1 = 0x52;
    return 1;
  }
  if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313B5C * 0x18) != 0 &&
      func_000B5850() != 0 && (func_0009F820() & 0x40) != 0) {
    p = (char *)D_003080FC;
    if (p == 0 || p[0x13] == 0x30 || p[0x13] == 0x35 || (p[0x13] == 5 && p[0x15] == 3)) {
      param_1 = *(int **)(D_00307DF8 + 0x110);
      func_00089320(0, 1);
      func_0002D450((int)&D_001D3BE4);
      func_00110330(param_1[0x84], 0);
      *(unsigned char *)((char *)param_1 + 0x1ac) = 0;
      *param_1 = 0x57;
      return 1;
    }
  }
  return 0;
}

#pragma optimize("s", on)
#pragma optimize("y", off)
void func_0002D7B0(int param_1, char param_2) {
extern int func_0002D720(...),func_0006F7F0(...),func_0009C1F0(...),func_00089430(...),func_00089320(...),func_00103210(...),func_00102E80(...),func_00099EB0(...),func_00088A50(...),func_000120B0(...),func_00110330(...),func_0013E469(...); extern float func_000A2310(...);
extern unsigned char D_002ED780,D_002EDBF4,D_002EDBF5,D_00307D6C; extern unsigned D_002EDBE0,D_002EDBE4,D_002EDBE8,D_003268B0; extern float D_002EDBF0; extern int D_00307DF8,D_001D3BE4,D_001D3BCC;
char local[256]; int *obj=*(int **)(param_1+0x110); int i;
if(*(char*)(param_1+0x15)==0x15&&*obj!=0x43){if(*obj==0x3f)func_0002D720(param_1);*(char*)(obj+0x6b)=0;func_00110330(obj[0x84],0);func_0006F7F0(2,0x3e19999a);
for(i=0;i<0x118;i++)((int*)&D_002ED780)[i]=obj[i];
D_002EDBF0=func_000A2310(param_1+0x64);D_002EDBE0=*(unsigned short*)(**(int**)(*(int*)(param_1+0x84)+0x10)+0x18);D_002EDBE4=*(unsigned short*)(**(int**)(*(int*)(param_1+0x84)+0x10)+0x1a);D_002EDBE8=*(int*)(**(int**)(*(int*)(param_1+0x84)+0x10)+0x1c);D_002EDBF4=*(int*)(**(int**)(*(int*)(param_1+0x84)+0x10)+0x10)==2;
i=*(int*)(param_1+0x2c);if(*(unsigned char*)(i+0x22)==D_003268B0)obj[0xc5]=*(int*)(i+0x124);else{int*p=*(int**)(i+0x28);while(p){if((*(unsigned char*)((char*)p+6)&8)==0&&*(unsigned char*)(*p+0x22)==D_003268B0){obj[0xc5]=*(int*)(*p+0x124);break;}p=(int*)p[3];}}
func_0009C1F0(*(int*)(param_1+0x2c),0);D_002EDBF5=func_00089430();func_00089320(0,1);func_0013E469(local,&D_001D3BCC,*(int*)(D_00307DF8+0xc),&D_001D3BE4);i=func_00103210(local);if(i)func_00102E80(i);func_00099EB0(param_1+0x170);func_00088A50(*(int*)(param_1+0x2c),0x3f800000,1);obj[0xc4]=*obj;*obj=0x43;if(param_2){func_000120B0(param_1+0x150,0xbf800000,0,1);func_00110330(*(int*)(param_1+0x2c),0);}*(char*)(param_1+0x14)=0;D_00307D6C=1;obj[0xc6]=0;}}
#pragma optimize("", on)

void func_0002D9B0(int param_1, int param_2)
{
  int func_0009C7A0(...);
  extern undefined D_001D2A60;
  extern undefined D_001D2A30;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x110);
  if (*piVar1 == 0x43) {
    piVar1[0xc6] = 1;
    piVar1[199] = param_2;
    iVar2 = func_0009C7A0(param_1,((undefined *)&D_001D2A60),1);
    piVar1[200] = iVar2;
    piVar3 = (int *)func_0009C7A0(param_1,((undefined *)&D_001D2A30),1);
    piVar1[0xcd] = *piVar3;
  }
  return;
}

