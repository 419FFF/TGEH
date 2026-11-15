/* 4 functions from 0x0005A040 to 0x0005A785, found by Ghidra. */
#include "common.h"

void func_0005A6F0(void)
{
 int func_000B0E70(...); int func_0009A0D0(...);
 extern int D_002EEBE8; extern int D_002EEBC0; extern int D_001E4620; extern int D_002EEBC4; extern int D_002EEBC8;
 int iVar1;
 if(D_002EEBE8==1) { iVar1=func_000B0E70(); if(iVar1==-1) { if(D_002EEBC0!=0) func_0009A0D0(5); D_001E4620=10; } else { D_002EEBC4=16; func_0009A0D0(6); D_002EEBC8=0; } }
 if((unsigned int)D_002EEBE8 > 0) D_002EEBE8--;
}

void func_0005A750(void) {
    extern int D_002EEBE8;
    extern int D_002EEBC0;
    D_002EEBE8 = 2;
    D_002EEBC0 = 0;
}

void func_0005A770(void)
{
 extern int D_002EEBE8;
 extern int D_002EEBC0;
 D_002EEBE8=2;
 D_002EEBC0=1;
}

