/* 17 functions from 0x00110370 to 0x00110DF4, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00110370(unsigned int *src)
{
 extern unsigned int D_00326114; extern char D_00325310;
 unsigned int i=0;
 if(D_00326114) { char *p=&D_00325310; do {if(*p==0){if(i<D_00326114)goto found;break;} i++;p+=0x1c;} while(i<D_00326114);}
 i=D_00326114;D_00326114++;
 found: {unsigned int *d=(unsigned int *)(&D_00325310+i*0x1c); int n=7; do{*d++=*src++;}while(--n);} ((char *)&D_00325310)[i*0x1c]=1;
}

void func_001103C0(int param_1)
{
  extern undefined D_00325310;
  (((undefined *)&D_00325310))[param_1 * 0x1c] = 0;
  return;
}

void func_001103D0(void)
{
 extern int D_00326134,D_00326114,D_00326110,D_00326128,D_0032612C; int func_00110370(...);
 unsigned char local[28];
 if(D_00326134==0){D_00326114=0;*(int *)(local+0x18)=0;*(int *)(local+0x14)=0;*(int *)(local+0xc)=0;*(int *)(local+0x10)=0;D_00326110=func_00110370((int *)local);D_00326128=0;D_0032612C=0;}
 D_00326134++;
}

void func_00110420(int a,int b)
{
 int func_0010FC60(...);int func_0010F7F0(...);int *bucket;int *node;int n=4;
 func_0010FC60(a);func_0010FC60(b);bucket=(int *)(a+0x28);
 do {node=(int *)*bucket;while(node){int *next=(int *)node[3];if(node[0]==b)func_0010F7F0(a,node);node=next;}bucket++;n--;}while(n);
}

void *memcpy(void *dst,const void *src,unsigned int n);
#pragma intrinsic(memcpy)
void func_00110480(int a,int b,int c){int func_0010FC60(...);int func_0012F4C0(...);extern int D_00329238;int func_0010F970(...);int func_0010F930(...);unsigned char local[0x40];unsigned char local2[0x40];func_0010FC60(b);func_0010FC60(a);unsigned x=*(unsigned char *)(a+0x23),y=*(unsigned char *)(b+0x23);func_0012F4C0(local2,(y+1)*64+b,(x+1)*64+a);if(*(int *)(b+0xd4)==D_00329238)y=1-y;if(*(int *)(a+0xd4)==D_00329238)x=1-x;func_0012F4C0(local,(y+1)*64+b,(x+1)*64+a);func_0010F970(a,b,0,c,1,c,local2,local);*(unsigned char *)(b+0x20)|=2;func_0010F930(b);}
void func_00110760(int param_1)
{
  int func_00110420(...);
  extern undefined D_0032531C;
  int func_00116FB0(...);
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x28);
  iVar2 = 4;
  do {
    puVar1 = (undefined4 *)*puVar3;
    while (puVar1 != (undefined4 *)0x0) {
      func_00110420(param_1,*puVar1);
      puVar1 = (undefined4 *)*puVar3;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(code **)(((undefined *)&D_0032531C) + (uint)*(byte *)(param_1 + 0x22) * 0x1c) != (code *)0x0) {
    (**(code **)(((undefined *)&D_0032531C) + (uint)*(byte *)(param_1 + 0x22) * 0x1c))(param_1);
  }
  func_00116FB0(param_1);
  return;
}

extern float D_001D333C;
extern int D_00329238;
int func_0010FC60(int);
void func_00011CB0(void *,void *);
int func_0010F970(...);
int func_0010F930(int);
int func_0013E9DB(int);
void __fastcall func_001107C0(float *min,float *max,int initial,float a,float b,float c)
{
    *min=(float)initial; *max=(float)initial;
    if(a<*max)*max=a;
    if(*min<a)*min=a;
    if(b<*max)*max=b;
    if(*min<b)*min=b;
}

void func_001108F0(int a0, int a1, int a2, int a3, int a4, int a5) {
    extern int D_001E7CE0;
    int func_00121FC0(...);
    func_00121FC0(a0, a1, a2, a3, a4, a5, (int)&D_001E7CE0);
}

void func_00110920(void) {
    int func_001222C0(...);
    func_001222C0();
}

void func_00110930(void) {
    int func_001224D0(...);
    func_001224D0();
}

unsigned char func_00110A20(float a,float b,float c,float d,float *out)
{
    float x=b-D_001D333C;
    float y=d-D_001D333C;
    if (x<c && y<a) {
        if(c<b) {*out=b-c;return 1;}
        *out=d-a;return 1;
    }
    return 0;
}
typedef struct { unsigned int words[7]; } CopyBlock_00110370;
