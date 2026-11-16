/* 28 functions from 0x000630D0 to 0x00064083, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00063240(void)
{
  extern undefined4 D_002EF480;
  int func_0011B990(...);
  extern undefined4 D_002EF420;
  int func_00110760(...);
  extern undefined4 D_002EF494;
  int iVar1;
  
  iVar1 = D_002EF480;
  *(short *)(D_002EF480 + 0x2a) = *(short *)(D_002EF480 + 0x2a) + -1;
  func_0011B990(iVar1);
  iVar1 = D_002EF420;
  *(short *)(D_002EF420 + 0x2a) = *(short *)(D_002EF420 + 0x2a) + -1;
  func_0011B990(iVar1);
  func_00110760(D_002EF494);
  return;
}

void _func_00063270(int *out) { extern int D_00307DF8; int func_001100A0(...); int result; int zero=0; func_001100A0(*(int *)(D_00307DF8+0x2c), &result); if(result) { out[0]=*(int *)(result+0x30); out[1]=*(int *)(result+0x34); out[2]=*(int *)(result+0x38); out[3]=*(int *)(result+0x3c); } else { out[0]=zero; out[1]=zero; out[2]=zero; out[3]=0x3f800000; } }

void func_000632D0(void)
{
  extern undefined4 D_002F7308;
  extern undefined D_002EF5FC;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  D_002F7308 = 0;
  puVar2 = (undefined4 *)((undefined *)&D_002EF5FC);
  do {
    puVar2[-0x3d] = 0;
    *puVar2 = 0;
    puVar2[0x3e] = 0;
    puVar1 = puVar2 + 2;
    iVar3 = 0x3c;
    do {
      puVar1[-0x3e] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar2 = puVar2 + 0x7e;
  } while ((int)puVar2 < 0x3fa0);
  return;
}

void func_00063320(void) {
    extern int D_001E3B30;
    extern int D_002EEF08;
    extern int D_002EEE70;
    int func_0005D410(...);
    func_0005D410(D_001E3B30, (int)&D_002EEE70, (int)&D_002EEF08);
}

void func_00063340(void) {
    extern int D_001E3B30;
    extern int D_002EF4F4;
    extern int D_002EF4E4;
    int func_0005D410(...);
    func_0005D410(D_001E3B30, (int)&D_002EF4E4, (int)&D_002EF4F4);
}

void func_00063360(int param_1, undefined4 param_2)
{
  extern undefined4 D_002F7308;
  extern undefined D_002EF508;
  extern undefined D_002EF5FC;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < D_002F7308) {
    puVar2 = (undefined4 *)((undefined *)&D_002EF508);
    while (*(int *)*puVar2 != param_1) {
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x7e;
      if (D_002F7308 <= iVar1) {
        return;
      }
    }
    *(undefined4 *)((iVar1 * 0x7e + *(int *)(((undefined *)&D_002EF5FC) + iVar1 * 0x1f8)) * 4 + 0x3fe0) = param_2;
    *(int *)(((undefined *)&D_002EF5FC) + iVar1 * 0x1f8) = *(int *)(((undefined *)&D_002EF5FC) + iVar1 * 0x1f8) + 1;
  }
  return;
}

float _func_00063490(void *self, void *a, void *b) { return 0; }

void _func_00063530(float value) { }

void _func_00063780(int p){int _func_00116A90(...),_func_00068920(...),_func_00068AC0(...);float _func_0012EAE0(...);extern int _D_002F7308;extern char _D_002EF508,_D_002EF5FC;int *o=(int*)_func_00116A90(0x40,1,1);_func_00068920(p);o[14]=0x3f800000;o[15]=0x3f800000;int *b=o+5;int z=0;o[0]=p;o[9]=z;o[10]=z;o[11]=0x44160000;o[12]=0x40a00000;o[13]=z;_func_00068AC0(p,z,o+1,b);(void)_func_0012EAE0(b);*(int**)((char*)&_D_002EF508+_D_002F7308*0x1f8)=o;*(int*)((char*)&_D_002EF5FC+_D_002F7308*0x1f8)=z;_D_002F7308++;}

void _func_00063810(void){extern int _D_002F7310,_D_002F730C,_D_002EF508,_D_002EF4E4,_D_002EF4F4,_D_00313B60;int _func_000635B0(...),_func_0005D480(...),_func_001105E0(...),_func_00066290(...),_func_00064210(...);char local[76];if(_D_002F7310!=-1){_D_002F730C=_D_002F7310;_D_002F7310=-1;}int i=_D_002F730C;int *o=*(int**)((char*)&_D_002EF508+i*0x1f8);if(o[13]==0)_func_000635B0(o);_func_0005D480(local,&_D_002EF4E4,&_D_002EF4F4);_func_001105E0(_D_00313B60,local,1);_func_00066290(**(int**)o);_func_00064210(**(int**)o);}

void _func_00063BC0(int p){extern int _D_00307D08,_D_00313AF8,_D_00313A94;extern unsigned char _D_002F7314,_D_002F7315;if(*(int*)(p+0x4e0)<=0)return;int d=_D_00307D08;int a=_D_00313AF8;int *c=*(int**)(d+0x10);int x=a*0x18;if(*(short*)((char*)c+x+0x10)==0){a=_D_00313A94;x=a*0x18;if(*(short*)((char*)c+x+0x10)==0)return;}unsigned char v=1;_D_002F7314=v;int *e=*(int**)(d+0x10);a=_D_00313A94;x=a*0x18;if(*(short*)((char*)e+x+0x10)!=0)_D_002F7315=v;}

unsigned int func_00063C20(int param)
{
    extern int D_002F7314;
    return *(int*)(param+0x4e0)<=0 ? D_002F7314 : 0;
}

void func_00063C40(void) {
    extern char D_002F7314;
    D_002F7314 = 0;
}

char func_00063C50(void) {
    extern char D_002F7315;
    return D_002F7315;
}

void func_00063C60(void) {
    extern char D_002F7315;
    D_002F7315 = 0;
}

void func_00063F10(void) {
    extern char D_002EEEB0;
    extern int D_002EEE88;
    extern char D_002F7318;
    extern int D_002F731C;
    D_002F7318 = D_002EEEB0;
    D_002F731C = D_002EEE88;
}

void func_00063F30(void) {
    int func_00122A50(...);
    func_00122A50();
}

void func_00063F40(void) {
    extern int D_002F7324;
    extern int D_002F7328;
    D_002F7324 = 1060320051;
    D_002F7328 = 0;
}

void _func_00063F60(int *p,int a,int b){extern int _D_002F732C,_D_002F7330,_D_002F7334,_D_002F7338,_D_002F733C,_D_002F7340,_D_002F7344;if(p){_D_002F732C=p[0];_D_002F7330=p[1];_D_002F7334=p[2];}else{_D_002F732C=0;_D_002F7330=0;_D_002F7334=0;}_D_002F7338=a;_D_002F733C=b;_D_002F7340=0;_D_002F7344=0x3f800000;}

