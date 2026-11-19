/* 11 functions from 0x00061810 to 0x000621F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00061E60(void) {
    extern int D_002EF454;
    extern int D_002EF444;
    extern int D_002EF484;
    extern int D_002EF498;
    extern int D_002EF424;
    extern int D_002EF434;
    int func_00061CA0(...);
    func_00061CA0((int)&D_002EF434, (int)&D_002EF424, (int)&D_002EF498, (int)&D_002EF484, (int)&D_002EF444, (int)&D_002EF454);
}

void _func_00061E90(void){extern int D_00307DF8;unsigned char _func_00061B20(...);int _func_0005CCC0(...);switch(**(int**)(D_00307DF8+0x110)){case 2:case 3:case 16:case 17:case 18:case 19:if(_func_00061B20())_func_0005CCC0(4);return;default:_func_0005CCC0(4);return;}}

#pragma optimize("y", on)
void _func_00061EF0(void)
{
  extern int D_00307DF8, D_00313B60;
  extern char D_001D5450, D_001D5448;
  int _func_00110060(...), _func_00115100(...), _func_00115170(...), _func_0012F250(...), _func_0009C590(...);
  int _func_00130620(...), _func_001105E0(...), _func_0005CCC0(...);
  int uVar1, iVar2;
  int a[4], b[4];
  __declspec(align(16)) int m0[16];
  int m2[16];
  int m1[16];
  int m3[16];
  _func_00110060(*(int *)(D_00307DF8 + 0x2c), m0);
  uVar1 = _func_00115100(*(int *)(D_00307DF8 + 0x98), &D_001D5450);
  _func_00115170(*(int *)(D_00307DF8 + 0x98), uVar1, m3);
  _func_0012F250(m1, m3, m0);
  iVar2 = _func_0009C590(&D_001D5448);
  _func_00110060(*(int *)(iVar2 + 0x2c), m2);
  a[0] = m1[12]; a[1] = m1[13]; a[2] = m1[14]; a[3] = 0x3f800000;
  b[0] = m2[12]; b[1] = m2[13]; b[2] = m2[14]; b[3] = 0x3f800000;
  _func_00130620(m0, a, b, 0);
  m0[12] = a[0]; m0[13] = a[1]; m0[14] = a[2];
  m0[3] = 0; m0[7] = 0; m0[11] = 0; m0[15] = 0x3f800000;
  _func_001105E0(D_00313B60, m0, 0);
  _func_0005CCC0(4);
}
#pragma optimize("", on)
void _func_00062040(void){extern float D_002EF498,D_002EF49C;extern int D_002EF4A0,D_002EF4A4,D_002EF454,D_002EF458,D_002EF45C,D_002EF460;extern int D_002EF424,D_002EF434,D_002EF444,D_002EF484;void _func_00061CA0(...);_func_00061CA0(&D_002EF484,&D_002EF444,0,&D_002EF434,&D_002EF424,0);D_002EF454=D_002EF498;D_002EF458=D_002EF49C;D_002EF498=D_002EF454;D_002EF49C=D_002EF458;D_002EF4A0=D_002EF45C;D_002EF4A4=D_002EF460;D_002EF45C=D_002EF4A0;D_002EF460=D_002EF4A4;}

void _func_000620E0(void)
{
    char _func_00061B20(...);
    int _func_0005CCC0(...);
    if (_func_00061B20()) _func_0005CCC0(1);
}

void func_00062100(void) {
    int func_0005CCC0(...);
    func_0005CCC0(20);
}

void _func_00062110(void){extern int D_002EED64,D_002EF494,D_00313B60,D_002EF474,D_002EF478,D_002EF4CC;extern float D_002EF4BC,D_00307DB4,D_001D2A14,D_002EF4C4;extern unsigned char D_002EF4C0;int _func_00110330(...),_func_0012F120(...),_func_001105E0(...),_func_00110060(...),_func_00110000(...),_func_00131610(...),_func_000B5650(...);char bytes[64];_func_00110330(*(int*)(D_002EED64+0x2c),1);_func_0012F120(bytes);_func_001105E0(D_002EF494,bytes,0);_func_00110060(D_00313B60,bytes);_func_00110000(D_00313B60);D_002EF4BC=(float)_func_00131610(*(int*)(bytes+32),*(int*)(bytes+40));_func_00110330(*(int*)(D_002EED64+0x2c),0);int done=_func_000B5650(0);D_002EF4C0=0;D_002EF4C4=D_00307DB4+D_001D2A14;D_002EF4CC=0xbf800000;D_002EF478=done==0;}

void func_000621D0(void)
{
  int func_00110330(...);
  extern undefined4 D_002EED64;
  int func_000F8FA0(...);
  func_00110330(*(undefined4 *)(D_002EED64 + 0x2c),1);
  func_000F8FA0(D_002EED64);
  return;
}

