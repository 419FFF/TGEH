/* 4 functions from 0x00015F30 to 0x00016B6B, found by Ghidra. */
#include "common.h"

#pragma optimize("y", on)
void _func_00016940(int param_1) { extern int D_00307D10; int _func_000487A0(int,int); int _func_00116FB0(int); int object=*(int *)(param_1+0x110); _func_000487A0(D_00307D10,*(int *)(object+0x3c)); _func_00116FB0(object); }

#pragma optimize("y", on)
void _func_00016970(int *param_1) { extern char D_001D2B20,D_001D2B18,D_001D2B10,D_001D2B08; int _func_00110300(int,const char *,int); int *self=param_1; int object=self[0]; self[10]=_func_00110300(*(int *)(object+0x2c),&D_001D2B20,0x18); self[11]=_func_00110300(*(int *)(object+0x2c),&D_001D2B18,0x18); self[12]=_func_00110300(*(int *)(object+0x2c),&D_001D2B10,0x18); self[13]=_func_00110300(*(int *)(object+0x2c),&D_001D2B08,0x18); }

