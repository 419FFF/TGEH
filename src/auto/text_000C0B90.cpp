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

void func_000A2780(int, int, float);
void func_000C1390(void)
{
    extern undefined4 D_00314D94, D_00314E44, D_00325194;
    extern undefined4 D_00314DE8, D_00314DEC, D_00314DF0, D_00314DF4;
    extern undefined4 D_00314D98, D_00314D9C, D_00314DA0, D_00314DA4, D_00314DA8, D_00314DAC, D_00314DB0, D_00314DB4;
    extern undefined D_001D9A48, D_001D9A40, D_001D9A30, D_001D9A28;
    int func_0005CCC0(...);
    int func_0009C590(...);
    int func_00107C40(...);
    int func_00110000(...);
    int func_00110420(...);
    int func_00110480(...);
    int func_000687C0(...);
    int func_000BDE10(...);
    __declspec(align(16)) float m[16];
    float *mp;
    int obj;
    int p;
    mp = m;
    func_000A2780(0, 1, 1.0f);
    D_00314E44 = 0;
    if (D_00314D94 != 0)
        return;
    func_0005CCC0(0xc);
    obj = func_0009C590((undefined *)&D_001D9A48);
    func_00110060(*(int *)(obj + 0x2c), mp);
    D_00314DE8 = *(undefined4 *)&mp[0];
    D_00314DEC = *(undefined4 *)&mp[1];
    D_00314DF0 = *(undefined4 *)&mp[2];
    D_00314DF4 = *(undefined4 *)&mp[3];
    obj = func_0009C590((undefined *)&D_001D9A40);
    func_00107C40(D_00325194, obj, obj);
    func_0009D3E0(obj);
    obj = func_0009C590((undefined *)&D_001D9A30);
    func_00110060(*(int *)(obj + 0x2c), mp + 4);
    func_001105E0(*(int *)(D_00307DF8 + 0x2c), mp + 8, 0);
    func_00110000(*(int *)(D_00307DF8 + 0x2c));
    p = *(int *)(D_00307DF8 + 0x2c);
    func_00110420(p, *(int *)*(int *)(p + 0x2c));
    p = *(int *)(obj + 0x2c);
    func_00110480(*(int *)*(int *)(p + 0x2c), *(int *)(D_00307DF8 + 0x2c), 8);
    D_00314D94 = 1;
    D_00314D98 = 0;
    D_00314D9C = 0;
    D_00314DA0 = 0;
    D_00314DA4 = 0;
    D_00314DA8 = 0;
    D_00314DAC = 0;
    D_00314DB0 = 0;
    D_00314DB4 = 0;
    func_000687C0((undefined *)&D_001D9A28);
    func_000BDE10();
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

void func_000C1570(void)
{
  int func_001100A0(...);
  extern int D_00307DF8, D_00314D90, D_00313B60;
  int func_0012E5F0(...);
  int func_0012ECA0(...);
  extern float D_001D35FC, D_001D9A58, D_001D27FC, D_001D2AF4, D_001D29E0, D_00314DE8, D_001D9A54;
  int func_00130620(...);
  int func_00130590(...);
  int func_001105E0(...);
  float *pa, *pb;
  float t[3];
  float v[4];
  __declspec(align(16)) float m[16];
  func_001100A0(*(int *)(D_00307DF8 + 0x2c), &pa);
  func_001100A0(*(int *)(D_00314D90 + 0x2c), &pb);
  func_0012E5F0(v, (int)pa + 0x30, (int)pb + 0x30);
  func_0012ECA0(v, 0x3f000000);
  v[1] = (double)v[1] + D_001D35FC;
  if ((double)pb[12] <= pa[12])
    t[0] = pb[12];
  else
    t[0] = pa[12];
  t[0] = (double)t[0] - D_001D9A58;
  t[1] = (double)v[1] + D_001D27FC;
  t[2] = (double)pa[14] * D_001D2AF4 - (double)pb[14] * D_001D29E0;
  if ((double)D_00314DE8 - D_001D9A54 < t[2])
    t[2] = (double)D_00314DE8 - D_001D9A54;
  func_00130620(m, t, v, 0);
  m[12] = t[0];
  m[13] = t[1];
  m[14] = t[2];
  func_00130590(m);
  m[15] = 1.0f;
  func_001105E0(D_00313B60, m, 1);
}

void func_000C16B0(void)
{
  int func_00110300(...);
  extern undefined4 D_00308158;
  extern undefined D_001D9A6C;
  int func_00110330(...);
  extern undefined D_001D9A5C;
  extern undefined D_001D7D08;
  undefined4 uVar1;
  
  uVar1 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D9A6C),0x18,1);
  func_00110330(uVar1);
  uVar1 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D9A5C),0x18,1);
  func_00110330(uVar1);
  uVar1 = func_00110300(*(undefined4 *)(D_00308158 + 0x2c),((undefined *)&D_001D7D08),0x18);
  func_00110330(uVar1,0);
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

