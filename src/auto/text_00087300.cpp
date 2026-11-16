/* 12 functions from 0x00087300 to 0x00088219, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_00087520(void)
{
  extern int _D_001D6C20;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00087300(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&_D_001D6C20, _func_00087300);
  _func_0011D270(&_D_001D6C20, _func_00086E60);
  _func_0011D290(&_D_001D6C20, _func_00085E20);
  _func_0011D2B0(&_D_001D6C20, _func_000688D0);
}

void func_00087560(void) {
    extern int D_001D6C20;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6C20);
}

extern void func_00087AF0(void);
extern void func_00079D10(void);
extern void func_00087D00(void);
extern void func_00092810(void);
extern void func_00083D60(void);
extern void func_0011D000(void (*)(void), int *);
extern void func_0011D270(void (*)(void), int *);
extern void func_0011D290(void (*)(void), int *);
extern void func_0011D2B0(void (*)(void), int *);
extern void func_0011D2D0(void (*)(void), int *);
extern void func_0011D2F0(void (*)(void), int *);
extern float D_001D6160, D_001D6C2C, D_001D27EC, D_001D2A1C;
extern unsigned char D_002FDE6C[12][8];
extern float D_002FDE68[12][2];
extern unsigned char D_002FDE6D[12][8];
extern float func_00131760(void);
extern unsigned char func_0013E3F4(void);
void func_00087570(void) { for(int i=0;i<12;i++){ float a=func_00131760(); a*=D_001D6160; unsigned char b=func_0013E3F4(); D_002FDE6C[i][0]=b; D_002FDE68[i][0]=i*D_001D6C2C-D_001D27EC; D_002FDE68[i][0]*=D_001D2A1C; float c=func_00131760(); D_002FDE6D[i][0]=(c>=D_001D27EC)?1:0xFF; } }

void func_00087D00(int param_1)
{
  int func_0011E3D0(...);
  int func_000D2D40(...);
  int func_0011CFC0(...);
  int iVar1;
  
  iVar1 = func_0011E3D0(param_1);
  iVar1 = func_000D2D40(*(undefined4 *)(iVar1 + 0x2c));
  if (iVar1 == 2) {
    func_0011CFC0(param_1 + 0x54,0x44160000);
    return;
  }
  func_0011CFC0(param_1 + 0x54,0);
  return;
}

void func_00087D40(void) {
extern int D_001D6C5C;
extern void func_00087AF0(void),func_00079D10(void),func_00087D00(void),func_00092810(void),func_00083D60(void);
extern void func_0011D000(...),func_0011D270(...),func_0011D290(...),func_0011D2B0(...),func_0011D2D0(...),func_0011D2F0(...);
func_0011D000(&D_001D6C5C,func_00087AF0);
func_0011D270(&D_001D6C5C,0x87cc0);
func_0011D290(&D_001D6C5C,func_00079D10);
func_0011D2B0(&D_001D6C5C,func_00087D00);
func_0011D2D0(&D_001D6C5C,func_00092810);
func_0011D2F0(&D_001D6C5C,func_00083D60);
}

void func_00087DA0(void) {
    extern int D_001D6C5C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6C5C);
}

void func_00087DB0(void)
{
  int func_00088710(...);
  int func_00094C00(...);
  int func_000886F0(...);
  int func_00079270(...);
  int func_00081220(...);
  int func_0007F880(...);
  int func_000816E0(...);
  int func_00079950(...);
  int func_00079B10(...);
  int func_000858B0(...);
  int func_00089D00(...);
  int func_000872B0(...);
  int func_00087520(...);
  int func_00096B60(...);
  int func_0007A040(...);
  int func_00096DE0(...);
  int func_00092B40(...);
  int func_00093040(...);
  int func_000835E0(...);
  int func_00094330(...);
  int func_00093940(...);
  int func_00094740(...);
  int func_000818B0(...);
  int func_00080130(...);
  int func_00081490(...);
  int func_0007B710(...);
  int func_0007B8C0(...);
  int func_0007FD10(...);
  int func_00089FB0(...);
  int func_000955D0(...);
  int func_0008A9B0(...);
  int func_0008AC70(...);
  int func_0008A560(...);
  int func_0007A2E0(...);
  int func_0008AEF0(...);
  int func_0008B280(...);
  int func_00079DB0(...);
  int func_00079520(...);
  int func_0007CE50(...);
  int func_0007C990(...);
  int func_0007C710(...);
  int func_00094BB0(...);
  int func_00094790(...);
  int func_0007DFF0(...);
  int func_00083D70(...);
  int func_00087D40(...);
  int func_00086E70(...);
  int func_00078ED0(...);
  int func_00093430(...);
  int func_0007AA40(...);
  int func_0008B890(...);
  int func_0008BA90(...);
  int func_0008B5F0(...);
  int func_00078760(...);
  int func_000789C0(...);
  int func_0007CC00(...);
  int func_00088EC0(...);
  int func_00082B20(...);
  int func_00085310(...);
  int func_000908F0(...);
  int func_00092500(...);
  int func_0007B110(...);
  int func_00082340(...);
  int func_00085E30(...);
  int func_00090ED0(...);
  int func_00097740(...);
  int func_00086B10(...);
  int func_00093510(...);
  int func_00091330(...);
  int func_00080860(...);
  int func_0008F760(...);
  int func_0007DCE0(...);
  int func_000844E0(...);
  int func_00083260(...);
  int func_0007ECF0(...);
  int func_00089220(...);
  int func_0007ED50(...);
  int func_0008A000(...);
  int func_0008F2F0(...);
  int func_00083670(...);
  int func_000990F0(...);
  int func_00081900(...);
  int func_0007B900(...);
  int func_00080A10(...);
  int func_00095620(...);
  int func_00094C20(...);
  int func_000942D0(...);
  int func_0007E060(...);
  int func_0007A350(...);
  int func_0008BAE0(...);
  int func_00078A10(...);
  int func_00082B80(...);
  int func_00085370(...);
  int func_00090950(...);
  int func_000920F0(...);
  int func_0007B1D0(...);
  int func_000823A0(...);
  int func_00085E80(...);
  int func_00090F20(...);
  int func_00091CF0(...);
  int func_0007F070(...);
  int func_0007BC40(...);
  int func_0008D4A0(...);
  int func_0008DD30(...);
  extern undefined4 D_00307C04;
  extern undefined4 D_00307C08;
  int func_00096E30(...);
  int func_000957A0(...);
  int func_0008C180(...);
  int func_0008FB40(...);
  int func_000875E0(...);
  func_00088710();
  func_00094C00();
  func_000886F0();
  func_00079270();
  func_00081220();
  func_0007F880();
  func_000816E0();
  func_00079950();
  func_00079B10();
  func_000858B0();
  func_00089D00();
  func_000872B0();
  func_00087520();
  func_00096B60();
  func_0007A040();
  func_00096DE0();
  func_00092B40();
  func_00093040();
  func_000835E0();
  func_00094330();
  func_00093940();
  func_00094740();
  func_000818B0();
  func_00080130();
  func_00081490();
  func_0007B710();
  func_0007B8C0();
  func_0007FD10();
  func_00089FB0();
  func_000955D0();
  func_0008A9B0();
  func_0008AC70();
  func_0008A560();
  func_0007A2E0();
  func_0008AEF0();
  func_0008B280();
  func_00079DB0();
  func_00079520();
  func_0007CE50();
  func_0007C990();
  func_0007C710();
  func_00094BB0();
  func_00094790();
  func_0007DFF0();
  func_00083D70();
  func_00087D40();
  func_00086E70();
  func_00078ED0();
  func_00093430();
  func_0007AA40();
  func_0008B890();
  func_0008BA90();
  func_0008B5F0();
  func_00078760();
  func_000789C0();
  func_0007CC00();
  func_00088EC0();
  func_00082B20();
  func_00085310();
  func_000908F0();
  func_00092500();
  func_0007B110();
  func_00082340();
  func_00085E30();
  func_00090ED0();
  func_00097740();
  func_00086B10();
  func_00093510();
  func_00091330();
  func_00080860();
  func_0008F760();
  func_0007DCE0();
  func_000844E0();
  func_00083260();
  func_0007ECF0();
  func_00089220();
  func_0007ED50();
  func_0008A000();
  func_0008F2F0();
  func_00083670();
  func_000990F0();
  func_00081900();
  func_0007B900();
  func_00080A10();
  func_00095620();
  func_00094C20();
  func_000942D0();
  func_0007E060();
  func_0007A350();
  func_0008BAE0();
  func_00078A10();
  func_00082B80();
  func_00085370();
  func_00090950();
  func_000920F0();
  func_0007B1D0();
  func_000823A0();
  func_00085E80();
  func_00090F20();
  func_00091CF0();
  func_0007F070();
  func_0007BC40();
  func_0008D4A0();
  func_0008DD30();
  D_00307C04 = 0;
  D_00307C08 = 0;
  func_00096E30(&func_000957A0);
  func_0008C180();
  func_0008FB40();
  func_000875E0();
  return;
}

