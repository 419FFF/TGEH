/* 8 functions from 0x0002FAB0 to 0x00030A7B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

bool func_000302F0(char *a, char *b)
{
    extern char *D_003080FC;
    extern int D_002EDDE8;
    extern float D_001D35F8;
    void func_00110060(int, float *);
    void func_0012F7A0(float *, float *);
    char func_00069E60(float *, float *, int *, unsigned char *, int);
    float func_0012E7B0(float *, char *);
    float v1[8];
    float v2[8];
    __declspec(align(16)) float m[16];
    unsigned char buf[88];

    if (D_003080FC != 0) {
        char t = D_003080FC[0x13];
        if (t == 5 || t == 4 || t == 0x4f || t == 0x39)
            return false;
    }
    func_00110060(*(int *)(a + 0x2c), m);
    *(int *)&v1[0] = *(int *)(a + 0xe8);
    *(int *)&v1[1] = *(int *)(a + 0xec);
    v1[2] = *(float *)(a + 0xfc) + *(float *)(a + 0xf0);
    func_0012F7A0(v1, m);
    *(int *)&v2[0] = *(int *)&v1[0];
    v2[1] = v1[1] - *(float *)(a + 0xf8) * 1.25f;
    *(int *)&v2[2] = *(int *)&v1[2];
    if (func_00069E60(v1, v2, &D_002EDDE8, buf, 0))
        return false;
    if (func_0012E7B0(&m[12], b + 0x11c) > D_001D35F8)
        return true;
    return false;
}

void func_00030790(int param_1, int param_2)
{
  int func_0009C7A0(...);
  extern undefined D_001D3E10;
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0009C7A0(param_1,((undefined *)&D_001D3E10),0);
  func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
  *(undefined4 *)(param_2 + 0x310) = 0;
  return;
}

void func_000309B0(int a,int b,float c) { int func_00131220(...); int func_000A2310(...); extern float D_001D3E44,D_001D3E40,D_001D290C,D_001D29E0,D_001D39B4; float t=func_00131220(c*D_001D3E44); int *p=*(int**)(b+0x318); int n=*p; if(n<0)n+=(int)D_001D290C; *(float*)(b+0x334)=(*(float*)(b+0x33c)-n)/(t*D_001D3E40); if(*(float*)(b+0x358)!=0) { int q=func_000A2310(a+100); float z=t*D_001D3E40-*(float*)(b+0x358); if(z> D_001D29E0)return; *(float*)(b+0x334)=(*(float*)(b+0x33c)-q)/z; *(float*)(b+0x9c)=t-*(float*)(b+0x358)*D_001D39B4; return; } *(float*)(b+0x9c)=t; }

