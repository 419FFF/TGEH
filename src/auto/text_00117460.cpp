/* 6 functions from 0x00117460 to 0x0011823B, found by Ghidra. */
#include "common.h"

void _func_00117460(unsigned int *p) {
  void _func_00116FB0(void *);
  unsigned int i, j, k;
  for (i=0; i<p[0]; i++) {
    unsigned int off=i*0xb8;
    _func_00116FB0(*(void **)(*(char **)((char *)p[4]+off)+0x38));
    { void *x=*(void **)(*(char **)((char *)p[4]+off)+16); if(x) _func_00116FB0(x); }
    { void *x=*(void **)(*(char **)((char *)p[4]+off)+20); if(x) _func_00116FB0(x); }
    { void *x=*(void **)(*(char **)((char *)p[4]+off)+24); if(x) _func_00116FB0(x); }
    { void *x=*(void **)(*(char **)((char *)p[4]+off)+28); if(x) _func_00116FB0(x); }
    { void *x=*(void **)(*(char **)((char *)p[4]+off)+32); if(x) _func_00116FB0(x); }
    { void *x=*(void **)(*(char **)((char *)p[4]+off)+36); if(x) _func_00116FB0(x); }
    { void *x=*(void **)(*(char **)((char *)p[4]+off)+40); if(x) _func_00116FB0(x); }
    { void *x=*(void **)(*(char **)((char *)p[4]+off)+48); if(x) _func_00116FB0(x); }
    for(j=0;j<*(unsigned int *)((char *)p[4]+off+0xa8);j++) {
      for(k=0;k<4;k++) {
        void *x=*(void **)(*(char **)((char *)p[4]+off+0xb0)+0x54+j*0x64+k*4);
        if(x) _func_00116FB0(x);
      }
    }
    if (*(void **)(*(char **)((char *)p[4]+off)+0x48)) {
      for(j=0;j<*(unsigned int *)(*(char **)((char *)p[4]+off)+0x44);j++)
        _func_00116FB0(*(void **)(*(char **)(*(char **)((char *)p[4]+off)+0x48)+j*4));
      _func_00116FB0(*(void **)(*(char **)((char *)p[4]+off)+0x48));
    }
    _func_00116FB0(*(void **)((char *)p[4]+off));
    _func_00116FB0(*(void **)((char *)p[4]+off+0xb0));
  }
  _func_00116FB0((void *)p[4]);
  _func_00116FB0(p);
}

unsigned int _func_00117650(unsigned char *p) { unsigned int _func_00129C50(...); int _func_0011B4F0(...); void _func_00129C70(...); extern unsigned int _D_003268A8,_D_003268BC,_D_00326890,_D_00326898[4]; extern float _D_001D27B8; extern char _D_001DF26C,_D_001DF260,_D_001DF254; unsigned int obj=_func_00129C50(*(unsigned int*)(p+4)); unsigned int i=0; for(;i<4;i++){ int r=_func_0011B4F0(p+8+i*32,&_D_001DF26C); unsigned int x; if(r==0)x=_D_003268A8; else {r=_func_0011B4F0(p+8+i*32,&_D_001DF260); if(!r)x=_D_003268BC; else {r=_func_0011B4F0(p+8+i*32,&_D_001DF254); if(!r)x=_D_00326890; else {float *f=(float*)(p+0x88+i*8); if(f[-1]==_D_001D27B8 && f[0]==_D_001D27B8)continue; x=_D_00326898[i];}}} _func_00129C70(obj,i,x);} return obj;}
