/* 9 functions from 0x00106B00 to 0x00107718, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_00106B00(const char* s){volatile char local[0x384]; int i=0; do { local[i]=s[i]; } while(s[i++]); local[10]=0;}

void func_001073A0(void) {
    extern int D_003251FC;
    extern int D_003251D0;
    D_003251FC = 0;
    D_003251D0 = 0;
}

void func_001073F0(char *param_1, undefined4 *param_2)
{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}

void func_00107690(void) {
    int func_00029B60(...);
    func_00029B60();
}

int _func_00107700(int a,int b){extern int D_003251D0;return *(int*)(D_003251D0+0x24+(b+a*12)*4);}

