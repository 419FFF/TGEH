/* 4 functions from 0x0005DE30 to 0x0005EB11, found by Ghidra. */
#include "common.h"

struct V3 { float x, y, z; };
extern V3 D_002EEE58, D_002EEE94, D_002EEF08;
extern float D_002EEECC, D_002EEEDC, D_001D27B8, D_001D2E24, D_001D29E0;
void func_0012E760(V3*);
char func_00060700();
char func_0005E1C0();
double func_0012E9D0(void*);
void func_0012E5F0(V3*, V3*, V3*);
char func_00060C20(V3*, V3*, V3*);
void func_0012E650(V3*, V3*);
float func_0012E940(V3*);
void func_0012ECA0(V3*, float);

#pragma optimize("y", on)
bool func_0005E4B0()
{
    V3 v;
    func_0012E760(&D_002EEE58);
    if (!func_00060700() || !func_0005E1C0())
        return false;
    if (D_001D27B8 == func_0012E9D0(&D_002EEECC) && D_001D27B8 == func_0012E9D0(&D_002EEE58))
        return true;
    func_0012E5F0(&v, &D_002EEF08, &D_002EEE58);
    if (func_00060C20(&D_002EEF08, &v, 0)) {
        if (func_00060C20(&D_002EEE94, &v, &v)) {
            func_0012E650(&v, &D_002EEE94);
            float l = func_0012E940(&v);
            func_0012ECA0(&v, (l - D_001D2E24) / l);
            func_0012E5F0(&v, &D_002EEE94, &v);
            if (!func_00060C20(&D_002EEF08, &v, 0))
                D_002EEF08 = v;
        }
        D_002EEEDC = D_002EEEDC - D_001D29E0;
        if (D_002EEEDC < D_001D27B8) {
            D_002EEEDC = 0.0f;
            func_0012E760(&D_002EEE58);
            return true;
        }
    } else {
        D_002EEF08 = v;
    }
    func_0012E760(&D_002EEE58);
    return true;
}
