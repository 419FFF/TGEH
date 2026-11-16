/* 13 functions from 0x000C0B90 to 0x000C1AFB, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00307DF8, D_00314D90;
extern float D_00307DB4, D_001D27B0, D_001D27B8, D_001D27F8, D_001D35F8, D_001E461C, D_001D2B64, D_001D35FC, D_001D4EB0, D_001D2C00, D_001D27EC, D_001D9A24, D_001D5D00;
int func_00110060(...);
int func_0012E590(...);
int func_0012EA60(...);
int func_0012ED20(...);
int func_00068DA0(...);
int func_0012ECA0(...);
int func_000120B0(...);
int func_0012F7A0(...);
int func_0012E6D0(...);
int func_0012E940(...);
int func_00131760(...);
int func_0012EB70(...);
int func_001105E0(...);
int func_0009D3E0(...);
float func_00131230(...);
void func_000C0B90(int p) {
    volatile char frame[0xad4]; frame[0]=0;
    int state=*(int *)(p+0x110);
    int b=*(int *)(D_00307DF8+0x110);
    func_00110060(*(int *)(p+0x2c),frame+0x60);
    func_00110060(*(int *)(D_00307DF8+0x2c),frame+0xf8);
    func_00110060(*(int *)(D_00314D90+0x2c),frame+0x140);
    switch(state) {
    case 1:
        *(int *)(p+0x110)=2;
        *(float *)(p+0x114)=D_00307DB4+D_001D27B0;
        func_0012EA60(p+0x118);
        for(int i=0;i<11;i++) ((int *)(p+0x150))[i]=0;
        break;
    case 2:
        func_0012ED20(frame+0x30,p+0x118,(*(float *)(p+0x114)-D_00307DB4)*D_001D27F8+D_001D35F8);
        func_0012ED20(frame+0x40,frame+0x30,D_001E461C);
        func_0012E590(frame+0x80,frame+0x40);
        if (*(float *)(p+0x114)<D_00307DB4) *(int *)(p+0x110)=3;
        func_00068DA0(frame+0x60,frame+0x50,0);
        break;
    case 3: *(int *)(p+0x110)=4; *(float *)(p+0x114)=D_00307DB4+D_001D2B64; func_0012EA60(p+0x118); func_0012ECA0(p+0x118,0x42480000); break;
    case 4:
        if(*(char *)(p+0x174)&&*(char *)(p+0x128)){func_000120B0(p+0x150,0xbf800000,1,1);*(int *)(p+0x110)=5;return;}
        func_00068DA0(frame+0x60,frame+0x50,0);
        func_00110060(*(int *)(D_00307DF8+0x2c),frame+0xa40);
        func_0012F7A0(frame+0x200,frame+0xa40);
        func_0012E6D0(frame+0x30,frame+0x200,frame+0x80);
        func_0012EA60(frame+0x30);
        func_0012ED20(frame+0x50,frame+0x30,0x41a00000);
        func_0012E590(frame+0x80,frame+0x50);
        if(func_0012E940(p+0x118)>D_001D35FC) func_0012ECA0(p+0x118,D_001D35FC/func_0012E940(p+0x118));
        func_0012ED20(frame+0x40,p+0x118,D_001E461C);
        func_0012E590(frame+0x80,frame+0x40);
        if(*(float *)(p+0x114)<D_00307DB4)*(int *)(p+0x110)=7;
        break;
    case 5: *(int *)(p+0x110)=6; func_0012ECA0(p+0x118,0xbf800000); break;
    case 6:
        func_00068DA0(frame+0x60,frame+0x50,0);
        func_00110060(*(int *)(D_00314D90+0x2c),frame+0xa40);
        func_0012F7A0(frame+0x200,frame+0xa40);
        func_0012E6D0(frame+0x30,frame+0x200,frame+0x80);
        func_0012EA60(frame+0x30);
        func_0012ED20(frame+0x50,frame+0x30,0x41f00000);
        func_0012E590(frame+0x80,frame+0x50);
        if(func_0012E940(p+0x118)>D_001D4EB0)func_0012ECA0(p+0x118,D_001D4EB0/func_0012E940(p+0x118));
        func_0012ED20(frame+0x40,p+0x118,D_001E461C);
        func_0012E590(frame+0x80,frame+0x40);
        if(*(float *)(p+0x114)<D_00307DB4)*(int *)(p+0x110)=7;
        break;
    case 7: *(int *)(p+0x110)=8; *(float *)(p+0x114)=D_00307DB4+D_001D2B64; *(float *)(p+0x124)=func_0012E940(p+0x118); func_0012EA60(p+0x118); break;
    case 8: func_0012ED20(frame+0x40,p+0x118,(*(float *)(p+0x114)-D_00307DB4)**(float *)(p+0x124)*D_001D2C00*D_001E461C); func_0012E590(frame+0x80,frame+0x40); if(*(float *)(p+0x114)<D_00307DB4)*(int *)(p+0x110)=10; break;
    case 9: *(int *)(p+0x110)=10; break;
    case 10: func_0009D3E0(p); *(int *)(p+0x110)=0; break;
    case 11: func_00131760();func_00131760();*(float *)(p+0x118)=func_00131760()-D_001D27EC;*(int *)(p+0x11c)=0x3f800000;*(int *)(p+0x110)=12;*(float *)(p+0x114)=D_00307DB4+D_001D27B0;break;
    case 12: if(*(float *)(p+0x114)<D_00307DB4){func_00110060(*(int *)(p+0x2c),frame+0x60);func_0012E590(frame+0x80,p+0x118);func_0012EB70(frame+0x90,p+0x118);func_0012ECA0(frame+0x90,*(int *)(b+0x310));func_0012E590(frame+0x80,frame+0x90);func_001105E0(*(int *)(p+0x2c),frame+0x60,0);}break;
    case 13: func_0012E590(frame+0x80,p+0x134);func_00131230(D_00307DB4*D_001D9A24+*(float *)(p+0x130));func_001105E0(*(int *)(p+0x2c),frame+0x60,0);break;
    }
}

unsigned char func_000C1370(void)
{
  extern int D_00314D94;
  if (D_00314D94 == 1) return 0;
  if (D_00314D94 == 2) {
    D_00314D94 = 0;
    return 1;
  }
  return 0;
}

void func_000C14F0(void)
{
  int func_000A2780(...);
  extern undefined4 D_00314D94;
  int func_000687F0(...);
  int func_0009C590(...);
  extern undefined D_001D9A40;
  int func_0009D280(...);
  int func_0005CCC0(...);
  int func_0005F310(...);
  int func_00116FB0(...);
  extern undefined4 D_00314E58;
  extern undefined4 D_00314E54;
  undefined4 uVar1;
  
  func_000A2780(0x33,0,0);
  if (D_00314D94 == 1) {
    func_000687F0();
    uVar1 = func_0009C590(((undefined *)&D_001D9A40));
    func_0009D280(uVar1);
    func_0005CCC0(1);
    func_0005F310(0);
    D_00314D94 = 2;
    func_00116FB0(D_00314E58);
    D_00314E58 = 0;
    func_00116FB0(D_00314E54);
    D_00314E54 = 0;
  }
  return;
}

void func_000C1720(void) {
    int func_000BE260(...);
    func_000BE260();
}

void func_000C1730(void)
{
  extern undefined4 D_003080AC;
  int func_000BEB30(...);
  if (D_003080AC != 2) {
    func_000BEB30();
    return;
  }
  return;
}

