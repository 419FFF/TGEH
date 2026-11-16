/* 14 functions from 0x000CBA10 to 0x000CC9A1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000CBA10(int param_1) { extern unsigned char D_00318E44; extern int D_0031A944,D_0031A948,D_001E4A30,D_001E4A34,D_001E4A38; extern char D_00318E54,D_00318E5C,D_00318E58,D_00318E70,D_00318EF0,D_00318EF8,D_00318E40,D_00318E4C,D_00318EB0; int func_00110060(...); int off=param_1*0xc0;if(*((unsigned char*)&D_00318E44+off))return;if(D_0031A944==-1){D_0031A944=param_1;}else{if(D_0031A948!=-1||D_0031A944==param_1)return;D_0031A948=param_1;}*(int*)(&D_00318E54+off)=D_001E4A30;*(int*)(&D_00318E58+off)=D_001E4A34;*(int*)(&D_00318E5C+off)=D_001E4A38;*(int*)(&D_00318EF0+off)=0;*(&D_00318EF8+off)=0;func_00110060(*(int*)(&D_00318E40+off),&D_00318E70+off);func_00110060(*(int*)(&D_00318E4C+off),&D_00318EB0+off);}

float func_000CBE10(int param_1,float param_2,int param_3) { int func_0012E8C0(...),func_0012ED20(...); extern float D_001D27B8; float bestValue=-1;int bestIndex=0;int i=0;if(param_3){do{int elem=(int)param_2+i*12;float v=(float)func_0012E8C0(param_1,elem);if(bestValue<v){bestValue=v;bestIndex=i;}i++;}while(i!=param_3);}float sign=bestValue>D_001D27B8?1.0f:-1.0f;func_0012ED20(param_1,(int)param_2+bestIndex*12,sign);return (float)bestIndex;}

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

void func_000CC440(void) { extern int D_00318D44,D_00318DF8,D_00318D14,D_00318DC8; int *p=&D_00318D44;do{*p=-1;p+=5;}while(p!=(int*)&D_00318DF8);int i=0;int *q=&D_00318D14;do{if(q[11]==0){int r=i%3;int t=r-1;if(t>=0){q[7]=i;q[8]=0xc1200000;q[9]=0;q[10]=0;}r++;if(r<=2){q[17]=i;q[18]=0x41200000;q[19]=0;q[20]=0;}t=i-3;if(t>=0){q[-3]=i;q[-2]=0;q[-1]=0xc1200000;q[0]=0;}if(i+3<=8){q[27]=i;q[28]=0;q[29]=0x41200000;q[30]=0;}}q+=5;i++;}while(q!=(int*)&D_00318DC8);}

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
