/* 17 functions from 0x00060AD0 to 0x00061804, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00060EC0(void) {
    extern int D_002EEFF0;
    int func_00110760(...);
    func_00110760(D_002EEFF0);
}

void func_00060F60(void)
{
  int func_00101360(...);
  int func_000A7B80(...);
  int func_00060ED0(...);
  func_00101360();
  func_000A7B80();
  func_00060ED0();
  return;
}

void func_00061540(int a0, int a1) {
    extern int D_002EF00C;
    extern int D_00307DB4;
    extern int D_002EF008;
    extern int D_002EF010;
    extern int D_002EF014;
    D_002EF008 = D_002EF00C;
    D_002EF00C = a0;
    D_002EF010 = D_00307DB4;
    D_002EF014 = a1;
}

void func_00061600(void) {
    extern int D_002EEF80;
    D_002EEF80 = 0;
}
