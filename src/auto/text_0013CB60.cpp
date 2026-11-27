/* 16 functions from 0x0013CB60 to 0x0013DACF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "string.h"

extern float D_001D27B8; extern float D_001D27B0; extern float D_001DF0D4;
int __stdcall func_00109BBE(int,int,int,int);
short __ftol2(...);
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
        v.s0 = __ftol2(a * D_001DF0D4);
        v.s1 = __ftol2(b * D_001DF0D4);
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

void func_0013CDE0(unsigned *p) {
extern float D_001DFA24, D_001D6008;
unsigned char *b=(unsigned char*)p[10];
if(p[1]!=3 && p[1]!=4) {
if(*(int*)(b+0x78)) *p|=1; else *p&=~1u;
*(float*)(p[4]+0)=(double)*(short*)(b+10)*D_001DFA24;
*(float*)(p[4]+24)=(double)*(short*)(b+12)*D_001DFA24;
*(float*)(p[4]+48)=(double)*(short*)(b+14)*D_001DFA24;
*(float*)(p[4]+72)=(double)*(short*)(b+16)*D_001DFA24;
*(float*)(p[4]+240)=(*b&1) ? (double)D_001D27B0 : (double)D_001D27B8;
*(float*)(p[4]+264)=(*b&2) ? (double)D_001D27B0 : (double)D_001D27B8;
*(float*)(p[4]+288)=(*b&4) ? (double)D_001D27B0 : (double)D_001D27B8;
*(float*)(p[4]+312)=(*b&8) ? (double)D_001D27B0 : (double)D_001D27B8;
*(float*)(p[4]+96)=(*b&16) ? (double)D_001D27B0 : (double)D_001D27B8;
*(float*)(p[4]+120)=(*b&32) ? (double)D_001D27B0 : (double)D_001D27B8;
*(float*)(p[4]+336)=(double)b[2]*D_001D6008;
*(float*)(p[4]+360)=(double)b[3]*D_001D6008;
*(float*)(p[4]+384)=(double)b[5]*D_001D6008;
*(float*)(p[4]+408)=(double)b[4]*D_001D6008;
*(float*)(p[4]+432)=(*b&64)?(double)D_001D27B0:(double)D_001D27B8;
*(float*)(p[4]+456)=(*b&128)?(double)D_001D27B0:(double)D_001D27B8;
*(float*)(p[4]+144)=(double)b[7]*D_001D6008;
*(float*)(p[4]+192)=(double)b[6]*D_001D6008;
*(float*)(p[4]+168)=(double)b[8]*D_001D6008;
*(float*)(p[4]+216)=(double)b[9]*D_001D6008;
}
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

#pragma optimize("gty", on)
void func_0013D1A0(char *indices,unsigned char *weights,float *values,unsigned count,unsigned rows) {
extern float D_001D66D8;
int maximum=0;
char *p=indices+2;
float *v=values;
unsigned left=rows;
if(left>0) do {
 int used=0;
 p[-2]='A';p[-1]='A';p[0]='A';p[1]='A';
 unsigned j=0;
 if(count) do {
 if(v[j]!=D_001D27B8) {
 int old=p[-2]; ++used;
 if(old==65 || v[j]>v[old]) {p[1]=p[0];p[0]=p[-1];p[-1]=old;p[-2]=(char)j;}
 else { old=p[-1];
 if(old==65 || v[j]>v[old]) {p[1]=p[0];p[0]=old;p[-1]=(char)j;}
 else {old=p[0];
 if(old==65 || v[j]>v[old]) {p[1]=old;p[0]=(char)j;}
 else if(p[1]==65 || v[j]>v[p[1]]) p[1]=(char)j;
 }}
 } ++j; } while(j<count);
 if(!used) p[-2]=0;
 if(used>maximum) maximum=used;
 v+=count;p+=4;
} while(--left);
maximum=0;
unsigned row=0,base=0;
 int offset=(char*)weights-indices;
p=indices+2;
if(rows>0) do {
 float a=p[-2]==65?0.0f:values[base+p[-2]];
 int ib=base+p[-1], ic=base+p[0], id=base+p[1];
 long double b=p[-1]==65?(double)D_001D27B8:values[ib];
 long double c=p[0]==65?(double)D_001D27B8:values[ic];
 long double d=p[1]==65?(double)D_001D27B8:values[id];
 long double scale=D_001D66D8/(d+c+b+a);
 unsigned char w1=(__int64)(scale*b);
 p[offset-1]=w1;
 unsigned char w2=(int)(scale*c);
 p[offset]=w2;
 unsigned char w3=(int)(scale*d);
 p[offset+1]=w3;
 weights[row*4]=(unsigned char)(255-w3-w2-w1);
 if(p[-1]==65) p[-1]=p[-2];
 if(p[0]==65) p[0]=p[-1];
 if(p[1]==65) p[1]=p[0];
 ++row;base+=count;p+=4;
} while(row<rows);
}
#pragma optimize("", on)
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

void func_0013D590(int self, unsigned char *buf)
{
    unsigned char mA[48], mB[64];
    unsigned int aA[48], aB[48];
    unsigned int i, j, n = 0;
    unsigned int cA, cB;
    char *p;
    memset(mA, 0, 48);
    memset(mB, 0, 48);
    cA = *(unsigned int *)(*(char **)(self + 0x24) + 4);
    for (i = 0; i < cA; i++) {
        cB = *(unsigned int *)(*(char **)(self + 0x24) + 0x3c);
        for (j = 0; j < cB; j++) {
            if (*(unsigned char *)(*(char **)(self + 0x24) + 8 + i) == *(unsigned char *)(*(char **)(self + 0x24) + 0x40 + j)) {
                mA[i] = 1;
                mB[j] = 1;
                aA[n] = *(unsigned char *)(*(char **)(self + 0x24) + 8 + i);
                aB[n] = *(unsigned char *)(*(char **)(self + 0x24) + 0x40 + j);
                n++;
            }
        }
    }
    {
        unsigned int *q = aA + n;
        for (i = 0; i < cA; i++)
            if (!mA[i])
                *q++ = *(unsigned char *)(*(char **)(self + 0x24) + 8 + i);
    }
    p = *(char **)(self + 0x24);
    cB = *(unsigned int *)(p + 0x3c);
    {
        unsigned int *q = aB + n;
        for (i = 0; i < cB; i++)
            if (!mB[i])
                *q++ = *(unsigned char *)(p + 0x40 + i);
    }
    for (i = 0; i < *(unsigned int *)(*(char **)(self + 0x24) + 4); i++)
        *(*(char **)(self + 0x24) + 8 + i) = (char)aA[i];
    for (i = 0; i < *(unsigned int *)(*(char **)(self + 0x24) + 0x3c); i++)
        *(*(char **)(self + 0x24) + 0x40 + i) = (char)aB[i];
    memset(mB, 0xff, 64);
    p = *(char **)(self + 0x24);
    for (i = 0; i < *(unsigned int *)(p + 4); i++)
        mB[*(unsigned char *)(p + 8 + i)] = (unsigned char)i;
    for (i = 0; i < *(unsigned int *)(p + 0x3c); i++)
        mB[*(unsigned char *)(p + 0x40 + i)] = (unsigned char)i;
    cA = (unsigned int)*(unsigned short *)(self + 0x48) << 2;
    for (i = 0; i < cA; i++)
        buf[i] = mB[(signed char)buf[i]];
}

void func_0013D750(int p,int *buf){unsigned short n=*(unsigned short*)(p+0x48);int *obj=*(int**)(p+0x24);unsigned char table[0x44];int i;for(i=0;i<0x40;i++)((int*)table)[i]=-1;*(unsigned short*)(table+0x40)=0xffff;unsigned int count=*(unsigned int*)((char*)obj+4);for(i=0;i<(int)count;i++)table[*((unsigned char*)obj+8+i)]=(unsigned char)i;for(i=0;i<(n<<2);i++)((unsigned char*)buf)[i]=table[((signed char*)buf)[i]];}

