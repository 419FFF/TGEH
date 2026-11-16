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

