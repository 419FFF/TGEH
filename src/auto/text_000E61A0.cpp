/* 15 functions from 0x000E61A0 to 0x000E7115, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000E6540(undefined4 a,int p){extern int D_001E5840;int func_0012F120(...);int func_0012F2E0(...);int func_001105E0(...);int func_00110000(...);int func_00110330(...);int i=0;char t[48];if(D_001E5840){int*item=(int*)(p+0x44);int*out=(int*)(p+0x2c4);do{func_0012F120(t);float f=(float)i*(float)(*(int*)(p+0x44)+0x38);f=f+f;*(int*)(t+0x30)=0;*(int*)(t+0x34)=0;*(float*)(t+0x38)=f;*((char*)item+8)=1;*out=(int)item;func_0012F2E0(t,p);func_001105E0(*(int*)(*item+0x2c),t,0);func_00110000(*(int*)(*item+0x2c));func_00110330(*(int*)(*item+0x2c),1);i++;out++;item+=4;}while(i!=D_001E5840);}}

void func_000E6600(undefined4 a,int p){int func_0009CBE0(...);int func_0013E469(...);int func_00110300(...);extern char D_001DBD80,D_001DC1E8;char tmp[52];*(int*)(p+0xba4)=func_0009CBE0(&D_001DBD80);int i=0;int*out=(int*)(p+0xb90);do{i++;func_0013E469(tmp,&D_001DC1E8,i);int x=func_00110300(*(int*)(*(int*)(p+0xba4)+0x2c),tmp,0x18);*out=x;*(unsigned char*)(x+0x20)|=1;out++;}while(i!=4);short*q=(short*)(*(int*)(p+0xb90)+0x20);*q-=1;*(int*)(p+0xb8c)=3;*(int*)(p+0xba0)=0xbf800000;}

void func_000E68E0(undefined4 a,int p){int func_0009CBE0(...);int func_0013E469(...);int func_00110330(...);int func_0009CBF0(...);extern char D_001DBD80,D_001DC3A4,D_001DC39C;char t[256];int b=func_0009CBE0(&D_001DBD80);int i=0;int*basep=(int*)(p+0xd94);do{i++;func_0013E469(t,&D_001DC3A4,i);int x=func_0009CBE0(t);basep[1]=x;func_00110330(*(int*)(x+0x2c),0);basep[0]=0;int n=i;basep+=10;if(n==3)break;}while(1);*(int*)(p+0xe18)=0x40a00000;i=0;int*out=(int*)(p+0xe0c);do{i++;func_0013E469(t,&D_001DC39C,i);int v=func_0009CBF0(b,t)+4;*out=v;int n=i;out++;if(n==3)break;}while(1);}

void func_000E69A0(int param_1)
{
  int func_00110060(...);
  extern undefined4 D_00307DF8;
  int func_001105E0(...);
  int func_00110000(...);
  int func_00103990(...);
  int func_00131760(...);
  extern undefined4 D_001D31C8;
  longdouble lVar1;
  longdouble lVar2;
  undefined1 local_50 [76];
  
  func_00110060(*(undefined4 *)(D_00307DF8 + 0x2c),local_50);
  func_001105E0(*(undefined4 *)(*(int *)(param_1 + 0xe1c) + 0x2c),local_50,0);
  func_00110000(*(undefined4 *)(*(int *)(param_1 + 0xe1c) + 0x2c));
  func_00103990(*(undefined4 *)(param_1 + 0xe1c),1);
  lVar2 = (longdouble)func_00131760();
  lVar1 = (longdouble)D_001D31C8;
  *(undefined4 *)(param_1 + 0xe28) = 1;
  *(float *)(param_1 + 0xe24) = (float)(lVar2 * lVar1);
  return;
}

void func_000E6A20(void)
{
  extern char D_003234D4, D_003227C9, D_003227C8, D_003234AC;
  extern int D_003227F4, D_00322498, D_00307DF8, D_001E583C, D_003234B0, D_003234B4, D_003234B8;
  extern int D_003227F0, D_003227EC, D_00322808, D_003227CC, D_001E5840;
  extern float D_003227BC, D_003227C0;
  extern char D_001D7BE0, D_001D3A20, D_001DC130, D_001DC3C0;
  int func_0009CBE0(...);
  int func_00110060(...);
  int func_00012040(...);
  int func_0009D280(...);
  int func_0009D780(...);
  int func_0009D8D0(...);
  int func_0009D9E0(...);
  int func_0012F120(...);
  int func_0009C7A0(...);
  int func_000E5DD0(...);
  int func_000E5E60(...);
  int func_000E6540(...);
  int func_000E5EB0(...);
  int func_000E60A0(...);
  int func_000E6600(...);
  int func_000E6690(...);
  int func_000E68E0(...);
  int func_000E69A0(...);
  int func_001100A0(...);
  int func_0012F7A0(...);
  int func_000A29C0(...);
  int func_000A2810(...);
  int func_00103210(...);
  int func_00103990(...);
  int func_001031A0(...);
  int func_000687C0(...);
  int func_000B5520(...);
  int iVar3;
  int iVar1;
  int *p;
  long double t;
  int loc[5];

  D_003234D4 = 0;
  iVar3 = func_0009CBE0(&D_001D7BE0);
  iVar1 = *(int *)(iVar3 + 0x110);
  *(int *)(iVar1 + 0xd90) = **(int **)(*(int *)(iVar3 + 0x2c) + 0x2c);
  func_00110060(*(int *)(iVar3 + 0x2c), iVar1 + 0xd50);
  D_003227F4 = 0;
  D_00322498 = 0;
  func_00012040(D_00307DF8, **(int **)(*(int *)(iVar3 + 0x2c) + 0x2c));
  func_0009D280(iVar3);
  func_0009D780(iVar3);
  func_0009D8D0(iVar3);
  func_0009D9E0(iVar3);
  *(int *)(iVar1 + 0x40) = 1;
  func_0012F120(iVar1);
  *(int *)(iVar1 + 0x30) = 0;
  *(int *)(iVar1 + 0x34) = 0xc59c4000;
  *(int *)(iVar1 + 0x38) = 0;
  func_0009C7A0(iVar3, &D_001D3A20, 0);
  *(int *)(iVar1 + 0xb80) = 0x43480000;
  *(int *)(iVar1 + 0xb7c) = 0x44480000;
  *(int *)(iVar1 + 0xb84) = 1;
  func_000E5DD0(iVar3, iVar1);
  func_000E5E60(iVar3, iVar1);
  func_000E6540(iVar3, iVar1);
  func_000E5EB0(iVar3, iVar1);
  func_000E60A0(iVar3, iVar1);
  func_000E6600(iVar3, iVar1);
  func_000E6690(iVar3, iVar1);
  func_000E68E0(iVar3, iVar1);
  func_000E69A0(iVar1);
  func_001100A0(*(int *)(*(int *)(iVar1 + 0x2f0) + 0x2c), &loc[0]);
  p = *(int **)(*(int *)(iVar1 + 0x2f0) + 0x2c);
  loc[1] = p[0];
  loc[2] = p[1];
  loc[3] = p[2];
  func_0012F7A0(&loc[1], loc[0]);
  *(int *)(iVar1 + 0xe34) = loc[1];
  *(int *)(iVar1 + 0xedc) = -1;
  *(int *)(iVar1 + 0xee0) = -1;
  D_001E583C = -1;
  D_003234B0 = 0;
  D_003234B4 = 0;
  D_003234B8 = 0;
  D_003227C9 = 0;
  D_003227C8 = 0;
  t = *(float *)(D_003227F0 + 0x2fc);
  D_003227BC = t;
  D_003234AC = 0;
  D_003227EC = 0;
  D_00322808 = 3;
  D_003227CC = 0;
  D_001E5840 = 3;
  D_003227C0 = t;
  func_000A29C0(1);
  func_000A2810();
  func_00103990(func_00103210(&D_001DC130), 1);
  func_001031A0(func_00103210(&D_001DC130), 0);
  func_000687C0(&D_001DC3C0);
  func_000B5520(1);
}

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

void func_000E6CD0(void) { extern int D_00307DF8,D_00313B34,D_00307D08; extern float D_001D27B8; int func_00110060(...); int func_0012FE20(...); int func_001105E0(...); char buf[64]; int ptr=*(int*)(D_00307DF8+0x2c);func_00110060(ptr,buf);float v=*(float*)(*(int*)(D_00307D08+0x10)+D_00313B34*0x18);if(v>D_001D27B8)func_0012FE20(buf,0,0,0);if(v<D_001D27B8)func_0012FE20(buf,0,0x40490fdb,0);func_001105E0(ptr,buf,0); }

void func_000E6FC0(void) { extern float D_001E461C,D_003227F4,D_001DBF44,D_001D6508,D_001D27FC;extern char D_001D7BE0;int func_0009CBE0(...);int func_000B6C80(...);int func_000A27E0(...);char func_000400D0(...);int func_000E5AC0(...);int p=func_0009CBE0(&D_001D7BE0);if(*(int*)(*(int*)(p+0x110)+0x40)==1)D_003227F4=D_003227F4+D_001E461C;if(D_003227F4>D_001DBF44){D_003227F4=150.0f;func_000B6C80();}func_000A27E0(D_003227F4*D_001D6508*D_001D27FC);if(func_000400D0())func_000B6C80();func_000E5AC0();}

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

