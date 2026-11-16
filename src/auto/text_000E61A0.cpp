/* 15 functions from 0x000E61A0 to 0x000E7115, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000E6540(undefined4 a,int p){extern int D_001E5840;int func_0012F120(...);int func_0012F2E0(...);int func_001105E0(...);int func_00110000(...);int func_00110330(...);int i=0;char tmp[48];if(D_001E5840){int*item=(int*)(p+0x44);int*out=(int*)(p+0x2c4);do{func_0012F120(tmp);int n=i;float step=*(float*)(*(int*)(p+0x44)+0x38);float v=(float)n*step;v=v+v;*(int*)(tmp+0x30)=0;*(int*)(tmp+0x34)=0;*(float*)(tmp+0x38)=v;*((char*)item+8)=1;*out=(int)item;func_0012F2E0(tmp,p);func_001105E0(*(int*)(*item+0x2c),tmp,0);func_00110000(*(int*)(*item+0x2c));func_00110330(*(int*)(*item+0x2c),1);i++;out++;item+=4;}while(i!=D_001E5840);}}

void func_000E6600(undefined4 a,int p){int func_0009CBE0(...);int func_0013E469(...);int func_00110300(...);extern char D_001DBD80,D_001DC1E8;char tmp[52];*(int*)(p+0xba4)=func_0009CBE0(&D_001DBD80);int i=0;int*out=(int*)(p+0xb90);do{i++;func_0013E469(tmp,&D_001DC1E8,i);int x=func_00110300(*(int*)(*(int*)(p+0xba4)+0x2c),tmp,0x18);*out=x;*(unsigned char*)(x+0x20)|=1;out++;}while(i!=4);short*q=(short*)(*(int*)(p+0xb90)+0x20);*q-=1;*(int*)(p+0xb8c)=3;*(int*)(p+0xba0)=0xbf800000;}

void func_000E68E0(undefined4 a,int p){int func_0009CBE0(...);int func_0013E469(...);int func_00110330(...);int func_0009CBF0(...);extern char D_001DBD80,D_001DC3A4,D_001DC39C;char tmp[256];int base=func_0009CBE0(&D_001DBD80);int i=0;int*out=(int*)(p+0xd94);do{i++;func_0013E469(tmp,&D_001DC3A4,i);int x=func_0009CBE0(tmp);out[1]=x;func_00110330(*(int*)(x+0x2c),0);out[0]=0;out+=10;}while(i!=3);*(int*)(p+0xe18)=0x40a00000;i=0;out=(int*)(p+0xe0c);do{i++;func_0013E469(tmp,&D_001DC39C,i);*out=func_0009CBF0(base,tmp)+4;out++;}while(i!=3);}

void func_000E6C30(void)
{
  int func_00103210(...);
  extern undefined D_001DC130;
  int func_00102E80(...);
  int func_000687F0(...);
  int func_0009CBE0(...);
  extern undefined D_001D7BE0;
  int func_000E30B0(...);
  int func_00110330(...);
  int func_000A27A0(...);
  int func_000A29C0(...);
  int func_000A2840(...);
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = func_00103210(((undefined *)&D_001DC130));
  func_00102E80(uVar3);
  func_000687F0();
  iVar4 = func_0009CBE0(((undefined *)&D_001D7BE0));
  iVar1 = *(int *)(iVar4 + 0x110);
  func_00102E80(*(undefined4 *)(iVar1 + 0xe1c));
  *(undefined4 *)(iVar1 + 0x40) = 0;
  iVar4 = *(int *)(iVar4 + 0x2c);
  for (puVar2 = *(undefined4 **)(iVar4 + 0x28); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[3]) {
    func_000E30B0(*puVar2,1);
  }
  func_00110330(iVar4,1);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  func_000A27A0(0x32,0,0,0);
  func_000A29C0(0);
  func_000A2840();
  return;
}

void func_000E7050(void)
{
  extern undefined4 D_003080AC;
  extern undefined4 D_003234B8;
  extern undefined4 D_00322490;
  int func_000A27A0(...);
  extern undefined4 D_003227EC;
  extern undefined D_003227C8;
  extern undefined4 D_00322808;
  if (D_003080AC != 2) {
    if (((D_003227C8 == '\0') && ((s32)D_003234B8 < 3)) || (0x32 > (s32)D_00322490)) {
      func_000A27A0(0x32,1,D_003227EC,D_00322808);
      return;
    }
    func_000A27A0(0x32,0,0,0);
  }
  return;
}

void func_000E70A0(void) { int func_0009CBE0(...); int func_0009D3E0(...); int func_0009D640(...); int func_0005F310(...); int func_000B54D0(...); extern char D_001D7BE0; int p=func_0009CBE0(&D_001D7BE0); func_0009D3E0(p);func_0009D640(p);func_0005F310(0);func_000B54D0(0); }

void func_000E70D0(void)
{
  int func_000B54D0(...);
  int func_000451B0(...);
  int func_000E70A0(...);
  int func_000451C0(...);
  func_000B54D0(1);
  func_000451B0(&func_000E70A0);
  func_000451C0();
  return;
}

void func_000E70F0(void){int func_0009CBE0(...);int func_0009D3E0(...);int func_0009D640(...);int func_000B54D0(...);extern char D_001D7BE0;int p=func_0009CBE0(&D_001D7BE0);func_0009D3E0(p);func_0009D640(p);func_000B54D0(0);}

