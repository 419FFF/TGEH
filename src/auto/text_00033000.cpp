/* 3 functions from 0x00033000 to 0x00033EA6, found by Ghidra. */
#include "common.h"

extern int D_00307D0C;
extern float D_001D29E0;
extern int D_003080F8;
void _func_001100A0(int, void*);
float _func_0012E870(void*, void*);
float _func_0012E8C0(void*, void*);
void _func_00033000(void* a, char* b) {
 int tmp[4];
 _func_001100A0(D_00307D0C, tmp);
 if (_func_0012E870(b + 0x3f0, (char*)tmp + 0x30) != D_001D29E0) {
   if (_func_0012E8C0(b + 0x3e0, (char*)tmp + 0x20) != 0.0f) {
     if (!D_003080F8) { *(int*)b = 2; return; }
   }
 }
}

void func_00033D50(int p1,int *p2){extern unsigned char D_00311512,D_0031151C;extern float _D_001D3B18,_D_001D3AE0,_D_001D27B0,_D_001D2B64;int __ftol2(float);int _func_000A4010(...);int _func_000120B0(...);*(unsigned char*)((char*)p2+0x330)=0;if((D_00311512&2)==0){float x=*(float*)((char*)p2+0x9c);x-=_D_001D3B18;x*=_D_001D3AE0;x=_D_001D27B0-x;x*=_D_001D2B64;if(x<_D_001D27B0){int v=__ftol2(_D_001D27B0);_func_000A4010((unsigned char)D_0031151C-v);if(D_0031151C==0)goto cleanup;}}_func_000120B0(p1+0x150,0x3f800000,1,1);cleanup:*(int*)((char*)p2+0xa0)=0;*(int*)((char*)p2+0x9c)=0;*(int*)((char*)p2+0x98)=0;}

void func_00033E10(int*p1,int*p2){extern int D_003080FC;extern unsigned char D_0031151C;extern int D_001D4120;int _func_000A2370(...);int _func_000824C0(...);int _func_00044E50(...);int _func_0009C7A0(...);int _func_000A22B0(...);int ok=0;D_003080FC=*(int*)((char*)p1+0x320);if(_func_000A2370((int)p2+0x64)==0)ok=1;switch(*(unsigned char*)((char*)p1+0x330)){case 0:_func_000824C0((int)p2);if(ok){if(D_0031151C==0)_func_00044E50();int*v=(int*)_func_0009C7A0((int)p2,&D_001D4120,0);_func_000A22B0((int)p2+0x64,1,v[0],v[1],v[2],0);*(unsigned char*)((char*)p1+0x330)=1;}break;case 1:if(ok)*p1=2;break;}}

