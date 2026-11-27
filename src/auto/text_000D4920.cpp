/* 19 functions from 0x000D4920 to 0x000D58BA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Vec_D54E0 { int x,y,z; };
extern int D_0031B900, D_0031B910, D_0031B950, D_0031B954, D_0031B958, D_0031B9A4, D_0031B9A8, D_0031B9AC;
extern int D_0031B864, D_0031B860, D_0031B8A0, D_0031B8A4, D_0031B8A8, D_0031B8F4, D_0031B8F8, D_0031B8FC, D_0031B8F0;
extern char D_001DAE4C, D_001DAE44, D_001D748C, D_001DAE3C, D_0031B920, D_0031B870;
extern "C" char * __cdecl strcpy(char *,const char *);
extern "C" char * __cdecl strcat(char *,const char *);
extern "C" unsigned int __cdecl strlen(const char *);
extern "C" void * __cdecl memcpy(void *,const void *,unsigned int);
extern short D_001DAE50,D_001DAE48;
extern char D_001DAE52,D_001DAE4A;

void func_000D4D90(void)
{
  extern unsigned char D_0031B164;
  extern int D_0031B494;
  int func_000D4130(...);
  int i = 0;
  int p = (int)&D_0031B164;
  do {
    if (*(unsigned char *)p != 1) {
      func_000D4130(i);
      return;
    }
    p += 0x110;
    ++i;
  } while (p < (int)&D_0031B494);
}

void func_000D4DC0(void) {
 void func_000D4D90(); char func_000D5120(); void func_00110060(int,char*);
 int func_000D56C0(...),func_0012E750(...),func_000D4920(...),func_000D2FF0(...),func_000D37F0(...),func_000B6C80(...),func_000B6BE0(...),func_000D2BC0(...),func_000D44A0(...),func_000D3300(...),func_000D36B0(...);
 char func_000D32B0(...),func_000D3880(...),func_000D3960(...);
 double func_0012E940(...),func_00131210(...);
 extern int D_0031B9B0,D_0031ACA8,D_00307DB4,D_0031ACB0,D_0031B834,D_0031B830,D_0031B838;
 extern char D_001DADE8,D_0031ADAC,D_0031ACA0; extern signed char D_0031B7C8;
 extern float D_001D27EC,D_0031AD40,D_001DADB0,D_001D35F8;
 __declspec(align(16)) char matrix[64];
 switch(D_0031B9B0) {
 case 8: func_000D56C0(&D_001DADE8,9);D_0031ACA8=D_00307DB4;break;
 case 10: func_000D4920(1);if(!func_000D32B0())D_0031B9B0=9;break;
 case 9:
 if(func_0012E940(&D_0031ADAC)>D_001D27EC)func_000D4920(3);
 else {func_0012E750(&D_0031ADAC);func_000D4920(0);}
 func_000D2FF0();func_000D4D90();if(D_0031B7C8>=16)D_0031B9B0=11;break;
 case 11:
 func_000D4920(2);func_000D2FF0();func_00110060(D_0031ACB0,matrix);
 if(func_00131210(D_0031AD40-(*(float *)(matrix+0x38)-D_001DADB0))<D_001D35F8) {
 D_0031B9B0=14;D_0031B834=0;D_0031B830=0;D_0031B838=0xc1f00000;
 }break;
 case 14:func_000D37F0();if(func_000D3880())D_0031B9B0=15;break;
 case 15:D_0031ACA0=1;break;
 case 16:if(D_0031ACA0)func_000B6BE0();else func_000B6C80();break;
 }
 func_000D2BC0();func_000D44A0();func_000D3300();func_000D36B0();
 if(!func_000D5120()&&!D_0031ACA0) {
 if(func_000D3960()){D_0031ACA0=0;func_000B6C80();return;}
 } else {D_0031ACA0=1;func_000B6BE0();}
}

unsigned char func_000D4FB0(int param_1, int param_2, float param_3, float param_4, int param_5, int param_6) {
    extern float D_001D27B8;
    int func_0009C7A0(int, int, int);
    void func_000A22B0(int, int, int, int, int, int);
    double func_000A2310(int);
    int __ftol2(...);
    unsigned int *p = (unsigned int *)func_0009C7A0(*(int *)(param_1 + 4), param_2, 0);
    if (p != *(unsigned int **)(param_1 + 0x90) && (double)param_3 > (double)D_001D27B8) {
        *(unsigned int **)(param_1 + 0x90) = p;
        func_000A22B0(*(int *)(param_1 + 4) + 0x64, 1, p[0], p[0], p[2], param_6);
        return 1;
    }
    if ((double)param_3 >= (double)param_4) {
        double v = func_000A2310(*(int *)(param_1 + 4) + 0x64) + (char)param_6;
        unsigned int *c;
        if ((char)param_6 > 0) {
            c = *(unsigned int **)(param_1 + 0x90);
            if (v > (double)c[1])
                v = (double)c[0];
        } else {
            c = *(unsigned int **)(param_1 + 0x90);
            if (v < (double)c[0])
                v = (double)c[1];
        }
        int r = (int)v;
        func_000A22B0(*(int *)(param_1 + 4) + 0x64, 1, r, r, p[2], param_6);
        return 1;
    }
    return 0;
}

void func_000D50D0(int self, int arg1, int arg2)
{
  int func_0009C7A0(...), func_000A22B0(...);
  int *p;
  int base = *(int *)(self + 4);
  p = (int *)func_0009C7A0(base, arg1, 0);
  if (p != *(int **)(self + 0x90)) {
    *(int **)(self + 0x90) = p;
    func_000A22B0(base + 0x64, arg2, p[0], p[1], p[2], 0x3e4ccccd);
  }
}

char func_000D5120(void) {
    return 0;
}

void func_000D5130(undefined4 param_1, undefined4 *param_2)
{
  int func_0009C7A0(...);
  extern undefined D_001DAE10;
  extern undefined D_001DAE04;
  undefined4 *puVar1;
  
  *param_2 = 0;
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001DAE10),0);
  param_2[1] = *puVar1;
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001DAE04),0);
  param_2[2] = *puVar1;
  return;
}

void __fastcall func_000D4130(int);
void func_000D5170(int param1, int param2)
{
  int func_00011CB0(...), func_0012ED20(...), func_0012F7A0(...), func_001105E0(...);
  __declspec(align(16)) char local[0x40];
  char dummy[16];
  int *v = (int *)local;
  func_00011CB0(local, param1);
  func_0012ED20(v, param2, 0xbf800000);
  func_0012F7A0(v, param1);
  *(int *)(local + 0x30) = v[0]; *(int *)(local + 0x34) = v[1]; *(int *)(local + 0x38) = v[2];
  func_001105E0(param2, local, 0);
}

void func_000D51E0(int param1, int param2)
{
  int func_00011CB0(...), func_0012ED20(...), func_0012F7A0(...), func_001105E0(...);
  __declspec(align(16)) char local[0x40];
  char dummy[16];
  int *v = (int *)local;
  func_00011CB0(local, param1);
  func_0012ED20(v, param2 + 0x40, 0xbf800000);
  func_0012F7A0(v, param1);
  *(int *)(local + 0x30) = v[0]; *(int *)(local + 0x34) = v[1]; *(int *)(local + 0x38) = v[2];
  func_001105E0(*(int *)(param2 + 0x2c), local, 0);
}
#pragma optimize("", on)
void func_000D5250(int param_1,int param_2)
{
 int func_00110060(...); int func_0012F730(...); int temp[4];
 func_00110060(param_1,param_2); func_0012F730(temp,param_1,param_2);
 *(int *)(param_2+0x30)=temp[0]; *(int *)(param_2+0x34)=temp[1]; *(int *)(param_2+0x38)=temp[2];
}

#pragma optimize("", on)
void func_000D5290(int param_1)
{
  int func_00011CB0(...);
  int func_000D5170(...);
  func_00011CB0(param_1 + 0x10,param_1 + 0x50);
  func_000D5170(param_1 + 0x10,*(undefined4 *)(param_1 + 4));
  return;
}

void func_000D52C0(int *param_1,unsigned int param_2,int *out)
{
 int func_00110300(...); int func_00110060(...); int func_0012F730(...); int func_00011CB0(...); int func_0013E469(...); extern char D_001DAE24;
 char fallback[268]; char shape[64]; int local[3];
 int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0x18);
 if(obj) {
   out[1]=obj;
   func_00110060(obj,shape);
   func_00110060(obj,out+4);
   func_0012F730(local,obj,out+4);
   out[16]=local[0]; out[17]=local[1]; out[18]=local[2];
   func_00011CB0(out+20,out+4);
 } else {
   func_0013E469(fallback,&D_001DAE24,param_2);
 }
}

void func_000D5360(int *param_1,unsigned int param_2,int *out)
{
 int func_00110300(...); int func_00110060(...); int func_00011CB0(...); int func_0013E469(...); extern char D_001DAE24;
 char error[268]; int local[16]; int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0);
 if(obj) { out[1]=obj; func_00110060(obj,local); for(int i=0;i<16;i++) out[4+i]=local[i]; func_00011CB0(out+20,out+4); }
 else func_0013E469(error,&D_001DAE24,param_2);
}

int func_000D53E0(int *param_1,unsigned int param_2,int *out)
{
 int func_00110300(...); int func_00110060(...); int func_00011CB0(...); int local[16]; int obj=func_00110300(*(int *)(*param_1+0x2c),param_2,0);
 if(obj==0)return 0;
 out[1]=obj; func_00110060(obj,local); for(int i=0;i<16;i++)out[4+i]=local[i]; func_00011CB0(out+20,out+4);return 1;
}

void func_000D54E0(int p, int a, int b) {
 int func_0009CBE0(...),func_00110300(...); extern int D_0031B9B0,D_0031B914,D_0031B9A0; void func_00110060(int,char*); void func_0012F730(float*,int,char*);
 float v[4]; char name[256]; int obj; int x,y,z; char *end;
 D_0031B9B0=b; D_0031B900=a;
 strcpy(name,*(char **)(p+12)); strcat(name,".brain");
 D_0031B914=func_0009CBE0(name);
 D_0031B910=func_00110300(*(int *)(D_0031B914+44),&D_001D748C,24);
 obj=D_0031B914;
 func_00110060(*(int *)(obj+44),&D_0031B920);
 func_0012F730(v,obj+64,&D_0031B920);
 *(Vec_D54E0 *)&D_0031B950=*(Vec_D54E0 *)v; *(Vec_D54E0 *)&D_0031B9A4=*(Vec_D54E0 *)v;
 func_000D51E0((int)&D_0031B920,D_0031B914);
 strcpy(name,*(char **)(p+12)); strcat(name,".pinky");
 D_0031B864=func_0009CBE0(name);
 D_0031B860=func_00110300(*(int *)(D_0031B864+44),&D_001DAE3C,24);
 obj=D_0031B864;
 func_00110060(*(int *)(obj+44),&D_0031B870);
 func_0012F730(v,obj+64,&D_0031B870);
 *(Vec_D54E0 *)&D_0031B8A0=*(Vec_D54E0 *)v; *(Vec_D54E0 *)&D_0031B8F4=*(Vec_D54E0 *)v;
 func_000D51E0((int)&D_0031B870,D_0031B864);
 D_0031B9A0=0; D_0031B8F0=0;
}

extern int D_0031B914;
extern int D_0031B9A0;
extern int D_0031B9B0;
extern float D_001D290C;

extern int func_0009C7A0(int, int, int);
extern void func_000A22B0(int, int, int, int, int, int);
extern float func_000A2310(int);

extern int D_00313B60;
extern float D_001D27B0;
extern float D_001DAE38;
extern float D_001D5728;
extern void func_00110060(int, char*);
extern void func_0012F310(char*, char*);
extern void func_0012F730(float*, int, char*);

extern int D_0031E4E0;
extern int D_0031D530;
extern int D_001E5380;
extern int D_0031BD00;
extern int D_0031BBC0;
extern void func_0012E700(char*, int, int);
extern void func_0012E620(int, char*, int);
extern void func_000D5170(int, int);
extern void func_00110000(int);

extern int D_00307D08;
extern int D_00313AD0;
extern int D_0031B9D0;
extern float D_001DAE60;
extern float D_001DAE54;
extern int D_0031BCA0;
extern void func_001031C0(int, float, int);
extern void func_00103990(int);

struct Object_000D5450 {
    int base;
    int* vtbl;
    int data[3];
};
extern int D_00313B60;
extern float D_001D27B0;
extern float D_001DAE38;
extern float D_001D5728;
extern int D_0031B914;
extern int D_0031B9A0;
extern float D_001D290C;
extern int D_0031B9B0;
extern int D_0031E4E0;
extern int D_0031D530;
extern int D_001E5380;
extern int D_0031BD00;
extern int D_0031BBC0;
extern int D_0031BB84;
extern int D_0031BB90;
extern int D_00307D08;
extern int D_00313AD0;
extern int D_0031B9D0;
extern float D_001DAE60;
extern float D_001DAE54;
extern int D_0031BCA0;
extern int D_00313B60;
extern float D_001D27B0;
extern float D_001DAE38;
extern float D_001D5728;

void func_00110060(int obj, void *data);
void func_0012F310(void *data1, void *data2);
void func_0012F730(float *out, int input1, void *data);
extern int D_00313B60;
extern float D_001D27B0;
extern float D_001DAE38;
extern float D_001D5728;
extern int D_00313B60;
extern float D_001D27B0;
extern float D_001DAE38;
extern float D_001D5728;
