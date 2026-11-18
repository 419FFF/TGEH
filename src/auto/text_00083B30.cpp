/* 22 functions from 0x00083B30 to 0x0008474B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00083CE0(void) { extern unsigned int D_002EAF80, D_001E4774; D_002EAF80=(unsigned int)0L; D_001E4774=(unsigned int)0L; }

void func_00083D00(int param_1, int param_2)
{
  int func_00116A90(...);
  int func_0011DED0(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00116A90(0x10,1,0);
  *(undefined4 **)(param_1 + 0x17c) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(param_2 + 0x11c) = 4;
  *(undefined4 *)(param_2 + 0x120) = 5;
  func_0011DED0(param_1);
  return;
}

undefined4 func_00083D60(int param_1)
{
  return **(undefined4 **)(param_1 + 0x17c);
}

void func_00083D70(void) {
    extern int D_001D68D8;
    extern void func_00078C90(void);
    extern void func_00083D00(void);
    extern void func_00079D10(void);
    extern void func_00078E60(void);
    extern void func_00092810(void);
    extern void func_00083D60(void);
    extern void func_0011D000(...);
    extern void func_0011D270(...);
    extern void func_0011D290(...);
    extern void func_0011D2B0(...);
    extern void func_0011D2D0(...);
    extern void func_0011D2F0(...);
    func_0011D000(func_00078C90, &D_001D68D8);
    func_0011D270(func_00083D00, &D_001D68D8);
    func_0011D290(func_00079D10, &D_001D68D8);
    func_0011D2B0(func_00078E60, &D_001D68D8);
    func_0011D2D0(func_00092810, &D_001D68D8);
    func_0011D2F0(func_00083D60, &D_001D68D8);
}

void func_00083DD0(void) {
    extern int D_001D68D8;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D68D8);
}

void func_00083FF0(int p) {
 extern volatile int D_002FBBDC[], D_002FBBE0[], D_002FBBE4[], D_002FBBE8[];
 int func_00110760(int);
 int i=*(int*)(p+0xe0), n;
 if (i != -1) {
   --D_002FBBDC[i*5];
   n=D_002FBBDC[i*5];
   if (!n) {
     if (i != 4 && i != 0x18) {
       func_00110760(D_002FBBE0[i*5]);
       func_00110760(D_002FBBE4[i*5]);
     }
     func_00110760(D_002FBBE8[i*5]);
   }
 }
}

undefined4 func_00084080(int param_1)
{
  extern undefined D_002FBBD8;
  return *(undefined4 *)(((undefined *)&D_002FBBD8) + param_1 * 0x14);
}

void func_00084090(int id, unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
 extern int D_002FBBE8[];
 int func_0011F8D0(int, void*);
 int obj=D_002FBBE8[id*5];
 if (obj != 0) {
   volatile unsigned int local[9];
   local[0]=0;local[1]=0;local[2]=0;local[3]=0;local[4]=0;local[5]=0;local[6]=0;local[7]=0;local[8]=0;
   local[0]=0;local[5]=0;
   local[6]=b;local[2]=c;local[1]=a;local[7]=d;
   func_0011F8D0(obj,(void*)local);
 }
}

void func_000841F0(int id, char* p) {
 extern int D_002FBBD8[], D_002FBBE8[];
 extern float D_001D2B64;
 int func_0010FB70(int,int,int), func_0011FD20(void), func_0011F920(int);
 int func_001105E0(int,void*,int), func_00110000(int), func_00095B30(int);
 int func_001206B0(void), func_0011F960(int), func_00110420(int,int);
 int ix=id*5, obj=D_002FBBD8[ix];
 if (obj && id!=4 && id!=0x18) {
   int model=D_002FBBE8[ix];
   func_0010FB70(obj,model,3); func_0011FD20();
   int token=func_0011F920(obj);
   int x=*(int*)(p+0x30), y=*(int*)(p+0x34);
   *(float*)(p+0x30)=*(float*)(p+0x30)-D_001D2B64;
   *(float*)(p+0x34)=*(float*)(p+0x34)-D_001D2B64;
   func_001105E0(obj,p,0); func_00110000(obj);
   *(int*)(p+0x30)=x; *(int*)(p+0x34)=y;
   func_00095B30(obj); func_001206B0(); func_0011F960(token);
   func_00110420(obj,model);
 }
}

void func_00084390(void) {
    int func_00136510(...);
    func_00136510(-1082130432, 1065353216, -1082130432, 1065353216);
}

void func_000843B0(int id, char* p, float a,float b,float c,float d,float e,float f,float g) {
 extern int D_002FBBD8[]; void func_00084110(float,float,float,float,float,float,float); void func_000841F0(int,char*); void func_000842B0(int,char*);
 if(D_002FBBD8[id*5]) { func_00084110(a,b,c,d,e,f,g);func_000841F0(id,p);func_000842B0(id,p);int func_00136510(float,float,float,float);func_00136510(-1,1,-1,1); }
}

int func_00084420(int obj,float *out1,float *out2) { extern float D_001D68F0; extern int D_002FBBD8; int func_00110170(...); int local=0; int id=*(int*)(obj+0xe0); if(id==-1)return 1; int table=*(int*)(D_002FBBD8+id*20); int *node=*(int**)(table+0x28); while(node){func_00110170(*node);if(id==0x16||id==0x17)*(float*)(*node+0xd8)*=D_001D68F0; if(local<*(float*)(*node+0xd8))local=*(float*)(*node+0xd8);node=(int*)node[3];} float x=*(float*)&local;out1[0]=out1[1]=out1[2]=-x;out2[0]=out2[1]=out2[2]=x;return 1;}

void func_000845C0(void)
{
  extern undefined4 D_002FBBD4;
  int func_00110760(...);
  extern undefined4 D_002FBBD0;
  int func_00122AB0(...);
  int func_001103C0(...);
  extern undefined4 D_002FC150;
  D_002FBBD4 = D_002FBBD4 + -1;
  if (D_002FBBD4 == 0) {
    func_00110760(D_002FBBD0);
    func_00122AB0();
    func_001103C0(D_002FC150);
  }
  return;
}

void func_000845F0(int a,int b,int c,int d,int e,int f,int g,int h,int *src,int j) { extern unsigned int D_002FDD60; extern int D_002FC160; if(D_002FDD60<0x40){int *p=(int*)((char*)&D_002FC160+D_002FDD60*0x70);p[0]=a;p[1]=b;p[2]=c;p[3]=d;p[4]=e;p[5]=f;p[6]=g;p[7]=h;for(int i=0;i<16;i++)p[8+i]=src[i];p[24]=j;D_002FDD60++;}}

void func_00084740(void) {
    extern int D_002FDD60;
    D_002FDD60 = 0;
}
// Prototypes
void func_00110370(undefined1 local_1c[4]);
void func_00122A70();
void func_001229B0(undefined *ptr);
void func_0012F120(undefined *ptr);

// Globals
extern undefined D_001D68F4;
extern undefined D_002FBBD4;
extern undefined D_002FC150;
extern undefined D_002FBBD8;
extern undefined D_002FBBDC;
extern undefined D_002FBBD0;
extern undefined D_002FBB90;
extern undefined D_002FBBB8;
