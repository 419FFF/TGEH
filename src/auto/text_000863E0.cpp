/* 11 functions from 0x000863E0 to 0x000872FC, found by Ghidra. */
#include "common.h"

void _func_00086AA0(float param_1)
{
  extern int D_002FDDD8, D_002FDDBC, D_002FDDDC;
  int *p=(int*)D_002FDDBC;
  int old=D_002FDDD8;
  D_002FDDDC=old;
  D_002FDDD8=*(int*)&param_1;
  int n=*(int*)(*(int*)((char*)p+0xf8)+0xc);
  int i=0;
  if(n>0){ int offset=0; do { float *f=(float*)(*(int*)(*(int*)((char*)p+0xf8)+0x14)+offset+4); *f=(*f+param_1)-(float)old; i++; offset+=0xc; }while(i<*(int*)(*(int*)((char*)p+0xf8)+0xc)); }
}

void _func_00086B10(void){extern int D_002FDDC0,D_002FDDBC,D_002FDDB8;int _func_000860F0(...);int _func_000863E0(...);int _func_00110370(...);int _func_00096E30(...);int local[7];D_002FDDBC=0;if(!D_002FDDC0){local[4]=0;local[3]=(int)_func_000860F0;local[1]=(int)_func_000863E0;local[2]=0;D_002FDDB8=_func_00110370(local);_func_00096E30(0);}D_002FDDC0++;}

void _func_00086E70(void)
{
  extern int _D_001D6C0C;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00086C60(...);
  int _func_00086E60(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&_D_001D6C0C, _func_00086C60);
  _func_0011D270(&_D_001D6C0C, _func_00086E60);
  _func_0011D290(&_D_001D6C0C, _func_00085E20);
  _func_0011D2B0(&_D_001D6C0C, _func_000688D0);
}

void func_00086EB0(void) {
    extern int D_001D6C0C;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6C0C);
}

void _func_000872B0(void)
{
  extern int _D_001D6C18;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00086EC0(...);
  int _func_0007FC90(...);
  int _func_00085E20(...);
  int _func_000688D0(...);
  _func_0011D000(&_D_001D6C18, _func_00086EC0);
  _func_0011D270(&_D_001D6C18, _func_0007FC90);
  _func_0011D290(&_D_001D6C18, _func_00085E20);
  _func_0011D2B0(&_D_001D6C18, _func_000688D0);
}

void func_000872F0(void) {
    extern int D_001D6C18;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6C18);
}

