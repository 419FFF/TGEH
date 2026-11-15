/* 16 functions from 0x00132E10 to 0x00133DCE, found by Ghidra. */
#include "common.h"

signed char _func_00132F90(signed char index) { extern signed char _D_001E82AC[]; return _D_001E82AC[(int)index]; }

int _func_00133430(void) { return 0; }

void _func_00133490(void *p) {
 extern unsigned int _D_001E82DC, _D_00331D68, _D_00331D6C, _D_00331D70;
 extern unsigned short _D_00331D74, _D_00331D78, _D_00331D7C, _D_00331D80;
 unsigned char *q=(unsigned char*)p;
 *(unsigned int*)(q+0x34)=_D_001E82DC; *(unsigned int*)(q+0x38)=_D_00331D68;
 *(unsigned int*)(q+0x3c)=_D_00331D6C; *(unsigned int*)(q+0x40)=_D_00331D70;
 *(unsigned short*)(q+0x2a)=_D_00331D74; *(unsigned short*)(q+0x2c)=_D_00331D78;
 *(unsigned short*)(q+0x2e)=_D_00331D7C; *(unsigned short*)(q+0x30)=_D_00331D80;
}

void _func_001339F0(int a, int b, int c) { (void)a; (void)b; (void)c; }

