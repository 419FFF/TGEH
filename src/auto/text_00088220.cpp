/* 23 functions from 0x00088220 to 0x0008921F, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00088520(unsigned int p){extern unsigned int D_00308158,D_002FDDC0,D_002FDDB8,D_00307C94,D_00307C58,D_003041F0,D_003041EC,D_00306E70,D_00306E6C;void func_00110170(unsigned int),func_00086B70(unsigned int),func_00096F70(unsigned int),func_000688D0(unsigned int),func_00093CA0(unsigned int);func_00110170(*(unsigned int*)(D_00308158+0x2c));if(!D_002FDDC0)goto b;if(*(unsigned char*)(*(unsigned int*)(p+0x2c)+0x22)==D_002FDDB8){func_00086B70(p);return;}b: if(!D_00307C94)goto c;if(*(unsigned char*)(*(unsigned int*)(p+0x2c)+0x22)==D_00307C58){func_00096F70(p);return;}c: if(!D_003041F0)goto d;if(*(unsigned char*)(*(unsigned int*)(p+0x2c)+0x22)==D_003041EC){func_000688D0(p);return;}d: if(!D_00306E70)return;if(*(unsigned char*)(*(unsigned int*)(p+0x2c)+0x22)==D_00306E6C)func_00093CA0(p);}

void func_000885C0(void){void func_00097190(void),func_00093D80(void),func_000862D0(void),func_00083CE0(void),func_000688D0(void),func_0008D540(void);func_00097190();func_00093D80();func_000862D0();func_00083CE0();func_000688D0();func_000688D0();func_0008D540();}

void func_000885F0(void)
{
  int func_00095670(...);
  extern undefined4 D_002EECA4;
  extern undefined4 D_002EECAC;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00095670();
  D_002EECA4 = *puVar1;
  D_002EECAC = puVar1[1];
  return;
}

void func_00088610(void)
{
  int func_000688D0(...);
  int func_0007D1F0(...);
  int func_0008F400(...);
  int func_00097900(...);
  func_000688D0();
  func_0007D1F0();
  func_0008F400();
  func_00097900();
  return;
}

void func_00088630(void){void func_000688D0(void),func_000996B0(void),func_00080CB0(void),func_00081BD0(void),func_00094CB0(void),func_0008FC60(void),func_0007F220(void),func_0007BE40(void),func_0008D3A0(void),func_0008E780(void),func_0008D870(void),func_0008F070(void),func_0006F990(void);func_000688D0();func_000688D0();func_000996B0();func_00080CB0();func_00081BD0();func_00094CB0();func_0008FC60();func_0007F220();func_0007BE40();func_0008D3A0();func_000688D0();func_0008E780();func_0008D870();func_0008F070();func_0006F990();}

void func_00088680(void)
{
  int func_00089440(...);
  int func_00089430(...);
  int func_0007EEE0(...);
  char cVar1;
  
  func_00089440();
  cVar1 = func_00089430();
  if (cVar1 == '\0') {
    func_0007EEE0();
    return;
  }
  return;
}

undefined4 func_000886A0(undefined4 param_1)
{
  int func_0009C7A0(...);
  extern undefined D_001D6CFC;
  extern undefined D_001D6CEC;
  extern undefined D_001D6CDC;
  int func_0007D540(...);
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = func_0009C7A0(param_1,((undefined *)&D_001D6CFC),0);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D6CEC),0);
    puVar3 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D6CDC),0);
    func_0007D540(param_1,*puVar2,*puVar3);
  }
  return 0;
}

void func_000886F0(void)
{
  int func_00081F60(...);
  int func_0007D500(...);
  func_00081F60();
  func_0007D500();
  return;
}

void func_00088700(void)
{
  int func_0007D510(...);
  int func_00081FA0(...);
  func_0007D510();
  func_00081FA0();
  return;
}

void func_000887F0(void){extern unsigned char D_001D6D08;extern unsigned int D_002FDF4C;int func_000B5100(...);void func_000B5420(...);D_002FDF4C=func_000B5100(&D_001D6D08,0x64,0x280);if(D_002FDF4C)func_000B5420(D_002FDF4C,0);}

void func_00088820(void)
{
  extern undefined4 D_002FDF4C;
  int func_000B5180(...);
  if (D_002FDF4C != 0) {
    func_000B5180(D_002FDF4C);
  }
  D_002FDF4C = 0;
  return;
}

void *memcpy(void *,const void *,unsigned int);
void _func_00088840(int p) {
 int func_0011BDD0(...),func_000B5240(...); extern int D_002FDF4C;
 int s;
 if(D_002FDF4C==0)return;
 s=func_0011BDD0(*(int*)(p+0xe0),0);
 if(s){
  unsigned short n=*(unsigned short*)(s+4);
  if(n && *(int*)(p+0x128)==0){
   int d=func_000B5240(D_002FDF4C,(unsigned int)n);*(int*)(p+0x12c)=d;
   if(d){
    unsigned int count=*(unsigned short*)(s+4);*(int*)(p+0x128)=count;
    int i=0;
    while(i<count){
     int *src=(int*)(*(int*)(s+8)+0x28+i*0x30);
     int *dst=(int*)(d+i*0x64);
     for(int j=0;j<25;j++)dst[j]=src[j];
     ++i;
    }
   }
  }
  --*(short*)(*(int*)(p+0xe0)+0x2a);
 }
}

void _func_00088900(int p) {
 int func_000B5350(...); extern int D_002FDF4C;
 if(*(int*)(p+0x128)){func_000B5350(D_002FDF4C,*(int*)(p+0x12c),*(int*)(p+0x128));*(int*)(p+0x128)=0;*(int*)(p+0x12c)=0;}
}

void func_00088940(int param_1, undefined4 param_2)
{
  extern undefined4 D_003268B0;
  int func_00088900(...);
  undefined4 *puVar1;
  
  if ((*(byte *)(param_1 + 0x22) == D_003268B0) && (*(int *)(param_1 + 0x128) != 0)) {
    func_00088900(param_1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  while ((puVar1 != (undefined4 *)0x0 && ((char)param_2 != '\0'))) {
    func_00088940(*puVar1,param_2);
    puVar1 = (undefined4 *)puVar1[3];
  }
  return;
}

void _func_00088990(int p,unsigned int a,int b,unsigned char c) {
 extern int D_003268B0; int func_0011BDD0(...),func_00088840(...);
 if(*(unsigned char*)(p+0x22)==D_003268B0 && func_0011BDD0(*(int*)(p+0xe0),1)){
  if(!*(int*)(p+0x128)){func_00088840(p);for(unsigned int i=0;i<(unsigned int)*(int*)(p+0x128);i++){*(int*)(*(int*)(p+0x12c)+i*100+0x54)=(unsigned char)a;*(int*)(*(int*)(p+0x12c)+i*100+0x58)=b;}}
  --*(short*)(*(int*)(p+0xe0)+0x2a);
 }
 int q=*(int*)(p+0x28);while(q&&c){int f=*(int*)q;_func_00088990(f,a,b,c);q=*(int*)(q+0xc);}
}

void _func_00088EC0(void)
{
  extern int _D_001D6D24;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00088BB0(...);
  int _func_00081460(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&_D_001D6D24, _func_00088BB0);
  _func_0011D270(&_D_001D6D24, _func_00081460);
  _func_0011D290(&_D_001D6D24, _func_00085E20);
  _func_0011D2B0(&_D_001D6D24, _func_000688D0);
}

void func_00088F00(void) {
    extern int D_001D6D24;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6D24);
}
