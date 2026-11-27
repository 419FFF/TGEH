/* 11 functions from 0x000D2040 to 0x000D2FEB, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern unsigned D_00311524, D_00313B60, D_00318D14, D_00318D10, D_0031A9B0, D_0031A9C4, D_0031A9AC, D_0031A9E8, D_0031A9D8;
extern char D_0031A9F6, D_0031A9F4, D_0031A9F5, D_0031AC49, D_00318D1C, D_00318E30, D_0031A9B4, D_0031A9E0, D_0031A954, D_0031A955, D_0031A9E4, D_0031151E, D_001DAA80, D_001DAA94;

void func_000D2A00(void)
{
  int func_00136450(...);
  int func_0002DF20(...);
  extern undefined4 D_00307DF8;
  int func_0005CCC0(...);
  int func_000A29C0(...);
  int func_000A2840(...);
  int func_001105E0(...);
  extern undefined4 D_0031AD00;
  extern undefined D_0031AD50;
  extern undefined4 D_0031ADF0;
  extern undefined D_0031AE40;
  extern undefined4 D_0031B7E8;
  extern undefined D_0031B7F0;
  int func_00110000(...);
  int func_0009C590(...);
  extern undefined D_001D7BD4;
  int func_0009D3E0(...);
  int func_0009D640(...);
  extern undefined D_0031ACA0;
  int func_00107C40(...);
  extern undefined4 D_003251DC;
  extern undefined4 D_00308158;
  int func_00110760(...);
  extern undefined4 D_0031B844;
  extern undefined4 D_0033116C;
  extern undefined4 D_0031B848;
  int func_00124AD0(...);
  int func_00101110(...);
  extern undefined4 D_00313B54;
  int func_001052A0(...);
  int func_000687F0(...);
  undefined4 uVar1;
  
  func_00136450();
  func_0002DF20(D_00307DF8);
  func_0005CCC0(1);
  func_000A29C0(0);
  func_000A2840();
  func_001105E0(D_0031AD00,((undefined *)&D_0031AD50),0);
  func_001105E0(D_0031ADF0,((undefined *)&D_0031AE40),0);
  func_001105E0(*(undefined4 *)(D_0031B7E8 + 0x2c),((undefined *)&D_0031B7F0),0);
  func_00110000(D_0031AD00);
  func_00110000(D_0031ADF0);
  uVar1 = func_0009C590(((undefined *)&D_001D7BD4));
  func_0009D3E0(uVar1);
  uVar1 = func_0009C590(((undefined *)&D_001D7BD4));
  func_0009D640(uVar1);
  if (D_0031ACA0 != '\0') {
    func_00107C40(D_003251DC,D_00308158,D_00308158);
  }
  func_00110760(D_0031B844);
  D_0033116C = D_0031B848;
  func_00124AD0();
  func_00101110(D_00313B54);
  func_001052A0();
  func_000687F0();
  return;
}

int func_000D2AF0(void* o) { extern float _D_001DABA0,_D_001DAB9C; extern char _D_0031B094[],_D_0031B3C4[]; int _func_0009A8A0(...); volatile char done=0; int count=10; float f=0; while(count-- > 0 && !done) { f=_D_001DAB9C-_func_0009A8A0()*_D_001DABA0; done=1; } *(float*)((char*)o+0xdc)=f; return done; }

void func_000D2BC0(void)
{
  extern char D_0031B12C, D_001D2A60;
  extern float D_001D27EC, D_001DABA4;
  int func_000A29C0(...);
  int func_0012ED50(int, int, int);
  int func_0012E5C0(...);
  double func_0012E780(...);
  char func_000D4FB0(int, char *, int, int, int, int);
  int func_0012E700(...);
  double func_0012E970(...);
  int func_00110060(...);
  int func_001105E0(...);
  int *puVar1;
  double lVar2;
  char local_69;
  float local_68;
  char local_60[16];
  char local_50[48];
  int local_20;
  int local_1c;
  int local_18;

  local_69 = '\0';
  func_000A29C0(1);
  puVar1 = (int *)&D_0031B12C;
  do {
    if (*(char *)(puVar1 + 0xe) != '\0') {
      switch (*(char *)(puVar1 + 0x1a)) {
      case 0:
        if (*(unsigned char *)((int)puVar1 + 0x69) == 0) {
          *(char *)(puVar1 + 0x1a) = 1;
        }
        else {
          *(char *)((int)puVar1 + 0x69) = *(char *)((int)puVar1 + 0x69) - 1;
        }
        break;
      case 1:
        if (*(char *)(puVar1 + 0x11) == '\0') {
          local_68 = *(float *)&puVar1[0xd];
        }
        else {
          local_68 = *(float *)&puVar1[0xd] * D_001D27EC;
        }
        func_00110060(puVar1[-0x27], local_50);
        func_0012ED50((int)local_60, (int)(puVar1 + 9), *(int *)&local_68);
        func_0012E5C0(&local_20, local_60);
        func_001105E0(puVar1[-0x27], local_50, 0);
        lVar2 = func_0012E780(&local_20, puVar1 - 2);
        if ((puVar1[1] == 0) || (puVar1[1] == 1)) {
          float f = (float)lVar2;
          local_69 = func_000D4FB0((int)(puVar1 - 0x27), &D_001D2A60, *(int *)&f, 0x41c80000, 1, 0x3e4ccccd);
        }
        if (local_69 != '\0') {
          puVar1[-2] = local_20;
          puVar1[-1] = local_1c;
          *puVar1 = local_18;
        }
        func_0012E700(local_60, &local_20, puVar1 + 5);
        lVar2 = func_0012E970(local_60);
        if (D_001DABA4 < lVar2) {
          *(char *)(puVar1 + 0xe) = 0;
        }
      }
    }
    puVar1 = puVar1 + 0x44;
  } while ((int)puVar1 < 0x43f8);
}

int func_000D2D40(int key) {
 extern int _D_0031B3C0[]; extern char _D_0031B3C4[];
 int i=0; int* p=_D_0031B3C0;
 do { if(key==*p) return (signed char)_D_0031B3C4[i<<6]; p+=16; ++i; } while((int)p<0x4408);
 return -1;
}

unsigned char __fastcall func_000D2D70(void* p,int a,int b) {
 extern float _D_001D27B8,_D_001D27B0;
 *(char*)((char*)p+0xe0)=1;
 if (*(char*)((char*)p+a*8+0xe4)) {
   if (*(float*)((char*)p+a*8+0xe8) <= _D_001D27B8) { *(char*)((char*)p+a*8+0xe4)=0; return 1; }
   *(float*)((char*)p+a*8+0xe8)-=_D_001D27B0; return 0;
 }
 if (*(char*)((char*)p+b*8+0xe4)) {
   if (*(float*)((char*)p+b*8+0xe8) <= _D_001D27B8) { *(char*)((char*)p+b*8+0xe4)=0; return 1; }
   *(float*)((char*)p+b*8+0xe8)-=_D_001D27B0;
 }
 return 0;
}

void func_000D2ED0(void* obj,void* out) {
 extern char _D_0031AF24[],_D_0031B0A4[],_D_0031AF14[];
 extern float _D_001D29FC,_D_001DABB0,_D_001D27B8,_D_001DABAC,_D_001DABA8;
 int _func_0009A8A0(...); void _func_0012FE20(...);
 char *p=_D_0031AF24; int i=0;
 while (*p != 0) { p += 0x18; ++i; if (p >= _D_0031B0A4) break; }
 _D_0031AF24[i*0x18]=1; *(char*)((char*)obj+4)=5; *(int*)((char*)obj+0x3c)=0;
 float v=(float)_func_0009A8A0()*_D_001D29FC-_D_001DABB0; *(float*)((char*)obj+0x38)=v;
 if (v >= _D_001D27B8) v += _D_001DABA8; else v += _D_001DABAC;
 *(float*)((char*)obj+0x38)=v;
 _func_0012FE20(out,0,0);
 for(int j=0;j<4;j++)((int*)out)[12+j]=((int*)(_D_0031AF14+i*0x18))[j];
}

void func_000D2F90(void* param_1) {
 int func_00110060(...); extern int D_0031ACB0;
 int func_0012F610(...); extern char D_0031B870;
 int func_0012E5F0(...); extern char D_0031AE30;
 char local[80];
 func_00110060(D_0031ACB0,local+16);
 *(unsigned int*)(local+12)=0;
 *(unsigned int*)(local+16)=0xc38c0000;
 *(unsigned int*)(local+20)=0xc2f00000;
 func_0012F610(local+12,&D_0031B870);
 func_0012E5F0(param_1,&D_0031AE30,local+12);
}

