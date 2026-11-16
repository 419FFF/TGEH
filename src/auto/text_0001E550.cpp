/* 6 functions from 0x0001E550 to 0x0001F512, found by Ghidra. */
#include "common.h"

void __cdecl _func_0001E7F0(int p) { extern int _D_001D31B8; extern int __cdecl _func_00115100(int,int); extern void __cdecl _func_00115170(int,int,void*); extern void __cdecl _func_00110060(int,void*); extern void __cdecl _func_0012F2E0(void*,void*); extern void __cdecl _func_00130590(void*); extern void __cdecl _func_001105E0(int,void*,int); unsigned char a[64],b[76],c[76]; int *s=*(int **)(p+0x110); if(s[0x288/4]==-1)s[0x288/4]=_func_00115100(*(int *)(s[0x264/4]+0x18),_D_001D31B8); _func_00115170(*(int *)(*(int *)(s[0x264/4]+0x18)+0x34),s[0x288/4],a); _func_00110060(*(int *)(p+0x2c),b); _func_0012F2E0(a,b); _func_00130590(a); _func_001105E0(*(int *)(p+0x2c),c,0); }

void __cdecl _func_0001E890(int p) { extern int _D_001D31B8; extern int __cdecl _func_00115100(int,int); extern void __cdecl _func_00115170(int,int,void*); extern void __cdecl _func_00110060(int,void*); extern void __cdecl _func_0012F2E0(void*,void*); extern void __cdecl _func_00130590(void*); extern void __cdecl _func_001105E0(int,void*,int); unsigned char a[64],b[76],c[76]; int *s=*(int **)(p+0x110); if(s[0x288/4]==-1)s[0x288/4]=_func_00115100(*(int *)(s[0x260/4]+0x18),_D_001D31B8); _func_00115170(*(int *)(*(int *)(s[0x260/4]+0x18)+0x34),s[0x288/4],a); _func_00110060(*(int *)(p+0x2c),b); _func_0012F2E0(a,b); _func_00130590(a); _func_001105E0(*(int *)(p+0x2c),c,0); }

#pragma optimize("y", on)
void __cdecl _func_0001F4B0(int p) { extern int _D_00307D10; extern void __cdecl _func_000487A0(int,int); extern void __cdecl _func_000A1C00(int); extern void __cdecl _func_00116FB0(int); int *s=*(int **)(p+0x110); _func_000487A0(_D_00307D10,s[0x70/4]); _func_000A1C00(s[0x268/4]); _func_000A1C00(s[0x25c/4]); _func_000A1C00(s[0x26c/4]); _func_000A1C00(s[0x260/4]); _func_000A1C00(s[0x264/4]); _func_00116FB0((int)s); }
#pragma optimize("", on)
