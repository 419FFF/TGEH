/* 5 functions from 0x000AA9D0 to 0x000AB6D5, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_000AA9D0(void)
{
  extern undefined4 D_00324AFC;
  extern undefined4 D_0031312C;
  extern undefined4 D_003130E8;
  extern undefined4 D_002EEC00;
  int func_00110330(...);
  extern undefined4 D_00307DF8;
  int func_0011FED0(...);
  extern undefined4 D_003130EC;
  extern undefined4 D_001D27B0;
  extern undefined4 D_00329330;
  int func_001309B0(...);
  extern undefined D_00329340;
  extern undefined4 D_00313B60;
  int func_00110420(...);
  int func_00110480(...);
  extern undefined4 D_00313098;
  int func_00120750(...);
  int func_00088610(...);
  int func_001206B0(...);
  int func_000688D0(...);
  int func_00133F30(...);
  int func_0012F120(...);
  int func_00136480(...);
  int func_001364D0(...);
  extern undefined4 D_001D7134;
  extern undefined4 D_001D2D4C;
  int func_001378E0(...);
  int func_00137A20(...);
  extern undefined4 D_00332738;
  extern undefined4 D_0033273C;
  extern undefined4 D_00332740;
  int func_00137A70(...);
  int func_00137AB0(...);
  volatile char pad[200];
  pad[0]=0;
  int iVar1;
  int iVar2;
  float local_128,local_124,local_120;
  undefined4 local_118,local_114,local_110,local_10c;
  float local_108,local_104,local_100,local_f8,local_f4,local_f0,local_e8,local_e4,local_e0,local_d8,local_d4,local_d0,local_c4;
  undefined4 local_c0,local_bc,local_b8;
  undefined1 local_b0[48];
  float local_80,local_7c,local_78;
  undefined4 local_68,local_64,local_60,local_50,local_40,local_3c,local_38,local_24,local_20,local_1c;
  if ((D_00324AFC == D_0031312C) || (D_00324AFC == D_003130E8)) {
    if (D_002EEC00 == 4) func_00110330(*(undefined4 *)(D_00307DF8 + 0x2c),1);
    local_c0=0; local_bc=0; local_b8=0x3f800000;
    func_0011FED0(D_003130EC,local_b0);
    local_128=*(float*)D_003130EC; local_124=((float*)D_003130EC)[1];
    local_120=(((float*)D_003130EC)[6]-*(float*)&D_001D27B0)+((float*)D_003130EC)[2];
    func_0011FED0(D_003130EC,local_b0);
    local_128+=local_80; D_00329330=1; local_124+=local_7c; local_120+=local_78;
    func_001309B0(&D_00329340,&local_c0,&local_128);
    iVar1=*(int*)(D_0031312C+0xe0); iVar2=**(int**)(D_00313B60+0x2c);
    if(iVar2!=iVar1){func_00110420(iVar2,D_00313B60);func_00110480(iVar1,D_00313B60,8);}
    func_00110330(*(undefined4*)(D_00313098+0xe0),0);func_00120750(D_00313B60,0);func_00088610();func_001206B0();
    func_00110330(*(undefined4*)(D_00313098+0xe0),1);
    if(iVar2!=iVar1){func_00110420(iVar1,D_00313B60);func_00110480(iVar2,D_00313B60,8);}
    func_000688D0();
    local_68=0;local_64=0;local_60=0;local_50=0;local_40=0;local_3c=1;local_38=0;local_20=6;local_24=1;local_1c=2;
    func_00133F30(&local_68);func_0012F120(local_b0);func_00136480(D_00313B60,local_b0);func_001364D0(local_b0);
    local_f8=*(float*)&D_001D7134/ *(float*)(D_00313B60+0xe4);local_108=-local_f8;
    local_104=(*(float*)&D_001D2D4C/ *(float*)(D_00313B60+0xe8))* *(float*)&D_001D7134;
    local_e8=(*(float*)&D_001D2D4C/ *(float*)(D_00313B60+0xe4))* *(float*)&D_001D7134;
    local_e4=*(float*)&D_001D7134/ *(float*)(D_00313B60+0xe8);
    local_118=0x3f000000;local_114=0x3f000000;local_110=0x3f800000;local_10c=0x3f800000;
    local_f4=local_104;local_d8=local_f8;local_d4=local_e4;
    func_001378E0(3,3);func_00137A20();
    D_00332738=local_f8;D_0033273C=local_f4;D_00332740=100000.0f;func_00137A70(&local_118);
    func_00137A20();D_00332738=local_108;D_0033273C=local_104;D_00332740=100000.0f;func_00137A70(&local_118);
    func_00137A20();D_00332738=local_d8;D_0033273C=local_d4;D_00332740=100000.0f;func_00137A70(&local_118);
    func_00137A20();D_00332738=local_108;D_0033273C=local_104;D_00332740=100000.0f;func_00137A70(&local_118);
    func_00137A20();D_00332738=local_e8;D_0033273C=local_e4;D_00332740=100000.0f;func_00137A70(&local_118);
    func_00137A20();D_00332738=local_d8;D_0033273C=local_d4;D_00332740=100000.0f;func_00137A70(&local_118);
    func_00137AB0();func_000688D0();D_00329330=0;
    func_0011FED0(D_00313B60,local_b0);func_00136480(D_00313B60,local_b0);func_0012F120(local_b0);func_001364D0(local_b0);
    local_100=local_120;local_d0=local_120;local_104=local_124-((float*)D_003130EC)[5];local_f0=local_120;
    local_e0=local_120;local_108=local_128-((float*)D_003130EC)[4];local_f4=local_124+((float*)D_003130EC)[5];
    local_e8=local_128+((float*)D_003130EC)[4];local_f8=local_108;local_e4=local_104;local_d8=local_e8;local_d4=local_f4;local_c4=local_f4;
    func_001378E0(3,3);func_00137A20();D_00332738=local_f8;D_0033273C=local_f4;D_00332740=local_f0;func_00137A70(&local_118);
    func_00137A20();D_00332738=local_108;D_0033273C=local_104;D_00332740=local_100;func_00137A70(&local_118);
    func_00137A20();D_00332738=local_d8;D_0033273C=local_d4;D_00332740=local_d0;func_00137A70(&local_118);
    func_00137A20();D_00332738=local_108;D_0033273C=local_104;D_00332740=local_100;func_00137A70(&local_118);
    func_00137A20();D_00332738=local_e8;D_0033273C=local_e4;D_00332740=local_e0;func_00137A70(&local_118);
    func_00137A20();D_00332738=local_d8;D_0033273C=local_d4;D_00332740=local_d0;func_00137A70(&local_118);
    func_00137AB0();func_000688D0();
    if(D_002EEC00==4)func_00110330(*(undefined4*)(D_00307DF8+0x2c),0);
  }
}

void func_000AAFC0(void)
{
    extern int D_00313440, D_00313444, D_00313448, D_0031344C, D_00313450, D_00313454;
    extern char D_001D80B8, D_001D80A8, D_001D8098, D_001D8088, D_001D8080, D_001D8074, D_001D806C, D_001D805C, D_001D8054, D_001D8044, D_001D8038, D_001D8028, D_001D8018, D_001D8008, D_001D7FFC, D_001D7FF4, D_001D7FE0, D_001D7FD8, D_001D7FD0, D_001D7FC4, D_001D7FB8, D_001D7FB0;
    int func_00100540(...);
    int func_000F91D0(...);
    int func_0009C590(...);
    int func_0009D3E0(...);
    int* func_000F9280(...);
    int func_000F93A0(...);
    D_00313440 = func_00100540(&D_001D80B8);
    *(int*)(func_000F91D0(&D_001D80A8) + 0x290) = 1;
    *(int*)(func_000F91D0(&D_001D8098) + 0x290) = 1;
    *(int*)(func_000F91D0(&D_001D8088) + 0x290) = 1;
    *(int*)(func_000F91D0(&D_001D8080) + 0x290) = 1;
    *(int*)(func_000F91D0(&D_001D8074) + 0x290) = 1;
    *(int*)(func_000F91D0(&D_001D806C) + 0x290) = 1;
    *(int*)(func_000F91D0(&D_001D805C) + 0x290) = 1;
    *(int*)(func_000F91D0(&D_001D8054) + 0x290) = 1;
    *(int*)(func_000F91D0(&D_001D8044) + 0x290) = 1;
    *(int*)(func_000F91D0(&D_001D8038) + 0x290) = 1;
    *(int*)(func_000F91D0(&D_001D8028) + 0x290) = 1;
    func_0009D3E0(func_0009C590(&D_001D8018));
    D_00313450 = *func_000F9280(&D_001D8008);
    D_0031344C = func_000F91D0(&D_001D7FFC);
    D_00313448 = func_000F91D0(&D_001D7FF4);
    D_00313444 = *func_000F9280(&D_001D7FE0);
    func_000F93A0(&D_001D7FD0, &D_001D7FD8);
    func_000F93A0(&D_001D7FD0, &D_001D7FC4);
    func_000F93A0(&D_001D7FD0, &D_001D7FB8);
    D_00313454 = func_0009C590(&D_001D7FB0);
}

void func_000AB120(void) {
    extern int D_00313440;
    int func_00100730(...);
    func_00100730(D_00313440);
}

void func_000AB130(void) {
    extern int D_00313440;
    int func_001006C0(...);
    func_001006C0(D_00313440);
}

