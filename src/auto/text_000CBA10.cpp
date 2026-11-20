/* 14 functions from 0x000CBA10 to 0x000CC9A1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct S11 { char c[11]; };
extern "C" char *strcat(char *, const char *);
#pragma intrinsic(strcat)

void func_000CBA10(int param_1) { extern unsigned char D_00318E44; extern int D_0031A944,D_0031A948,D_001E4A30,D_001E4A34,D_001E4A38; extern char D_00318E54,D_00318E5C,D_00318E58,D_00318E70,D_00318EF0,D_00318EF8,D_00318E40,D_00318E4C,D_00318EB0; int func_00110060(...); int off=param_1*0xc0;if(*((unsigned char*)&D_00318E44+off))return;if(D_0031A944==-1){D_0031A944=param_1;}else{if(D_0031A948!=-1||D_0031A944==param_1)return;D_0031A948=param_1;}*(int*)(&D_00318E54+off)=D_001E4A30;*(int*)(&D_00318E58+off)=D_001E4A34;*(int*)(&D_00318E5C+off)=D_001E4A38;*(int*)(&D_00318EF0+off)=0;*(&D_00318EF8+off)=0;func_00110060(*(int*)(&D_00318E40+off),&D_00318E70+off);func_00110060(*(int*)(&D_00318E4C+off),&D_00318EB0+off);}

float func_000CBE10(int param_1,float param_2,int param_3) { int func_0012E8C0(...),func_0012ED20(...); extern float D_001D27B8; int best=0;int i=0;float max=-1.0f;float x=param_2;if(param_3){do{float v=(float)func_0012E8C0(param_1,x);if(max<v){max=v;best=i;}i++;x+=12.0f;}while(i!=param_3);}float dir=1.0f;if(max<=D_001D27B8)dir=-1.0f;func_0012ED20(param_1,(int)param_2+best*12,dir);return (float)best;}

void func_000CC130(void)
{
  extern undefined D_00318D20;
  extern undefined4 D_00318DF4;
  extern undefined D_0031AC4A;
  int func_00110060(...);
  int func_001105E0(...);
  undefined4 *puVar1;
  undefined1 local_50 [76];
  
  puVar1 = (undefined4 *)((undefined *)&D_00318D20);
  D_00318DF4 = (D_0031AC4A != '\0') - 1 & 3;
  do {
    func_00110060(*puVar1,local_50);
    func_001105E0(*puVar1,local_50,1);
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x4160);
  return;
}

void func_000CC2C0(void)
{
  extern undefined D_00318D20;
  extern undefined D_00318D40;
  extern undefined D_00318DE0;
  extern undefined D_00318D1C;
  extern undefined D_0031A954;
  bool bVar1;
  int *piVar2;
  int *piVar3;
  bVar1 = true;
  piVar3 = (int *) ((undefined *) (&D_00318D20));
  piVar2 = (int *) ((undefined *) (&D_00318D40));
  piVar3 = (int *) ((undefined *) (&D_00318D20));
  do
  {
    if ((*piVar2) != (*piVar3))
    {
      bVar1 = false;
    }
    piVar2 = piVar2 + 5;
    piVar3 = piVar3 + 1;
  }
  while (piVar2 != ((int *) ((undefined *) (&D_00318DE0))));
  if (bVar1)
  {
    D_00318D1C = 1;
    D_0031A954 = 1;
  }
  return;
}

void func_000CC440(void) { extern int D_00318D44,D_00318DF8,D_00318D14,D_00318DC8; int *reset=&D_00318D44;do{*reset=-1;reset+=5;}while(reset!=(int*)&D_00318DF8);int i=0;int *base=&D_00318D14;do{if(base[11]==0){int left=i%3-1;if(left>=0){base[7]=i;base[8]=0xc1200000;base[9]=0;base[10]=0;}int right=i%3+1;if(right<=2){base[17]=i;base[18]=0x41200000;base[19]=0;base[20]=0;}int up=i-3;if(up>=0){base[-3]=i;base[-2]=0;base[-1]=0xc1200000;base[0]=0;}int down=i+3;if(down<=8){base[27]=i;base[28]=0;base[29]=0x41200000;base[30]=0;}}base+=5;i++;}while(base!=(int*)&D_00318DC8);}

#pragma optimize("y", on)
bool func_000CC4F0(int param_1)
{
  extern int D_00313B60;
  extern float D_0031AA0C, D_0031AA10;
  int func_00110060(...);
  int func_0012F7A0(...);
  int func_0012F890(...);
  char func_0011B020(...);
  float a[4];
  float b[4];
  char hit[12];
  __declspec(align(16)) char m1[64];
  __declspec(align(16)) char m2[64];
  __declspec(align(16)) char out[64];
  int cam = D_00313B60;
  func_00110060(cam, m1);
  long double x = (D_0031AA0C * (long double)0.003125f - (long double)1.0f) / *(float *)(cam + 0xe4);
  long double y = ((long double)1.0f - D_0031AA10 * (long double)0.004166667f) / *(float *)(cam + 0xe8);
  *(int *)&a[2] = 0x3f800000;
  *(int *)&b[2] = 0x461c4000;
  a[0] = (float)x;
  a[1] = (float)y;
  b[0] = (float)(x * (long double)10000.0f);
  b[1] = (float)(y * (long double)10000.0f);
  func_0012F7A0(a, m1);
  func_0012F7A0(b, m1);
  func_00110060(param_1, m2);
  func_0012F890(a, m2);
  func_0012F890(b, m2);
  return (bool)func_0011B020(param_1, a, b, hit, 0, out);
}
#pragma optimize("", on)
void func_000CC7C0(void) { int func_000A2E70(...); extern int D_001D9C74,D_001D9C54,D_0031AA18,D_0031AA40,D_0031AA0C,D_0031AA10,D_0031AA14;func_000A2E70(&D_0031AA18,&D_001D9C74,0x43a00000,0x43700000,0x42800000,0x42800000);func_000A2E70(&D_0031AA40,&D_001D9C54,0x43a00000,0x43700000,0x42800000,0x42800000);D_0031AA0C=0x43a00000;D_0031AA10=0x43700000;D_0031AA14=0;}

void func_000CC830(void)
{
  extern undefined D_0031A9F4;
  int func_000A2F00(...);
  extern undefined D_0031AA18;
  extern undefined4 D_0031AA0C;
  extern undefined4 D_0031AA10;
  extern undefined D_0031AA40;
  extern undefined4 D_003080AC;
  int func_000A2F20(...);
  extern undefined D_0031A9F5;
  if (D_0031A9F4 != '\0') {
    func_000A2F00(((undefined *)&D_0031AA18),D_0031AA0C,D_0031AA10);
    func_000A2F00(((undefined *)&D_0031AA40),D_0031AA0C,D_0031AA10);
    if (D_003080AC != 2) {
      func_000A2F20(((undefined *)&D_0031AA18));
      if (D_0031A9F5 != '\0') {
        func_000A2F20(((undefined *)&D_0031AA40));
      }
    }
  }
  return;
}

#pragma optimize("y", on)
void func_000CC8A0(void)
{
  extern int D_00307D08, D_00313AD0, D_00313B34;
  extern float D_001D715C, D_001D31C8, D_001D54D8, D_001DAA7C, D_001DAA78;
  extern float D_0031AA0C, D_0031AA10;
  long double func_0012E940(float *);
  int func_0012ECA0(float *, float);
  int func_0012E590(float *, float *);
  float v[3];
  long double len;
  v[1] = (float)-(long double)*(float *)(*(int *)(D_00307D08 + 0x10) + D_00313AD0 * 0x18);
  v[0] = *(float *)(*(int *)(D_00307D08 + 0x10) + D_00313B34 * 0x18);
  *(int *)&v[2] = 0;
  len = func_0012E940(v);
  if (len >= D_001D715C) {
    func_0012ECA0(v, (float)(len * len * D_001D31C8));
    func_0012E590(&D_0031AA0C, v);
    if ((long double)D_0031AA0C < D_001D54D8)
      *(int *)&D_0031AA0C = 0x42000000;
    else if ((long double)D_0031AA0C > D_001DAA7C)
      *(int *)&D_0031AA0C = 0x44180000;
    if ((long double)D_0031AA10 < D_001D54D8)
      *(int *)&D_0031AA10 = 0x42000000;
    else if ((long double)D_0031AA10 > D_001DAA78)
      *(int *)&D_0031AA10 = 0x43e00000;
  }
}
#pragma optimize("", on)
