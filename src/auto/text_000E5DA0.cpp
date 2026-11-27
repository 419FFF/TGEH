/* 10 functions from 0x000E5460 to 0x000E6192, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000E5DA0(void) { extern char D_001D7BE0; extern int D_003227F0,D_00322820; int func_0009CBE0(...); int func_00116FB0(...); int x=func_0009CBE0(&D_001D7BE0); x+=0x110; func_00116FB0(*(int*)x); D_003227F0=0; D_00322820=0; }

void func_000E5DD0(void *a, int *b) { extern char D_001DC18C; int func_0013E469(...); int func_0009C6A0(...); int func_0009D9E0(...); int func_00110330(...); char buf[104]; int i=0; char *p=(char*)b+0x4c; do { func_0013E469(buf,&D_001DC18C,i); int x=func_0009C6A0(a,buf); if(x){func_0009D9E0(x);func_00110330(*(int*)(x+0x2c),0);*(int*)(p-8)=x;*p=0;*(int*)(p-4)=i/10;p+=16;} ++i; }while(i!=0x50); }

void func_000E5E60(void *a, char *b) { extern int D_001E57F0,D_001E583C; extern char D_001DC194; int func_0009CBE0(...); int func_0013E600(...); int *p=&D_001E57F0; char *q=b+0x350; do { int x=func_0009CBE0(*p); *(int*)(q-0x60)=x; int y=func_0013E600(*p,&D_001DC194); *q=(y!=0); ++p;q+=0x74;}while((int)p<(int)&D_001E583C); }

void func_000E5EB0(int unused, int base)
{
 int func_0009CBE0(...); void func_00110060(...),func_000A2350(...),func_000A22D0(...),func_0012F120(...),func_0009D9E0(...),func_00110330(...),func_0012E650(...),func_001105E0(...),func_00110000(...);
 float func_00131760(void);
 extern char D_001DC1A4; extern float D_001D27B0,D_001DC1A0,D_001DBF48;
 __declspec(align(16)) int v[40];
 int i, obj, t, node;
 node=func_0009CBE0(&D_001DC1A4); func_00110060(*(int*)(node+0x2c),v+24);
 v[1]=v[36]; v[2]=v[37]; v[5]=v[38]; i=0;
 do {
  obj=base+i*0x74;
  t=*(int*)(obj+0x2f0);
  if(*(int*)(t+0x84)) {
   func_000A2350(t+0x64,0x3f800000);
   func_000A22D0(*(int*)(obj+0x2f0)+0x64);
   func_0012F120(v+7);
   func_0009D9E0(*(int*)(obj+0x2f0));
   func_00110330(*(int*)(*(int*)(obj+0x2f0)+0x2c),1);
   *(int*)(obj+0x2ec)=1;
   if(i>0) *(float*)&v[5]=(float)((long double)*(float*)&v[5]+*(float*)(*(int*)(obj+0x2f0)+0x38)+*(float*)(*(int*)(obj+0x27c)+0x38));
   *(int*)(obj+0x300)=v[1]; *(int*)(obj+0x304)=v[2]; *(int*)(obj+0x308)=v[5];
   t=*(int*)(obj+0x2f0);
   v[5]=*(int*)(t+0x40); v[6]=*(int*)(t+0x44); v[7]=*(int*)(t+0x48); v[6]=0;
   func_0012E650(obj+0x300,v+3);
   v[20]=*(int*)(obj+0x300); v[21]=*(int*)(obj+0x304); v[22]=*(int*)(obj+0x308);
   func_001105E0(*(int*)(*(int*)(obj+0x2f0)+0x2c),v+7,0);
   func_00110000(*(int*)(*(int*)(obj+0x2f0)+0x2c));
   *(int*)(obj+0x2f4)=v[20]; *(int*)(obj+0x2f8)=v[21]; *(int*)(obj+0x2fc)=v[22];
   if(i!=18) {
    *(float*)(obj+0x2e4)=(func_00131760()+D_001D27B0)*D_001DC1A0;
    *(float*)(obj+0x2e0)=func_00131760();
    *(float*)(obj+0x2e8)=(func_00131760()+D_001D27B0)*D_001DBF48;
   } else {
    *(int*)(base+0xb0c)=0; *(int*)(base+0xb10)=0x461c4000; *(int*)(base+0xb08)=0;
   }
  }
  i++;
 } while(i!=19);
}

void func_000E60A0(undefined4 param_1, int param_2)
{
  int func_000F91D0(...);
  extern undefined D_001DC1C4;
  int func_00012040(...);
  extern undefined4 D_00307DF8;
  int func_00110060(...);
  int func_000E3690(...);
  int func_001100A0(...);
  int func_0012F7A0(...);
  extern undefined4 D_003227FC;
  extern undefined4 D_00322800;
  int func_0005CCC0(...);
  int func_00110420(...);
  extern undefined4 D_00313B60;
  int func_00110480(...);
  int iVar1;
  undefined4 local_14;
  undefined4 local_10[4];
  iVar1 = func_000F91D0(((undefined *)&D_001DC1C4));
  func_00012040(D_00307DF8,*(undefined4 *)(iVar1 + 0xe0));
  func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),param_2 + 0xd10);
  func_000E3690(param_2,param_2 + 0x2e0,0);
  func_001100A0(*(undefined4 *)(D_00307DF8 + 0x2c),&local_14);
  local_10[0] = *(undefined4 *)(D_00307DF8 + 0xe8);
  local_10[1] = *(undefined4 *)(D_00307DF8 + 0xec);
  local_10[2] = *(undefined4 *)(D_00307DF8 + 0xf0);
  func_0012F7A0(local_10,local_14);
  D_003227FC = local_10[0];
  D_00322800 = local_10[1];
  func_0005CCC0(5);
  *(undefined4 *)(param_2 + 0xe30) = 0xc591a000;
  *(undefined4 *)(param_2 + 0xe38) = 0xc1db3333;
  func_00110420(D_00313B60,**(undefined4 **)(D_00313B60 + 0x2c));
  func_00110480(**(undefined4 **)(*(int *)(D_00307DF8 + 0x2c) + 0x2c),D_00313B60,8);
}

