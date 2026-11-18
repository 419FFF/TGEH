/* 16 functions from 0x0013CB60 to 0x0013DACF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern float D_001D27B8; extern float D_001D27B0; extern float D_001DF0D4;
int __stdcall func_00109BBE(int,int,int,int);
short func_0013E3F4(...);
int __stdcall func_001CD3AF(int,void*);
int __stdcall func_00109CF3(int,int);

void func_0013CC50(void) { extern unsigned char D_003351D0; int __stdcall func_001CD404(int,int); int func_0013C9A0(...); int func_0013CA40(...); func_001CD404(0,0); func_0013C9A0(); func_0013CA40(); D_003351D0=1; }

void func_0013CDD0(void) {
    int func_0013CA40(...);
    func_0013CA40();
}

void func_0013D030(int p,int mode,float value) { extern float D_001D6138; int func_0013CB60(...); float f=value; f*=D_001D6138; if(mode==1){func_0013CB60(0,(float)f);return;} func_0013CB60((float)f,(float)f); }

void func_0013D070(int p) { int func_0013CB60(...); volatile int *q=(int*)((char*)p+0x28); int keep=*q; func_0013CB60(0,0); if(keep==-1) return; }

int func_0013D090(void) {
    return 12;
}

int func_0013D0A0(uint param_1)
{
  int iVar1;
  
  iVar1 = 0xc;
  if ((param_1 & 1) != 0) {
    iVar1 = 0x14;
  }
  if ((param_1 & 2) != 0) {
    iVar1 = iVar1 + 8;
  }
  if ((param_1 & 4) != 0) {
    iVar1 = iVar1 + 8;
  }
  if ((param_1 & 8) != 0) {
    iVar1 = iVar1 + 8;
  }
  if ((param_1 & 0x10) != 0) {
    iVar1 = iVar1 + 4;
  }
  if ((param_1 & 0x100000) != 0) {
    iVar1 = iVar1 + 4;
  }
  if ((param_1 & 0x20000) != 0) {
    iVar1 = iVar1 + 0xc;
  }
  return iVar1;
}

void func_0013D0F0(int param_1, uint param_2)
{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0xc;
  iVar1 = 1;
  if ((param_2 & 0x40000) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0xc;
    *(undefined4 *)(param_1 + 0x2c) = 0xc;
    *(undefined4 *)(param_1 + 0x3c) = 0xc;
    iVar1 = 4;
  }
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 8;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 2) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 8;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 4) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 8;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 8) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 8;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 0x10) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 4;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 0x100000) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 4;
    iVar1 = iVar1 + 1;
  }
  if ((param_2 & 0x20000) != 0) {
    *(undefined4 *)(iVar1 * 0x10 + 0xc + param_1) = 0xc;
  }
  return;
}

void func_0013D500(short *p,unsigned int n) { int func_00116A90(...); int func_00116FB0(...); unsigned int bytes=n*6,i; short *tmp=(short*)func_00116A90(bytes,1,0); extern int D_0032519C[]; for(i=0;i<n;i++){unsigned int k=D_0032519C[i]*3; tmp[i*3]=p[k];tmp[i*3+1]=p[k+1];tmp[i*3+2]=p[k+2];} for(i=0;i<bytes;i++) ((unsigned char*)p)[i]=((unsigned char*)tmp)[i]; func_00116FB0(); }

void func_0013D750(int p,int *buf){unsigned short n=*(unsigned short*)(p+0x48);int *obj=*(int**)(p+0x24);unsigned char table[0x44];int i;for(i=0;i<0x40;i++)((int*)table)[i]=-1;*(unsigned short*)(table+0x40)=0xffff;unsigned int count=*(unsigned int*)((char*)obj+4);for(i=0;i<(int)count;i++)table[*((unsigned char*)obj+8+i)]=(unsigned char)i;for(i=0;i<(n<<2);i++)((unsigned char*)buf)[i]=table[((signed char*)buf)[i]];}

