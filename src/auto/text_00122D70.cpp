/* 10 functions from 0x00122D70 to 0x001238D5, found by Ghidra. */
#include "common.h"

void func_00123170(int a0, int a1, int a2) {
    extern int D_001E7D50;
    extern int D_001E7D54;
    extern int D_001E7D58;
    D_001E7D50 = a0;
    D_001E7D54 = a1;
    D_001E7D58 = a2;
}

extern int D_00325314;
void func_00123480(int,int);
void func_00123480(int p,int flag){int idx;int x;int child;idx=*(unsigned char*)(p+0x22);x=*(int*)((char*)&D_00325314+idx*0x1c);if(x){if(flag)*(unsigned char*)(p+0x20)|=0x80;else *(unsigned char*)(p+0x20)&=0x7f;}child=*(int*)(p+0x28);while(child){func_00123480(*(int*)child,flag);child=*(int*)(child+0xc);}}

void func_001234D0(int p,void* arg){int func_0011BDD0(...);int func_001364D0(...);int func_00132D50(...);int func_00133860(...);int h=func_0011BDD0(*(int*)(p+0xe0),0);if(!h)return;if(*(short*)(h+6)==0){(*(short*)(*(int*)(p+0xe0)+0x2a))--;return;}func_001364D0((int)arg);func_00132D50(*(int*)(p+0xe4),*(int*)(p+0xe8));for(int i=0;i<(unsigned short)*(short*)(h+6);i++)func_00133860(*(int*)(*(int*)(h+8)+0x2c+i*0x30),0);func_00132D50(0,0);(*(short*)(*(int*)(p+0xe0)+0x2a))--;}

int _func_0011FED0(...);
int _func_0012F730(...);
float _func_0012E9D0(...);
float _func_0012EE40(...);
int _func_00123760(unsigned char *p, int *out, unsigned int n, int a, int b, float r)
{
    __declspec(align(16)) float v[4];
    float m[16];
    if (*(unsigned short *)(p + 0x20) & 0x201) return n;
    if (*(unsigned short *)(p + 0x20) & 0x100) {
        _func_0011FED0(p, m);
        _func_0012F730(v, p, m);
        float d = _func_0012E9D0(p + 0x10);
        if (_func_0012EE40(a, b, v) < r * r + d && n < 0x100) {
            out[n] = (int)p;
            n++;
        }
    }
    for (unsigned char *q = *(unsigned char **)(p + 0x28); q; q = *(unsigned char **)(q + 0xc)) {
        if (!(q[6] & 0x38))
            n = _func_00123760(*(unsigned char **)q, out, n, a, b, r);
    }
    return n;
}

