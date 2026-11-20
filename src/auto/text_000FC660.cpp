
/* 47 functions from 0x000FC660 to 0x000FD5F2, found by Ghidra. */
#include "common.h"

// _func_000FC880 - simple function returning 1 after calling another
s32 _func_000FC880(void) {
    s32 func_000493C0(...);
    func_000493C0();
    return 1;
}

// _func_000FD040 - complex pointer dereference with conditions
s32 _func_000FD040(s32 param_1, s32 *param_2) {
    extern u16 D_003281F0;
    extern u16 D_003281E4;
    s32 func_0011DEF0(...);
    
    if (*(u8 *)(*(s32 *)(*param_2 + 0x2c) + 0x22) == D_003281F0) {
        u16 *puVar1 = *(u16 **)(*(s32 *)(*param_2 + 0x2c) + 0x158);
        if (*puVar1 == D_003281E4) {
            func_0011DEF0(puVar1);
            return 1;
        } else {
            puVar1[0x26] = 0;
        }
    }
    return 1;
}

// _func_000FD080 - similar to FD040 but different conditions and helper call
s32 _func_000FD080(s32 param_1, s32 *param_2) {
    extern u16 D_003281F0;
    extern u16 D_003281E4;
    s32 func_0011DED0(...);
    
    if (*(u8 *)(*(s32 *)(*param_2 + 0x2c) + 0x22) == D_003281F0) {
        u16 *puVar1 = *(u16 **)(*(s32 *)(*param_2 + 0x2c) + 0x158);
        if (*puVar1 == D_003281E4) {
            func_0011DED0(puVar1);
            return 1;
        } else {
            puVar1[0x26] = 1;
        }
    }
    return 1;
}

// _func_000FD140 - calls func_0002D030(D_00307DF8) then func_0007CED0(), returns 1
s32 _func_000FD140(void) {
    extern u16 D_00307DF8;
    s32 func_0002D030(...);
    s32 func_0007CED0(...);
    func_0002D030(D_00307DF8);
    func_0007CED0();
    return 1;
}

// _func_000FD160 - calls func_0007CF70(), returns 1
s32 _func_000FD160(void) {
    s32 func_0007CF70(...);
    func_0007CF70();
    return 1;
}

// _func_000FD170 - conditional pointer traversal based on D_003080AC
s32 _func_000FD170(int param_1, undefined4 *param_2) {
    s32 func_000ECF20(...);
    extern u16 D_003080AC;
    if (D_003080AC != 1) {
        char cVar1;
        do {
            cVar1 = *param_2;
            param_2++;
        } while (cVar1 != '\0');
    } else {
        char cVar1;
        do {
            cVar1 = *param_2;
            param_2++;
        } while (cVar1 != '\0');
    }
    return 1;
}

// _func_000FD1B0 - complex function with pointer arithmetic and multiple calls
s32 _func_000FD1B0(unsigned int param_1, undefined4 *param_2) {
    s32 func_001060A0(...);
    s32 func_00012D60(...);
    int iVar1 = *(int *)param_2;
    int *out = (int *)(*(undefined4 *)(param_2 + 0x130));
    out[0] = func_001060A0(*(undefined4 *)(param_2 + 0x40));
    out[1] = *(undefined4 *)param_2[5];
    func_00012D60(*param_2, 0x27);
    return 1;
}

    


extern undefined4 D_001D27B8;
extern undefined4 D_001D290C;

