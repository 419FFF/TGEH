/* 20 functions from 0x00138E80 to 0x00139D80, found by Ghidra. */
#include "common.h"

void func_001392D0(void) {
    extern int D_00332ACC;
    int __stdcall func_00109C1F(int);
    func_00109C1F(D_00332ACC);
}

void _func_00139370(void *p) {
extern int _D_00332AD8,_D_00332ACC;
extern void __stdcall _D_001AFA1B(void*,int);
void _func_0013AF50(int);
int __stdcall _func_00109C1F(int);
void _func_0013AF70(int);
if(!p)return;
_func_0013AF50(_D_00332AD8);
int s=*(int*)((char*)p+0x90);
if(s==4||s==3||s==1){void*q=*(void**)((char*)p+0x9c);if(q)_D_001AFA1B(q,1);*(int*)((char*)p+0x90)=5;_func_00109C1F(_D_00332ACC);}
_func_0013AF70(_D_00332AD8);
}

float _func_00139440(void *p) {
    extern volatile float _D_001D27B8;
    if (p == 0) return _D_001D27B8;
    return *(float *)((char *)p + 0xbc);
}

