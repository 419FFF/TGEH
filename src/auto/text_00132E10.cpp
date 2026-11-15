/* 16 functions from 0x00132E10 to 0x00133DCE, found by Ghidra. */
#include "common.h"
extern "C" void __stdcall RtlEnterCriticalSection(void*);
extern "C" void __stdcall RtlLeaveCriticalSection(void*);

signed char _func_00132F90(signed char index) { extern signed char _D_001E82AC[]; return _D_001E82AC[(int)index]; }

int _func_00133430(void) { return 0; }

void _func_00133490(void *p) { extern unsigned int _D_001E82DC,_D_00331D68,_D_00331D6C,_D_00331D70; extern unsigned short _D_00331D74,_D_00331D78,_D_00331D7C,_D_00331D80; unsigned char*q=(unsigned char*)p; *(unsigned int*)(q+52)=_D_001E82DC; *(unsigned int*)(q+56)=_D_00331D68; *(unsigned int*)(q+60)=_D_00331D6C; *(unsigned int*)(q+64)=_D_00331D70; *(unsigned short*)(q+42)=_D_00331D74; *(unsigned short*)(q+44)=_D_00331D78; *(unsigned short*)(q+46)=_D_00331D7C; *(unsigned short*)(q+48)=_D_00331D80; }

void _func_001339F0(int a, int b, int c) { if (a != b) (void)c; }

void _func_00133AB0(unsigned char i) { extern int _D_00332380[]; extern void __stdcall _func_0014BB30(int,int); if (_D_00332380[i] != 0) { _func_0014BB30(i,0); _D_00332380[i]=0; } }

void _func_00133BB0(void *p) { extern int _D_00331DB4; extern int _D_00332380,_D_00332384,_D_00332388,_D_0033238C; extern void *_D_003326AC; extern void __stdcall RtlEnterCriticalSection(void*); extern void __stdcall RtlLeaveCriticalSection(void*); extern void __stdcall _func_0014BCE0(int,int); extern void __stdcall _func_0014BB30(int,int); extern void _func_0014E090(void*); extern void __stdcall _func_0014DF80(int); extern void _func_00116FB0(void*); int n=_D_00331DB4-1; _D_00331DB4=n; RtlEnterCriticalSection(&_D_003326AC); _D_00332380=0; _func_0014BCE0(0,0); _func_0014BB30(0,0); _D_00332384=0; _func_0014BCE0(1,0); _func_0014BB30(1,0); _D_00332388=0; _func_0014BCE0(2,0); _func_0014BB30(2,0); _D_0033238C=0; _func_0014BCE0(3,0); _func_0014BB30(3,0); _func_0014E090((char*)p+0x48); _func_0014E090((char*)p+0x20); if(*(int*)((char*)p+0x54))_func_0014DF80(*(int*)((char*)p+0x54)); RtlLeaveCriticalSection(&_D_003326AC); _func_00116FB0(p); }

int _func_00133C60(float *out,int i) { extern unsigned char _D_00331D84[]; extern int _D_00331D88[],_D_00331D8C[]; extern float _D_001D290C; int n=i*12; if(_D_00331D84[n]==0)return 0; out[0]=(float)_D_00331D88[n]; if(_D_00331D88[n]<0)out[0]+=_D_001D290C; out[1]=out[2]=out[3]=out[4]=0; out[5]=(float)_D_00331D8C[n]; if(_D_00331D8C[n]<0)out[5]+=_D_001D290C; out[6]=out[7]=out[8]=out[9]=0; out[10]=1; out[11]=out[12]=out[13]=0; out[14]=1; out[15]=0; return 1; }