void func_000C1740(void) { extern int D_00314D90,D_00307DF8; extern char D_001D9794,D_001D9904; int func_0009C590(...),func_00110060(...),func_00103210(...),func_00102E80(...); volatile char frame[0x8c]; int *s; func_0009C590(&D_001D9794); s=*(int**)(D_00314D90+0x110); func_00110060(*(int*)(D_00314D90+0x2c),frame+0x14); func_00110060(*(int*)(D_00307DF8+0x2c),frame+0x5c); func_00102E80(func_00103210(&D_001D9904)); *s=0x11; func_0009C590(&D_001D9794); **(int**)(D_00314D90+0x110)=0x11; }

void func_000C17C0(void) { extern int D_00313B60,D_00308158; extern char D_001D7E9C,D_001D9A6C,D_001D9A5C,D_001D7D08; int func_000F91D0(...),func_00110420(...),func_00110480(...),func_00110000(...),func_00110300(...),func_00110330(...); void func_000C1570(...); int p=func_000F91D0(&D_001D7E9C); func_00110420(D_00313B60,**(int**)(D_00313B60+0x2c)); func_00110480(*(int*)(p+0xe0),D_00313B60,8); func_000C1570(); func_00110000(D_00313B60); int a=func_00110300(*(int*)(D_00308158+0x2c),&D_001D9A6C,0x18,0); func_00110330(a); int b=func_00110300(*(int*)(D_00308158+0x2c),&D_001D9A5C,0x18,0); func_00110330(b); int c=func_00110300(*(int*)(D_00308158+0x2c),&D_001D7D08,0x18); func_00110330(c,1); return; }

extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
void func_000C1870(void)
{
  extern undefined D_001D9AAC;
  extern undefined4 D_00311524;
  extern undefined D_00314E80;
  int func_00131990(...);
  extern undefined D_001D9A9C;
  int func_000A1BB0(...);
  extern undefined4 D_00307D00;
  extern undefined D_001D9A90;
  extern undefined D_001D29C7;
  int func_000688D0(...);
  extern undefined4 D_00314EF8;
  int func_0011BF40(...);
  extern undefined D_001D9A78;
  extern undefined4 D_00314EC0;
  int func_0011BDD0(...);
  extern undefined4 D_00314EDC;
  extern undefined D_00314ED8;
  int func_0009C7A0(...);
  extern undefined D_001D2968;
  int func_000A22B0(...);
  int func_000A1D10(...);
  int func_0002D7B0(...);
  int func_000A6680(...);
  extern unsigned short D_0031151E;
  extern undefined4 D_00314E70;
  int func_0009C590(...);
  int func_001105E0(...);
  int func_00110000(...);
  int func_0005CCC0(...);
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int n;
  int *p;

  iVar2 = func_0009C590(((undefined *)&D_001D9AAC));
  D_00311524 = D_00311524 | 1;
  puVar1 = *(undefined4 **)(iVar2 + 0x110);
  func_001105E0(*(undefined4 *)(D_00307DF8 + 0x2c), ((undefined *)&D_00314E80), 0);
  func_001105E0(*(undefined4 *)(iVar2 + 0x2c), ((undefined *)&D_00314E80), 0);
  func_00110000(*(undefined4 *)(D_00307DF8 + 0x2c));
  func_00110000(*(undefined4 *)(iVar2 + 0x2c));
  func_00131990(((undefined *)&D_001D9A9C));
  uVar3 = func_000A1BB0(D_00307D00, ((undefined *)&D_001D9A90));
  puVar1[0xb1] = uVar3;
  func_00131990(((undefined *)&D_001D29C7));
  func_000688D0();
  D_00314EF8 = func_0011BF40(((undefined *)&D_001D9A78), 1);
  D_00314EC0 = func_0011BDD0(D_00314EF8, 1);
  D_00314EDC = 0;
  func_000688D0();
  *puVar1 = 2;
  puVar1[1] = 0;
  D_00314ED8 = 0;
  n = 2;
  p = (int *)(puVar1 + 0xbb);
  do {
    *p++ = 0;
  } while (--n);
  puVar1[0xbd] = 0;
  puVar4 = (undefined4 *)func_0009C7A0(iVar2, ((undefined *)&D_001D2968), 0);
  func_000A22B0(iVar2 + 100, 2, *puVar4, puVar4[1], puVar4[2], 0);
  func_000A1D10(puVar1[0xb1], 2, *puVar4, puVar4[1], puVar4[2], 0);
  func_0002D7B0(D_00307D00, 0);
  func_0005CCC0(10);
  func_000A6680(1);
  D_0031151E |= 4;
  D_00314E70 = 1;
  return;
}
