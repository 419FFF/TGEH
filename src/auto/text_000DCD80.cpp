/* 15 functions from 0x000DCD80 to 0x000DDB21, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000DCD80(void) { extern int D_0031EA74,D_0031FC1C,D_0031EA90,D_0031FB50,D_0031EA8C,D_0031FC64,D_0031FC68; extern float D_0031EA78,D_001D5D00; extern char D_0031EC00,D_001DB610; int func_0012E780(...),func_00103210(...),func_00103990(...); int idx=(signed char)D_0031FC1C; char *p=&D_0031EC00+idx*0x310; int a=*(int*)(p+0x254); float b=*(float*)(p+0x258); int local0=D_0031EA74; float local1=D_0031EA78; int args[2]={a,*(int*)&b}; float result=(float)func_0012E780(&args[0],&local0); if(result<D_001D5D00 && b<D_0031EA78 && D_0031EA90){D_0031FC64=D_0031EA74;D_0031FC68=0;D_0031FB50=(int)p;D_0031EA8C=(int)p;func_00103990(func_00103210(&D_001DB610,0));} }

void func_000DCFC0(int param_1, int param_2)
{
  int func_0012E6D0(...);
  int func_0012F610(...);
  int func_0012E5F0(...);
  undefined1 local_c [12];
  
  func_0012E6D0(local_c,param_1 + 0x170,param_1 + 0x80);
  func_0012F610(local_c,param_1 + 0x10);
  func_0012E5F0(param_1 + 0x254,param_2 + 0x30,local_c);
  func_0012E6D0(local_c,param_1 + 0x200,param_1 + 0x80);
  func_0012F610(local_c,param_1 + 0x10);
  func_0012E5F0(param_1 + 0x260,param_2 + 0x30,local_c);
  return;
}

#pragma optimize("y", off)
void func_000DD050(void) { extern char D_0031FC1C,D_0031F850,D_0031E6C0; extern int D_0031F844; extern float D_00307DB4,D_0031E6C4,D_001D27EC; int func_00110060(...),func_0012FCF0(...),func_001105E0(...),func_000D5250(...); volatile char local[0x4c]; if(D_0031FC1C==5){func_00110060(D_0031F844,(char*)local);func_0012FCF0((char*)local,0x3d4ccccd);func_001105E0(D_0031F844,(char*)local,0);func_000D5250(D_0031F844,&D_0031F850); if(D_00307DB4-D_0031E6C4>D_001D27EC)D_0031E6C0=1;} }
#pragma optimize("", on)
int func_000DD0D0(void) { extern float D_00307DB4,D_0031E6CC,D_0031E6C8,D_001D27FC; int func_000A27E0(...); long double v=((long double)D_00307DB4-D_0031E6CC)/D_0031E6C8*D_001D27FC; int r=v>D_001D27FC; if(r)v=100.0; func_000A27E0((float)v); return r; }

void func_000DD1F0(void)
{
  int func_000D5290(...);
  extern undefined D_0031E760;
  extern undefined D_0031E7F0;
  extern undefined D_0031E890;
  extern undefined D_0031E930;
  extern undefined D_0031EC00;
  undefined *puVar1;
  int iVar2;
  
  func_000D5290(((undefined *)&D_0031E760));
  func_000D5290(((undefined *)&D_0031E7F0));
  func_000D5290(((undefined *)&D_0031E890));
  func_000D5290(((undefined *)&D_0031E930));
  puVar1 = ((undefined *)&D_0031EC00);
  iVar2 = 5;
  do {
    func_000D5290(puVar1);
    puVar1 = puVar1 + 0x310;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

void func_000DD240(void)
{
  int func_000A2780(...);
  int func_00136450(...);
  int func_00103210(...);
  extern undefined D_001DB640;
  int func_00102E80(...);
  extern undefined D_001DB628;
  int func_0002DF20(...);
  extern undefined4 D_00307DF8;
  extern undefined4 D_002EECA0;
  int func_000A29C0(...);
  int func_000A2840(...);
  extern undefined4 D_00312D8C;
  int func_00110330(...);
  extern undefined D_0031E6C0;
  int func_00107C40(...);
  extern undefined4 D_003251B4;
  extern undefined4 D_00308158;
  int func_00110760(...);
  extern undefined4 D_0031FC38;
  extern undefined4 D_0031FC3C;
  extern undefined4 D_0031FC40;
  extern undefined4 D_0033116C;
  extern undefined4 D_0031FC44;
  int func_00124AD0(...);
  int func_0009C590(...);
  extern undefined D_001D7908;
  int func_0009D3E0(...);
  int func_0009D640(...);
  int func_0008F610(...);
  int func_0008F740(...);
  int func_0010F8A0(...);
  int func_0011BE30(...);
  int func_000F8B60(...);
  int func_000F9700(...);
  int func_000B54C0(...);
  int func_000A2E30(...);
  undefined4 uVar1;
  
  func_000A2780(0x39,0,0);
  func_00136450();
  uVar1 = func_00103210(((undefined *)&D_001DB640));
  func_00102E80(uVar1);
  uVar1 = func_00103210(((undefined *)&D_001DB628));
  func_00102E80(uVar1);
  func_0002DF20(D_00307DF8);
  D_002EECA0 = 1;
  func_000DD1F0();
  func_000A29C0(0);
  func_000A2840();
  if (D_00312D8C != 0) {
    func_00110330(D_00312D8C,1);
  }
  if (D_0031E6C0 != '\0') {
    func_00107C40(D_003251B4,D_00308158,D_00308158);
  }
  func_00110760(D_0031FC38);
  func_00110760(D_0031FC3C);
  func_00110760(D_0031FC40);
  D_0033116C = D_0031FC44;
  if (D_00312D8C != 0) {
    func_00110330(D_00312D8C,1);
  }
  func_00124AD0();
  uVar1 = func_0009C590(((undefined *)&D_001D7908));
  func_0009D3E0(uVar1);
  uVar1 = func_0009C590(((undefined *)&D_001D7908));
  func_0009D640(uVar1);
  func_0008F610(1);
  func_0008F740(1);
  func_0010F8A0();
  func_0010F8A0();
  func_0010F8A0();
  func_0011BE30();
  func_0011BE30();
  func_0011BE30();
  func_000F8B60(1,0);
  func_000F9700();
  func_000B54C0(0);
  func_000A2E30(0);
  return;
}

#pragma optimize("y", on)
int func_000DD4A0(int a,int b,int c,int *out){extern int D_0031FC34,D_003268B0,D_001DB670,D_001DB660;int func_0011B4F0(...);int n=0;int node=*(int*)(*(int*)(D_0031FC34+0x2c)+0x28);while(node){if(((*(unsigned char*)(node+6)&0x18)==0)&&*(unsigned char*)(*(int*)node+0x22)==D_003268B0&&func_0011B4F0(&D_001DB670,*(int*)(*(int*)node+0x38))&&func_0011B4F0(&D_001DB660,*(int*)(*(int*)node+0x38)))out[n++]=*(int*)node;node=*(int*)(node+0xc);}return n;}
void func_000DD510(void) { extern int D_003080AC; extern float D_0031E9C0,D_001D27B8,D_0031E9C4; int func_000A2780(...); if(D_003080AC!=2){ long double v=(long double)D_0031E9C0; if(v<(long double)D_001D27B8)v=D_001D27B8; func_000A2780(0x39,1,(float)(v/D_0031E9C4)); } }

void func_000DD770(int p,int q){int func_0012E6D0(...);int func_0012E5F0(...);int func_000D5170(...);int func_000DCB30(...);volatile double d=(double)*(float*)(p+0x214)-(double)*(float*)(p+0x44)-(double)*(float*)(*(int*)(p+0x1d4)+0x14);float f=(float)-d;int local[3]={0};*(float*)&local[1]=f;int t[3],u[3];func_0012E6D0(local,q+0x254,q+0x40);func_0012E5F0(t,q+0x40,local);func_0012E5F0(u,p+0x40,t);func_000D5170(p+0x10,*(int*)(p+4));func_000DCB30();}

