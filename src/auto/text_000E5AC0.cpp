/* 10 functions from 0x000E5460 to 0x000E6192, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000E5AC0(void)
{
    extern float D_001E461C, D_001D27FC, D_001D27B8, D_001D5420, D_001D27B0, D_001DC16C, D_003227CC;
    extern int D_0032515C, D_00308158, D_00307DF8;
    extern char D_001D7BE0[], D_001DC170[];
    int func_0009CBE0(char *);
    void func_000E59B0(void);
    void func_000E39C0(void);
    void func_00107C40(int, int, int);
    void func_000B6BE0(void);
    int func_00103210(char *);
    void func_00103990(int, int);
    void func_00110060(int, void *);
    void func_0007E330(void *);
    void func_000120B0(int, float, int, int);
    void func_000E45C0(int, int);
    void func_000E3C00(int, int);
    int func_001100A0(int, void *);
    void func_000E3B00(int, int);
    void func_000E5040(int, int);
    void func_000E5460(int);
    void func_000E5610(int);
    int local_58;
    int local_54[1];
    __declspec(align(16)) char local_50[48];
    char local_20[28];
    int iVar7 = func_0009CBE0(D_001D7BE0);
    int iVar4 = *(int *)(iVar7 + 0x110);
    int iVar5, h;
    float fVar6;

    local_58 = iVar7;
    func_000E59B0();
    func_000E39C0();
    iVar5 = *(int *)(iVar4 + 0x40);
    if (iVar5 != 1) {
        if (iVar5 == 2)
            *(int *)(iVar4 + 0x40) = 3;
        else if (iVar5 != 3)
            goto L_end;
        fVar6 = *(float *)(iVar4 + 0xb80) - D_001E461C * D_001D27FC;
        *(float *)(iVar4 + 0xb80) = fVar6;
        if (fVar6 < D_001D27B8) {
            *(int *)(iVar4 + 0xb80) = 0;
            *(int *)(iVar4 + 0x40) = 4;
            func_00107C40(D_0032515C, D_00308158, 0);
            func_000B6BE0();
        }
        goto L_end;
    }
    if (*(float *)(iVar4 + 0xb80) < *(float *)(iVar4 + 0xb7c))
        *(float *)(iVar4 + 0xb80) = D_001E461C * D_001D5420 + *(float *)(iVar4 + 0xb80);
    iVar5 = *(int *)(iVar4 + 0xba4);
    if (*(char *)(iVar5 + 0x175) != 0) {
        *(char *)(iVar5 + 0x174) = 0;
        fVar6 = D_001E461C + *(float *)(iVar4 + 0xba0);
        *(float *)(iVar4 + 0xba0) = fVar6;
        if (D_001D27B0 < fVar6)
            *(char *)(iVar5 + 0x175) = 0;
    }
    if (*(char *)(iVar5 + 0x174) == 0)
        goto L_after;
    h = func_00103210(D_001DC170);
    *(char *)(iVar5 + 0x174) = 0;
    switch (*(int *)(iVar4 + 0xb8c)) {
    case 3:
        *(unsigned char *)(*(int *)(iVar4 + 0xb90) + 0x20) |= 1;
        *(short *)(*(int *)(iVar4 + 0xb94) + 0x20) -= 1;
        *(int *)(iVar4 + 0xb8c) = 0;
        func_00103990(h, 0);
        *(unsigned short *)(*(int *)(iVar4 + 0xb90) + 0x20) |= 1;
        *(unsigned short *)(*(int *)(iVar4 + 0xb94) + 0x20) |= 1;
        *(unsigned short *)(*(int *)(iVar4 + 0xb98) + 0x20) |= 1;
        *(unsigned char *)(*(int *)(iVar4 + 0xb9c) + 0x20) &= 0xfe;
        *(int *)(iVar4 + 0x40) = 2;
        goto L_sw;
    case 2:
        *(unsigned short *)(*(int *)(iVar4 + 0xb94) + 0x20) |= 1;
        *(short *)(*(int *)(iVar4 + 0xb98) + 0x20) -= 1;
        *(int *)(iVar4 + 0xb8c) = 1;
        break;
    case 1:
        *(unsigned char *)(*(int *)(iVar4 + 0xb98) + 0x20) |= 1;
        *(short *)(*(int *)(iVar4 + 0xb9c) + 0x20) -= 1;
        *(int *)(iVar4 + 0xb8c) = 0;
        break;
    case 0:
        *(unsigned char *)(*(int *)(iVar4 + 0xb9c) + 0x20) |= 1;
        *(int *)(iVar4 + 0x40) = 2;
        break;
    }
    func_00103990(h, 0);
L_sw:
    func_00110060(*(int *)(iVar4 + 0xb90), local_50);
    func_0007E330(local_20);
    func_000120B0(iVar5 + 0x150, -1.0f, 0, 0);
    *(int *)(iVar4 + 0xba0) = 0;
L_after:
    iVar5 = *(int *)(iVar4 + 0xb88);
    if (iVar5 != 0 && *(int *)(iVar5 + 0xc) == 5 && iVar5 != iVar4 + 0xb08)
        *(int *)(iVar4 + 0x40) = 0;
    func_000E45C0(local_58, iVar4);
    iVar7 = local_58;
L_end:
    if (*(int *)(iVar4 + 0x40) == 1 || *(int *)(iVar4 + 0x40) == 3) {
        func_000E3C00(iVar7, iVar4);
        func_001100A0(*(int *)(**(int **)(iVar4 + 0x2c4) + 0x2c), &local_58);
        func_001100A0(*(int *)(D_00307DF8 + 0x2c), local_54);
        if (D_001DC16C < D_003227CC - *(float *)(local_58 + 0x38))
            func_000E3B00(iVar7, iVar4);
        func_000E5040(iVar7, iVar4);
    }
    func_000E5460(iVar4);
    func_000E5610(iVar4);
}
