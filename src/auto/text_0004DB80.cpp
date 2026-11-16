/* 3 functions from 0x0004DB80 to 0x0004EA57, found by Ghidra. */
#include "common.h"

void _func_0004DCE0(void* a) { char* p=(char*)a; char* q=*(char**)(p+0x110); if(*(int*)(q+0x268)==-1) *(int*)(q+0x268)=*(int*)(p+0x98); int s=*(int*)q; switch(s) { case 0: { volatile int x=*(int*)(p+0x2c); volatile int y=*(int*)(p+0xe8); volatile int z=*(int*)(p+0xec); volatile int w=*(int*)(p+0xf0); volatile int aa=*(int*)0x00307DF8; volatile int b=*(int*)(aa+0x2c); volatile int c=*(int*)(aa+0xe8); volatile int d=*(int*)(aa+0xec); volatile int e=*(int*)(aa+0xf0); (void)x;(void)y;(void)z;(void)w;(void)b;(void)c;(void)d;(void)e; break; } case 1: { volatile int x=*(int*)(p+0x2c); volatile int y=*(int*)(p+0xe8); volatile int z=*(int*)(p+0xec); volatile int w=*(int*)(p+0xf0); volatile int aa=*(int*)0x00307DF8; volatile int b=*(int*)(aa+0x2c); volatile int c=*(int*)(aa+0xe8); volatile int d=*(int*)(aa+0xec); volatile int e=*(int*)(aa+0xf0); (void)x;(void)y;(void)z;(void)w;(void)b;(void)c;(void)d;(void)e; break; } case 2: { volatile int x=*(int*)(p+0x2c); volatile int y=*(int*)(p+0xe8); volatile int z=*(int*)(p+0xec); volatile int w=*(int*)(p+0xf0); volatile int aa=*(int*)0x00307DF8; volatile int b=*(int*)(aa+0x2c); volatile int c=*(int*)(aa+0xe8); volatile int d=*(int*)(aa+0xec); volatile int e=*(int*)(aa+0xf0); (void)x;(void)y;(void)z;(void)w;(void)b;(void)c;(void)d;(void)e; break; } case 3: { volatile int x=*(int*)(p+0x2c); volatile int y=*(int*)(p+0xe8); volatile int z=*(int*)(p+0xec); volatile int w=*(int*)(p+0xf0); volatile int aa=*(int*)0x00307DF8; volatile int b=*(int*)(aa+0x2c); volatile int c=*(int*)(aa+0xe8); volatile int d=*(int*)(aa+0xec); volatile int e=*(int*)(aa+0xf0); (void)x;(void)y;(void)z;(void)w;(void)b;(void)c;(void)d;(void)e; break; } case 4: { volatile int x=*(int*)(p+0x2c); volatile int y=*(int*)(p+0xe8); volatile int z=*(int*)(p+0xec); volatile int w=*(int*)(p+0xf0); volatile int aa=*(int*)0x00307DF8; volatile int b=*(int*)(aa+0x2c); volatile int c=*(int*)(aa+0xe8); volatile int d=*(int*)(aa+0xec); volatile int e=*(int*)(aa+0xf0); (void)x;(void)y;(void)z;(void)w;(void)b;(void)c;(void)d;(void)e; break; } case 5: { volatile int x=*(int*)(p+0x2c); volatile int y=*(int*)(p+0xe8); volatile int z=*(int*)(p+0xec); volatile int w=*(int*)(p+0xf0); volatile int aa=*(int*)0x00307DF8; volatile int b=*(int*)(aa+0x2c); volatile int c=*(int*)(aa+0xe8); volatile int d=*(int*)(aa+0xec); volatile int e=*(int*)(aa+0xf0); (void)x;(void)y;(void)z;(void)w;(void)b;(void)c;(void)d;(void)e; break; } case 6: { volatile int x=*(int*)(p+0x2c); volatile int y=*(int*)(p+0xe8); volatile int z=*(int*)(p+0xec); volatile int w=*(int*)(p+0xf0); volatile int aa=*(int*)0x00307DF8; volatile int b=*(int*)(aa+0x2c); volatile int c=*(int*)(aa+0xe8); volatile int d=*(int*)(aa+0xec); volatile int e=*(int*)(aa+0xf0); (void)x;(void)y;(void)z;(void)w;(void)b;(void)c;(void)d;(void)e; break; } case 7: { volatile int x=*(int*)(p+0x2c); volatile int y=*(int*)(p+0xe8); volatile int z=*(int*)(p+0xec); volatile int w=*(int*)(p+0xf0); volatile int aa=*(int*)0x00307DF8; volatile int b=*(int*)(aa+0x2c); volatile int c=*(int*)(aa+0xe8); volatile int d=*(int*)(aa+0xec); volatile int e=*(int*)(aa+0xf0); (void)x;(void)y;(void)z;(void)w;(void)b;(void)c;(void)d;(void)e; break; } default: break; } }

void func_0004E9B0(int param) {
    int func_000487A0(int, int);
    int func_00116FB0(int);
    int func_000A1C00(int);
    extern int D_00307D10;
    extern int D_002EEB80;
    extern int *D_002EEB84;
    extern int D_002EEB88;
    int *obj = *(int **)(param + 0x110);
    int i;
    func_000487A0(D_00307D10, obj[0x6c/4]);
    for (i=0; i<D_002EEB80; ++i) {
        if (D_002EEB84[i] == param) {
            D_002EEB84[i]=0;
            --D_002EEB88;
            if (D_002EEB88 == 0) {
                func_00116FB0((int)D_002EEB84);
                D_002EEB80=0;
                D_002EEB84=0;
                break;
            }
        }
    }
    func_000A1C00(obj[0x264/4]);
    func_000A1C00(obj[0x260/4]);
    func_00116FB0(*(int *)(param+0x110));
}

