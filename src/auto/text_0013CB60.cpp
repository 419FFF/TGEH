/* 16 functions from 0x0013CB60 to 0x0013DACF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern float D_001D27B8; extern float D_001D27B0; extern float D_001DF0D4;
int __stdcall func_00109BBE(int,int,int,int);
short func_0013E3F4(...);
int __stdcall func_001CD3AF(int,void*);
int __stdcall func_00109CF3(int,int);

int func_0013CB60(float a, float b) {
    int *p;
    struct { int a; int b; int c; int d; int e; short s0; short s1; } v;
    if (p && p[0x1e]) {
        if (a < D_001D27B8) a = 0; else if (a > D_001D27B0) a = 1.0f;
        if (b < D_001D27B8) b = 0; else if (b > D_001D27B0) b = 1.0f;
        v.a = 0; v.c = 0; v.d = 0; v.e = 0;
        v.b = func_00109BBE(0,0,0,0);
        v.s0 = func_0013E3F4(a * D_001DF0D4);
        v.s1 = func_0013E3F4(b * D_001DF0D4);
        if (func_001CD3AF(p[0x1e], &v) != 0x48f) func_00109CF3(v.b, -1);
    }
    return 0;
}

void func_0013CC50(void) { extern unsigned char D_003351D0; int __stdcall func_001CD404(int,int); int func_0013C9A0(...); int func_0013CA40(...); func_001CD404(0,0); func_0013C9A0(); func_0013CA40(); D_003351D0=1; }

void func_0013CC70(unsigned int *param_1)
{
  extern char D_00335034, D_00334FB0, D_00335028;
  int func_00116A90(...);
  unsigned int i;
  int iVar2;
  unsigned int *puVar3;

  if (param_1[1] != 3 && param_1[1] != 4) {
    if (*(int *)(&D_00335034 + param_1[2] * 0x88) != 0) {
      param_1[10] = 0;
      return;
    }
    *(int *)(&D_00335034 + param_1[2] * 0x88) = 1;
    param_1[10] = (unsigned int)(&D_00334FB0 + param_1[2] * 0x88);
    param_1[3] = 0x16;
    param_1[4] = func_00116A90(0x210, 1, 1);
    i = 0;
    if (param_1[3] > 0) {
      iVar2 = 0;
      do {
        *(int *)(iVar2 + 4 + param_1[4]) = 0;
        *(int *)(iVar2 + 0xc + param_1[4]) = 0x3f400000;
        *(int *)(iVar2 + 8 + param_1[4]) = 0x3dcccccd;
        i = i + 1;
        iVar2 = iVar2 + 0x18;
      } while (i < param_1[3]);
    }
    *(int *)(param_1[4] + 4) = 1;
    *(int *)(param_1[4] + 0x1c) = 2;
    *(int *)(param_1[4] + 0x34) = 1;
    *(int *)(param_1[4] + 0x4c) = 2;
    *(int *)(param_1[4] + 8) = 0x3e99999a;
    *(int *)(param_1[4] + 0x20) = 0x3e99999a;
    *(int *)(param_1[4] + 0x38) = 0x3e99999a;
    *(int *)(param_1[4] + 0x50) = 0x3e99999a;
    *(int *)(param_1[4] + 0x15c) = 0x3dcccccd;
    *(int *)(param_1[4] + 0x174) = 0x3dcccccd;
    *(int *)(param_1[4] + 0x18c) = 0x3dcccccd;
    *(int *)(param_1[4] + 0x1a4) = 0x3dcccccd;
    if (*(int *)(&D_00335028 + i * 0x88) != 0)
      *param_1 = *param_1 | 1;
    else
      *param_1 = *param_1 & 0xfffffffe;
    param_1[5] = 2;
    puVar3 = (unsigned int *)func_00116A90(0x28, 1, 1);
    param_1[6] = (unsigned int)puVar3;
    *puVar3 = 1;
    *(int *)(param_1[6] + 0x14) = 1;
  }
}

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

int _func_0013D400(uint param_1, int param_2, uint *param_3, int param_4, uint param_5)
{
  char local_buffer[68];
  uint uVar6 = 0;
  uint *puVar7 = (uint *)param_3;
  int iVar3;

  // Copy data from puVar7 to local_buffer
  for (iVar3 = 0x10; iVar3 != 0; iVar3--) {
    *(uint *)(local_buffer + (iVar3 * 4)) = *puVar7;
    puVar7++;
  }

  // Calculate uVar6 (seems to be a character count or similar metric)
  for (iVar3 = 0x10; iVar3 != 0; iVar3--) {
    char *pcVar1 = local_buffer + (iVar3 * 4);
    if (pcVar1[-1] != '\0') uVar6++;
    if (*pcVar1 != '\0') uVar6++;
    if (pcVar1[1] != '\0') uVar6++;
    if (pcVar1[2] != '\0') uVar6++;
  }

  // Second loop: process data from param_4 and populate local_buffer
  for (int iVar3_loop = 3; iVar3_loop >= 0; iVar3_loop--) {
    uint *puVar5 = (uint *)(param_4 + (iVar3_loop * 6));
    uint uVar2 = *puVar5;

    for (int j = 0; j < 4; j++) {
      // Mimicking the complex indexing structure observed in the assembly diff.
      // This is a highly speculative attempt to match the pattern: [ebx+eax*0x4+j]
      uint uVar4 = *(char *)(param_4 + (iVar3_loop * 6) + j);
      if (uVar4 < 0x40 && local_buffer[uVar4] == '\0') {
        local_buffer[uVar4] = '\x01';
        uVar6++;
      }
    }
  }

  // Final copy back to param_3 (simple memory copy)
  for (iVar3 = 0x10; iVar3 != 0; iVar3--) {
    *(uint *)(param_3 + iVar3) = *(uint *)(local_buffer + iVar3 * 4);
  }

  return 1;
}

void func_0013D500(short *p,unsigned int n) { int func_00116A90(...); int func_00116FB0(...); unsigned int bytes=n*6,i; short *tmp=(short*)func_00116A90(bytes,1,0); extern int D_0032519C[]; for(i=0;i<n;i++){unsigned int k=D_0032519C[i]*3; tmp[i*3]=p[k];tmp[i*3+1]=p[k+1];tmp[i*3+2]=p[k+2];} for(i=0;i<bytes;i++) ((unsigned char*)p)[i]=((unsigned char*)tmp)[i]; func_00116FB0(); }

void func_0013D750(int p,int *buf){unsigned short n=*(unsigned short*)(p+0x48);int *obj=*(int**)(p+0x24);unsigned char table[0x44];int i;for(i=0;i<0x40;i++)((int*)table)[i]=-1;*(unsigned short*)(table+0x40)=0xffff;unsigned int count=*(unsigned int*)((char*)obj+4);for(i=0;i<(int)count;i++)table[*((unsigned char*)obj+8+i)]=(unsigned char)i;for(i=0;i<(n<<2);i++)((unsigned char*)buf)[i]=table[((signed char*)buf)[i]];}

