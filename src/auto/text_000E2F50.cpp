/* 15 functions from 0x000E2F50 to 0x000E3EBC, found by Ghidra. */
#include "common.h"

void func_000E30B0(int param_1, unsigned int param_2)
{
    int func_00110330(...);
    unsigned int *node = *(unsigned int **)(param_1 + 0x28);
    while (node != 0) {
        func_000E30B0(*node, param_2);
        node = (unsigned int *)node[3];
    }
    func_00110330(param_1, param_2);
}

void func_000E3430(void)
{
    extern int D_00322498;
    extern float D_003224A0[];
    extern float D_001D288C, D_001E461C, D_001D27B8;
    extern int D_0032249C[];
    int i;
    for (i = 0; i < D_00322498; ++i) {
        float v = D_003224A0[i * 2];
        if (v > D_001D288C) {
            v -= D_001E461C;
            D_003224A0[i * 2] = v;
            if (v < D_001D27B8) {
                D_003224A0[i * 2] = -1.0f;
                *(unsigned char *)(D_0032249C[i * 2] + 0x14) = 1;
            }
        }
    }
}

int func_000E37C0(unsigned int param_1)
{
 int func_0009C6A0(...); int func_0009D3E0(...); int func_00110330(...); int func_00131760(...); int func_0009D280(...);
 extern char D_001DC054,D_001DC04C,D_001DC044,D_001DC03C; extern float D_003234B8,D_001D2C00;
 int a[4]; a[0]=func_0009C6A0(param_1,&D_001DC054); a[1]=func_0009C6A0(param_1,&D_001DC04C); a[2]=func_0009C6A0(param_1,&D_001DC044); a[3]=func_0009C6A0(param_1,&D_001DC03C);
 int result=0, bit=1; int i=0;
 do { int p=a[i]; if(p) { func_0009D3E0(p); func_00110330(*(int *)(p+0x2c),0); if((float)func_00131760() < D_003234B8*D_001D2C00) { result+=bit; func_00110330(*(int *)(p+0x2c),1); func_0009D280(p); } } bit+=bit; ++i; } while(i!=4);
 return result;
}

int func_000E3BB0(int param_1,int param_2)
{
 int i=0; int *p=(int *)(param_1+0x2f0); int result;
 while(i!=0x13) { int q=*p;
   if(param_2==q) { result=i*0x74+param_1+0x2e0; return result; }
   if(param_2!=0 && **(int **)(*(int *)(param_2+0x2c)+0x2c)==*(int *)(q+0x2c)) { result=i*0x74+param_1+0x2e0; return result; }
   ++i; p=(int *)((char *)p+0x74);
 }
 return 0;
}
struct S_D_000E34A0_arg0 {
    int s32_aa0;
    void *ptr_aa4;
    float f32_ab0;
    int s32_ac0;
    void *ptr_b18;
    float f32_b24;
    float f32_b7c;
    int s32_b80;
};
