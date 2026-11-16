/* 27 functions from 0x0010F399 to 0x00110368, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

unsigned int *func_0010F750(char *s,unsigned char type,int extra)
{
 int func_00116A90(...);int func_0012F120(...);unsigned int *p;char *q;int len;int offset;char c;
 if(s){q=s;do{c=*q;q++;}while(c);len=(int)q-(int)(s+1);p=(unsigned int*)func_00116A90(len+extra+1,1,1);q=(char*)p+extra;*(char **)(p+14)=q;offset=(int)q-(int)s;do{c=*s;*(char *)((int)s+offset)=c;s++;}while(c);}
 else p=(unsigned int*)func_00116A90(extra,1,1);
 *(unsigned char*)((char*)p+0x22)=type;func_0012F120((char*)p+0x40);func_0012F120((char*)p+0x80);
 p[4]=0;p[5]=0;p[6]=0;p[7]=0x3f800000;p[3]=0x3f800000;p[0]=0;p[1]=0;p[2]=0;return p;
}

void func_0010F7F0(int obj,int *node)
{
 extern int *D_00326128; int func_0011C3E0(...); int func_00116FB0(...);
 int *prev,*cur,*next; int owner=obj; int count=2;
 do {
  unsigned short type=*(unsigned short *)(node+1);
  cur=*(int **)(owner+0x28+type*4); prev=0;
  while(cur){
   if(cur==node){
    if(type==1 && D_00326128){cur=D_00326128;while(cur){if(cur[2]==owner){func_0011C3E0(cur);func_00116FB0(cur);break;}cur=(int*)*cur;}}
    if(prev)prev[3]=node[3];else *(int **)(owner+0x28+type*4)=(int*)node[3];
    break;
   }
   prev=cur;cur=(int*)cur[3];
  }
  owner=*node;node=(int*)node[2];
 }while(--count);
 if((int)node>0)func_00116FB0(node);else func_00116FB0(owner);
}

int func_0010F8A0(void)
{
 extern int *D_00326124; extern int D_0032531C[]; int func_00116FB0(...);
 int *prev=0,*p=D_00326124,*next,*owner; unsigned int type; int fn;
 while(p){next=(int*)p[3];if((short)p[1])*(short*)(p+1)=(short)p[1]-1;
 if((short)p[1]==0){owner=(int*)*p;if(prev)prev[3]=(int)next;else D_00326124=next;
 func_00116FB0(*(int*)((char*)owner+0x28));type=*(unsigned char*)((char*)owner+0x22);fn=*(int*)((char*)D_0032531C+type*0x1c);if(fn)((void(*)(int))fn)((int)owner);func_00116FB0((int)owner);
 }else prev=p;p=next;}
 return D_00326124!=0;
}

void func_0010F930(int param_1)
{
  ushort *puVar1;
  int *piVar2;
  
  for (piVar2 = *(int **)(param_1 + 0x28); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
    if ((*(byte *)(*piVar2 + 0x20) & 2) == 0) {
      puVar1 = (ushort *)(*piVar2 + 0x20);
      *puVar1 = *puVar1 | 2;
      func_0010F930(*piVar2);
    }
  }
  return;
}

void func_0010FB70(int a0, int a1, int a2) {
    int func_0010F970(...);
    func_0010F970(a0, a1, a2, 0, a2, 16, 0, 0);
}

void *memcpy(void *,const void *,unsigned int);
void func_0010FBA0(int p, int value)
{
 int func_00116A90(...),func_0011C3B0(...),func_0011C3E0(...),func_00116FB0(...);
 extern int *D_00326128;
 int obj=*(int *)(p+0x2c);
 if(obj==0) return;
 {
  int old=*(int *)(obj+0x10);
  *(int *)(obj+0x10)=value;
  if(old==0) {
   int h=func_00116A90(0xc,1,1);
   func_0011C3B0(D_00326128,h,p);
  } else if(value==0) {
   int *it=D_00326128;
   while(it && it[2]!=p) it=(int *)*it;
   if(it) { func_0011C3E0(it); func_00116FB0(it); }
  }
 }
}

void func_0010FC10(void)
{
 extern int *D_00326128;
 int func_0010F930(...);
 int *it;
 for(it=D_00326128;it;it=(int *)*it) {
  int obj=it[2];
  int *child=*(int **)(obj+0x28);
  *(unsigned short *)(obj+0x20)|=2;
  while(child) {
   int c=*child;
   if ((*(unsigned char *)(c+0x20)&2)==0) {
    *(unsigned short *)(c+0x20)|=2;
    func_0010F930(*child);
   }
   child=(int *)child[3];
  }
 }
}

void func_0010FF70(int p, unsigned int *data)
{
 extern int D_00329238;
 int func_0010F930(...);
 int obj=*(int *)(p+0x2c);
 unsigned int *dst;
 if(obj) {
  if(*(int *)(obj+0x14)!=D_00329238) *(unsigned int *)(obj+0x18)^=1;
  *(int *)(obj+0x14)=D_00329238;
  dst=(unsigned int *)(obj+0x20+(*(int *)(obj+0x18)*64));
  memcpy(dst,data,64);
  *(unsigned char *)(obj+6)&=0xfe;
  *(unsigned char *)(p+0x20)|=2;
  func_0010F930(p);
  return;
 }
 if(*(int *)(p+0xd4)!=D_00329238) *(unsigned char *)(p+0x23)^=1;
 *(int *)(p+0xd4)=D_00329238;
 dst=(unsigned int *)(p+((*(unsigned char *)(p+0x23)+1)*64));
 memcpy(dst,data,64);
 func_0010F930(p);
}

void func_00110000(int p)
{
 int func_0010F930(...);
 if(p) {
   int child=*(int *)(p+0x2c), *src, *dst;
   if(child) { int n=*(int *)(child+0x18); src=(int *)(child+n*64+32); dst=(int *)(child-n*64+96); }
   else { int n=*(unsigned char *)(p+0x23); src=(int *)(p+(n+1)*64); dst=(int *)(p+(2-n)*64); }
   for(int i=16;i>0;--i) *dst++=*src++;
   *(unsigned char *)(p+0x20)|=2; func_0010F930(p);
 }
}

void func_00110060(int p, unsigned int *out)
{
 int func_0010FC60(...);
 unsigned int *src;
 if (!p) return;
 if (!out) return;
 if (*(unsigned char *)(p+0x20)&2) func_0010FC60(p);
 src=(unsigned int *)(p+((*(unsigned char *)(p+0x23)+1)*0x40));
 {
  int i;
  for(i=0;i<16;i++) out[i]=src[i];
 }
}

void func_001100A0(int param_1, int *param_2)
{
  int func_0010FC60(...);
  if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
    func_0010FC60(param_1);
  }
  *param_2 = (*(byte *)(param_1 + 0x23) + 1) * 0x40 + param_1;
  return;
}

void func_001100D0(int p,int *out)
{
 int func_0010FC60(...); int child=*(int *)(p+0x2c);
 if(child) {
   if(*(unsigned char *)(p+0x20)&2)func_0010FC60(p);
   int n=*(int *)(child+0x18);
   memcpy(out,(void *)(child+n*64+0x20),64);
 } else if(out) {
   if(*(unsigned char *)(p+0x20)&2)func_0010FC60(p);
   unsigned int n=(unsigned int)*(unsigned char *)(p+0x23)+1;
   memcpy(out,(void *)(p+n*64),64);
 }
}

void func_00110140(int param_1, undefined4 *param_2)
{
  *param_2 = *(undefined4 *)(param_1 + 0xc0);
  param_2[1] = *(undefined4 *)(param_1 + 0xc4);
  param_2[2] = *(undefined4 *)(param_1 + 200);
  param_2[3] = *(undefined4 *)(param_1 + 0xcc);
  return;
}

int func_00110290(int param_1, undefined4 param_2, uint param_3)
{
  extern undefined4 D_003291C0;
  int func_0011B4F0(...);
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x24) == D_003291C0) {
    return 0;
  }
  *(int *)(param_1 + 0x24) = D_003291C0;
  if ((*(int *)(param_1 + 0x38) != 0) &&
     (iVar2 = func_0011B4F0(*(int *)(param_1 + 0x38),param_2), iVar2 == 0)) {
    return param_1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (((param_3 & *(ushort *)((int)puVar1 + 6)) == 0) &&
       (iVar2 = func_00110290(*puVar1,param_2,param_3), iVar2 != 0)) break;
    puVar1 = (undefined4 *)puVar1[3];
  }
  return iVar2;
}

void func_00110300(int param_1,int param_2,int param_3)
{
 extern int D_003291C0; int func_00110290(...); int n;
 if(param_1){func_00110290(param_1,param_2,param_3);n=D_003291C0;n++;D_003291C0=n;}
}

void func_00110330(int param_1,unsigned char flag)
{
 int p;
 if(flag) *(unsigned char *)(param_1+0x20) &= 0xfe;
 else *(unsigned char *)(param_1+0x20) |= 1;
 for(p=*(int *)(param_1+0x28);p!=0;p=*(int *)(p+0xc)) {
   if(flag) *(unsigned char *)(p+6) &= 0xef;
   else *(unsigned short *)(p+6) |= 0x10;
 }
}
